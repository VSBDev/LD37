#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t44861630;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SeamlessOSTScript
struct  SeamlessOSTScript_t54441220  : public MonoBehaviour_t667441552
{
public:
	// System.Single SeamlessOSTScript::bpm
	float ___bpm_2;
	// System.Int32 SeamlessOSTScript::numBeatsPerSegment
	int32_t ___numBeatsPerSegment_3;
	// UnityEngine.AudioClip[] SeamlessOSTScript::clips
	AudioClipU5BU5D_t3001083477* ___clips_4;
	// System.Single SeamlessOSTScript::volume
	float ___volume_5;
	// System.Double SeamlessOSTScript::nextEventTime
	double ___nextEventTime_6;
	// System.Int32 SeamlessOSTScript::flip
	int32_t ___flip_7;
	// UnityEngine.AudioSource[] SeamlessOSTScript::audioSources
	AudioSourceU5BU5D_t44861630* ___audioSources_8;
	// System.Boolean SeamlessOSTScript::running
	bool ___running_9;

public:
	inline static int32_t get_offset_of_bpm_2() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___bpm_2)); }
	inline float get_bpm_2() const { return ___bpm_2; }
	inline float* get_address_of_bpm_2() { return &___bpm_2; }
	inline void set_bpm_2(float value)
	{
		___bpm_2 = value;
	}

	inline static int32_t get_offset_of_numBeatsPerSegment_3() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___numBeatsPerSegment_3)); }
	inline int32_t get_numBeatsPerSegment_3() const { return ___numBeatsPerSegment_3; }
	inline int32_t* get_address_of_numBeatsPerSegment_3() { return &___numBeatsPerSegment_3; }
	inline void set_numBeatsPerSegment_3(int32_t value)
	{
		___numBeatsPerSegment_3 = value;
	}

	inline static int32_t get_offset_of_clips_4() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___clips_4)); }
	inline AudioClipU5BU5D_t3001083477* get_clips_4() const { return ___clips_4; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_clips_4() { return &___clips_4; }
	inline void set_clips_4(AudioClipU5BU5D_t3001083477* value)
	{
		___clips_4 = value;
		Il2CppCodeGenWriteBarrier(&___clips_4, value);
	}

	inline static int32_t get_offset_of_volume_5() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___volume_5)); }
	inline float get_volume_5() const { return ___volume_5; }
	inline float* get_address_of_volume_5() { return &___volume_5; }
	inline void set_volume_5(float value)
	{
		___volume_5 = value;
	}

	inline static int32_t get_offset_of_nextEventTime_6() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___nextEventTime_6)); }
	inline double get_nextEventTime_6() const { return ___nextEventTime_6; }
	inline double* get_address_of_nextEventTime_6() { return &___nextEventTime_6; }
	inline void set_nextEventTime_6(double value)
	{
		___nextEventTime_6 = value;
	}

	inline static int32_t get_offset_of_flip_7() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___flip_7)); }
	inline int32_t get_flip_7() const { return ___flip_7; }
	inline int32_t* get_address_of_flip_7() { return &___flip_7; }
	inline void set_flip_7(int32_t value)
	{
		___flip_7 = value;
	}

	inline static int32_t get_offset_of_audioSources_8() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___audioSources_8)); }
	inline AudioSourceU5BU5D_t44861630* get_audioSources_8() const { return ___audioSources_8; }
	inline AudioSourceU5BU5D_t44861630** get_address_of_audioSources_8() { return &___audioSources_8; }
	inline void set_audioSources_8(AudioSourceU5BU5D_t44861630* value)
	{
		___audioSources_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_8, value);
	}

	inline static int32_t get_offset_of_running_9() { return static_cast<int32_t>(offsetof(SeamlessOSTScript_t54441220, ___running_9)); }
	inline bool get_running_9() const { return ___running_9; }
	inline bool* get_address_of_running_9() { return &___running_9; }
	inline void set_running_9(bool value)
	{
		___running_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
