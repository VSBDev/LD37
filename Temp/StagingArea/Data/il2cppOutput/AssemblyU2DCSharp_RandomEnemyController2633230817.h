#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomEnemyController
struct  RandomEnemyController_t2633230817  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody2D RandomEnemyController::rb2D
	Rigidbody2D_t1743771669 * ___rb2D_2;
	// System.Single RandomEnemyController::speed
	float ___speed_3;
	// System.Int32 RandomEnemyController::maxDirectionFrames
	int32_t ___maxDirectionFrames_4;
	// System.Int32 RandomEnemyController::nextDirection
	int32_t ___nextDirection_5;
	// System.Int32 RandomEnemyController::frames
	int32_t ___frames_6;

public:
	inline static int32_t get_offset_of_rb2D_2() { return static_cast<int32_t>(offsetof(RandomEnemyController_t2633230817, ___rb2D_2)); }
	inline Rigidbody2D_t1743771669 * get_rb2D_2() const { return ___rb2D_2; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2D_2() { return &___rb2D_2; }
	inline void set_rb2D_2(Rigidbody2D_t1743771669 * value)
	{
		___rb2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb2D_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(RandomEnemyController_t2633230817, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_maxDirectionFrames_4() { return static_cast<int32_t>(offsetof(RandomEnemyController_t2633230817, ___maxDirectionFrames_4)); }
	inline int32_t get_maxDirectionFrames_4() const { return ___maxDirectionFrames_4; }
	inline int32_t* get_address_of_maxDirectionFrames_4() { return &___maxDirectionFrames_4; }
	inline void set_maxDirectionFrames_4(int32_t value)
	{
		___maxDirectionFrames_4 = value;
	}

	inline static int32_t get_offset_of_nextDirection_5() { return static_cast<int32_t>(offsetof(RandomEnemyController_t2633230817, ___nextDirection_5)); }
	inline int32_t get_nextDirection_5() const { return ___nextDirection_5; }
	inline int32_t* get_address_of_nextDirection_5() { return &___nextDirection_5; }
	inline void set_nextDirection_5(int32_t value)
	{
		___nextDirection_5 = value;
	}

	inline static int32_t get_offset_of_frames_6() { return static_cast<int32_t>(offsetof(RandomEnemyController_t2633230817, ___frames_6)); }
	inline int32_t get_frames_6() const { return ___frames_6; }
	inline int32_t* get_address_of_frames_6() { return &___frames_6; }
	inline void set_frames_6(int32_t value)
	{
		___frames_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
