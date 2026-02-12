#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
struct ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54;
struct ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093;
struct ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F;
struct ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral1228466552C1791B2019A329AFE94665D441168A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05;
IL2CPP_EXTERN_C String_t* _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B;
IL2CPP_EXTERN_C String_t* _stringLiteral82BECCAD895076775062861CDB46AADEF913D969;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB;
IL2CPP_EXTERN_C String_t* _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0;
IL2CPP_EXTERN_C String_t* _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934;
IL2CPP_EXTERN_C String_t* _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE;
IL2CPP_EXTERN_C String_t* _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF;
IL2CPP_EXTERN_C String_t* _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1;
IL2CPP_EXTERN_C String_t* _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F;
IL2CPP_EXTERN_C String_t* _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mB9DC5205C1A0F6535F2F3B89D3E212A42C9F8B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mAF614D4F14E0A3E76C47858DBB9C619D5655C4A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m9CF3334168BC1AF61D66DDC3386C162037BCBF34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m34CB751AE6BB8E6B16CA4A7B161DFDF00C59B480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m7ADAE3E28A631403280D17D0150E7E72540660E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B  : public RuntimeObject
{
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings;
	int32_t ___serializationDepth;
	String_t* ___overridePropertiesName;
};
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE  : public RuntimeObject
{
	ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC* ___members;
	Type_t* ___type;
	bool ___isPrimitive;
	bool ___isValueType;
	bool ___isCollection;
	bool ___isDictionary;
	bool ___isES3TypeUnityObject;
	bool ___isReflectedType;
	bool ___isUnsupported;
	int32_t ___priority;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A  : public RuntimeObject
{
	ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	bool ___m_RequiresNativeCleanup;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405 
{
	int32_t ___value__;
};
struct ParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5 
{
	int32_t ___value__;
};
struct ParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	int32_t ___m_Mode;
	float ___m_CurveMultiplier;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax;
	float ___m_ConstantMin;
	float ___m_ConstantMax;
};
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_marshaled_pinvoke
{
	int32_t ___m_Mode;
	float ___m_CurveMultiplier;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ___m_CurveMin;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ___m_CurveMax;
	float ___m_ConstantMin;
	float ___m_ConstantMax;
};
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_marshaled_com
{
	int32_t ___m_Mode;
	float ___m_CurveMultiplier;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ___m_CurveMin;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ___m_CurveMax;
	float ___m_ConstantMin;
	float ___m_ConstantMax;
};
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields
{
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Reader_ReadProperty_TisRuntimeObject_m25CD8B3AE810EB9830D26EAF7CE29982B544887B_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___0_type, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6 (RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4 (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E (RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6* __this, bool ___0_value, const RuntimeMethod* method) ;
inline String_t* ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6 (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___0_type, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisRuntimeObject_m25CD8B3AE810EB9830D26EAF7CE29982B544887B_gshared)(__this, ___0_type, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838 (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mFC23917C8E2976C653458DB43978BEA188D83CC6_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m5796A95AD2AE69F9083A7F34FF9CFC09AD8A88A7_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m75FF411372C1C91FDA3026EC5E9D62842EFAE40A_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mD1C6B38B5D315B0F21BB26A915F9E52915C66FFF_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mD3539F788550100A359498545F6FFB9FB696BAF2_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mBC2D53FB6F105F2B29095E69EB3762ED076D789E_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m0DFBD05A773003C49D7A48CA368949527C054095_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mA85A4B9072B32D85C03AA855447C8F204C23DCC8_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mA61D779F4048C1A31501B707DC90DD797E54D03D_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m2D411D279870C0B861E110B159A011C4F7196A1D_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mBF8B7A49D3B302D695540EFC7FEA904DDD874F82_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mEFDC6060741257E8ED8738C8509136EA9DCD7B00_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m1DDF61508CAA6ADF8A7945CFC13DECA0D0FC80F9_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m388F916397122FA645FF2776F5F6B32379D3446A_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationBySpeedModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m8E5BADB71486DBAFDF587EEA0BBFF13B7244A4D5_gshared (ES3Type_RotationBySpeedModule_tFCE11BC21BB705A9E9F9FDF7E02AC09D1710CD54* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6*)UnBox(L_0, RotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_il2cpp_TypeInfo_var)));
		goto IL_023d;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0233;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_0104;
		}
	}
	{
		goto IL_0233;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-86242094)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_0158;
		}
	}
	{
		goto IL_0233;
	}

IL_008c:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0097;
	}

IL_0097:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_00a2;
	}

IL_00a2:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_0119;
		}
	}
	{
		goto IL_0233;
	}

IL_00b0:
	{
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_18)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_0233;
	}

