#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>
struct CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB;
// System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>
struct CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Func`2<System.Type,System.Type>
struct Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IList`1<System.Dynamic.DynamicMetaObject>
struct IList_1_tC8AC9DE84552CBB4604F3117605C055C47B258B3;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t28EB8E755FDBFBDE88574629581245F2CF1F5FC1;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t8237764F017214FEC3BDC5BA9D72BD235EAC1402;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_tB86476F62FBF3BB3389F17E0FFB65836DD3F2F65;
// System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.Expression>
struct ListProvider_1_t0A3FE801D5542C587D26CB7BA5BDE19F7F696E1C;
// System.Dynamic.Utils.ListProvider`1<System.Object>
struct ListProvider_1_t28BF3941AB39331B67723F731D01B099FB0BBC5B;
// System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.ParameterExpression>
struct ListProvider_1_t200095D29CAB7169D28BF19BA126F44CDA8EF7C0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>
struct TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D;
// System.Dynamic.Utils.CacheDict`2/Entry<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>[]
struct EntryU5BU5D_tFF2ADFB6137CF26442B1916B632BCFDF52B3EDF8;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Dynamic.DynamicMetaObject[]
struct DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Dynamic.BindingRestrictions
struct BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B;
// System.Dynamic.CallInfo
struct CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Dynamic.DynamicMetaObject
struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825;
// System.Dynamic.DynamicMetaObjectBinder
struct DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
// System.Linq.Expressions.IArgumentProvider
struct IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Linq.Expressions.IParameterProvider
struct IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C;
// System.Linq.Expressions.IndexExpression
struct IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Dynamic.InvokeBinder
struct InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B;
// System.Dynamic.InvokeMemberBinder
struct InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Dynamic.Utils.ListArgumentProvider
struct ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180;
// System.Dynamic.Utils.ListParameterProvider
struct ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96;
// System.Dynamic.UnaryOperationBinder
struct UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Dynamic.Utils.TypeUtils/<>c
struct U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59;
IL2CPP_EXTERN_C String_t* _stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4;
IL2CPP_EXTERN_C String_t* _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5;
IL2CPP_EXTERN_C String_t* _stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteralA12D0FE12DBFC15CF798FA4257297A09E474BC12;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_ValidateArgumentCount_m153AE9D01D3A9E720D2D275F99ED44289C7EFC3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListProvider_1__ctor_m129628F87630619A071EBFA342204677EAF521DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListProvider_1__ctor_m485E54BDA19E9E3E11D584C26593395ADE156AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m229FBB3F205FFA46A4978A2FAAB457769622DAE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m6A9E9D520CEDD89BC8801F6D1CE354EA352D5156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MulticastDelegate_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50;
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>
struct CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB  : public RuntimeObject
{
	// System.Int32 System.Dynamic.Utils.CacheDict`2::_mask
	int32_t ____mask_0;
	// System.Dynamic.Utils.CacheDict`2/Entry<TKey,TValue>[] System.Dynamic.Utils.CacheDict`2::_entries
	EntryU5BU5D_tFF2ADFB6137CF26442B1916B632BCFDF52B3EDF8* ____entries_1;
};

// System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.Expression>
struct ListProvider_1_t0A3FE801D5542C587D26CB7BA5BDE19F7F696E1C  : public RuntimeObject
{
};

// System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.ParameterExpression>
struct ListProvider_1_t200095D29CAB7169D28BF19BA126F44CDA8EF7C0  : public RuntimeObject
{
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Dynamic.CallInfo
struct CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC  : public RuntimeObject
{
	// System.Int32 System.Dynamic.CallInfo::<ArgumentCount>k__BackingField
	int32_t ___U3CArgumentCountU3Ek__BackingField_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> System.Dynamic.CallInfo::<ArgumentNames>k__BackingField
	ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* ___U3CArgumentNamesU3Ek__BackingField_1;
};

// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> System.Runtime.CompilerServices.CallSiteBinder::Cache
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Cache_0;
};

struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_StaticFields
{
	// System.Linq.Expressions.LabelTarget System.Runtime.CompilerServices.CallSiteBinder::<UpdateLabel>k__BackingField
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___U3CUpdateLabelU3Ek__BackingField_1;
};

// System.Dynamic.Utils.CollectionExtensions
struct CollectionExtensions_t12AA86DB09D1442F1691A1B1F4F35ADE1604514D  : public RuntimeObject
{
};

// System.Dynamic.Utils.ContractUtils
struct ContractUtils_tFD5BFE68866F22438D49EF2D69CC0BE6FFF726EC  : public RuntimeObject
{
};

// System.Dynamic.DynamicMetaObject
struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825  : public RuntimeObject
{
	// System.Object System.Dynamic.DynamicMetaObject::_value
	RuntimeObject* ____value_2;
	// System.Linq.Expressions.Expression System.Dynamic.DynamicMetaObject::<Expression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField_3;
	// System.Dynamic.BindingRestrictions System.Dynamic.DynamicMetaObject::<Restrictions>k__BackingField
	BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* ___U3CRestrictionsU3Ek__BackingField_4;
};

struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_StaticFields
{
	// System.Dynamic.DynamicMetaObject[] System.Dynamic.DynamicMetaObject::EmptyMetaObjects
	DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___EmptyMetaObjects_0;
	// System.Object System.Dynamic.DynamicMetaObject::s_noValueSentinel
	RuntimeObject* ___s_noValueSentinel_1;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Dynamic.Utils.ExpressionUtils
struct ExpressionUtils_t840E12569E851470D21F9784B859DD4F07235F35  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Dynamic.Utils.ExpressionVisitorUtils
struct ExpressionVisitorUtils_t8A120490A8DBD35DFD55CDCD34E7813634CE421E  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Dynamic.Utils.TypeExtensions
struct TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470  : public RuntimeObject
{
};

struct TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]> System.Dynamic.Utils.TypeExtensions::s_paramInfoCache
	CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* ___s_paramInfoCache_0;
};

// System.Dynamic.Utils.TypeUtils
struct TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7  : public RuntimeObject
{
};

struct TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields
{
	// System.Type[] System.Dynamic.Utils.TypeUtils::s_arrayAssignableInterfaces
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_arrayAssignableInterfaces_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Dynamic.Utils.TypeUtils/<>c
struct U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E  : public RuntimeObject
{
};

struct U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields
{
	// System.Dynamic.Utils.TypeUtils/<>c System.Dynamic.Utils.TypeUtils/<>c::<>9
	U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* ___U3CU3E9_0;
};

// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6  : public ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E
{
};

// System.Linq.Expressions.BlockExpression
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Dynamic.DynamicMetaObjectBinder
struct DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF  : public CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F
{
};

// System.Linq.Expressions.IndexExpression
struct IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.IndexExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::<Object>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CObjectU3Ek__BackingField_4;
	// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::<Indexer>k__BackingField
	PropertyInfo_t* ___U3CIndexerU3Ek__BackingField_5;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Dynamic.Utils.ListArgumentProvider
struct ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180  : public ListProvider_1_t0A3FE801D5542C587D26CB7BA5BDE19F7F696E1C
{
	// System.Linq.Expressions.IArgumentProvider System.Dynamic.Utils.ListArgumentProvider::_provider
	RuntimeObject* ____provider_0;
	// System.Linq.Expressions.Expression System.Dynamic.Utils.ListArgumentProvider::_arg0
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____arg0_1;
};

// System.Dynamic.Utils.ListParameterProvider
struct ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121  : public ListProvider_1_t200095D29CAB7169D28BF19BA126F44CDA8EF7C0
{
	// System.Linq.Expressions.IParameterProvider System.Dynamic.Utils.ListParameterProvider::_provider
	RuntimeObject* ____provider_0;
	// System.Linq.Expressions.ParameterExpression System.Dynamic.Utils.ListParameterProvider::_arg0
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ____arg0_1;
};

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_6;
};

// System.Void
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE__padding[1024];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_t6F11AA913DFF35D8B33057BABEFEF1EA9B976881 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t6F11AA913DFF35D8B33057BABEFEF1EA9B976881__padding[120];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731__padding[256];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0985298E3928118182D9E60D8C7A51F84FE0D710  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0985298E3928118182D9E60D8C7A51F84FE0D710_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::0270BFF41CB170C33C20788C368CB1B5A66B0FD0B98D638A827B783537583821
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___0270BFF41CB170C33C20788C368CB1B5A66B0FD0B98D638A827B783537583821_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::09FDC69AA887AC8D36E0C8284C7B1D53E580E4880B72A67FF80D7E38317115D9
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___09FDC69AA887AC8D36E0C8284C7B1D53E580E4880B72A67FF80D7E38317115D9_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::0F4764044BF2E91EFEFAF3D4F1E81C10A2B7F0F45305489925CFC01198CF45B5
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___0F4764044BF2E91EFEFAF3D4F1E81C10A2B7F0F45305489925CFC01198CF45B5_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::15A0E7628178B3FE6546E9B60F35E2B1C4864E020B16376866F38F72C74B45A9
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___15A0E7628178B3FE6546E9B60F35E2B1C4864E020B16376866F38F72C74B45A9_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::4CF8DC711CD3210D673D86981355E2609233025ED22E4DC7A1F9B8E75ADE35F4
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___4CF8DC711CD3210D673D86981355E2609233025ED22E4DC7A1F9B8E75ADE35F4_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::783FB0A44BE7670EB6EC170CF7F16BB2B6F23F4964B87B60C4EB506C7C6A286D
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___783FB0A44BE7670EB6EC170CF7F16BB2B6F23F4964B87B60C4EB506C7C6A286D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::914FCE8DC82DA59038745B264F743222527FBAE2E4A28E71C89760B7E3DBBA67
	__StaticArrayInitTypeSizeU3D120_t6F11AA913DFF35D8B33057BABEFEF1EA9B976881 ___914FCE8DC82DA59038745B264F743222527FBAE2E4A28E71C89760B7E3DBBA67_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::93631B0726F6FE6629DAA743EE51B49F4477ED07391B68EEEA0672A4A90018AA
	__StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731 ___93631B0726F6FE6629DAA743EE51B49F4477ED07391B68EEEA0672A4A90018AA_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2
	__StaticArrayInitTypeSizeU3D256_t121506E42A9F4B673CDCF2FDFF169D68811BB731 ___C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::C40A9A77EE05E10AF16DA9D1781A2053159EA8570ADA03637BB5FE3D076C9F89
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___C40A9A77EE05E10AF16DA9D1781A2053159EA8570ADA03637BB5FE3D076C9F89_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::E8058399671D13082C35B6B3CE7F9E282507EDD458CCFDD3BAD9F35D90016F62
	__StaticArrayInitTypeSizeU3D1024_t2A1518FE93EF6BEE22F2C6BA90AE95237A6E13AE ___E8058399671D13082C35B6B3CE7F9E282507EDD458CCFDD3BAD9F35D90016F62_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Dynamic.InvokeBinder
struct InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.Dynamic.CallInfo System.Dynamic.InvokeBinder::<CallInfo>k__BackingField
	CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___U3CCallInfoU3Ek__BackingField_2;
};

// System.Dynamic.InvokeMemberBinder
struct InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.String System.Dynamic.InvokeMemberBinder::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Dynamic.UnaryOperationBinder
struct UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.Linq.Expressions.ExpressionType System.Dynamic.UnaryOperationBinder::<Operation>k__BackingField
	int32_t ___U3COperationU3Ek__BackingField_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Type>
