#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56;
struct U3CU3Ef__AnonymousType1_2_t090A4CD45B5F91CA6534324BD7F49A972DD6EE03;
struct Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380;
struct Action_4_t9D9C3B4C9FB177DA85ADC6E208671365BCDB467F;
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_t4B95DFC3131E5495DBF5F130B1DC985ED29362D5;
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391;
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A;
struct Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A;
struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467;
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
struct IEnumerable_1_tD9705F7B149B81062AF7613230A96DD0E4896209;
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t8D2D19271DC4FB30AC8BBABEECDE901A7086CD27;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t38009044A4DADA30C1C7C33E1DB1F56A370D4EE0;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct ITypeConstructor_1_t76A48ABBEC41390BC2E2B1255595A389C6830900;
struct ITypeConstructor_1_tDAA233DB1688C5FB7BD7AF226A333DD7A2941503;
struct ITypeConstructor_1_t0971F82FF696636B5980191704D34EBCFF2C221C;
struct ITypeConstructor_1_t92BF5480882C77EA0B787B3019468C8CE698038F;
struct ITypeConstructor_1_t904441E1C0121C34AC6AD7781FE42BB12D65B0CC;
struct ITypeConstructor_1_t0DE810CBEA8E0C10D5D20B7C36C1CA72894A52BD;
struct ITypeConstructor_1_t582CFC95E88EC57D0E7E6117FEB627A227046DEE;
struct ITypeConstructor_1_t6036708AD53BE0A247E0419392149C29294321CA;
struct ITypeConstructor_1_tEF28DA219D7FF879BD72DF2D3B3F20BF8F2AF895;
struct ITypeConstructor_1_tF00D3ECE32D00E64FAF9ADF197160A1D21F8B72B;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t2957C3F3F922000D05C6AE59163AF0088BB8D2E4;
struct ITypeConstructor_1_tCBC012543956694556936EABE7ADF797F6355DF3;
struct ITypeConstructor_1_tE1377AF96A9B7EE3D4A4E9ABE45EA59810967EE2;
struct ITypeConstructor_1_t4897169091A9172B21833243B015C7DE4665B282;
struct ITypeConstructor_1_t27421517365CBD568D0A3034E958CA28C13B80B1;
struct ITypeConstructor_1_t57C2278A991E4D01DF2BCEC922A39878CA264659;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_tB7ECA756C8B2659037F30C5E519FECB8EE650390;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_t556D14AA6F555F7364C62810932429031A39D050;
struct ITypeConstructor_1_t70FBC2A64E826431437D61A731F9026F2A329F53;
struct ITypeConstructor_1_t0450D7ABE6B0EC16038EEC5B027801981910C44C;
struct ITypeConstructor_1_tFACF935003548E97E3078FD8D6EA60429E86AD89;
struct ITypeConstructor_1_t1CC673F9CA9B6725DDE78E2F1C42BCC34A188A4C;
struct ITypeConstructor_1_t8F9D67739EBCE9CB50D0A3DCDC2EB180ADCD7153;
struct ITypeConstructor_1_tDB6611BF0502D2DE05D2B73BEFF0FBFB1D28FFF8;
struct ITypeConstructor_1_t015DDC9674C028839167F0DDF73583C7A8C0741D;
struct ITypeConstructor_1_t7E6EAA0BFBCCC6CE6DC49D2A818432D6C5AC990B;
struct ITypeConstructor_1_t785B35377CAB1421A62974313C9F0A614DF68FEF;
struct ITypeConstructor_1_t3C4E282D8CD3393ECB5ED8D2DA57BF9A6543BD6D;
struct ITypeConstructor_1_t51151016E912F38CEEF52AA31DB0C51D4013E9AE;
struct ITypeConstructor_1_t762E618FFA66D8CD05D0BA1254FB9FF99E532CFE;
struct ITypeConstructor_1_t7102F20E0DFAD03FD0C2E63098B64421902D420C;
struct ITypeConstructor_1_t148DEE696C67531ED0CC0C434029ED58D3900F40;
struct ITypeConstructor_1_t7AF3E225EB331261E85F3CFB7D4126FC73860649;
struct ITypeConstructor_1_tE167B37F2C433203C8B36AEB6AD2B06199C295D1;
struct ITypeConstructor_1_t70364E6E4EBD878F8E808FD1664EE1243E531B47;
struct ITypeConstructor_1_tFE631B93680CA0A906C987E9FEF7D34B14BFA655;
struct ITypeConstructor_1_tAE0A14502D1468290040C786788E78725BD529CD;
struct ITypeConstructor_1_t8DE731ADC15DD7971C02EB4C0B29ECCBF08F7623;
struct ITypeConstructor_1_t485348645D91F4C7E50906786F15660FB86F01C1;
struct ITypeConstructor_1_t645F4AB9BDB1589528A84F96AA921E2B8BFBF421;
struct ITypeConstructor_1_tAE8FA5C60F9AAD93E337D3B0A7838C1BF07539B8;
struct ITypeConstructor_1_t4FC204E1D4F5983B37CBC1C3B8407A9A568E5B6A;
struct ITypeConstructor_1_t9F314495BA8A0A3F7B6A20A3EDDB29132FF7959B;
struct ITypeConstructor_1_t19EAD6BE3670B81303A7F04C46F8FA2B8E948A3D;
struct ITypeConstructor_1_tCC196E183FB5A7CF798C682F9C3B70CDDA50CFFF;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t61D5D3D9EDD28391B0FE316A5641A34D7FF16FD0;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct ITypeConstructor_1_t63AA3F84ED218C4C0589371B74758F62E3EFCF85;
struct KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9;
struct KeyCollection_tD33CC71867DF7ABA23FB110392D5E48847C26EF1;
struct LinkedList_1_tD50FECFA8A9CFA372320F839B59B62F6C9D76836;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0;
struct List_1_t78D17974730334A3A9B24E41C74B9F638882BE13;
struct List_1_t3B9A886482AE1A521B03F1658F080A2585035C35;
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC;
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
struct List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59;
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8;
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24;
struct ValueCollection_t4D03BB0AB9F689B5D248372AA83D3A9D9FE67AFB;
struct EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B;
struct EntryU5BU5D_t4ABEDCD88055C777C2FC7957449D0CC6BBD5F22E;
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C;
struct KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Assembly_t;
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A;
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Exception_t;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
struct IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEventProperties_t6C5B8997F8C79157B7C03C1A566F17CE2BBE8D53;
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021;
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35;
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C;
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30;
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
struct ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666;
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600;
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793;
struct CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1;
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF;
struct ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356;
struct ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657;
struct U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct StringCreationState_t10C38C4AC62A4CEBF253B5B0B5ADC9177371978D;
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5;
IL2CPP_EXTERN_C String_t* _stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType1_2__ctor_m4F9B1F91035E4DE6EA6842FF34BD3072476B2EEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56  : public RuntimeObject
{
	Assembly_t* ___U3CdomainAssemblyU3Ei__Field;
	Type_t* ___U3CassemblyTypeU3Ei__Field;
};
struct U3CU3Ef__AnonymousType1_2_t090A4CD45B5F91CA6534324BD7F49A972DD6EE03  : public RuntimeObject
{
	RuntimeObject* ___U3CdomainAssemblyU3Ei__Field;
	RuntimeObject* ___U3CassemblyTypeU3Ei__Field;
};
struct Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEC259452B862939B4B33719FEB9E8E2A0A4E636B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5C4C96D84477D26190EAE76F39C529479E03E4C9* ____keys;
	ValueCollection_tA0553E3DE991CADF59BEBDBEF830DDE8A3B81F24* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4ABEDCD88055C777C2FC7957449D0CC6BBD5F22E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD33CC71867DF7ABA23FB110392D5E48847C26EF1* ____keys;
	ValueCollection_t4D03BB0AB9F689B5D248372AA83D3A9D9FE67AFB* ____values;
	RuntimeObject* ____syncRoot;
};
struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0  : public RuntimeObject
{
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t78D17974730334A3A9B24E41C74B9F638882BE13  : public RuntimeObject
{
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t3B9A886482AE1A521B03F1658F080A2585035C35  : public RuntimeObject
{
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C  : public RuntimeObject
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A  : public RuntimeObject
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC  : public RuntimeObject
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59  : public RuntimeObject
{
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8  : public RuntimeObject
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72  : public RuntimeObject
{
	ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Assembly_t  : public RuntimeObject
{
};
struct Assembly_t_marshaled_pinvoke
{
};
struct Assembly_t_marshaled_com
{
};
struct ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2  : public RuntimeObject
{
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021  : public RuntimeObject
{
	bool ___imported;
	bool ___shared;
	bool ___sharedExplicitRelease;
	bool ___requestFallBack;
	uint32_t ___writeCount;
	uint32_t ___readCount;
	int32_t ___cachedHash;
	int32_t ___transientPassIndex;
	int32_t ___sharedResourceLastFrameUsed;
};
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8  : public RuntimeObject
{
	Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A* ___components;
	VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103* ___parameters;
	bool ___requiresReset;
	bool ___requiresResetForAllProperties;
	bool ___U3CisValidU3Ek__BackingField;
};
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent;
	RuntimeObject* ___annotations;
};
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};
struct Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793  : public RuntimeObject
{
	uint32_t ___totalBytes;
	uint32_t ___defaulChunkSize;
	List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* ___chunks;
	Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* ___existingValues;
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___serializationAdapters;
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF  : public RuntimeObject
{
	DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* ___resourceArray;
	int32_t ___sharedResourcesCount;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* ___pool;
	ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657* ___createResourceCallback;
	ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356* ___releaseResourceCallback;
};
struct U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329  : public RuntimeObject
{
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA  : public RuntimeObject
{
	uint32_t ___position;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 
{
	List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* ____list;
	int32_t ____index;
	int32_t ____version;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* ____current;
};
struct LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 
{
	int32_t ___requestHits;
	int32_t ___requestCount;
	int32_t ___entryLimit;
	Dictionary_2_t4B95DFC3131E5495DBF5F130B1DC985ED29362D5* ___cache;
	LinkedList_1_tD50FECFA8A9CFA372320F839B59B62F6C9D76836* ___lru;
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct PhysicsBody_tDCDAC059BCC8FF8A057AD9B683E04545D3B191A7 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct PhysicsJoint_tD7FB5BFA5B2CF4F6A267F59B0038EE32EA89CE9D 
{
	int32_t ___index1;
	uint16_t ___world0;
	uint16_t ___generation;
};
struct PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version;
	RuntimeObject* ___m_InternalOp;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 
{
	String_t* ___m_AssemblyName;
	String_t* ___m_ClassName;
	Type_t* ___m_CachedType;
	bool ___U3CValueChangedU3Ek__BackingField;
};
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke
{
	char* ___m_AssemblyName;
	char* ___m_ClassName;
	Type_t* ___m_CachedType;
	int32_t ___U3CValueChangedU3Ek__BackingField;
};
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com
{
	Il2CppChar* ___m_AssemblyName;
	Il2CppChar* ___m_ClassName;
	Type_t* ___m_CachedType;
	int32_t ___U3CValueChangedU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___m_NextBlock;
	int32_t ___m_NumItems;
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
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 
{
	uint32_t ___stringId;
	uint32_t ___nextId;
};
struct ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A 
{
	uint32_t ___typeId;
	uint32_t ___objectId;
};
struct MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D__padding[1];
	};
};
struct MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00__padding[1];
	};
};
struct MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23__padding[1];
	};
};
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters;
};
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};
struct ContactId_t3A8A09CF8F109FB8BFA43C877969F29EDEEF467B 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables;
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame;
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA 
{
	uint32_t ___stringId;
	Il2CppChar ___separator;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_pinvoke
{
	uint32_t ___stringId;
	uint8_t ___separator;
};
struct ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_marshaled_com
{
	uint32_t ___stringId;
	uint8_t ___separator;
};
struct Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D 
{
	uint32_t ___assemblyId;
	uint32_t ___classId;
};
struct SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C 
{
	uint32_t ___hashId;
	uint32_t ___bundleNameId;
	uint32_t ___crc;
	uint32_t ___bundleSize;
	uint32_t ___commonId;
};
struct Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF 
{
	int32_t ___magic;
	int32_t ___version;
	uint32_t ___keysOffset;
	uint32_t ___idOffset;
	uint32_t ___instanceProvider;
	uint32_t ___sceneProvider;
	uint32_t ___initObjectsArray;
	uint32_t ___buildResultHash;
};
struct KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD 
{
	uint32_t ___keyNameOffset;
	uint32_t ___locationSetOffset;
};
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 
{
	uint32_t ___id;
	uint32_t ___type;
	uint32_t ___data;
};
struct Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 
{
	int16_t ___timeout;
	uint8_t ___redirectLimit;
	uint8_t ___retryCount;
	int32_t ___flags;
};
struct Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE 
{
	uint32_t ___primaryKeyOffset;
	uint32_t ___internalIdOffset;
	uint32_t ___providerOffset;
	uint32_t ___dependencySetOffset;
	int32_t ___dependencyHashValue;
	uint32_t ___extraDataOffset;
	uint32_t ___typeId;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_t59A3BCF576F861B86F2B3825C45F6F7CDE0CB53C 
{
	intptr_t ____value;
};
struct ByReference_1_t310EE53064D2EC3AF382E826AEAE7639EA573465 
{
	intptr_t ____value;
};
struct ByReference_1_t041FDD4580DABDAC789C1D48BA78FF2AF417CDE6 
{
	intptr_t ____value;
};
struct ByReference_1_t3A6C9DCA455ACFFA73DE53D212A723552D857B96 
{
	intptr_t ____value;
};
struct ByReference_1_t7625CA25D4DE881D638CA8F4B295F86D7A4BB8CD 
{
	intptr_t ____value;
};
struct ByReference_1_t45A3E2CFEF4091633680EABE39AFBA7E6B4BE668 
{
	intptr_t ____value;
};
struct ByReference_1_tC172CC48841C7CB5DB60C478807519993AEA97BA 
{
	intptr_t ____value;
};
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4 
{
	uint8_t* ___Ptr;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B 
{
	uint8_t* ___Ptr;
	int32_t* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6 
{
	int32_t* ___Ptr;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___m_Capacity;
	int32_t ___m_Filled;
	int32_t ___m_Write;
	int32_t ___m_Read;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BindingMode_t14EA605BB56B087ECA15C8BF7826E98F12D30E61 
{
	int32_t ___value__;
};
struct BindingStatus_t72E69C73FEA899A1FE65BCA04E6B79E30157EB43 
{
	int32_t ___value__;
};
struct BindingUpdateStage_t91119CD89F37505ED96D2FC473F486E5ED112762 
{
	int32_t ___value__;
};
struct BindingUpdateTrigger_t5237F1E29F5B5604BB57907C83EE6B1CFA261234 
{
	int32_t ___value__;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
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
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 
{
	String_t* ___m_Id;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 ___m_ObjectType;
	String_t* ___m_Data;
};
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_pinvoke
{
	char* ___m_Id;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke ___m_ObjectType;
	char* ___m_Data;
};
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_com
{
	Il2CppChar* ___m_Id;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com ___m_ObjectType;
	Il2CppChar* ___m_Data;
};
struct PhysicsRotate_tC2E9C9A6A76056D2DA0765D0FF6D3A4AA3EE0A0F 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	RuntimeObject* ___content;
};
struct XmlTypeCode_tCA027FC382F4E2DBDF63CB305D942DDFC072E064 
{
	int32_t ___value__;
};
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer;
	Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___m_Adapters;
	LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565 ___m_Cache;
	uint32_t ___m_MinCachedObjectSize;
	StringBuilder_t* ___stringBuilder;
};
struct InternalOp_tBDC23A9687C8968D1086B882C50280316C8CAB4B  : public RuntimeObject
{
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___m_AssetBundle;
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_PreloadRequest;
	AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* ___m_RequestOperation;
	RuntimeObject* ___m_Result;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___m_ProvideHandle;
	String_t* ___subObjectName;
};
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
{
	int32_t ___value__;
};
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
{
	int32_t ___value__;
};
struct TransformWriteMode_t9006A15DA105F005CFBC6CC59DAD4540C67046B1 
{
	int32_t ___value__;
};
struct ContactBeginEvent_t4F38390723F5E35F57A4009B9CACEF4CD212AA90 
{
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_ShapeA;
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_ShapeB;
	ContactId_t3A8A09CF8F109FB8BFA43C877969F29EDEEF467B ___m_ContactId;
};
struct ContactEndEvent_tE811C99069F0369669904C1229780EDB98CCD3AE 
{
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_ShapeA;
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_ShapeB;
	ContactId_t3A8A09CF8F109FB8BFA43C877969F29EDEEF467B ___m_ContactId;
};
struct JointThresholdEvent_t4F68DE6F2342237EE679E77E31F30F355EB2D808 
{
	PhysicsJoint_tD7FB5BFA5B2CF4F6A267F59B0038EE32EA89CE9D ___m_Joint;
	intptr_t ___m_UserData;
};
struct TriggerBeginEvent_t377C38E390AB920034AF6E063A969306047BD6B8 
{
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_TriggerShape;
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_VisitorShape;
};
struct TriggerEndEvent_t7FEED3B9C48823CEE1DBB1B83E237B5D485F0FD5 
{
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_TriggerShape;
	PhysicsShape_tB637EBCF69E3A5493C8E6F41F1332D1CD996291B ___m_VisitorShape;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 
{
	ByReference_1_t310EE53064D2EC3AF382E826AEAE7639EA573465 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 
{
	ByReference_1_t041FDD4580DABDAC789C1D48BA78FF2AF417CDE6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE 
{
	ByReference_1_t3A6C9DCA455ACFFA73DE53D212A723552D857B96 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 
{
	ByReference_1_t7625CA25D4DE881D638CA8F4B295F86D7A4BB8CD ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB 
{
	ByReference_1_t45A3E2CFEF4091633680EABE39AFBA7E6B4BE668 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 
{
	ByReference_1_tC172CC48841C7CB5DB60C478807519993AEA97BA ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 
{
	ByReference_1_t59A3BCF576F861B86F2B3825C45F6F7CDE0CB53C ____pointer;
	int32_t ____length;
};
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED  : public RuntimeObject
{
	bool ___m_Dirty;
	int32_t ___m_UpdateTrigger;
	String_t* ___U3CpropertyU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB 
{
	int32_t ___U3CstatusU3Ek__BackingField;
	String_t* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_pinvoke
{
	int32_t ___U3CstatusU3Ek__BackingField;
	char* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_com
{
	int32_t ___U3CstatusU3Ek__BackingField;
	Il2CppChar* ___U3CmessageU3Ek__BackingField;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 
{
	String_t* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_marshaled_pinvoke
{
	char* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_marshaled_com
{
	Il2CppChar* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PhysicsTransform_tC034E6903DE863628D032D2452AD049859CE9F6F 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_tC2E9C9A6A76056D2DA0765D0FF6D3A4AA3EE0A0F ___rotation;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67 
{
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 ___m_UntypedListData;
};
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration;
};
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType;
	int32_t ___typeCode;
	Type_t* ___clrTypeDefault;
};
struct PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct ContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE 
{
	ContactBeginEvent_t4F38390723F5E35F57A4009B9CACEF4CD212AA90 ___m_BeginEvent;
};
struct ContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29 
{
	ContactEndEvent_tE811C99069F0369669904C1229780EDB98CCD3AE ___m_EndEvent;
};
struct JointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC 
{
	JointThresholdEvent_t4F68DE6F2342237EE679E77E31F30F355EB2D808 ___m_JointThresholdEvent;
};
struct TriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7 
{
	TriggerBeginEvent_t377C38E390AB920034AF6E063A969306047BD6B8 ___m_BeginEvent;
};
struct TriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9 
{
	TriggerEndEvent_t7FEED3B9C48823CEE1DBB1B83E237B5D485F0FD5 ___m_EndEvent;
};
struct Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380  : public MulticastDelegate_t
{
};
struct Action_4_t9D9C3B4C9FB177DA85ADC6E208671365BCDB467F  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___active;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103* ___parameterList;
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___m_ParameterReadOnlyCollection;
};
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter;
};
struct TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76 
{
	TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C ___allocator;
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___jobParameters;
};
struct TransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0 
{
	PhysicsBody_tDCDAC059BCC8FF8A057AD9B683E04545D3B191A7 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tC034E6903DE863628D032D2452AD049859CE9F6F ___m_PhysicsTransform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct BodyUpdateEvent_t82660EC0D1983A12F9407C4977880BD84E5360D9 
{
	intptr_t ___m_UserData;
	PhysicsTransform_tC034E6903DE863628D032D2452AD049859CE9F6F ___m_Transform;
	PhysicsBody_tDCDAC059BCC8FF8A057AD9B683E04545D3B191A7 ___m_Body;
	bool ___m_FellAsleep;
};
struct BodyUpdateEvent_t82660EC0D1983A12F9407C4977880BD84E5360D9_marshaled_pinvoke
{
	intptr_t ___m_UserData;
	PhysicsTransform_tC034E6903DE863628D032D2452AD049859CE9F6F ___m_Transform;
	PhysicsBody_tDCDAC059BCC8FF8A057AD9B683E04545D3B191A7 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct BodyUpdateEvent_t82660EC0D1983A12F9407C4977880BD84E5360D9_marshaled_com
{
	intptr_t ___m_UserData;
	PhysicsTransform_tC034E6903DE863628D032D2452AD049859CE9F6F ___m_Transform;
	PhysicsBody_tDCDAC059BCC8FF8A057AD9B683E04545D3B191A7 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA  : public Binding_tA1358A155852138C1926082E4F3245B6F631CBED
{
	int32_t ___m_BindingMode;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_SourceToUiConverters;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_UiToSourceConverters;
	RuntimeObject* ___U3CdataSourceU3Ek__BackingField;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CdataSourcePathU3Ek__BackingField;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct BodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC 
{
	BodyUpdateEvent_t82660EC0D1983A12F9407C4977880BD84E5360D9 ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_marshaled_pinvoke
{
	BodyUpdateEvent_t82660EC0D1983A12F9407C4977880BD84E5360D9_marshaled_pinvoke ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_marshaled_com
{
	BodyUpdateEvent_t82660EC0D1983A12F9407C4977880BD84E5360D9_marshaled_com ___m_BodyUpdateEvent;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	RuntimeObject* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1  : public ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2
{
	DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___U3CBindingU3Ek__BackingField;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___U3CbindingContextU3Ek__BackingField;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___U3CresultU3Ek__BackingField;
};
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___U3CbindingU3Ek__BackingField;
	int32_t ___U3CdirectionU3Ek__BackingField;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___U3CbindingContextU3Ek__BackingField;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___U3CresultU3Ek__BackingField;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray;
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray;
};
struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_StaticFields
{
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___s_emptyArray;
};
struct List_1_t78D17974730334A3A9B24E41C74B9F638882BE13_StaticFields
{
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___s_emptyArray;
};
struct List_1_t3B9A886482AE1A521B03F1658F080A2585035C35_StaticFields
{
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___s_emptyArray;
};
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray;
};
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A_StaticFields
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray;
};
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_emptyArray;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray;
};
struct List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59_StaticFields
{
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ___s_emptyArray;
};
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___s_emptyArray;
};
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray;
};
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72_StaticFields
{
	ChunkU5BU5D_t95CFB8B54DAFA085DBAC233BCB9254A640F28F3C* ___s_emptyArray;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329_StaticFields
{
	U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329* ___U3CU3E9;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600_StaticFields
{
	StringCreationState_t10C38C4AC62A4CEBF253B5B0B5ADC9177371978D* ___stringCreationState;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA_StaticFields
{
	MethodInfo_t* ___s_UpdateUIMethodInfo;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D m_Items[1];

	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		m_Items[index] = value;
	}
};
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 m_Items[1];

	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		m_Items[index] = value;
	}
};
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615  : public RuntimeArray
{
	ALIGN_FIELD (8) Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F m_Items[1];

	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F value)
	{
		m_Items[index] = value;
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7  : public RuntimeArray
{
	ALIGN_FIELD (8) ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 m_Items[1];

	inline ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Id), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_ObjectType))->___m_AssemblyName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_ObjectType))->___m_ClassName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_ObjectType))->___m_CachedType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Data), (void*)NULL);
		#endif
	}
	inline ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Id), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_ObjectType))->___m_AssemblyName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_ObjectType))->___m_ClassName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_ObjectType))->___m_CachedType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Data), (void*)NULL);
		#endif
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD m_Items[1];

	inline KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8_gshared (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_gshared_inline (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* List_1_ToArray_m628BE6BFE0A9590DC6CDABE281BFE6344BFCB2F7_gshared (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9509839B91564324F106C62B97DBD441E316569D_gshared (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD959D3DC6BB637E22608AF4262AACFECD31B90F9_gshared_inline (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* List_1_ToArray_mFFABC035B7B7255C8A3D57A5EDF511047065E3D7_gshared (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE9633994EFA6E9DDC1A2BA86ACE12238A44BBD40_gshared (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m25E30E3AFE9A311DB95009459B5A2CDF45453DC2_gshared_inline (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* List_1_ToArray_mFAE377BF1C0BB48573643523847914F11FEE8A14_gshared (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m10B7B906CB001FD99973B2681589D138E212FE45_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_gshared_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* List_1_ToArray_m54D37FBCF68237223B6E36E4991BE2CA510E5931_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2EBA73E03CE51821DFC1880E09649FFBFC3ABA75_gshared (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3AB938BCFAB883339EB05C02B33852D44401AA86_gshared_inline (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, int64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* List_1_ToArray_m8F215FE5D98A9A41546F2FD6AB5A741A5B6F1D92_gshared (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8EB9351A6F68DD869C299DBF0C8C7A69CCF8C705_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_gshared_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* List_1_ToArray_mEF4322709776EDCAD8991E113A7B507FFD1B29A8_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCA3F43DE16D3EF24D0F9160C302F1214565D00CB_gshared (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m12865FFC396291FF62E4CF85327B19D60943D7C4_gshared_inline (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* List_1_ToArray_mF3CFB75933D0B0F846C62CDF7E4EE2A13AED4A11_gshared (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B_gshared (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD588DA8000CB6203E1EFD167075B07035A0053EC_gshared_inline (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, uint16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* List_1_ToArray_mBCD38D37164C469E87D3B366C0F2A64A1E5652C8_gshared (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_gshared (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* List_1_ToArray_m1CC582554F660560CD50E99994F15107827F0CA3_gshared (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m29BEDE660794161B463CE980419121848921671C_gshared (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m553050C87F0BF32427648D10CE6B6452B32ABB71_gshared_inline (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* List_1_ToArray_m14E9F17B8C78A5A041268F6BB20FCB99E8655592_gshared (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_TisRuntimeObject_mF4695B2CADA29D7AFFE65D25F3592ADD65FAF2EF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_m15074FFC8417C7A69B5C9774824F052CDCB4F438_gshared_inline (Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, int32_t ___3_arg4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m4C7498DCCF810DE7EBF2BFA1AEDA0A78E3D05335_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* ___1_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 Reader_ReadObject_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_mE008D1F164BD4D5AE59775B896037B7BB92E26C7_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_gshared (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, Type_t* ___0_type, uint32_t ___1_id, RuntimeObject** ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m1E5777C5B01C5B933CA2D4B5C7F9F3B5F6739BAA_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711_gshared (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72_gshared (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276_gshared (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E_gshared (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6_gshared (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A_gshared (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE_gshared (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784_gshared (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m6DA2AB54FFDD47D9D530ECB39E988A493887D083_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_mDA99E08D0136A0215D22ABC694850D80277BE373_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_m6B800AAF3723A835A02719E0F52BFB149AD1B73B_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_m58CDB21A12F91BA61521EC9A058FA144326F07AD_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_mF5BB5B8EF93034D5B63B72380791D63CBEA66270_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_mDE67BEDB0CD872D2D74CD4517A1C1F4136D9D67D_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B PhysicsBuffer_ToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_m38363BE6FA3F6692C76B049F3655C730EA2D38D2_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m31A8C5879B8832450ACED9FE8E99E9AD1E0E3451_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD PhysicsBuffer_ToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m5300A4670560B877062D1F8F0AE01480CC434D0F_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_mFB994894CC6A3D45C6F8C94042BC7DD2E7F60C62_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_m9D5B563D8D7BA6D52F2E5B671516DAE22B9B6C0E_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DF8C9207C463ECAC3C8F16300EA439447682EF2_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEF1AE37B4B04817B274AB6736DC70C7042B55A06_gshared_inline (ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_m91B23961C2EFCED0F7F9D1B6F2F37E552AFA267D_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m83BDBEB722B07C7A11FA1C58F84D7B92332B3151_gshared_inline (ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE_mF1A693AB65C5904FF5ED53199E42A301C37E4A3C_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE556023C97056BE361AE96BC01743F5AE026E7B1_gshared_inline (ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29_mA3743CE9A5A358B73FF141668877C67D52655E64_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m87A53713785A958A93F0D3116D91037685EA9289_gshared_inline (ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC_m53C7FF621550A9A1C7CC9F2369FC7C09ED684A61_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFC657C8B3940754C21CAA85497A1C07DE1BE96D0_gshared_inline (ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7_m25C0D14A939EDA7F2873372B7C0F88158C92D7FA_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAC17858A95A16AB6F84D2B27F8B568010565B8F6_gshared_inline (ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9_m00AA517EFDB2B9BFF331BEA892787EACEF3E9D91_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_mE3C3E9E47E2FF9FE5786A59B7CEF03ECA8DC1732_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA42DBB60391A281D719DCD8CDA7274B0828E87DF_gshared_inline (Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 PhysicsBuffer_ToSpan_TisTransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0_mC9215A1EAC2E5E6B53DDFAA6EF1372940ED36B5F_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType1_2__ctor_mB8AD9644D56A4625ACBEA16E3916F308709B19B6_gshared (U3CU3Ef__AnonymousType1_2_t090A4CD45B5F91CA6534324BD7F49A972DD6EE03* __this, RuntimeObject* ___0_domainAssembly, RuntimeObject* ___1_assemblyType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ef__AnonymousType1_2_get_assemblyType_m07BE8ACF0CAEE5CD0F7A16917F905F5F9A01B6DA_gshared_inline (U3CU3Ef__AnonymousType1_2_t090A4CD45B5F91CA6534324BD7F49A972DD6EE03* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mA5A8C986198DD2B435B20BAEF2A208029FDB8C30_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m201D21D3AC9187C9EFEF16F0B593FAC6BE19EE72_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m067749C993CAF4A3AA0673C46673216D995516DE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m3E7DE866086F324900A4FC8398ABC02932B2CF83_gshared (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mE7A93ED556BFF9349318D59B805E26446A7D23B5_gshared (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m777C776EC80539A9464F1ECDC9DAC276B56A0B19_gshared (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAE92ED7C1F3B1E0BB409F462197C47FD982345E1_gshared (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, int64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m98E1D35BB28087067AB471BFF9895F3E2D113F10_gshared (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m2C8293CD3AD1E44AB513F14B3CB34DBF3C19DF7C_gshared (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, uint16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423_gshared (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8B75BE9FADA560AD6E8D74B9242FC928826B4EE6_gshared (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, uint64_t ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared)(__this, method);
}
inline void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline)(__this, ___0_item, method);
}
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126_gshared)(__this, method);
}
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___0_item, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
inline void List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8 (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, const RuntimeMethod*))List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8_gshared)(__this, method);
}
inline void List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_inline (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_gshared_inline)(__this, ___0_item, method);
}
inline DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* List_1_ToArray_m628BE6BFE0A9590DC6CDABE281BFE6344BFCB2F7 (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, const RuntimeMethod* method)
{
	return ((  DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, const RuntimeMethod*))List_1_ToArray_m628BE6BFE0A9590DC6CDABE281BFE6344BFCB2F7_gshared)(__this, method);
}
inline void List_1__ctor_m9509839B91564324F106C62B97DBD441E316569D (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*, const RuntimeMethod*))List_1__ctor_m9509839B91564324F106C62B97DBD441E316569D_gshared)(__this, method);
}
inline void List_1_Add_mD959D3DC6BB637E22608AF4262AACFECD31B90F9_inline (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, const RuntimeMethod*))List_1_Add_mD959D3DC6BB637E22608AF4262AACFECD31B90F9_gshared_inline)(__this, ___0_item, method);
}
inline DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* List_1_ToArray_mFFABC035B7B7255C8A3D57A5EDF511047065E3D7 (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, const RuntimeMethod* method)
{
	return ((  DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* (*) (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*, const RuntimeMethod*))List_1_ToArray_mFFABC035B7B7255C8A3D57A5EDF511047065E3D7_gshared)(__this, method);
}
inline void List_1__ctor_mE9633994EFA6E9DDC1A2BA86ACE12238A44BBD40 (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*, const RuntimeMethod*))List_1__ctor_mE9633994EFA6E9DDC1A2BA86ACE12238A44BBD40_gshared)(__this, method);
}
inline void List_1_Add_m25E30E3AFE9A311DB95009459B5A2CDF45453DC2_inline (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))List_1_Add_m25E30E3AFE9A311DB95009459B5A2CDF45453DC2_gshared_inline)(__this, ___0_item, method);
}
inline DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* List_1_ToArray_mFAE377BF1C0BB48573643523847914F11FEE8A14 (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, const RuntimeMethod* method)
{
	return ((  DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* (*) (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*, const RuntimeMethod*))List_1_ToArray_mFAE377BF1C0BB48573643523847914F11FEE8A14_gshared)(__this, method);
}
inline void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared)(__this, method);
}
inline void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline)(__this, ___0_item, method);
}
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared)(__this, method);
}
inline void List_1__ctor_m10B7B906CB001FD99973B2681589D138E212FE45 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, const RuntimeMethod*))List_1__ctor_m10B7B906CB001FD99973B2681589D138E212FE45_gshared)(__this, method);
}
inline void List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_gshared_inline)(__this, ___0_item, method);
}
inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* List_1_ToArray_m54D37FBCF68237223B6E36E4991BE2CA510E5931 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, const RuntimeMethod*))List_1_ToArray_m54D37FBCF68237223B6E36E4991BE2CA510E5931_gshared)(__this, method);
}
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared)(__this, method);
}
inline void List_1__ctor_m2EBA73E03CE51821DFC1880E09649FFBFC3ABA75 (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, const RuntimeMethod*))List_1__ctor_m2EBA73E03CE51821DFC1880E09649FFBFC3ABA75_gshared)(__this, method);
}
inline void List_1_Add_m3AB938BCFAB883339EB05C02B33852D44401AA86_inline (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, int64_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, int64_t, const RuntimeMethod*))List_1_Add_m3AB938BCFAB883339EB05C02B33852D44401AA86_gshared_inline)(__this, ___0_item, method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* List_1_ToArray_m8F215FE5D98A9A41546F2FD6AB5A741A5B6F1D92 (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, const RuntimeMethod*))List_1_ToArray_m8F215FE5D98A9A41546F2FD6AB5A741A5B6F1D92_gshared)(__this, method);
}
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
inline void List_1__ctor_m8EB9351A6F68DD869C299DBF0C8C7A69CCF8C705 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))List_1__ctor_m8EB9351A6F68DD869C299DBF0C8C7A69CCF8C705_gshared)(__this, method);
}
inline void List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_gshared_inline)(__this, ___0_item, method);
}
inline SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* List_1_ToArray_mEF4322709776EDCAD8991E113A7B507FFD1B29A8 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method)
{
	return ((  SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))List_1_ToArray_mEF4322709776EDCAD8991E113A7B507FFD1B29A8_gshared)(__this, method);
}
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___0_item, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658_gshared)(__this, method);
}
inline void List_1__ctor_mCA3F43DE16D3EF24D0F9160C302F1214565D00CB (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, const RuntimeMethod*))List_1__ctor_mCA3F43DE16D3EF24D0F9160C302F1214565D00CB_gshared)(__this, method);
}
inline void List_1_Add_m12865FFC396291FF62E4CF85327B19D60943D7C4_inline (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))List_1_Add_m12865FFC396291FF62E4CF85327B19D60943D7C4_gshared_inline)(__this, ___0_item, method);
}
inline TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* List_1_ToArray_mF3CFB75933D0B0F846C62CDF7E4EE2A13AED4A11 (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, const RuntimeMethod* method)
{
	return ((  TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, const RuntimeMethod*))List_1_ToArray_mF3CFB75933D0B0F846C62CDF7E4EE2A13AED4A11_gshared)(__this, method);
}
inline void List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, const RuntimeMethod*))List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B_gshared)(__this, method);
}
inline void List_1_Add_mD588DA8000CB6203E1EFD167075B07035A0053EC_inline (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, uint16_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, uint16_t, const RuntimeMethod*))List_1_Add_mD588DA8000CB6203E1EFD167075B07035A0053EC_gshared_inline)(__this, ___0_item, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* List_1_ToArray_mBCD38D37164C469E87D3B366C0F2A64A1E5652C8 (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, const RuntimeMethod*))List_1_ToArray_mBCD38D37164C469E87D3B366C0F2A64A1E5652C8_gshared)(__this, method);
}
inline void List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31_gshared)(__this, method);
}
inline void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, uint32_t, const RuntimeMethod*))List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_gshared_inline)(__this, ___0_item, method);
}
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* List_1_ToArray_m1CC582554F660560CD50E99994F15107827F0CA3 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))List_1_ToArray_m1CC582554F660560CD50E99994F15107827F0CA3_gshared)(__this, method);
}
inline void List_1__ctor_m29BEDE660794161B463CE980419121848921671C (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, const RuntimeMethod*))List_1__ctor_m29BEDE660794161B463CE980419121848921671C_gshared)(__this, method);
}
inline void List_1_Add_m553050C87F0BF32427648D10CE6B6452B32ABB71_inline (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, uint64_t, const RuntimeMethod*))List_1_Add_m553050C87F0BF32427648D10CE6B6452B32ABB71_gshared_inline)(__this, ___0_item, method);
}
inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* List_1_ToArray_m14E9F17B8C78A5A041268F6BB20FCB99E8655592 (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, const RuntimeMethod* method)
{
	return ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, const RuntimeMethod*))List_1_ToArray_m14E9F17B8C78A5A041268F6BB20FCB99E8655592_gshared)(__this, method);
}
inline RuntimeObject* Reader_ReadObject_TisRuntimeObject_mF4695B2CADA29D7AFFE65D25F3592ADD65FAF2EF (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValue, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, uint32_t*, bool, const RuntimeMethod*))Reader_ReadObject_TisRuntimeObject_mF4695B2CADA29D7AFFE65D25F3592ADD65FAF2EF_gshared)(__this, ___0_id, ___1_size, ___2_cacheValue, method);
}
inline void Action_4_Invoke_m15074FFC8417C7A69B5C9774824F052CDCB4F438_inline (Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, int32_t ___3_arg4, const RuntimeMethod* method)
{
	((  void (*) (Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380*, RuntimeObject*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Action_4_Invoke_m15074FFC8417C7A69B5C9774824F052CDCB4F438_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
inline bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, RuntimeObject**, const RuntimeMethod*))Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared)(__this, ___0_offset, ___1_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryStorageBuffer_GetSerializationAdapter_m926A4AE15D4DF09AAEFA943F4F0996B1B48A7E52 (Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* ___0_serializationAdapters, Type_t* ___1_t, RuntimeObject** ___2_adapter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
inline bool LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3 (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, uint32_t ___0_id, RuntimeObject* ___1_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, uint32_t, RuntimeObject*, const RuntimeMethod*))LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_gshared)(__this, ___0_id, ___1_obj, method);
}
inline bool Reader_TryGetCachedValue_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m4C7498DCCF810DE7EBF2BFA1AEDA0A78E3D05335 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*, const RuntimeMethod*))Reader_TryGetCachedValue_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m4C7498DCCF810DE7EBF2BFA1AEDA0A78E3D05335_gshared)(__this, ___0_offset, ___1_val, method);
}
inline bool Reader_TryGetCachedValue_TisObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7_m6E7A51918B6F43864251A24DE0137E01B5A1810E (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7**, const RuntimeMethod*))Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared)(__this, ___0_offset, ___1_val, method);
}
inline ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 Reader_ReadObject_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_mE008D1F164BD4D5AE59775B896037B7BB92E26C7 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValue, const RuntimeMethod* method)
{
	return ((  ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, uint32_t*, bool, const RuntimeMethod*))Reader_ReadObject_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_mE008D1F164BD4D5AE59775B896037B7BB92E26C7_gshared)(__this, ___0_id, ___1_size, ___2_cacheValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline bool Reader_TryGetCachedValue_TisKeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380_m2E8FAB02F99F9511F7A8063506EF513CEABBD324 (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380** ___1_val, const RuntimeMethod* method)
{
	return ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380**, const RuntimeMethod*))Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared)(__this, ___0_offset, ___1_val, method);
}
inline bool LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* __this, Type_t* ___0_type, uint32_t ___1_id, RuntimeObject** ___2_val, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*, Type_t*, uint32_t, RuntimeObject**, const RuntimeMethod*))LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_gshared)(__this, ___0_type, ___1_id, ___2_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_dataSize, bool ___1_prefixSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, void* ___0_pData, uint32_t ___1_dataSize, bool ___2_prefixSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14 (void* ___0_pData, uint64_t ___1_size, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___2_hash, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_length, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8 (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_key, uint32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_id, void* ___1_pData, uint32_t ___2_dataSize, bool ___3_prefixSize, const RuntimeMethod* method) ;
inline Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F (List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 (*) (List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257 (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_inline (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	return ((  Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline int32_t Enumerable_Count_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m1E5777C5B01C5B933CA2D4B5C7F9F3B5F6739BAA (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m1E5777C5B01C5B933CA2D4B5C7F9F3B5F6739BAA_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_obj, bool ___1_serializeTypeData, const RuntimeMethod* method) ;
inline uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980 (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, bool, const RuntimeMethod*))Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared)(__this, ___0_values, ___1_hashElements, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*, const RuntimeMethod*))MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*, const RuntimeMethod*))MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*, const RuntimeMethod*))MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*, const RuntimeMethod*))MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*, const RuntimeMethod*))MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*, const RuntimeMethod*))MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_gshared)(__this, ___0_ev, method);
}
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*, const RuntimeMethod*))MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*, const RuntimeMethod*))MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*, const RuntimeMethod*))MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*, const RuntimeMethod*))MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*, const RuntimeMethod*))MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*, const RuntimeMethod*))MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_gshared)(__this, ___0_ev, method);
}
inline int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*, const RuntimeMethod*))MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*, const RuntimeMethod*))MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*, const RuntimeMethod*))MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*, const RuntimeMethod*))MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*, const RuntimeMethod*))MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*, const RuntimeMethod*))MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_gshared)(__this, ___0_ev, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, double*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uint64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F_gshared)(__this, ___0_node, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
inline HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* (*) (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* (*) (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276 (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* (*) (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* (*) (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6 (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* (*) (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* (*) (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (int32_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81 (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint64_t* (*) (uint64_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* (*) (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784 (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* (*) (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4 (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* (*) (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21 (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* (*) (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1 (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT, intptr_t, const RuntimeMethod*))TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_gshared)(__this, ___0_handlePtr, method);
}
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (RuntimeObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m6DA2AB54FFDD47D9D530ECB39E988A493887D083 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m6DA2AB54FFDD47D9D530ECB39E988A493887D083_gshared)(__this, method);
}
inline NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_mDA99E08D0136A0215D22ABC694850D80277BE373 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_mDA99E08D0136A0215D22ABC694850D80277BE373_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_m6B800AAF3723A835A02719E0F52BFB149AD1B73B (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_m6B800AAF3723A835A02719E0F52BFB149AD1B73B_gshared)(__this, method);
}
inline NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_m58CDB21A12F91BA61521EC9A058FA144326F07AD (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_m58CDB21A12F91BA61521EC9A058FA144326F07AD_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_mF5BB5B8EF93034D5B63B72380791D63CBEA66270 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_mF5BB5B8EF93034D5B63B72380791D63CBEA66270_gshared)(__this, method);
}
inline NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_mDE67BEDB0CD872D2D74CD4517A1C1F4136D9D67D (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_mDE67BEDB0CD872D2D74CD4517A1C1F4136D9D67D_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B PhysicsBuffer_ToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_m38363BE6FA3F6692C76B049F3655C730EA2D38D2 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_m38363BE6FA3F6692C76B049F3655C730EA2D38D2_gshared)(__this, method);
}
inline NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m31A8C5879B8832450ACED9FE8E99E9AD1E0E3451 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m31A8C5879B8832450ACED9FE8E99E9AD1E0E3451_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD PhysicsBuffer_ToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m5300A4670560B877062D1F8F0AE01480CC434D0F (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m5300A4670560B877062D1F8F0AE01480CC434D0F_gshared)(__this, method);
}
inline NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_mFB994894CC6A3D45C6F8C94042BC7DD2E7F60C62 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_mFB994894CC6A3D45C6F8C94042BC7DD2E7F60C62_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_m9D5B563D8D7BA6D52F2E5B671516DAE22B9B6C0E (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_m9D5B563D8D7BA6D52F2E5B671516DAE22B9B6C0E_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DF8C9207C463ECAC3C8F16300EA439447682EF2 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DF8C9207C463ECAC3C8F16300EA439447682EF2_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mEF1AE37B4B04817B274AB6736DC70C7042B55A06_inline (ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mEF1AE37B4B04817B274AB6736DC70C7042B55A06_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_m91B23961C2EFCED0F7F9D1B6F2F37E552AFA267D (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_m91B23961C2EFCED0F7F9D1B6F2F37E552AFA267D_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m83BDBEB722B07C7A11FA1C58F84D7B92332B3151_inline (ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m83BDBEB722B07C7A11FA1C58F84D7B92332B3151_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE_mF1A693AB65C5904FF5ED53199E42A301C37E4A3C (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE_mF1A693AB65C5904FF5ED53199E42A301C37E4A3C_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mE556023C97056BE361AE96BC01743F5AE026E7B1_inline (ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mE556023C97056BE361AE96BC01743F5AE026E7B1_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29_mA3743CE9A5A358B73FF141668877C67D52655E64 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29_mA3743CE9A5A358B73FF141668877C67D52655E64_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m87A53713785A958A93F0D3116D91037685EA9289_inline (ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m87A53713785A958A93F0D3116D91037685EA9289_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC_m53C7FF621550A9A1C7CC9F2369FC7C09ED684A61 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC_m53C7FF621550A9A1C7CC9F2369FC7C09ED684A61_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mFC657C8B3940754C21CAA85497A1C07DE1BE96D0_inline (ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFC657C8B3940754C21CAA85497A1C07DE1BE96D0_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7_m25C0D14A939EDA7F2873372B7C0F88158C92D7FA (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7_m25C0D14A939EDA7F2873372B7C0F88158C92D7FA_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mAC17858A95A16AB6F84D2B27F8B568010565B8F6_inline (ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mAC17858A95A16AB6F84D2B27F8B568010565B8F6_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9_m00AA517EFDB2B9BFF331BEA892787EACEF3E9D91 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9_m00AA517EFDB2B9BFF331BEA892787EACEF3E9D91_gshared)(__this, method);
}
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_mE3C3E9E47E2FF9FE5786A59B7CEF03ECA8DC1732 (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_mE3C3E9E47E2FF9FE5786A59B7CEF03ECA8DC1732_gshared)(__this, method);
}
inline void Span_1__ctor_mA42DBB60391A281D719DCD8CDA7274B0828E87DF_inline (Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mA42DBB60391A281D719DCD8CDA7274B0828E87DF_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 PhysicsBuffer_ToSpan_TisTransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0_mC9215A1EAC2E5E6B53DDFAA6EF1372940ED36B5F (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 (*) (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisTransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0_mC9215A1EAC2E5E6B53DDFAA6EF1372940ED36B5F_gshared)(__this, method);
}
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline int32_t DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
inline IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869 (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___0_index, method);
}
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
inline void U3CU3Ef__AnonymousType1_2__ctor_m4F9B1F91035E4DE6EA6842FF34BD3072476B2EEF (U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* __this, Assembly_t* ___0_domainAssembly, Type_t* ___1_assemblyType, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56*, Assembly_t*, Type_t*, const RuntimeMethod*))U3CU3Ef__AnonymousType1_2__ctor_mB8AD9644D56A4625ACBEA16E3916F308709B19B6_gshared)(__this, ___0_domainAssembly, ___1_assemblyType, method);
}
inline Type_t* U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_inline (U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56*, const RuntimeMethod*))U3CU3Ef__AnonymousType1_2_get_assemblyType_m07BE8ACF0CAEE5CD0F7A16917F905F5F9A01B6DA_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mA5A8C986198DD2B435B20BAEF2A208029FDB8C30 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mA5A8C986198DD2B435B20BAEF2A208029FDB8C30_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m201D21D3AC9187C9EFEF16F0B593FAC6BE19EE72_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m201D21D3AC9187C9EFEF16F0B593FAC6BE19EE72_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m067749C993CAF4A3AA0673C46673216D995516DE_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m067749C993CAF4A3AA0673C46673216D995516DE_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m3E7DE866086F324900A4FC8398ABC02932B2CF83 (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))List_1_AddWithResize_m3E7DE866086F324900A4FC8398ABC02932B2CF83_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_mE7A93ED556BFF9349318D59B805E26446A7D23B5 (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, const RuntimeMethod*))List_1_AddWithResize_mE7A93ED556BFF9349318D59B805E26446A7D23B5_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m777C776EC80539A9464F1ECDC9DAC276B56A0B19 (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))List_1_AddWithResize_m777C776EC80539A9464F1ECDC9DAC276B56A0B19_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_mAE92ED7C1F3B1E0BB409F462197C47FD982345E1 (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, int64_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, int64_t, const RuntimeMethod*))List_1_AddWithResize_mAE92ED7C1F3B1E0BB409F462197C47FD982345E1_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m98E1D35BB28087067AB471BFF9895F3E2D113F10 (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))List_1_AddWithResize_m98E1D35BB28087067AB471BFF9895F3E2D113F10_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m2C8293CD3AD1E44AB513F14B3CB34DBF3C19DF7C (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, uint16_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, uint16_t, const RuntimeMethod*))List_1_AddWithResize_m2C8293CD3AD1E44AB513F14B3CB34DBF3C19DF7C_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423 (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, uint32_t, const RuntimeMethod*))List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423_gshared)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m8B75BE9FADA560AD6E8D74B9242FC928826B4EE6 (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, uint64_t, const RuntimeMethod*))List_1_AddWithResize_m8B75BE9FADA560AD6E8D74B9242FC928826B4EE6_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_2;
		L_2 = VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844(__this, L_1, NULL);
		V_0 = L_2;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_3 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocument_GetFirstNode_TisRuntimeObject_mB6611AFC4A5D605253FE7A3ABB8BFCB6250CA705_gshared (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content;
		V_0 = ((XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)IsInstClass((RuntimeObject*)L_0, XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var));
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}

IL_000f:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_2 = V_0;
		NullCheck(L_2);
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_3 = L_2->___next;
		V_0 = L_3;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_4 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}

IL_002c:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_7 = V_0;
		RuntimeObject* L_8 = ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content;
		if ((!(((RuntimeObject*)(XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
		{
			goto IL_000f;
		}
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObject_Annotation_TisRuntimeObject_mA59EF6437D825A65AED4C032B09C4AAEAD53631E_gshared (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = __this->___annotations;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_1 = __this->___annotations;
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = __this->___annotations;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0028:
	{
		V_1 = 0;
		goto IL_004d;
	}

IL_002c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004d:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_002c;
		}
	}

IL_0053:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_15 = V_4;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* V_1 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (bool)((*(bool*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_21 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_28, ((*(bool*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_37 = V_1;
		NullCheck(L_37);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_38;
		L_38 = List_1_ToArray_m68877C751F78027B79ECCFD2725A967B9A70A126(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((*(uint8_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_21 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_28, ((*(uint8_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_37 = V_1;
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* V_1 = NULL;
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_4 = (DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1*)(DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D)((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_21 = (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_inline(L_28, ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_37 = V_1;
		NullCheck(L_37);
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_38;
		L_38 = List_1_ToArray_m628BE6BFE0A9590DC6CDABE281BFE6344BFCB2F7(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* V_1 = NULL;
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_4 = (DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E*)(DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4)((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* L_21 = (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m9509839B91564324F106C62B97DBD441E316569D(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_mD959D3DC6BB637E22608AF4262AACFECD31B90F9_inline(L_28, ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* L_37 = V_1;
		NullCheck(L_37);
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_38;
		L_38 = List_1_ToArray_mFFABC035B7B7255C8A3D57A5EDF511047065E3D7(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* V_1 = NULL;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_4 = (DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615*)(DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* L_21 = (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_mE9633994EFA6E9DDC1A2BA86ACE12238A44BBD40(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m25E30E3AFE9A311DB95009459B5A2CDF45453DC2_inline(L_28, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* L_37 = V_1;
		NullCheck(L_37);
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_38;
		L_38 = List_1_ToArray_mFAE377BF1C0BB48573643523847914F11FEE8A14(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_1 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (double)((*(double*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_21 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_28, ((*(double*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_37 = V_1;
		NullCheck(L_37);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_38;
		L_38 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* V_1 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int16_t)((*(int16_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* L_21 = (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m10B7B906CB001FD99973B2681589D138E212FE45(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_inline(L_28, ((*(int16_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* L_37 = V_1;
		NullCheck(L_37);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_38;
		L_38 = List_1_ToArray_m54D37FBCF68237223B6E36E4991BE2CA510E5931(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)((*(int32_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_28, ((*(int32_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_37 = V_1;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38;
		L_38 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* V_1 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int64_t)((*(int64_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_21 = (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m2EBA73E03CE51821DFC1880E09649FFBFC3ABA75(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m3AB938BCFAB883339EB05C02B33852D44401AA86_inline(L_28, ((*(int64_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_37 = V_1;
		NullCheck(L_37);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_38;
		L_38 = List_1_ToArray_m8F215FE5D98A9A41546F2FD6AB5A741A5B6F1D92(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_28, ((RuntimeObject*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_37 = V_1;
		NullCheck(L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38;
		L_38 = List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int8_t)((*(int8_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_21 = (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m8EB9351A6F68DD869C299DBF0C8C7A69CCF8C705(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_inline(L_28, ((*(int8_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_37 = V_1;
		NullCheck(L_37);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_38;
		L_38 = List_1_ToArray_mEF4322709776EDCAD8991E113A7B507FFD1B29A8(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)((*(float*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_21 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_28, ((*(float*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_37 = V_1;
		NullCheck(L_37);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38;
		L_38 = List_1_ToArray_m7A70CC060DF87F0CCC73317BC6DE68C5D970C658(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* V_1 = NULL;
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_21 = (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_mCA3F43DE16D3EF24D0F9160C302F1214565D00CB(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m12865FFC396291FF62E4CF85327B19D60943D7C4_inline(L_28, ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_37 = V_1;
		NullCheck(L_37);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_38;
		L_38 = List_1_ToArray_mF3CFB75933D0B0F846C62CDF7E4EE2A13AED4A11(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint16_t)((*(uint16_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_21 = (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_mD588DA8000CB6203E1EFD167075B07035A0053EC_inline(L_28, ((*(uint16_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_37 = V_1;
		NullCheck(L_37);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38;
		L_38 = List_1_ToArray_mBCD38D37164C469E87D3B366C0F2A64A1E5652C8(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((*(uint32_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_21 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m2C432B7961B0F4289AE0E89EFF0147BFB96C2B31(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_inline(L_28, ((*(uint32_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_37 = V_1;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38;
		L_38 = List_1_ToArray_m1CC582554F660560CD50E99994F15107827F0CA3(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((*(uint64_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2)))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_21 = (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		List_1__ctor_m29BEDE660794161B463CE980419121848921671C(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				List_1_Add_m553050C87F0BF32427648D10CE6B6452B32ABB71_inline(L_28, ((*(uint64_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2)))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_37 = V_1;
		NullCheck(L_37);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38;
		L_38 = List_1_ToArray_m14E9F17B8C78A5A041268F6BB20FCB99E8655592(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlListConverter_ToArray_TisIl2CppFullySharedGenericAny_mE842A5B9F83A5858104C85C66B591AD394929357_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
	const Il2CppFullySharedGenericAny L_37 = L_15;
	RuntimeObject* V_0 = NULL;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_7, L_10, L_12, L_13);
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 2), L_15);
		NullCheck(L_5);
		il2cpp_codegen_memcpy((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16)), SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16)));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_3;
		RuntimeObject* L_19 = V_0;
		NullCheck((RuntimeObject*)L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_2;
		return L_21;
	}

IL_0052:
	{
		RuntimeObject* L_22 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_23 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_23;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{
				{
					RuntimeObject* L_25 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				V_5 = L_29;
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_30 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_31 = __this->___atomicConverter;
				RuntimeObject* L_32 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeObject* L_35 = ___1_nsResolver;
				NullCheck(L_31);
				RuntimeObject* L_36;
				L_36 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61, L_31, L_32, L_34, L_35);
				void* L_38 = UnBox_Any(L_36, il2cpp_rgctx_data(method->rgctx_data, 2), L_37);
				NullCheck(L_30);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))));
			}

IL_0093_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_41 = V_1;
		NullCheck(L_41);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42;
		L_42 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_41, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Reader_ProcessObjectArray_TisRuntimeObject_TisRuntimeObject_mDC09D15D91D0E13A1DF2DAED7225E2812D8BD1DA_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, RuntimeObject* ___2_context, Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380* ___3_procFunc, bool ___4_cacheValues, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	bool V_8 = false;
	{
		uint32_t L_0 = ___0_id;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		uint32_t* L_2 = ___1_size;
		*((int32_t*)L_2) = (int32_t)0;
		V_1 = (uint32_t)0;
		goto IL_0079;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		uint32_t L_4 = ___0_id;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 4)))));
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		V_4 = (uint32_t)0;
		uint8_t* L_6 = V_2;
		int32_t L_7 = *((uint32_t*)L_6);
		V_5 = (uint32_t)((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)4));
		V_6 = 0;
		goto IL_0062;
	}

IL_0032:
	{
		Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380* L_8 = ___3_procFunc;
		uint8_t* L_9 = V_2;
		int32_t L_10 = V_6;
		int32_t L_11 = *((uint32_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(1, L_10))))))));
		bool L_12 = ___4_cacheValues;
		RuntimeObject* L_13;
		L_13 = Reader_ReadObject_TisRuntimeObject_mF4695B2CADA29D7AFFE65D25F3592ADD65FAF2EF(__this, (uint32_t)L_11, (&V_7), L_12, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_14 = ___2_context;
		int32_t L_15 = V_6;
		uint32_t L_16 = V_5;
		NullCheck(L_8);
		Action_4_Invoke_m15074FFC8417C7A69B5C9774824F052CDCB4F438_inline(L_8, L_13, L_14, L_15, (int32_t)L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint32_t L_17 = V_4;
		uint32_t L_18 = V_7;
		V_4 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0062:
	{
		int32_t L_20 = V_6;
		uint32_t L_21 = V_5;
		V_8 = (bool)((((int64_t)((int64_t)L_20)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_21))))? 1 : 0);
		bool L_22 = V_8;
		if (L_22)
		{
			goto IL_0032;
		}
	}
	{
		uint32_t* L_23 = ___1_size;
		uint32_t L_24 = V_4;
		*((int32_t*)L_23) = (int32_t)L_24;
		uint32_t L_25 = V_5;
		V_1 = L_25;
		goto IL_0079;
	}

IL_0079:
	{
		uint32_t L_26 = V_1;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Reader_ProcessObjectArray_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m268819DFD1AE7FA65F39AC179682E4E651E1D516_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, Il2CppFullySharedGenericAny ___2_context, Action_4_t9D9C3B4C9FB177DA85ADC6E208671365BCDB467F* ___3_procFunc, bool ___4_cacheValues, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_C_t3E7B2F7D34BB3D5494C351E011FDD2FD77BE49BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_T_t5A813DE9B6FE659C310EE21A2D56CE70256DF330 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t5A813DE9B6FE659C310EE21A2D56CE70256DF330);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_C_t3E7B2F7D34BB3D5494C351E011FDD2FD77BE49BE);
	bool V_0 = false;
	uint32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	bool V_8 = false;
	{
		uint32_t L_0 = ___0_id;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		uint32_t* L_2 = ___1_size;
		*((int32_t*)L_2) = (int32_t)0;
		V_1 = (uint32_t)0;
		goto IL_0079;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		uint32_t L_4 = ___0_id;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 4)))));
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		V_4 = (uint32_t)0;
		uint8_t* L_6 = V_2;
		int32_t L_7 = *((uint32_t*)L_6);
		V_5 = (uint32_t)((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)4));
		V_6 = 0;
		goto IL_0062;
	}

IL_0032:
	{
		Action_4_t9D9C3B4C9FB177DA85ADC6E208671365BCDB467F* L_8 = ___3_procFunc;
		uint8_t* L_9 = V_2;
		int32_t L_10 = V_6;
		int32_t L_11 = *((uint32_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(1, L_10))))))));
		bool L_12 = ___4_cacheValues;
		InvokerActionInvoker4< uint32_t, uint32_t*, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, (uint32_t)L_11, (&V_7), L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___2_context : &___2_context), SizeOf_C_t3E7B2F7D34BB3D5494C351E011FDD2FD77BE49BE);
		int32_t L_15 = V_6;
		uint32_t L_16 = V_5;
		NullCheck(L_8);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_14: *(void**)L_14), L_15, (int32_t)L_16);
		uint32_t L_17 = V_4;
		uint32_t L_18 = V_7;
		V_4 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0062:
	{
		int32_t L_20 = V_6;
		uint32_t L_21 = V_5;
		V_8 = (bool)((((int64_t)((int64_t)L_20)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_21))))? 1 : 0);
		bool L_22 = V_8;
		if (L_22)
		{
			goto IL_0032;
		}
	}
	{
		uint32_t* L_23 = ___1_size;
		uint32_t L_24 = V_4;
		*((int32_t*)L_23) = (int32_t)L_24;
		uint32_t L_25 = V_5;
		V_1 = L_25;
		goto IL_0079;
	}

IL_0079:
	{
		uint32_t L_26 = V_1;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Reader_ReadObject_TisRuntimeObject_mF4695B2CADA29D7AFFE65D25F3592ADD65FAF2EF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	bool V_9 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B13_0 = 0;
	{
		uint32_t* L_0 = ___1_size;
		*((int32_t*)L_0) = (int32_t)0;
		uint32_t L_1 = ___0_id;
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_4;
		V_5 = L_3;
		goto IL_00d9;
	}

IL_001d:
	{
		uint32_t L_4 = ___0_id;
		bool L_5;
		L_5 = Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352(__this, L_4, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_6 = L_5;
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		V_5 = L_7;
		goto IL_00d9;
	}

IL_0034:
	{
		Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* L_8 = __this->___m_Adapters;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = BinaryStorageBuffer_GetSerializationAdapter_m926A4AE15D4DF09AAEFA943F4F0996B1B48A7E52(L_8, L_10, (&V_1), NULL);
		V_7 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_4;
		V_5 = L_13;
		goto IL_00d9;
	}

IL_0062:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
	}
	try
	{
		RuntimeObject* L_14 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		uint32_t L_17 = ___0_id;
		uint32_t* L_18 = ___1_size;
		NullCheck(L_14);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker4< RuntimeObject*, Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, Type_t*, uint32_t, uint32_t* >::Invoke(2, ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666_il2cpp_TypeInfo_var, L_14, __this, L_16, L_17, L_18);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_00a0;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{
		Exception_t* L_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_20;
		Exception_t* L_21 = V_8;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_21, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_22 = V_4;
		V_5 = L_22;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00d9;
	}

IL_00a0:
	{
		bool L_23 = ___2_cacheValue;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		RuntimeObject* L_24 = V_2;
		if (!L_24)
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t* L_25 = ___1_size;
		int32_t L_26 = *((uint32_t*)L_25);
		uint32_t L_27 = __this->___m_MinCachedObjectSize;
		G_B13_0 = ((((int32_t)((!(((uint32_t)L_26) >= ((uint32_t)L_27)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B13_0 = 0;
	}

IL_00bb:
	{
		V_9 = (bool)G_B13_0;
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_00d4;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_29 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_30 = ___0_id;
		RuntimeObject* L_31 = V_2;
		bool L_32;
		L_32 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_29, L_30, L_31, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00d4:
	{
		RuntimeObject* L_33 = V_2;
		V_5 = L_33;
		goto IL_00d9;
	}

IL_00d9:
	{
		RuntimeObject* L_34 = V_5;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 Reader_ReadObject_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_mE008D1F164BD4D5AE59775B896037B7BB92E26C7_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	bool V_9 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B13_0 = 0;
	{
		uint32_t* L_0 = ___1_size;
		*((int32_t*)L_0) = (int32_t)0;
		uint32_t L_1 = ___0_id;
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3));
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_3 = V_4;
		V_5 = L_3;
		goto IL_00d9;
	}

IL_001d:
	{
		uint32_t L_4 = ___0_id;
		bool L_5;
		L_5 = Reader_TryGetCachedValue_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m4C7498DCCF810DE7EBF2BFA1AEDA0A78E3D05335(__this, L_4, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_6 = L_5;
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_7 = V_0;
		V_5 = L_7;
		goto IL_00d9;
	}

IL_0034:
	{
		Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* L_8 = __this->___m_Adapters;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = BinaryStorageBuffer_GetSerializationAdapter_m926A4AE15D4DF09AAEFA943F4F0996B1B48A7E52(L_8, L_10, (&V_1), NULL);
		V_7 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3));
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_13 = V_4;
		V_5 = L_13;
		goto IL_00d9;
	}

IL_0062:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3));
	}
	try
	{
		RuntimeObject* L_14 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		uint32_t L_17 = ___0_id;
		uint32_t* L_18 = ___1_size;
		NullCheck(L_14);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker4< RuntimeObject*, Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, Type_t*, uint32_t, uint32_t* >::Invoke(2, ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666_il2cpp_TypeInfo_var, L_14, __this, L_16, L_17, L_18);
		V_2 = ((*(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)UnBox(L_19, il2cpp_rgctx_data(method->rgctx_data, 0))));
		goto IL_00a0;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{
		Exception_t* L_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_20;
		Exception_t* L_21 = V_8;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_21, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3));
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_22 = V_4;
		V_5 = L_22;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00d9;
	}

IL_00a0:
	{
		bool L_23 = ___2_cacheValue;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
	}
	{
		uint32_t* L_25 = ___1_size;
		int32_t L_26 = *((uint32_t*)L_25);
		uint32_t L_27 = __this->___m_MinCachedObjectSize;
		G_B13_0 = ((((int32_t)((!(((uint32_t)L_26) >= ((uint32_t)L_27)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B13_0 = 0;
	}

IL_00bb:
	{
		V_9 = (bool)G_B13_0;
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_00d4;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_29 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_30 = ___0_id;
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_31 = V_2;
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), &L_32);
		bool L_34;
		L_34 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_29, L_30, L_33, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00d4:
	{
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_35 = V_2;
		V_5 = L_35;
		goto IL_00d9;
	}

IL_00d9:
	{
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_36 = V_5;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadObject_TisIl2CppFullySharedGenericAny_mD301A62E2471D67CBEDE9E2723F88DCD0A7696C3_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	const Il2CppFullySharedGenericAny L_13 = L_3;
	const Il2CppFullySharedGenericAny L_20 = L_3;
	const Il2CppFullySharedGenericAny L_24 = L_3;
	const Il2CppFullySharedGenericAny L_26 = L_3;
	const Il2CppFullySharedGenericAny L_34 = L_3;
	const Il2CppFullySharedGenericAny L_37 = L_3;
	const Il2CppFullySharedGenericAny L_38 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	memset(V_0, 0, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	memset(V_2, 0, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	memset(V_4, 0, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	memset(V_5, 0, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	bool V_6 = false;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	bool V_9 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B13_0 = 0;
	{
		uint32_t* L_0 = ___1_size;
		*((int32_t*)L_0) = (int32_t)0;
		uint32_t L_1 = ___0_id;
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(V_5, L_3, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		goto IL_00d9;
	}

IL_001d:
	{
		uint32_t L_4 = ___0_id;
		bool L_5;
		L_5 = ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_4, (Il2CppFullySharedGenericAny*)V_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_6 = L_5;
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(V_5, L_7, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		goto IL_00d9;
	}

IL_0034:
	{
		Dictionary_2_t49C9F7172F2C14071EA1899CA135B134A847086A* L_8 = __this->___m_Adapters;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = BinaryStorageBuffer_GetSerializationAdapter_m926A4AE15D4DF09AAEFA943F4F0996B1B48A7E52(L_8, L_10, (&V_1), NULL);
		V_7 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(L_13, V_4, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(V_5, L_13, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		goto IL_00d9;
	}

IL_0062:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
	}
	try
	{
		RuntimeObject* L_14 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		uint32_t L_17 = ___0_id;
		uint32_t* L_18 = ___1_size;
		NullCheck(L_14);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker4< RuntimeObject*, Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, Type_t*, uint32_t, uint32_t* >::Invoke(2, ISerializationAdapter_t8E80DD58B38A556A21B6184C375E2B253F03F666_il2cpp_TypeInfo_var, L_14, __this, L_16, L_17, L_18);
		void* L_21 = UnBox_Any(L_19, il2cpp_rgctx_data(method->rgctx_data, 0), L_20);
		il2cpp_codegen_memcpy(V_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21)), SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		goto IL_00a0;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{
		Exception_t* L_22 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_22;
		Exception_t* L_23 = V_8;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_23, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(L_24, V_4, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(V_5, L_24, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00d9;
	}

IL_00a0:
	{
		bool L_25 = ___2_cacheValue;
		if (!L_25)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_26);
		if (!L_27)
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t* L_28 = ___1_size;
		int32_t L_29 = *((uint32_t*)L_28);
		uint32_t L_30 = __this->___m_MinCachedObjectSize;
		G_B13_0 = ((((int32_t)((!(((uint32_t)L_29) >= ((uint32_t)L_30)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B13_0 = 0;
	}

IL_00bb:
	{
		V_9 = (bool)G_B13_0;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_32 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_33 = ___0_id;
		il2cpp_codegen_memcpy(L_34, V_2, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_34);
		bool L_36;
		L_36 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_32, L_33, L_35, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00d4:
	{
		il2cpp_codegen_memcpy(L_37, V_2, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(V_5, L_37, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		goto IL_00d9;
	}

IL_00d9:
	{
		il2cpp_codegen_memcpy(L_38, V_5, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_T_t59CD03B2069E22C038B70CC124BFAF33215CD0D2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* Reader_ReadObjectArray_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m343ABED3D6B796F6AF1BC3B30B5BD101AAD5D484_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValues, bool ___3_cacheFullArray, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* V_0 = NULL;
	bool V_1 = false;
	ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* V_2 = NULL;
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* V_8 = NULL;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B10_0 = 0;
	{
		uint32_t L_0 = ___0_id;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t* L_2 = ___1_size;
		*((int32_t*)L_2) = (int32_t)0;
		V_2 = (ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7*)NULL;
		goto IL_00c6;
	}

IL_0014:
	{
		uint32_t L_3 = ___0_id;
		bool L_4;
		L_4 = Reader_TryGetCachedValue_TisObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7_m6E7A51918B6F43864251A24DE0137E01B5A1810E(__this, L_3, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		uint32_t* L_6 = ___1_size;
		*((int32_t*)L_6) = (int32_t)0;
		ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* L_7 = V_0;
		V_2 = L_7;
		goto IL_00c6;
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___m_Buffer;
		uint32_t L_9 = ___0_id;
		NullCheck(L_8);
		V_5 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, 4)))));
		uint8_t* L_10 = V_5;
		V_4 = (uint8_t*)((uintptr_t)L_10);
		V_6 = (uint32_t)0;
		uint8_t* L_11 = V_4;
		int32_t L_12 = *((uint32_t*)L_11);
		V_7 = (uint32_t)((int32_t)((uint32_t)(int32_t)L_12/(uint32_t)(int32_t)4));
		uint32_t L_13 = V_7;
		ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* L_14 = (ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7*)(ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)L_13);
		V_8 = L_14;
		V_9 = 0;
		goto IL_0086;
	}

IL_005a:
	{
		ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* L_15 = V_8;
		int32_t L_16 = V_9;
		uint8_t* L_17 = V_4;
		int32_t L_18 = V_9;
		int32_t L_19 = *((uint32_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(1, L_18))))))));
		bool L_20 = ___2_cacheValues;
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_21;
		L_21 = Reader_ReadObject_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_mE008D1F164BD4D5AE59775B896037B7BB92E26C7(__this, (uint32_t)L_19, (&V_10), L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3)L_21);
		uint32_t L_22 = V_6;
		uint32_t L_23 = V_10;
		V_6 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		int32_t L_24 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0086:
	{
		int32_t L_25 = V_9;
		uint32_t L_26 = V_7;
		V_11 = (bool)((((int64_t)((int64_t)L_25)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_26))))? 1 : 0);
		bool L_27 = V_11;
		if (L_27)
		{
			goto IL_005a;
		}
	}
	{
		uint32_t* L_28 = ___1_size;
		uint32_t L_29 = V_6;
		*((int32_t*)L_28) = (int32_t)L_29;
		bool L_30 = ___3_cacheFullArray;
		if (!L_30)
		{
			goto IL_00ab;
		}
	}
	{
		uint32_t* L_31 = ___1_size;
		int32_t L_32 = *((uint32_t*)L_31);
		uint32_t L_33 = __this->___m_MinCachedObjectSize;
		G_B10_0 = ((((int32_t)((!(((uint32_t)L_32) >= ((uint32_t)L_33)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B10_0 = 0;
	}

IL_00ac:
	{
		V_12 = (bool)G_B10_0;
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00c1;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_35 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_36 = ___0_id;
		ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* L_37 = V_8;
		bool L_38;
		L_38 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_35, L_36, (RuntimeObject*)L_37, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00c1:
	{
		ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* L_39 = V_8;
		V_2 = L_39;
		goto IL_00c6;
	}

IL_00c6:
	{
		ObjectInitializationDataU5BU5D_t27CD67BDEC9A5CFBEC907601E4762EE9188560B7* L_40 = V_2;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Reader_ReadObjectArray_TisIl2CppFullySharedGenericAny_m6F4445F70DD401032AA60D0704924B405AD19100_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, bool ___2_cacheValues, bool ___3_cacheFullArray, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tDCC90A177C85096640F928456102E2B3F37FB6D7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_tDCC90A177C85096640F928456102E2B3F37FB6D7);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_8 = NULL;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B10_0 = 0;
	{
		uint32_t L_0 = ___0_id;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t* L_2 = ___1_size;
		*((int32_t*)L_2) = (int32_t)0;
		V_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_00c6;
	}

IL_0014:
	{
		uint32_t L_3 = ___0_id;
		bool L_4;
		L_4 = ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_3, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		uint32_t* L_6 = ___1_size;
		*((int32_t*)L_6) = (int32_t)0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		V_2 = L_7;
		goto IL_00c6;
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___m_Buffer;
		uint32_t L_9 = ___0_id;
		NullCheck(L_8);
		V_5 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, 4)))));
		uint8_t* L_10 = V_5;
		V_4 = (uint8_t*)((uintptr_t)L_10);
		V_6 = (uint32_t)0;
		uint8_t* L_11 = V_4;
		int32_t L_12 = *((uint32_t*)L_11);
		V_7 = (uint32_t)((int32_t)((uint32_t)(int32_t)L_12/(uint32_t)(int32_t)4));
		uint32_t L_13 = V_7;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)L_13);
		V_8 = L_14;
		V_9 = 0;
		goto IL_0086;
	}

IL_005a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_8;
		int32_t L_16 = V_9;
		uint8_t* L_17 = V_4;
		int32_t L_18 = V_9;
		int32_t L_19 = *((uint32_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(1, L_18))))))));
		bool L_20 = ___2_cacheValues;
		InvokerActionInvoker4< uint32_t, uint32_t*, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, (uint32_t)L_19, (&V_10), L_20, (Il2CppFullySharedGenericAny*)L_21);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_21, SizeOf_T_tDCC90A177C85096640F928456102E2B3F37FB6D7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_21);
		uint32_t L_22 = V_6;
		uint32_t L_23 = V_10;
		V_6 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		int32_t L_24 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0086:
	{
		int32_t L_25 = V_9;
		uint32_t L_26 = V_7;
		V_11 = (bool)((((int64_t)((int64_t)L_25)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_26))))? 1 : 0);
		bool L_27 = V_11;
		if (L_27)
		{
			goto IL_005a;
		}
	}
	{
		uint32_t* L_28 = ___1_size;
		uint32_t L_29 = V_6;
		*((int32_t*)L_28) = (int32_t)L_29;
		bool L_30 = ___3_cacheFullArray;
		if (!L_30)
		{
			goto IL_00ab;
		}
	}
	{
		uint32_t* L_31 = ___1_size;
		int32_t L_32 = *((uint32_t*)L_31);
		uint32_t L_33 = __this->___m_MinCachedObjectSize;
		G_B10_0 = ((((int32_t)((!(((uint32_t)L_32) >= ((uint32_t)L_33)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B10_0 = 0;
	}

IL_00ac:
	{
		V_12 = (bool)G_B10_0;
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00c1;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_35 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_36 = ___0_id;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_8;
		bool L_38;
		L_38 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_35, L_36, (RuntimeObject*)L_37, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_00c1:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = V_8;
		V_2 = L_39;
		goto IL_00c6;
	}

IL_00c6:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = V_2;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Reader_ReadObjectArray_TisIl2CppFullySharedGenericAny_mB818E77D719F60AADCE8F428F165956378660834_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** ___0_results, uint32_t ___1_id, uint32_t* ___2_size, bool ___3_cacheValues, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2CCA269AD710B8CF04BE76F9665A019E9A061541 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t2CCA269AD710B8CF04BE76F9665A019E9A061541);
	bool V_0 = false;
	uint32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	bool V_8 = false;
	{
		uint32_t L_0 = ___1_id;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		uint32_t* L_2 = ___2_size;
		*((int32_t*)L_2) = (int32_t)0;
		V_1 = (uint32_t)0;
		goto IL_0074;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Buffer;
		uint32_t L_4 = ___1_id;
		NullCheck(L_3);
		V_3 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 4)))));
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		V_4 = (uint32_t)0;
		uint8_t* L_6 = V_2;
		int32_t L_7 = *((uint32_t*)L_6);
		V_5 = (uint32_t)((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)4));
		V_6 = 0;
		goto IL_005d;
	}

IL_0032:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** L_8 = ___0_results;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_9 = *((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)L_8);
		uint8_t* L_10 = V_2;
		int32_t L_11 = V_6;
		int32_t L_12 = *((uint32_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((int32_t)il2cpp_codegen_multiply(4, ((int32_t)il2cpp_codegen_add(1, L_11))))))));
		bool L_13 = ___3_cacheValues;
		InvokerActionInvoker4< uint32_t, uint32_t*, bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, (uint32_t)L_12, (&V_7), L_13, (Il2CppFullySharedGenericAny*)L_14);
		NullCheck(L_9);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_14: *(void**)L_14));
		uint32_t L_15 = V_4;
		uint32_t L_16 = V_7;
		V_4 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005d:
	{
		int32_t L_18 = V_6;
		uint32_t L_19 = V_5;
		V_8 = (bool)((((int64_t)((int64_t)L_18)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_19))))? 1 : 0);
		bool L_20 = V_8;
		if (L_20)
		{
			goto IL_0032;
		}
	}
	{
		uint32_t* L_21 = ___2_size;
		uint32_t L_22 = V_4;
		*((int32_t*)L_21) = (int32_t)L_22;
		uint32_t L_23 = V_5;
		V_1 = L_23;
		goto IL_0074;
	}

IL_0074:
	{
		uint32_t L_24 = V_1;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m80D210D1C84CEF5F1E015F11B54AFFE6586E1F91_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool V_6 = false;
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(bool);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		bool L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		bool L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Reader_ReadValue_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_mBC17C0979FDDB58F2390672B1FCD41B630F9D654_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06CEA38B43FEF1725C60409A9757B38B10DE86B4_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(int32_t);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		int32_t L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		int32_t L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Reader_ReadValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m13D0E3A501F614D3BEC0D9C63337E0AE2661A62B_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int64_t V_6 = 0;
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(int64_t);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(int64_t));
		int64_t L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		int64_t L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		int64_t L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadValue_TisIl2CppFullySharedGenericStruct_m5C568C0A85DD73BE1B8A033A2D3363DE2900623A_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
	const Il2CppFullySharedGenericStruct L_24 = L_4;
	const Il2CppFullySharedGenericStruct L_25 = L_4;
	bool V_0 = false;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
	memset(V_1, 0, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
	memset(V_2, 0, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
	memset(V_6, 0, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9;
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)V_6), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		il2cpp_codegen_memcpy(L_24, V_6, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
		il2cpp_codegen_memcpy(V_2, L_24, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
		goto IL_008d;
	}

IL_008d:
	{
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_T_t47B2F3A7D47A2093EF5E5595CFC3F24E08F8BDD9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 Reader_ReadValue_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_mAEAE5FBAFD160E70F3B889924525DD5A16542630_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53));
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A Reader_ReadValue_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_mAC43E4F51BF73E25337D0F5C277E9C772D230199_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_1;
	memset((&V_1), 0, sizeof(V_1));
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A));
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA Reader_ReadValue_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_mF94AF89ECEAB2985849915F428900C5002559051_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_1;
	memset((&V_1), 0, sizeof(V_1));
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA));
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D Reader_ReadValue_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_mC9EF225D9986EC2F5AE875E07682FDB55D32AEEC_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D));
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C Reader_ReadValue_TisSerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C_m885E44EAAE45385458D65B83484028C1B8EFF1CC_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C V_1;
	memset((&V_1), 0, sizeof(V_1));
	SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C));
		SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF Reader_ReadValue_TisHeader_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF_m334DF2E7A555389F13CA29C06F25DA812DF22DFF_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF));
		Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 Reader_ReadValue_TisData_t31DC064F32DE0F3638925A9BB6F6498885DA4351_mC8554A03B9956BE026456554990F563DD05BB126_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351));
		Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 Reader_ReadValue_TisCommon_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2_mEA7683BABA55449C4AE8845F68E5B1C62C770A5E_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2));
		Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE Reader_ReadValue_TisData_tBB3E831408BB5D7676DAC14A12647EE4E57637EE_m2582635D328835A72EADD5FCC6A25571C5347BF5_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_size, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		uint32_t* L_0 = ___1_size;
		uint32_t L_1 = sizeof(Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE);
		*((int32_t*)L_0) = (int32_t)L_1;
		uint32_t L_2 = ___0_id;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE));
		Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE L_4 = V_1;
		V_2 = L_4;
		goto IL_008d;
	}

IL_001d:
	{
		uint32_t L_5 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_Buffer;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_5))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_8 = ___0_id;
		uint32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.uint32_class, &L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_Buffer;
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_13 = Box(il2cpp_defaults.int32_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_10, L_13, NULL);
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_Buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16;
		V_5 = L_17;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_5;
		NullCheck(L_18);
		if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
		{
			goto IL_006b;
		}
	}

IL_0065:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_0076;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		NullCheck(L_19);
		V_4 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0076:
	{
		uint8_t* L_20 = V_4;
		uint32_t L_21 = ___0_id;
		uint32_t* L_22 = ___1_size;
		int32_t L_23 = *((uint32_t*)L_22);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((uintptr_t)L_21))), ((int64_t)(uint64_t)((uint32_t)L_23)), NULL);
		Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE L_24 = V_6;
		V_2 = L_24;
		goto IL_008d;
	}

IL_008d:
	{
		Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* Reader_ReadValueArray_TisIl2CppFullySharedGenericStruct_mAB3E5B9447EB12CCDB2020FC4628401B7C5BC9BC_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_readSize, bool ___2_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t06E3F60F627CFCFC979277608939DD240E944974 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	bool V_0 = false;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_1 = NULL;
	bool V_2 = false;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_5 = NULL;
	uint32_t V_6 = 0;
	int64_t V_7 = 0;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	Il2CppFullySharedGenericStruct* V_11 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_12 = NULL;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		uint32_t* L_0 = ___1_readSize;
		*((int32_t*)L_0) = (int32_t)0;
		uint32_t L_1 = ___0_id;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
		goto IL_0139;
	}

IL_0013:
	{
		uint32_t L_3 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___m_Buffer;
		NullCheck(L_4);
		V_2 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 4))))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		uint32_t L_6 = ___0_id;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.uint32_class, &L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___m_Buffer;
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_8, L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_004c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___m_Buffer;
		uint32_t L_15 = ___0_id;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 4)))));
		uint8_t* L_16 = V_4;
		V_3 = (uint8_t*)((uintptr_t)L_16);
		uint32_t L_17 = ___0_id;
		bool L_18;
		L_18 = ((  bool (*) (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600*, uint32_t, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_17, (&V_5), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_9 = L_18;
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_0078;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_20 = V_5;
		V_1 = L_20;
		goto IL_0139;
	}

IL_0078:
	{
		V_6 = (uint32_t)0;
		uint8_t* L_21 = V_3;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)L_21, ((int64_t)4), NULL);
		uint32_t L_22 = ___0_id;
		uint32_t L_23 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___m_Buffer;
		NullCheck(L_24);
		V_10 = (bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23))))) > ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0);
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_00c1;
		}
	}
	{
		uint32_t L_26 = V_6;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_defaults.uint32_class, &L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___m_Buffer;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)(((RuntimeArray*)L_29)->max_length));
		RuntimeObject* L_31 = Box(il2cpp_defaults.int32_class, &L_30);
		String_t* L_32;
		L_32 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE)), L_28, L_31, NULL);
		Exception_t* L_33 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00c1:
	{
		uint32_t L_34 = V_6;
		uint32_t L_35 = SizeOf_T_t06E3F60F627CFCFC979277608939DD240E944974;
		V_7 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)L_34))/((int64_t)((int32_t)L_35))));
		int64_t L_36 = V_7;
		if ((int64_t)(L_36) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_37 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)((intptr_t)L_36));
		V_8 = L_37;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_38 = V_8;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_39 = L_38;
		V_12 = L_39;
		if (!L_39)
		{
			goto IL_00e5;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_40 = V_12;
		NullCheck(L_40);
		if (((int32_t)(((RuntimeArray*)L_40)->max_length)))
		{
			goto IL_00eb;
		}
	}

IL_00e5:
	{
		V_11 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_00f6;
	}

IL_00eb:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_41 = V_12;
		NullCheck(L_41);
		V_11 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00f6:
	{
		Il2CppFullySharedGenericStruct* L_42 = V_11;
		uint8_t* L_43 = V_3;
		uint32_t L_44 = V_6;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_42, (void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, 4))), ((int64_t)(uint64_t)((uint32_t)L_44)), NULL);
		V_12 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
		bool L_45 = ___2_cacheValue;
		if (!L_45)
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_46 = V_6;
		uint32_t L_47 = __this->___m_MinCachedObjectSize;
		G_B15_0 = ((((int32_t)((!(((uint32_t)L_46) >= ((uint32_t)L_47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011b;
	}

IL_011a:
	{
		G_B15_0 = 0;
	}

IL_011b:
	{
		V_13 = (bool)G_B15_0;
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0130;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_49 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_50 = ___0_id;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_51 = V_8;
		bool L_52;
		L_52 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_49, L_50, (RuntimeObject*)L_51, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_0130:
	{
		uint32_t* L_53 = ___1_readSize;
		uint32_t L_54 = V_6;
		*((int32_t*)L_53) = (int32_t)L_54;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_55 = V_8;
		V_1 = L_55;
		goto IL_0139;
	}

IL_0139:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_56 = V_1;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* Reader_ReadValueArray_TisKeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD_m58445C19CCA748B6DA8E9D979F6BCC1ECE1D87F9_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_id, uint32_t* ___1_readSize, bool ___2_cacheValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* V_1 = NULL;
	bool V_2 = false;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* V_5 = NULL;
	uint32_t V_6 = 0;
	int64_t V_7 = 0;
	KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD* V_11 = NULL;
	KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* V_12 = NULL;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		uint32_t* L_0 = ___1_readSize;
		*((int32_t*)L_0) = (int32_t)0;
		uint32_t L_1 = ___0_id;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380*)NULL;
		goto IL_0139;
	}

IL_0013:
	{
		uint32_t L_3 = ___0_id;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___m_Buffer;
		NullCheck(L_4);
		V_2 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 4))))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		uint32_t L_6 = ___0_id;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.uint32_class, &L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___m_Buffer;
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		RuntimeObject* L_11 = Box(il2cpp_defaults.int32_class, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59819BED4064839FE42D3241B3BEF24DC401C8F5)), L_8, L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_004c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___m_Buffer;
		uint32_t L_15 = ___0_id;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 4)))));
		uint8_t* L_16 = V_4;
		V_3 = (uint8_t*)((uintptr_t)L_16);
		uint32_t L_17 = ___0_id;
		bool L_18;
		L_18 = Reader_TryGetCachedValue_TisKeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380_m2E8FAB02F99F9511F7A8063506EF513CEABBD324(__this, L_17, (&V_5), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_9 = L_18;
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_0078;
		}
	}
	{
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_20 = V_5;
		V_1 = L_20;
		goto IL_0139;
	}

IL_0078:
	{
		V_6 = (uint32_t)0;
		uint8_t* L_21 = V_3;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(&V_6)), (void*)L_21, ((int64_t)4), NULL);
		uint32_t L_22 = ___0_id;
		uint32_t L_23 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___m_Buffer;
		NullCheck(L_24);
		V_10 = (bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23))))) > ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0);
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_00c1;
		}
	}
	{
		uint32_t L_26 = V_6;
		uint32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_defaults.uint32_class, &L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___m_Buffer;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)(((RuntimeArray*)L_29)->max_length));
		RuntimeObject* L_31 = Box(il2cpp_defaults.int32_class, &L_30);
		String_t* L_32;
		L_32 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2753D07AF090380ACE5333B7A09995955528ABE)), L_28, L_31, NULL);
		Exception_t* L_33 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00c1:
	{
		uint32_t L_34 = V_6;
		uint32_t L_35 = sizeof(KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD);
		V_7 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)L_34))/((int64_t)((int32_t)L_35))));
		int64_t L_36 = V_7;
		if ((int64_t)(L_36) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_37 = (KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380*)(KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)((intptr_t)L_36));
		V_8 = L_37;
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_38 = V_8;
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_39 = L_38;
		V_12 = L_39;
		if (!L_39)
		{
			goto IL_00e5;
		}
	}
	{
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_40 = V_12;
		NullCheck(L_40);
		if (((int32_t)(((RuntimeArray*)L_40)->max_length)))
		{
			goto IL_00eb;
		}
	}

IL_00e5:
	{
		V_11 = (KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD*)((uintptr_t)0);
		goto IL_00f6;
	}

IL_00eb:
	{
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_41 = V_12;
		NullCheck(L_41);
		V_11 = (KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD*)((uintptr_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00f6:
	{
		KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD* L_42 = V_11;
		uint8_t* L_43 = V_3;
		uint32_t L_44 = V_6;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_42, (void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, 4))), ((int64_t)(uint64_t)((uint32_t)L_44)), NULL);
		V_12 = (KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380*)NULL;
		bool L_45 = ___2_cacheValue;
		if (!L_45)
		{
			goto IL_011a;
		}
	}
	{
		uint32_t L_46 = V_6;
		uint32_t L_47 = __this->___m_MinCachedObjectSize;
		G_B15_0 = ((((int32_t)((!(((uint32_t)L_46) >= ((uint32_t)L_47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011b;
	}

IL_011a:
	{
		G_B15_0 = 0;
	}

IL_011b:
	{
		V_13 = (bool)G_B15_0;
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0130;
		}
	}
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_49 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		uint32_t L_50 = ___0_id;
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_51 = V_8;
		bool L_52;
		L_52 = LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3(L_49, L_50, (RuntimeObject*)L_51, LRUCache_2_TryAdd_m788862EBC5772CCD40DFBAC7ECD9FA185DF3F1A3_RuntimeMethod_var);
	}

IL_0130:
	{
		uint32_t* L_53 = ___1_readSize;
		uint32_t L_54 = V_6;
		*((int32_t*)L_53) = (int32_t)L_54;
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_55 = V_8;
		V_1 = L_55;
		goto IL_0139;
	}

IL_0139:
	{
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_56 = V_1;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisRuntimeObject_m378281E383A4CD8A2DA1034DC7DA6EE583D6B352_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, RuntimeObject** ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint32_t L_3 = ___0_offset;
		bool L_4;
		L_4 = LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F(L_0, L_2, L_3, (&V_0), LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_RuntimeMethod_var);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject** L_6 = ___1_val;
		RuntimeObject* L_7 = V_0;
		*(RuntimeObject**)L_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		V_2 = (bool)1;
		goto IL_0039;
	}

IL_002e:
	{
		RuntimeObject** L_8 = ___1_val;
		il2cpp_codegen_initobj(L_8, sizeof(RuntimeObject*));
		V_2 = (bool)0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m4C7498DCCF810DE7EBF2BFA1AEDA0A78E3D05335_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint32_t L_3 = ___0_offset;
		bool L_4;
		L_4 = LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F(L_0, L_2, L_3, (&V_0), LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_RuntimeMethod_var);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* L_6 = ___1_val;
		RuntimeObject* L_7 = V_0;
		*(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)L_6 = ((*(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppCodeGenWriteBarrier((void**)&(((ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)L_6)->___m_Id), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)L_6)->___m_ObjectType))->___m_AssemblyName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)L_6)->___m_ObjectType))->___m_ClassName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)L_6)->___m_ObjectType))->___m_CachedType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*)L_6)->___m_Data), (void*)NULL);
		#endif
		V_2 = (bool)1;
		goto IL_0039;
	}

