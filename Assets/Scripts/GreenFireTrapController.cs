using UnityEngine;
using System.Collections;
using Random = UnityEngine.Random;

public class GreenFireTrapController : MonoBehaviour {
	private float speed = 6.0f;
	private int frames;
	public GameObject greenFireBall;
	/*public bool dropsKey = false;
	public GameObject key;*/

	// Use this for initialization
	void Start () {
		frames = 50;
	}

	// Update is called once per frame
	void Update () {
		if (frames == 100) {
			frames = 0;
		}

		if (frames == 0) {
			fireGreenFireBall (270, new Vector2 (0f, speed), new Vector2 (0f, 1.1f));
			fireGreenFireBall (90, new Vector2 (0f, -speed), new Vector2 (0f, -1.1f));
			fireGreenFireBall (180, new Vector2 (speed, 0f), new Vector2 (1.1f, 0f));
			fireGreenFireBall (0, new Vector2 (-speed, 0f), new Vector2 (-1.1f, 0f));
		}

		frames++;
	}

	void fireGreenFireBall(int rotation, Vector2 speed, Vector2 offset){
		GameObject fb = Instantiate (greenFireBall);
		fb.transform.position = (Vector2)this.transform.position + offset;
		fb.transform.rotation = Quaternion.Euler (0, 0, rotation);
		fb.GetComponent<Rigidbody2D> ().velocity = speed;
	}


	/*void OnCollisionEnter2D(Collision2D coll){
		if (coll.collider.gameObject.CompareTag ("Wind")) {
			if (dropsKey) {
				GameObject k = Instantiate (key);
				k.transform.position = this.transform.position;
			}
			Destroy (coll.collider.gameObject);
			Destroy (this.gameObject);
		}
	}*/
}