struct Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Dynamic.DynamicMetaObject[]
struct DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50  : public RuntimeArray
{
	ALIGN_FIELD (8) DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* m_Items[1];

	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F  : public RuntimeArray
{
	ALIGN_FIELD (8) Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* m_Items[1];

	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
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
// System.Type[]
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
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNullItems<System.Object>(System.Collections.Generic.IList`1<T>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNullItems_TisRuntimeObject_m98832943A1A52F621A78A7499CC9589FEEA12DD0_gshared (RuntimeObject* ___array0, String_t* ___arrayName1, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list0, const RuntimeMethod* method) ;
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CollectionExtensions_RemoveFirst_TisRuntimeObject_m760AFDF94515B7D47D1E5E5943B86520B23BD175_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;
// T System.Linq.Expressions.ExpressionVisitor::VisitAndConvert<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpressionVisitor_VisitAndConvert_TisRuntimeObject_m2CBDAC468B5B84C29FF143386D1833A9B333C931_gshared (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, RuntimeObject* ___node0, String_t* ___callerName1, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ListProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListProvider_1__ctor_m8125DFEF42DD116070EB9BCAD8734C07B16CE618_gshared (ListProvider_1_t28BF3941AB39331B67723F731D01B099FB0BBC5B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CacheDict_2_TryGetValue_m1745B71A31F178EE944CFDF5A54B2C1CBD036723_gshared (CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheDict_2_set_Item_m2332E7168EBC56DD2EAC292ACB237E49FCABAFC6_gshared (CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.CacheDict`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CacheDict_2__ctor_m77F28EED3C1E538CE7A82191571240B6FDEA27D3_gshared (CacheDict_2_tAFE0E408BD366174E0892EAB041D22C18AD3F2AC* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.Void System.Dynamic.DynamicMetaObjectBinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMetaObjectBinder__ctor_m59E3851B1A634034DB43CBE9659FB3F08A158497 (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF* __this, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D (RuntimeObject* ___value0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNullItems<System.Dynamic.DynamicMetaObject>(System.Collections.Generic.IList`1<T>,System.String)
inline void ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F (RuntimeObject* ___array0, String_t* ___arrayName1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ContractUtils_RequiresNotNullItems_TisRuntimeObject_m98832943A1A52F621A78A7499CC9589FEEA12DD0_gshared)(___array0, ___arrayName1, method);
}
// System.Linq.Expressions.ExpressionType System.Dynamic.UnaryOperationBinder::get_Operation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryOperationBinder_get_Operation_mE6C2A55113BE1C09D47CC4C7478432C7896BA83D_inline (UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE* __this, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ContractUtils::Requires(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529 (bool ___precondition0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::InvalidArgumentValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidArgumentValue_mEBBFA0C366F51C661A8CE2F747DB02756C6A0131 (String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.Dynamic.Utils.ContractUtils::GetParamName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_GetParamName_m94C928068CC1A0476FCB841ED75D4D27945692C6 (String_t* ___paramName0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ListParameterProvider::.ctor(System.Linq.Expressions.IParameterProvider,System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListParameterProvider__ctor_m14C2C5BAF9E1878A9E9125CE3185B1554D0A3927 (ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121* __this, RuntimeObject* ___provider0, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m229FBB3F205FFA46A4978A2FAAB457769622DAE0 (ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___list0, method);
}
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ListArgumentProvider::.ctor(System.Linq.Expressions.IArgumentProvider,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListArgumentProvider__ctor_m1AA7624745AFA6E93CC82CE89BA8AF9C7F6E497A (ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180* __this, RuntimeObject* ___provider0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m6A9E9D520CEDD89BC8801F6D1CE354EA352D5156 (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___list0, method);
}
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.ExpressionUtils::GetParametersForValidation(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ExpressionUtils_GetParametersForValidation_mFFB410DB5C7D53811684948F6C976F9779815FC1 (MethodBase_t* ___method0, int32_t ___nodeKind1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentCount(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Int32,System.Reflection.ParameterInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B (MethodBase_t* ___method0, int32_t ___nodeKind1, int32_t ___count2, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___pis3, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Item(System.Int32)
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502 (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared)(__this, ___index0, method);
}
// System.Linq.Expressions.Expression System.Dynamic.Utils.ExpressionUtils::ValidateOneArgument(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Reflection.ParameterInfo,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC (MethodBase_t* ___method0, int32_t ___nodeKind1, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arguments2, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___pi3, String_t* ___methodParamName4, String_t* ___argumentParamName5, int32_t ___index6, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>::.ctor(T[])
inline void TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* __this, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___list0, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared)(__this, ___list0, method);
}
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfConstructorArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_IncorrectNumberOfConstructorArguments_mB402B889D59FCE6DDCCA0B70A6DCFFD26994E85B (const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfLambdaArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_IncorrectNumberOfLambdaArguments_m93DE868DD7B895857F995D11811BA9069A43B993 (const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::IncorrectNumberOfMethodCallArguments(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_IncorrectNumberOfMethodCallArguments_m7DE65BB947C3DB563F0467A52A70C7A9DF1016F2 (RuntimeObject* ___p00, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6 (const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ExpressionUtils::RequiresCanRead(System.Linq.Expressions.Expression,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, String_t* ___paramName1, int32_t ___idx2, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3 (Type_t* ___type0, String_t* ___paramName1, bool ___allowByRef2, bool ___allowPointer3, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::AreReferenceAssignable(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177 (Type_t* ___dest0, Type_t* ___src1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.ExpressionUtils::TryQuote(System.Type,System.Linq.Expressions.Expression&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionUtils_TryQuote_m2569827EBCA2825EB31C09C67F0FB52024428F33 (Type_t* ___parameterType0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** ___argument1, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionTypeDoesNotMatchConstructorParameter(System.Object,System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionTypeDoesNotMatchConstructorParameter_m790D783BBA8D453BC3A047A2F404C3C8EAEEEEAD (RuntimeObject* ___p00, RuntimeObject* ___p11, String_t* ___paramName2, int32_t ___index3, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionTypeDoesNotMatchParameter(System.Object,System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionTypeDoesNotMatchParameter_m8203FE7A82A70A041CFD6D1D4159444A48D6A8E2 (RuntimeObject* ___p00, RuntimeObject* ___p11, String_t* ___paramName2, int32_t ___index3, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionTypeDoesNotMatchMethodParameter(System.Object,System.Object,System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionTypeDoesNotMatchMethodParameter_m2B66A5924549FE5DEE8E15BFA4781B7B65C5E157 (RuntimeObject* ___p00, RuntimeObject* ___p11, RuntimeObject* ___p22, String_t* ___paramName3, int32_t ___index4, const RuntimeMethod* method) ;
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A (RuntimeObject* ___value0, String_t* ___paramName1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::get_Indexer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline (IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::ExpressionMustBeReadable(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF (String_t* ___paramName0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104 (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsSameOrSubclass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsSameOrSubclass_m2753DDA9DCAF3CEEAFD39F275CAF99AD40AC50A9 (Type_t* ___type0, Type_t* ___subType1, const RuntimeMethod* method) ;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* Expression_Quote_m2B99356D1FBD5641CF7E5021321CCAD4E6930272 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, const RuntimeMethod* method) ;
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.TypeExtensions::GetParametersCached(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141 (MethodBase_t* ___method0, const RuntimeMethod* method) ;
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Reflection.ParameterInfo>(T[])
inline ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041 (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___array0, const RuntimeMethod* method)
{
	return ((  ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* (*) (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*, const RuntimeMethod*))CollectionExtensions_RemoveFirst_TisRuntimeObject_m760AFDF94515B7D47D1E5E5943B86520B23BD175_gshared)(___array0, method);
}
// System.Exception System.Linq.Expressions.Error::InvalidProgram()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidProgram_m2100DCBDFB43E64790FE65D7DDFA771AC1F334DA (const RuntimeMethod* method) ;
// T System.Linq.Expressions.ExpressionVisitor::VisitAndConvert<System.Linq.Expressions.ParameterExpression>(T,System.String)
inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___node0, String_t* ___callerName1, const RuntimeMethod* method)
{
	return ((  ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, String_t*, const RuntimeMethod*))ExpressionVisitor_VisitAndConvert_TisRuntimeObject_m2CBDAC468B5B84C29FF143386D1833A9B333C931_gshared)(__this, ___node0, ___callerName1, method);
}
// System.Void System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.Expression>::.ctor()
inline void ListProvider_1__ctor_m485E54BDA19E9E3E11D584C26593395ADE156AD9 (ListProvider_1_t0A3FE801D5542C587D26CB7BA5BDE19F7F696E1C* __this, const RuntimeMethod* method)
{
	((  void (*) (ListProvider_1_t0A3FE801D5542C587D26CB7BA5BDE19F7F696E1C*, const RuntimeMethod*))ListProvider_1__ctor_m8125DFEF42DD116070EB9BCAD8734C07B16CE618_gshared)(__this, method);
}
// System.Void System.Dynamic.Utils.ListProvider`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void ListProvider_1__ctor_m129628F87630619A071EBFA342204677EAF521DE (ListProvider_1_t200095D29CAB7169D28BF19BA126F44CDA8EF7C0* __this, const RuntimeMethod* method)
{
	((  void (*) (ListProvider_1_t200095D29CAB7169D28BF19BA126F44CDA8EF7C0*, const RuntimeMethod*))ListProvider_1__ctor_m8125DFEF42DD116070EB9BCAD8734C07B16CE618_gshared)(__this, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types3, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___modifiers4, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeExtensions::MatchesArgumentTypes(System.Reflection.MethodInfo,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_MatchesArgumentTypes_m660A719C4A3A1615382A75417726F309F29C57B6 (MethodInfo_t* ___mi0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argTypes1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsConstructor_m98801B34512C9B8DEC1589F1C8C9B3DFC8807575 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.TypeCode System.Type::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::TryGetValue(TKey,TValue&)
inline bool CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63 (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* __this, MethodBase_t* ___key0, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*, MethodBase_t*, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C**, const RuntimeMethod*))CacheDict_2_TryGetValue_m1745B71A31F178EE944CFDF5A54B2C1CBD036723_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::set_Item(TKey,TValue)
inline void CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* __this, MethodBase_t* ___key0, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*, MethodBase_t*, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C*, const RuntimeMethod*))CacheDict_2_set_Item_m2332E7168EBC56DD2EAC292ACB237E49FCABAFC6_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Dynamic.Utils.CacheDict`2<System.Reflection.MethodBase,System.Reflection.ParameterInfo[]>::.ctor(System.Int32)
inline void CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6 (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*, int32_t, const RuntimeMethod*))CacheDict_2__ctor_m77F28EED3C1E538CE7A82191571240B6FDEA27D3_gshared)(__this, ___size0, method);
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Dynamic.Utils.TypeUtils::GetNonNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.TypeCode System.Dynamic.Utils.TypeExtensions::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNumeric(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsBool_m1054E233E80393FD9A55E76FA3A9E891A796A496 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::AreEquivalent(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsConvertible(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsLegalExplicitVariantDelegateConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::StrictHasReferenceConversionTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445 (Type_t* ___source0, Type_t* ___dest1, bool ___skipNonArray2, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsSealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::HasArrayToInterfaceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasArrayToInterfaceConversion_mC69EE2DEF583985E8822964D19E2533E9E9F5F3A (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::HasInterfaceToArrayConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasInterfaceToArrayConversion_mCC7DC19083AFD44B5CBCCDE39F3A2F1772BBD0C3 (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitReferenceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82 (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsDelegate(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsInvariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsInvariant_m7081A56EB27994579EE0B13213A15FE1D6613CA6 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsCovariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsCovariant_m4220EE5D4CB85F8039AEFA3AE3641334A7506BA0 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::HasReferenceConversionTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasReferenceConversionTo_m4BBDBC19498CDAEBA70C7173EBFEE23474BBFC28 (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsContravariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsContravariant_m2B4BA44C74B4FC62D7B6D7CF667AFC025F46ACBF (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNumericConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNumericConversion_m2181B6491D1132F62B72BDC8938B16728DACBB21 (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitBoxingConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitBoxingConversion_mCD588DEB51CB41E65A7EFFC0F86EDCDBC8E4876B (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNullableConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNullableConversion_mE9012B508EA2BE0EADFDC6DB24613BB45F468FAC (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::FindConversionOperator(System.Reflection.MethodInfo[],System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888 (MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ___methods0, Type_t* ___typeFrom1, Type_t* ___typeTo2, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitlyConvertibleTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitlyConvertibleTo_mA53F5E133A932AEDA05CC17DEBBF40482F6C146D (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) ;
// System.Type System.Dynamic.Utils.TypeUtils::FindGenericType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_FindGenericType_mC7491078249941694D5B66BC007D0CDB02DC7CED (Type_t* ___definition0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeExtensions::GetAnyStaticMethodValidated(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetAnyStaticMethodValidated_m19BFEC3B36D0B1D436A9D5832DA06D670DAC81BA (Type_t* ___type0, String_t* ___name1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types2, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsSpecialName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsSpecialName_m80B62916B5B899408084AE6FC8B3D396FCF2B56C (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB (Type_t* ___type0, String_t* ___paramName1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeMustNotBeByRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeMustNotBeByRef_mC9A42A8B7A5F20813A4A3A0626BD8E4760FBFC0F (String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPointer_mC8AAAFEC4E4CEA59DAD0032B85D1BB224763278B (Type_t* __this, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeMustNotBePointer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeMustNotBePointer_mC8B6202CADBE91A5A33B51B02D67B073157E5AB8 (String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeContainsGenericParameters(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeContainsGenericParameters_m9469425747709B1D67698F586F698A5069A543FC (RuntimeObject* ___p00, String_t* ___paramName1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Exception System.Linq.Expressions.Error::TypeIsGeneric(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_TypeIsGeneric_mBF50410FCB13BFC4ABC9988B318BB1F6866DBD72 (RuntimeObject* ___p00, String_t* ___paramName1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8 (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<System.Type,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1697902B5A575D059320FCB1AD0B049A34A5FC77 (Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F (RuntimeObject* ___source0, Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void System.Dynamic.Utils.TypeUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D47C37129713530A6B1FE13BCB381295704FD22 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Dynamic.InvokeBinder::.ctor(System.Dynamic.CallInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokeBinder__ctor_m6A7EDF97597DB4576ACB27A6820B756DBBAF783B (InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* __this, CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___callInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12D0FE12DBFC15CF798FA4257297A09E474BC12);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicMetaObjectBinder__ctor_m59E3851B1A634034DB43CBE9659FB3F08A158497(__this, NULL);
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_0 = ___callInfo0;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteralA12D0FE12DBFC15CF798FA4257297A09E474BC12, NULL);
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_1 = ___callInfo0;
		__this->___U3CCallInfoU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCallInfoU3Ek__BackingField_2), (void*)L_1);
		return;
	}
}
// System.Type System.Dynamic.InvokeBinder::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InvokeBinder_get_ReturnType_m8E6D32D216B90773F533A1F823BDEFE6A1978EBC (InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.InvokeBinder::FallbackInvoke(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* InvokeBinder_FallbackInvoke_m3EEA1557AABE7AEA956D79097E23003F3FF91D39 (InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___target0, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___args1, const RuntimeMethod* method) 
{
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___target0;
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_1 = ___args1;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2;
		L_2 = VirtualFuncInvoker3< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* >::Invoke(9 /* System.Dynamic.DynamicMetaObject System.Dynamic.InvokeBinder::FallbackInvoke(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[],System.Dynamic.DynamicMetaObject) */, __this, L_0, L_1, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL);
		return L_2;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.InvokeBinder::Bind(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* InvokeBinder_Bind_m88532C7EE3C27A619362D34223771E06E9B1A4E4 (InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___target0, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___target0;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, NULL);
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_1 = ___args1;
		ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F((RuntimeObject*)L_1, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F_RuntimeMethod_var);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2 = ___target0;
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_3 = ___args1;
		NullCheck(L_2);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_4;
		L_4 = VirtualFuncInvoker2< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B*, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* >::Invoke(7 /* System.Dynamic.DynamicMetaObject System.Dynamic.DynamicMetaObject::BindInvoke(System.Dynamic.InvokeBinder,System.Dynamic.DynamicMetaObject[]) */, L_2, __this, L_3);
		return L_4;
	}
}
// System.Boolean System.Dynamic.InvokeBinder::get_IsStandardBinder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokeBinder_get_IsStandardBinder_m07C386055CFDC05F93A6E1034BEE4EA0AB1E86B8 (InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type System.Dynamic.InvokeMemberBinder::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InvokeMemberBinder_get_ReturnType_mD7EBEE96ECFAB3E3ABA538017A7C7AABFEA3D41B (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// System.String System.Dynamic.InvokeMemberBinder::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8 (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.InvokeMemberBinder::Bind(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* InvokeMemberBinder_Bind_m28946D4BAFE8E6830A1C83D61CADBDA99EE3D1AE (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___target0, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___target0;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, NULL);
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_1 = ___args1;
		ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F((RuntimeObject*)L_1, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, ContractUtils_RequiresNotNullItems_TisDynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_m003B58421627BCAFFF15BC14C1B5A30386260E1F_RuntimeMethod_var);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2 = ___target0;
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_3 = ___args1;
		NullCheck(L_2);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_4;
		L_4 = VirtualFuncInvoker2< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE*, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* >::Invoke(6 /* System.Dynamic.DynamicMetaObject System.Dynamic.DynamicMetaObject::BindInvokeMember(System.Dynamic.InvokeMemberBinder,System.Dynamic.DynamicMetaObject[]) */, L_2, __this, L_3);
		return L_4;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.InvokeMemberBinder::FallbackInvokeMember(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* InvokeMemberBinder_FallbackInvokeMember_m90DE0113F5AC637BA6AAAA52A752C0201E655952 (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___target0, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___args1, const RuntimeMethod* method) 
{
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___target0;
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_1 = ___args1;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2;
		L_2 = VirtualFuncInvoker3< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* >::Invoke(9 /* System.Dynamic.DynamicMetaObject System.Dynamic.InvokeMemberBinder::FallbackInvokeMember(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[],System.Dynamic.DynamicMetaObject) */, __this, L_0, L_1, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type System.Dynamic.UnaryOperationBinder::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* UnaryOperationBinder_get_ReturnType_mB11133914A7C1F72F37CDF7D24445CA1CD04395D (UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnaryOperationBinder_get_Operation_mE6C2A55113BE1C09D47CC4C7478432C7896BA83D_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)83)))) <= ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		return L_5;
	}
}
// System.Linq.Expressions.ExpressionType System.Dynamic.UnaryOperationBinder::get_Operation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnaryOperationBinder_get_Operation_mE6C2A55113BE1C09D47CC4C7478432C7896BA83D (UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COperationU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.UnaryOperationBinder::FallbackUnaryOperation(System.Dynamic.DynamicMetaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* UnaryOperationBinder_FallbackUnaryOperation_mD0455A787C02F1A724129221D2AB61206A3CF6CC (UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___target0, const RuntimeMethod* method) 
{
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___target0;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_1;
		L_1 = VirtualFuncInvoker2< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* >::Invoke(9 /* System.Dynamic.DynamicMetaObject System.Dynamic.UnaryOperationBinder::FallbackUnaryOperation(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject) */, __this, L_0, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL);
		return L_1;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.UnaryOperationBinder::Bind(System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicMetaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* UnaryOperationBinder_Bind_m8963E5F3A6972BF5B33BDD2E08AC1FA70E48B43A (UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE* __this, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___target0, DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_0 = ___target0;
		ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D(L_0, _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018, NULL);
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_1 = ___args1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* L_2 = ___args1;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529((bool)G_B3_0, _stringLiteralEDC12722FE0763003109C7EDBACB6977C0E31132, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_3 = ___target0;
		NullCheck(L_3);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_4;
		L_4 = VirtualFuncInvoker1< DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE* >::Invoke(8 /* System.Dynamic.DynamicMetaObject System.Dynamic.DynamicMetaObject::BindUnaryOperation(System.Dynamic.UnaryOperationBinder) */, L_3, __this);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteral656DE8865223883D9C605D63606CD7138CF8CAD3, NULL);
		return L_0;
	}
}
// System.Void System.Dynamic.Utils.ContractUtils::Requires(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529 (bool ___precondition0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___precondition0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___paramName1;
		Exception_t* L_2;
		L_2 = Error_InvalidArgumentValue_mEBBFA0C366F51C661A8CE2F747DB02756C6A0131(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_Requires_mB75206C24EAACC2AF630A8FC9BFE87D772BE7529_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D (RuntimeObject* ___value0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___paramName1;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_RequiresNotNull_mD3D07BD7AA85863B8388667F7CD3D14F6886E41D_RuntimeMethod_var)));
	}

IL_000a:
	{
		return;
	}
}
// System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A (RuntimeObject* ___value0, String_t* ___paramName1, int32_t ___index2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___paramName1;
		int32_t L_2 = ___index2;
		String_t* L_3;
		L_3 = ContractUtils_GetParamName_m94C928068CC1A0476FCB841ED75D4D27945692C6(L_1, L_2, NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A_RuntimeMethod_var)));
	}

IL_0010:
	{
		return;
	}
}
// System.String System.Dynamic.Utils.ContractUtils::GetParamName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContractUtils_GetParamName_m94C928068CC1A0476FCB841ED75D4D27945692C6 (String_t* ___paramName0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___paramName0;
		return L_1;
	}

IL_0006:
	{
		String_t* L_2 = ___paramName0;
		int32_t L_3 = ___index1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral471543834C9A5ADAA79EDD06EDCBA5930B3CB3F4, L_2, L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Dynamic.Utils.ExpressionUtils::ReturnReadOnly(System.Linq.Expressions.IParameterProvider,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505* ExpressionUtils_ReturnReadOnly_m4234275EEF6E88D2696FAEEE7648462F0B5FCF71 (RuntimeObject* ___provider0, RuntimeObject** ___collection1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m229FBB3F205FFA46A4978A2FAAB457769622DAE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_0 = NULL;
	{
		RuntimeObject** L_0 = ___collection1;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		V_0 = ((ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)IsInstClass((RuntimeObject*)L_1, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_il2cpp_TypeInfo_var));
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject** L_3 = ___collection1;
		RuntimeObject* L_4 = ___provider0;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_5 = V_0;
		ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121* L_6 = (ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121*)il2cpp_codegen_object_new(ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ListParameterProvider__ctor_m14C2C5BAF9E1878A9E9125CE3185B1554D0A3927(L_6, L_4, L_5, NULL);
		ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505* L_7 = (ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505*)il2cpp_codegen_object_new(ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ReadOnlyCollection_1__ctor_m229FBB3F205FFA46A4978A2FAAB457769622DAE0(L_7, L_6, ReadOnlyCollection_1__ctor_m229FBB3F205FFA46A4978A2FAAB457769622DAE0_RuntimeMethod_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_3, L_7, L_8, NULL);
	}

IL_001f:
	{
		RuntimeObject** L_10 = ___collection1;
		RuntimeObject* L_11 = *((RuntimeObject**)L_10);
		return ((ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505*)CastclassClass((RuntimeObject*)L_11, ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505_il2cpp_TypeInfo_var));
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Dynamic.Utils.ExpressionUtils::ReturnReadOnly(System.Linq.Expressions.IArgumentProvider,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* ExpressionUtils_ReturnReadOnly_m51DB37667F6596EC3A8BD3EDD0D72AF39B573E24 (RuntimeObject* ___provider0, RuntimeObject** ___collection1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m6A9E9D520CEDD89BC8801F6D1CE354EA352D5156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	{
		RuntimeObject** L_0 = ___collection1;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		V_0 = ((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)IsInstClass((RuntimeObject*)L_1, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var));
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject** L_3 = ___collection1;
		RuntimeObject* L_4 = ___provider0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_5 = V_0;
		ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180* L_6 = (ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180*)il2cpp_codegen_object_new(ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ListArgumentProvider__ctor_m1AA7624745AFA6E93CC82CE89BA8AF9C7F6E497A(L_6, L_4, L_5, NULL);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_7 = (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ReadOnlyCollection_1__ctor_m6A9E9D520CEDD89BC8801F6D1CE354EA352D5156(L_7, L_6, ReadOnlyCollection_1__ctor_m6A9E9D520CEDD89BC8801F6D1CE354EA352D5156_RuntimeMethod_var);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_3, L_7, L_8, NULL);
	}

IL_001f:
	{
		RuntimeObject** L_10 = ___collection1;
		RuntimeObject* L_11 = *((RuntimeObject**)L_10);
		return ((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*)CastclassClass((RuntimeObject*)L_11, ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentTypes(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentTypes_m27DF2570474545CCD73C32B4901488DE8280907A (MethodBase_t* ___method0, int32_t ___nodeKind1, ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** ___arguments2, String_t* ___methodParamName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_4 = NULL;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_5 = NULL;
	int32_t V_6 = 0;
	{
		MethodBase_t* L_0 = ___method0;
		int32_t L_1 = ___nodeKind1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = ExpressionUtils_GetParametersForValidation_mFFB410DB5C7D53811684948F6C976F9779815FC1(L_0, L_1, NULL);
		V_0 = L_2;
		MethodBase_t* L_3 = ___method0;
		int32_t L_4 = ___nodeKind1;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_5 = ___arguments2;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_6 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F(L_6, ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_8 = V_0;
		ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B(L_3, L_4, L_7, L_8, NULL);
		V_1 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)NULL;
		V_2 = 0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_0;
		NullCheck(L_9);
		V_3 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		goto IL_0089;
	}

IL_0021:
	{
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_10 = ___arguments2;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_11 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_10);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13;
		L_13 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_11, L_12, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		V_4 = L_13;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		MethodBase_t* L_18 = ___method0;
		int32_t L_19 = ___nodeKind1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_20 = V_4;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_21 = V_5;
		String_t* L_22 = ___methodParamName3;
		int32_t L_23 = V_2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC(L_18, L_19, L_20, L_21, L_22, _stringLiteral515679AB29628ECDDDD7FACA99AE118567A911D5, L_23, NULL);
		V_4 = L_24;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_25 = V_1;
		if (L_25)
		{
			goto IL_007d;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26 = V_4;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_27 = ___arguments2;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_28 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_27);
		int32_t L_29 = V_2;
		NullCheck(L_28);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_30;
		L_30 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_28, L_29, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		if ((((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_30)))
		{
			goto IL_007d;
		}
	}
	{
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_31 = ___arguments2;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_32 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_31);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F(L_32, ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_34 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)L_33);
		V_1 = L_34;
		V_6 = 0;
		goto IL_0078;
	}

IL_0065:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_35 = V_1;
		int32_t L_36 = V_6;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_37 = ___arguments2;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_38 = *((ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E**)L_37);
		int32_t L_39 = V_6;
		NullCheck(L_38);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_40;
		L_40 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_38, L_39, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_40);
		int32_t L_41 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0078:
	{
		int32_t L_42 = V_6;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0065;
		}
	}

IL_007d:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_44 = V_1;
		if (!L_44)
		{
			goto IL_0085;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_45 = V_1;
		int32_t L_46 = V_2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_47 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_47);
	}

IL_0085:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0089:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0021;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_51 = V_1;
		if (!L_51)
		{
			goto IL_0098;
		}
	}
	{
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E** L_52 = ___arguments2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_53 = V_1;
		TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* L_54 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD(L_54, L_53, TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		*((RuntimeObject**)L_52) = (RuntimeObject*)L_54;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_52, (void*)(RuntimeObject*)L_54);
	}

IL_0098:
	{
		return;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentCount(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Int32,System.Reflection.ParameterInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B (MethodBase_t* ___method0, int32_t ___nodeKind1, int32_t ___count2, ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___pis3, const RuntimeMethod* method) 
{
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_0 = ___pis3;
		NullCheck(L_0);
		int32_t L_1 = ___count2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_2 = ___nodeKind1;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)17))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___nodeKind1;
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = ___nodeKind1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_003a;
	}

IL_0016:
	{
		int32_t L_5 = ___nodeKind1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)31))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___nodeKind1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)50))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003a;
	}

IL_0022:
	{
		Exception_t* L_7;
		L_7 = Error_IncorrectNumberOfConstructorArguments_mB402B889D59FCE6DDCCA0B70A6DCFFD26994E85B(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_0028:
	{
		Exception_t* L_8;
		L_8 = Error_IncorrectNumberOfLambdaArguments_m93DE868DD7B895857F995D11811BA9069A43B993(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_002e:
	{
		MethodBase_t* L_9 = ___method0;
		Exception_t* L_10;
		L_10 = Error_IncorrectNumberOfMethodCallArguments_m7DE65BB947C3DB563F0467A52A70C7A9DF1016F2(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_003a:
	{
		Exception_t* L_11;
		L_11 = ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m1B682860313A40EF4EB4DFCBDAB18C265C39C92B_RuntimeMethod_var)));
	}

IL_0040:
	{
		return;
	}
}
// System.Linq.Expressions.Expression System.Dynamic.Utils.ExpressionUtils::ValidateOneArgument(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Reflection.ParameterInfo,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC (MethodBase_t* ___method0, int32_t ___nodeKind1, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arguments2, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___pi3, String_t* ___methodParamName4, String_t* ___argumentParamName5, int32_t ___index6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = ___arguments2;
		String_t* L_1 = ___argumentParamName5;
		int32_t L_2 = ___index6;
		ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2(L_0, L_1, L_2, NULL);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_3 = ___pi3;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_3);
		V_0 = L_4;
		Type_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_5, NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_7 = V_0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_7);
		V_0 = L_8;
	}

IL_0020:
	{
		Type_t* L_9 = V_0;
		String_t* L_10 = ___methodParamName4;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3(L_9, L_10, (bool)1, (bool)1, NULL);
		Type_t* L_11 = V_0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12 = ___arguments2;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_12);
		bool L_14;
		L_14 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_11, L_13, NULL);
		if (L_14)
		{
			goto IL_0098;
		}
	}
	{
		Type_t* L_15 = V_0;
		bool L_16;
		L_16 = ExpressionUtils_TryQuote_m2569827EBCA2825EB31C09C67F0FB52024428F33(L_15, (&___arguments2), NULL);
		if (L_16)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_17 = ___nodeKind1;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)17))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = ___nodeKind1;
		if ((((int32_t)L_18) == ((int32_t)6)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_19 = ___nodeKind1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)17))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0092;
	}

IL_0052:
	{
		int32_t L_20 = ___nodeKind1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)31))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_21 = ___nodeKind1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)50))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_0092;
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = ___arguments2;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_22);
		Type_t* L_24 = V_0;
		String_t* L_25 = ___argumentParamName5;
		int32_t L_26 = ___index6;
		Exception_t* L_27;
		L_27 = Error_ExpressionTypeDoesNotMatchConstructorParameter_m790D783BBA8D453BC3A047A2F404C3C8EAEEEEAD(L_23, L_24, L_25, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_006f:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_28 = ___arguments2;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_28);
		Type_t* L_30 = V_0;
		String_t* L_31 = ___argumentParamName5;
		int32_t L_32 = ___index6;
		Exception_t* L_33;
		L_33 = Error_ExpressionTypeDoesNotMatchParameter_m8203FE7A82A70A041CFD6D1D4159444A48D6A8E2(L_29, L_30, L_31, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_0080:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_34 = ___arguments2;
		NullCheck(L_34);
		Type_t* L_35;
		L_35 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_34);
		Type_t* L_36 = V_0;
		MethodBase_t* L_37 = ___method0;
		String_t* L_38 = ___argumentParamName5;
		int32_t L_39 = ___index6;
		Exception_t* L_40;
		L_40 = Error_ExpressionTypeDoesNotMatchMethodParameter_m2B66A5924549FE5DEE8E15BFA4781B7B65C5E157(L_35, L_36, L_37, L_38, L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_0092:
	{
		Exception_t* L_41;
		L_41 = ContractUtils_get_Unreachable_m792F83C753CCE84550E4F0442CDC49B978FD0CE6(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateOneArgument_m8707EF5489209EA813F2F3EE7E7CE1786FF319CC_RuntimeMethod_var)));
	}

IL_0098:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_42 = ___arguments2;
		return L_42;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::RequiresCanRead(System.Linq.Expressions.Expression,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_RequiresCanRead_m987D536D13A2587408F6DAB1396A94B702CE887F (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = ___expression0;
		String_t* L_1 = ___paramName1;
		ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2(L_0, L_1, (-1), NULL);
		return;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::RequiresCanRead(System.Linq.Expressions.Expression,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, String_t* ___paramName1, int32_t ___idx2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = ___expression0;
		String_t* L_1 = ___paramName1;
		int32_t L_2 = ___idx2;
		ContractUtils_RequiresNotNull_m04A5009D6D6E22EC255AED2147373282D3C4A76A(L_0, L_1, L_2, NULL);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_3 = ___expression0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_3);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)23))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)55)))))
		{
			goto IL_006d;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7 = ___expression0;
		V_0 = ((IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347*)CastclassSealed((RuntimeObject*)L_7, IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347_il2cpp_TypeInfo_var));
		IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* L_8 = V_0;
		NullCheck(L_8);
		PropertyInfo_t* L_9;
		L_9 = IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline(L_8, NULL);
		bool L_10;
		L_10 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_9, (PropertyInfo_t*)NULL, NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* L_11 = V_0;
		NullCheck(L_11);
		PropertyInfo_t* L_12;
		L_12 = IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_12);
		if (L_13)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_14 = ___paramName1;
		int32_t L_15 = ___idx2;
		Exception_t* L_16;
		L_16 = Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF(L_14, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2_RuntimeMethod_var)));
	}

IL_0043:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17 = ___expression0;
		NullCheck(((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)CastclassClass((RuntimeObject*)L_17, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var)));
		MemberInfo_t* L_18;
		L_18 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)CastclassClass((RuntimeObject*)L_17, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var)), NULL);
		V_1 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_18, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_19 = V_1;
		bool L_20;
		L_20 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_19, (PropertyInfo_t*)NULL, NULL);
		if (!L_20)
		{
			goto IL_006d;
		}
	}
	{
		PropertyInfo_t* L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_21);
		if (L_22)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_23 = ___paramName1;
		int32_t L_24 = ___idx2;
		Exception_t* L_25;
		L_25 = Error_ExpressionMustBeReadable_mC99E7EEDF1E84C216B563542F4A5C3EFCC7446DF(L_23, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_RequiresCanRead_mA1A376DC71A3383673B01BC5CB10F92F608FEDF2_RuntimeMethod_var)));
	}

IL_006d:
	{
		return;
	}
}
// System.Boolean System.Dynamic.Utils.ExpressionUtils::TryQuote(System.Type,System.Linq.Expressions.Expression&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionUtils_TryQuote_m2569827EBCA2825EB31C09C67F0FB52024428F33 (Type_t* ___parameterType0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** ___argument1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___parameterType0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsSameOrSubclass_m2753DDA9DCAF3CEEAFD39F275CAF99AD40AC50A9(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Type_t* L_4 = ___parameterType0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** L_5 = ___argument1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6 = *((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785**)L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(130 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_4, L_6);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** L_8 = ___argument1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** L_9 = ___argument1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_10 = *((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785**)L_9);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_11;
		L_11 = Expression_Quote_m2B99356D1FBD5641CF7E5021321CCAD4E6930272(L_10, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_11);
		return (bool)1;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.ExpressionUtils::GetParametersForValidation(System.Reflection.MethodBase,System.Linq.Expressions.ExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ExpressionUtils_GetParametersForValidation_mFFB410DB5C7D53811684948F6C976F9779815FC1 (MethodBase_t* ___method0, int32_t ___nodeKind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	{
		MethodBase_t* L_0 = ___method0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___nodeKind1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_0013;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3 = V_0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4;
		L_4 = CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041(L_3, CollectionExtensions_RemoveFirst_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m4B6727B4DCB60C3A0E390CDC1C6C0A3A878F2041_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0013:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Dynamic.Utils.ExpressionUtils::ValidateArgumentCount(System.Linq.Expressions.LambdaExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionUtils_ValidateArgumentCount_m153AE9D01D3A9E720D2D275F99ED44289C7EFC3D (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* ___lambda0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_0 = ___lambda0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IParameterProvider::get_ParameterCount() */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65535))))
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_2;
		L_2 = Error_InvalidProgram_m2100DCBDFB43E64790FE65D7DDFA771AC1F334DA(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionUtils_ValidateArgumentCount_m153AE9D01D3A9E720D2D275F99ED44289C7EFC3D_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Linq.Expressions.Expression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitBlockExpressions(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ExpressionVisitorUtils_VisitBlockExpressions_mDB6BB94861DEA88403B2167804369B5A70C2B2F5 (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* ___visitor0, BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* ___block1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_3 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_4 = NULL;
	int32_t V_5 = 0;
	{
		V_0 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)NULL;
		V_1 = 0;
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_0 = ___block1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 System.Linq.Expressions.BlockExpression::get_ExpressionCount() */, L_0);
		V_2 = L_1;
		goto IL_0059;
	}

IL_000d:
	{
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_2 = ___block1;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_4;
		L_4 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(10 /* System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpression::GetExpression(System.Int32) */, L_2, L_3);
		V_3 = L_4;
		ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* L_5 = ___visitor0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6 = V_3;
		NullCheck(L_5);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
		L_7 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_5, L_6);
		V_4 = L_7;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_9 = V_0;
		int32_t L_10 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_11 = V_4;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_11);
		goto IL_0055;
	}

IL_0028:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12 = V_4;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13 = V_3;
		if ((((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_12) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_13)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_15 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_0 = L_15;
		V_5 = 0;
		goto IL_004b;
	}

IL_0039:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_16 = V_0;
		int32_t L_17 = V_5;
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_18 = ___block1;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_20;
		L_20 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(10 /* System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpression::GetExpression(System.Int32) */, L_18, L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_20);
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004b:
	{
		int32_t L_22 = V_5;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_24 = V_0;
		int32_t L_25 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26 = V_4;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26);
	}

IL_0055:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0059:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_000d;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_30 = V_0;
		return L_30;
	}
}
// System.Linq.Expressions.ParameterExpression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitParameters(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.IParameterProvider,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ExpressionVisitorUtils_VisitParameters_m14CFF903DC14270555C38421EFC8423357797316 (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* ___visitor0, RuntimeObject* ___nodes1, String_t* ___callerName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_3 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_4 = NULL;
	int32_t V_5 = 0;
	{
		V_0 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL;
		V_1 = 0;
		RuntimeObject* L_0 = ___nodes1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IParameterProvider::get_ParameterCount() */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		goto IL_005a;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___nodes1;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_4;
		L_4 = InterfaceFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(0 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.IParameterProvider::GetParameter(System.Int32) */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_2, L_3);
		V_3 = L_4;
		ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* L_5 = ___visitor0;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_6 = V_3;
		String_t* L_7 = ___callerName2;
		NullCheck(L_5);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F(L_5, L_6, L_7, ExpressionVisitor_VisitAndConvert_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3E32E159FAD0579791C006186CD0161EADE1834F_RuntimeMethod_var);
		V_4 = L_8;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_10 = V_0;
		int32_t L_11 = V_1;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_12 = V_4;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_12);
		goto IL_0056;
	}

IL_0029:
	{
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_13 = V_4;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_14 = V_3;
		if ((((RuntimeObject*)(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_13) == ((RuntimeObject*)(ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_14)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_15 = V_2;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_16 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_0 = L_16;
		V_5 = 0;
		goto IL_004c;
	}

IL_003a:
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_17 = V_0;
		int32_t L_18 = V_5;
		RuntimeObject* L_19 = ___nodes1;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_21;
		L_21 = InterfaceFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(0 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.IParameterProvider::GetParameter(System.Int32) */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_19, L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_21);
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_004c:
	{
		int32_t L_23 = V_5;
		int32_t L_24 = V_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003a;
		}
	}
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_25 = V_0;
		int32_t L_26 = V_1;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_27 = V_4;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_27);
	}

IL_0056:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_005a:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_000d;
		}
	}
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_31 = V_0;
		return L_31;
	}
}
// System.Linq.Expressions.Expression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitArguments(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.IArgumentProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ExpressionVisitorUtils_VisitArguments_m5135CCB761020C2B55B5EA46FE54B1068A572AA4 (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* ___visitor0, RuntimeObject* ___nodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_3 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_4 = NULL;
	int32_t V_5 = 0;
	{
		V_0 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)NULL;
		V_1 = 0;
		RuntimeObject* L_0 = ___nodes1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IArgumentProvider::get_ArgumentCount() */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
		goto IL_0059;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___nodes1;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_4;
		L_4 = InterfaceFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(0 /* System.Linq.Expressions.Expression System.Linq.Expressions.IArgumentProvider::GetArgument(System.Int32) */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_2, L_3);
		V_3 = L_4;
		ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* L_5 = ___visitor0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6 = V_3;
		NullCheck(L_5);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
		L_7 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_5, L_6);
		V_4 = L_7;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_9 = V_0;
		int32_t L_10 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_11 = V_4;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_11);
		goto IL_0055;
	}

IL_0028:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12 = V_4;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13 = V_3;
		if ((((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_12) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_13)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_15 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_0 = L_15;
		V_5 = 0;
		goto IL_004b;
	}

IL_0039:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_16 = V_0;
		int32_t L_17 = V_5;
		RuntimeObject* L_18 = ___nodes1;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_20;
		L_20 = InterfaceFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(0 /* System.Linq.Expressions.Expression System.Linq.Expressions.IArgumentProvider::GetArgument(System.Int32) */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_18, L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_20);
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004b:
	{
		int32_t L_22 = V_5;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_24 = V_0;
		int32_t L_25 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26 = V_4;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26);
	}

IL_0055:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0059:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_000d;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_30 = V_0;
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Dynamic.Utils.ListArgumentProvider::.ctor(System.Linq.Expressions.IArgumentProvider,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListArgumentProvider__ctor_m1AA7624745AFA6E93CC82CE89BA8AF9C7F6E497A (ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180* __this, RuntimeObject* ___provider0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg01, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListProvider_1__ctor_m485E54BDA19E9E3E11D584C26593395ADE156AD9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListProvider_1__ctor_m485E54BDA19E9E3E11D584C26593395ADE156AD9(__this, ListProvider_1__ctor_m485E54BDA19E9E3E11D584C26593395ADE156AD9_RuntimeMethod_var);
		RuntimeObject* L_0 = ___provider0;
		__this->____provider_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____provider_0), (void*)L_0);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_1 = ___arg01;
		__this->____arg0_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arg0_1), (void*)L_1);
		return;
	}
}
// System.Linq.Expressions.Expression System.Dynamic.Utils.ListArgumentProvider::get_First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ListArgumentProvider_get_First_m01C2466584105B3473261FCD3E414B2A18961457 (ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____arg0_1;
		return L_0;
	}
}
// System.Int32 System.Dynamic.Utils.ListArgumentProvider::get_ElementCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListArgumentProvider_get_ElementCount_mD1EBB85033A2D1D02520E131647AF6E2BEB09DE1 (ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____provider_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IArgumentProvider::get_ArgumentCount() */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Linq.Expressions.Expression System.Dynamic.Utils.ListArgumentProvider::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ListArgumentProvider_GetElement_mC0B1A7B0567E5ACDD1183165659DCCC8B403C96D (ListArgumentProvider_tBFAF22699272705E0608BCE771CBC077F3D65180* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____provider_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_2;
		L_2 = InterfaceFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, int32_t >::Invoke(0 /* System.Linq.Expressions.Expression System.Linq.Expressions.IArgumentProvider::GetArgument(System.Int32) */, IArgumentProvider_tE4CF1AA45F936DB9894DAE3BB715F27447B69A85_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Dynamic.Utils.ListParameterProvider::.ctor(System.Linq.Expressions.IParameterProvider,System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListParameterProvider__ctor_m14C2C5BAF9E1878A9E9125CE3185B1554D0A3927 (ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121* __this, RuntimeObject* ___provider0, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___arg01, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListProvider_1__ctor_m129628F87630619A071EBFA342204677EAF521DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListProvider_1__ctor_m129628F87630619A071EBFA342204677EAF521DE(__this, ListProvider_1__ctor_m129628F87630619A071EBFA342204677EAF521DE_RuntimeMethod_var);
		RuntimeObject* L_0 = ___provider0;
		__this->____provider_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____provider_0), (void*)L_0);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_1 = ___arg01;
		__this->____arg0_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arg0_1), (void*)L_1);
		return;
	}
}
// System.Linq.Expressions.ParameterExpression System.Dynamic.Utils.ListParameterProvider::get_First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ListParameterProvider_get_First_m53BE411459A124EE97DA402934DF7F3B003AAD3D (ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121* __this, const RuntimeMethod* method) 
{
	{
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_0 = __this->____arg0_1;
		return L_0;
	}
}
// System.Int32 System.Dynamic.Utils.ListParameterProvider::get_ElementCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListParameterProvider_get_ElementCount_mDFF1673C06E4903FCFC06E7BB3A3616691EE1046 (ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____provider_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Linq.Expressions.IParameterProvider::get_ParameterCount() */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Linq.Expressions.ParameterExpression System.Dynamic.Utils.ListParameterProvider::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ListParameterProvider_GetElement_mEAE5F9CAB7AEECF4D4D3EDBE33AAF28B183B4503 (ListParameterProvider_t8B1DC357E7BA1DDF5877F49F9664BE64CFF46121* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____provider_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_2;
		L_2 = InterfaceFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(0 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.IParameterProvider::GetParameter(System.Int32) */, IParameterProvider_tA879E2897812597C54EAFD3F2D5E6593EF584F5C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeExtensions::GetAnyStaticMethodValidated(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_GetAnyStaticMethodValidated_m19BFEC3B36D0B1D436A9D5832DA06D670DAC81BA (Type_t* ___type0, String_t* ___name1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		String_t* L_1 = ___name1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___types2;
		NullCheck(L_0);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_0, L_1, ((int32_t)58), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_2, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
		V_0 = L_3;
		MethodInfo_t* L_4 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ___types2;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = TypeExtensions_MatchesArgumentTypes_m660A719C4A3A1615382A75417726F309F29C57B6(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0018;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}

IL_0018:
	{
		MethodInfo_t* L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Dynamic.Utils.TypeExtensions::MatchesArgumentTypes(System.Reflection.MethodInfo,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_MatchesArgumentTypes_m660A719C4A3A1615382A75417726F309F29C57B6 (MethodInfo_t* ___mi0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argTypes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		MethodInfo_t* L_0 = ___mi0;
		bool L_1;
		L_1 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		MethodInfo_t* L_2 = ___mi0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141(L_2, NULL);
		V_0 = L_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4 = V_0;
		NullCheck(L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ___argTypes1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_0038;
	}

IL_0020:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ___argTypes1;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Type_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_10, L_14, NULL);
		if (L_15)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}
}
// System.Type System.Dynamic.Utils.TypeExtensions::GetReturnType(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeExtensions_GetReturnType_mC3B12960522DA69BE1BD6B0E196133BD59929104 (MethodBase_t* ___mi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t* L_0 = ___mi0;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodBase_get_IsConstructor_m98801B34512C9B8DEC1589F1C8C9B3DFC8807575(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		MethodBase_t* L_2 = ___mi0;
		NullCheck(((MethodInfo_t*)CastclassClass((RuntimeObject*)L_2, MethodInfo_t_il2cpp_TypeInfo_var)));
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(54 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_2, MethodInfo_t_il2cpp_TypeInfo_var)));
		return L_3;
	}

IL_0014:
	{
		MethodBase_t* L_4 = ___mi0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		return L_5;
	}
}
// System.TypeCode System.Dynamic.Utils.TypeExtensions::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_0, NULL);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Dynamic.Utils.TypeExtensions::GetParametersCached(System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141 (MethodBase_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	Type_t* G_B3_0 = NULL;
	Type_t* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_0 = ((TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var))->___s_paramInfoCache_0;
		V_0 = L_0;
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_1 = V_0;
		MethodBase_t* L_2 = ___method0;
		NullCheck(L_1);
		bool L_3;
		L_3 = CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63(L_1, L_2, (&V_1), CacheDict_2_TryGetValue_m6CBD87FAA759A05435AEFD9D93587B5D418ECE63_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		MethodBase_t* L_4 = ___method0;
		NullCheck(L_4);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		V_1 = L_5;
		MethodBase_t* L_6 = ___method0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_6);
		Type_t* L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0025;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002d;
	}

IL_0025:
	{
		NullCheck(G_B3_0);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(81 /* System.Boolean System.Type::get_IsCollectible() */, G_B3_0);
		G_B4_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		if (!G_B4_0)
		{
			goto IL_0037;
		}
	}
	{
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_10 = V_0;
		MethodBase_t* L_11 = ___method0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = V_1;
		NullCheck(L_10);
		CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D(L_10, L_11, L_12, CacheDict_2_set_Item_mF8EE28322B73E55CB990D05DF380380AD8176E5D_RuntimeMethod_var);
	}

IL_0037:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_13 = V_1;
		return L_13;
	}
}
// System.Void System.Dynamic.Utils.TypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions__cctor_m0F364DE486F72C0E269E59B71A9E0C3F7E4E089C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB* L_0 = (CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB*)il2cpp_codegen_object_new(CacheDict_2_t7F0147742A54ED215A27636784030EA4DB5B77BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6(L_0, ((int32_t)75), CacheDict_2__ctor_mB7ADF1F2EDACF1FACE85871B31627E2AA1C936E6_RuntimeMethod_var);
		((TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var))->___s_paramInfoCache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var))->___s_paramInfoCache_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type System.Dynamic.Utils.TypeUtils::GetNonNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		Type_t* L_2 = ___type0;
		return L_2;
	}

IL_000a:
	{
		Type_t* L_3 = ___type0;
		NullCheck(L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4;
		L_4 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(59 /* System.Type[] System.Type::GetGenericArguments() */, L_3);
		NullCheck(L_4);
		int32_t L_5 = 0;
		Type_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils::GetNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNullableType_m46BA587AC30A0ACC936F891B68C8D64EA95B178E (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Type_t* L_2 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		Type_t* L_8 = ___type0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_8);
		NullCheck(L_5);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(137 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_5, L_7);
		return L_9;
	}

IL_002a:
	{
		Type_t* L_10 = ___type0;
		return L_10;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(46 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(57 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_5, NULL);
		return L_6;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableOrReferenceType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNullableOrReferenceType_m95B6B1A27EAF4BFDF6FD0ACAAAD420350D8CDBBD (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t* L_2 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsBool_m1054E233E80393FD9A55E76FA3A9E891A796A496 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNumeric(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___type0 = L_1;
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 4))) <= ((uint32_t)((int32_t)10)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsInteger(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsInteger_m6D52BF0DC44BC06DFDF3E534A6A5C10175BDD22F (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___type0 = L_1;
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 5))) <= ((uint32_t)7))))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsArithmetic(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsArithmetic_mD3B02EF9C11FA03AAE5C99F33D58895AF101ABF5 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___type0 = L_1;
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 7))) <= ((uint32_t)7))))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsUnsignedInt(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsUnsignedInt_m1279B112EEC2CBA4B180DA08EB6B018C17682186 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___type0 = L_1;
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 8)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_0037;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_0037;
	}

IL_0035:
	{
		return (bool)1;
	}

IL_0037:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsIntegerOrBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsIntegerOrBool_mF6BDDCDDB415256B88DED25072181DCD58BC58EF (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___type0 = L_1;
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 5))) <= ((uint32_t)7))))
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (bool)1;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsNumericOrBool(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsNumericOrBool_m83754455F7993200F9EC07EB2B70E2D60428F65C (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t* L_2 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsBool_m1054E233E80393FD9A55E76FA3A9E891A796A496(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsValidInstanceType(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsValidInstanceType_m6C54585680A426F50CC88D5E48694339BE3A6DD0 (MemberInfo_t* ___member0, Type_t* ___instanceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	bool V_3 = false;
	{
		MemberInfo_t* L_0 = ___member0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		Type_t* L_3 = ___instanceType1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, (Type_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		Type_t* L_7 = ___instanceType1;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_7, NULL);
		if (!L_8)
		{
			goto IL_00af;
		}
	}
	{
		Type_t* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		Type_t* L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		return (bool)1;
	}

IL_0050:
	{
		Type_t* L_17 = ___instanceType1;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_17);
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		Type_t* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_006c;
		}
	}
	{
		return (bool)1;
	}

IL_006c:
	{
		Type_t* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_23, NULL);
		if (!L_24)
		{
			goto IL_00af;
		}
	}
	{
		Type_t* L_25 = ___instanceType1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_26;
		L_26 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_25, NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(145 /* System.Collections.Generic.IEnumerable`1<System.Type> System.Reflection.TypeInfo::get_ImplementedInterfaces() */, L_26);
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_27);
		V_1 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_1;
					if (!L_29)
					{
						goto IL_00ae;
					}
				}
				{
					RuntimeObject* L_30 = V_1;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_00ae:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009b_1;
			}

IL_0087_1:
			{
				RuntimeObject* L_31 = V_1;
				NullCheck(L_31);
				Type_t* L_32;
				L_32 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_31);
				V_2 = L_32;
				Type_t* L_33 = V_0;
				Type_t* L_34 = V_2;
				il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
				bool L_35;
				L_35 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_33, L_34, NULL);
				if (!L_35)
				{
					goto IL_009b_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_00b1;
			}

IL_009b_1:
			{
				RuntimeObject* L_36 = V_1;
				NullCheck(L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_0087_1;
				}
			}
			{
				goto IL_00af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		bool L_38 = V_3;
		return L_38;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasIdentityPrimitiveOrNullableConversionTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasIdentityPrimitiveOrNullableConversionTo_m4F6E8EFD0BFFED585D49E438A72CB090A070C812 (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___source0;
		Type_t* L_1 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Type_t* L_3 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_5 = ___dest1;
		Type_t* L_6 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_6, NULL);
		bool L_8;
		L_8 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)1;
	}

IL_0023:
	{
		Type_t* L_9 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_9, NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		Type_t* L_11 = ___source0;
		Type_t* L_12 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_12, NULL);
		bool L_14;
		L_14 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}

IL_003b:
	{
		Type_t* L_15 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E(L_15, NULL);
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		Type_t* L_17 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E(L_17, NULL);
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		Type_t* L_19 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_0082;
		}
	}
	{
		Type_t* L_24 = ___source0;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_24);
		if (!L_25)
		{
			goto IL_0080;
		}
	}
	{
		Type_t* L_26 = ___source0;
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(132 /* System.Type System.Type::GetEnumUnderlyingType() */, L_26);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		return L_30;
	}

