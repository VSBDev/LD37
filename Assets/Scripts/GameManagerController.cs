using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameManagerController : MonoBehaviour {

	public GameObject player;
	public GameObject mapGenerator;
	public bool tutorialShowing = true;
	public Text[] tutorialTexts;
	public Text[] gameOverTexts;
	public Text pointsText;

	public bool gameOver = false;
	private int points = 0;

	// Use this for initialization
	void Start () {
		mapGenerator.GetComponent<MapGenerator>().newGame();
		showGameOver (false);
	}
	
	// Update is called once per frame
	void Update () {
		if (mapGenerator.GetComponent<MapGenerator> ().width > 7) {
			showTutorial (false);
		}

		if (gameOver) {
			showTutorial (false);
			showGameOver (true);
			points = 0;
		}

		if (Input.GetKeyUp (KeyCode.Space) && gameOver) {
			mapGenerator.GetComponent<MapGenerator>().newGame();
			showGameOver (false);
			showTutorial (true);
			player.GetComponent<PlayerController> ().lives = player.GetComponent<PlayerController> ().MAX_LIVES;
			player.GetComponent<PlayerController> ().mana = player.GetComponent<PlayerController> ().MAX_MANA;
			player.transform.position = new Vector2 (0.0f,1.0f);
			gameOver = false;
			scorePoints (0);//rerender
		}
	}

	public void showTutorial(bool show){
		for (int x = 0; x < tutorialTexts.Length; x++) {
			tutorialTexts[x].enabled = show;
		}
	}

	public void showGameOver(bool show){
		for (int x = 0; x < gameOverTexts.Length; x++) {
			gameOverTexts[x].enabled = show;
		}		
	}

	public void gameIsOver(){
		showGameOver (true);
		gameOver = true;
	}

	public void scorePoints(int moarPoints){
		points += moarPoints;
		pointsText.text = points.ToString ();
	}
}
