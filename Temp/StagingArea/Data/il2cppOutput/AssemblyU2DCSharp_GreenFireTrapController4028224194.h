#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GreenFireTrapController
struct  GreenFireTrapController_t4028224194  : public MonoBehaviour_t667441552
{
public:
	// System.Single GreenFireTrapController::speed
	float ___speed_2;
	// System.Int32 GreenFireTrapController::frames
	int32_t ___frames_3;
	// UnityEngine.GameObject GreenFireTrapController::greenFireBall
	GameObject_t3674682005 * ___greenFireBall_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(GreenFireTrapController_t4028224194, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_frames_3() { return static_cast<int32_t>(offsetof(GreenFireTrapController_t4028224194, ___frames_3)); }
	inline int32_t get_frames_3() const { return ___frames_3; }
	inline int32_t* get_address_of_frames_3() { return &___frames_3; }
	inline void set_frames_3(int32_t value)
	{
		___frames_3 = value;
	}

	inline static int32_t get_offset_of_greenFireBall_4() { return static_cast<int32_t>(offsetof(GreenFireTrapController_t4028224194, ___greenFireBall_4)); }
	inline GameObject_t3674682005 * get_greenFireBall_4() const { return ___greenFireBall_4; }
	inline GameObject_t3674682005 ** get_address_of_greenFireBall_4() { return &___greenFireBall_4; }
	inline void set_greenFireBall_4(GameObject_t3674682005 * value)
	{
		___greenFireBall_4 = value;
		Il2CppCodeGenWriteBarrier(&___greenFireBall_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
