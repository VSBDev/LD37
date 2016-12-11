using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {


	private Animator animator;
	private Rigidbody2D rb2D;
	public float speed = 2.0f;
	public AudioSource pickup;
	public AudioSource roomIncrease;
	public AudioSource hurt;
	public AudioSource closedDoor;


	public bool hasKey = false;
	public GameObject mapGenerator;
	public GameObject gameManager;

	private float windAttackSpeed = 6.0f;
	public GameObject windPrefab;
	public Text livesText;
	public Text keyText;
	public Text manaText;

	public int MAX_LIVES = 3;
	public int MAX_MANA = 100;

	public int lives = 3;
	public int mana = 100;
	public int keys = 0;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator>();
		rb2D = GetComponent <Rigidbody2D>();
		updatePlayerUI();
	}

	void updatePlayerUI(){
		livesText.text = lives.ToString();
		keyText.text = keys.ToString();
		manaText.text = mana.ToString ();
	}

	void launchWindAttack(int direction, Vector2 speed){
		if (mana == 0)
			return;
		mana--;
		GameObject fb = Instantiate (windPrefab);
		Rigidbody2D rb2d = fb.GetComponent<Rigidbody2D> ();
		fb.transform.rotation = Quaternion.Euler (0, 0, direction);
		rb2d.velocity = speed;
		rb2d.position = this.gameObject.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		if (gameManager.GetComponent<GameManagerController> ().gameOver)
			return;

		if (Input.GetKeyDown (KeyCode.W)) {
			animator.SetBool ("isWalking", true);
			animator.SetInteger ("direction", 1);
			rb2D.velocity = new Vector2(0f,speed);
		} else if (Input.GetKeyDown (KeyCode.D)) {
			if(!animator.GetBool("isWalking"))
				animator.SetBool ("isWalking", true);
			if(!(animator.GetInteger("direction")==4))
				animator.SetInteger ("direction", 4);
			rb2D.velocity = new Vector2(speed,0.0f);
		} else if (Input.GetKeyDown (KeyCode.S)) {
			animator.SetBool ("isWalking", true);
			animator.SetInteger ("direction", 3);
			rb2D.velocity = new Vector2(0.0f,-speed);
		} else if (Input.GetKeyDown (KeyCode.A)) {
			animator.SetBool ("isWalking", true);
			animator.SetInteger ("direction", 2);
			rb2D.velocity = new Vector2(-speed,0.0f);
		} else if (Input.GetKeyUp (KeyCode.W) || Input.GetKeyUp (KeyCode.D) || Input.GetKeyUp (KeyCode.S) || Input.GetKeyUp (KeyCode.A)) {
			animator.SetBool ("isWalking", false);
			rb2D.velocity = new Vector2(0.0f,0.0f);
		}

		if (Input.GetKeyDown (KeyCode.Space)) {
			animator.SetBool ("swingSword", true);
			switch (animator.GetInteger("direction")){
			case 1:
				launchWindAttack (270, new Vector2 (0.0f, windAttackSpeed));
				break;
			case 2:
				launchWindAttack (0, new Vector2 (-windAttackSpeed,0.0f));
				break;
			case 3:
				launchWindAttack (90, new Vector2 (0.0f, -windAttackSpeed));
				break;
			case 4:
				launchWindAttack (180, new Vector2 (windAttackSpeed,0.0f));
				break;
			default:
				break;
			}
		} else if (Input.GetKeyUp (KeyCode.Space)) {
			animator.SetBool ("swingSword", false);
		}

		if (Input.GetKeyDown (KeyCode.P)) {
			animator.SetBool ("swingSword", true);
			launchWindAttack (270, new Vector2 (0.0f, windAttackSpeed));
			launchWindAttack (0, new Vector2 (-windAttackSpeed,0.0f));
			launchWindAttack (90, new Vector2 (0.0f, -windAttackSpeed));
			launchWindAttack (180, new Vector2 (windAttackSpeed,0.0f));
		}else if(Input.GetKeyUp (KeyCode.P)){
			animator.SetBool ("swingSword", false);
		}
	}


	void OnCollisionEnter2D(Collision2D coll){
		if (coll.collider.gameObject.CompareTag ("Key")) {
			Destroy (coll.collider.gameObject);
			keys++;
			pickup.Play ();
		} else if (coll.collider.gameObject.CompareTag ("RoomDoor")) {
			if (keys > 0) {
				mapGenerator.GetComponent<MapGenerator> ().increaseRoom ();
				keys--;
				roomIncrease.Play ();		
			} else {
				closedDoor.Play ();
			}
		} else if (coll.collider.gameObject.CompareTag ("Enemy")) {
			lives--;
			hurt.Play();
			if (lives == 0) {
				gameManager.GetComponent<GameManagerController> ().gameIsOver ();
			}

			if (lives < 0)
				lives = 0;
		} else if (coll.collider.gameObject.CompareTag ("ManaCristal")) {
			mana+=20;
			if (mana > MAX_MANA)
				mana = MAX_MANA;
			
			pickup.Play();
			Destroy (coll.collider.gameObject);
		} else if (coll.collider.gameObject.CompareTag ("ChickenLive")) {
			lives++;
			if (lives > MAX_LIVES)
				lives = MAX_LIVES;

			pickup.Play();
			Destroy (coll.collider.gameObject);
		}

		updatePlayerUI ();
	}
}