IL_002e:
	{
		ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* L_8 = ___1_val;
		il2cpp_codegen_initobj(L_8, sizeof(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3));
		V_2 = (bool)0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Reader_TryGetCachedValue_TisIl2CppFullySharedGenericAny_m151773AC14DF9C7BDA828C249287B71490E8475F_gshared (Reader_t9B4223C6D92C47037C12F7C34BE86BC4B11AF600* __this, uint32_t ___0_offset, Il2CppFullySharedGenericAny* ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565* L_0 = (LRUCache_2_t6B04203CDACCDD35F20E20D812089F630C525565*)(&__this->___m_Cache);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint32_t L_3 = ___0_offset;
		bool L_4;
		L_4 = LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F(L_0, L_2, L_3, (&V_0), LRUCache_2_TryGet_mCB4C3F1E849CD2DCC31D254F9AC69582DE15D96F_RuntimeMethod_var);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___1_val;
		RuntimeObject* L_7 = V_0;
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->rgctx_data, 2), L_8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)), SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)));
		V_2 = (bool)1;
		goto IL_0039;
	}

IL_002e:
	{
		Il2CppFullySharedGenericAny* L_10 = ___1_val;
		il2cpp_codegen_initobj(L_10, SizeOf_T_t5C0F3E77CC912EF60F10E0446BEBC8179091A551);
		V_2 = (bool)0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisIl2CppFullySharedGenericStruct_m6C3475B760340AD0C2C3DAE671C07B00C6933259_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAD28673DFDA47E13D7EFCDBF8F3EC1BE20A2DCDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tAD28673DFDA47E13D7EFCDBF8F3EC1BE20A2DCDF;
		uint32_t L_1;
		L_1 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisHeader_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF_m6D108F39FEBD18322A1D57D3B1B201884B309ECC_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF);
		uint32_t L_1;
		L_1 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, L_0, (bool)0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisIl2CppFullySharedGenericStruct_mE24A71A6AC46599AD20C620E585A36512B0F467B_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEF9A349F5CAC3CC260DAB237BEE7009D6C5DBB9E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tEF9A349F5CAC3CC260DAB237BEE7009D6C5DBB9E;
		uint32_t L_1 = ___0_count;
		uint32_t L_2;
		L_2 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)), (bool)1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Reserve_TisKeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD_m20583ABF7A87309E8BCBBCFA20B00ADB157DCE80_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_count, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD);
		uint32_t L_1 = ___0_count;
		uint32_t L_2;
		L_2 = Writer_ReserveInternal_m9A1779F90497775A6053B8485FCFAFF3CDC5AF73(__this, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)), (bool)1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB45C272FF5E3BA1A875244D239B246CD91BE214E_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, bool ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(bool);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_mB4A1E22E477148AD2E1AFE3B58E12D77CBC81EF2_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m042BC9E7D84F216F0BBFD918C48587F96572CF57_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int32_t ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(int32_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m829C42A192B8075D18C538B2A01F9BD9876F9908_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, int64_t ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(int64_t);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m7570060A594296F3B0136718F14DD48B08AAE244_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDB8D1C44ADB32944EED2913050ED827CC69CF70F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = SizeOf_T_tDB8D1C44ADB32944EED2913050ED827CC69CF70F;
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)___0_val), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m19F3BE1901356C08F4ED504BB87D54CBA077107C_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Il2CppFullySharedGenericStruct* ___0_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5C70F0C38E743DE890656C0A78E32A60FAFC8BBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_val;
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t5C70F0C38E743DE890656C0A78E32A60FAFC8BBB;
		uint32_t L_4;
		L_4 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)L_2, L_3, (bool)0, NULL);
		V_2 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		uint32_t L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisDynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53_m6A59B04C3BC525AF3C5F05C1FD5E4D451B5225A0_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53 ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(DynamicString_tB2FC10F58E695817E36406F7CE1F31E18BA91E53);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A_m0271742BD5A3F7EA56AE26C84F7B94BA3B1AD190_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(ObjectTypeData_tA5ED1BA8A8B32C0A6E1E850B2D9201865EA53E3A);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA_m3BF6D2CD8719FE1C5003348AF46CC9338E9F0027_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(ObjectToStringRemap_t727A5320C01624FDDC2B119401D65B106D1490BA);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisData_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D_mBFAA6DE29A89519BFAED75A7B084D0E64EF4B978_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(Data_t9D4F6B2D6120ABAC670907CBB1F2DF29C83E9A5D);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisSerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C_mB5C118B0FA638369C1649C7627725ED170C0E1CB_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(SerializedData_t3E31C60A9E835DF7E68D557F18B794B31866D11C);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisData_t31DC064F32DE0F3638925A9BB6F6498885DA4351_m66AF54549B87BD37CB63DDF25C7D76C57D9B51B4_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351 ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(Data_t31DC064F32DE0F3638925A9BB6F6498885DA4351);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisCommon_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2_mF04BC89DF3B3A1F762D7E6538AD844367A39A836_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2 ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(Common_t274B726A3B8A97AA7D5DFD9F6E11B661E05F39A2);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisData_tBB3E831408BB5D7676DAC14A12647EE4E57637EE_m9A9B65AC296B65B170B2F7A8D2C376C8CAE1B602_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE ___0_val, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = sizeof(Data_tBB3E831408BB5D7676DAC14A12647EE4E57637EE);
		uint32_t L_1;
		L_1 = Writer_WriteInternal_m928A20E0AAF2E545B89937DE02232473803E0DBB(__this, (void*)((uintptr_t)(&___0_val)), L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	bool V_6 = false;
	uint32_t V_7 = 0;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t G_B9_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_values;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_values;
		NullCheck(L_4);
		uint32_t L_5 = sizeof(uint32_t);
		V_2 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), (int32_t)L_5));
		uint32_t* L_6 = V_0;
		uint32_t L_7 = V_2;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)L_6, (uint64_t)((int64_t)(uint64_t)((uint32_t)L_7)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_8 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		V_6 = L_10;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_12 = V_4;
		V_7 = L_12;
		goto IL_0141;
	}