IL_0080:
	{
		return (bool)0;
	}

IL_0082:
	{
		return (bool)1;
	}

IL_0084:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasReferenceConversionTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasReferenceConversionTo_m4BBDBC19498CDAEBA70C7173EBFEE23474BBFC28 (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		Type_t* L_0 = ___source0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_4 = ___dest1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		Type_t* L_8 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_8, NULL);
		V_0 = L_9;
		Type_t* L_10 = ___dest1;
		Type_t* L_11;
		L_11 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_10, NULL);
		V_1 = L_11;
		Type_t* L_12 = V_0;
		Type_t* L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(31 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_12, L_13);
		if (!L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)1;
	}

IL_003f:
	{
		Type_t* L_15 = V_1;
		Type_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(31 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_004a;
		}
	}
	{
		return (bool)1;
	}

IL_004a:
	{
		Type_t* L_18 = ___source0;
		NullCheck(L_18);
		bool L_19;
		L_19 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_18, NULL);
		if (L_19)
		{
			goto IL_005a;
		}
	}
	{
		Type_t* L_20 = ___dest1;
		NullCheck(L_20);
		bool L_21;
		L_21 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_20, NULL);
		if (!L_21)
		{
			goto IL_005c;
		}
	}

IL_005a:
	{
		return (bool)1;
	}

