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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Google.FutureAPIImpl`1<Google.GoogleSignInUser>
struct FutureAPIImpl_1_tD2BEA1A0F33103285BA0A5722FD83824CB0E9850;
// Google.FutureAPIImpl`1<System.Object>
struct FutureAPIImpl_1_t654570F9C36FEFC5A0B976A002A012F840123B5B;
// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4;
// Google.Future`1<System.Object>
struct Future_1_t289EEEFD8E6D0352D1219292CDF55B36AF2F08DB;
// Google.GoogleSignIn
struct GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D;
// Google.GoogleSignIn/SignInException
struct SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A;
// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549;
// Google.GoogleSignInUser
struct GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA;
// Google.ISignInImpl
struct ISignInImpl_t3604BCF69AB3B07384BEB75B4437C4010DA3254E;
// Google.Impl.BaseObject
struct BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58;
// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398;
// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA;
// Google.Impl.NativeFuture
struct NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1;
// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB;
// Google.Impl.SignInHelperObject
struct SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B;
// SignInSample.SigninSampleScript
struct SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t908E667C0E88FB5F3E695AB6002E8EED41C04125;
// System.AggregateException
struct AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t2281FCF251CD51C1F13587450034F0E08EBFAD0E;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t79A79A556E69BA20A09771D2D61B0440B6F4EFBA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Func_2_t61C70E82BD07CFF19174F47713BF4A14DD48C6F6;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_tC3280D64D358F47EA4DAF1A65609BA0FC081888A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Google.GoogleSignInUser>
struct TaskFactory_1_tB442F9081D8525645240982C4D29CBC1EAD481D0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549_il2cpp_TypeInfo_var;
extern RuntimeClass* GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA_il2cpp_TypeInfo_var;
extern RuntimeClass* GoogleSignInStatusCode_t2837DED0E111FF726B18AC4DE50749525434A498_il2cpp_TypeInfo_var;
extern RuntimeClass* GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA_il2cpp_TypeInfo_var;
extern RuntimeClass* GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var;
extern RuntimeClass* HandleRef_t876E76124F400D12395BF61D562162AB6822204A_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2281FCF251CD51C1F13587450034F0E08EBFAD0E_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* ISignInImpl_t3604BCF69AB3B07384BEB75B4437C4010DA3254E_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
extern RuntimeClass* NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var;
extern RuntimeClass* SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A_il2cpp_TypeInfo_var;
extern RuntimeClass* SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB_il2cpp_TypeInfo_var;
extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral088FDEBADA12E1B1AEE1D3A6578901C3DF328020;
extern String_t* _stringLiteral0AB8318ACAF6E678DD02E2B5C343ED41111B393D;
extern String_t* _stringLiteral1CE581D8A0DCDBA5FAD4F55CFD4974CC6E2905D0;
extern String_t* _stringLiteral282490C4CF823F687ADC8603271E3C90F3632101;
extern String_t* _stringLiteral56C69436806919D454318C6984F1B71F94F1D325;
extern String_t* _stringLiteral5A25DE8F38C8CED002290C886DCCC5D50BEE1FA8;
extern String_t* _stringLiteral5CDF9266916389F18D58D8F7CBD9E3252613A537;
extern String_t* _stringLiteral60539BD65432F2FB4D0093D0B7ACF88E0DA89578;
extern String_t* _stringLiteral7C61CBAB7C24FAF3829E9FA1AEFDC67979CCBD63;
extern String_t* _stringLiteral820C429B8E1084817A33F29F6A3A7FC81F68AB23;
extern String_t* _stringLiteral8F2BA6E2403DEF290CB19107E6826BC9CB3C6CD1;
extern String_t* _stringLiteral99287FB0EE491B274426C590EB12A65D367BCEF4;
extern String_t* _stringLiteral9F5A05AC2A9BE649AAE1FC71180F6D42724CEA90;
extern String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralBEE93CDB8B9758ECBFBA313D3537F18207B32078;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralF840AC65B3E56CBE7D49F5922CE51270404EC62C;
extern const RuntimeMethod* Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5_RuntimeMethod_var;
extern const RuntimeMethod* BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_RuntimeMethod_var;
extern const RuntimeMethod* Future_1_WaitForResult_mECF147CF5048667CE8906A5B4F00FDBCEBE34B71_RuntimeMethod_var;
extern const RuntimeMethod* Future_1__ctor_mF95F9F09947F4FEF4D80671FEE5C18EA1CCCEFC7_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_mA66448456E915BA77BF55CDC69F85681167A6F77_RuntimeMethod_var;
extern const RuntimeMethod* GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_mFE90A979FA6361694B71C6CCED7EA30F4BA63E8E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA_RuntimeMethod_var;
extern const RuntimeMethod* SigninSampleScript_OnAuthenticationFinished_m90A4843E1B63665DA1C2D641DD96DF3B7FC808EE_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m10B630DD0B6209D61A4C5638EFD2DE9272D707F6_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m38DF69D0C0648791DE3F8F7E407DB4CE6104ABC9_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_get_Result_m59E378EB6EB7F6762F9D11E67633B306ADB105AB_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_m0488B6F62D8F9DDA9FAA644D206672FE0B78FE3B_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_mCD8F9EE02A64ECA8F009B69E40E92EF34F7FA7BA_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_mD07C7B96CDD7481FEFD0857EDAF93322D87F03F9_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m1E18BC80D4C980A9598F37D6CCB2F5EF042C928A_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mF4047BDE4B60E1D45D13E999538543FA2EDAD9D7_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mE4FFE90CBE595A2A7C3F7CED1CA8F3843CF8724E_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m0C108B8A66CEEFC1C99983A8F5D7221CD654D8F7_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_m667F1494F9DDD2B28A3DF88450F9941E0D62DF84_RuntimeMethod_var;
extern const uint32_t BaseObject_Dispose_m077D5087794F205A45192524ACEC2DCF0C6921FD_MetadataUsageId;
extern const uint32_t BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F_MetadataUsageId;
extern const uint32_t BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD_MetadataUsageId;
extern const uint32_t GoogleSignInImpl_GetPlayerActivity_mF99E11AE376740EDC7BC521C6C05CF637E2828D7_MetadataUsageId;
extern const uint32_t GoogleSignInImpl_SignInSilently_m5C72C882D2E5C396FA200D7007D188127CF9B01E_MetadataUsageId;
extern const uint32_t GoogleSignInImpl_SignIn_m7787A330212769B4D806D796FC48843771ECB468_MetadataUsageId;
extern const uint32_t GoogleSignInImpl__ctor_mF759F8A08E14AA001C192F5EFB68C483555B21FE_MetadataUsageId;
extern const uint32_t GoogleSignIn_Disconnect_m2E4D222974D1B8A7CB1E57A2FA305066F8A93CF9_MetadataUsageId;
extern const uint32_t GoogleSignIn_EnableDebugLogging_mCEF0C0028CE3E6890589AA8A70215417FA15B528_MetadataUsageId;
extern const uint32_t GoogleSignIn_SignInSilently_mF221E10D0C94763B618484F93AB77C1F95BCC3EB_MetadataUsageId;
extern const uint32_t GoogleSignIn_SignIn_mE9F0C392F8B86CB7C46F8E1EC983E1B5BB9108EB_MetadataUsageId;
extern const uint32_t GoogleSignIn_SignOut_m635410E98A824140BD617A0D05F0E74B58479716_MetadataUsageId;
extern const uint32_t GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB_MetadataUsageId;
extern const uint32_t GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211_MetadataUsageId;
extern const uint32_t GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212_MetadataUsageId;
extern const uint32_t NativeFuture__ctor_m1A8B35B3CD8F4E2BA29CC9CA765F667FE59552B3_MetadataUsageId;
extern const uint32_t NativeFuture_get_Result_mF94B7E42DFB633E3B720156639F28779E4330D04_MetadataUsageId;
extern const uint32_t OutStringMethod_BeginInvoke_mD9A789A1BD908A12222C4B4C045BC369780D0D14_MetadataUsageId;
extern const uint32_t SignInException__ctor_m25ECD7A759A95EA092F9B61A9FFD860AA0968655_MetadataUsageId;
extern const uint32_t SignInException__ctor_m51EA52B5539BA734E176044BF64B33EAEBE4C704_MetadataUsageId;
extern const uint32_t SignInException__ctor_m7FA9859CB2770E9F52D3A8E9951806A672E1D87C_MetadataUsageId;
extern const uint32_t SignInException__ctor_m97ACE3DD3630B83C8FE8D23F54CDD86B007C9AFD_MetadataUsageId;
extern const uint32_t SignInHelperObject_get_Instance_m1B434A62D608912879EE653C4DD60E922F3C478D_MetadataUsageId;
extern const uint32_t SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F_MetadataUsageId;
extern const uint32_t SigninSampleScript_Awake_m3AF4C34589E36729109915FE58A4C7F81A165FF6_MetadataUsageId;
extern const uint32_t SigninSampleScript_OnAuthenticationFinished_m90A4843E1B63665DA1C2D641DD96DF3B7FC808EE_MetadataUsageId;
extern const uint32_t SigninSampleScript_OnDisconnect_m960798AE4B9246222EC50E411BCEE5AA2A0E19FA_MetadataUsageId;
extern const uint32_t SigninSampleScript_OnGamesSignIn_m9BC1B75E6B65B12D497CCDE0CEB37FEEED104A41_MetadataUsageId;
extern const uint32_t SigninSampleScript_OnSignInSilently_m30E9238321108BBA07D29C3A1611199ACEFA34B1_MetadataUsageId;
extern const uint32_t SigninSampleScript_OnSignIn_mAD1570AAF1DEA6D267F616992A480B4AFF349276_MetadataUsageId;
extern const uint32_t SigninSampleScript_OnSignOut_mF9877343FCC0B01C446A3DFAA2E44444F3F2C558_MetadataUsageId;
extern const uint32_t SigninSampleScript__ctor_m4517A15D46A4192E53B4995EC4C8AC5024B1F3B9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef FUTURE_1_T970F8499EC59AE9E82496179CA844C05085C42F4_H
#define FUTURE_1_T970F8499EC59AE9E82496179CA844C05085C42F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Future`1<Google.GoogleSignInUser>
struct  Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4  : public RuntimeObject
{
public:
	// Google.FutureAPIImpl`1<T> Google.Future`1::apiImpl
	RuntimeObject* ___apiImpl_0;

public:
	inline static int32_t get_offset_of_apiImpl_0() { return static_cast<int32_t>(offsetof(Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4, ___apiImpl_0)); }
	inline RuntimeObject* get_apiImpl_0() const { return ___apiImpl_0; }
	inline RuntimeObject** get_address_of_apiImpl_0() { return &___apiImpl_0; }
	inline void set_apiImpl_0(RuntimeObject* value)
	{
		___apiImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___apiImpl_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTURE_1_T970F8499EC59AE9E82496179CA844C05085C42F4_H
#ifndef GOOGLESIGNIN_TA93945B9EF7ED0D67197795235E4832304B4170D_H
#define GOOGLESIGNIN_TA93945B9EF7ED0D67197795235E4832304B4170D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.GoogleSignIn
struct  GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D  : public RuntimeObject
{
public:
	// Google.ISignInImpl Google.GoogleSignIn::impl
	RuntimeObject* ___impl_2;

public:
	inline static int32_t get_offset_of_impl_2() { return static_cast<int32_t>(offsetof(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D, ___impl_2)); }
	inline RuntimeObject* get_impl_2() const { return ___impl_2; }
	inline RuntimeObject** get_address_of_impl_2() { return &___impl_2; }
	inline void set_impl_2(RuntimeObject* value)
	{
		___impl_2 = value;
		Il2CppCodeGenWriteBarrier((&___impl_2), value);
	}
};

struct GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields
{
public:
	// Google.GoogleSignIn Google.GoogleSignIn::theInstance
	GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * ___theInstance_0;
	// Google.GoogleSignInConfiguration Google.GoogleSignIn::theConfiguration
	GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * ___theConfiguration_1;

public:
	inline static int32_t get_offset_of_theInstance_0() { return static_cast<int32_t>(offsetof(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields, ___theInstance_0)); }
	inline GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * get_theInstance_0() const { return ___theInstance_0; }
	inline GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D ** get_address_of_theInstance_0() { return &___theInstance_0; }
	inline void set_theInstance_0(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * value)
	{
		___theInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___theInstance_0), value);
	}