IL_004e:
	{
		uint32_t L_13 = V_2;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14;
		L_14 = Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77(__this, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 4)), NULL);
		V_5 = L_14;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_15 = V_5;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15->___data;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_17 = V_5;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___position;
		NullCheck(L_16);
		V_9 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		uint8_t* L_19 = V_9;
		V_8 = (uint8_t*)((uintptr_t)L_19);
		uint32_t L_20 = __this->___totalBytes;
		V_10 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, 4));
		uint8_t* L_21 = V_8;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_21, (void*)((uintptr_t)(&V_2)), ((int64_t)4), NULL);
		uint8_t* L_22 = V_8;
		uint32_t* L_23 = V_0;
		uint32_t L_24 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, 4))), (void*)L_23, ((int64_t)(uint64_t)((uint32_t)L_24)), NULL);
		uint32_t L_25 = V_2;
		V_11 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, 4));
		uint32_t L_26 = __this->___totalBytes;
		uint32_t L_27 = V_11;
		__this->___totalBytes = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_28 = V_5;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_29 = L_28;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___position;
		uint32_t L_31 = V_11;
		NullCheck(L_29);
		L_29->___position = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_32 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_33 = V_3;
		uint32_t L_34 = V_10;
		NullCheck(L_32);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_32, L_33, L_34, Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		bool L_35 = ___1_hashElements;
		if (!L_35)
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_36 = sizeof(uint32_t);
		G_B9_0 = ((((int32_t)L_36) > ((int32_t)4))? 1 : 0);
		goto IL_00db;
	}