IL_005c:
	{
		Type_t* L_22 = ___source0;
		Type_t* L_23 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)1;
	}

IL_0067:
	{
		Type_t* L_25 = ___source0;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_25, NULL);
		if (L_26)
		{
			goto IL_0077;
		}
	}
	{
		Type_t* L_27 = ___dest1;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_27, NULL);
		if (!L_28)
		{
			goto IL_0080;
		}
	}

IL_0077:
	{
		Type_t* L_29 = ___source0;
		Type_t* L_30 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445(L_29, L_30, (bool)1, NULL);
		return L_31;
	}

IL_0080:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::StrictHasReferenceConversionTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445 (Type_t* ___source0, Type_t* ___dest1, bool ___skipNonArray2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}

IL_0000:
	{
		bool L_0 = ___skipNonArray2;
		if (L_0)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_1 = ___source0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		Type_t* L_3 = ___dest1;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_3, NULL);
		if (!((int32_t)((int32_t)L_2|(int32_t)L_4)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		Type_t* L_5 = ___source0;
		Type_t* L_6 = ___dest1;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(31 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_6);
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		Type_t* L_8 = ___dest1;
		Type_t* L_9 = ___source0;
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(31 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_9);
		if (!L_10)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		return (bool)1;
	}

IL_0028:
	{
		Type_t* L_11 = ___source0;
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_11, NULL);
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		Type_t* L_13 = ___dest1;
		NullCheck(L_13);
		bool L_14;
		L_14 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_13, NULL);
		if (L_14)
		{
			goto IL_0048;
		}
	}
	{
		Type_t* L_15 = ___dest1;
		NullCheck(L_15);
		bool L_16;
		L_16 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_15, NULL);
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_17 = ___dest1;
		NullCheck(L_17);
		bool L_18;
		L_18 = Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4(L_17, NULL);
		if (L_18)
		{
			goto IL_0064;
		}
	}

