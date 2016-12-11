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
// UnityEngine.UI.Text[]
struct TextU5BU5D_t3798907012;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManagerController
struct  GameManagerController_t956023095  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameManagerController::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.GameObject GameManagerController::mapGenerator
	GameObject_t3674682005 * ___mapGenerator_3;
	// System.Boolean GameManagerController::tutorialShowing
	bool ___tutorialShowing_4;
	// UnityEngine.UI.Text[] GameManagerController::tutorialTexts
	TextU5BU5D_t3798907012* ___tutorialTexts_5;
	// UnityEngine.UI.Text[] GameManagerController::gameOverTexts
	TextU5BU5D_t3798907012* ___gameOverTexts_6;
	// UnityEngine.UI.Text GameManagerController::pointsText
	Text_t9039225 * ___pointsText_7;
	// System.Boolean GameManagerController::gameOver
	bool ___gameOver_8;
	// System.Int32 GameManagerController::points
	int32_t ___points_9;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_mapGenerator_3() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___mapGenerator_3)); }
	inline GameObject_t3674682005 * get_mapGenerator_3() const { return ___mapGenerator_3; }
	inline GameObject_t3674682005 ** get_address_of_mapGenerator_3() { return &___mapGenerator_3; }
	inline void set_mapGenerator_3(GameObject_t3674682005 * value)
	{
		___mapGenerator_3 = value;
		Il2CppCodeGenWriteBarrier(&___mapGenerator_3, value);
	}

	inline static int32_t get_offset_of_tutorialShowing_4() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___tutorialShowing_4)); }
	inline bool get_tutorialShowing_4() const { return ___tutorialShowing_4; }
	inline bool* get_address_of_tutorialShowing_4() { return &___tutorialShowing_4; }
	inline void set_tutorialShowing_4(bool value)
	{
		___tutorialShowing_4 = value;
	}

	inline static int32_t get_offset_of_tutorialTexts_5() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___tutorialTexts_5)); }
	inline TextU5BU5D_t3798907012* get_tutorialTexts_5() const { return ___tutorialTexts_5; }
	inline TextU5BU5D_t3798907012** get_address_of_tutorialTexts_5() { return &___tutorialTexts_5; }
	inline void set_tutorialTexts_5(TextU5BU5D_t3798907012* value)
	{
		___tutorialTexts_5 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialTexts_5, value);
	}

	inline static int32_t get_offset_of_gameOverTexts_6() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___gameOverTexts_6)); }
	inline TextU5BU5D_t3798907012* get_gameOverTexts_6() const { return ___gameOverTexts_6; }
	inline TextU5BU5D_t3798907012** get_address_of_gameOverTexts_6() { return &___gameOverTexts_6; }
	inline void set_gameOverTexts_6(TextU5BU5D_t3798907012* value)
	{
		___gameOverTexts_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverTexts_6, value);
	}

	inline static int32_t get_offset_of_pointsText_7() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___pointsText_7)); }
	inline Text_t9039225 * get_pointsText_7() const { return ___pointsText_7; }
	inline Text_t9039225 ** get_address_of_pointsText_7() { return &___pointsText_7; }
	inline void set_pointsText_7(Text_t9039225 * value)
	{
		___pointsText_7 = value;
		Il2CppCodeGenWriteBarrier(&___pointsText_7, value);
	}

	inline static int32_t get_offset_of_gameOver_8() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___gameOver_8)); }
	inline bool get_gameOver_8() const { return ___gameOver_8; }
	inline bool* get_address_of_gameOver_8() { return &___gameOver_8; }
	inline void set_gameOver_8(bool value)
	{
		___gameOver_8 = value;
	}

	inline static int32_t get_offset_of_points_9() { return static_cast<int32_t>(offsetof(GameManagerController_t956023095, ___points_9)); }
	inline int32_t get_points_9() const { return ___points_9; }
	inline int32_t* get_address_of_points_9() { return &___points_9; }
	inline void set_points_9(int32_t value)
	{
		___points_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