IL_00da:
	{
		G_B9_0 = 0;
	}

IL_00db:
	{
		V_12 = (bool)G_B9_0;
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		V_13 = 0;
		goto IL_012d;
	}

IL_00e7:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		uint32_t* L_38 = V_0;
		int32_t L_39 = V_13;
		uint32_t L_40 = sizeof(uint32_t);
		uint32_t L_41 = sizeof(uint32_t);
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), (int32_t)L_40))))), (uint64_t)((int64_t)((int32_t)L_41)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_42 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_43 = V_3;
		uint32_t L_44 = V_10;
		int32_t L_45 = V_13;
		uint32_t L_46 = sizeof(uint32_t);
		NullCheck(L_42);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_42, L_43, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, ((int32_t)il2cpp_codegen_multiply(L_45, (int32_t)L_46)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		int32_t L_47 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_012d:
	{
		int32_t L_48 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___0_values;
		NullCheck(L_49);
		V_14 = (bool)((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))? 1 : 0);
		bool L_50 = V_14;
		if (L_50)
		{
			goto IL_00e7;
		}
	}
	{
	}

IL_013b:
	{
		uint32_t L_51 = V_10;
		V_7 = L_51;
		goto IL_0141;
	}

IL_0141:
	{
		uint32_t L_52 = V_7;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m2E39C9C3A4DCE833A27E5A18846D87F9F2371F7A_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_values, bool ___1_hashElements, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_1 = NULL;
	uint32_t V_2 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	bool V_6 = false;
	uint32_t V_7 = 0;
	uint8_t* V_8 = NULL;
	uint8_t* V_9 = NULL;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t G_B9_0 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___0_values;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0010;
		}
	}

