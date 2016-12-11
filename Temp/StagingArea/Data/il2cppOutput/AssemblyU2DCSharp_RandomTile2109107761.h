#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomTile
struct  RandomTile_t2109107761  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite[] RandomTile::tiles
	SpriteU5BU5D_t2761310900* ___tiles_2;
	// UnityEngine.SpriteRenderer RandomTile::sr
	SpriteRenderer_t2548470764 * ___sr_3;

public:
	inline static int32_t get_offset_of_tiles_2() { return static_cast<int32_t>(offsetof(RandomTile_t2109107761, ___tiles_2)); }
	inline SpriteU5BU5D_t2761310900* get_tiles_2() const { return ___tiles_2; }
	inline SpriteU5BU5D_t2761310900** get_address_of_tiles_2() { return &___tiles_2; }
	inline void set_tiles_2(SpriteU5BU5D_t2761310900* value)
	{
		___tiles_2 = value;
		Il2CppCodeGenWriteBarrier(&___tiles_2, value);
	}

	inline static int32_t get_offset_of_sr_3() { return static_cast<int32_t>(offsetof(RandomTile_t2109107761, ___sr_3)); }
	inline SpriteRenderer_t2548470764 * get_sr_3() const { return ___sr_3; }
	inline SpriteRenderer_t2548470764 ** get_address_of_sr_3() { return &___sr_3; }
	inline void set_sr_3(SpriteRenderer_t2548470764 * value)
	{
		___sr_3 = value;
		Il2CppCodeGenWriteBarrier(&___sr_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
