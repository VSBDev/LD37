using UnityEngine;
using System.Collections;

public class RandomTile : MonoBehaviour {

	public Sprite[] tiles;
	private SpriteRenderer sr;

	// Use this for initialization
	void Start () {
		sr = GetComponent<SpriteRenderer> ();
		assignRandomTile ();
	}

	void assignRandomTile(){
		sr.sprite = tiles [Random.Range(0,tiles.Length)];
	}
	
	// Update is called once per frame
	/*void Update () {
		if (Input.GetMouseButtonDown(0)) {
			assignRandomTile ();
		}
	}*/

}