IL_000b:
	{
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_0019;
	}

IL_0010:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0019:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = ___0_values;
		NullCheck(L_4);
		uint32_t L_5 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		V_2 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), (int32_t)L_5));
		Il2CppFullySharedGenericStruct* L_6 = V_0;
		uint32_t L_7 = V_2;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)L_6, (uint64_t)((int64_t)(uint64_t)((uint32_t)L_7)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_8 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m186CA5000425CF2752126C4C83467BF1EB258B5D_RuntimeMethod_var);
		V_6 = L_10;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_12 = V_4;
		V_7 = L_12;
		goto IL_0141;
	}

IL_004e:
	{
		uint32_t L_13 = V_2;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14;
		L_14 = Writer_FindChunkWithSpace_m81B652C6FE31B0A45E2F90A87E9EA02092ECBE77(__this, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, 4)), NULL);
		V_5 = L_14;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_15 = V_5;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15->___data;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_17 = V_5;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___position;
		NullCheck(L_16);
		V_9 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		uint8_t* L_19 = V_9;
		V_8 = (uint8_t*)((uintptr_t)L_19);
		uint32_t L_20 = __this->___totalBytes;
		V_10 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, 4));
		uint8_t* L_21 = V_8;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_21, (void*)((uintptr_t)(&V_2)), ((int64_t)4), NULL);
		uint8_t* L_22 = V_8;
		Il2CppFullySharedGenericStruct* L_23 = V_0;
		uint32_t L_24 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, 4))), (void*)L_23, ((int64_t)(uint64_t)((uint32_t)L_24)), NULL);
		uint32_t L_25 = V_2;
		V_11 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, 4));
		uint32_t L_26 = __this->___totalBytes;
		uint32_t L_27 = V_11;
		__this->___totalBytes = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_28 = V_5;
		Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_29 = L_28;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___position;
		uint32_t L_31 = V_11;
		NullCheck(L_29);
		L_29->___position = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_32 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_33 = V_3;
		uint32_t L_34 = V_10;
		NullCheck(L_32);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_32, L_33, L_34, Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		bool L_35 = ___1_hashElements;
		if (!L_35)
		{
			goto IL_00da;
		}
	}
	{
		uint32_t L_36 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		G_B9_0 = ((((int32_t)L_36) > ((int32_t)4))? 1 : 0);
		goto IL_00db;
	}

