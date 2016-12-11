#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator PlayerController::animator
	Animator_t2776330603 * ___animator_2;
	// UnityEngine.Rigidbody2D PlayerController::rb2D
	Rigidbody2D_t1743771669 * ___rb2D_3;
	// System.Single PlayerController::speed
	float ___speed_4;
	// UnityEngine.AudioSource PlayerController::pickup
	AudioSource_t1740077639 * ___pickup_5;
	// UnityEngine.AudioSource PlayerController::roomIncrease
	AudioSource_t1740077639 * ___roomIncrease_6;
	// UnityEngine.AudioSource PlayerController::hurt
	AudioSource_t1740077639 * ___hurt_7;
	// UnityEngine.AudioSource PlayerController::closedDoor
	AudioSource_t1740077639 * ___closedDoor_8;
	// System.Boolean PlayerController::hasKey
	bool ___hasKey_9;
	// UnityEngine.GameObject PlayerController::mapGenerator
	GameObject_t3674682005 * ___mapGenerator_10;
	// UnityEngine.GameObject PlayerController::gameManager
	GameObject_t3674682005 * ___gameManager_11;
	// System.Single PlayerController::windAttackSpeed
	float ___windAttackSpeed_12;
	// UnityEngine.GameObject PlayerController::windPrefab
	GameObject_t3674682005 * ___windPrefab_13;
	// UnityEngine.UI.Text PlayerController::livesText
	Text_t9039225 * ___livesText_14;
	// UnityEngine.UI.Text PlayerController::keyText
	Text_t9039225 * ___keyText_15;
	// UnityEngine.UI.Text PlayerController::manaText
	Text_t9039225 * ___manaText_16;
	// System.Int32 PlayerController::MAX_LIVES
	int32_t ___MAX_LIVES_17;
	// System.Int32 PlayerController::MAX_MANA
	int32_t ___MAX_MANA_18;
	// System.Int32 PlayerController::lives
	int32_t ___lives_19;
	// System.Int32 PlayerController::mana
	int32_t ___mana_20;
	// System.Int32 PlayerController::keys
	int32_t ___keys_21;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___animator_2)); }
	inline Animator_t2776330603 * get_animator_2() const { return ___animator_2; }
	inline Animator_t2776330603 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t2776330603 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_rb2D_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb2D_3)); }
	inline Rigidbody2D_t1743771669 * get_rb2D_3() const { return ___rb2D_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2D_3() { return &___rb2D_3; }
	inline void set_rb2D_3(Rigidbody2D_t1743771669 * value)
	{
		___rb2D_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb2D_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_pickup_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___pickup_5)); }
	inline AudioSource_t1740077639 * get_pickup_5() const { return ___pickup_5; }
	inline AudioSource_t1740077639 ** get_address_of_pickup_5() { return &___pickup_5; }
	inline void set_pickup_5(AudioSource_t1740077639 * value)
	{
		___pickup_5 = value;
		Il2CppCodeGenWriteBarrier(&___pickup_5, value);
	}

	inline static int32_t get_offset_of_roomIncrease_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___roomIncrease_6)); }
	inline AudioSource_t1740077639 * get_roomIncrease_6() const { return ___roomIncrease_6; }
	inline AudioSource_t1740077639 ** get_address_of_roomIncrease_6() { return &___roomIncrease_6; }
	inline void set_roomIncrease_6(AudioSource_t1740077639 * value)
	{
		___roomIncrease_6 = value;
		Il2CppCodeGenWriteBarrier(&___roomIncrease_6, value);
	}

	inline static int32_t get_offset_of_hurt_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___hurt_7)); }
	inline AudioSource_t1740077639 * get_hurt_7() const { return ___hurt_7; }
	inline AudioSource_t1740077639 ** get_address_of_hurt_7() { return &___hurt_7; }
	inline void set_hurt_7(AudioSource_t1740077639 * value)
	{
		___hurt_7 = value;
		Il2CppCodeGenWriteBarrier(&___hurt_7, value);
	}

	inline static int32_t get_offset_of_closedDoor_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___closedDoor_8)); }
	inline AudioSource_t1740077639 * get_closedDoor_8() const { return ___closedDoor_8; }
	inline AudioSource_t1740077639 ** get_address_of_closedDoor_8() { return &___closedDoor_8; }
	inline void set_closedDoor_8(AudioSource_t1740077639 * value)
	{
		___closedDoor_8 = value;
		Il2CppCodeGenWriteBarrier(&___closedDoor_8, value);
	}

	inline static int32_t get_offset_of_hasKey_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___hasKey_9)); }
	inline bool get_hasKey_9() const { return ___hasKey_9; }
	inline bool* get_address_of_hasKey_9() { return &___hasKey_9; }
	inline void set_hasKey_9(bool value)
	{
		___hasKey_9 = value;
	}

	inline static int32_t get_offset_of_mapGenerator_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___mapGenerator_10)); }
	inline GameObject_t3674682005 * get_mapGenerator_10() const { return ___mapGenerator_10; }
	inline GameObject_t3674682005 ** get_address_of_mapGenerator_10() { return &___mapGenerator_10; }
	inline void set_mapGenerator_10(GameObject_t3674682005 * value)
	{
		___mapGenerator_10 = value;
		Il2CppCodeGenWriteBarrier(&___mapGenerator_10, value);
	}

	inline static int32_t get_offset_of_gameManager_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___gameManager_11)); }
	inline GameObject_t3674682005 * get_gameManager_11() const { return ___gameManager_11; }
	inline GameObject_t3674682005 ** get_address_of_gameManager_11() { return &___gameManager_11; }
	inline void set_gameManager_11(GameObject_t3674682005 * value)
	{
		___gameManager_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_11, value);
	}

	inline static int32_t get_offset_of_windAttackSpeed_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___windAttackSpeed_12)); }
	inline float get_windAttackSpeed_12() const { return ___windAttackSpeed_12; }
	inline float* get_address_of_windAttackSpeed_12() { return &___windAttackSpeed_12; }
	inline void set_windAttackSpeed_12(float value)
	{
		___windAttackSpeed_12 = value;
	}

	inline static int32_t get_offset_of_windPrefab_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___windPrefab_13)); }
	inline GameObject_t3674682005 * get_windPrefab_13() const { return ___windPrefab_13; }
	inline GameObject_t3674682005 ** get_address_of_windPrefab_13() { return &___windPrefab_13; }
	inline void set_windPrefab_13(GameObject_t3674682005 * value)
	{
		___windPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___windPrefab_13, value);
	}

	inline static int32_t get_offset_of_livesText_14() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___livesText_14)); }
	inline Text_t9039225 * get_livesText_14() const { return ___livesText_14; }
	inline Text_t9039225 ** get_address_of_livesText_14() { return &___livesText_14; }
	inline void set_livesText_14(Text_t9039225 * value)
	{
		___livesText_14 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_14, value);
	}

	inline static int32_t get_offset_of_keyText_15() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___keyText_15)); }
	inline Text_t9039225 * get_keyText_15() const { return ___keyText_15; }
	inline Text_t9039225 ** get_address_of_keyText_15() { return &___keyText_15; }
	inline void set_keyText_15(Text_t9039225 * value)
	{
		___keyText_15 = value;
		Il2CppCodeGenWriteBarrier(&___keyText_15, value);
	}

	inline static int32_t get_offset_of_manaText_16() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___manaText_16)); }
	inline Text_t9039225 * get_manaText_16() const { return ___manaText_16; }
	inline Text_t9039225 ** get_address_of_manaText_16() { return &___manaText_16; }
	inline void set_manaText_16(Text_t9039225 * value)
	{
		___manaText_16 = value;
		Il2CppCodeGenWriteBarrier(&___manaText_16, value);
	}

	inline static int32_t get_offset_of_MAX_LIVES_17() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___MAX_LIVES_17)); }
	inline int32_t get_MAX_LIVES_17() const { return ___MAX_LIVES_17; }
	inline int32_t* get_address_of_MAX_LIVES_17() { return &___MAX_LIVES_17; }
	inline void set_MAX_LIVES_17(int32_t value)
	{
		___MAX_LIVES_17 = value;
	}

	inline static int32_t get_offset_of_MAX_MANA_18() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___MAX_MANA_18)); }
	inline int32_t get_MAX_MANA_18() const { return ___MAX_MANA_18; }
	inline int32_t* get_address_of_MAX_MANA_18() { return &___MAX_MANA_18; }
	inline void set_MAX_MANA_18(int32_t value)
	{
		___MAX_MANA_18 = value;
	}

	inline static int32_t get_offset_of_lives_19() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___lives_19)); }
	inline int32_t get_lives_19() const { return ___lives_19; }
	inline int32_t* get_address_of_lives_19() { return &___lives_19; }
	inline void set_lives_19(int32_t value)
	{
		___lives_19 = value;
	}

	inline static int32_t get_offset_of_mana_20() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___mana_20)); }
	inline int32_t get_mana_20() const { return ___mana_20; }
	inline int32_t* get_address_of_mana_20() { return &___mana_20; }
	inline void set_mana_20(int32_t value)
	{
		___mana_20 = value;
	}

	inline static int32_t get_offset_of_keys_21() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___keys_21)); }
	inline int32_t get_keys_21() const { return ___keys_21; }
	inline int32_t* get_address_of_keys_21() { return &___keys_21; }
	inline void set_keys_21(int32_t value)
	{
		___keys_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
