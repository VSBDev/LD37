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

// MapGenerator
struct MapGenerator_t600092919;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void MapGenerator::.ctor()
extern "C"  void MapGenerator__ctor_m2435147652 (MapGenerator_t600092919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapGenerator::Start()
extern "C"  void MapGenerator_Start_m1382285444 (MapGenerator_t600092919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapGenerator::newGame()
extern "C"  void MapGenerator_newGame_m401161652 (MapGenerator_t600092919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapGenerator::generateRoom()
extern "C"  void MapGenerator_generateRoom_m4294628880 (MapGenerator_t600092919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapGenerator::deleteRoom()
extern "C"  void MapGenerator_deleteRoom_m361922950 (MapGenerator_t600092919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapGenerator::cleanGame()
extern "C"  void MapGenerator_cleanGame_m2576255837 (MapGenerator_t600092919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapGenerator::destroyObjectsWithTag(System.String)
extern "C"  void MapGenerator_destroyObjectsWithTag_m2318429286 (MapGenerator_t600092919 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapGenerator::increaseRoom()
extern "C"  void MapGenerator_increaseRoom_m2444275997 (MapGenerator_t600092919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MapGenerator::placeRandom(UnityEngine.GameObject)
extern "C"  GameObject_t3674682005 * MapGenerator_placeRandom_m2794325647 (MapGenerator_t600092919 * __this, GameObject_t3674682005 * ___ga0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
