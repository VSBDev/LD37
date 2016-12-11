using UnityEngine;
using System.Collections;
using Random = UnityEngine.Random;

public class RandomEnemyController : MonoBehaviour {
	private Rigidbody2D rb2D;
	public float speed = 2.0f;
	public int maxDirectionFrames = 10;
	private int nextDirection;
	private int frames;

	void Start () {
		rb2D = GetComponent <Rigidbody2D>();
		nextDirection = 0;
		frames = 0;
	}

	void Update () {

		if (frames == maxDirectionFrames) {
			frames = 0;
			rb2D.velocity = new Vector2 (0.0f, 0.0f);
			nextDirection = Random.Range (1, 5);
		}

		if (frames == 0) {
			if (nextDirection == 1) {
				rb2D.velocity = new Vector2 (0f, speed);
			} else if (nextDirection == 2) {
				rb2D.velocity = new Vector2 (speed, 0.0f);
			} else if (nextDirection == 3) {
				rb2D.velocity = new Vector2 (0.0f, -speed);
			} else if (nextDirection == 4) {
				rb2D.velocity = new Vector2 (-speed, 0.0f);
			}
			frames++;
		} else {
			frames++;
		}
	}
}