	inline static int32_t get_offset_of_theConfiguration_1() { return static_cast<int32_t>(offsetof(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields, ___theConfiguration_1)); }
	inline GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * get_theConfiguration_1() const { return ___theConfiguration_1; }
	inline GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 ** get_address_of_theConfiguration_1() { return &___theConfiguration_1; }
	inline void set_theConfiguration_1(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * value)
	{
		___theConfiguration_1 = value;
		Il2CppCodeGenWriteBarrier((&___theConfiguration_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLESIGNIN_TA93945B9EF7ED0D67197795235E4832304B4170D_H
#ifndef GOOGLESIGNINCONFIGURATION_T4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549_H
#define GOOGLESIGNINCONFIGURATION_T4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.GoogleSignInConfiguration
struct  GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549  : public RuntimeObject
{
public:
	// System.Boolean Google.GoogleSignInConfiguration::UseGameSignIn
	bool ___UseGameSignIn_0;
	// System.String Google.GoogleSignInConfiguration::WebClientId
	String_t* ___WebClientId_1;
	// System.Boolean Google.GoogleSignInConfiguration::RequestAuthCode
	bool ___RequestAuthCode_2;
	// System.Boolean Google.GoogleSignInConfiguration::ForceTokenRefresh
	bool ___ForceTokenRefresh_3;
	// System.Boolean Google.GoogleSignInConfiguration::RequestEmail
	bool ___RequestEmail_4;
	// System.Boolean Google.GoogleSignInConfiguration::RequestIdToken
	bool ___RequestIdToken_5;
	// System.Boolean Google.GoogleSignInConfiguration::RequestProfile
	bool ___RequestProfile_6;
	// System.Boolean Google.GoogleSignInConfiguration::HidePopups
	bool ___HidePopups_7;
	// System.String Google.GoogleSignInConfiguration::AccountName
	String_t* ___AccountName_8;
	// System.Collections.Generic.IEnumerable`1<System.String> Google.GoogleSignInConfiguration::AdditionalScopes
	RuntimeObject* ___AdditionalScopes_9;

public:
	inline static int32_t get_offset_of_UseGameSignIn_0() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___UseGameSignIn_0)); }
	inline bool get_UseGameSignIn_0() const { return ___UseGameSignIn_0; }
	inline bool* get_address_of_UseGameSignIn_0() { return &___UseGameSignIn_0; }
	inline void set_UseGameSignIn_0(bool value)
	{
		___UseGameSignIn_0 = value;
	}

	inline static int32_t get_offset_of_WebClientId_1() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___WebClientId_1)); }
	inline String_t* get_WebClientId_1() const { return ___WebClientId_1; }
	inline String_t** get_address_of_WebClientId_1() { return &___WebClientId_1; }
	inline void set_WebClientId_1(String_t* value)
	{
		___WebClientId_1 = value;
		Il2CppCodeGenWriteBarrier((&___WebClientId_1), value);
	}

	inline static int32_t get_offset_of_RequestAuthCode_2() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___RequestAuthCode_2)); }
	inline bool get_RequestAuthCode_2() const { return ___RequestAuthCode_2; }
	inline bool* get_address_of_RequestAuthCode_2() { return &___RequestAuthCode_2; }
	inline void set_RequestAuthCode_2(bool value)
	{
		___RequestAuthCode_2 = value;
	}

	inline static int32_t get_offset_of_ForceTokenRefresh_3() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___ForceTokenRefresh_3)); }
	inline bool get_ForceTokenRefresh_3() const { return ___ForceTokenRefresh_3; }
	inline bool* get_address_of_ForceTokenRefresh_3() { return &___ForceTokenRefresh_3; }
	inline void set_ForceTokenRefresh_3(bool value)
	{
		___ForceTokenRefresh_3 = value;
	}

	inline static int32_t get_offset_of_RequestEmail_4() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___RequestEmail_4)); }
	inline bool get_RequestEmail_4() const { return ___RequestEmail_4; }
	inline bool* get_address_of_RequestEmail_4() { return &___RequestEmail_4; }
	inline void set_RequestEmail_4(bool value)
	{
		___RequestEmail_4 = value;
	}

	inline static int32_t get_offset_of_RequestIdToken_5() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___RequestIdToken_5)); }
	inline bool get_RequestIdToken_5() const { return ___RequestIdToken_5; }
	inline bool* get_address_of_RequestIdToken_5() { return &___RequestIdToken_5; }
	inline void set_RequestIdToken_5(bool value)
	{
		___RequestIdToken_5 = value;
	}

	inline static int32_t get_offset_of_RequestProfile_6() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___RequestProfile_6)); }
	inline bool get_RequestProfile_6() const { return ___RequestProfile_6; }
	inline bool* get_address_of_RequestProfile_6() { return &___RequestProfile_6; }
	inline void set_RequestProfile_6(bool value)
	{
		___RequestProfile_6 = value;
	}

	inline static int32_t get_offset_of_HidePopups_7() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___HidePopups_7)); }
	inline bool get_HidePopups_7() const { return ___HidePopups_7; }
	inline bool* get_address_of_HidePopups_7() { return &___HidePopups_7; }
	inline void set_HidePopups_7(bool value)
	{
		___HidePopups_7 = value;
	}

	inline static int32_t get_offset_of_AccountName_8() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___AccountName_8)); }
	inline String_t* get_AccountName_8() const { return ___AccountName_8; }
	inline String_t** get_address_of_AccountName_8() { return &___AccountName_8; }
	inline void set_AccountName_8(String_t* value)
	{
		___AccountName_8 = value;
		Il2CppCodeGenWriteBarrier((&___AccountName_8), value);
	}

	inline static int32_t get_offset_of_AdditionalScopes_9() { return static_cast<int32_t>(offsetof(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549, ___AdditionalScopes_9)); }
	inline RuntimeObject* get_AdditionalScopes_9() const { return ___AdditionalScopes_9; }
	inline RuntimeObject** get_address_of_AdditionalScopes_9() { return &___AdditionalScopes_9; }
	inline void set_AdditionalScopes_9(RuntimeObject* value)
	{
		___AdditionalScopes_9 = value;
		Il2CppCodeGenWriteBarrier((&___AdditionalScopes_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLESIGNINCONFIGURATION_T4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549_H
#ifndef GOOGLESIGNINUSER_T9E5B8CB66EDF3C857859B2981E29E60DF42757EA_H
#define GOOGLESIGNINUSER_T9E5B8CB66EDF3C857859B2981E29E60DF42757EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.GoogleSignInUser
struct  GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA  : public RuntimeObject
{
public:
	// System.String Google.GoogleSignInUser::<AuthCode>k__BackingField
	String_t* ___U3CAuthCodeU3Ek__BackingField_0;
	// System.String Google.GoogleSignInUser::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_1;
	// System.String Google.GoogleSignInUser::<IdToken>k__BackingField
	String_t* ___U3CIdTokenU3Ek__BackingField_2;
	// System.String Google.GoogleSignInUser::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Google.GoogleSignInUser::<GivenName>k__BackingField
	String_t* ___U3CGivenNameU3Ek__BackingField_4;
	// System.String Google.GoogleSignInUser::<FamilyName>k__BackingField
	String_t* ___U3CFamilyNameU3Ek__BackingField_5;
	// System.Uri Google.GoogleSignInUser::<ImageUrl>k__BackingField
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___U3CImageUrlU3Ek__BackingField_6;
	// System.String Google.GoogleSignInUser::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CAuthCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CAuthCodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CAuthCodeU3Ek__BackingField_0() const { return ___U3CAuthCodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAuthCodeU3Ek__BackingField_0() { return &___U3CAuthCodeU3Ek__BackingField_0; }
	inline void set_U3CAuthCodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CAuthCodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthCodeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CEmailU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CEmailU3Ek__BackingField_1)); }
	inline String_t* get_U3CEmailU3Ek__BackingField_1() const { return ___U3CEmailU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CEmailU3Ek__BackingField_1() { return &___U3CEmailU3Ek__BackingField_1; }
	inline void set_U3CEmailU3Ek__BackingField_1(String_t* value)
	{
		___U3CEmailU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEmailU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CIdTokenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CIdTokenU3Ek__BackingField_2)); }
	inline String_t* get_U3CIdTokenU3Ek__BackingField_2() const { return ___U3CIdTokenU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CIdTokenU3Ek__BackingField_2() { return &___U3CIdTokenU3Ek__BackingField_2; }
	inline void set_U3CIdTokenU3Ek__BackingField_2(String_t* value)
	{
		___U3CIdTokenU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIdTokenU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CDisplayNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CDisplayNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CDisplayNameU3Ek__BackingField_3() const { return ___U3CDisplayNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDisplayNameU3Ek__BackingField_3() { return &___U3CDisplayNameU3Ek__BackingField_3; }
	inline void set_U3CDisplayNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CDisplayNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDisplayNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CGivenNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CGivenNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CGivenNameU3Ek__BackingField_4() const { return ___U3CGivenNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CGivenNameU3Ek__BackingField_4() { return &___U3CGivenNameU3Ek__BackingField_4; }
	inline void set_U3CGivenNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CGivenNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGivenNameU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CFamilyNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CFamilyNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CFamilyNameU3Ek__BackingField_5() const { return ___U3CFamilyNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CFamilyNameU3Ek__BackingField_5() { return &___U3CFamilyNameU3Ek__BackingField_5; }
	inline void set_U3CFamilyNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CFamilyNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFamilyNameU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CImageUrlU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CImageUrlU3Ek__BackingField_6)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_U3CImageUrlU3Ek__BackingField_6() const { return ___U3CImageUrlU3Ek__BackingField_6; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_U3CImageUrlU3Ek__BackingField_6() { return &___U3CImageUrlU3Ek__BackingField_6; }
	inline void set_U3CImageUrlU3Ek__BackingField_6(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___U3CImageUrlU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CImageUrlU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA, ___U3CUserIdU3Ek__BackingField_7)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_7() const { return ___U3CUserIdU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_7() { return &___U3CUserIdU3Ek__BackingField_7; }
	inline void set_U3CUserIdU3Ek__BackingField_7(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIdU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLESIGNINUSER_T9E5B8CB66EDF3C857859B2981E29E60DF42757EA_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#define LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifndef READONLYCOLLECTION_1_T6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8_H
#define READONLYCOLLECTION_1_T6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#define SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_members_3)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_3), value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_data_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_4), value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_types_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_5), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_nameToIndex_6)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_6), value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_8), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_9), value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_10), value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_11), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#define ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_H
#ifndef TASKCOMPLETIONSOURCE_1_TED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44_H
#define TASKCOMPLETIONSOURCE_1_TED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct  TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44, ___m_task_0)); }
	inline Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_TED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef AGGREGATEEXCEPTION_T9217B9E89DF820D5632411F2BD92F444B17BD60E_H
#define AGGREGATEEXCEPTION_T9217B9E89DF820D5632411F2BD92F444B17BD60E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AggregateException
struct  AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerExceptions_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEEXCEPTION_T9217B9E89DF820D5632411F2BD92F444B17BD60E_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_TBBAAE521602D26DCD42E467CF939632DC01EF813_H
#define ENUMERATOR_TBBAAE521602D26DCD42E467CF939632DC01EF813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.String>
struct  Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___list_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_list_0() const { return ___list_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TBBAAE521602D26DCD42E467CF939632DC01EF813_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef GOOGLESIGNINSTATUSCODE_T2837DED0E111FF726B18AC4DE50749525434A498_H
#define GOOGLESIGNINSTATUSCODE_T2837DED0E111FF726B18AC4DE50749525434A498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.GoogleSignInStatusCode
struct  GoogleSignInStatusCode_t2837DED0E111FF726B18AC4DE50749525434A498 
{
public:
	// System.Int32 Google.GoogleSignInStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GoogleSignInStatusCode_t2837DED0E111FF726B18AC4DE50749525434A498, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLESIGNINSTATUSCODE_T2837DED0E111FF726B18AC4DE50749525434A498_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef HANDLEREF_T876E76124F400D12395BF61D562162AB6822204A_H
#define HANDLEREF_T876E76124F400D12395BF61D562162AB6822204A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrapper_0), value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEREF_T876E76124F400D12395BF61D562162AB6822204A_H
#ifndef STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#define STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#ifndef TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#define TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifndef FLAGS_TEBE7CABEBD13F16920D6950B384EB8F988250A2A_H
#define FLAGS_TEBE7CABEBD13F16920D6950B384EB8F988250A2A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_TEBE7CABEBD13F16920D6950B384EB8F988250A2A_H
#ifndef URIIDNSCOPE_TE1574B39C7492C761EFE2FC12DDE82DE013AC9D1_H
#define URIIDNSCOPE_TE1574B39C7492C761EFE2FC12DDE82DE013AC9D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIIDNSCOPE_TE1574B39C7492C761EFE2FC12DDE82DE013AC9D1_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef SIGNINEXCEPTION_T612D589CD9823EF04AD3822C8D2969DFADFD5E4A_H
#define SIGNINEXCEPTION_T612D589CD9823EF04AD3822C8D2969DFADFD5E4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.GoogleSignIn_SignInException
struct  SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A  : public Exception_t
{
public:
	// Google.GoogleSignInStatusCode Google.GoogleSignIn_SignInException::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A, ___U3CStatusU3Ek__BackingField_17)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_17() const { return ___U3CStatusU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_17() { return &___U3CStatusU3Ek__BackingField_17; }
	inline void set_U3CStatusU3Ek__BackingField_17(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNINEXCEPTION_T612D589CD9823EF04AD3822C8D2969DFADFD5E4A_H
#ifndef BASEOBJECT_TAF7C7195FF2963B435A94CA10593DF65B0D8DB58_H
#define BASEOBJECT_TAF7C7195FF2963B435A94CA10593DF65B0D8DB58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Impl.BaseObject
struct  BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::selfHandleRef
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___selfHandleRef_0;

public:
	inline static int32_t get_offset_of_selfHandleRef_0() { return static_cast<int32_t>(offsetof(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58, ___selfHandleRef_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_selfHandleRef_0() const { return ___selfHandleRef_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_selfHandleRef_0() { return &___selfHandleRef_0; }
	inline void set_selfHandleRef_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___selfHandleRef_0 = value;
	}
};

struct BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_StaticFields
{
public:
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::nullSelf
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___nullSelf_1;

public:
	inline static int32_t get_offset_of_nullSelf_1() { return static_cast<int32_t>(offsetof(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_StaticFields, ___nullSelf_1)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_nullSelf_1() const { return ___nullSelf_1; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_nullSelf_1() { return &___nullSelf_1; }
	inline void set_nullSelf_1(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___nullSelf_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEOBJECT_TAF7C7195FF2963B435A94CA10593DF65B0D8DB58_H
#ifndef U3CU3EC__DISPLAYCLASS5_0_T54E6A9BACD8631AABA5E60F17AEFD99119F264EB_H
#define U3CU3EC__DISPLAYCLASS5_0_T54E6A9BACD8631AABA5E60F17AEFD99119F264EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Impl.NativeFuture_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Google.Impl.NativeFuture_<>c__DisplayClass5_0::userPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___userPtr_0;

public:
	inline static int32_t get_offset_of_userPtr_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB, ___userPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_userPtr_0() const { return ___userPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_userPtr_0() { return &___userPtr_0; }
	inline void set_userPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___userPtr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS5_0_T54E6A9BACD8631AABA5E60F17AEFD99119F264EB_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#define STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#ifndef TASK_1_TC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401_H
#define TASK_1_TC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct  Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401, ___m_result_22)); }
	inline GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * get_m_result_22() const { return ___m_result_22; }
	inline GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB442F9081D8525645240982C4D29CBC1EAD481D0 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t61C70E82BD07CFF19174F47713BF4A14DD48C6F6 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tB442F9081D8525645240982C4D29CBC1EAD481D0 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tB442F9081D8525645240982C4D29CBC1EAD481D0 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tB442F9081D8525645240982C4D29CBC1EAD481D0 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t61C70E82BD07CFF19174F47713BF4A14DD48C6F6 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t61C70E82BD07CFF19174F47713BF4A14DD48C6F6 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t61C70E82BD07CFF19174F47713BF4A14DD48C6F6 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_TC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401_H
#ifndef URI_T87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_H
#define URI_T87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_String_13), value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_originalUnicodeString_14), value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Syntax_15), value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_DnsSafeHost_16), value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_18)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_18), value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_0), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_1), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_2), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_3), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_4), value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWs_5), value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWss_6), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_7), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_8), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_9), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_10), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_11), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_12), value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((&___s_initLock_26), value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((&___HexLowerChars_27), value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((&____WSchars_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef OUTSTRINGMETHOD_T9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_H
#define OUTSTRINGMETHOD_T9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Impl.BaseObject_OutStringMethod
struct  OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTSTRINGMETHOD_T9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_H
#ifndef GOOGLESIGNINIMPL_T5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA_H
#define GOOGLESIGNINIMPL_T5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Impl.GoogleSignInImpl
struct  GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA  : public BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLESIGNINIMPL_T5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA_H
#ifndef NATIVEFUTURE_T237F19949AA3E4CDFA1311011265C2A65A2564C1_H
#define NATIVEFUTURE_T237F19949AA3E4CDFA1311011265C2A65A2564C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Impl.NativeFuture
struct  NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1  : public BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEFUTURE_T237F19949AA3E4CDFA1311011265C2A65A2564C1_H
#ifndef ACTION_1_T328A99B8F629251FA65120BA1BB1DA8F99F75B49_H
#define ACTION_1_T328A99B8F629251FA65120BA1BB1DA8F99F75B49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct  Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T328A99B8F629251FA65120BA1BB1DA8F99F75B49_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef SIGNINHELPEROBJECT_T5B074CDC927F8B8AD84D63896123CF137EDE412B_H
#define SIGNINHELPEROBJECT_T5B074CDC927F8B8AD84D63896123CF137EDE412B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Impl.SignInHelperObject
struct  SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_StaticFields
{
public:
	// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::instance
	SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_StaticFields, ___instance_4)); }
	inline SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * get_instance_4() const { return ___instance_4; }
	inline SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNINHELPEROBJECT_T5B074CDC927F8B8AD84D63896123CF137EDE412B_H
#ifndef SIGNINSAMPLESCRIPT_T87DCB9DFF79F13DF167282787E1D9E98022D98D5_H
#define SIGNINSAMPLESCRIPT_T87DCB9DFF79F13DF167282787E1D9E98022D98D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SignInSample.SigninSampleScript
struct  SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text SignInSample.SigninSampleScript::statusText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___statusText_4;
	// System.String SignInSample.SigninSampleScript::webClientId
	String_t* ___webClientId_5;
	// Google.GoogleSignInConfiguration SignInSample.SigninSampleScript::configuration
	GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * ___configuration_6;
	// System.Collections.Generic.List`1<System.String> SignInSample.SigninSampleScript::messages
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___messages_7;

public:
	inline static int32_t get_offset_of_statusText_4() { return static_cast<int32_t>(offsetof(SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5, ___statusText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_statusText_4() const { return ___statusText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_statusText_4() { return &___statusText_4; }
	inline void set_statusText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___statusText_4 = value;
		Il2CppCodeGenWriteBarrier((&___statusText_4), value);
	}

	inline static int32_t get_offset_of_webClientId_5() { return static_cast<int32_t>(offsetof(SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5, ___webClientId_5)); }
	inline String_t* get_webClientId_5() const { return ___webClientId_5; }
	inline String_t** get_address_of_webClientId_5() { return &___webClientId_5; }
	inline void set_webClientId_5(String_t* value)
	{
		___webClientId_5 = value;
		Il2CppCodeGenWriteBarrier((&___webClientId_5), value);
	}

	inline static int32_t get_offset_of_configuration_6() { return static_cast<int32_t>(offsetof(SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5, ___configuration_6)); }
	inline GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * get_configuration_6() const { return ___configuration_6; }
	inline GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 ** get_address_of_configuration_6() { return &___configuration_6; }
	inline void set_configuration_6(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * value)
	{
		___configuration_6 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_6), value);
	}

	inline static int32_t get_offset_of_messages_7() { return static_cast<int32_t>(offsetof(SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5, ___messages_7)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_messages_7() const { return ___messages_7; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_messages_7() { return &___messages_7; }
	inline void set_messages_7(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___messages_7 = value;
		Il2CppCodeGenWriteBarrier((&___messages_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNINSAMPLESCRIPT_T87DCB9DFF79F13DF167282787E1D9E98022D98D5_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mF00EC0A0D14A3499A1112ED147FC7464D49675F6_gshared (TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Google.Future`1<System.Object>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Future_1_WaitForResult_m5EE99CF9A438AD5117F6FA248857F20C969DC89A_gshared (Future_1_t289EEEFD8E6D0352D1219292CDF55B36AF2F08DB * __this, TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * TaskCompletionSource_1_get_Task_mA7C2FA47C37BF0A144EE020746831B5D470713F3_gshared (TaskCompletionSource_1_t14F1BF069865ED085DD30781CAD679CB0FC447F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void Google.Future`1<System.Object>::.ctor(Google.FutureAPIImpl`1<T>)
extern "C" IL2CPP_METHOD_ATTR void Future_1__ctor_m67F42723F9CA0EA80A671E4FD638046EAEC9903A_gshared (Future_1_t289EEEFD8E6D0352D1219292CDF55B36AF2F08DB * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_1_ContinueWith_m33B581B45DFC4F56DC0223D93226C0C5F15EEDFF_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, Action_1_t908E667C0E88FB5F3E695AB6002E8EED41C04125 * p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_mAD46EEA8AC8A79EC5248FF813DEBD6D4E5CC3ED9_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
extern "C" IL2CPP_METHOD_ATTR void SignInException__ctor_m7FA9859CB2770E9F52D3A8E9951806A672E1D87C (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method);
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
extern "C" IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB (const RuntimeMethod* method);
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_mF759F8A08E14AA001C192F5EFB68C483555B21FE (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * __this, GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * ___configuration0, const RuntimeMethod* method);
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_mBEC0288E68795D09F61B508300B5A4CE54D49DFA (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * ___impl0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m10B630DD0B6209D61A4C5638EFD2DE9272D707F6 (TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_mF00EC0A0D14A3499A1112ED147FC7464D49675F6_gshared)(__this, method);
}
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
extern "C" IL2CPP_METHOD_ATTR SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * SignInHelperObject_get_Instance_m1B434A62D608912879EE653C4DD60E922F3C478D (const RuntimeMethod* method);
// System.Collections.IEnumerator Google.Future`1<Google.GoogleSignInUser>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
inline RuntimeObject* Future_1_WaitForResult_mECF147CF5048667CE8906A5B4F00FDBCEBE34B71 (Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * __this, TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 *, TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 *, const RuntimeMethod*))Future_1_WaitForResult_m5EE99CF9A438AD5117F6FA248857F20C969DC89A_gshared)(__this, p0, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::get_Task()
inline Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * TaskCompletionSource_1_get_Task_m38DF69D0C0648791DE3F8F7E407DB4CE6104ABC9 (TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * (*) (TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mA7C2FA47C37BF0A144EE020746831B5D470713F3_gshared)(__this, method);
}
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
extern "C" IL2CPP_METHOD_ATTR void SignInException_set_Status_m5BA5A7B7F58093BD5CA4F1F0D34EF96FDD152631 (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_mBFF5996A1B65FCEEE0054A95A652BA3DD6366618 (Exception_t * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * p0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_mC070F6591EF83219D9BDFD660670212B52C99A2F (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method);
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB (uintptr_t* __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::ToUInt32()
extern "C" IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_m1A1DEF1D57AD95FE4374C90E89F1DF4EB54C5C6C (uintptr_t* __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_mF99E11AE376740EDC7BC521C6C05CF637E2828D7 (const RuntimeMethod* method);
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m1671826F6048ED4B6B01112F736CD5CDC5EDA974 (intptr_t ___data0, const RuntimeMethod* method);
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void BaseObject__ctor_m71AB85E390DB719B6861CF492EB7AF7B256C507A (BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58 * __this, intptr_t ___intPtr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, p0, method);
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
extern "C" IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD (BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_m3B74C9454036A86DAD6CA32E9D3448B4B8070EF3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m17EF6EEC952908BC1B1F04B567351E0A3107D13B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, bool ___flag1, const RuntimeMethod* method);
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m4974A5B82A8D44B0DFDB8E97DC04CC0390BD4541 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeFuture__ctor_m1A8B35B3CD8F4E2BA29CC9CA765F667FE59552B3 (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * __this, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void Google.Future`1<Google.GoogleSignInUser>::.ctor(Google.FutureAPIImpl`1<T>)
inline void Future_1__ctor_mF95F9F09947F4FEF4D80671FEE5C18EA1CCCEFC7 (Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 *, RuntimeObject*, const RuntimeMethod*))Future_1__ctor_m67F42723F9CA0EA80A671E4FD638046EAEC9903A_gshared)(__this, p0, method);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_m4B837A1A34EB67F9EE0BE982DA801C3DBE5D8957 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mFD14EE690616692B13409AA0D336382DAF1AE176 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_mAC68665198F2E477273F3524E117C47F747D303C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_mBFF87CB523155C978CED3581F6B239896E02EAD7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.Void Google.Impl.BaseObject::Dispose()
extern "C" IL2CPP_METHOD_ATTR void BaseObject_Dispose_m077D5087794F205A45192524ACEC2DCF0C6921FD (BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58 * __this, const RuntimeMethod* method);
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mD4978ED3517D0BCCB602B31C3F0BAD93641A4348 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_mB0FBF0328AE56DA6E985FD61F079F8122650466C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mD50C727548FFB64D3D6BBB11DAF9C18A2DA0AFD0 (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m4945FF989877B72A88B2DD67ADF7C8BD148428F1 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method);
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0 (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
extern "C" IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * ___outStringMethod0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m04D843504F5F746C8F3A0B53AEE3392AACFD33BF (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_Email(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m29D1897B4D39055DB9C24FA21CE77934933F647A (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_mE8E14DB8A6F3157400DA6C5FD9ED0537D865C082 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m0DED82EB13EA50387BD3052D4FE3BEF59EE4013F (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_mFFCD3E95775388B0CA61E4A3B2556011A54F3E93 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_m9E3900F977E83B77874929313F75B57D46A02A42 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_mBB3653CE629F99EA05258156C912521A59B0FD0C (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method);
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_mDB1D26504AF910BE45D4D871583ED0B4F45BE713 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m843B7B35123ED5A9AE80F98C8332847BC6D8E7C8 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_m88D6C1B13E0B6144A4818AD59135EBC119045755 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mE1C992534F23CF7FCC318A5885AA38584A99EB47 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m8A40145BC61E8028F89AEC3334922F9E94F27042 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mB2B782111F8AEC775B4D17BE8C8D54CE9A5FFE11 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_mAEBC4D99C0F756D5EE9DEF45AC1A125C7F1208C5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m16F83AA7BC719FFD7BEA018EABA6A360782B58F1 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m7BBF78C1077263D4CA8E527973FE6AE8B36C7B42 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m1E22ED7022D1E60BE7EE96E0BA4EDF5F2D4B05A3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Google.Impl.SignInHelperObject>()
inline SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * GameObject_AddComponent_TisSignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_mA66448456E915BA77BF55CDC69F85681167A6F77 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m58204F4CFB147D372A2027685D5EC66F818C272E (SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Google.GoogleSignInConfiguration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m37C461AB6857BB33DAF60BAA8EC7354F003C023B (GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * __this, const RuntimeMethod* method);
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212 (GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * ___value0, const RuntimeMethod* method);
// System.Void SignInSample.SigninSampleScript::AddStatusText(System.String)
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, String_t* ___text0, const RuntimeMethod* method);
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211 (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
extern "C" IL2CPP_METHOD_ATTR Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * GoogleSignIn_SignIn_mE9F0C392F8B86CB7C46F8E1EC983E1B5BB9108EB (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5 (Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86 (Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * __this, Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 * p0, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 *, Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 *, const RuntimeMethod*))Task_1_ContinueWith_m33B581B45DFC4F56DC0223D93226C0C5F15EEDFF_gshared)(__this, p0, method);
}
// System.Void Google.GoogleSignIn::SignOut()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m635410E98A824140BD617A0D05F0E74B58479716 (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method);
// System.Void Google.GoogleSignIn::Disconnect()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_m2E4D222974D1B8A7CB1E57A2FA305066F8A93CF9 (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" IL2CPP_METHOD_ATTR AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * Task_get_Exception_mA61AAD3E52CBEB631D1956217B521456E7960B95 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * AggregateException_get_InnerExceptions_mB81D2B3BD56A3E938B83B0AF766474ED66057040 (AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA (ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared)(__this, method);
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m364855505A08930C7C676994FD8AF42862EC062F (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::get_Result()
inline GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * Task_1_get_Result_m59E378EB6EB7F6762F9D11E67633B306ADB105AB (Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * __this, const RuntimeMethod* method)
{
	return ((  GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * (*) (Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 *, const RuntimeMethod*))Task_1_get_Result_mAD46EEA8AC8A79EC5248FF813DEBD6D4E5CC3ED9_gshared)(__this, method);
}
// System.String Google.GoogleSignInUser::get_DisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_m8A1D231B59610E72DC008289A52E3C67739EE2AB (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
extern "C" IL2CPP_METHOD_ATTR Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * GoogleSignIn_SignInSilently_mF221E10D0C94763B618484F93AB77C1F95BCC3EB (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mFE90A979FA6361694B71C6CCED7EA30F4BA63E8E (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1EC5117AD814B97460F8F95D49A428032FE37CBF_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737 (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978 (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
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
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212 (GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_0 = ((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->get_theInstance_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_1 = ((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->get_theConfiguration_1();
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_2 = ___value0;
		if ((((RuntimeObject*)(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 *)L_1) == ((RuntimeObject*)(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 *)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_3 = ((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->get_theConfiguration_1();
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_4 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->set_theConfiguration_1(L_4);
		return;
	}

IL_001d:
	{
		SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * L_5 = (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A *)il2cpp_codegen_object_new(SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A_il2cpp_TypeInfo_var);
		SignInException__ctor_m7FA9859CB2770E9F52D3A8E9951806A672E1D87C(L_5, 6, _stringLiteral60539BD65432F2FB4D0093D0B7ACF88E0DA89578, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212_RuntimeMethod_var);
	}
}
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
extern "C" IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_0 = ((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->get_theConfiguration_1();
		return L_0;
	}
}
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_0 = ((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->get_theInstance_0();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_1 = GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB(/*hidden argument*/NULL);
		GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * L_2 = (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA *)il2cpp_codegen_object_new(GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA_il2cpp_TypeInfo_var);
		GoogleSignInImpl__ctor_mF759F8A08E14AA001C192F5EFB68C483555B21FE(L_2, L_1, /*hidden argument*/NULL);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_3 = (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D *)il2cpp_codegen_object_new(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn__ctor_mBEC0288E68795D09F61B508300B5A4CE54D49DFA(L_3, L_2, /*hidden argument*/NULL);
		((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->set_theInstance_0(L_3);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_4 = ((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->get_theInstance_0();
		return L_4;
	}
}
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_mBEC0288E68795D09F61B508300B5A4CE54D49DFA (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * ___impl0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * L_0 = ___impl0;
		__this->set_impl_2(L_0);
		return;
	}
}
// System.Void Google.GoogleSignIn::EnableDebugLogging(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn_EnableDebugLogging_mCEF0C0028CE3E6890589AA8A70215417FA15B528 (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_EnableDebugLogging_mCEF0C0028CE3E6890589AA8A70215417FA15B528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_impl_2();
		bool L_1 = ___flag0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Google.ISignInImpl::EnableDebugLogging(System.Boolean) */, ISignInImpl_t3604BCF69AB3B07384BEB75B4437C4010DA3254E_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
extern "C" IL2CPP_METHOD_ATTR Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * GoogleSignIn_SignIn_mE9F0C392F8B86CB7C46F8E1EC983E1B5BB9108EB (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_SignIn_mE9F0C392F8B86CB7C46F8E1EC983E1B5BB9108EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * V_0 = NULL;
	{
		TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * L_0 = (TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 *)il2cpp_codegen_object_new(TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m10B630DD0B6209D61A4C5638EFD2DE9272D707F6(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m10B630DD0B6209D61A4C5638EFD2DE9272D707F6_RuntimeMethod_var);
		V_0 = L_0;
		SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * L_1 = SignInHelperObject_get_Instance_m1B434A62D608912879EE653C4DD60E922F3C478D(/*hidden argument*/NULL);
		RuntimeObject* L_2 = __this->get_impl_2();
		NullCheck(L_2);
		Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * L_3 = InterfaceFuncInvoker0< Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * >::Invoke(0 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignIn() */, ISignInImpl_t3604BCF69AB3B07384BEB75B4437C4010DA3254E_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = Future_1_WaitForResult_mECF147CF5048667CE8906A5B4F00FDBCEBE34B71(L_3, L_4, /*hidden argument*/Future_1_WaitForResult_mECF147CF5048667CE8906A5B4F00FDBCEBE34B71_RuntimeMethod_var);
		NullCheck(L_1);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_1, L_5, /*hidden argument*/NULL);
		TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * L_6 = V_0;
		NullCheck(L_6);
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_7 = TaskCompletionSource_1_get_Task_m38DF69D0C0648791DE3F8F7E407DB4CE6104ABC9(L_6, /*hidden argument*/TaskCompletionSource_1_get_Task_m38DF69D0C0648791DE3F8F7E407DB4CE6104ABC9_RuntimeMethod_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
extern "C" IL2CPP_METHOD_ATTR Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * GoogleSignIn_SignInSilently_mF221E10D0C94763B618484F93AB77C1F95BCC3EB (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_SignInSilently_mF221E10D0C94763B618484F93AB77C1F95BCC3EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * V_0 = NULL;
	{
		TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * L_0 = (TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 *)il2cpp_codegen_object_new(TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m10B630DD0B6209D61A4C5638EFD2DE9272D707F6(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m10B630DD0B6209D61A4C5638EFD2DE9272D707F6_RuntimeMethod_var);
		V_0 = L_0;
		SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * L_1 = SignInHelperObject_get_Instance_m1B434A62D608912879EE653C4DD60E922F3C478D(/*hidden argument*/NULL);
		RuntimeObject* L_2 = __this->get_impl_2();
		NullCheck(L_2);
		Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * L_3 = InterfaceFuncInvoker0< Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * >::Invoke(1 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignInSilently() */, ISignInImpl_t3604BCF69AB3B07384BEB75B4437C4010DA3254E_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = Future_1_WaitForResult_mECF147CF5048667CE8906A5B4F00FDBCEBE34B71(L_3, L_4, /*hidden argument*/Future_1_WaitForResult_mECF147CF5048667CE8906A5B4F00FDBCEBE34B71_RuntimeMethod_var);
		NullCheck(L_1);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_1, L_5, /*hidden argument*/NULL);
		TaskCompletionSource_1_tED3A6CFAAEC20B0CE77D91F9AA2FB52A42BF2A44 * L_6 = V_0;
		NullCheck(L_6);
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_7 = TaskCompletionSource_1_get_Task_m38DF69D0C0648791DE3F8F7E407DB4CE6104ABC9(L_6, /*hidden argument*/TaskCompletionSource_1_get_Task_m38DF69D0C0648791DE3F8F7E407DB4CE6104ABC9_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Google.GoogleSignIn::SignOut()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m635410E98A824140BD617A0D05F0E74B58479716 (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_SignOut_m635410E98A824140BD617A0D05F0E74B58479716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		((GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var))->set_theConfiguration_1((GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 *)NULL);
		RuntimeObject* L_0 = __this->get_impl_2();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Google.ISignInImpl::SignOut() */, ISignInImpl_t3604BCF69AB3B07384BEB75B4437C4010DA3254E_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Google.GoogleSignIn::Disconnect()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_m2E4D222974D1B8A7CB1E57A2FA305066F8A93CF9 (GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignIn_Disconnect_m2E4D222974D1B8A7CB1E57A2FA305066F8A93CF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_impl_2();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Google.ISignInImpl::Disconnect() */, ISignInImpl_t3604BCF69AB3B07384BEB75B4437C4010DA3254E_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Google.GoogleSignIn::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignIn__cctor_m5F20ED9F49E803AC1A180E045BC3C9150FCA4A6B (const RuntimeMethod* method)
{
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
// System.Void Google.GoogleSignIn_SignInException::.ctor(Google.GoogleSignInStatusCode)
extern "C" IL2CPP_METHOD_ATTR void SignInException__ctor_m51EA52B5539BA734E176044BF64B33EAEBE4C704 (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignInException__ctor_m51EA52B5539BA734E176044BF64B33EAEBE4C704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___status0;
		SignInException_set_Status_m5BA5A7B7F58093BD5CA4F1F0D34EF96FDD152631(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.GoogleSignIn_SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
extern "C" IL2CPP_METHOD_ATTR void SignInException__ctor_m7FA9859CB2770E9F52D3A8E9951806A672E1D87C (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignInException__ctor_m7FA9859CB2770E9F52D3A8E9951806A672E1D87C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___status0;
		SignInException_set_Status_m5BA5A7B7F58093BD5CA4F1F0D34EF96FDD152631(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.GoogleSignIn_SignInException::.ctor(Google.GoogleSignInStatusCode,System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SignInException__ctor_m97ACE3DD3630B83C8FE8D23F54CDD86B007C9AFD (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, int32_t ___status0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignInException__ctor_m97ACE3DD3630B83C8FE8D23F54CDD86B007C9AFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		Exception_t * L_1 = ___innerException2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___status0;
		SignInException_set_Status_m5BA5A7B7F58093BD5CA4F1F0D34EF96FDD152631(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.GoogleSignIn_SignInException::.ctor(Google.GoogleSignInStatusCode,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void SignInException__ctor_m25ECD7A759A95EA092F9B61A9FFD860AA0968655 (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, int32_t ___status0, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info1, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignInException__ctor_m25ECD7A759A95EA092F9B61A9FFD860AA0968655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info1;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_1 = ___context2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mBFF5996A1B65FCEEE0054A95A652BA3DD6366618(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___status0;
		SignInException_set_Status_m5BA5A7B7F58093BD5CA4F1F0D34EF96FDD152631(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn_SignInException::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m364855505A08930C7C676994FD8AF42862EC062F (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Google.GoogleSignIn_SignInException::set_Status(Google.GoogleSignInStatusCode)
extern "C" IL2CPP_METHOD_ATTR void SignInException_set_Status_m5BA5A7B7F58093BD5CA4F1F0D34EF96FDD152631 (SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_17(L_0);
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
// System.Void Google.GoogleSignInConfiguration::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m37C461AB6857BB33DAF60BAA8EC7354F003C023B (GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Google.GoogleSignInUser::get_AuthCode()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_AuthCode_m21D0E77362A12571858837E50F99F11D7BA4BD72 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAuthCodeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_m9E3900F977E83B77874929313F75B57D46A02A42 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAuthCodeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_Email()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mEA766FF1A8C3ACB9EA907ED2B2810A412E9E035D (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CEmailU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_Email(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m29D1897B4D39055DB9C24FA21CE77934933F647A (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CEmailU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_IdToken()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_mC3BFA4D71FA87A5047DD46D5A3DC6A235AEED884 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CIdTokenU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_mFFCD3E95775388B0CA61E4A3B2556011A54F3E93 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CIdTokenU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_DisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_m8A1D231B59610E72DC008289A52E3C67739EE2AB (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDisplayNameU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m04D843504F5F746C8F3A0B53AEE3392AACFD33BF (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDisplayNameU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_GivenName()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_GivenName_mE64BA6BF42D53FE48F58EF40B88AC2D1509415B1 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CGivenNameU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m0DED82EB13EA50387BD3052D4FE3BEF59EE4013F (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CGivenNameU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_FamilyName()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_FamilyName_m7D3CE60CE5B4393360E61464D2100758B0EBE33D (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFamilyNameU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_mE8E14DB8A6F3157400DA6C5FD9ED0537D865C082 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFamilyNameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
extern "C" IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * GoogleSignInUser_get_ImageUrl_mC7B464B74F08D5337ABC83CE83AA0ADB2CCB6554 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = __this->get_U3CImageUrlU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_mBB3653CE629F99EA05258156C912521A59B0FD0C (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___value0;
		__this->set_U3CImageUrlU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_UserId_m4FF32C457AE10BA33F05C7132B6C02C81123D121 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_mDB1D26504AF910BE45D4D871583ED0B4F45BE713 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Google.GoogleSignInUser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m4945FF989877B72A88B2DD67ADF7C8BD148428F1 (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void BaseObject__ctor_m71AB85E390DB719B6861CF492EB7AF7B256C507A (BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58 * __this, intptr_t ___intPtr0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___intPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1;
		memset(&L_1, 0, sizeof(L_1));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_1), __this, (intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_selfHandleRef_0(L_1);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
extern "C" IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD (BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_0 = __this->get_address_of_selfHandleRef_0();
		IL2CPP_RUNTIME_CLASS_INIT(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = ((BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var))->get_nullSelf_1();
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2 = L_1;
		RuntimeObject * L_3 = Box(HandleRef_t876E76124F400D12395BF61D562162AB6822204A_il2cpp_TypeInfo_var, &L_2);
		RuntimeObject * L_4 = Box(HandleRef_t876E76124F400D12395BF61D562162AB6822204A_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_3);
		*L_0 = *(HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)UnBox(L_4);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, _stringLiteral9F5A05AC2A9BE649AAE1FC71180F6D42724CEA90, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD_RuntimeMethod_var);
	}

IL_0028:
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7 = __this->get_selfHandleRef_0();
		return L_7;
	}
}
// System.Void Google.Impl.BaseObject::Dispose()
extern "C" IL2CPP_METHOD_ATTR void BaseObject_Dispose_m077D5087794F205A45192524ACEC2DCF0C6921FD (BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseObject_Dispose_m077D5087794F205A45192524ACEC2DCF0C6921FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = ((BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var))->get_nullSelf_1();
		__this->set_selfHandleRef_0(L_0);
		return;
	}
}
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject_OutStringMethod)
extern "C" IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * ___outStringMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_0 = ___outStringMethod0;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		uintptr_t L_1 = OutStringMethod_Invoke_mC070F6591EF83219D9BDFD660670212B52C99A2F(L_0, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, (0), /*hidden argument*/NULL);
		V_0 = L_1;
		uintptr_t L_2 = (0);
		RuntimeObject * L_3 = Box(UIntPtr_t_il2cpp_TypeInfo_var, &L_2);
		bool L_4 = UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB((uintptr_t*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0022:
	{
		V_1 = (String_t*)NULL;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		uint32_t L_5 = UIntPtr_ToUInt32_m1A1DEF1D57AD95FE4374C90E89F1DF4EB54C5C6C((uintptr_t*)(&V_0), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_7 = ___outStringMethod0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_2;
		uintptr_t L_9 = V_0;
		NullCheck(L_7);
		OutStringMethod_Invoke_mC070F6591EF83219D9BDFD660670212B52C99A2F(L_7, L_8, L_9, /*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_10 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_2;
		uint32_t L_12 = UIntPtr_ToUInt32_m1A1DEF1D57AD95FE4374C90E89F1DF4EB54C5C6C((uintptr_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_13 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		V_1 = L_13;
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		Exception_t * L_14 = V_3;
		String_t* L_15 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral5CDF9266916389F18D58D8F7CBD9E3252613A537, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_16;
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.Void Google.Impl.BaseObject::.cctor()
extern "C" IL2CPP_METHOD_ATTR void BaseObject__cctor_m59CB0AC6FD1B22F9EC0FFE475D56F75D8350C675 (const RuntimeMethod* method)
{
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
extern "C"  uintptr_t DelegatePInvokeWrapper_OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___out_bytes0U27 to native representation
	uint8_t* ____out_bytes0_marshaled = NULL;
	if (___out_bytes0 != NULL)
	{
		____out_bytes0_marshaled = reinterpret_cast<uint8_t*>((___out_bytes0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(____out_bytes0_marshaled, ___out_size1);

	return returnValue;
}
// System.Void Google.Impl.BaseObject_OutStringMethod::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0 (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UIntPtr Google.Impl.BaseObject_OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_mC070F6591EF83219D9BDFD660670212B52C99A2F (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	uintptr_t result;
	memset(&result, 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___out_bytes0, ___out_size1, targetMethod);
				}
				else
				{
					// closed
					typedef uintptr_t (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___out_bytes0, ___out_size1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___out_bytes0, ___out_size1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(targetMethod, targetThis, ___out_bytes0, ___out_size1);
							else
								result = GenericVirtFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(targetMethod, targetThis, ___out_bytes0, ___out_size1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___out_bytes0, ___out_size1);
							else
								result = VirtFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___out_bytes0, ___out_size1);
						}
					}
				}
				else
				{
					typedef uintptr_t (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___out_bytes0, ___out_size1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___out_bytes0, ___out_size1, targetMethod);
			}
			else
			{
				// closed
				typedef uintptr_t (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___out_bytes0, ___out_size1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___out_bytes0, ___out_size1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(targetMethod, targetThis, ___out_bytes0, ___out_size1);
						else
							result = GenericVirtFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(targetMethod, targetThis, ___out_bytes0, ___out_size1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___out_bytes0, ___out_size1);
						else
							result = VirtFuncInvoker2< uintptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___out_bytes0, ___out_size1);
					}
				}
			}
			else
			{
				typedef uintptr_t (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, uintptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___out_bytes0, ___out_size1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Google.Impl.BaseObject_OutStringMethod::BeginInvoke(System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OutStringMethod_BeginInvoke_mD9A789A1BD908A12222C4B4C045BC369780D0D14 (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_bytes0, uintptr_t ___out_size1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutStringMethod_BeginInvoke_mD9A789A1BD908A12222C4B4C045BC369780D0D14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___out_bytes0;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___out_size1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.UIntPtr Google.Impl.BaseObject_OutStringMethod::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_EndInvoke_mA19617F9DBCD9664D391A1C2A0C7A1ACD199CAC8 (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_mF759F8A08E14AA001C192F5EFB68C483555B21FE (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * __this, GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * ___configuration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignInImpl__ctor_mF759F8A08E14AA001C192F5EFB68C483555B21FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_0 = NULL;
	{
		intptr_t L_0 = GoogleSignInImpl_GetPlayerActivity_mF99E11AE376740EDC7BC521C6C05CF637E2828D7(/*hidden argument*/NULL);
		intptr_t L_1 = GoogleSignInImpl_GoogleSignIn_Create_m1671826F6048ED4B6B01112F736CD5CDC5EDA974((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var);
		BaseObject__ctor_m71AB85E390DB719B6861CF492EB7AF7B256C507A(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_2 = ___configuration0;
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_3, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		V_0 = L_3;
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_4 = ___configuration0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_AdditionalScopes_9();
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = V_0;
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_7 = ___configuration0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->get_AdditionalScopes_9();
		NullCheck(L_6);
		List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD(L_6, L_8, /*hidden argument*/List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD_RuntimeMethod_var);
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_9 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_10 = ___configuration0;
		NullCheck(L_10);
		bool L_11 = L_10->get_UseGameSignIn_0();
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_12 = ___configuration0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_WebClientId_1();
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_14 = ___configuration0;
		NullCheck(L_14);
		bool L_15 = L_14->get_RequestAuthCode_2();
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_16 = ___configuration0;
		NullCheck(L_16);
		bool L_17 = L_16->get_ForceTokenRefresh_3();
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_18 = ___configuration0;
		NullCheck(L_18);
		bool L_19 = L_18->get_RequestEmail_4();
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_20 = ___configuration0;
		NullCheck(L_20);
		bool L_21 = L_20->get_RequestIdToken_5();
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_22 = ___configuration0;
		NullCheck(L_22);
		bool L_23 = L_22->get_HidePopups_7();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_24 = V_0;
		NullCheck(L_24);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_24, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4(L_26, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_28 = ___configuration0;
		NullCheck(L_28);
		String_t* L_29 = L_28->get_AccountName_8();
		GoogleSignInImpl_GoogleSignIn_Configure_m3B74C9454036A86DAD6CA32E9D3448B4B8070EF3(L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::EnableDebugLogging(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_EnableDebugLogging_m761B6C84CCE9F73998BEBB73FB19F1A0CA7132D7 (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * __this, bool ___flag0, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		bool L_1 = ___flag0;
		GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m17EF6EEC952908BC1B1F04B567351E0A3107D13B(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignIn()
extern "C" IL2CPP_METHOD_ATTR Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * GoogleSignInImpl_SignIn_m7787A330212769B4D806D796FC48843771ECB468 (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignInImpl_SignIn_m7787A330212769B4D806D796FC48843771ECB468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		intptr_t L_1 = GoogleSignInImpl_GoogleSignIn_SignIn_m4974A5B82A8D44B0DFDB8E97DC04CC0390BD4541(L_0, /*hidden argument*/NULL);
		NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * L_2 = (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 *)il2cpp_codegen_object_new(NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1_il2cpp_TypeInfo_var);
		NativeFuture__ctor_m1A8B35B3CD8F4E2BA29CC9CA765F667FE59552B3(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * L_3 = (Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 *)il2cpp_codegen_object_new(Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4_il2cpp_TypeInfo_var);
		Future_1__ctor_mF95F9F09947F4FEF4D80671FEE5C18EA1CCCEFC7(L_3, L_2, /*hidden argument*/Future_1__ctor_mF95F9F09947F4FEF4D80671FEE5C18EA1CCCEFC7_RuntimeMethod_var);
		return L_3;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignInSilently()
extern "C" IL2CPP_METHOD_ATTR Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * GoogleSignInImpl_SignInSilently_m5C72C882D2E5C396FA200D7007D188127CF9B01E (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignInImpl_SignInSilently_m5C72C882D2E5C396FA200D7007D188127CF9B01E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		intptr_t L_1 = GoogleSignInImpl_GoogleSignIn_SignInSilently_m4B837A1A34EB67F9EE0BE982DA801C3DBE5D8957(L_0, /*hidden argument*/NULL);
		NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * L_2 = (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 *)il2cpp_codegen_object_new(NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1_il2cpp_TypeInfo_var);
		NativeFuture__ctor_m1A8B35B3CD8F4E2BA29CC9CA765F667FE59552B3(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 * L_3 = (Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4 *)il2cpp_codegen_object_new(Future_1_t970F8499EC59AE9E82496179CA844C05085C42F4_il2cpp_TypeInfo_var);
		Future_1__ctor_mF95F9F09947F4FEF4D80671FEE5C18EA1CCCEFC7(L_3, L_2, /*hidden argument*/Future_1__ctor_mF95F9F09947F4FEF4D80671FEE5C18EA1CCCEFC7_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::SignOut()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_SignOut_m52A0DE174C1B96B48CE06137199F1E8E4B5E1562 (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * __this, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		GoogleSignInImpl_GoogleSignIn_Signout_mFD14EE690616692B13409AA0D336382DAF1AE176(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::Disconnect()
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_Disconnect_m8B4550930A60C0FA62141A06EBF29F73EF172965 (GoogleSignInImpl_t5CB24C7CC73D2A28CDBAC2CA14317D102543CFCA * __this, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		GoogleSignInImpl_GoogleSignIn_Disconnect_mAC68665198F2E477273F3524E117C47F747D303C(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" intptr_t DEFAULT_CALL GoogleSignIn_Create(intptr_t);
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m1671826F6048ED4B6B01112F736CD5CDC5EDA974 (intptr_t ___data0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Create)(___data0);

	return returnValue;
}
extern "C" void DEFAULT_CALL GoogleSignIn_EnableDebugLogging(void*, int32_t);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_m17EF6EEC952908BC1B1F04B567351E0A3107D13B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, bool ___flag1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_EnableDebugLogging)(____self0_marshaled, static_cast<int32_t>(___flag1));

}
extern "C" int32_t DEFAULT_CALL GoogleSignIn_Configure(void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_m3B74C9454036A86DAD6CA32E9D3448B4B8070EF3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___webClientId2U27 to native representation
	char* ____webClientId2_marshaled = NULL;
	____webClientId2_marshaled = il2cpp_codegen_marshal_string(___webClientId2);

	// Marshaling of parameter U27___additionalScopes8U27 to native representation
	char** ____additionalScopes8_marshaled = NULL;
	if (___additionalScopes8 != NULL)
	{
		il2cpp_array_size_t ____additionalScopes8_Length = (___additionalScopes8)->max_length;
		____additionalScopes8_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____additionalScopes8_Length + 1);
		(____additionalScopes8_marshaled)[____additionalScopes8_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_Length); i++)
		{
			(____additionalScopes8_marshaled)[i] = il2cpp_codegen_marshal_string((___additionalScopes8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling of parameter U27___accountName10U27 to native representation
	char* ____accountName10_marshaled = NULL;
	____accountName10_marshaled = il2cpp_codegen_marshal_string(___accountName10);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Configure)(____self0_marshaled, static_cast<int32_t>(___useGameSignIn1), ____webClientId2_marshaled, static_cast<int32_t>(___requestAuthCode3), static_cast<int32_t>(___forceTokenRefresh4), static_cast<int32_t>(___requestEmail5), static_cast<int32_t>(___requestIdToken6), static_cast<int32_t>(___hidePopups7), ____additionalScopes8_marshaled, ___scopeCount9, ____accountName10_marshaled);

	// Marshaling cleanup of parameter U27___webClientId2U27 native representation
	il2cpp_codegen_marshal_free(____webClientId2_marshaled);
	____webClientId2_marshaled = NULL;

	// Marshaling cleanup of parameter U27___additionalScopes8U27 native representation
	if (____additionalScopes8_marshaled != NULL)
	{
		const il2cpp_array_size_t ____additionalScopes8_marshaled_CleanupLoopCount = (___additionalScopes8 != NULL) ? (___additionalScopes8)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____additionalScopes8_marshaled)[i]);
			(____additionalScopes8_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____additionalScopes8_marshaled);
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling cleanup of parameter U27___accountName10U27 native representation
	il2cpp_codegen_marshal_free(____accountName10_marshaled);
	____accountName10_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
extern "C" intptr_t DEFAULT_CALL GoogleSignIn_SignIn(void*);
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_m4974A5B82A8D44B0DFDB8E97DC04CC0390BD4541 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignIn)(____self0_marshaled);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL GoogleSignIn_SignInSilently(void*);
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_m4B837A1A34EB67F9EE0BE982DA801C3DBE5D8957 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignInSilently)(____self0_marshaled);

	return returnValue;
}
extern "C" void DEFAULT_CALL GoogleSignIn_Signout(void*);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_mFD14EE690616692B13409AA0D336382DAF1AE176 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Signout)(____self0_marshaled);

}
extern "C" void DEFAULT_CALL GoogleSignIn_Disconnect(void*);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_mAC68665198F2E477273F3524E117C47F747D303C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Disconnect)(____self0_marshaled);

}
extern "C" void DEFAULT_CALL GoogleSignIn_DisposeFuture(void*);
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_mBFF87CB523155C978CED3581F6B239896E02EAD7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_DisposeFuture)(____self0_marshaled);

}
extern "C" int32_t DEFAULT_CALL GoogleSignIn_Pending(void*);
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mD4978ED3517D0BCCB602B31C3F0BAD93641A4348 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Pending)(____self0_marshaled);

	return static_cast<bool>(returnValue);
}
extern "C" intptr_t DEFAULT_CALL GoogleSignIn_Result(void*);
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_mB0FBF0328AE56DA6E985FD61F079F8122650466C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Result)(____self0_marshaled);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL GoogleSignIn_Status(void*);
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_m843B7B35123ED5A9AE80F98C8332847BC6D8E7C8 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Status)(____self0_marshaled);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetServerAuthCode(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m16F83AA7BC719FFD7BEA018EABA6A360782B58F1 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetServerAuthCode)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetDisplayName(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_m88D6C1B13E0B6144A4818AD59135EBC119045755 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetDisplayName)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetEmail(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_mE1C992534F23CF7FCC318A5885AA38584A99EB47 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetEmail)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetFamilyName(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m8A40145BC61E8028F89AEC3334922F9E94F27042 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetFamilyName)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetGivenName(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mB2B782111F8AEC775B4D17BE8C8D54CE9A5FFE11 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetGivenName)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetIdToken(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_mAEBC4D99C0F756D5EE9DEF45AC1A125C7F1208C5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetIdToken)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetImageUrl(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_m7BBF78C1077263D4CA8E527973FE6AE8B36C7B42 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetImageUrl)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
extern "C" uintptr_t DEFAULT_CALL GoogleSignIn_GetUserId(void*, uint8_t*, uintptr_t);
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_m1E22ED7022D1E60BE7EE96E0BA4EDF5F2D4B05A3 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___self0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);

	// Marshaling of parameter U27___self0U27 to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.get_m_handle_1();

	// Marshaling of parameter U27___bytes1U27 to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetUserId)(____self0_marshaled, ____bytes1_marshaled, ___len2);

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
extern "C" IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_mF99E11AE376740EDC7BC521C6C05CF637E2828D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GoogleSignInImpl_GetPlayerActivity_mF99E11AE376740EDC7BC521C6C05CF637E2828D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
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
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeFuture__ctor_m1A8B35B3CD8F4E2BA29CC9CA765F667FE59552B3 (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFuture__ctor_m1A8B35B3CD8F4E2BA29CC9CA765F667FE59552B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var);
		BaseObject__ctor_m71AB85E390DB719B6861CF492EB7AF7B256C507A(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.Impl.NativeFuture::Dispose()
extern "C" IL2CPP_METHOD_ATTR void NativeFuture_Dispose_m43E6B8A8850A1E274F53B4A164EE9E3E3DD22423 (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * __this, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		GoogleSignInImpl_GoogleSignIn_DisposeFuture_mBFF87CB523155C978CED3581F6B239896E02EAD7(L_0, /*hidden argument*/NULL);
		BaseObject_Dispose_m077D5087794F205A45192524ACEC2DCF0C6921FD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.Impl.NativeFuture::get_Pending()
extern "C" IL2CPP_METHOD_ATTR bool NativeFuture_get_Pending_mDDC0BC165E3E6105EFA7580B55D166271EBAE9BF (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * __this, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		bool L_1 = GoogleSignInImpl_GoogleSignIn_Pending_mD4978ED3517D0BCCB602B31C3F0BAD93641A4348(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Google.GoogleSignInUser Google.Impl.NativeFuture::get_Result()
extern "C" IL2CPP_METHOD_ATTR GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * NativeFuture_get_Result_mF94B7E42DFB633E3B720156639F28779E4330D04 (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeFuture_get_Result_mF94B7E42DFB633E3B720156639F28779E4330D04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * V_1 = NULL;
	GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		intptr_t L_1 = GoogleSignInImpl_GoogleSignIn_Result_mB0FBF0328AE56DA6E985FD61F079F8122650466C(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_4 = (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mD50C727548FFB64D3D6BBB11DAF9C18A2DA0AFD0(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_5 = (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA *)il2cpp_codegen_object_new(GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA_il2cpp_TypeInfo_var);
		GoogleSignInUser__ctor_m4945FF989877B72A88B2DD67ADF7C8BD148428F1(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_6 = V_1;
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_7 = V_2;
		intptr_t L_8 = V_0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_9;
		memset(&L_9, 0, sizeof(L_9));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_9), L_7, (intptr_t)L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_userPtr_0(L_9);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_10 = V_2;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_11 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_12 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_m0488B6F62D8F9DDA9FAA644D206672FE0B78FE3B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var);
		String_t* L_13 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		GoogleSignInUser_set_DisplayName_m04D843504F5F746C8F3A0B53AEE3392AACFD33BF(L_10, L_13, /*hidden argument*/NULL);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_14 = V_2;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_15 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_16 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_mCD8F9EE02A64ECA8F009B69E40E92EF34F7FA7BA_RuntimeMethod_var), /*hidden argument*/NULL);
		String_t* L_17 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		GoogleSignInUser_set_Email_m29D1897B4D39055DB9C24FA21CE77934933F647A(L_14, L_17, /*hidden argument*/NULL);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_18 = V_2;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_19 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_20 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_mD07C7B96CDD7481FEFD0857EDAF93322D87F03F9_RuntimeMethod_var), /*hidden argument*/NULL);
		String_t* L_21 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		GoogleSignInUser_set_FamilyName_mE8E14DB8A6F3157400DA6C5FD9ED0537D865C082(L_18, L_21, /*hidden argument*/NULL);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_22 = V_2;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_23 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_24 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m1E18BC80D4C980A9598F37D6CCB2F5EF042C928A_RuntimeMethod_var), /*hidden argument*/NULL);
		String_t* L_25 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		GoogleSignInUser_set_GivenName_m0DED82EB13EA50387BD3052D4FE3BEF59EE4013F(L_22, L_25, /*hidden argument*/NULL);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_26 = V_2;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_27 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_28 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mF4047BDE4B60E1D45D13E999538543FA2EDAD9D7_RuntimeMethod_var), /*hidden argument*/NULL);
		String_t* L_29 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		GoogleSignInUser_set_IdToken_mFFCD3E95775388B0CA61E4A3B2556011A54F3E93(L_26, L_29, /*hidden argument*/NULL);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_30 = V_2;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_31 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_32 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_32, L_31, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mE4FFE90CBE595A2A7C3F7CED1CA8F3843CF8724E_RuntimeMethod_var), /*hidden argument*/NULL);
		String_t* L_33 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		GoogleSignInUser_set_AuthCode_m9E3900F977E83B77874929313F75B57D46A02A42(L_30, L_33, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_34 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_35 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_35, L_34, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m0C108B8A66CEEFC1C99983A8F5D7221CD654D8F7_RuntimeMethod_var), /*hidden argument*/NULL);
		String_t* L_36 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		String_t* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_39 = V_2;
		String_t* L_40 = V_3;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_41 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_41, L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		GoogleSignInUser_set_ImageUrl_mBB3653CE629F99EA05258156C912521A59B0FD0C(L_39, L_41, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_42 = V_2;
		U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * L_43 = V_1;
		OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 * L_44 = (OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398 *)il2cpp_codegen_object_new(OutStringMethod_t9723A9C8D9A404B1E5E6FA7CF26CA0C7FAFD2398_il2cpp_TypeInfo_var);
		OutStringMethod__ctor_mC9DAC26F43FCB74C841AF2BB9472ADB0F94A9DE0(L_44, L_43, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_m667F1494F9DDD2B28A3DF88450F9941E0D62DF84_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseObject_tAF7C7195FF2963B435A94CA10593DF65B0D8DB58_il2cpp_TypeInfo_var);
		String_t* L_45 = BaseObject_OutParamsToString_m3A18710F1D12B50A21AFEE06DCBF9F0FAD841A4F(L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		GoogleSignInUser_set_UserId_mDB1D26504AF910BE45D4D871583ED0B4F45BE713(L_42, L_45, /*hidden argument*/NULL);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_46 = V_2;
		return L_46;
	}

IL_00ff:
	{
		return (GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA *)NULL;
	}
}
// Google.GoogleSignInStatusCode Google.Impl.NativeFuture::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t NativeFuture_get_Status_mFA63F195C56C75AAF5C62B63B60A171E20910B67 (NativeFuture_t237F19949AA3E4CDFA1311011265C2A65A2564C1 * __this, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = BaseObject_SelfPtr_m7C9D864FB90B6538B7FDC698017DE17EC6DBFEFD(__this, /*hidden argument*/NULL);
		int32_t L_1 = GoogleSignInImpl_GoogleSignIn_Status_m843B7B35123ED5A9AE80F98C8332847BC6D8E7C8(L_0, /*hidden argument*/NULL);
		return (int32_t)(L_1);
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
// System.Void Google.Impl.NativeFuture_<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mD50C727548FFB64D3D6BBB11DAF9C18A2DA0AFD0 (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__0(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_m0488B6F62D8F9DDA9FAA644D206672FE0B78FE3B (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetDisplayName_m88D6C1B13E0B6144A4818AD59135EBC119045755(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__1(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_mCD8F9EE02A64ECA8F009B69E40E92EF34F7FA7BA (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetEmail_mE1C992534F23CF7FCC318A5885AA38584A99EB47(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__2(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_mD07C7B96CDD7481FEFD0857EDAF93322D87F03F9 (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetFamilyName_m8A40145BC61E8028F89AEC3334922F9E94F27042(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__3(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m1E18BC80D4C980A9598F37D6CCB2F5EF042C928A (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetGivenName_mB2B782111F8AEC775B4D17BE8C8D54CE9A5FFE11(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__4(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mF4047BDE4B60E1D45D13E999538543FA2EDAD9D7 (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetIdToken_mAEBC4D99C0F756D5EE9DEF45AC1A125C7F1208C5(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__5(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mE4FFE90CBE595A2A7C3F7CED1CA8F3843CF8724E (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m16F83AA7BC719FFD7BEA018EABA6A360782B58F1(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__6(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m0C108B8A66CEEFC1C99983A8F5D7221CD654D8F7 (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetImageUrl_m7BBF78C1077263D4CA8E527973FE6AE8B36C7B42(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture_<>c__DisplayClass5_0::<get_Result>b__7(System.Byte[],System.UIntPtr)
extern "C" IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_m667F1494F9DDD2B28A3DF88450F9941E0D62DF84 (U3CU3Ec__DisplayClass5_0_t54E6A9BACD8631AABA5E60F17AEFD99119F264EB * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_userPtr_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3 = GoogleSignInImpl_GoogleSignIn_GetUserId_m1E22ED7022D1E60BE7EE96E0BA4EDF5F2D4B05A3(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
extern "C" IL2CPP_METHOD_ATTR SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * SignInHelperObject_get_Instance_m1B434A62D608912879EE653C4DD60E922F3C478D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SignInHelperObject_get_Instance_m1B434A62D608912879EE653C4DD60E922F3C478D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, _stringLiteral7C61CBAB7C24FAF3829E9FA1AEFDC67979CCBD63, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_2, /*hidden argument*/NULL);
		NullCheck(L_2);
		SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * L_3 = GameObject_AddComponent_TisSignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_mA66448456E915BA77BF55CDC69F85681167A6F77(L_2, /*hidden argument*/GameObject_AddComponent_TisSignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_mA66448456E915BA77BF55CDC69F85681167A6F77_RuntimeMethod_var);
		((SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_il2cpp_TypeInfo_var))->set_instance_4(L_3);
		goto IL_002d;
	}

IL_0023:
	{
		SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * L_4 = (SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B *)il2cpp_codegen_object_new(SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_il2cpp_TypeInfo_var);
		SignInHelperObject__ctor_m58204F4CFB147D372A2027685D5EC66F818C272E(L_4, /*hidden argument*/NULL);
		((SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_il2cpp_TypeInfo_var))->set_instance_4(L_4);
	}

IL_002d:
	{
		SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * L_5 = ((SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B_il2cpp_TypeInfo_var))->get_instance_4();
		return L_5;
	}
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m58204F4CFB147D372A2027685D5EC66F818C272E (SignInHelperObject_t5B074CDC927F8B8AD84D63896123CF137EDE412B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SignInSample.SigninSampleScript::Awake()
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_Awake_m3AF4C34589E36729109915FE58A4C7F81A165FF6 (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_Awake_m3AF4C34589E36729109915FE58A4C7F81A165FF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_0 = (GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 *)il2cpp_codegen_object_new(GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549_il2cpp_TypeInfo_var);
		GoogleSignInConfiguration__ctor_m37C461AB6857BB33DAF60BAA8EC7354F003C023B(L_0, /*hidden argument*/NULL);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_1 = L_0;
		String_t* L_2 = __this->get_webClientId_5();
		NullCheck(L_1);
		L_1->set_WebClientId_1(L_2);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_3 = L_1;
		NullCheck(L_3);
		L_3->set_RequestIdToken_5((bool)1);
		__this->set_configuration_6(L_3);
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::OnSignIn()
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_OnSignIn_mAD1570AAF1DEA6D267F616992A480B4AFF349276 (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_OnSignIn_mAD1570AAF1DEA6D267F616992A480B4AFF349276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_0 = __this->get_configuration_6();
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212(L_0, /*hidden argument*/NULL);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_1 = GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB(/*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_UseGameSignIn_0((bool)0);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_2 = GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_RequestIdToken_5((bool)1);
		SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, _stringLiteral99287FB0EE491B274426C590EB12A65D367BCEF4, /*hidden argument*/NULL);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_3 = GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211(/*hidden argument*/NULL);
		NullCheck(L_3);
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_4 = GoogleSignIn_SignIn_mE9F0C392F8B86CB7C46F8E1EC983E1B5BB9108EB(L_3, /*hidden argument*/NULL);
		Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 * L_5 = (Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 *)il2cpp_codegen_object_new(Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49_il2cpp_TypeInfo_var);
		Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5(L_5, __this, (intptr_t)((intptr_t)SigninSampleScript_OnAuthenticationFinished_m90A4843E1B63665DA1C2D641DD96DF3B7FC808EE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5_RuntimeMethod_var);
		NullCheck(L_4);
		Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86(L_4, L_5, /*hidden argument*/Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86_RuntimeMethod_var);
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::OnSignOut()
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_OnSignOut_mF9877343FCC0B01C446A3DFAA2E44444F3F2C558 (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_OnSignOut_mF9877343FCC0B01C446A3DFAA2E44444F3F2C558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, _stringLiteralBEE93CDB8B9758ECBFBA313D3537F18207B32078, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_0 = GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211(/*hidden argument*/NULL);
		NullCheck(L_0);
		GoogleSignIn_SignOut_m635410E98A824140BD617A0D05F0E74B58479716(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::OnDisconnect()
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_OnDisconnect_m960798AE4B9246222EC50E411BCEE5AA2A0E19FA (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_OnDisconnect_m960798AE4B9246222EC50E411BCEE5AA2A0E19FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, _stringLiteral5A25DE8F38C8CED002290C886DCCC5D50BEE1FA8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_0 = GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211(/*hidden argument*/NULL);
		NullCheck(L_0);
		GoogleSignIn_Disconnect_m2E4D222974D1B8A7CB1E57A2FA305066F8A93CF9(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::OnAuthenticationFinished(System.Threading.Tasks.Task`1<Google.GoogleSignInUser>)
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_OnAuthenticationFinished_m90A4843E1B63665DA1C2D641DD96DF3B7FC808EE (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_OnAuthenticationFinished_m90A4843E1B63665DA1C2D641DD96DF3B7FC808EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1 = Task_get_IsFaulted_m7337D2694F4BF380C5B8893B4A924D7F0E762A48(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_2 = ___task0;
		NullCheck(L_2);
		AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * L_3 = Task_get_Exception_mA61AAD3E52CBEB631D1956217B521456E7960B95(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * L_4 = AggregateException_get_InnerExceptions_mB81D2B3BD56A3E938B83B0AF766474ED66057040(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA(L_4, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mB3A1708B473BA7EE3CED5959613B2AA11A4920BA_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_6);
			if (!L_7)
			{
				goto IL_0075;
			}
		}

IL_0024:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			Exception_t * L_9 = InterfaceFuncInvoker0< Exception_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t2281FCF251CD51C1F13587450034F0E08EBFAD0E_il2cpp_TypeInfo_var, L_8);
			V_1 = ((SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A *)CastclassClass((RuntimeObject*)L_9, SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A_il2cpp_TypeInfo_var));
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, _stringLiteral8F2BA6E2403DEF290CB19107E6826BC9CB3C6CD1);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral8F2BA6E2403DEF290CB19107E6826BC9CB3C6CD1);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
			SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = SignInException_get_Status_m364855505A08930C7C676994FD8AF42862EC062F(L_13, /*hidden argument*/NULL);
			int32_t L_15 = L_14;
			RuntimeObject * L_16 = Box(GoogleSignInStatusCode_t2837DED0E111FF726B18AC4DE50749525434A498_il2cpp_TypeInfo_var, &L_15);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_16);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_12;
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
			SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * L_19 = V_1;
			NullCheck(L_19);
			String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_20);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
			String_t* L_21 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_18, /*hidden argument*/NULL);
			SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, L_21, /*hidden argument*/NULL);
			SignInException_t612D589CD9823EF04AD3822C8D2969DFADFD5E4A * L_22 = V_1;
			NullCheck(L_22);
			RuntimeObject* L_23 = VirtFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IDictionary System.Exception::get_Data() */, L_22);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_23, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xCB, FINALLY_008d);
		}

IL_0075:
		{
			Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_24 = ___task0;
			NullCheck(L_24);
			AggregateException_t9217B9E89DF820D5632411F2BD92F444B17BD60E * L_25 = Task_get_Exception_mA61AAD3E52CBEB631D1956217B521456E7960B95(L_24, /*hidden argument*/NULL);
			String_t* L_26 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral282490C4CF823F687ADC8603271E3C90F3632101, L_25, /*hidden argument*/NULL);
			SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, L_26, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xCB, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_0;
			if (!L_27)
			{
				goto IL_0096;
			}
		}

IL_0090:
		{
			RuntimeObject* L_28 = V_0;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_28);
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0097:
	{
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_29 = ___task0;
		NullCheck(L_29);
		bool L_30 = Task_get_IsCanceled_m42A47FCA2C6F33308A08C92C8489E802448F6F42(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00ab;
		}
	}
	{
		SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, _stringLiteralF840AC65B3E56CBE7D49F5922CE51270404EC62C, /*hidden argument*/NULL);
		return;
	}

IL_00ab:
	{
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_31 = ___task0;
		NullCheck(L_31);
		GoogleSignInUser_t9E5B8CB66EDF3C857859B2981E29E60DF42757EA * L_32 = Task_1_get_Result_m59E378EB6EB7F6762F9D11E67633B306ADB105AB(L_31, /*hidden argument*/Task_1_get_Result_m59E378EB6EB7F6762F9D11E67633B306ADB105AB_RuntimeMethod_var);
		NullCheck(L_32);
		String_t* L_33 = GoogleSignInUser_get_DisplayName_m8A1D231B59610E72DC008289A52E3C67739EE2AB(L_32, /*hidden argument*/NULL);
		String_t* L_34 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral1CE581D8A0DCDBA5FAD4F55CFD4974CC6E2905D0, L_33, _stringLiteral0AB8318ACAF6E678DD02E2B5C343ED41111B393D, /*hidden argument*/NULL);
		SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, L_34, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::OnSignInSilently()
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_OnSignInSilently_m30E9238321108BBA07D29C3A1611199ACEFA34B1 (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_OnSignInSilently_m30E9238321108BBA07D29C3A1611199ACEFA34B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_0 = __this->get_configuration_6();
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212(L_0, /*hidden argument*/NULL);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_1 = GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB(/*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_UseGameSignIn_0((bool)0);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_2 = GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_RequestIdToken_5((bool)1);
		SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, _stringLiteral820C429B8E1084817A33F29F6A3A7FC81F68AB23, /*hidden argument*/NULL);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_3 = GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211(/*hidden argument*/NULL);
		NullCheck(L_3);
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_4 = GoogleSignIn_SignInSilently_mF221E10D0C94763B618484F93AB77C1F95BCC3EB(L_3, /*hidden argument*/NULL);
		Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 * L_5 = (Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 *)il2cpp_codegen_object_new(Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49_il2cpp_TypeInfo_var);
		Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5(L_5, __this, (intptr_t)((intptr_t)SigninSampleScript_OnAuthenticationFinished_m90A4843E1B63665DA1C2D641DD96DF3B7FC808EE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5_RuntimeMethod_var);
		NullCheck(L_4);
		Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86(L_4, L_5, /*hidden argument*/Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86_RuntimeMethod_var);
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::OnGamesSignIn()
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_OnGamesSignIn_m9BC1B75E6B65B12D497CCDE0CEB37FEEED104A41 (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_OnGamesSignIn_m9BC1B75E6B65B12D497CCDE0CEB37FEEED104A41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_0 = __this->get_configuration_6();
		IL2CPP_RUNTIME_CLASS_INIT(GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D_il2cpp_TypeInfo_var);
		GoogleSignIn_set_Configuration_mB0631FB8F55B844F8E688AB5DB951FB3B313B212(L_0, /*hidden argument*/NULL);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_1 = GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB(/*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_UseGameSignIn_0((bool)1);
		GoogleSignInConfiguration_t4B8E49DBD0DEA18784CD25D22C2B348DCA9D2549 * L_2 = GoogleSignIn_get_Configuration_m6020C561D0429E91F163896881A1113C4897BFBB(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_RequestIdToken_5((bool)0);
		SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F(__this, _stringLiteral088FDEBADA12E1B1AEE1D3A6578901C3DF328020, /*hidden argument*/NULL);
		GoogleSignIn_tA93945B9EF7ED0D67197795235E4832304B4170D * L_3 = GoogleSignIn_get_DefaultInstance_m4B6A52AE512C2E1B8D5629632BFCBC80D34DE211(/*hidden argument*/NULL);
		NullCheck(L_3);
		Task_1_tC627618F2FCBC8FAD263EEDF4AF84F6A3B6C1401 * L_4 = GoogleSignIn_SignIn_mE9F0C392F8B86CB7C46F8E1EC983E1B5BB9108EB(L_3, /*hidden argument*/NULL);
		Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 * L_5 = (Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49 *)il2cpp_codegen_object_new(Action_1_t328A99B8F629251FA65120BA1BB1DA8F99F75B49_il2cpp_TypeInfo_var);
		Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5(L_5, __this, (intptr_t)((intptr_t)SigninSampleScript_OnAuthenticationFinished_m90A4843E1B63665DA1C2D641DD96DF3B7FC808EE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mF92B99C29146219E99C9D197BC6DA7C06E1BB0F5_RuntimeMethod_var);
		NullCheck(L_4);
		Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86(L_4, L_5, /*hidden argument*/Task_1_ContinueWith_m6B5FE238654853C6249EC7C8247CA0CF1C1D3A86_RuntimeMethod_var);
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::AddStatusText(System.String)
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript_AddStatusText_m7C81B9F5BE979AFF1B2B73FB66CDDE85D459101F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_messages_7();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4(L_0, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_001a;
		}
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = __this->get_messages_7();
		NullCheck(L_2);
		List_1_RemoveAt_mFE90A979FA6361694B71C6CCED7EA30F4BA63E8E(L_2, 0, /*hidden argument*/List_1_RemoveAt_mFE90A979FA6361694B71C6CCED7EA30F4BA63E8E_RuntimeMethod_var);
	}

IL_001a:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = __this->get_messages_7();
		String_t* L_4 = ___text0;
		NullCheck(L_3);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_3, L_4, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_5 = __this->get_messages_7();
		NullCheck(L_5);
		Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  L_6 = List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E(L_5, /*hidden argument*/List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_003a:
		{
			String_t* L_7 = Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_RuntimeMethod_var);
			V_2 = L_7;
			String_t* L_8 = V_0;
			String_t* L_9 = V_2;
			String_t* L_10 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_8, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_004f:
		{
			bool L_11 = Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003a;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978_RuntimeMethod_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_12 = __this->get_statusText_4();
		String_t* L_13 = V_0;
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_13);
		return;
	}
}
// System.Void SignInSample.SigninSampleScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SigninSampleScript__ctor_m4517A15D46A4192E53B4995EC4C8AC5024B1F3B9 (SigninSampleScript_t87DCB9DFF79F13DF167282787E1D9E98022D98D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SigninSampleScript__ctor_m4517A15D46A4192E53B4995EC4C8AC5024B1F3B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_webClientId_5(_stringLiteral56C69436806919D454318C6984F1B71F94F1D325);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_messages_7(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
