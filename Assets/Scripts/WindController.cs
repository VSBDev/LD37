using UnityEngine;
using System.Collections;

public class WindController : MonoBehaviour {

	public int TTL;
	private int currentTTL = 0;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		currentTTL++;
		if (currentTTL == TTL) {
			Destroy (this.gameObject);
			return;
		}
	}

	void OnCollisionEnter2D(Collision2D coll){
		if (coll.collider.gameObject.CompareTag ("RoomWall") || coll.collider.gameObject.CompareTag ("Key") || coll.collider.gameObject.CompareTag ("RoomDoor")) {
			Destroy (this.gameObject);
		}
	}
}