IL_00c5:
	{
		String_t* L_19 = V_2;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_20)
		{
			goto IL_0185;
		}
	}
	{
		goto IL_0233;
	}

IL_00da:
	{
		String_t* L_21 = V_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_22)
		{
			goto IL_019d;
		}
	}
	{
		goto IL_0233;
	}

IL_00ef:
	{
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_24)
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0233;
	}

IL_0104:
	{
		String_t* L_25 = V_2;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_26)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_0233;
	}

IL_0119:
	{
		String_t* L_27 = V_2;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_28)
		{
			goto IL_01df;
		}
	}
	{
		goto IL_0233;
	}

IL_012e:
	{
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_30)
		{
			goto IL_01f4;
		}
	}
	{
		goto IL_0233;
	}

IL_0143:
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_32)
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0233;
	}

IL_0158:
	{
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_34)
		{
			goto IL_021e;
		}
	}
	{
		goto IL_0233;
	}

IL_016d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		bool L_37;
		L_37 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_35, L_36);
		RotationBySpeedModule_set_enabled_m45594523BB30462315CB7820BA7E117230B2D78C((&V_0), L_37, NULL);
		goto IL_023c;
	}

IL_0185:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_38, L_39);
		RotationBySpeedModule_set_x_mD0BDD09ECEC9B7105E18081F5246C68CEA6C1164((&V_0), L_40, NULL);
		goto IL_023c;
	}

IL_019d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		float L_43;
		L_43 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_41, L_42);
		RotationBySpeedModule_set_xMultiplier_m3A9AD302760059F74581696C18D36FF70183CC44((&V_0), L_43, NULL);
		goto IL_023c;
	}

IL_01b5:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_44, L_45);
		RotationBySpeedModule_set_y_m98EC28317AE82212F94E5D10F2AE48BE7304E948((&V_0), L_46, NULL);
		goto IL_023c;
	}

IL_01ca:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		float L_49;
		L_49 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_47, L_48);
		RotationBySpeedModule_set_yMultiplier_m8E2E963FC0198A33622AB31A34764BA211BD16D4((&V_0), L_49, NULL);
		goto IL_023c;
	}

IL_01df:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_50, L_51);
		RotationBySpeedModule_set_z_mD0A6B32528132D7DDDBEF2536878AEECD15BCAEF((&V_0), L_52, NULL);
		goto IL_023c;
	}

IL_01f4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		float L_55;
		L_55 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_53, L_54);
		RotationBySpeedModule_set_zMultiplier_m7049C019EFEBBA873032A6E86639B2DCCFEFC086((&V_0), L_55, NULL);
		goto IL_023c;
	}

IL_0209:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_57 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_56);
		bool L_58;
		L_58 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_56, L_57);
		RotationBySpeedModule_set_separateAxes_mC6D47180035A2C82BAC56FF5B61E64C5F5713915((&V_0), L_58, NULL);
		goto IL_023c;
	}

IL_021e:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_59 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_60 = ((ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tA9F4D3B3E720D034B0FF90269CB5AFD2EE3EFA16_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mAA55A0A787CA8B72BF956D7DBD951FBFBFE02F83_RuntimeMethod_var, L_59, L_60);
		RotationBySpeedModule_set_range_mB8F68C92B9B591C6DF354035662B856727414BE6((&V_0), L_61, NULL);
		goto IL_023c;
	}

IL_0233:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_62 = ___0_reader;
		NullCheck(L_62);
		VirtualActionInvoker0::Invoke(41, L_62);
		goto IL_023c;
	}

IL_023c:
	{
	}

