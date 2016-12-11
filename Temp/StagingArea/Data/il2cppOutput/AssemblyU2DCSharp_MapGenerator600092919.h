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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapGenerator
struct  MapGenerator_t600092919  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MapGenerator::startingWidth
	int32_t ___startingWidth_2;
	// System.Int32 MapGenerator::startingHeight
	int32_t ___startingHeight_3;
	// System.Int32 MapGenerator::width
	int32_t ___width_4;
	// System.Int32 MapGenerator::height
	int32_t ___height_5;
	// UnityEngine.GameObject MapGenerator::gameManager
	GameObject_t3674682005 * ___gameManager_6;
	// UnityEngine.GameObject[] MapGenerator::floorPrefabs
	GameObjectU5BU5D_t2662109048* ___floorPrefabs_7;
	// UnityEngine.GameObject MapGenerator::WallUp
	GameObject_t3674682005 * ___WallUp_8;
	// UnityEngine.GameObject MapGenerator::WallDown
	GameObject_t3674682005 * ___WallDown_9;
	// UnityEngine.GameObject MapGenerator::WallLeft
	GameObject_t3674682005 * ___WallLeft_10;
	// UnityEngine.GameObject MapGenerator::WallRight
	GameObject_t3674682005 * ___WallRight_11;
	// UnityEngine.GameObject MapGenerator::Door
	GameObject_t3674682005 * ___Door_12;
	// UnityEngine.GameObject MapGenerator::Key
	GameObject_t3674682005 * ___Key_13;
	// UnityEngine.GameObject[] MapGenerator::Enemies
	GameObjectU5BU5D_t2662109048* ___Enemies_14;
	// UnityEngine.GameObject[] MapGenerator::Goodies
	GameObjectU5BU5D_t2662109048* ___Goodies_15;
	// UnityEngine.GameObject MapGenerator::Boss
	GameObject_t3674682005 * ___Boss_16;
	// System.Int32 MapGenerator::BOSS_EVERY
	int32_t ___BOSS_EVERY_17;
	// System.Int32 MapGenerator::nextBossIn
	int32_t ___nextBossIn_18;