IL_00da:
	{
		G_B9_0 = 0;
	}

IL_00db:
	{
		V_12 = (bool)G_B9_0;
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_013b;
		}
	}
	{
		V_13 = 0;
		goto IL_012d;
	}

IL_00e7:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40));
		Il2CppFullySharedGenericStruct* L_38 = V_0;
		int32_t L_39 = V_13;
		uint32_t L_40 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		uint32_t L_41 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), (int32_t)L_40))))), (uint64_t)((int64_t)((int32_t)L_41)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_3)), NULL);
		Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_42 = __this->___existingValues;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_43 = V_3;
		uint32_t L_44 = V_10;
		int32_t L_45 = V_13;
		uint32_t L_46 = SizeOf_T_tE75101A1EE401E1F7937BBBA8626F37D6538B3C4;
		NullCheck(L_42);
		Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_42, L_43, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, ((int32_t)il2cpp_codegen_multiply(L_45, (int32_t)L_46)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		int32_t L_47 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_012d:
	{
		int32_t L_48 = V_13;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_49 = ___0_values;
		NullCheck(L_49);
		V_14 = (bool)((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))? 1 : 0);
		bool L_50 = V_14;
		if (L_50)
		{
			goto IL_00e7;
		}
	}
	{
	}

IL_013b:
	{
		uint32_t L_51 = V_10;
		V_7 = L_51;
		goto IL_0141;
	}

IL_0141:
	{
		uint32_t L_52 = V_7;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m1F36B0202AA640C59BE8DBBBDDCCEAD13E450E4E_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, Il2CppFullySharedGenericStruct ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t6FE7FC22E2C0C40985040077400A9AC2F7747B35 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_offset;
		uint32_t L_1 = SizeOf_T_t6FE7FC22E2C0C40985040077400A9AC2F7747B35;
		Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64(__this, L_0, (void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)___1_val), L_1, (bool)0, NULL);
		uint32_t L_2 = ___0_offset;
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		uint32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m7A3D45B37C05F32AC89762BCEA7FA71D03757896_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, Il2CppFullySharedGenericStruct* ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA4F5C8530B7503B3E075A70A1741D3DE52289C0B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_val;
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		V_0 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		uint32_t L_2 = ___0_offset;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		uint32_t L_4 = SizeOf_T_tA4F5C8530B7503B3E075A70A1741D3DE52289C0B;
		Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64(__this, L_2, (void*)L_3, L_4, (bool)0, NULL);
		V_1 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		uint32_t L_5 = ___0_offset;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisHeader_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF_m3D365284E15566CAA7A77185C2845B2350168F53_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF* ___1_val, const RuntimeMethod* method) 
{
	Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF* V_0 = NULL;
	Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF* L_0 = ___1_val;
		V_1 = L_0;
		Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF* L_1 = V_1;
		V_0 = (Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF*)((uintptr_t)L_1);
		uint32_t L_2 = ___0_offset;
		Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF* L_3 = V_0;
		uint32_t L_4 = sizeof(Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF);
		Writer_WriteInternal_mFEC1AC834A029D7D9FE87381C44967BFDB68EA64(__this, L_2, (void*)L_3, L_4, (bool)0, NULL);
		V_1 = (Header_t6BC7602D93055680906B1E77E3F30BB2EC52B5AF*)((uintptr_t)0);
		uint32_t L_5 = ___0_offset;
		V_2 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisIl2CppFullySharedGenericStruct_m60DC005445A769FE90608945D4CB13E5EB0B0678_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_values, bool ___2_hashElements, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_31 = alloca(SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_3 = NULL;
	Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	bool V_6 = false;
	uint8_t* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	bool V_9 = false;
	int32_t V_10 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Il2CppFullySharedGenericStruct V_12 = alloca(SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	memset(V_12, 0, SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
	bool V_13 = false;
	uint32_t V_14 = 0;
	int32_t G_B15_0 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___1_values;
		NullCheck(L_0);
		uint32_t L_1 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), (int32_t)L_1));
		uint32_t L_2 = ___0_offset;
		V_1 = L_2;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3 = ___1_values;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = L_3;
		V_3 = L_4;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = V_3;
		NullCheck(L_5);
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_001d;
		}
	}

IL_0018:
	{
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
		goto IL_0026;
	}

IL_001d:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = V_3;
		NullCheck(L_6);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)((Il2CppFullySharedGenericStruct*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0026:
	{
		List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* L_7 = __this->___chunks;
		NullCheck(L_7);
		Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 L_8;
		L_8 = List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F(L_7, List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		V_4 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0127:
			{
				Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257((&V_4), Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0119_1;
			}

IL_003a_1:
			{
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_9;
				L_9 = Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_inline((&V_4), Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
				V_5 = L_9;
				uint32_t L_10 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_11 = V_5;
				NullCheck(L_11);
				uint32_t L_12 = L_11->___position;
				V_6 = (bool)((!(((uint32_t)L_10) >= ((uint32_t)L_12)))? 1 : 0);
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_010e_1;
				}
			}
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010a_1:
					{
						V_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
						return;
					}
				});
				try
				{
					{
						Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14 = V_5;
						NullCheck(L_14);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___data;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
						V_8 = L_16;
						if (!L_16)
						{
							goto IL_006a_2;
						}
					}
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_8;
						NullCheck(L_17);
						if (((int32_t)(((RuntimeArray*)L_17)->max_length)))
						{
							goto IL_0070_2;
						}
					}

IL_006a_2:
					{
						V_7 = (uint8_t*)((uintptr_t)0);
						goto IL_007b_2;
					}

IL_0070_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_8;
						NullCheck(L_18);
						V_7 = (uint8_t*)((uintptr_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
					}

IL_007b_2:
					{
						uint8_t* L_19 = V_7;
						uint32_t L_20 = V_1;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, (intptr_t)((uintptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 4)))))), (void*)((uintptr_t)(&V_0)), ((int64_t)4), NULL);
						uint8_t* L_21 = V_7;
						uint32_t L_22 = V_1;
						Il2CppFullySharedGenericStruct* L_23 = V_2;
						uint32_t L_24 = V_0;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, (intptr_t)((uintptr_t)L_22)))), (void*)L_23, ((int64_t)(uint64_t)((uint32_t)L_24)), NULL);
						bool L_25 = ___2_hashElements;
						if (!L_25)
						{
							goto IL_00ac_2;
						}
					}
					{
						uint32_t L_26 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						G_B15_0 = ((((int32_t)L_26) > ((int32_t)4))? 1 : 0);
						goto IL_00ad_2;
					}

IL_00ac_2:
					{
						G_B15_0 = 0;
					}

IL_00ad_2:
					{
						V_9 = (bool)G_B15_0;
						bool L_27 = V_9;
						if (!L_27)
						{
							goto IL_0105_2;
						}
					}
					{
						V_10 = 0;
						goto IL_00f7_2;
					}

IL_00b9_2:
					{
						__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_28 = ___1_values;
						int32_t L_29 = V_10;
						NullCheck(L_28);
						int32_t L_30 = L_29;
						il2cpp_codegen_memcpy(L_31, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
						il2cpp_codegen_memcpy(V_12, L_31, SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B);
						uint32_t L_32 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)V_12), (uint64_t)((int64_t)((int32_t)L_32)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_11)), NULL);
						Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_33 = __this->___existingValues;
						Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_34 = V_11;
						uint32_t L_35 = ___0_offset;
						int32_t L_36 = V_10;
						uint32_t L_37 = SizeOf_T_tF3FD38F4315E0498D98821D0182A65B47142E07B;
						NullCheck(L_33);
						Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_33, L_34, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, ((int32_t)il2cpp_codegen_multiply(L_36, (int32_t)L_37)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
						int32_t L_38 = V_10;
						V_10 = ((int32_t)il2cpp_codegen_add(L_38, 1));
					}

IL_00f7_2:
					{
						int32_t L_39 = V_10;
						__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_40 = ___1_values;
						NullCheck(L_40);
						V_13 = (bool)((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))? 1 : 0);
						bool L_41 = V_13;
						if (L_41)
						{
							goto IL_00b9_2;
						}
					}
					{
					}

IL_0105_2:
					{
						uint32_t L_42 = ___0_offset;
						V_14 = L_42;
						goto IL_013e;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_010e_1:
			{
				uint32_t L_43 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_44 = V_5;
				NullCheck(L_44);
				uint32_t L_45 = L_44->___position;
				V_1 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_45));
			}

IL_0119_1:
			{
				bool L_46;
				L_46 = Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB((&V_4), Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_0136;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0136:
	{
		V_3 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
		V_14 = (uint32_t)(-1);
		goto IL_013e;
	}

IL_013e:
	{
		uint32_t L_47 = V_14;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_Write_TisKeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD_mB0A1140CC32290F4ECC94E2C043ACC5FDED3F0BD_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, uint32_t ___0_offset, KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* ___1_values, bool ___2_hashElements, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD* V_2 = NULL;
	KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* V_3 = NULL;
	Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* V_5 = NULL;
	bool V_6 = false;
	uint8_t* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	bool V_9 = false;
	int32_t V_10 = 0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_11;
	memset((&V_11), 0, sizeof(V_11));
	KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	uint32_t V_14 = 0;
	int32_t G_B15_0 = 0;
	{
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_0 = ___1_values;
		NullCheck(L_0);
		uint32_t L_1 = sizeof(KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD);
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), (int32_t)L_1));
		uint32_t L_2 = ___0_offset;
		V_1 = L_2;
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_3 = ___1_values;
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_4 = L_3;
		V_3 = L_4;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_5 = V_3;
		NullCheck(L_5);
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_001d;
		}
	}

IL_0018:
	{
		V_2 = (KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD*)((uintptr_t)0);
		goto IL_0026;
	}

IL_001d:
	{
		KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_6 = V_3;
		NullCheck(L_6);
		V_2 = (KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD*)((uintptr_t)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0026:
	{
		List_1_tD182C71B516B55FE08BC00150701EDBC1D839F72* L_7 = __this->___chunks;
		NullCheck(L_7);
		Enumerator_tD713E1D0910046F0B3EB64A57FD06CB1DE045899 L_8;
		L_8 = List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F(L_7, List_1_GetEnumerator_m81B84BFD013F150B2A1995A021D55939D3E7919F_RuntimeMethod_var);
		V_4 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0127:
			{
				Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257((&V_4), Enumerator_Dispose_mCCE523D30CB4A309C016655B0B58BA6656688257_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0119_1;
			}

IL_003a_1:
			{
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_9;
				L_9 = Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_inline((&V_4), Enumerator_get_Current_m97F38E5D1D3AFF66C96E92E635CC4858990B6C31_RuntimeMethod_var);
				V_5 = L_9;
				uint32_t L_10 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_11 = V_5;
				NullCheck(L_11);
				uint32_t L_12 = L_11->___position;
				V_6 = (bool)((!(((uint32_t)L_10) >= ((uint32_t)L_12)))? 1 : 0);
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_010e_1;
				}
			}
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_010a_1:
					{
						V_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
						return;
					}
				});
				try
				{
					{
						Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_14 = V_5;
						NullCheck(L_14);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___data;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
						V_8 = L_16;
						if (!L_16)
						{
							goto IL_006a_2;
						}
					}
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_8;
						NullCheck(L_17);
						if (((int32_t)(((RuntimeArray*)L_17)->max_length)))
						{
							goto IL_0070_2;
						}
					}

IL_006a_2:
					{
						V_7 = (uint8_t*)((uintptr_t)0);
						goto IL_007b_2;
					}

IL_0070_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_8;
						NullCheck(L_18);
						V_7 = (uint8_t*)((uintptr_t)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
					}

IL_007b_2:
					{
						uint8_t* L_19 = V_7;
						uint32_t L_20 = V_1;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, (intptr_t)((uintptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 4)))))), (void*)((uintptr_t)(&V_0)), ((int64_t)4), NULL);
						uint8_t* L_21 = V_7;
						uint32_t L_22 = V_1;
						KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD* L_23 = V_2;
						uint32_t L_24 = V_0;
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, (intptr_t)((uintptr_t)L_22)))), (void*)L_23, ((int64_t)(uint64_t)((uint32_t)L_24)), NULL);
						bool L_25 = ___2_hashElements;
						if (!L_25)
						{
							goto IL_00ac_2;
						}
					}
					{
						uint32_t L_26 = sizeof(KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD);
						G_B15_0 = ((((int32_t)L_26) > ((int32_t)4))? 1 : 0);
						goto IL_00ad_2;
					}

IL_00ac_2:
					{
						G_B15_0 = 0;
					}

IL_00ad_2:
					{
						V_9 = (bool)G_B15_0;
						bool L_27 = V_9;
						if (!L_27)
						{
							goto IL_0105_2;
						}
					}
					{
						V_10 = 0;
						goto IL_00f7_2;
					}

IL_00b9_2:
					{
						KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_28 = ___1_values;
						int32_t L_29 = V_10;
						NullCheck(L_28);
						int32_t L_30 = L_29;
						KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
						V_12 = L_31;
						uint32_t L_32 = sizeof(KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD);
						BinaryStorageBuffer_ComputeHash_m528E30FBF559FD6F302F7F415507C52E90292E14((void*)((uintptr_t)(&V_12)), (uint64_t)((int64_t)((int32_t)L_32)), (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40*)((uintptr_t)(&V_11)), NULL);
						Dictionary_2_t3C672228BE4ABCF2C0BF465356E998696CFAF391* L_33 = __this->___existingValues;
						Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_34 = V_11;
						uint32_t L_35 = ___0_offset;
						int32_t L_36 = V_10;
						uint32_t L_37 = sizeof(KeyData_t47E657B81B17AF70F97B3E83DC48AA689A2B3FFD);
						NullCheck(L_33);
						Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8(L_33, L_34, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, ((int32_t)il2cpp_codegen_multiply(L_36, (int32_t)L_37)))), Dictionary_2_set_Item_m76938CDD6B419F95D280A57DE42A729CF1350BD8_RuntimeMethod_var);
						int32_t L_38 = V_10;
						V_10 = ((int32_t)il2cpp_codegen_add(L_38, 1));
					}