IL_023d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___0_reader;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_63);
		String_t* L_65 = L_64;
		V_1 = L_65;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_65) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_66 = V_5;
		if (L_66)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m82007A1DCE50FA23146B00A8915FB4C98C541C3B_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m556E7AE85339731F43A47E44E68E45EB6C23AE5E_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA0A2E0AB467644CBBF88160C83C17D288B4E6A5D_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF8F25AD72F9C8DC6E42E430227A87EE8BE053182_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m28650A317E00D95AAA131BD783E75861CFB5038B_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA258CDD96FEC6F1CE4F515B39591C6F10F08E040_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m99724B54589A4BB0F63590778E7A10E7B173E54A_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m669354E2BC4C2F6E06439DBF7E16C68BECC882B2_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m0374A1EF397FF42B8DA6601F7C013BE3A0FD3405_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRuntimeObject_mE9BDCC55270866C4BD5CA1C9D50797EC351CA04F_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m94AEFDE62C804F3392F793F6619550467825A119_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m3502990BA088BD20E7FD9AFEA80E88CBCF17C34A_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1B228AF471C31454196D4E419BD8ED4494BCE584_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m83846A85C5E644905440CD25E27FB12D559D3E31_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4D43300A5D696E6FD92F1EC9B42ACB865BB4A91D_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBAE280582EFE4B069C99F0418E5C98BDFB39DBE7_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisIl2CppFullySharedGenericAny_m9300DF7F6D14343F195F2ED87C84BD3CC68D31E1_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m93519F0B5B7F81BD5906BD0436C9BAF9A1097C4C_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_RotationOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m994A200D0DF79AE729C1ADB6BC055A9252255321_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_1 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_4 = V_0;
		RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 L_5 = L_4;
		RuntimeObject* L_6 = Box(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisRuntimeObject_m58A202AEC73FE1C8CD3D03AE78A50DD0D732302B_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisIl2CppFullySharedGenericAny_m82B7037E3076730E5B3D98F8805E37F22D689D3B_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m1437CF294F6501FB85BD43907B4B9AA229AB1CAB_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m427DA6F1C94ED09B7FF7E2AE7DD790CF1EB907E6_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mD3A290EC2153DEAC3BD70D11D103B7E156F6D7BB_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mECD8D2D06A42104F5D4F2528C3A16E6E17475200_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m3194B3A54496E65F627BA00FAC9B27DB63A9EC98_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m034340F665E31CECBDB8C21D525DBCFB5BB2042E_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mF8AA556787D3C6A152F1C0779B8C4CF55976EE49_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m71EAFA455A2F843820E3A15BD8C314774AC32DD3_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m79558EFAEE3A0247539A911D85A022B8F3E46086_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mB0621C13587A950CD6272B60609CD987466F5202_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m9F37A111C8C6D82A356E7598ADAF4FE720770FF9_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mB74138AEAA9964A41B761026DD171DF7FB461FDC_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m85B162E065B3CDB6993F3FD6DD7C77C1AE43BFEE_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mD7C620D250012F7F4BA606921B12B04061765454_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m4756E4501F9C3CB34C17F0BB5CFA1331EC0C78D7_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mA07FABE20BA993CD3E1258E3AD3113555B530824_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mE9EC0C053DF70181CAEE8674A161935DA1230BCD_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_RotationOverLifetimeModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mD06F2B6B53B8B5889CBE6465E8398DFB9AF05B32_gshared (ES3Type_RotationOverLifetimeModule_t70A2F76E56EE34197F2DF6C3AD4679A81F6F4093* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8690361553406965679AEF125F896BC5FC61F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6*)UnBox(L_0, RotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_il2cpp_TypeInfo_var)));
		goto IL_0202;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1013869429)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)726266686)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)726266686))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_01f8;
	}

IL_0048:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1013869429))))
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_01f8;
	}

IL_0067:
	{
		uint32_t L_11 = V_4;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-66302220)))))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-585050980))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-66302220))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_01f8;
	}

IL_0089:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-49524601))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-15969363))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_01f8;
	}

IL_00a2:
	{
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_17)
		{
			goto IL_014a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00b7:
	{
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		if (L_19)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_01f8;
	}

IL_00cc:
	{
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8C6F88DEE0DFE3513BB8B44A8CF0FEE437F4EFFB, NULL);
		if (L_21)
		{
			goto IL_017a;
		}
	}
	{
		goto IL_01f8;
	}

IL_00e1:
	{
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (L_23)
		{
			goto IL_018f;
		}
	}
	{
		goto IL_01f8;
	}

IL_00f6:
	{
		String_t* L_24 = V_2;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9E61658953B4F9BB4A05E3D2D2BC18990BADE934, NULL);
		if (L_25)
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01f8;
	}

IL_010b:
	{
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
		if (L_27)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01f8;
	}

IL_0120:
	{
		String_t* L_28 = V_2;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral2F8690361553406965679AEF125F896BC5FC61F5, NULL);
		if (L_29)
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_01f8;
	}

IL_0135:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_31)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_01f8;
	}

IL_014a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_32 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_33 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_32);
		bool L_34;
		L_34 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_32, L_33);
		RotationOverLifetimeModule_set_enabled_mDA53B4B7B9333D4E09D845446C9F9400C7E8DC66((&V_0), L_34, NULL);
		goto IL_0201;
	}

IL_0162:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_36 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_35);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_37;
		L_37 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_35, L_36);
		RotationOverLifetimeModule_set_x_m26A11609B42D2C819D237DB064D28EFC1577A9C4((&V_0), L_37, NULL);
		goto IL_0201;
	}

IL_017a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_38);
		float L_40;
		L_40 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_38, L_39);
		RotationOverLifetimeModule_set_xMultiplier_m099A3F3041DB369575051643B3B1A2BD4BB1C1BD((&V_0), L_40, NULL);
		goto IL_0201;
	}