IL_0048:
	{
		return (bool)1;
	}

IL_004a:
	{
		Type_t* L_19 = ___dest1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_19, NULL);
		if (!L_20)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_21 = ___source0;
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_21, NULL);
		if (!L_22)
		{
			goto IL_0064;
		}
	}
	{
		Type_t* L_23 = ___source0;
		NullCheck(L_23);
		bool L_24;
		L_24 = Type_get_IsSealed_m6B652265DCEF64250FD2A173C50BD889467A58E4(L_23, NULL);
		if (L_24)
		{
			goto IL_0064;
		}
	}
	{
		return (bool)1;
	}

IL_0064:
	{
		Type_t* L_25 = ___source0;
		NullCheck(L_25);
		bool L_26;
		L_26 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_25, NULL);
		if (!L_26)
		{
			goto IL_00b2;
		}
	}
	{
		Type_t* L_27 = ___dest1;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_27, NULL);
		if (!L_28)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t* L_29 = ___source0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(56 /* System.Int32 System.Type::GetArrayRank() */, L_29);
		Type_t* L_31 = ___dest1;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(56 /* System.Int32 System.Type::GetArrayRank() */, L_31);
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0090;
		}
	}
	{
		Type_t* L_33 = ___source0;
		NullCheck(L_33);
		bool L_34;
		L_34 = VirtualFuncInvoker0< bool >::Invoke(51 /* System.Boolean System.Type::get_IsSZArray() */, L_33);
		Type_t* L_35 = ___dest1;
		NullCheck(L_35);
		bool L_36;
		L_36 = VirtualFuncInvoker0< bool >::Invoke(51 /* System.Boolean System.Type::get_IsSZArray() */, L_35);
		if ((((int32_t)L_34) == ((int32_t)L_36)))
		{
			goto IL_0092;
		}
	}