IL_00f7_2:
					{
						int32_t L_39 = V_10;
						KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380* L_40 = ___1_values;
						NullCheck(L_40);
						V_13 = (bool)((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))? 1 : 0);
						bool L_41 = V_13;
						if (L_41)
						{
							goto IL_00b9_2;
						}
					}
					{
					}

IL_0105_2:
					{
						uint32_t L_42 = ___0_offset;
						V_14 = L_42;
						goto IL_013e;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_010e_1:
			{
				uint32_t L_43 = V_1;
				Chunk_t6177AA77189C7004BBA48E4D1B8C9B341456F9BA* L_44 = V_5;
				NullCheck(L_44);
				uint32_t L_45 = L_44->___position;
				V_1 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_45));
			}

IL_0119_1:
			{
				bool L_46;
				L_46 = Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB((&V_4), Enumerator_MoveNext_mB249FB909C131143E8294B795B93CCFFACA0D4BB_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_0136;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0136:
	{
		V_3 = (KeyDataU5BU5D_t2AC2A15A98E2E6B122CBD8C8D261F4C7DE078380*)NULL;
		V_14 = (uint32_t)(-1);
		goto IL_013e;
	}

IL_013e:
	{
		uint32_t L_47 = V_14;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObjects_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_mD3C9ABA1C77508AA4C2EAFAFC8AB112FB1E2CABC_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_objs, bool ___1_serizalizeTypeData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	uint32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		RuntimeObject* L_0 = ___0_objs;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_4 = (uint32_t)(-1);
		goto IL_006b;
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_objs;
		int32_t L_3;
		L_3 = Enumerable_Count_TisObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_m1E5777C5B01C5B933CA2D4B5C7F9F3B5F6739BAA(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		int32_t L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		RuntimeObject* L_6 = ___0_objs;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
		V_5 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				{
					RuntimeObject* L_8 = V_5;
					if (!L_8)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_9 = V_5;
					NullCheck((RuntimeObject*)L_9);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
				}

IL_005e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_0029_1:
			{
				RuntimeObject* L_10 = V_5;
				NullCheck(L_10);
				ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_11;
				L_11 = InterfaceFuncInvoker0< ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), L_10);
				V_6 = L_11;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
				int32_t L_13 = V_2;
				int32_t L_14 = L_13;
				V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
				ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_15 = V_6;
				ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 L_16 = L_15;
				RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), &L_16);
				bool L_18 = ___1_serizalizeTypeData;
				uint32_t L_19;
				L_19 = Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371(__this, L_17, L_18, NULL);
				NullCheck(L_12);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)L_19);
			}

IL_0047_1:
			{
				RuntimeObject* L_20 = V_5;
				NullCheck((RuntimeObject*)L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
				if (L_21)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_005f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_1;
		uint32_t L_23;
		L_23 = Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980(__this, L_22, (bool)1, Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		V_4 = L_23;
		goto IL_006b;
	}

IL_006b:
	{
		uint32_t L_24 = V_4;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Writer_WriteObjects_TisIl2CppFullySharedGenericAny_mE9C845BE586B809CDB1731891E8F2BB84FA92FBE_gshared (Writer_tBA09212AEA654632D4A90CF3F21D1A687F40D793* __this, RuntimeObject* ___0_objs, bool ___1_serizalizeTypeData, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	uint32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	memset(V_6, 0, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
	{
		RuntimeObject* L_0 = ___0_objs;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		V_4 = (uint32_t)(-1);
		goto IL_006b;
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_objs;
		int32_t L_3;
		L_3 = ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		int32_t L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		RuntimeObject* L_6 = ___0_objs;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
		V_5 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				{
					RuntimeObject* L_8 = V_5;
					if (!L_8)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_9 = V_5;
					NullCheck((RuntimeObject*)L_9);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
				}

IL_005e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_0029_1:
			{
				RuntimeObject* L_10 = V_5;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				il2cpp_codegen_memcpy(V_6, L_11, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
				int32_t L_13 = V_2;
				int32_t L_14 = L_13;
				V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
				il2cpp_codegen_memcpy(L_15, V_6, SizeOf_T_tBD875C9E85BC873AE55469D0FEA83B1DD206F8B6);
				RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 5), L_15);
				bool L_17 = ___1_serizalizeTypeData;
				uint32_t L_18;
				L_18 = Writer_WriteObject_m9AAB78B632B61A8D5D2B0BC0C250CF70B8C8B371(__this, L_16, L_17, NULL);
				NullCheck(L_12);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)L_18);
			}

IL_0047_1:
			{
				RuntimeObject* L_19 = V_5;
				NullCheck((RuntimeObject*)L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				if (L_20)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_005f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_1;
		uint32_t L_22;
		L_22 = Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980(__this, L_21, (bool)1, Writer_Write_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB385867BD6458FA49B460FE85DDA5CA19F8A3980_RuntimeMethod_var);
		V_4 = L_22;
		goto IL_006b;
	}

IL_006b:
	{
		uint32_t L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CastDataSourceVisitor_VisitContainer_TisIl2CppFullySharedGenericAny_mCD54098F1F347037182D18EBDCEFCAFBDD695A7F_gshared (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, Il2CppFullySharedGenericAny* ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0;
		L_0 = CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_1;
		L_1 = CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline(__this, NULL);
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2 = ___0_container;
		NullCheck(L_0);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_3;
		L_3 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (&V_0), L_2);
		CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPathVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m73D1BFCDF215021460578C85EA3FD2D0973EB79C_gshared (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline(__this, NULL);
		V_1 = L_0;
		if (1)
		{
			goto IL_000c;
		}
	}
	{
	}

IL_000c:
	{
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0047;
	}

IL_0017:
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_3;
		L_3 = UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_4;
		L_4 = UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline(__this, NULL);
		V_2 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___2_value;
		NullCheck(L_3);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_6;
		L_6 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_3, (&V_2), L_5);
		V_0 = L_6;
		goto IL_004d;
	}

IL_002f:
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_7;
		L_7 = UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_8;
		L_8 = UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline(__this, NULL);
		V_2 = L_8;
		Il2CppFullySharedGenericAny* L_9 = ___2_value;
		NullCheck(L_7);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_10;
		L_10 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_7, (&V_2), L_9);
		V_0 = L_10;
		goto IL_004d;
	}

IL_0047:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_004d:
	{
		if (1)
		{
			goto IL_0051;
		}
	}
	{
	}

IL_0051:
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_12 = V_0;
		UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline(__this, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalOp_LoadBundleFromDependecies_TisRuntimeObject_m84785F4D039CCC3C767B50962BDA1E19ED039747_gshared (RuntimeObject* ___0_results, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_results;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_results;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_3;
		V_4 = L_4;
		goto IL_0081;
	}

IL_0021:
	{
		V_0 = (RuntimeObject*)NULL;
		V_1 = (bool)1;
		V_5 = 0;
		goto IL_0062;
	}

IL_002a:
	{
		RuntimeObject* L_5 = ___0_results;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF_il2cpp_TypeInfo_var, L_5, L_6);
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var));
		RuntimeObject* L_8 = V_6;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_10 = V_6;
		NullCheck(L_10);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_11;
		L_11 = InterfaceFuncInvoker0< AssetBundle_tB38418819A49060CD738CB21541649340F082943* >::Invoke(0, IAssetBundleResource_t7DA03D01901C8189876A8C048B00A572F561BA00_il2cpp_TypeInfo_var, L_10);
		bool L_12 = V_1;
		V_8 = L_12;
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_14 = V_6;
		V_0 = L_14;
	}

IL_0058:
	{
		V_1 = (bool)0;
	}