IL_018f:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_41 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_42 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_41);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_41, L_42);
		RotationOverLifetimeModule_set_y_m4D757DFB1D4BFE8050616BD5D2DC035773ED75CA((&V_0), L_43, NULL);
		goto IL_0201;
	}

IL_01a4:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_44 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_45 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_44);
		float L_46;
		L_46 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_44, L_45);
		RotationOverLifetimeModule_set_yMultiplier_m8DB9A9DF867858F85FCD405DA6CE3089EAFE2FAF((&V_0), L_46, NULL);
		goto IL_0201;
	}

IL_01b9:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_47 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_48 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_47);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_49;
		L_49 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_47, L_48);
		RotationOverLifetimeModule_set_z_m4B93DD11BAB01085FD8B482DFAB2EC7867BE08BD((&V_0), L_49, NULL);
		goto IL_0201;
	}

IL_01ce:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_50 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_51 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_50);
		float L_52;
		L_52 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_50, L_51);
		RotationOverLifetimeModule_set_zMultiplier_m035DC683A4FB9B68B671745CD99628B6762D5FEF((&V_0), L_52, NULL);
		goto IL_0201;
	}

IL_01e3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_53);
		bool L_55;
		L_55 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_53, L_54);
		RotationOverLifetimeModule_set_separateAxes_m8FAFD751E4B823A461521A4349B6D0544887D23E((&V_0), L_55, NULL);
		goto IL_0201;
	}

IL_01f8:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_56 = ___0_reader;
		NullCheck(L_56);
		VirtualActionInvoker0::Invoke(41, L_56);
		goto IL_0201;
	}

IL_0201:
	{
	}

IL_0202:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___0_reader;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_57);
		String_t* L_59 = L_58;
		V_1 = L_59;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_5;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFCA7DE59521D8E39FF5B9E61B8168EAC3AF91109_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m3476D1E5BD4A342893513BBCF6BFEC7C5441BF1B_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m190D48CD4AE0709F0C6676E11F810434373747E0_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m612700916C9098D8AFDECE3E9E6E6B0F7D49E92A_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4B4CF2B14AE13D921E656640BC7480924CE2E9D3_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFEB51BFD47ECA3F9E44A6C2CFB04B859E660ABCA_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF33FAD7ACC7E53417DCF0FCA901C058ECC7394DF_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m4A45F15B4C257BC8E448A4E920B3D2807C3A5497_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mE1544578BB5B25E54A2F611E80DAF358339E3E14_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisRuntimeObject_m885CE94D7D02C17B2943CEE3A943E843D821CAE0_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m82B29A9EC0AD7BA569797F24819D869E0E78EB7B_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m320BDD0D8BD60B2A5772497A2999D1E63A3A6591_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7486C81627332458B4330E5E40A137CB00BBD84_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB4139FED55824670B3ADCE9BD9AA5465DAFF66C1_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4B3FA9DC1EED2DCB1265F27E7382251034B27BDF_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2226F7B562F498A32457A0D110C482FE5A0ED7BC_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisIl2CppFullySharedGenericAny_mF9B4B2E63E53F74BD8DF74F2F92C0F0357E00301_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m5D0066835280EA4C2368F4D37A628DA37D0DC818_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Shader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m26F1AFC6E516B5DB9452817EDF911A994C3AFA09_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642);
		il2cpp_rgctx_method_init(method);
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6(L_0, L_1, ES3Reader_ReadProperty_TisString_t_m3F39A4B1CB3E98162E7636CBAB12F69DAE28E5F6_RuntimeMethod_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_2, NULL);
		V_0 = L_3;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3EC3372E82B3B91672EF4EC7D6C8F3FB8E934642, NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___0_reader;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9 = V_0;
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_8, (RuntimeObject*)L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		V_2 = (RuntimeObject*)L_10;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisRuntimeObject_m9FF3174B89B3102C31953EE3D34B1C0A3BB193E4_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisIl2CppFullySharedGenericAny_m8C671825F661B0EB4CCC197F05E4C068C37664AA_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m0B97323A8FDAF3D74CF1C6D252D8C0ED659AD2B0_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m19C18506C450FE1317142EA709967ED422BE7FB4_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mB549E12CE379BAFF630D375113CF4791973DB7FA_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m6A23FA4F73E143AD5A5238FDDC991A6A94B2AA75_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m20A57478FF4172E1A19E76C89B9BC05EAD92F648_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mF3A1153C2652E54960575C1B718C37ECA2CAE2E5_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mF56D45F0733FA6B999B3A8AB5D9CD786FDBB44E5_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mF1834A19D1A48EADD989F747C5AA58869234F68A_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m2EA1732B4361BFFEB78ADB130368B4B5C8EBD76B_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m00567C267956F91BC7C2936099C97BC47DE899A1_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m05A2AF09F77513F5A30B6ECC7468F31E6ECF9E04_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m549F7C1AFC14451CA9B315ACDF7E3D985C31571D_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mEDAA66A50B9FBF78F2B1405BB7799C5048B0D641_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mC15F9CD93959194854866172455ED05284C95C8B_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mAF98B600FBC604C29B83BA8895C6B36ED6A491C3_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m4EEA44367261C944CCFE45BE96E0266EA4E93EEC_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m2D4AE1DDDA10569F6F73FA18EB50856FD89F0FAF_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Shader_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m4E74818BED24FA5BFA28104E5438F6398F1A57E4_gshared (ES3Type_Shader_tBA73E37ED2E187D657CB30FE032624084EF7B00F* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)CastclassSealed((RuntimeObject*)L_0, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___0_reader;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_5;
					if (!L_5)
					{
						goto IL_0096;
					}
				}
				{
					RuntimeObject* L_6 = V_5;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0096:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0078_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, il2cpp_defaults.string_class));
				String_t* L_9 = V_2;
				V_4 = L_9;
				String_t* L_10 = V_4;
				V_3 = L_10;
				String_t* L_11 = V_3;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
				if (L_12)
				{
					goto IL_0046_1;
				}
			}
			{
				String_t* L_13 = V_3;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9F10EBCE20D270FF4999A25F1E52C5E0C507BADE, NULL);
				if (L_14)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_006e_1;
			}