public:
	inline static int32_t get_offset_of_startingWidth_2() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___startingWidth_2)); }
	inline int32_t get_startingWidth_2() const { return ___startingWidth_2; }
	inline int32_t* get_address_of_startingWidth_2() { return &___startingWidth_2; }
	inline void set_startingWidth_2(int32_t value)
	{
		___startingWidth_2 = value;
	}

	inline static int32_t get_offset_of_startingHeight_3() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___startingHeight_3)); }
	inline int32_t get_startingHeight_3() const { return ___startingHeight_3; }
	inline int32_t* get_address_of_startingHeight_3() { return &___startingHeight_3; }
	inline void set_startingHeight_3(int32_t value)
	{
		___startingHeight_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_gameManager_6() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___gameManager_6)); }
	inline GameObject_t3674682005 * get_gameManager_6() const { return ___gameManager_6; }
	inline GameObject_t3674682005 ** get_address_of_gameManager_6() { return &___gameManager_6; }
	inline void set_gameManager_6(GameObject_t3674682005 * value)
	{
		___gameManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_6, value);
	}

	inline static int32_t get_offset_of_floorPrefabs_7() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___floorPrefabs_7)); }
	inline GameObjectU5BU5D_t2662109048* get_floorPrefabs_7() const { return ___floorPrefabs_7; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_floorPrefabs_7() { return &___floorPrefabs_7; }
	inline void set_floorPrefabs_7(GameObjectU5BU5D_t2662109048* value)
	{
		___floorPrefabs_7 = value;
		Il2CppCodeGenWriteBarrier(&___floorPrefabs_7, value);
	}

	inline static int32_t get_offset_of_WallUp_8() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___WallUp_8)); }
	inline GameObject_t3674682005 * get_WallUp_8() const { return ___WallUp_8; }
	inline GameObject_t3674682005 ** get_address_of_WallUp_8() { return &___WallUp_8; }
	inline void set_WallUp_8(GameObject_t3674682005 * value)
	{
		___WallUp_8 = value;
		Il2CppCodeGenWriteBarrier(&___WallUp_8, value);
	}

	inline static int32_t get_offset_of_WallDown_9() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___WallDown_9)); }
	inline GameObject_t3674682005 * get_WallDown_9() const { return ___WallDown_9; }
	inline GameObject_t3674682005 ** get_address_of_WallDown_9() { return &___WallDown_9; }
	inline void set_WallDown_9(GameObject_t3674682005 * value)
	{
		___WallDown_9 = value;
		Il2CppCodeGenWriteBarrier(&___WallDown_9, value);
	}

	inline static int32_t get_offset_of_WallLeft_10() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___WallLeft_10)); }
	inline GameObject_t3674682005 * get_WallLeft_10() const { return ___WallLeft_10; }
	inline GameObject_t3674682005 ** get_address_of_WallLeft_10() { return &___WallLeft_10; }
	inline void set_WallLeft_10(GameObject_t3674682005 * value)
	{
		___WallLeft_10 = value;
		Il2CppCodeGenWriteBarrier(&___WallLeft_10, value);
	}

	inline static int32_t get_offset_of_WallRight_11() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___WallRight_11)); }
	inline GameObject_t3674682005 * get_WallRight_11() const { return ___WallRight_11; }
	inline GameObject_t3674682005 ** get_address_of_WallRight_11() { return &___WallRight_11; }
	inline void set_WallRight_11(GameObject_t3674682005 * value)
	{
		___WallRight_11 = value;
		Il2CppCodeGenWriteBarrier(&___WallRight_11, value);
	}

	inline static int32_t get_offset_of_Door_12() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___Door_12)); }
	inline GameObject_t3674682005 * get_Door_12() const { return ___Door_12; }
	inline GameObject_t3674682005 ** get_address_of_Door_12() { return &___Door_12; }
	inline void set_Door_12(GameObject_t3674682005 * value)
	{
		___Door_12 = value;
		Il2CppCodeGenWriteBarrier(&___Door_12, value);
	}

	inline static int32_t get_offset_of_Key_13() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___Key_13)); }
	inline GameObject_t3674682005 * get_Key_13() const { return ___Key_13; }
	inline GameObject_t3674682005 ** get_address_of_Key_13() { return &___Key_13; }
	inline void set_Key_13(GameObject_t3674682005 * value)
	{
		___Key_13 = value;
		Il2CppCodeGenWriteBarrier(&___Key_13, value);
	}

	inline static int32_t get_offset_of_Enemies_14() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___Enemies_14)); }
	inline GameObjectU5BU5D_t2662109048* get_Enemies_14() const { return ___Enemies_14; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_Enemies_14() { return &___Enemies_14; }
	inline void set_Enemies_14(GameObjectU5BU5D_t2662109048* value)
	{
		___Enemies_14 = value;
		Il2CppCodeGenWriteBarrier(&___Enemies_14, value);
	}

	inline static int32_t get_offset_of_Goodies_15() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___Goodies_15)); }
	inline GameObjectU5BU5D_t2662109048* get_Goodies_15() const { return ___Goodies_15; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_Goodies_15() { return &___Goodies_15; }
	inline void set_Goodies_15(GameObjectU5BU5D_t2662109048* value)
	{
		___Goodies_15 = value;
		Il2CppCodeGenWriteBarrier(&___Goodies_15, value);
	}

	inline static int32_t get_offset_of_Boss_16() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___Boss_16)); }
	inline GameObject_t3674682005 * get_Boss_16() const { return ___Boss_16; }
	inline GameObject_t3674682005 ** get_address_of_Boss_16() { return &___Boss_16; }
	inline void set_Boss_16(GameObject_t3674682005 * value)
	{
		___Boss_16 = value;
		Il2CppCodeGenWriteBarrier(&___Boss_16, value);
	}

	inline static int32_t get_offset_of_BOSS_EVERY_17() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___BOSS_EVERY_17)); }
	inline int32_t get_BOSS_EVERY_17() const { return ___BOSS_EVERY_17; }
	inline int32_t* get_address_of_BOSS_EVERY_17() { return &___BOSS_EVERY_17; }
	inline void set_BOSS_EVERY_17(int32_t value)
	{
		___BOSS_EVERY_17 = value;
	}

	inline static int32_t get_offset_of_nextBossIn_18() { return static_cast<int32_t>(offsetof(MapGenerator_t600092919, ___nextBossIn_18)); }
	inline int32_t get_nextBossIn_18() const { return ___nextBossIn_18; }
	inline int32_t* get_address_of_nextBossIn_18() { return &___nextBossIn_18; }
	inline void set_nextBossIn_18(int32_t value)
	{
		___nextBossIn_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