IL_005b:
	{
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0062:
	{
		int32_t L_16 = V_5;
		RuntimeObject* L_17 = ___0_results;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		V_9 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_9;
		if (L_19)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_20 = V_0;
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0081;
	}

IL_0081:
	{
		RuntimeObject* L_21 = V_4;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*>(__this + _offset);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*>(__this + _offset);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*>(__this + _offset);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*>(__this + _offset);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*>(__this + _offset);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*>(__this + _offset);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_2;
		L_2 = ConstrainedFuncInvoker0< EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		return L_2;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*>(__this + _offset);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		int32_t L_2;
		L_2 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F L_1 = (*(CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*)L_0);
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 L_1 = (*(IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*)L_0);
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 L_1 = (*(KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*)L_0);
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD L_1 = (*(NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*)L_0);
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 L_1 = (*(PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*)L_0);
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A L_1 = (*(TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*)L_0);
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m838397FA34A03D1C68D150CC95FD210252FEC377_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, int64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		int64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58D75192AF2281079E2FDE4034707E9883147B2C_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, uint64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		uint64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ExpressionVisitor_VisitLambda_TisRuntimeObject_mEB1A047E763A276D9A7BA45134D3B1E2FD9B2B0F((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m1F2E37212086F85A441145A7B080D43DC4AE96E4_gshared (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_4;
		L_4 = Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m805FE99DED95E176759F6DBEF0B7B3120EB67B47_gshared (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_4;
		L_4 = Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m2DE439768C1ED8207B310B087BA22C4E1344C151_gshared (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_4;
		L_4 = Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mB86B15E6FADCADAB896DC5E3BD7AAEC58C9518AD_gshared (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_4;
		L_4 = Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mFB4A1A237BB767044B89C477162FEB4ADEBE20D2_gshared (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_4;
		L_4 = Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m1EEF7F2F65542F10C73B042CE442EB5F8FA73473_gshared (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_4;
		L_4 = Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		uint8_t* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		uint8_t* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		uint8_t* L_4;
		L_4 = Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDAC644D78CB577E5C3CEF18A59DB392CB645A4C_gshared (int32_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		int32_t* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		int32_t* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		int32_t* L_4;
		L_4 = Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEE0CCF17012BE1CA95605693A9DC3BC6AACCFB64_gshared (uint64_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		uint64_t* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		uint64_t* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		uint64_t* L_4;
		L_4 = Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mE3F6373EC4A8E7ED5EA452E3A5738529668CD99E_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_4;
		L_4 = Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m22827025CA779A0BDA69EEF4AB67F77D1070C655_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4;
		L_4 = Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m096E2AEE0566600497706AAD1E2B8CF599A2EFDB_gshared (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_4;
		L_4 = Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m2B126798068B361AB653416A8345288E9A242B22_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_4;
		L_4 = Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m43022B9CFB1F8C5AB5994140793058FD355CCF84_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_4;
		L_4 = Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RuntimeObject* G_B6_0 = NULL;
	{
		intptr_t L_0 = ___0_handlePtr;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_1;
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_0019:
	{
		intptr_t L_3 = ___0_handlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline((&V_0), NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_2;
		G_B6_0 = L_6;
		goto IL_0045;
	}

IL_0034:
	{
		RuntimeObject* L_7;
		L_7 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		G_B6_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0045:
	{
		V_3 = G_B6_0;
		goto IL_0048;
	}

IL_0048:
	{
		RuntimeObject* L_8 = V_3;
		return L_8;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method)
{
	TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1(_thisAdjusted, ___0_handlePtr, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = 0;
		goto IL_001f;
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_obj;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		intptr_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m6DA2AB54FFDD47D9D530ECB39E988A493887D083_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___m_Size;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = V_2;
		V_3 = L_2;
		goto IL_003b;
	}

IL_001a:
	{
		intptr_t* L_3 = (intptr_t*)(&__this->___m_Buffer);
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_3, NULL);
		int32_t L_5 = __this->___m_Size;
		int32_t L_6 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7;
		L_7 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = V_0;
		V_3 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m6DA2AB54FFDD47D9D530ECB39E988A493887D083_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m6DA2AB54FFDD47D9D530ECB39E988A493887D083(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_m6B800AAF3723A835A02719E0F52BFB149AD1B73B_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___m_Size;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786));
		NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 L_2 = V_2;
		V_3 = L_2;
		goto IL_003b;
	}

IL_001a:
	{
		intptr_t* L_3 = (intptr_t*)(&__this->___m_Buffer);
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_3, NULL);
		int32_t L_5 = __this->___m_Size;
		int32_t L_6 = __this->___m_Allocator;
		NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_mDA99E08D0136A0215D22ABC694850D80277BE373(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 L_8 = V_0;
		V_3 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_m6B800AAF3723A835A02719E0F52BFB149AD1B73B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	NativeArray_1_tAFBDCC609BE45274788E77468251DA0F79674786 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t7283C3F74372B1D8035F99314DCDAFBB9137D164_m6B800AAF3723A835A02719E0F52BFB149AD1B73B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_mF5BB5B8EF93034D5B63B72380791D63CBEA66270_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___m_Size;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D));
		NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D L_2 = V_2;
		V_3 = L_2;
		goto IL_003b;
	}

IL_001a:
	{
		intptr_t* L_3 = (intptr_t*)(&__this->___m_Buffer);
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_3, NULL);
		int32_t L_5 = __this->___m_Size;
		int32_t L_6 = __this->___m_Allocator;
		NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_m58CDB21A12F91BA61521EC9A058FA144326F07AD(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D L_8 = V_0;
		V_3 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_mF5BB5B8EF93034D5B63B72380791D63CBEA66270_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	NativeArray_1_tA1C185F9A31297C9A2F9AF234AFCCD38424B7A4D _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t49610DEDF104EC781DEA6886ECE01A85F007D4AC_mF5BB5B8EF93034D5B63B72380791D63CBEA66270(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B PhysicsBuffer_ToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_m38363BE6FA3F6692C76B049F3655C730EA2D38D2_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___m_Size;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B));
		NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B L_2 = V_2;
		V_3 = L_2;
		goto IL_003b;
	}

IL_001a:
	{
		intptr_t* L_3 = (intptr_t*)(&__this->___m_Buffer);
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_3, NULL);
		int32_t L_5 = __this->___m_Size;
		int32_t L_6 = __this->___m_Allocator;
		NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_mDE67BEDB0CD872D2D74CD4517A1C1F4136D9D67D(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B L_8 = V_0;
		V_3 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B PhysicsBuffer_ToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_m38363BE6FA3F6692C76B049F3655C730EA2D38D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	NativeArray_1_tAE2CE327A9F3B5B2F4823499461191B06D98953B _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisLineElement_t96DCC25AC17109ACE2D8E83D154E5B7559953339_m38363BE6FA3F6692C76B049F3655C730EA2D38D2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD PhysicsBuffer_ToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m5300A4670560B877062D1F8F0AE01480CC434D0F_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___m_Size;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD));
		NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD L_2 = V_2;
		V_3 = L_2;
		goto IL_003b;
	}

IL_001a:
	{
		intptr_t* L_3 = (intptr_t*)(&__this->___m_Buffer);
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_3, NULL);
		int32_t L_5 = __this->___m_Size;
		int32_t L_6 = __this->___m_Allocator;
		NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m31A8C5879B8832450ACED9FE8E99E9AD1E0E3451(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD L_8 = V_0;
		V_3 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD PhysicsBuffer_ToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m5300A4670560B877062D1F8F0AE01480CC434D0F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	NativeArray_1_t3332ABB8DCFE0C8973EB8BFC567EB722B134EDAD _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPointElement_tFE435D22E766645936C545EC265D1E41C047D9DE_m5300A4670560B877062D1F8F0AE01480CC434D0F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_m9D5B563D8D7BA6D52F2E5B671516DAE22B9B6C0E_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___m_Size;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919));
		NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 L_2 = V_2;
		V_3 = L_2;
		goto IL_003b;
	}

IL_001a:
	{
		intptr_t* L_3 = (intptr_t*)(&__this->___m_Buffer);
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_3, NULL);
		int32_t L_5 = __this->___m_Size;
		int32_t L_6 = __this->___m_Allocator;
		NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_mFB994894CC6A3D45C6F8C94042BC7DD2E7F60C62(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 L_8 = V_0;
		V_3 = L_8;
		goto IL_003b;
	}

IL_003b:
	{
		NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_m9D5B563D8D7BA6D52F2E5B671516DAE22B9B6C0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	NativeArray_1_t3725AADA55D844F47E3BC2A1B044470D58B11919 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t6C8FF21F16A40EA03BE69163226AF7366F22DCFD_m9D5B563D8D7BA6D52F2E5B671516DAE22B9B6C0E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DF8C9207C463ECAC3C8F16300EA439447682EF2_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DF8C9207C463ECAC3C8F16300EA439447682EF2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DF8C9207C463ECAC3C8F16300EA439447682EF2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_m91B23961C2EFCED0F7F9D1B6F2F37E552AFA267D_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mEF1AE37B4B04817B274AB6736DC70C7042B55A06_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_m91B23961C2EFCED0F7F9D1B6F2F37E552AFA267D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC_m91B23961C2EFCED0F7F9D1B6F2F37E552AFA267D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE_mF1A693AB65C5904FF5ED53199E42A301C37E4A3C_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m83BDBEB722B07C7A11FA1C58F84D7B92332B3151_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE_mF1A693AB65C5904FF5ED53199E42A301C37E4A3C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE_mF1A693AB65C5904FF5ED53199E42A301C37E4A3C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29_mA3743CE9A5A358B73FF141668877C67D52655E64_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mE556023C97056BE361AE96BC01743F5AE026E7B1_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29_mA3743CE9A5A358B73FF141668877C67D52655E64_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29_mA3743CE9A5A358B73FF141668877C67D52655E64(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC_m53C7FF621550A9A1C7CC9F2369FC7C09ED684A61_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m87A53713785A958A93F0D3116D91037685EA9289_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC_m53C7FF621550A9A1C7CC9F2369FC7C09ED684A61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC_m53C7FF621550A9A1C7CC9F2369FC7C09ED684A61(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7_m25C0D14A939EDA7F2873372B7C0F88158C92D7FA_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mFC657C8B3940754C21CAA85497A1C07DE1BE96D0_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7_m25C0D14A939EDA7F2873372B7C0F88158C92D7FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7_m25C0D14A939EDA7F2873372B7C0F88158C92D7FA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9_m00AA517EFDB2B9BFF331BEA892787EACEF3E9D91_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mAC17858A95A16AB6F84D2B27F8B568010565B8F6_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9_m00AA517EFDB2B9BFF331BEA892787EACEF3E9D91_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9_m00AA517EFDB2B9BFF331BEA892787EACEF3E9D91(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_mE3C3E9E47E2FF9FE5786A59B7CEF03ECA8DC1732_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_mE3C3E9E47E2FF9FE5786A59B7CEF03ECA8DC1732_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_mE3C3E9E47E2FF9FE5786A59B7CEF03ECA8DC1732(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 PhysicsBuffer_ToSpan_TisTransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0_mC9215A1EAC2E5E6B53DDFAA6EF1372940ED36B5F_gshared (PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_mA42DBB60391A281D719DCD8CDA7274B0828E87DF_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 PhysicsBuffer_ToSpan_TisTransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0_mC9215A1EAC2E5E6B53DDFAA6EF1372940ED36B5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PhysicsBuffer_tF4F7F71421A5D7FEF504D48AADF55BB79EE82A1B*>(__this + _offset);
	Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167 _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisTransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0_mC9215A1EAC2E5E6B53DDFAA6EF1372940ED36B5F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPropertyVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m48D5F231D141FE04D8C4AA045C484BDF9928EBC0_gshared (GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		__this->___Property = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Property), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_m74B581980E83CFD9DD1B7DAA66F3390DDD4A7679_gshared (RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF* __this, RuntimeObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_0 = __this->___resourceArray;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_0, DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var);
		V_0 = L_1;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_2 = __this->___resourceArray;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_3 = __this->___resourceArray;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_3, DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_5 = __this->___resourceArray;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_7;
		L_7 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_5, L_6, DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_8 = *((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021**)L_7);
		V_1 = (bool)((((RuntimeObject*)(IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_10 = __this->___resourceArray;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_12;
		L_12 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_10, L_11, DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0052:
	{
		RuntimeObject** L_14 = ___0_outRes;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_15 = __this->___resourceArray;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_17;
		L_17 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_15, L_16, DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_18 = *((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021**)L_17);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))));
		RuntimeObject** L_19 = ___0_outRes;
		bool L_20 = ___1_pooledResource;
		if (L_20)
		{
			G_B4_0 = L_19;
			goto IL_0076;
		}
		G_B3_0 = L_19;
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007c;
	}

IL_0076:
	{
		IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* L_21 = __this->___pool;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007c:
	{
		NullCheck((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* >::Invoke(4, (IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)(*G_B5_1), G_B5_0);
		int32_t L_22 = V_0;
		V_2 = L_22;
		goto IL_008c;
	}

IL_008c:
	{
		int32_t L_23 = V_2;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CInitializeGlobalDatabaseU3Eb__14_2_TisRuntimeObject_mD1ACDCFF4E2DE7D72DC51088E242BC9A5BB09C73_gshared (U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329* __this, Assembly_t* ___0_domainAssembly, const RuntimeMethod* method) 
{
	{
		Assembly_t* L_0 = ___0_domainAssembly;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(17, L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* U3CU3Ec_U3CInitializeGlobalDatabaseU3Eb__14_3_TisRuntimeObject_mC9DF8D2B8E5B2557CDEDAFB352535ABECF10B5D4_gshared (U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329* __this, Assembly_t* ___0_domainAssembly, Type_t* ___1_assemblyType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType1_2__ctor_m4F9B1F91035E4DE6EA6842FF34BD3072476B2EEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Assembly_t* L_0 = ___0_domainAssembly;
		Type_t* L_1 = ___1_assemblyType;
		U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* L_2 = (U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType1_2__ctor_m4F9B1F91035E4DE6EA6842FF34BD3072476B2EEF(L_2, L_0, L_1, U3CU3Ef__AnonymousType1_2__ctor_m4F9B1F91035E4DE6EA6842FF34BD3072476B2EEF_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInitializeGlobalDatabaseU3Eb__14_4_TisRuntimeObject_m935E1D2787FB279A42179A58ED3F41F195E2D98E_gshared (U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329* __this, U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* ___0_U3CU3Eh__TransparentIdentifier0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* L_0 = ___0_U3CU3Eh__TransparentIdentifier0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_inline(L_0, U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_RuntimeMethod_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21, L_1, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInitializeGlobalDatabaseU3Eb__14_5_TisRuntimeObject_m158A2E398DF5A6D778F57C18C99B3230084F4812_gshared (U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329* __this, U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* ___0_U3CU3Eh__TransparentIdentifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* L_0 = ___0_U3CU3Eh__TransparentIdentifier0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_inline(L_0, U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3CInitializeGlobalDatabaseU3Eb__14_6_TisRuntimeObject_mCBA1EE12BD574FEB5CB1353DBF99C9D82A586A82_gshared (U3CU3Ec_t47E269C74A0352A1B0177644BE9FCDAC457BD329* __this, U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* ___0_U3CU3Eh__TransparentIdentifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ef__AnonymousType1_2_t12558DB10B030154A5ED164ADF9E0E14ABC4EE56* L_0 = ___0_U3CU3Eh__TransparentIdentifier0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_inline(L_0, U3CU3Ef__AnonymousType1_2_get_assemblyType_m5A9F8126038ECA4C1E9CD20833813678C817459D_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_m04043D7E2C2C243F0FF234B9DC48F8A799436E32_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC_mA5A8C986198DD2B435B20BAEF2A208029FDB8C30(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mCE9C891875E6FD8C0C4C98C24CB3E1CA348657B5_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m599FB404D66BF2E53D69FF27AB599535E75EB37A(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mEA509F70B8228AAB7C98DF5094BBED8348B1CF81_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m976FAA642AA009127703997A127677B3216E665F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mC2E675394CDF2FF32620335DF734CF2ADE6F3200_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE47B5AABDD458396FF45F684A23B9BC83413CFC6(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mB65DD3D47B46A2660D302BDF8816DDFAA39AA48A_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m62F419D5A5A80806DB030B830E2E2F5ADE5990FD(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m0CDE36A55A511DCBA0B87284A7DF69F6F6B01532_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mD18F666EDE420221F4D0FD07CAE28E509B3C1A8A(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mDDD1574216112181EA73200608BF04B59DC514E5_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m78D6914DCC2C28FFB3F4181426EE05583F178370(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m0C24B05DCD6ADB430963C9EA5D3EA54F3CA503C1_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7167A90AD1C837F457ED5841B6B2E41BBFF6C41C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mBBBD5D09159A615D2AB8CFCC5C8644143483DEAE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m05AA5F40C3C0FC8ACBB072D55942F0AEC5EB4F96(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m22B3BA52C38D3199C6B4CC95F05F2FE6901EE666_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m71F2558D12040ACEBCD2F96428E0D31D8B409096(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFE98C0ECD8751FEC86E5F9CD2AFC20794571C81C_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m1B9FE4AB7F77AAFD254FE0D0E323555AACBCA675_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6E84570538BC9A257F375DE16EC3D98D9076B2B4(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m70D02A744A39B4C4C7FDBFD7BD540EB27D11062A_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5F90346B16182C4121698F7426124A040ECAAFF0(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mDB6BC2FC3367778FCA876D31356DEAF57C8EC145_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mC453F012B2E08302A2BB03765FD1B61189E606D7(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD1A6BF0BEE9AA5DB563546D8BEBE4A0360219F6_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF7B295F81A4BCD99A3E33CD14E19CB95AEECFC24(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDED556CE99CCB9A1742FE73A600182FE2E78AC24_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7DA57A68CA4B7EC816C6C904A108D584F4FC22DE(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m53023196AD1E9D48F7F22EFF00956E222BFE1D19_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mE1FFC902149E42012D1AF4A1470972459DC88EB3(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m89DFD20CBFEB5DA80772932DF0014027C0BFBC43_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mBF77CFD9D634306003AB5234BDE7B8B99F066A6A(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m0D0A6847749D34A8D1EF8B4FA76DC18DFE20BEB2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09F1ADDF010320442C5637A9E913FADC5A2C63EA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m199DEDC1B73BE7AF0A3B7250D109C9DD3037585F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m3DFFA3C3D2F7C8C394C4C4A1BB44A871725C6866(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m976461D8AAAE30D157B56275947EA11AEAF37D1A_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mAEBA4084CCA2A97C257494BFD183083F050CF7B4(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m434EF41561D979B71E84A2BD68938764C3682E85_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA71660AC59A96100C6151468D4DA76E0B12F6A3E(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m60D4BF9DDDFBB1E20546723259282EA23406F677_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3A53F8C10F926A93DFD07F939804AD8130EABAC0(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m23ABCBDD6D919E8D101AF77C1AA0DB5138A54ABA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mEEBF4924146F4A42DDE1E35E0A26B679C339435A(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1DAF8591331E2CDB1AA69C174DF8CBBD43C6C236_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1CF96D2F60E32144748F4414C4E41831D7BAE521(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA985A0FCBA315177E282C0A09EA20698AAFBEE52_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B98899114EC8F7236468B743FA0A2D39E7AB34(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mFDE68151C846F63DBB1B61635B5BA4D619DD9802_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m8D2A9D8897BBA98BDB7D706C0543FF73D80A808F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m706A3B05E0D84C8C24FBBB6F3CA1F3C1EA21C38E_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0438BBE2D84D4D7F65443E9CD69FD10A7C91913B(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mB5B35FCE75797210B5A280F9F80FBBAD15E574D0_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBC2ABA1E056B7FAD0435F07A5EB1F9034DCFF66F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB12AC6E8C71E981B89A6FF90B8C7CD1C10247686_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mC9663B2959C464E82F145504604CD37077158821(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1F07FE9FAFFFC334D2F4CBE38FB7E2381FB753BC_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8BEBCC60926ABBB1F1076342E3FD913512A5C16E(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mBCF34FB8CE82B2B0669816100D2FCB3F558A0860_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA602486BE28FFE8EB43A7068D62272C9CDE30858(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mF399A60565834612727266FD56DE2798B50E1160_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC4DA417C6DE13CB6931467DEDDE302BE8AFA20A5(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m72E371DA95DB8AAE5FCADA53AC525A5DD5C56BB3_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m4B4AB46D74BC3E0692C0A1AAF4E6D39037B8C84E(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1527CB8E3B73B1B5F302097FBC877B571F22493F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m57E942527218C6493C68644B1AA97BB885395B5C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m1FBFA6CE737A040BF640F11C91CA949E5437FB52_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB9B9C72E7FD4A8BCDA73B89EE69B962587C8A564(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mFB9BB983B46154E98DC40ADEB67FD0D914C8D50F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m42EFE354BF99B9E9014DD781F311FD87DAFEAAAE(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mCE988F9CFE539AE2AE8C5C5E9F209FAD4D59A17F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m19E0B09B99B71048B79509AFE0C77D3531A65FE7(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mB336225D285D32A1C7C3979B4DD46B038498172B_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD0856F80893293EDE8EC2991546BBDBE15344A8(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mEA88165CB7BBD2FF7FE2EDE49041DC14E5CDCEBA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m42819B71853F9C6B85E90BEC348D59D44D6C4CA2(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m6FA56F8B1B20A1E19074D750247D3A05FCCEBD37_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mC593D3B28F7463E77C8C177DE3411E364A815DB9(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m9215F03EF1AF55A0D98A5089C121FD8FBB3BFC72_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mB9A75977F7532FB14C755CFFF50A1E528CE9C8FC(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m2611ACAADCE84DB1244DB56136D39D20D0DDF190_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE45BA68543511F0DEFE7A1749238AA591895FF9B(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8798BE107DBDA81B08AA6FC004902CA3DE5461AE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mE0E17266C9705B431697EB67A97990F414FA7954(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m032CA5A330B4032D164F88B2B40B6A7F2590357F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA88A16DC097E207AD6CE15E89D3B94DBB01BDACE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3CD9CD3C768BBCC83DD02B2C76300A03AF1B1AD6_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711_gshared (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* V_0 = NULL;
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m0593078BB9DC842E2FE2C88E802B606CDC972402(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72_gshared (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* V_0 = NULL;
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m9D33FAB445EBAAEAB91BED2D158B3290B610D47E(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276_gshared (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* V_0 = NULL;
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m796E3C1D5F3A55A9EFFD1AA98C09AB788198C7A1(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E_gshared (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* V_0 = NULL;
	{
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m201D21D3AC9187C9EFEF16F0B593FAC6BE19EE72_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m70E5F2C375F3B4039114929EBDF86DFCBF1EF99C(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6_gshared (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* V_0 = NULL;
	{
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m067749C993CAF4A3AA0673C46673216D995516DE_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m756E0E44BD2515C8949896575600531B61F5B16B(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A_gshared (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* V_0 = NULL;
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m219DC3BB1EF8E9E18A66470555A9974E2C7D9EC6(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t* V_0 = NULL;
	{
		uint8_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (uint8_t*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint8_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE_gshared (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t* V_0 = NULL;
	{
		int32_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (int32_t*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		int32_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint64_t* V_0 = NULL;
	{
		uint64_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (uint64_t*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		uint64_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F_gshared (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* V_0 = NULL;
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m56B5B812224539B0C633BABE891ADDE1973580F6(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mC1EBD5161294EF95B8AC378DDF616869D287DC36(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784_gshared (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_0 = NULL;
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m3DF404928C7038CCD5C05BBBA41C4B2FD35A4253(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* V_0 = NULL;
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_mD84C2AFFB4ED036B913CEAD2FBF8A60E9C3A017D(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* V_0 = NULL;
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m5892DF1B875736B0E3612716E560A4E4AD5F6591(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		Il2CppFullySharedGenericStruct* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) 
{
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0 = __this->___U3CBindingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) 
{
	{
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_0 = __this->___U3CbindingContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) 
{
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_0 = ___0_value;
		__this->___U3CresultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CresultU3Ek__BackingField))->___U3CmessageU3Ek__BackingField), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdirectionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0 = __this->___U3CbindingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_0 = __this->___U3CbindingContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) 
{
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_0 = ___0_value;
		__this->___U3CresultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CresultU3Ek__BackingField))->___U3CmessageU3Ek__BackingField), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = V_0;
		int32_t L_7 = V_1;
		bool L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)L_8);
		return;
	}

IL_0034:
	{
		bool L_9 = ___0_item;
		List_1_AddWithResize_mD783561518F916982595A58C9A148BA3AA8F9B10(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___0_item, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___0_item;
		List_1_AddWithResize_m735EBD7363A06760DE25BACA0FC47F76CA0DEEAB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_gshared_inline (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) 
{
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_6 = V_0;
		int32_t L_7 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D)L_8);
		return;
	}

IL_0034:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = ___0_item;
		List_1_AddWithResize_m3E7DE866086F324900A4FC8398ABC02932B2CF83(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD959D3DC6BB637E22608AF4262AACFECD31B90F9_gshared_inline (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___0_item, const RuntimeMethod* method) 
{
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_6 = V_0;
		int32_t L_7 = V_1;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4)L_8);
		return;
	}

IL_0034:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_9 = ___0_item;
		List_1_AddWithResize_mE7A93ED556BFF9349318D59B805E26446A7D23B5(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m25E30E3AFE9A311DB95009459B5A2CDF45453DC2_gshared_inline (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_item, const RuntimeMethod* method) 
{
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_6 = V_0;
		int32_t L_7 = V_1;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)L_8);
		return;
	}

IL_0034:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = ___0_item;
		List_1_AddWithResize_m777C776EC80539A9464F1ECDC9DAC276B56A0B19(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		int32_t L_7 = V_1;
		double L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (double)L_8);
		return;
	}

IL_0034:
	{
		double L_9 = ___0_item;
		List_1_AddWithResize_m4D19394DC3062D1A564AD12233B16F7C80936C18(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_gshared_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = V_0;
		int32_t L_7 = V_1;
		int16_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int16_t)L_8);
		return;
	}

IL_0034:
	{
		int16_t L_9 = ___0_item;
		List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3AB938BCFAB883339EB05C02B33852D44401AA86_gshared_inline (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = V_0;
		int32_t L_7 = V_1;
		int64_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int64_t)L_8);
		return;
	}

IL_0034:
	{
		int64_t L_9 = ___0_item;
		List_1_AddWithResize_mAE92ED7C1F3B1E0BB409F462197C47FD982345E1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_gshared_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = V_0;
		int32_t L_7 = V_1;
		int8_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int8_t)L_8);
		return;
	}

IL_0034:
	{
		int8_t L_9 = ___0_item;
		List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___0_item;
		List_1_AddWithResize_m446487BF7F55E757E7D552B2436AD74AC354EA99(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m12865FFC396291FF62E4CF85327B19D60943D7C4_gshared_inline (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) 
{
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_6 = V_0;
		int32_t L_7 = V_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_8);
		return;
	}

IL_0034:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9 = ___0_item;
		List_1_AddWithResize_m98E1D35BB28087067AB471BFF9895F3E2D113F10(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD588DA8000CB6203E1EFD167075B07035A0053EC_gshared_inline (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = V_0;
		int32_t L_7 = V_1;
		uint16_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)L_8);
		return;
	}

IL_0034:
	{
		uint16_t L_9 = ___0_item;
		List_1_AddWithResize_m2C8293CD3AD1E44AB513F14B3CB34DBF3C19DF7C(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m084F52E7C436446A23080F15F803212491693F6B_gshared_inline (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_1;
		uint32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_8);
		return;
	}

IL_0034:
	{
		uint32_t L_9 = ___0_item;
		List_1_AddWithResize_m88BD32FBFE050A30CA8A331F209B9D6FF6C3A423(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m553050C87F0BF32427648D10CE6B6452B32ABB71_gshared_inline (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		uint64_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_8);
		return;
	}

IL_0034:
	{
		uint64_t L_9 = ___0_item;
		List_1_AddWithResize_m8B75BE9FADA560AD6E8D74B9242FC928826B4EE6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_m15074FFC8417C7A69B5C9774824F052CDCB4F438_gshared_inline (Action_4_tBBD2E8E6B26EC97CA5F6DDD14C18B0FDA593D380* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, int32_t ___3_arg4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEF1AE37B4B04817B274AB6736DC70C7042B55A06_gshared_inline (ReadOnlySpan_1_t9F4FE946F650DFC73792C27AEFD7C08384931A42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6DFEB7E2EB41937A4D139AAA98A0B2FEF61145DC>((uint8_t*)L_1);
		ByReference_1_t310EE53064D2EC3AF382E826AEAE7639EA573465 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m83BDBEB722B07C7A11FA1C58F84D7B92332B3151_gshared_inline (ReadOnlySpan_1_t19C65B22D3499A27300566A7FA268DC17654D790* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginTarget_t219EBBED83B122E8CC4DEE88C04DF6F8595882CE>((uint8_t*)L_1);
		ByReference_1_t041FDD4580DABDAC789C1D48BA78FF2AF417CDE6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE556023C97056BE361AE96BC01743F5AE026E7B1_gshared_inline (ReadOnlySpan_1_t043DA987E90C9DE1E81761BA0830C9BB0F68F1EE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndTarget_t6AFFF294A99330ACB933D8C200E7CA75AEF31B29>((uint8_t*)L_1);
		ByReference_1_t3A6C9DCA455ACFFA73DE53D212A723552D857B96 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m87A53713785A958A93F0D3116D91037685EA9289_gshared_inline (ReadOnlySpan_1_t01C2498F18905C855F092DA57F31A45D2270D1E1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdTarget_tD35F9E05A70D01669DD20FE508E449AF631338FC>((uint8_t*)L_1);
		ByReference_1_t7625CA25D4DE881D638CA8F4B295F86D7A4BB8CD L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFC657C8B3940754C21CAA85497A1C07DE1BE96D0_gshared_inline (ReadOnlySpan_1_t49397DCA5FB4D46EE6707C045B08E4407E3FBDAB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t2E0A2F6FBE5E226EE40F7AC2348034FDA9BAB5E7>((uint8_t*)L_1);
		ByReference_1_t45A3E2CFEF4091633680EABE39AFBA7E6B4BE668 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAC17858A95A16AB6F84D2B27F8B568010565B8F6_gshared_inline (ReadOnlySpan_1_tA367037D36A1D5C079702F0D14137695759438D2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndTarget_tE04F3C90BD5BD9EADC98FFFDDA469061A72A3CD9>((uint8_t*)L_1);
		ByReference_1_tC172CC48841C7CB5DB60C478807519993AEA97BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA42DBB60391A281D719DCD8CDA7274B0828E87DF_gshared_inline (Span_1_t6A6787B9249C592363BFDC72D3AF4968F5B74167* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformWriteTween_tA1E06E591FBB1696DE2915757CCA39C6B6E074D0>((uint8_t*)L_1);
		ByReference_1_t59A3BCF576F861B86F2B3825C45F6F7CDE0CB53C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ef__AnonymousType1_2_get_assemblyType_m07BE8ACF0CAEE5CD0F7A16917F905F5F9A01B6DA_gshared_inline (U3CU3Ef__AnonymousType1_2_t090A4CD45B5F91CA6534324BD7F49A972DD6EE03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CassemblyTypeU3Ei__Field;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m3EB9C6E6DBEE5EBF53B76E36EC79986A0597AE52_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m8058188B2884F5674C5A4C9C7AFC0A59000CC56F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m9DD3BAE2675B37478EA2C9AA9DAFD2C6C1F5BF4E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_m201D21D3AC9187C9EFEF16F0B593FAC6BE19EE72_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_m067749C993CAF4A3AA0673C46673216D995516DE_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m9108AF5F196154FF71AD62376A7411B92391F000_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mCCA7CED28D808054F7C94E1BF58205316AEE194F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_mB6FE4CAF35894EF5E357881DA5A0EAE9EDAD3754_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m79CAC169FC4593612624CB619E7D6F6FD7447517_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		return (bool)((((intptr_t)((intptr_t)(L_0&((intptr_t)1)))) == ((intptr_t)((intptr_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return L_3;
	}
}