IL_0046_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_16 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_17 = ((ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_string_tEE4C8F55053F345064CB52CE0C28F6E31830D3D3_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_16);
				String_t* L_18;
				L_18 = GenericVirtualFuncInvoker1< String_t*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisString_t_m8512BF9EA1392BE2CA7E9A116D833D533495E1D6_RuntimeMethod_var, L_16, L_17);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, L_18, NULL);
				goto IL_0077_1;
			}

IL_005a_1:
			{
				Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_19 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_20 = ___0_reader;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_21 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
				NullCheck(L_20);
				int32_t L_22;
				L_22 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_20, L_21);
				NullCheck(L_19);
				Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_19, L_22, NULL);
				goto IL_0077_1;
			}

IL_006e_1:
			{
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___0_reader;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41, L_23);
				goto IL_0077_1;
			}

IL_0077_1:
			{
			}

IL_0078_1:
			{
				RuntimeObject* L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0097;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3C783CF934B92E7F2E6D34CB56A04614405510D1_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mC506428840F97D0B9F325E08EFA738D2160DC4B5_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA72A7877310651B894AD350B0E97C5D42B62F471_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m70833EFCBA88935F2079712085CD52802CB60404_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m70B3A34723AB2F2D07BA291702551495F69B2546_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m535BD96BCF3BE8F4B517C9C63DBDE4EE0267C8F9_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m441FED71213A2E96BD50CFD2837E1FD0D4B85776_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m3A44607A754F931CC4FE36AE03228DC93CCE826A_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2ACB2C05647BF49961CB7EAF1FF3406D50D6D1C8_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisRuntimeObject_m561CCCC9AB3A2B1BFFDEDD797FBCBFFDA3D2421C_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCF107D1827254EA198247A6535B5A5E7DB677D2F_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mC66CCDBD69F8D5ECBC10949899BE850BCFAA6B0C_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA2CFC049AAE4EF02D34C8E3160BE50E37F5CC123_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8465630519E47BD685BE4BAD15BA2000A0ACED60_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8D2710A000905CFF94C9F85ECF10A8CC39C9579F_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3B274E966416B355538E2C746672E0BAF0502B35_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisIl2CppFullySharedGenericAny_m65474EA4526F5C6FED282144F26840B724074EB3_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m129259C7EDD06D9F28C4A5463F8FDA94B5A04DF1_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ShapeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m32CF8A206F8A0F49388D9690C47CE0A439B85853_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___0_reader;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_1 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4 = V_0;
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var, &L_5);
		V_1 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ShapeModule_ReadInto_TisRuntimeObject_m807BC7AA419A4DB273C14C425CED247A02E551EB_gshared (ES3Type_ShapeModule_t8AA77F1BC205DD5EA076C628186633EA967FE98D* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___0_reader, RuntimeObject* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mB9DC5205C1A0F6535F2F3B89D3E212A42C9F8B8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mAF614D4F14E0A3E76C47858DBB9C619D5655C4A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m9CF3334168BC1AF61D66DDC3386C162037BCBF34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m34CB751AE6BB8E6B16CA4A7B161DFDF00C59B480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m7ADAE3E28A631403280D17D0150E7E72540660E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1228466552C1791B2019A329AFE94665D441168A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82BECCAD895076775062861CDB46AADEF913D969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91811EE149061D28B38320E2430CE8888AD6398B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	uint32_t V_4 = 0;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___1_obj;
		V_0 = ((*(ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2*)UnBox(L_0, ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_il2cpp_TypeInfo_var)));
		goto IL_0476;
	}