IL_0090:
	{
		return (bool)0;
	}

IL_0092:
	{
		Type_t* L_37 = ___source0;
		NullCheck(L_37);
		Type_t* L_38;
		L_38 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_37);
		___source0 = L_38;
		Type_t* L_39 = ___dest1;
		NullCheck(L_39);
		Type_t* L_40;
		L_40 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_39);
		___dest1 = L_40;
		___skipNonArray2 = (bool)0;
		goto IL_0000;
	}

IL_00aa:
	{
		Type_t* L_41 = ___source0;
		Type_t* L_42 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = TypeUtils_HasArrayToInterfaceConversion_mC69EE2DEF583985E8822964D19E2533E9E9F5F3A(L_41, L_42, NULL);
		return L_43;
	}

IL_00b2:
	{
		Type_t* L_44 = ___dest1;
		NullCheck(L_44);
		bool L_45;
		L_45 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_44, NULL);
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		Type_t* L_46 = ___source0;
		Type_t* L_47 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = TypeUtils_HasInterfaceToArrayConversion_mCC7DC19083AFD44B5CBCCDE39F3A2F1772BBD0C3(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_00c5;
		}
	}
	{
		return (bool)1;
	}

IL_00c5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		Type_t* L_51 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82(L_50, L_51, NULL);
		return L_52;
	}

IL_00d6:
	{
		Type_t* L_53 = ___source0;
		Type_t* L_54 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B(L_53, L_54, NULL);
		return L_55;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasArrayToInterfaceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasArrayToInterfaceConversion_mC69EE2DEF583985E8822964D19E2533E9E9F5F3A (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	Type_t* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	{
		Type_t* L_0 = ___source0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(51 /* System.Boolean System.Type::get_IsSZArray() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_2 = ___dest1;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_4 = ___dest1;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(49 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		Type_t* L_6 = ___dest1;
		NullCheck(L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7;
		L_7 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(59 /* System.Type[] System.Type::GetGenericArguments() */, L_6);
		V_0 = L_7;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		Type_t* L_9 = ___dest1;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(57 /* System.Type System.Type::GetGenericTypeDefinition() */, L_9);
		V_1 = L_10;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0;
		V_2 = L_11;
		V_3 = 0;
		goto IL_005d;
	}

IL_003a:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Type_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		Type_t* L_16 = V_1;
		Type_t* L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		Type_t* L_19 = ___source0;
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_19);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		Type_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445(L_20, L_23, (bool)0, NULL);
		return L_24;
	}

IL_0059:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005d:
	{
		int32_t L_26 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasInterfaceToArrayConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasInterfaceToArrayConversion_mCC7DC19083AFD44B5CBCCDE39F3A2F1772BBD0C3 (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	Type_t* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	{
		Type_t* L_0 = ___dest1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(51 /* System.Boolean System.Type::get_IsSZArray() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_2 = ___source0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_4 = ___source0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(49 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		Type_t* L_6 = ___source0;
		NullCheck(L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7;
		L_7 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(59 /* System.Type[] System.Type::GetGenericArguments() */, L_6);
		V_0 = L_7;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		Type_t* L_9 = ___source0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(57 /* System.Type System.Type::GetGenericTypeDefinition() */, L_9);
		V_1 = L_10;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0;
		V_2 = L_11;
		V_3 = 0;
		goto IL_005d;
	}

IL_003a:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Type_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		Type_t* L_16 = V_1;
		Type_t* L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		Type_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Type_t* L_22 = ___dest1;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_22);
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_StrictHasReferenceConversionTo_mC9594BCC1A40FA47B71DDD7A7AF890A24A114445(L_21, L_23, (bool)0, NULL);
		return L_24;
	}

