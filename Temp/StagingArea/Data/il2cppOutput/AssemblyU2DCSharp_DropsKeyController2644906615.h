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

// DropsKeyController
struct  DropsKeyController_t2644906615  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject DropsKeyController::key
	GameObject_t3674682005 * ___key_2;
	// UnityEngine.GameObject DropsKeyController::gameManager
	GameObject_t3674682005 * ___gameManager_3;
	// System.Boolean DropsKeyController::dropsKey
	bool ___dropsKey_4;
	// System.Int32 DropsKeyController::lives
	int32_t ___lives_5;
	// System.Int32 DropsKeyController::valuePoints
	int32_t ___valuePoints_6;

public:
	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(DropsKeyController_t2644906615, ___key_2)); }
	inline GameObject_t3674682005 * get_key_2() const { return ___key_2; }
	inline GameObject_t3674682005 ** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(GameObject_t3674682005 * value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier(&___key_2, value);
	}

	inline static int32_t get_offset_of_gameManager_3() { return static_cast<int32_t>(offsetof(DropsKeyController_t2644906615, ___gameManager_3)); }
	inline GameObject_t3674682005 * get_gameManager_3() const { return ___gameManager_3; }
	inline GameObject_t3674682005 ** get_address_of_gameManager_3() { return &___gameManager_3; }
	inline void set_gameManager_3(GameObject_t3674682005 * value)
	{
		___gameManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_3, value);
	}

	inline static int32_t get_offset_of_dropsKey_4() { return static_cast<int32_t>(offsetof(DropsKeyController_t2644906615, ___dropsKey_4)); }
	inline bool get_dropsKey_4() const { return ___dropsKey_4; }
	inline bool* get_address_of_dropsKey_4() { return &___dropsKey_4; }
	inline void set_dropsKey_4(bool value)
	{
		___dropsKey_4 = value;
	}

	inline static int32_t get_offset_of_lives_5() { return static_cast<int32_t>(offsetof(DropsKeyController_t2644906615, ___lives_5)); }
	inline int32_t get_lives_5() const { return ___lives_5; }
	inline int32_t* get_address_of_lives_5() { return &___lives_5; }
	inline void set_lives_5(int32_t value)
	{
		___lives_5 = value;
	}

	inline static int32_t get_offset_of_valuePoints_6() { return static_cast<int32_t>(offsetof(DropsKeyController_t2644906615, ___valuePoints_6)); }
	inline int32_t get_valuePoints_6() const { return ___valuePoints_6; }
	inline int32_t* get_address_of_valuePoints_6() { return &___valuePoints_6; }
	inline void set_valuePoints_6(int32_t value)
	{
		___valuePoints_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
