#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::updatePlayerUI()
extern "C"  void PlayerController_updatePlayerUI_m569172740 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::launchWindAttack(System.Int32,UnityEngine.Vector2)
extern "C"  void PlayerController_launchWindAttack_m976349230 (PlayerController_t2866526589 * __this, int32_t ___direction0, Vector2_t4282066565  ___speed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionEnter2D_m632467240 (PlayerController_t2866526589 * __this, Collision2D_t2859305914 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