IL_0059:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005d:
	{
		int32_t L_26 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsCovariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsCovariant_m4220EE5D4CB85F8039AEFA3AE3641334A7506BA0 (Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(61 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_0);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsContravariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsContravariant_m2B4BA44C74B4FC62D7B6D7CF667AFC025F46ACBF (Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(61 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_0);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsInvariant(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsInvariant_m7081A56EB27994579EE0B13213A15FE1D6613CA6 (Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(61 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_0);
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&3))) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsDelegate(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602 (Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulticastDelegate_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___t0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (MulticastDelegate_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(30 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsLegalExplicitVariantDelegateConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsLegalExplicitVariantDelegateConversion_mDBF7A0751745C4EB5CD168F09D3D76332F70117B (Type_t* ___source0, Type_t* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t* V_5 = NULL;
	Type_t* V_6 = NULL;
	Type_t* V_7 = NULL;
	{
		Type_t* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_2 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TypeUtils_IsDelegate_mD03BA63283B1855B331BD4D01ABF93A4A9A95602(L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_4 = ___source0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(49 /* System.Boolean System.Type::get_IsGenericType() */, L_4);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		Type_t* L_6 = ___dest1;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(49 /* System.Boolean System.Type::get_IsGenericType() */, L_6);
		if (L_7)
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		Type_t* L_8 = ___source0;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(57 /* System.Type System.Type::GetGenericTypeDefinition() */, L_8);
		V_0 = L_9;
		Type_t* L_10 = ___dest1;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(57 /* System.Type System.Type::GetGenericTypeDefinition() */, L_10);
		Type_t* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		Type_t* L_14 = V_0;
		NullCheck(L_14);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15;
		L_15 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(59 /* System.Type[] System.Type::GetGenericArguments() */, L_14);
		V_1 = L_15;
		Type_t* L_16 = ___source0;
		NullCheck(L_16);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17;
		L_17 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(59 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
		V_2 = L_17;
		Type_t* L_18 = ___dest1;
		NullCheck(L_18);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(59 /* System.Type[] System.Type::GetGenericArguments() */, L_18);
		V_3 = L_19;
		V_4 = 0;
		goto IL_00b4;
	}

IL_0053:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = V_2;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Type_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = L_23;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = V_3;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Type_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		Type_t* L_28 = V_5;
		Type_t* L_29 = V_6;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_28, L_29, NULL);
		if (L_30)
		{
			goto IL_00ae;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = V_1;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Type_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_7 = L_34;
		Type_t* L_35 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = TypeUtils_IsInvariant_m7081A56EB27994579EE0B13213A15FE1D6613CA6(L_35, NULL);
		if (!L_36)
		{
			goto IL_007b;
		}
	}
	{
		return (bool)0;
	}

IL_007b:
	{
		Type_t* L_37 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = TypeUtils_IsCovariant_m4220EE5D4CB85F8039AEFA3AE3641334A7506BA0(L_37, NULL);
		if (!L_38)
		{
			goto IL_0091;
		}
	}
	{
		Type_t* L_39 = V_5;
		Type_t* L_40 = V_6;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = TypeUtils_HasReferenceConversionTo_m4BBDBC19498CDAEBA70C7173EBFEE23474BBFC28(L_39, L_40, NULL);
		if (L_41)
		{
			goto IL_00ae;
		}
	}
	{
		return (bool)0;
	}

IL_0091:
	{
		Type_t* L_42 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = TypeUtils_IsContravariant_m2B4BA44C74B4FC62D7B6D7CF667AFC025F46ACBF(L_42, NULL);
		if (!L_43)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t* L_44 = V_5;
		NullCheck(L_44);
		bool L_45;
		L_45 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_44, NULL);
		if (L_45)
		{
			goto IL_00ac;
		}
	}
	{
		Type_t* L_46 = V_6;
		NullCheck(L_46);
		bool L_47;
		L_47 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_46, NULL);
		if (!L_47)
		{
			goto IL_00ae;
		}
	}

IL_00ac:
	{
		return (bool)0;
	}

IL_00ae:
	{
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00b4:
	{
		int32_t L_49 = V_4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_50 = V_1;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsConvertible(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsConvertible_mD78E462EF22D75033D4D9318EB498CA9B210453E (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		___type0 = L_1;
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_2);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t* L_4 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3))) <= ((uint32_t)((int32_t)11)))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)1;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasReferenceEquality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasReferenceEquality_m153555F70F9B163ED5A1B6188CD0A274A6D564D6 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___left0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t* L_2 = ___right1;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		Type_t* L_4 = ___left0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_4, NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t* L_6 = ___right1;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_6, NULL);
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		Type_t* L_8 = ___left0;
		Type_t* L_9 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_0033;
		}
	}
	{
		Type_t* L_11 = ___right1;
		Type_t* L_12 = ___left0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_11, L_12, NULL);
		return L_13;
	}

IL_0033:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::HasBuiltInEqualityOperator(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_HasBuiltInEqualityOperator_m5920F8C695F30A0234A53BEF20429F34E075047A (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___left0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Type_t* L_2 = ___right1;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Type_t* L_4 = ___right1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_6 = ___left0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_6, NULL);
		if (L_7)
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		Type_t* L_8 = ___left0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_8, NULL);
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		Type_t* L_10 = ___right1;
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		Type_t* L_12 = ___left0;
		Type_t* L_13 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		Type_t* L_15 = ___right1;
		Type_t* L_16 = ___left0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0048;
		}
	}

IL_0046:
	{
		return (bool)1;
	}

IL_0048:
	{
		Type_t* L_18 = ___left0;
		Type_t* L_19 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_18, L_19, NULL);
		if (L_20)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0053:
	{
		Type_t* L_21 = ___left0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_21, NULL);
		V_0 = L_22;
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (L_26)
		{
			goto IL_007b;
		}
	}
	{
		Type_t* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = TypeUtils_IsNumeric_m1DFA79766A316CA6F9A9BCFFCAFF39B5EDCF6AB2(L_27, NULL);
		if (L_28)
		{
			goto IL_007b;
		}
	}
	{
		Type_t* L_29 = V_0;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_29);
		return L_30;
	}

IL_007b:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitlyConvertibleTo(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitlyConvertibleTo_mA53F5E133A932AEDA05CC17DEBBF40482F6C146D (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___source0;
		Type_t* L_1 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_3 = ___source0;
		Type_t* L_4 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = TypeUtils_IsImplicitNumericConversion_m2181B6491D1132F62B72BDC8938B16728DACBB21(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_6 = ___source0;
		Type_t* L_7 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_9 = ___source0;
		Type_t* L_10 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = TypeUtils_IsImplicitBoxingConversion_mCD588DEB51CB41E65A7EFFC0F86EDCDBC8E4876B(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_12 = ___source0;
		Type_t* L_13 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeUtils_IsImplicitNullableConversion_mE9012B508EA2BE0EADFDC6DB24613BB45F468FAC(L_12, L_13, NULL);
		return L_14;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetUserDefinedCoercionMethod(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_GetUserDefinedCoercionMethod_mC0A484382922762AF98C5700E67037358A8F77BB (Type_t* ___convertFrom0, Type_t* ___convertToType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_4 = NULL;
	MethodInfo_t* G_B11_0 = NULL;
	MethodInfo_t* G_B8_0 = NULL;
	MethodInfo_t* G_B9_0 = NULL;
	MethodInfo_t* G_B10_0 = NULL;
	{
		Type_t* L_0 = ___convertFrom0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = ___convertToType1;
		Type_t* L_3;
		L_3 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_2, NULL);
		V_1 = L_3;
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_5;
		L_5 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(115 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_4, ((int32_t)56));
		V_2 = L_5;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_6 = V_2;
		Type_t* L_7 = ___convertFrom0;
		Type_t* L_8 = ___convertToType1;
		MethodInfo_t* L_9;
		L_9 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_6, L_7, L_8, NULL);
		V_3 = L_9;
		MethodInfo_t* L_10 = V_3;
		bool L_11;
		L_11 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_10, (MethodInfo_t*)NULL, NULL);
		if (!L_11)
		{
			goto IL_002b;
		}
	}
	{
		MethodInfo_t* L_12 = V_3;
		return L_12;
	}

IL_002b:
	{
		Type_t* L_13 = V_1;
		NullCheck(L_13);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_14;
		L_14 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(115 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_13, ((int32_t)56));
		V_4 = L_14;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_15 = V_4;
		Type_t* L_16 = ___convertFrom0;
		Type_t* L_17 = ___convertToType1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_18;
		L_18 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_15, L_16, L_17, NULL);
		V_3 = L_18;
		MethodInfo_t* L_19 = V_3;
		bool L_20;
		L_20 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_19, (MethodInfo_t*)NULL, NULL);
		if (!L_20)
		{
			goto IL_004a;
		}
	}
	{
		MethodInfo_t* L_21 = V_3;
		return L_21;
	}

IL_004a:
	{
		Type_t* L_22 = V_0;
		Type_t* L_23 = ___convertFrom0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_005e;
		}
	}
	{
		Type_t* L_25 = V_1;
		Type_t* L_26 = ___convertToType1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_005e;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}

IL_005e:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_28 = V_2;
		Type_t* L_29 = V_0;
		Type_t* L_30 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_31;
		L_31 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_28, L_29, L_30, NULL);
		MethodInfo_t* L_32 = L_31;
		G_B8_0 = L_32;
		if (L_32)
		{
			G_B11_0 = L_32;
			goto IL_008c;
		}
	}
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_33 = V_4;
		Type_t* L_34 = V_0;
		Type_t* L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_36;
		L_36 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_33, L_34, L_35, NULL);
		MethodInfo_t* L_37 = L_36;
		G_B9_0 = L_37;
		if (L_37)
		{
			G_B11_0 = L_37;
			goto IL_008c;
		}
	}
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_38 = V_2;
		Type_t* L_39 = V_0;
		Type_t* L_40 = ___convertToType1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_41;
		L_41 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_38, L_39, L_40, NULL);
		MethodInfo_t* L_42 = L_41;
		G_B10_0 = L_42;
		if (L_42)
		{
			G_B11_0 = L_42;
			goto IL_008c;
		}
	}
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_43 = V_4;
		Type_t* L_44 = V_0;
		Type_t* L_45 = ___convertToType1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		MethodInfo_t* L_46;
		L_46 = TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888(L_43, L_44, L_45, NULL);
		G_B11_0 = L_46;
	}

IL_008c:
	{
		return G_B11_0;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::FindConversionOperator(System.Reflection.MethodInfo[],System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_FindConversionOperator_m11FF47052534C733D94A242534DDCF1A9AEEF888 (MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ___methods0, Type_t* ___typeFrom1, Type_t* ___typeTo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E90C09E43FB002DA629508AC300A0750320118);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_0 = NULL;
	int32_t V_1 = 0;
	MethodInfo_t* V_2 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_3 = NULL;
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_0 = ___methods0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_005f;
	}

IL_0006:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MethodInfo_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		MethodInfo_t* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59, NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		MethodInfo_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118, NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}

IL_002e:
	{
		MethodInfo_t* L_11 = V_2;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker0< Type_t* >::Invoke(54 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_11);
		Type_t* L_13 = ___typeTo2;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		MethodInfo_t* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = TypeExtensions_GetParametersCached_mD2B9864864929FEFA691059A59077A7E491A8141(L_15, NULL);
		V_3 = L_16;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17 = V_3;
		NullCheck(L_17);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		Type_t* L_22 = ___typeFrom1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_005b;
		}
	}
	{
		MethodInfo_t* L_24 = V_2;
		return L_24;
	}

IL_005b:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005f:
	{
		int32_t L_26 = V_1;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNumericConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNumericConversion_m2181B6491D1132F62B72BDC8938B16728DACBB21 (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Type_t* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = ___destination1;
		int32_t L_3;
		L_3 = TypeExtensions_GetTypeCode_mB75A162EE9CE21D2605EF67542924B685096810A(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 4)))
		{
			case 0:
			{
				goto IL_00cd;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0073;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_00a4;
			}
			case 5:
			{
				goto IL_00ad;
			}
			case 6:
			{
				goto IL_00bb;
			}
			case 7:
			{
				goto IL_00c4;
			}
			case 8:
			{
				goto IL_00c4;
			}
			case 9:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_0043:
	{
		int32_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 7)))
		{
			case 0:
			{
				goto IL_0071;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_0071;
			}
			case 7:
			{
				goto IL_0071;
			}
			case 8:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_0071:
	{
		return (bool)1;
	}

IL_0073:
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 7))) <= ((uint32_t)8))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_007b:
	{
		int32_t L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00a2;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00a2;
			}
			case 5:
			{
				goto IL_00a2;
			}
			case 6:
			{
				goto IL_00a2;
			}
		}
	}
	{
		goto IL_00db;
	}

