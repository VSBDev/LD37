//FROM UNITY DOCUMENTATION:
//https://docs.unity3d.com/ScriptReference/AudioSource.PlayScheduled.html

// Basic demonstration of a music system that uses PlayScheduled to preload and sample-accurately stitch two AudioClips in an alternating fashion.
// The code assumes that the music pieces are each 16 bars (4 beats / bar) at a tempo of 140 beats per minute.
// To make it stitch arbitrary clips just replace the line
//   nextEventTime += (60.0 / bpm) * numBeatsPerSegment 
// by
//   nextEventTime += clips[flip].length;

@script RequireComponent(AudioSource)

public var bpm = 140.0;
public var numBeatsPerSegment = 16;
public var clips = new AudioClip[2];
public var volume = 0.3;

private var nextEventTime:double;
private var flip = 0;
private var audioSources = new AudioSource[2];
private var running = false;

function Start()
{
	for(var i = 0; i < 2; i++)
	{
		var child:GameObject = new GameObject("Player");
		child.transform.parent = gameObject.transform;
		audioSources[i] = child.AddComponent.<AudioSource>();
		audioSources[i].volume = volume;
	}
	nextEventTime = AudioSettings.dspTime + 2.0;
	running = true;
}

function Update()
{
	if(!running)
		return;
	var time = AudioSettings.dspTime;
	if(time + 1.0 > nextEventTime)
	{
		// We are now approx. 1 second before the time at which the sound should play, so we will schedule it now in order for the system to have enough time
		// to prepare the playback at the specified time. This may involve opening buffering a streamed file and should therefore take any worst-case delay into account.
		audioSources[flip].clip = clips[flip];
		audioSources[flip].PlayScheduled(nextEventTime);
		//Debug.Log("Scheduled source " + flip + " to start at time " + nextEventTime);

		// Place the next event 16 beats from here at a rate of 140 beats per minute
		nextEventTime += (60.0 / bpm) * numBeatsPerSegment;

		// Flip between two audio sources so that the loading process of one does not interfere with the one that's playing out
		flip = 1 - flip;
	}
}