IL_000d:
	{
		String_t* L_1 = V_1;
		V_3 = L_1;
		String_t* L_2 = V_3;
		V_2 = L_2;
		String_t* L_3 = V_2;
		uint32_t L_4;
		L_4 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_3, NULL);
		V_4 = L_4;
		uint32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-2104025999)))))
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)666576729)))))
		{
			goto IL_0076;
		}
	}
	{
		uint32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)49525662)))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)24602224))))
		{
			goto IL_027e;
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		uint32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_016d;
		}
	}
	{
		goto IL_046c;
	}

IL_0057:
	{
		uint32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)230313139))))
		{
			goto IL_01d6;
		}
	}
	{
		goto IL_0065;
	}

IL_0065:
	{
		uint32_t L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)666576729))))
		{
			goto IL_022a;
		}
	}
	{
		goto IL_046c;
	}

IL_0076:
	{
		uint32_t L_12 = V_4;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)955488309)))))
		{
			goto IL_009e;
		}
	}
	{
		uint32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)923624301))))
		{
			goto IL_0269;
		}
	}
	{
		goto IL_008d;
	}

IL_008d:
	{
		uint32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)955488309))))
		{
			goto IL_02bd;
		}
	}
	{
		goto IL_046c;
	}

IL_009e:
	{
		uint32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)980363995))))
		{
			goto IL_02d2;
		}
	}
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		uint32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)985988853))))
		{
			goto IL_01ac;
		}
	}
	{
		goto IL_00ba;
	}

IL_00ba:
	{
		uint32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-2104025999))))
		{
			goto IL_0215;
		}
	}
	{
		goto IL_046c;
	}

IL_00cb:
	{
		uint32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) <= ((uint32_t)((int32_t)-1473810612)))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1726928010)))))
		{
			goto IL_00fc;
		}
	}
	{
		uint32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-2083506667))))
		{
			goto IL_0200;
		}
	}
	{
		goto IL_00eb;
	}

IL_00eb:
	{
		uint32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1726928010))))
		{
			goto IL_0182;
		}
	}
	{
		goto IL_046c;
	}

IL_00fc:
	{
		uint32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1593786692))))
		{
			goto IL_023f;
		}
	}
	{
		goto IL_010a;
	}

IL_010a:
	{
		uint32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1473810612))))
		{
			goto IL_01c1;
		}
	}
	{
		goto IL_046c;
	}

IL_011b:
	{
		uint32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) <= ((uint32_t)((int32_t)-1386986472)))))
		{
			goto IL_0140;
		}
	}
	{
		uint32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1412039661))))
		{
			goto IL_0197;
		}
	}
	{
		goto IL_012f;
	}

IL_012f:
	{
		uint32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-1386986472))))
		{
			goto IL_01eb;
		}
	}
	{
		goto IL_046c;
	}

IL_0140:
	{
		uint32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-584064197))))
		{
			goto IL_0254;
		}
	}
	{
		goto IL_014e;
	}

IL_014e:
	{
		uint32_t L_28 = V_4;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-473474755))))
		{
			goto IL_02a8;
		}
	}
	{
		goto IL_015c;
	}

IL_015c:
	{
		uint32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-365686981))))
		{
			goto IL_0293;
		}
	}
	{
		goto IL_046c;
	}

IL_016d:
	{
		String_t* L_30 = V_2;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_31)
		{
			goto IL_02e7;
		}
	}
	{
		goto IL_046c;
	}

IL_0182:
	{
		String_t* L_32 = V_2;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral82BECCAD895076775062861CDB46AADEF913D969, NULL);
		if (L_33)
		{
			goto IL_02ff;
		}
	}
	{
		goto IL_046c;
	}

IL_0197:
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral1228466552C1791B2019A329AFE94665D441168A, NULL);
		if (L_35)
		{
			goto IL_0312;
		}
	}
	{
		goto IL_046c;
	}

IL_01ac:
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralBD49F93A7BC78A69E385CEC0E78F434BD2845A17, NULL);
		if (L_37)
		{
			goto IL_032a;
		}
	}
	{
		goto IL_046c;
	}

IL_01c1:
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralED1F119527A0BCA45125EF8E0F719985DA86C0E1, NULL);
		if (L_39)
		{
			goto IL_0342;
		}
	}
	{
		goto IL_046c;
	}

