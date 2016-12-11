#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// DropsKeyController
struct DropsKeyController_t2644906615;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Object
struct Il2CppObject;
// GameManagerController
struct GameManagerController_t956023095;
// MapGenerator
struct MapGenerator_t600092919;
// PlayerController
struct PlayerController_t2866526589;
// GreenFireBallController
struct GreenFireBallController_t954042132;
// GreenFireTrapController
struct GreenFireTrapController_t4028224194;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t2776330603;
// RandomEnemyController
struct RandomEnemyController_t2633230817;
// RandomTile
struct RandomTile_t2109107761;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// WindController
struct WindController_t2862109156;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_DropsKeyController2644906615.h"
#include "AssemblyU2DCSharp_DropsKeyController2644906615MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameManagerController956023095MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_GameManagerController956023095.h"
#include "AssemblyU2DCSharp_MapGenerator600092919MethodDeclarations.h"
#include "AssemblyU2DCSharp_MapGenerator600092919.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Behaviour200106419MethodDeclarations.h"
#include "UnityEngine.UI_ArrayTypes.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "AssemblyU2DCSharp_GreenFireBallController954042132.h"
#include "AssemblyU2DCSharp_GreenFireBallController954042132MethodDeclarations.h"
#include "AssemblyU2DCSharp_GreenFireTrapController4028224194.h"
#include "AssemblyU2DCSharp_GreenFireTrapController4028224194MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator2776330603.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Animator2776330603MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"
#include "AssemblyU2DCSharp_RandomEnemyController2633230817.h"
#include "AssemblyU2DCSharp_RandomEnemyController2633230817MethodDeclarations.h"
#include "AssemblyU2DCSharp_RandomTile2109107761.h"
#include "AssemblyU2DCSharp_RandomTile2109107761MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer2548470764.h"
#include "UnityEngine_UnityEngine_SpriteRenderer2548470764MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "AssemblyU2DCSharp_WindController2862109156.h"
#include "AssemblyU2DCSharp_WindController2862109156MethodDeclarations.h"

// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3133387403_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m3133387403(__this /* static, unused */, p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t3674682005_m3917608929(__this /* static, unused */, p0, method) ((  GameObject_t3674682005 * (*) (Il2CppObject * /* static, unused */, GameObject_t3674682005 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<GameManagerController>()
#define GameObject_GetComponent_TisGameManagerController_t956023095_m561619658(__this, method) ((  GameManagerController_t956023095 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<MapGenerator>()
#define GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526(__this, method) ((  MapGenerator_t600092919 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
#define GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(__this, method) ((  PlayerController_t2866526589 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(__this, method) ((  Rigidbody2D_t1743771669 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<DropsKeyController>()
#define GameObject_GetComponent_TisDropsKeyController_t2644906615_m1992774022(__this, method) ((  DropsKeyController_t2644906615 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t2776330603_m4147395588(__this, method) ((  Animator_t2776330603 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, method) ((  Rigidbody2D_t1743771669 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846(__this, method) ((  SpriteRenderer_t2548470764 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DropsKeyController::.ctor()
extern "C"  void DropsKeyController__ctor_m3981952004 (DropsKeyController_t2644906615 * __this, const MethodInfo* method)
{
	{
		__this->set_lives_5(1);
		__this->set_valuePoints_6(((int32_t)100));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DropsKeyController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2696232;
extern Il2CppCodeGenString* _stringLiteral2369589051;
extern const uint32_t DropsKeyController_OnCollisionEnter2D_m2625863278_MetadataUsageId;
extern "C"  void DropsKeyController_OnCollisionEnter2D_m2625863278 (DropsKeyController_t2644906615 * __this, Collision2D_t2859305914 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DropsKeyController_OnCollisionEnter2D_m2625863278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		Collision2D_t2859305914 * L_0 = ___coll0;
		Collider2D_t1552025098 * L_1 = Collision2D_get_collider_m4116040666(L_0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = Component_get_gameObject_m1170635899(L_1, /*hidden argument*/NULL);
		bool L_3 = GameObject_CompareTag_m3153977471(L_2, _stringLiteral2696232, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_4 = __this->get_lives_5();
		__this->set_lives_5(((int32_t)((int32_t)L_4-(int32_t)1)));
		int32_t L_5 = __this->get_lives_5();
		if (L_5)
		{
			goto IL_0091;
		}
	}
	{
		bool L_6 = __this->get_dropsKey_4();
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t3674682005 * L_7 = __this->get_key_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_8 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_0 = L_8;
		GameObject_t3674682005 * L_9 = V_0;
		Transform_t1659122786 * L_10 = GameObject_get_transform_m1278640159(L_9, /*hidden argument*/NULL);
		Transform_t1659122786 * L_11 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		GameObject_t3674682005 * L_13 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_14 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral2369589051, /*hidden argument*/NULL);
		__this->set_gameManager_3(L_14);
		GameObject_t3674682005 * L_15 = __this->get_gameManager_3();
		GameManagerController_t956023095 * L_16 = GameObject_GetComponent_TisGameManagerController_t956023095_m561619658(L_15, /*hidden argument*/GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var);
		int32_t L_17 = __this->get_valuePoints_6();
		GameManagerController_scorePoints_m1999971896(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0091:
	{
		Collision2D_t2859305914 * L_18 = ___coll0;
		Collider2D_t1552025098 * L_19 = Collision2D_get_collider_m4116040666(L_18, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_20 = Component_get_gameObject_m1170635899(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void GameManagerController::.ctor()
extern "C"  void GameManagerController__ctor_m3470501396 (GameManagerController_t956023095 * __this, const MethodInfo* method)
{
	{
		__this->set_tutorialShowing_4((bool)1);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManagerController::Start()
extern const MethodInfo* GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526_MethodInfo_var;
extern const uint32_t GameManagerController_Start_m2417639188_MetadataUsageId;
extern "C"  void GameManagerController_Start_m2417639188 (GameManagerController_t956023095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManagerController_Start_m2417639188_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = __this->get_mapGenerator_3();
		MapGenerator_t600092919 * L_1 = GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526(L_0, /*hidden argument*/GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526_MethodInfo_var);
		MapGenerator_newGame_m401161652(L_1, /*hidden argument*/NULL);
		GameManagerController_showGameOver_m995361546(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManagerController::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var;
extern const uint32_t GameManagerController_Update_m1938222969_MetadataUsageId;
extern "C"  void GameManagerController_Update_m1938222969 (GameManagerController_t956023095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManagerController_Update_m1938222969_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = __this->get_mapGenerator_3();
		MapGenerator_t600092919 * L_1 = GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526(L_0, /*hidden argument*/GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526_MethodInfo_var);
		int32_t L_2 = L_1->get_width_4();
		if ((((int32_t)L_2) <= ((int32_t)7)))
		{
			goto IL_001d;
		}
	}
	{
		GameManagerController_showTutorial_m1109428866(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		bool L_3 = __this->get_gameOver_8();
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		GameManagerController_showTutorial_m1109428866(__this, (bool)0, /*hidden argument*/NULL);
		GameManagerController_showGameOver_m995361546(__this, (bool)1, /*hidden argument*/NULL);
		__this->set_points_9(0);
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00e4;
		}
	}
	{
		bool L_5 = __this->get_gameOver_8();
		if (!L_5)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t3674682005 * L_6 = __this->get_mapGenerator_3();
		MapGenerator_t600092919 * L_7 = GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526(L_6, /*hidden argument*/GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526_MethodInfo_var);
		MapGenerator_newGame_m401161652(L_7, /*hidden argument*/NULL);
		GameManagerController_showGameOver_m995361546(__this, (bool)0, /*hidden argument*/NULL);
		GameManagerController_showTutorial_m1109428866(__this, (bool)1, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_8 = __this->get_player_2();
		PlayerController_t2866526589 * L_9 = GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(L_8, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var);
		GameObject_t3674682005 * L_10 = __this->get_player_2();
		PlayerController_t2866526589 * L_11 = GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(L_10, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var);
		int32_t L_12 = L_11->get_MAX_LIVES_17();
		L_9->set_lives_19(L_12);
		GameObject_t3674682005 * L_13 = __this->get_player_2();
		PlayerController_t2866526589 * L_14 = GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(L_13, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var);
		GameObject_t3674682005 * L_15 = __this->get_player_2();
		PlayerController_t2866526589 * L_16 = GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488(L_15, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2866526589_m3745895488_MethodInfo_var);
		int32_t L_17 = L_16->get_MAX_MANA_18();
		L_14->set_mana_20(L_17);
		GameObject_t3674682005 * L_18 = __this->get_player_2();
		Transform_t1659122786 * L_19 = GameObject_get_transform_m1278640159(L_18, /*hidden argument*/NULL);
		Vector2_t4282066565  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector2__ctor_m1517109030(&L_20, (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_21 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_19, L_21, /*hidden argument*/NULL);
		__this->set_gameOver_8((bool)0);
		GameManagerController_scorePoints_m1999971896(__this, 0, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		return;
	}
}
// System.Void GameManagerController::showTutorial(System.Boolean)
extern "C"  void GameManagerController_showTutorial_m1109428866 (GameManagerController_t956023095 * __this, bool ___show0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		TextU5BU5D_t3798907012* L_0 = __this->get_tutorialTexts_5();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Text_t9039225 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___show0;
		Behaviour_set_enabled_m2046806933(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		TextU5BU5D_t3798907012* L_7 = __this->get_tutorialTexts_5();
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GameManagerController::showGameOver(System.Boolean)
extern "C"  void GameManagerController_showGameOver_m995361546 (GameManagerController_t956023095 * __this, bool ___show0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		TextU5BU5D_t3798907012* L_0 = __this->get_gameOverTexts_6();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Text_t9039225 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___show0;
		Behaviour_set_enabled_m2046806933(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		TextU5BU5D_t3798907012* L_7 = __this->get_gameOverTexts_6();
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GameManagerController::gameIsOver()
extern "C"  void GameManagerController_gameIsOver_m3768371456 (GameManagerController_t956023095 * __this, const MethodInfo* method)
{
	{
		GameManagerController_showGameOver_m995361546(__this, (bool)1, /*hidden argument*/NULL);
		__this->set_gameOver_8((bool)1);
		return;
	}
}
// System.Void GameManagerController::scorePoints(System.Int32)
extern "C"  void GameManagerController_scorePoints_m1999971896 (GameManagerController_t956023095 * __this, int32_t ___moarPoints0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_points_9();
		int32_t L_1 = ___moarPoints0;
		__this->set_points_9(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		Text_t9039225 * L_2 = __this->get_pointsText_7();
		int32_t* L_3 = __this->get_address_of_points_9();
		String_t* L_4 = Int32_ToString_m1286526384(L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		return;
	}
}
// System.Void GreenFireBallController::.ctor()
extern "C"  void GreenFireBallController__ctor_m4130705111 (GreenFireBallController_t954042132 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GreenFireBallController::Start()
extern "C"  void GreenFireBallController_Start_m3077842903 (GreenFireBallController_t954042132 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GreenFireBallController::Update()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t GreenFireBallController_Update_m929701654_MetadataUsageId;
extern "C"  void GreenFireBallController_Update_m929701654 (GreenFireBallController_t954042132 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GreenFireBallController_Update_m929701654_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_currentTTL_3();
		__this->set_currentTTL_3(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = __this->get_currentTTL_3();
		int32_t L_2 = __this->get_TTL_2();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		return;
	}
}
// System.Void GreenFireBallController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t GreenFireBallController_OnCollisionEnter2D_m3675757505_MetadataUsageId;
extern "C"  void GreenFireBallController_OnCollisionEnter2D_m3675757505 (GreenFireBallController_t954042132 * __this, Collision2D_t2859305914 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GreenFireBallController_OnCollisionEnter2D_m3675757505_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GreenFireTrapController::.ctor()
extern "C"  void GreenFireTrapController__ctor_m814253801 (GreenFireTrapController_t4028224194 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((6.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GreenFireTrapController::Start()
extern "C"  void GreenFireTrapController_Start_m4056358889 (GreenFireTrapController_t4028224194 * __this, const MethodInfo* method)
{
	{
		__this->set_frames_3(((int32_t)50));
		return;
	}
}
// System.Void GreenFireTrapController::Update()
extern "C"  void GreenFireTrapController_Update_m1198926148 (GreenFireTrapController_t4028224194 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_frames_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0014;
		}
	}
	{
		__this->set_frames_3(0);
	}

IL_0014:
	{
		int32_t L_1 = __this->get_frames_3();
		if (L_1)
		{
			goto IL_00c2;
		}
	}
	{
		float L_2 = __this->get_speed_2();
		Vector2_t4282066565  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m1517109030(&L_3, (0.0f), L_2, /*hidden argument*/NULL);
		Vector2_t4282066565  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m1517109030(&L_4, (0.0f), (1.1f), /*hidden argument*/NULL);
		GreenFireTrapController_fireGreenFireBall_m572151874(__this, ((int32_t)270), L_3, L_4, /*hidden argument*/NULL);
		float L_5 = __this->get_speed_2();
		Vector2_t4282066565  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m1517109030(&L_6, (0.0f), ((-L_5)), /*hidden argument*/NULL);
		Vector2_t4282066565  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m1517109030(&L_7, (0.0f), (-1.1f), /*hidden argument*/NULL);
		GreenFireTrapController_fireGreenFireBall_m572151874(__this, ((int32_t)90), L_6, L_7, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_2();
		Vector2_t4282066565  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m1517109030(&L_9, L_8, (0.0f), /*hidden argument*/NULL);
		Vector2_t4282066565  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m1517109030(&L_10, (1.1f), (0.0f), /*hidden argument*/NULL);
		GreenFireTrapController_fireGreenFireBall_m572151874(__this, ((int32_t)180), L_9, L_10, /*hidden argument*/NULL);
		float L_11 = __this->get_speed_2();
		Vector2_t4282066565  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_m1517109030(&L_12, ((-L_11)), (0.0f), /*hidden argument*/NULL);
		Vector2_t4282066565  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m1517109030(&L_13, (-1.1f), (0.0f), /*hidden argument*/NULL);
		GreenFireTrapController_fireGreenFireBall_m572151874(__this, 0, L_12, L_13, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		int32_t L_14 = __this->get_frames_3();
		__this->set_frames_3(((int32_t)((int32_t)L_14+(int32_t)1)));
		return;
	}
}
// System.Void GreenFireTrapController::fireGreenFireBall(System.Int32,UnityEngine.Vector2,UnityEngine.Vector2)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var;
extern const uint32_t GreenFireTrapController_fireGreenFireBall_m572151874_MetadataUsageId;
extern "C"  void GreenFireTrapController_fireGreenFireBall_m572151874 (GreenFireTrapController_t4028224194 * __this, int32_t ___rotation0, Vector2_t4282066565  ___speed1, Vector2_t4282066565  ___offset2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GreenFireTrapController_fireGreenFireBall_m572151874_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		GameObject_t3674682005 * L_0 = __this->get_greenFireBall_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_1 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_0 = L_1;
		GameObject_t3674682005 * L_2 = V_0;
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		Vector2_t4282066565  L_6 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Vector2_t4282066565  L_7 = ___offset2;
		Vector2_t4282066565  L_8 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_3, L_9, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_10 = V_0;
		Transform_t1659122786 * L_11 = GameObject_get_transform_m1278640159(L_10, /*hidden argument*/NULL);
		int32_t L_12 = ___rotation0;
		Quaternion_t1553702882  L_13 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (0.0f), (0.0f), (((float)((float)L_12))), /*hidden argument*/NULL);
		Transform_set_rotation_m1525803229(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_14 = V_0;
		Rigidbody2D_t1743771669 * L_15 = GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(L_14, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var);
		Vector2_t4282066565  L_16 = ___speed1;
		Rigidbody2D_set_velocity_m100625302(L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapGenerator::.ctor()
extern "C"  void MapGenerator__ctor_m2435147652 (MapGenerator_t600092919 * __this, const MethodInfo* method)
{
	{
		__this->set_startingWidth_2(5);
		__this->set_startingHeight_3(5);
		__this->set_width_4(5);
		__this->set_height_5(5);
		__this->set_BOSS_EVERY_17(3);
		__this->set_nextBossIn_18(3);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapGenerator::Start()
extern "C"  void MapGenerator_Start_m1382285444 (MapGenerator_t600092919 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MapGenerator::newGame()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const uint32_t MapGenerator_newGame_m401161652_MetadataUsageId;
extern "C"  void MapGenerator_newGame_m401161652 (MapGenerator_t600092919 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_newGame_m401161652_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		MapGenerator_cleanGame_m2576255837(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_startingWidth_2();
		__this->set_width_4(L_0);
		int32_t L_1 = __this->get_startingHeight_3();
		__this->set_height_5(L_1);
		MapGenerator_generateRoom_m4294628880(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = __this->get_Key_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_3 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_0 = L_3;
		GameObject_t3674682005 * L_4 = V_0;
		Transform_t1659122786 * L_5 = GameObject_get_transform_m1278640159(L_4, /*hidden argument*/NULL);
		Vector2_t4282066565  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m1517109030(&L_6, (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_5, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_BOSS_EVERY_17();
		__this->set_nextBossIn_18(L_8);
		return;
	}
}
// System.Void MapGenerator::generateRoom()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const uint32_t MapGenerator_generateRoom_m4294628880_MetadataUsageId;
extern "C"  void MapGenerator_generateRoom_m4294628880 (MapGenerator_t600092919 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_generateRoom_m4294628880_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t3674682005 * V_3 = NULL;
	{
		GameObjectU5BU5D_t2662109048* L_0 = __this->get_floorPrefabs_7();
		int32_t L_1 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0103;
	}

IL_0016:
	{
		V_2 = 0;
		goto IL_00f3;
	}

IL_001d:
	{
		int32_t L_2 = V_2;
		int32_t L_3 = __this->get_height_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)((int32_t)L_3-(int32_t)1))))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = V_1;
		int32_t L_5 = __this->get_width_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)((int32_t)L_5/(int32_t)2))))))
		{
			goto IL_004a;
		}
	}
	{
		GameObject_t3674682005 * L_6 = __this->get_Door_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_7 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_3 = L_7;
		goto IL_00c4;
	}

IL_004a:
	{
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		GameObject_t3674682005 * L_9 = __this->get_WallLeft_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_10 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_3 = L_10;
		goto IL_00c4;
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_width_4();
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)((int32_t)L_12-(int32_t)1))))))
		{
			goto IL_0080;
		}
	}
	{
		GameObject_t3674682005 * L_13 = __this->get_WallRight_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_14 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_3 = L_14;
		goto IL_00c4;
	}

IL_0080:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = __this->get_height_5();
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)((int32_t)L_16-(int32_t)1))))))
		{
			goto IL_009f;
		}
	}
	{
		GameObject_t3674682005 * L_17 = __this->get_WallUp_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_18 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_3 = L_18;
		goto IL_00c4;
	}

IL_009f:
	{
		int32_t L_19 = V_2;
		if (L_19)
		{
			goto IL_00b6;
		}
	}
	{
		GameObject_t3674682005 * L_20 = __this->get_WallDown_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_21 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_20, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_3 = L_21;
		goto IL_00c4;
	}

IL_00b6:
	{
		GameObjectU5BU5D_t2662109048* L_22 = __this->get_floorPrefabs_7();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		GameObject_t3674682005 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_26 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_3 = L_26;
	}

IL_00c4:
	{
		GameObject_t3674682005 * L_27 = V_3;
		Transform_t1659122786 * L_28 = GameObject_get_transform_m1278640159(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		int32_t L_30 = __this->get_width_4();
		int32_t L_31 = V_2;
		int32_t L_32 = __this->get_height_5();
		Vector2_t4282066565  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector2__ctor_m1517109030(&L_33, (((float)((float)((int32_t)((int32_t)L_29-(int32_t)((int32_t)((int32_t)L_30/(int32_t)2))))))), (((float)((float)((int32_t)((int32_t)L_31-(int32_t)((int32_t)((int32_t)L_32/(int32_t)2))))))), /*hidden argument*/NULL);
		Vector3_t4282066566  L_34 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_28, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_2;
		V_2 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_00f3:
	{
		int32_t L_36 = V_2;
		int32_t L_37 = __this->get_height_5();
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0103:
	{
		int32_t L_39 = V_1;
		int32_t L_40 = __this->get_width_4();
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void MapGenerator::deleteRoom()
extern Il2CppCodeGenString* _stringLiteral913253329;
extern Il2CppCodeGenString* _stringLiteral4186375525;
extern Il2CppCodeGenString* _stringLiteral4185823049;
extern Il2CppCodeGenString* _stringLiteral67100520;
extern const uint32_t MapGenerator_deleteRoom_m361922950_MetadataUsageId;
extern "C"  void MapGenerator_deleteRoom_m361922950 (MapGenerator_t600092919 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_deleteRoom_m361922950_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MapGenerator_destroyObjectsWithTag_m2318429286(__this, _stringLiteral913253329, /*hidden argument*/NULL);
		MapGenerator_destroyObjectsWithTag_m2318429286(__this, _stringLiteral4186375525, /*hidden argument*/NULL);
		MapGenerator_destroyObjectsWithTag_m2318429286(__this, _stringLiteral4185823049, /*hidden argument*/NULL);
		MapGenerator_destroyObjectsWithTag_m2318429286(__this, _stringLiteral67100520, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapGenerator::cleanGame()
extern Il2CppCodeGenString* _stringLiteral75327;
extern Il2CppCodeGenString* _stringLiteral186578623;
extern Il2CppCodeGenString* _stringLiteral10295329;
extern const uint32_t MapGenerator_cleanGame_m2576255837_MetadataUsageId;
extern "C"  void MapGenerator_cleanGame_m2576255837 (MapGenerator_t600092919 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_cleanGame_m2576255837_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MapGenerator_deleteRoom_m361922950(__this, /*hidden argument*/NULL);
		MapGenerator_destroyObjectsWithTag_m2318429286(__this, _stringLiteral75327, /*hidden argument*/NULL);
		MapGenerator_destroyObjectsWithTag_m2318429286(__this, _stringLiteral186578623, /*hidden argument*/NULL);
		MapGenerator_destroyObjectsWithTag_m2318429286(__this, _stringLiteral10295329, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MapGenerator::destroyObjectsWithTag(System.String)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t MapGenerator_destroyObjectsWithTag_m2318429286_MetadataUsageId;
extern "C"  void MapGenerator_destroyObjectsWithTag_m2318429286 (MapGenerator_t600092919 * __this, String_t* ___tag0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_destroyObjectsWithTag_m2318429286_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObjectU5BU5D_t2662109048* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___tag0;
		GameObjectU5BU5D_t2662109048* L_1 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001a;
	}

IL_000e:
	{
		GameObjectU5BU5D_t2662109048* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		GameObject_t3674682005 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_7 = V_1;
		GameObjectU5BU5D_t2662109048* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void MapGenerator::increaseRoom()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDropsKeyController_t2644906615_m1992774022_MethodInfo_var;
extern const uint32_t MapGenerator_increaseRoom_m2444275997_MetadataUsageId;
extern "C"  void MapGenerator_increaseRoom_m2444275997 (MapGenerator_t600092919 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_increaseRoom_m2444275997_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t3674682005 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObject_t3674682005 * V_5 = NULL;
	{
		GameObject_t3674682005 * L_0 = __this->get_gameManager_6();
		GameManagerController_t956023095 * L_1 = GameObject_GetComponent_TisGameManagerController_t956023095_m561619658(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var);
		GameManagerController_scorePoints_m1999971896(L_1, ((int32_t)500), /*hidden argument*/NULL);
		int32_t L_2 = __this->get_nextBossIn_18();
		__this->set_nextBossIn_18(((int32_t)((int32_t)L_2-(int32_t)1)));
		MapGenerator_deleteRoom_m361922950(__this, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_width_4();
		__this->set_width_4(((int32_t)((int32_t)L_3+(int32_t)2)));
		int32_t L_4 = __this->get_height_5();
		__this->set_height_5(((int32_t)((int32_t)L_4+(int32_t)2)));
		MapGenerator_generateRoom_m4294628880(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_width_4();
		int32_t L_6 = __this->get_height_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_7 = bankers_roundf(((float)((float)(((float)((float)((int32_t)((int32_t)L_5*(int32_t)L_6)))))*(float)(0.01f))));
		V_0 = (((int32_t)((int32_t)L_7)));
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_9 = __this->get_nextBossIn_18();
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		GameObject_t3674682005 * L_10 = __this->get_Key_13();
		MapGenerator_placeRandom_m2794325647(__this, L_10, /*hidden argument*/NULL);
		goto IL_00c9;
	}

IL_0089:
	{
		V_1 = 0;
		goto IL_00c2;
	}

IL_0090:
	{
		GameObjectU5BU5D_t2662109048* L_11 = __this->get_Enemies_14();
		GameObjectU5BU5D_t2662109048* L_12 = __this->get_Enemies_14();
		int32_t L_13 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_12)->max_length)))), /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		GameObject_t3674682005 * L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		GameObject_t3674682005 * L_16 = MapGenerator_placeRandom_m2794325647(__this, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_00be;
		}
	}
	{
		GameObject_t3674682005 * L_18 = V_2;
		DropsKeyController_t2644906615 * L_19 = GameObject_GetComponent_TisDropsKeyController_t2644906615_m1992774022(L_18, /*hidden argument*/GameObject_GetComponent_TisDropsKeyController_t2644906615_m1992774022_MethodInfo_var);
		L_19->set_dropsKey_4((bool)1);
	}

IL_00be:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c2:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0090;
		}
	}

IL_00c9:
	{
		int32_t L_23 = __this->get_width_4();
		int32_t L_24 = __this->get_height_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_25 = bankers_roundf(((float)((float)(((float)((float)((int32_t)((int32_t)L_23*(int32_t)L_24)))))*(float)(0.005f))));
		V_3 = (((int32_t)((int32_t)L_25)));
		V_4 = 0;
		goto IL_010e;
	}

IL_00ec:
	{
		GameObjectU5BU5D_t2662109048* L_26 = __this->get_Goodies_15();
		GameObjectU5BU5D_t2662109048* L_27 = __this->get_Goodies_15();
		int32_t L_28 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_27)->max_length)))), /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		GameObject_t3674682005 * L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		MapGenerator_placeRandom_m2794325647(__this, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_4;
		V_4 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_010e:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = V_3;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_34 = __this->get_nextBossIn_18();
		if (L_34)
		{
			goto IL_0148;
		}
	}
	{
		GameObject_t3674682005 * L_35 = __this->get_Boss_16();
		GameObject_t3674682005 * L_36 = MapGenerator_placeRandom_m2794325647(__this, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		GameObject_t3674682005 * L_37 = V_5;
		DropsKeyController_t2644906615 * L_38 = GameObject_GetComponent_TisDropsKeyController_t2644906615_m1992774022(L_37, /*hidden argument*/GameObject_GetComponent_TisDropsKeyController_t2644906615_m1992774022_MethodInfo_var);
		L_38->set_dropsKey_4((bool)1);
		int32_t L_39 = __this->get_BOSS_EVERY_17();
		__this->set_nextBossIn_18(L_39);
	}

IL_0148:
	{
		return;
	}
}
// UnityEngine.GameObject MapGenerator::placeRandom(UnityEngine.GameObject)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const uint32_t MapGenerator_placeRandom_m2794325647_MetadataUsageId;
extern "C"  GameObject_t3674682005 * MapGenerator_placeRandom_m2794325647 (MapGenerator_t600092919 * __this, GameObject_t3674682005 * ___ga0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MapGenerator_placeRandom_m2794325647_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		GameObject_t3674682005 * L_0 = ___ga0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_1 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_0 = L_1;
		GameObject_t3674682005 * L_2 = V_0;
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_width_4();
		int32_t L_5 = Random_Range_m75452833(NULL /*static, unused*/, 2, ((int32_t)((int32_t)L_4-(int32_t)2)), /*hidden argument*/NULL);
		int32_t L_6 = __this->get_width_4();
		int32_t L_7 = __this->get_height_5();
		int32_t L_8 = Random_Range_m75452833(NULL /*static, unused*/, 2, ((int32_t)((int32_t)L_7-(int32_t)2)), /*hidden argument*/NULL);
		int32_t L_9 = __this->get_height_5();
		Vector2_t4282066565  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m1517109030(&L_10, (((float)((float)((int32_t)((int32_t)L_5-(int32_t)((int32_t)((int32_t)L_6/(int32_t)2))))))), (((float)((float)((int32_t)((int32_t)L_8-(int32_t)((int32_t)((int32_t)L_9/(int32_t)2))))))), /*hidden argument*/NULL);
		Vector3_t4282066566  L_11 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_3, L_11, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_12 = V_0;
		return L_12;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_4((2.0f));
		__this->set_windAttackSpeed_12((6.0f));
		__this->set_MAX_LIVES_17(3);
		__this->set_MAX_MANA_18(((int32_t)100));
		__this->set_lives_19(3);
		__this->set_mana_20(((int32_t)100));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisAnimator_t2776330603_m4147395588_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t2776330603 * L_0 = Component_GetComponent_TisAnimator_t2776330603_m4147395588(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t2776330603_m4147395588_MethodInfo_var);
		__this->set_animator_2(L_0);
		Rigidbody2D_t1743771669 * L_1 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		__this->set_rb2D_3(L_1);
		PlayerController_updatePlayerUI_m569172740(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::updatePlayerUI()
extern "C"  void PlayerController_updatePlayerUI_m569172740 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		Text_t9039225 * L_0 = __this->get_livesText_14();
		int32_t* L_1 = __this->get_address_of_lives_19();
		String_t* L_2 = Int32_ToString_m1286526384(L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		Text_t9039225 * L_3 = __this->get_keyText_15();
		int32_t* L_4 = __this->get_address_of_keys_21();
		String_t* L_5 = Int32_ToString_m1286526384(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		Text_t9039225 * L_6 = __this->get_manaText_16();
		int32_t* L_7 = __this->get_address_of_mana_20();
		String_t* L_8 = Int32_ToString_m1286526384(L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		return;
	}
}
// System.Void PlayerController::launchWindAttack(System.Int32,UnityEngine.Vector2)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var;
extern const uint32_t PlayerController_launchWindAttack_m976349230_MetadataUsageId;
extern "C"  void PlayerController_launchWindAttack_m976349230 (PlayerController_t2866526589 * __this, int32_t ___direction0, Vector2_t4282066565  ___speed1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_launchWindAttack_m976349230_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	Rigidbody2D_t1743771669 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_mana_20();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = __this->get_mana_20();
		__this->set_mana_20(((int32_t)((int32_t)L_1-(int32_t)1)));
		GameObject_t3674682005 * L_2 = __this->get_windPrefab_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_3 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_0 = L_3;
		GameObject_t3674682005 * L_4 = V_0;
		Rigidbody2D_t1743771669 * L_5 = GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481(L_4, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t1743771669_m3829971481_MethodInfo_var);
		V_1 = L_5;
		GameObject_t3674682005 * L_6 = V_0;
		Transform_t1659122786 * L_7 = GameObject_get_transform_m1278640159(L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___direction0;
		Quaternion_t1553702882  L_9 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (0.0f), (0.0f), (((float)((float)L_8))), /*hidden argument*/NULL);
		Transform_set_rotation_m1525803229(L_7, L_9, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_10 = V_1;
		Vector2_t4282066565  L_11 = ___speed1;
		Rigidbody2D_set_velocity_m100625302(L_10, L_11, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_12 = V_1;
		GameObject_t3674682005 * L_13 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_14 = GameObject_get_transform_m1278640159(L_13, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Transform_get_position_m2211398607(L_14, /*hidden argument*/NULL);
		Vector2_t4282066565  L_16 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Rigidbody2D_set_position_m2296903370(L_12, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral539036911;
extern Il2CppCodeGenString* _stringLiteral3332376447;
extern Il2CppCodeGenString* _stringLiteral3013793183;
extern const uint32_t PlayerController_Update_m2536587535_MetadataUsageId;
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m2536587535_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t3674682005 * L_0 = __this->get_gameManager_11();
		GameManagerController_t956023095 * L_1 = GameObject_GetComponent_TisGameManagerController_t956023095_m561619658(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var);
		bool L_2 = L_1->get_gameOver_8();
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		Animator_t2776330603 * L_4 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_4, _stringLiteral539036911, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_5 = __this->get_animator_2();
		Animator_SetInteger_m4253187183(L_5, _stringLiteral3332376447, 1, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_6 = __this->get_rb2D_3();
		float L_7 = __this->get_speed_4();
		Vector2_t4282066565  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector2__ctor_m1517109030(&L_8, (0.0f), L_7, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_6, L_8, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00dd;
		}
	}
	{
		Animator_t2776330603 * L_10 = __this->get_animator_2();
		bool L_11 = Animator_GetBool_m436748612(L_10, _stringLiteral539036911, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0096;
		}
	}
	{
		Animator_t2776330603 * L_12 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_12, _stringLiteral539036911, (bool)1, /*hidden argument*/NULL);
	}

IL_0096:
	{
		Animator_t2776330603 * L_13 = __this->get_animator_2();
		int32_t L_14 = Animator_GetInteger_m2467155164(L_13, _stringLiteral3332376447, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)4)))
		{
			goto IL_00bd;
		}
	}
	{
		Animator_t2776330603 * L_15 = __this->get_animator_2();
		Animator_SetInteger_m4253187183(L_15, _stringLiteral3332376447, 4, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		Rigidbody2D_t1743771669 * L_16 = __this->get_rb2D_3();
		float L_17 = __this->get_speed_4();
		Vector2_t4282066565  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector2__ctor_m1517109030(&L_18, L_17, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_16, L_18, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_00dd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_19 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_012c;
		}
	}
	{
		Animator_t2776330603 * L_20 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_20, _stringLiteral539036911, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_21 = __this->get_animator_2();
		Animator_SetInteger_m4253187183(L_21, _stringLiteral3332376447, 3, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_22 = __this->get_rb2D_3();
		float L_23 = __this->get_speed_4();
		Vector2_t4282066565  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector2__ctor_m1517109030(&L_24, (0.0f), ((-L_23)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_22, L_24, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_012c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_25 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_017b;
		}
	}
	{
		Animator_t2776330603 * L_26 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_26, _stringLiteral539036911, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_27 = __this->get_animator_2();
		Animator_SetInteger_m4253187183(L_27, _stringLiteral3332376447, 2, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_28 = __this->get_rb2D_3();
		float L_29 = __this->get_speed_4();
		Vector2_t4282066565  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector2__ctor_m1517109030(&L_30, ((-L_29)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_28, L_30, /*hidden argument*/NULL);
		goto IL_01d6;
	}

IL_017b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_31 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_01ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_32 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_01ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_33 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_01ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_34 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_01d6;
		}
	}

IL_01ab:
	{
		Animator_t2776330603 * L_35 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_35, _stringLiteral539036911, (bool)0, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_36 = __this->get_rb2D_3();
		Vector2_t4282066565  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector2__ctor_m1517109030(&L_37, (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_36, L_37, /*hidden argument*/NULL);
	}

IL_01d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_38 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_02a6;
		}
	}
	{
		Animator_t2776330603 * L_39 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_39, _stringLiteral3013793183, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_40 = __this->get_animator_2();
		int32_t L_41 = Animator_GetInteger_m2467155164(L_40, _stringLiteral3332376447, /*hidden argument*/NULL);
		V_0 = L_41;
		int32_t L_42 = V_0;
		if (((int32_t)((int32_t)L_42-(int32_t)1)) == 0)
		{
			goto IL_0221;
		}
		if (((int32_t)((int32_t)L_42-(int32_t)1)) == 1)
		{
			goto IL_0241;
		}
		if (((int32_t)((int32_t)L_42-(int32_t)1)) == 2)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_42-(int32_t)1)) == 3)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_029c;
	}

IL_0221:
	{
		float L_43 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector2__ctor_m1517109030(&L_44, (0.0f), L_43, /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, ((int32_t)270), L_44, /*hidden argument*/NULL);
		goto IL_02a1;
	}

IL_0241:
	{
		float L_45 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Vector2__ctor_m1517109030(&L_46, ((-L_45)), (0.0f), /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, 0, L_46, /*hidden argument*/NULL);
		goto IL_02a1;
	}

IL_025e:
	{
		float L_47 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_48;
		memset(&L_48, 0, sizeof(L_48));
		Vector2__ctor_m1517109030(&L_48, (0.0f), ((-L_47)), /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, ((int32_t)90), L_48, /*hidden argument*/NULL);
		goto IL_02a1;
	}

IL_027c:
	{
		float L_49 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2__ctor_m1517109030(&L_50, L_49, (0.0f), /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, ((int32_t)180), L_50, /*hidden argument*/NULL);
		goto IL_02a1;
	}

IL_029c:
	{
		goto IL_02a1;
	}

IL_02a1:
	{
		goto IL_02c3;
	}

IL_02a6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_51 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_02c3;
		}
	}
	{
		Animator_t2776330603 * L_52 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_52, _stringLiteral3013793183, (bool)0, /*hidden argument*/NULL);
	}

IL_02c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_53 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_034c;
		}
	}
	{
		Animator_t2776330603 * L_54 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_54, _stringLiteral3013793183, (bool)1, /*hidden argument*/NULL);
		float L_55 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector2__ctor_m1517109030(&L_56, (0.0f), L_55, /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, ((int32_t)270), L_56, /*hidden argument*/NULL);
		float L_57 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_58;
		memset(&L_58, 0, sizeof(L_58));
		Vector2__ctor_m1517109030(&L_58, ((-L_57)), (0.0f), /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, 0, L_58, /*hidden argument*/NULL);
		float L_59 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_60;
		memset(&L_60, 0, sizeof(L_60));
		Vector2__ctor_m1517109030(&L_60, (0.0f), ((-L_59)), /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, ((int32_t)90), L_60, /*hidden argument*/NULL);
		float L_61 = __this->get_windAttackSpeed_12();
		Vector2_t4282066565  L_62;
		memset(&L_62, 0, sizeof(L_62));
		Vector2__ctor_m1517109030(&L_62, L_61, (0.0f), /*hidden argument*/NULL);
		PlayerController_launchWindAttack_m976349230(__this, ((int32_t)180), L_62, /*hidden argument*/NULL);
		goto IL_0369;
	}

IL_034c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_63 = Input_GetKeyUp_m2739135306(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_0369;
		}
	}
	{
		Animator_t2776330603 * L_64 = __this->get_animator_2();
		Animator_SetBool_m2336836203(L_64, _stringLiteral3013793183, (bool)0, /*hidden argument*/NULL);
	}

IL_0369:
	{
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral75327;
extern Il2CppCodeGenString* _stringLiteral4185823049;
extern Il2CppCodeGenString* _stringLiteral67100520;
extern Il2CppCodeGenString* _stringLiteral186578623;
extern Il2CppCodeGenString* _stringLiteral10295329;
extern const uint32_t PlayerController_OnCollisionEnter2D_m632467240_MetadataUsageId;
extern "C"  void PlayerController_OnCollisionEnter2D_m632467240 (PlayerController_t2866526589 * __this, Collision2D_t2859305914 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnCollisionEnter2D_m632467240_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t2859305914 * L_0 = ___coll0;
		Collider2D_t1552025098 * L_1 = Collision2D_get_collider_m4116040666(L_0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = Component_get_gameObject_m1170635899(L_1, /*hidden argument*/NULL);
		bool L_3 = GameObject_CompareTag_m3153977471(L_2, _stringLiteral75327, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		Collision2D_t2859305914 * L_4 = ___coll0;
		Collider2D_t1552025098 * L_5 = Collision2D_get_collider_m4116040666(L_4, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_6 = Component_get_gameObject_m1170635899(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_keys_21();
		__this->set_keys_21(((int32_t)((int32_t)L_7+(int32_t)1)));
		AudioSource_t1740077639 * L_8 = __this->get_pickup_5();
		AudioSource_Play_m1360558992(L_8, /*hidden argument*/NULL);
		goto IL_01d8;
	}

IL_0048:
	{
		Collision2D_t2859305914 * L_9 = ___coll0;
		Collider2D_t1552025098 * L_10 = Collision2D_get_collider_m4116040666(L_9, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_11 = Component_get_gameObject_m1170635899(L_10, /*hidden argument*/NULL);
		bool L_12 = GameObject_CompareTag_m3153977471(L_11, _stringLiteral4185823049, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_13 = __this->get_keys_21();
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		GameObject_t3674682005 * L_14 = __this->get_mapGenerator_10();
		MapGenerator_t600092919 * L_15 = GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526(L_14, /*hidden argument*/GameObject_GetComponent_TisMapGenerator_t600092919_m2062299526_MethodInfo_var);
		MapGenerator_increaseRoom_m2444275997(L_15, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_keys_21();
		__this->set_keys_21(((int32_t)((int32_t)L_16-(int32_t)1)));
		AudioSource_t1740077639 * L_17 = __this->get_roomIncrease_6();
		AudioSource_Play_m1360558992(L_17, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_009c:
	{
		AudioSource_t1740077639 * L_18 = __this->get_closedDoor_8();
		AudioSource_Play_m1360558992(L_18, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		goto IL_01d8;
	}

IL_00ac:
	{
		Collision2D_t2859305914 * L_19 = ___coll0;
		Collider2D_t1552025098 * L_20 = Collision2D_get_collider_m4116040666(L_19, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_21 = Component_get_gameObject_m1170635899(L_20, /*hidden argument*/NULL);
		bool L_22 = GameObject_CompareTag_m3153977471(L_21, _stringLiteral67100520, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_23 = __this->get_lives_19();
		__this->set_lives_19(((int32_t)((int32_t)L_23-(int32_t)1)));
		AudioSource_t1740077639 * L_24 = __this->get_hurt_7();
		AudioSource_Play_m1360558992(L_24, /*hidden argument*/NULL);
		int32_t L_25 = __this->get_lives_19();
		if (L_25)
		{
			goto IL_00fa;
		}
	}
	{
		GameObject_t3674682005 * L_26 = __this->get_gameManager_11();
		GameManagerController_t956023095 * L_27 = GameObject_GetComponent_TisGameManagerController_t956023095_m561619658(L_26, /*hidden argument*/GameObject_GetComponent_TisGameManagerController_t956023095_m561619658_MethodInfo_var);
		GameManagerController_gameIsOver_m3768371456(L_27, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		int32_t L_28 = __this->get_lives_19();
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		__this->set_lives_19(0);
	}

IL_010d:
	{
		goto IL_01d8;
	}

IL_0112:
	{
		Collision2D_t2859305914 * L_29 = ___coll0;
		Collider2D_t1552025098 * L_30 = Collision2D_get_collider_m4116040666(L_29, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_31 = Component_get_gameObject_m1170635899(L_30, /*hidden argument*/NULL);
		bool L_32 = GameObject_CompareTag_m3153977471(L_31, _stringLiteral186578623, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_33 = __this->get_mana_20();
		__this->set_mana_20(((int32_t)((int32_t)L_33+(int32_t)((int32_t)20))));
		int32_t L_34 = __this->get_mana_20();
		int32_t L_35 = __this->get_MAX_MANA_18();
		if ((((int32_t)L_34) <= ((int32_t)L_35)))
		{
			goto IL_0158;
		}
	}
	{
		int32_t L_36 = __this->get_MAX_MANA_18();
		__this->set_mana_20(L_36);
	}

IL_0158:
	{
		AudioSource_t1740077639 * L_37 = __this->get_pickup_5();
		AudioSource_Play_m1360558992(L_37, /*hidden argument*/NULL);
		Collision2D_t2859305914 * L_38 = ___coll0;
		Collider2D_t1552025098 * L_39 = Collision2D_get_collider_m4116040666(L_38, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_40 = Component_get_gameObject_m1170635899(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		goto IL_01d8;
	}

IL_0178:
	{
		Collision2D_t2859305914 * L_41 = ___coll0;
		Collider2D_t1552025098 * L_42 = Collision2D_get_collider_m4116040666(L_41, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_43 = Component_get_gameObject_m1170635899(L_42, /*hidden argument*/NULL);
		bool L_44 = GameObject_CompareTag_m3153977471(L_43, _stringLiteral10295329, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_45 = __this->get_lives_19();
		__this->set_lives_19(((int32_t)((int32_t)L_45+(int32_t)1)));
		int32_t L_46 = __this->get_lives_19();
		int32_t L_47 = __this->get_MAX_LIVES_17();
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_48 = __this->get_MAX_LIVES_17();
		__this->set_lives_19(L_48);
	}

IL_01bd:
	{
		AudioSource_t1740077639 * L_49 = __this->get_pickup_5();
		AudioSource_Play_m1360558992(L_49, /*hidden argument*/NULL);
		Collision2D_t2859305914 * L_50 = ___coll0;
		Collider2D_t1552025098 * L_51 = Collision2D_get_collider_m4116040666(L_50, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_52 = Component_get_gameObject_m1170635899(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
	}

IL_01d8:
	{
		PlayerController_updatePlayerUI_m569172740(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RandomEnemyController::.ctor()
extern "C"  void RandomEnemyController__ctor_m341154986 (RandomEnemyController_t2633230817 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_3((2.0f));
		__this->set_maxDirectionFrames_4(((int32_t)10));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RandomEnemyController::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern const uint32_t RandomEnemyController_Start_m3583260074_MetadataUsageId;
extern "C"  void RandomEnemyController_Start_m3583260074 (RandomEnemyController_t2633230817 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RandomEnemyController_Start_m3583260074_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t1743771669 * L_0 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		__this->set_rb2D_2(L_0);
		__this->set_nextDirection_5(0);
		__this->set_frames_6(0);
		return;
	}
}
// System.Void RandomEnemyController::Update()
extern "C"  void RandomEnemyController_Update_m3712732067 (RandomEnemyController_t2633230817 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_frames_6();
		int32_t L_1 = __this->get_maxDirectionFrames_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_003f;
		}
	}
	{
		__this->set_frames_6(0);
		Rigidbody2D_t1743771669 * L_2 = __this->get_rb2D_2();
		Vector2_t4282066565  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m1517109030(&L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = Random_Range_m75452833(NULL /*static, unused*/, 1, 5, /*hidden argument*/NULL);
		__this->set_nextDirection_5(L_4);
	}

IL_003f:
	{
		int32_t L_5 = __this->get_frames_6();
		if (L_5)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_6 = __this->get_nextDirection_5();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		Rigidbody2D_t1743771669 * L_7 = __this->get_rb2D_2();
		float L_8 = __this->get_speed_3();
		Vector2_t4282066565  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m1517109030(&L_9, (0.0f), L_8, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_7, L_9, /*hidden argument*/NULL);
		goto IL_00f7;
	}

IL_0076:
	{
		int32_t L_10 = __this->get_nextDirection_5();
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00a2;
		}
	}
	{
		Rigidbody2D_t1743771669 * L_11 = __this->get_rb2D_2();
		float L_12 = __this->get_speed_3();
		Vector2_t4282066565  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m1517109030(&L_13, L_12, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_11, L_13, /*hidden argument*/NULL);
		goto IL_00f7;
	}

IL_00a2:
	{
		int32_t L_14 = __this->get_nextDirection_5();
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_00cf;
		}
	}
	{
		Rigidbody2D_t1743771669 * L_15 = __this->get_rb2D_2();
		float L_16 = __this->get_speed_3();
		Vector2_t4282066565  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector2__ctor_m1517109030(&L_17, (0.0f), ((-L_16)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_15, L_17, /*hidden argument*/NULL);
		goto IL_00f7;
	}

IL_00cf:
	{
		int32_t L_18 = __this->get_nextDirection_5();
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_00f7;
		}
	}
	{
		Rigidbody2D_t1743771669 * L_19 = __this->get_rb2D_2();
		float L_20 = __this->get_speed_3();
		Vector2_t4282066565  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector2__ctor_m1517109030(&L_21, ((-L_20)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_19, L_21, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		int32_t L_22 = __this->get_frames_6();
		__this->set_frames_6(((int32_t)((int32_t)L_22+(int32_t)1)));
		goto IL_0118;
	}

IL_010a:
	{
		int32_t L_23 = __this->get_frames_6();
		__this->set_frames_6(((int32_t)((int32_t)L_23+(int32_t)1)));
	}

IL_0118:
	{
		return;
	}
}
// System.Void RandomTile::.ctor()
extern "C"  void RandomTile__ctor_m2071957898 (RandomTile_t2109107761 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RandomTile::Start()
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846_MethodInfo_var;
extern const uint32_t RandomTile_Start_m1019095690_MetadataUsageId;
extern "C"  void RandomTile_Start_m1019095690 (RandomTile_t2109107761 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RandomTile_Start_m1019095690_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SpriteRenderer_t2548470764 * L_0 = Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846_MethodInfo_var);
		__this->set_sr_3(L_0);
		RandomTile_assignRandomTile_m3694317882(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RandomTile::assignRandomTile()
extern "C"  void RandomTile_assignRandomTile_m3694317882 (RandomTile_t2109107761 * __this, const MethodInfo* method)
{
	{
		SpriteRenderer_t2548470764 * L_0 = __this->get_sr_3();
		SpriteU5BU5D_t2761310900* L_1 = __this->get_tiles_2();
		SpriteU5BU5D_t2761310900* L_2 = __this->get_tiles_2();
		int32_t L_3 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Sprite_t3199167241 * L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SpriteRenderer_set_sprite_m1519408453(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindController::.ctor()
extern "C"  void WindController__ctor_m4105263927 (WindController_t2862109156 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindController::Start()
extern "C"  void WindController_Start_m3052401719 (WindController_t2862109156 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WindController::Update()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t WindController_Update_m141024950_MetadataUsageId;
extern "C"  void WindController_Update_m141024950 (WindController_t2862109156 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WindController_Update_m141024950_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_currentTTL_3();
		__this->set_currentTTL_3(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = __this->get_currentTTL_3();
		int32_t L_2 = __this->get_TTL_2();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		return;
	}
}
// System.Void WindController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4186375525;
extern Il2CppCodeGenString* _stringLiteral75327;
extern Il2CppCodeGenString* _stringLiteral4185823049;
extern const uint32_t WindController_OnCollisionEnter2D_m2475472929_MetadataUsageId;
extern "C"  void WindController_OnCollisionEnter2D_m2475472929 (WindController_t2862109156 * __this, Collision2D_t2859305914 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WindController_OnCollisionEnter2D_m2475472929_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision2D_t2859305914 * L_0 = ___coll0;
		Collider2D_t1552025098 * L_1 = Collision2D_get_collider_m4116040666(L_0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_2 = Component_get_gameObject_m1170635899(L_1, /*hidden argument*/NULL);
		bool L_3 = GameObject_CompareTag_m3153977471(L_2, _stringLiteral4186375525, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		Collision2D_t2859305914 * L_4 = ___coll0;
		Collider2D_t1552025098 * L_5 = Collision2D_get_collider_m4116040666(L_4, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_6 = Component_get_gameObject_m1170635899(L_5, /*hidden argument*/NULL);
		bool L_7 = GameObject_CompareTag_m3153977471(L_6, _stringLiteral75327, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		Collision2D_t2859305914 * L_8 = ___coll0;
		Collider2D_t1552025098 * L_9 = Collision2D_get_collider_m4116040666(L_8, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_10 = Component_get_gameObject_m1170635899(L_9, /*hidden argument*/NULL);
		bool L_11 = GameObject_CompareTag_m3153977471(L_10, _stringLiteral4185823049, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}

IL_004e:
	{
		GameObject_t3674682005 * L_12 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
