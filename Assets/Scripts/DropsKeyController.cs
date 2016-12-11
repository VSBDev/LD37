using UnityEngine;
using System.Collections;

public class DropsKeyController : MonoBehaviour {

	public GameObject key;
	public GameObject gameManager;

	public bool dropsKey = false;
	public int lives = 1;
	public int valuePoints = 100;

	void OnCollisionEnter2D(Collision2D coll){
		if (coll.collider.gameObject.CompareTag ("Wind")) {
			lives--;

			if(lives==0){
				if (dropsKey) {
					GameObject k = Instantiate (key);
					k.transform.position = this.transform.position;
				}
				Destroy (this.gameObject);
				gameManager = GameObject.FindGameObjectWithTag("GameManager");
				gameManager.GetComponent<GameManagerController> ().scorePoints (valuePoints);
			}

			Destroy (coll.collider.gameObject);
		}
	}
}