IL_01d6:
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral8C9F18A4F030B96447955FBBA1A99FFC43B5D8E0, NULL);
		if (L_41)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_046c;
	}

IL_01eb:
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, NULL);
		if (L_43)
		{
			goto IL_0372;
		}
	}
	{
		goto IL_046c;
	}

IL_0200:
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
		if (L_45)
		{
			goto IL_038a;
		}
	}
	{
		goto IL_046c;
	}

IL_0215:
	{
		String_t* L_46 = V_2;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralF9BE17D634D1B07BCDCDA77A87710C946D81307B, NULL);
		if (L_47)
		{
			goto IL_03a2;
		}
	}
	{
		goto IL_046c;
	}

IL_022a:
	{
		String_t* L_48 = V_2;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralFA5EC7168E9633DAAEAA255ECB55030EA60F064F, NULL);
		if (L_49)
		{
			goto IL_03ba;
		}
	}
	{
		goto IL_046c;
	}

IL_023f:
	{
		String_t* L_50 = V_2;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralEB0A157666700D8227FD4B66A26FDC02035E89BF, NULL);
		if (L_51)
		{
			goto IL_03cd;
		}
	}
	{
		goto IL_046c;
	}

IL_0254:
	{
		String_t* L_52 = V_2;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral8E54BB51E569CB6A8D3C45D8AEF883A1559C1C0E, NULL);
		if (L_53)
		{
			goto IL_03e0;
		}
	}
	{
		goto IL_046c;
	}

IL_0269:
	{
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteral60E56797D122AE71D3774956F66C6EEB9EA22C05, NULL);
		if (L_55)
		{
			goto IL_03f3;
		}
	}
	{
		goto IL_046c;
	}

IL_027e:
	{
		String_t* L_56 = V_2;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral01837E2252AC8026A5EA3567A663017A662FBB70, NULL);
		if (L_57)
		{
			goto IL_0403;
		}
	}
	{
		goto IL_046c;
	}

IL_0293:
	{
		String_t* L_58 = V_2;
		bool L_59;
		L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralF66E9083C67855AB6EBB4B74342E385A72AACE32, NULL);
		if (L_59)
		{
			goto IL_0418;
		}
	}
	{
		goto IL_046c;
	}

IL_02a8:
	{
		String_t* L_60 = V_2;
		bool L_61;
		L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral91811EE149061D28B38320E2430CE8888AD6398B, NULL);
		if (L_61)
		{
			goto IL_042d;
		}
	}
	{
		goto IL_046c;
	}

IL_02bd:
	{
		String_t* L_62 = V_2;
		bool L_63;
		L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteral6686C366F645244186604A3DA4B9A58012A85F1B, NULL);
		if (L_63)
		{
			goto IL_0442;
		}
	}
	{
		goto IL_046c;
	}

IL_02d2:
	{
		String_t* L_64 = V_2;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteralCA1B66E295BD92E9FD3B6C708F09CA69A50BEFD1, NULL);
		if (L_65)
		{
			goto IL_0457;
		}
	}
	{
		goto IL_046c;
	}

IL_02e7:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_66);
		bool L_68;
		L_68 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_66, L_67);
		ShapeModule_set_enabled_m6BA02351FEED67A82664135B922DDA66D71DF399((&V_0), L_68, NULL);
		goto IL_0475;
	}

IL_02ff:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___0_reader;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemShapeType_tADE62D07EDA71578326A03B50871391EE01F73BB_m34CB751AE6BB8E6B16CA4A7B161DFDF00C59B480_RuntimeMethod_var, L_69);
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), L_70, NULL);
		goto IL_0475;
	}

IL_0312:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_71);
		float L_73;
		L_73 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_71, L_72);
		ShapeModule_set_randomDirectionAmount_m398CEE6D93207797559A80CE49A0C4138C96D0B3((&V_0), L_73, NULL);
		goto IL_0475;
	}

IL_032a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_74);
		float L_76;
		L_76 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_74, L_75);
		ShapeModule_set_sphericalDirectionAmount_m395143D474E51CE6AAF81C9DB84028A16B9BCAAB((&V_0), L_76, NULL);
		goto IL_0475;
	}

IL_0342:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		ShapeModule_set_alignToDirection_mD632613E0E343654E6569F22BC9EFBB9247AC581((&V_0), L_79, NULL);
		goto IL_0475;
	}

IL_035a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_80);
		float L_82;
		L_82 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_80, L_81);
		ShapeModule_set_radius_m37F79E13EB60FA39EAE36B49DAC4AC880416E89C((&V_0), L_82, NULL);
		goto IL_0475;
	}

