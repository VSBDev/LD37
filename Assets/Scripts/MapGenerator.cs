using UnityEngine;
using System.Collections;

public class MapGenerator : MonoBehaviour {

	public int startingWidth = 5;
	public int startingHeight = 5;
	public int width = 5;
	public int height = 5;
	public GameObject gameManager;
	public GameObject[] floorPrefabs;
	public GameObject WallUp;
	public GameObject WallDown;
	public GameObject WallLeft;
	public GameObject WallRight;
	public GameObject Door;
	public GameObject Key;
	public GameObject[] Enemies;
	public GameObject[] Goodies;
	public GameObject Boss;
	public int BOSS_EVERY = 3;
	private int nextBossIn = 3;

	void Start () {

	}

	public void newGame(){
		cleanGame ();
		width = startingWidth;
		height = startingHeight;
		generateRoom ();
		GameObject starterKey = Instantiate (Key);
		starterKey.transform.position = new Vector2 (0,-1);
		nextBossIn = BOSS_EVERY;
	}

	void generateRoom(){
		int roomStyle = Random.Range (0, floorPrefabs.Length);
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				GameObject tile;

				if (y == height - 1 && x == width / 2)
					tile = Instantiate (Door);
				else if (x == 0)
					tile = Instantiate (WallLeft);
				else if (x == width - 1)
					tile = Instantiate (WallRight);
				else if (y == height - 1)
					tile = Instantiate (WallUp);
				else if (y == 0)
					tile = Instantiate (WallDown);
				else
					tile = Instantiate (floorPrefabs[roomStyle]);

				tile.transform.position = new Vector2 (x-width/2, y-height/2);
			}
		}	
	}

	void deleteRoom(){
		destroyObjectsWithTag ("RoomFloor");
		destroyObjectsWithTag ("RoomWall");
		destroyObjectsWithTag ("RoomDoor");
		destroyObjectsWithTag ("Enemy");
	}

	void cleanGame(){
		deleteRoom ();
		destroyObjectsWithTag ("Key");
		destroyObjectsWithTag ("ManaCristal");
		destroyObjectsWithTag ("ChickenLive");
	}

	void destroyObjectsWithTag(string tag){
		GameObject[] gameObjects = GameObject.FindGameObjectsWithTag (tag);
		for(var i = 0 ; i < gameObjects.Length ; i ++)
		{
			Destroy(gameObjects[i]);
		}
	}

	public void increaseRoom(){
		gameManager.GetComponent<GameManagerController> ().scorePoints (500);
		nextBossIn--;
		deleteRoom ();
		width += 2;
		height += 2;
		generateRoom ();

		int enemyCount = (int)Mathf.Round(width*height*0.01f);
		if (enemyCount == 0 && nextBossIn != 0) {
			placeRandom (Key);
		} else {
			for(int i=0; i<enemyCount; i++){
				GameObject o = placeRandom (Enemies [Random.Range (0, Enemies.Length)]);
				if (i == 0) {
					o.GetComponent<DropsKeyController> ().dropsKey = true;
				}
			}
		}

		int goodiesCount = (int)Mathf.Round(width*height*0.005f);
		for(int i=0; i<goodiesCount; i++){
			placeRandom (Goodies [Random.Range (0, Goodies.Length)]);
		}

		if (nextBossIn == 0) {
			GameObject o = placeRandom (Boss);
			o.GetComponent<DropsKeyController> ().dropsKey = true;
			nextBossIn = BOSS_EVERY;
		}
	}

	public GameObject placeRandom(GameObject ga){
		GameObject newObject = Instantiate (ga);
		newObject.transform.position = new Vector2 (Random.Range (2, width - 2)-width/2, Random.Range (2, height - 2)-height/2);
		return newObject;
	}

}
