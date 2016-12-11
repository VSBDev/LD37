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

// SeamlessOSTScript
struct SeamlessOSTScript_t54441220;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_SeamlessOSTScript54441220.h"
#include "AssemblyU2DUnityScript_SeamlessOSTScript54441220MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSettings3774206607MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "mscorlib_System_Double3868226565.h"
#include "mscorlib_System_Boolean476798718.h"

// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_AddComponent_TisIl2CppObject_m337943659_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisIl2CppObject_m337943659(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t1740077639_m1431680295(__this, method) ((  AudioSource_t1740077639 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m337943659_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SeamlessOSTScript::.ctor()
extern Il2CppClass* AudioClipU5BU5D_t3001083477_il2cpp_TypeInfo_var;
extern Il2CppClass* AudioSourceU5BU5D_t44861630_il2cpp_TypeInfo_var;
extern const uint32_t SeamlessOSTScript__ctor_m2746355218_MetadataUsageId;
extern "C"  void SeamlessOSTScript__ctor_m2746355218 (SeamlessOSTScript_t54441220 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SeamlessOSTScript__ctor_m2746355218_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_bpm_2((140.0f));
		__this->set_numBeatsPerSegment_3(((int32_t)16));
		__this->set_clips_4(((AudioClipU5BU5D_t3001083477*)SZArrayNew(AudioClipU5BU5D_t3001083477_il2cpp_TypeInfo_var, (uint32_t)2)));
		__this->set_volume_5((0.3f));
		__this->set_audioSources_8(((AudioSourceU5BU5D_t44861630*)SZArrayNew(AudioSourceU5BU5D_t44861630_il2cpp_TypeInfo_var, (uint32_t)2)));
		return;
	}
}
// System.Void SeamlessOSTScript::Start()
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t1740077639_m1431680295_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern const uint32_t SeamlessOSTScript_Start_m1693493010_MetadataUsageId;
extern "C"  void SeamlessOSTScript_Start_m1693493010 (SeamlessOSTScript_t54441220 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SeamlessOSTScript_Start_m1693493010_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t3674682005 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_004d;
	}

IL_0007:
	{
		GameObject_t3674682005 * L_0 = (GameObject_t3674682005 *)il2cpp_codegen_object_new(GameObject_t3674682005_il2cpp_TypeInfo_var);
		GameObject__ctor_m3920833606(L_0, _stringLiteral2393081601, /*hidden argument*/NULL);
		V_1 = L_0;
		GameObject_t3674682005 * L_1 = V_1;
		Transform_t1659122786 * L_2 = GameObject_get_transform_m1278640159(L_1, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_4 = GameObject_get_transform_m1278640159(L_3, /*hidden argument*/NULL);
		Transform_set_parent_m3231272063(L_2, L_4, /*hidden argument*/NULL);
		AudioSourceU5BU5D_t44861630* L_5 = __this->get_audioSources_8();
		int32_t L_6 = V_0;
		GameObject_t3674682005 * L_7 = V_1;
		AudioSource_t1740077639 * L_8 = GameObject_AddComponent_TisAudioSource_t1740077639_m1431680295(L_7, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t1740077639_m1431680295_MethodInfo_var);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (AudioSource_t1740077639 *)L_8);
		AudioSourceU5BU5D_t44861630* L_9 = __this->get_audioSources_8();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		AudioSource_t1740077639 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = __this->get_volume_5();
		AudioSource_set_volume_m1410546616(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		double L_16 = AudioSettings_get_dspTime_m4286496774(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_nextEventTime_6(((double)((double)L_16+(double)(((double)((double)(2.0f)))))));
		__this->set_running_9((bool)1);
		return;
	}
}
// System.Void SeamlessOSTScript::Update()
extern "C"  void SeamlessOSTScript_Update_m964527931 (SeamlessOSTScript_t54441220 * __this, const MethodInfo* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = __this->get_running_9();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0090;
	}

IL_0010:
	{
		double L_1 = AudioSettings_get_dspTime_m4286496774(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		double L_2 = V_0;
		double L_3 = __this->get_nextEventTime_6();
		if ((((double)((double)((double)L_2+(double)(((double)((double)(1.0f))))))) <= ((double)L_3)))
		{
			goto IL_0090;
		}
	}
	{
		AudioSourceU5BU5D_t44861630* L_4 = __this->get_audioSources_8();
		int32_t L_5 = __this->get_flip_7();
		int32_t L_6 = L_5;
		AudioSource_t1740077639 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		AudioClipU5BU5D_t3001083477* L_8 = __this->get_clips_4();
		int32_t L_9 = __this->get_flip_7();
		int32_t L_10 = L_9;
		AudioClip_t794140988 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		AudioSource_set_clip_m19502010(L_7, L_11, /*hidden argument*/NULL);
		AudioSourceU5BU5D_t44861630* L_12 = __this->get_audioSources_8();
		int32_t L_13 = __this->get_flip_7();
		int32_t L_14 = L_13;
		AudioSource_t1740077639 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		double L_16 = __this->get_nextEventTime_6();
		AudioSource_PlayScheduled_m2227094787(L_15, L_16, /*hidden argument*/NULL);
		double L_17 = __this->get_nextEventTime_6();
		float L_18 = __this->get_bpm_2();
		int32_t L_19 = __this->get_numBeatsPerSegment_3();
		__this->set_nextEventTime_6(((double)((double)L_17+(double)(((double)((double)((float)((float)((float)((float)(60.0f)/(float)L_18))*(float)(((float)((float)L_19)))))))))));
		int32_t L_20 = __this->get_flip_7();
		__this->set_flip_7(((int32_t)((int32_t)1-(int32_t)L_20)));
	}

IL_0090:
	{
		return;
	}
}
// System.Void SeamlessOSTScript::Main()
extern "C"  void SeamlessOSTScript_Main_m1528107115 (SeamlessOSTScript_t54441220 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