IL_0372:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_83);
		float L_85;
		L_85 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_83, L_84);
		ShapeModule_set_angle_m62F5F037CD1DF55172B2D64DBF8271F9F917133A((&V_0), L_85, NULL);
		goto IL_0475;
	}

IL_038a:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_86);
		float L_88;
		L_88 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_86, L_87);
		ShapeModule_set_length_mD38341192A10095F9D0217993D410939F90CE621((&V_0), L_88, NULL);
		goto IL_0475;
	}

IL_03a2:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector3_tD75940994026458121526756AB5985B7F3CCE421_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = GenericVirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE64B23668F08514EF5706B61F29331831C5F1009_RuntimeMethod_var, L_89, L_90);
		ShapeModule_set_scale_mDA84B80016FDA6B6EE181B108C3E59A2FFF9143D((&V_0), L_91, NULL);
		goto IL_0475;
	}

IL_03ba:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___0_reader;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemMeshShapeType_t260D7CAA6014D0ACE2BCFE0BC588E1ADE3AF98E5_m9CF3334168BC1AF61D66DDC3386C162037BCBF34_RuntimeMethod_var, L_92);
		ShapeModule_set_meshShapeType_m335ED6F02244A07F8557E900D9935A4220AD23D0((&V_0), L_93, NULL);
		goto IL_0475;
	}

IL_03cd:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___0_reader;
		NullCheck(L_94);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_95;
		L_95 = GenericVirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(ES3Reader_Read_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_mAF614D4F14E0A3E76C47858DBB9C619D5655C4A8_RuntimeMethod_var, L_94);
		ShapeModule_set_mesh_m75450DE287A91452C63021F100D8B6A65A921CE1((&V_0), L_95, NULL);
		goto IL_0475;
	}

IL_03e0:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_96 = ___0_reader;
		NullCheck(L_96);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_97;
		L_97 = GenericVirtualFuncInvoker0< MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* >::Invoke(ES3Reader_Read_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mB9DC5205C1A0F6535F2F3B89D3E212A42C9F8B8B_RuntimeMethod_var, L_96);
		ShapeModule_set_meshRenderer_m25111B1DC9F173FE054264094DB19564D375D1D6((&V_0), L_97, NULL);
		goto IL_0475;
	}

IL_03f3:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___0_reader;
		NullCheck(L_98);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_99;
		L_99 = GenericVirtualFuncInvoker0< SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* >::Invoke(ES3Reader_Read_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m7ADAE3E28A631403280D17D0150E7E72540660E0_RuntimeMethod_var, L_98);
		ShapeModule_set_skinnedMeshRenderer_mB3B9D58C4A9D21F990EC2000D38B5E35C7FF5807((&V_0), L_99, NULL);
		goto IL_0475;
	}

IL_0403:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_100 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_101 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_100);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_100, L_101);
		ShapeModule_set_useMeshMaterialIndex_m48CE9CB5BA8CAF93D4C92975B826A7BA8459B838((&V_0), L_102, NULL);
		goto IL_0475;
	}

IL_0418:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_103 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_104 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_103);
		int32_t L_105;
		L_105 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_103, L_104);
		ShapeModule_set_meshMaterialIndex_mC72EF43FC31A137D1247E748E89FE0FF5FB2C29F((&V_0), L_105, NULL);
		goto IL_0475;
	}

IL_042d:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_106 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_107 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_106);
		bool L_108;
		L_108 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_106, L_107);
		ShapeModule_set_useMeshColors_m2B12B03E04E2ACEE2AE68B697F462232D42D6C6E((&V_0), L_108, NULL);
		goto IL_0475;
	}

IL_0442:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_109 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_110 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_109);
		float L_111;
		L_111 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_109, L_110);
		ShapeModule_set_normalOffset_m24453DEF085D96323A09DEBD134283B7F23C263F((&V_0), L_111, NULL);
		goto IL_0475;
	}

IL_0457:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_112 = ___0_reader;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_113 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance;
		NullCheck(L_112);
		float L_114;
		L_114 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_112, L_113);
		ShapeModule_set_arc_mE9EF87E2AA959143B466CD55B7DAA65FBE155D1F((&V_0), L_114, NULL);
		goto IL_0475;
	}

IL_046c:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_115 = ___0_reader;
		NullCheck(L_115);
		VirtualActionInvoker0::Invoke(41, L_115);
		goto IL_0475;
	}

IL_0475:
	{
	}

IL_0476:
	{
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_116 = ___0_reader;
		NullCheck(L_116);
		String_t* L_117;
		L_117 = VirtualFuncInvoker0< String_t* >::Invoke(21, L_116);
		String_t* L_118 = L_117;
		V_1 = L_118;
		V_5 = (bool)((!(((RuntimeObject*)(String_t*)L_118) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_119 = V_5;
		if (L_119)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