IL_00a2:
	{
		return (bool)1;
	}

IL_00a4:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)9)))) <= ((uint32_t)6))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00ad:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)11))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)13)))) <= ((uint32_t)2))))
		{
			goto IL_00db;
		}
	}

IL_00b9:
	{
		return (bool)1;
	}

IL_00bb:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)11)))) <= ((uint32_t)4))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00c4:
	{
		int32_t L_12 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)13)))) <= ((uint32_t)2))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00cd:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 8))) <= ((uint32_t)7))))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)1;
	}

IL_00d5:
	{
		int32_t L_14 = V_1;
		return (bool)((((int32_t)L_14) == ((int32_t)((int32_t)14)))? 1 : 0);
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitReferenceConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitReferenceConversion_m72031537214B8B0E3D99B3815AB7AD774A673A82 (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___destination1;
		Type_t* L_1 = ___source0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(31 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitBoxingConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitBoxingConversion_mCD588DEB51CB41E65A7EFFC0F86EDCDBC8E4876B (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___source0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = ___destination1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		Type_t* L_6 = ___destination1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_0047;
		}
	}

IL_002c:
	{
		Type_t* L_10 = ___source0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_IsEnum() */, L_10);
		if (!L_11)
		{
			goto IL_0045;
		}
	}
	{
		Type_t* L_12 = ___destination1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		return L_15;
	}

IL_0045:
	{
		return (bool)0;
	}

IL_0047:
	{
		return (bool)1;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsImplicitNullableConversion(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsImplicitNullableConversion_mE9012B508EA2BE0EADFDC6DB24613BB45F468FAC (Type_t* ___source0, Type_t* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = TypeUtils_IsNullableType_m0ECBA329F82B0EFEBF884984D637FD55361F3AD0(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_2 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_2, NULL);
		Type_t* L_4 = ___destination1;
		Type_t* L_5;
		L_5 = TypeUtils_GetNonNullableType_mEFA6EEA56679D5341A252A5D07B7356063A78F85(L_4, NULL);
		bool L_6;
		L_6 = TypeUtils_IsImplicitlyConvertibleTo_mA53F5E133A932AEDA05CC17DEBBF40482F6C146D(L_3, L_5, NULL);
		return L_6;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils::FindGenericType(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_FindGenericType_mC7491078249941694D5B66BC007D0CDB02DC7CED (Type_t* ___definition0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	{
		goto IL_006d;
	}

IL_0002:
	{
		Type_t* L_0 = ___type1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(46 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_2 = ___type1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(57 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		Type_t* L_4 = ___definition0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_6 = ___type1;
		return L_6;
	}

IL_001a:
	{
		Type_t* L_7 = ___definition0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Type_t* L_9 = ___type1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_10;
		L_10 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_9, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(145 /* System.Collections.Generic.IEnumerable`1<System.Type> System.Reflection.TypeInfo::get_ImplementedInterfaces() */, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_11);
		V_0 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_13 = V_0;
					if (!L_13)
					{
						goto IL_0064;
					}
				}
				{
					RuntimeObject* L_14 = V_0;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0064:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0035_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck(L_15);
				Type_t* L_16;
				L_16 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_15);
				V_1 = L_16;
				Type_t* L_17 = ___definition0;
				Type_t* L_18 = V_1;
				il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
				Type_t* L_19;
				L_19 = TypeUtils_FindGenericType_mC7491078249941694D5B66BC007D0CDB02DC7CED(L_17, L_18, NULL);
				V_2 = L_19;
				Type_t* L_20 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_21;
				L_21 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_20, (Type_t*)NULL, NULL);
				if (!L_21)
				{
					goto IL_0051_1;
				}
			}
			{
				Type_t* L_22 = V_2;
				V_3 = L_22;
				goto IL_0084;
			}

IL_0051_1:
			{
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		Type_t* L_25 = ___type1;
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(127 /* System.Type System.Type::get_BaseType() */, L_25);
		___type1 = L_26;
	}

IL_006d:
	{
		Type_t* L_27 = ___type1;
		if (!L_27)
		{
			goto IL_0082;
		}
	}
	{
		Type_t* L_28 = ___type1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_0002;
		}
	}

IL_0082:
	{
		return (Type_t*)NULL;
	}

IL_0084:
	{
		Type_t* L_32 = V_3;
		return L_32;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetBooleanOperator(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_GetBooleanOperator_m044025C7C745B557718CD00498EA82C1E9D526AC (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;

IL_0000:
	{
		Type_t* L_0 = ___type0;
		String_t* L_1 = ___name1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___type0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t3ECEF5C4EFF4A8B50F70EF5C26D9120485701470_il2cpp_TypeInfo_var);
		MethodInfo_t* L_5;
		L_5 = TypeExtensions_GetAnyStaticMethodValidated_m19BFEC3B36D0B1D436A9D5832DA06D670DAC81BA(L_0, L_1, L_3, NULL);
		V_0 = L_5;
		MethodInfo_t* L_6 = V_0;
		bool L_7;
		L_7 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_6, (MethodInfo_t*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = MethodBase_get_IsSpecialName_m80B62916B5B899408084AE6FC8B3D396FCF2B56C(L_8, NULL);
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(43 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_10);
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t* L_12 = V_0;
		return L_12;
	}

IL_002d:
	{
		Type_t* L_13 = ___type0;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(127 /* System.Type System.Type::get_BaseType() */, L_13);
		___type0 = L_14;
		Type_t* L_15 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, (Type_t*)NULL, NULL);
		if (L_16)
		{
			goto IL_0000;
		}
	}
	{
		return (MethodInfo_t*)NULL;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils::GetNonRefType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeUtils_GetNonRefType_m3740C139BE8675E516C3ED1E7E993FBCCE971863 (Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		Type_t* L_2 = ___type0;
		return L_2;
	}

IL_000a:
	{
		Type_t* L_3 = ___type0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(55 /* System.Type System.Type::GetElementType() */, L_3);
		return L_4;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::AreEquivalent(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65 (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___t10;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t* L_2 = ___t10;
		Type_t* L_3 = ___t21;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(131 /* System.Boolean System.Type::IsEquivalentTo(System.Type) */, L_2, L_3);
		return L_4;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::AreReferenceAssignable(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_AreReferenceAssignable_m2153DADCC06A2E1C36820F736A9F93E6183D0177 (Type_t* ___dest0, Type_t* ___src1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___dest0;
		Type_t* L_1 = ___src1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Type_t* L_3 = ___dest0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_5 = ___src1;
		NullCheck(L_5);
		bool L_6;
		L_6 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_5, NULL);
		if (L_6)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_7 = ___dest0;
		Type_t* L_8 = ___src1;
		NullCheck(L_7);
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(31 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_8);
		return L_9;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::IsSameOrSubclass(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_IsSameOrSubclass_m2753DDA9DCAF3CEEAFD39F275CAF99AD40AC50A9 (Type_t* ___type0, Type_t* ___subType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		Type_t* L_1 = ___subType1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_AreEquivalent_m0BABD4C82A94A96D19CCA4B9A7788B436049BC65(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		Type_t* L_3 = ___subType1;
		Type_t* L_4 = ___type0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(30 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_3, L_4);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils_ValidateType_mC8CEE431D520D99DDED2BC1D2694781E3F273D3A (Type_t* ___type0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		String_t* L_1 = ___paramName1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3(L_0, L_1, (bool)0, (bool)0, NULL);
		return;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3 (Type_t* ___type0, String_t* ___paramName1, bool ___allowByRef2, bool ___allowPointer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		String_t* L_1 = ___paramName1;
		il2cpp_codegen_runtime_class_init_inline(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB(L_0, L_1, (-1), NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3 = ___allowByRef2;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_4, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_6 = ___paramName1;
		Exception_t* L_7;
		L_7 = Error_TypeMustNotBeByRef_mC9A42A8B7A5F20813A4A3A0626BD8E4760FBFC0F(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_8 = ___allowPointer3;
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_9 = ___type0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Type_get_IsPointer_mC8AAAFEC4E4CEA59DAD0032B85D1BB224763278B(L_9, NULL);
		if (!L_10)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_11 = ___paramName1;
		Exception_t* L_12;
		L_12 = Error_TypeMustNotBePointer_mC8B6202CADBE91A5A33B51B02D67B073157E5AB8(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeUtils_ValidateType_m289873482475F37A660643924558D62430709AB3_RuntimeMethod_var)));
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils::ValidateType(System.Type,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB (Type_t* ___type0, String_t* ___paramName1, int32_t ___index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* G_B6_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		Type_t* L_6 = ___type0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(50 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_6);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_8 = ___type0;
		String_t* L_9 = ___paramName1;
		int32_t L_10 = ___index2;
		Exception_t* L_11;
		L_11 = Error_TypeContainsGenericParameters_m9469425747709B1D67698F586F698A5069A543FC(L_8, L_9, L_10, NULL);
		G_B6_0 = L_11;
		goto IL_0036;
	}

IL_002e:
	{
		Type_t* L_12 = ___type0;
		String_t* L_13 = ___paramName1;
		int32_t L_14 = ___index2;
		Exception_t* L_15;
		L_15 = Error_TypeIsGeneric_mBF50410FCB13BFC4ABC9988B318BB1F6866DBD72(L_12, L_13, L_14, NULL);
		G_B6_0 = L_15;
	}

IL_0036:
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(G_B6_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeUtils_ValidateType_mE94AD3C043E2FE6C32BBA6C1FC60D29CB2063AEB_RuntimeMethod_var)));
	}

IL_0037:
	{
		return (bool)1;
	}
}
// System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetInvokeMethod(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeUtils_GetInvokeMethod_m62AB477BF6415EEB6F7108534BAB598CA9CDCA02 (Type_t* ___delegateType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___delegateType0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_0, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, ((int32_t)52), NULL);
		return L_1;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtils__cctor_mB36C11550B01FFEAF9FC7B99967577D97A50C2ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(129 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* L_3 = ((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_4 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84_RuntimeMethod_var), NULL);
		RuntimeObject* L_5;
		L_5 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8((RuntimeObject*)L_2, L_4, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* L_6 = ((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD* L_7 = (Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD*)il2cpp_codegen_object_new(Func_2_tC19A706BD1F2C219A6333C8872754B909FD59ABD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m1697902B5A575D059320FCB1AD0B049A34A5FC77(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F(L_5, L_7, Enumerable_Select_TisType_t_TisType_t_mA23DABAE3023E25FB205F89A2D1F1DBE6576E51F_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9;
		L_9 = Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89(L_8, Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtils_t2C9FA7DD0D8907A05421D44B8E7F1D4F602C9FE7_il2cpp_TypeInfo_var))->___s_arrayAssignableInterfaces_0), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Dynamic.Utils.TypeUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2FDD430879029E78453E21DB26F2A00DE0196692 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* L_0 = (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E*)il2cpp_codegen_object_new(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1D47C37129713530A6B1FE13BCB381295704FD22(L_0, NULL);
		((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Dynamic.Utils.TypeUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1D47C37129713530A6B1FE13BCB381295704FD22 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean System.Dynamic.Utils.TypeUtils/<>c::<.cctor>b__44_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__44_0_m2BD6021A86F56FAF62819F3E8E5C646C33189C84 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, Type_t* ___i0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___i0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(49 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		return L_1;
	}
}
// System.Type System.Dynamic.Utils.TypeUtils/<>c::<.cctor>b__44_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3C_cctorU3Eb__44_1_mEC47DD3839EE48CD21585CB1ECD92E8D26693755 (U3CU3Ec_t5D488D45E7E9A7468509E0FA1FDFEE022913B16E* __this, Type_t* ___i0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___i0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(57 /* System.Type System.Type::GetGenericTypeDefinition() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryOperationBinder_get_Operation_mE6C2A55113BE1C09D47CC4C7478432C7896BA83D_inline (UnaryOperationBinder_t701A726B3ED70005D3C18637A7AE5AA96D8FABCE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COperationU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyInfo_t* IndexExpression_get_Indexer_m29EE5DA0A3D323D0CF2CA87F4661AE2D60DB707C_inline (IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___U3CIndexerU3Ek__BackingField_5;
		return L_0;
	}
}
