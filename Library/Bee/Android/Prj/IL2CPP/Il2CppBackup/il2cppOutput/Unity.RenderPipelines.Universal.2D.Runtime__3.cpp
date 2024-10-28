﻿#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

struct Dictionary_2_t96A940D78E875DD4E24C2F48746D6A7CBE9AC441;
struct Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF;
struct IEnumerator_1_t5926539DBBB2302C569D0A07AF3A95A874CEBE33;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
struct List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t6988D2B11937CB8462E839C2DE1714ACD7797AF4;
struct List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6;
struct List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B;
struct List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_t201EF66D89B48BDF1B448F483575106DF0B49F6A;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Light2DU5BU5D_t82B2154049C7A198A49461BF8D3C43B2032C4B53;
struct Light2DBlendStyleU5BU5D_tD2A922FE5FA60CCC63036A69CD719E15814D265A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240;
struct RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF;
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE;
struct ShadowCaster2DU5BU5D_tFE30E144D785567FC9F351DB87FC39A1364A38F2;
struct ShadowCasterGroup2DU5BU5D_t006FAD67E63312F058E4E2601D32D5079738683F;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct LightMeshVertexU5BU5D_t148DD69C87414B5F05F0AEE34D75820F65279329;
struct BaseCommandBuffer_t82E5E256352AA36243FB8F4D56B299E749323C53;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct ILight2DCullResult_tEFAF8D99AB687F868772AE79E916D7DBFF623D11;
struct IRenderPass2D_t41FD5A7EAB2A5B9CAC8EA96CAA862D7315F636D8;
struct Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05;
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE;
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B;
struct RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F;
struct RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731;
struct Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90;
struct RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
struct Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA;
struct ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791;
struct ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500;
struct ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D;
struct ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA;
struct ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072;
struct ShapeProviderUtility_t4024275446F2139D99C53FBF0D4981653107F80E;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC;
struct String_t;
struct TaaPersistentData_t7AD3D320FD8FE7195225F0A7C7C676480A6ED775;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B;
struct ProbeVolumeResources_t30A6677110700C97538A9A5E99ABEE1F847C4CE7;

IL2CPP_EXTERN_C RuntimeClass* CommandBufferHelpers_tC060BE75E2415886D2440C39620E4619A39539C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILight2DCullResult_tEFAF8D99AB687F868772AE79E916D7DBFF623D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRenderPass2D_t41FD5A7EAB2A5B9CAC8EA96CAA862D7315F636D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTHandles_t84D932A74064E591F31E9813FBED5D64F5CC888C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShadowCasterGroup2DManager_tD4DF649108FFD9B4E2F33AD838D64B91F21D49CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* float4_t89D9A294E7A79BD81BFBDD18654508532958555E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFBAA1DFB47800F13D44190C56827B03CE5E3DE;
IL2CPP_EXTERN_C String_t* _stringLiteral288D3B30927E4D95B96B2D2711C4053AA1D54F18;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC8249171BF5A08AD6AE3707210845B7A1D82C6;
IL2CPP_EXTERN_C String_t* _stringLiteral48AFFDEF495CDCC4474DF0B703765F5DEE1804E8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C68A465D4DEA0F5713791AA0DB28A82C406B819;
IL2CPP_EXTERN_C String_t* _stringLiteral4E186C7E71F702ADEC19839A9BAF845840FD3F1F;
IL2CPP_EXTERN_C String_t* _stringLiteral7E223453154474AFA2ECDAF78A5F7E19A2FC4A74;
IL2CPP_EXTERN_C String_t* _stringLiteral9AE2EC9DE29B3E57D687B9B75E325B9E2B7D2A91;
IL2CPP_EXTERN_C String_t* _stringLiteralB5C228F1E969B5BB50AA097746D200A4F1D75723;
IL2CPP_EXTERN_C String_t* _stringLiteralBDFE8A3827558BB2D833AB047C84BFD2A8B1774A;
IL2CPP_EXTERN_C String_t* _stringLiteralBF1CFD1309A1474E2661F037CEC1EB778EBF62E2;
IL2CPP_EXTERN_C String_t* _stringLiteralC0C17A04E9D45458363E915905BA94E35369EAF2;
IL2CPP_EXTERN_C String_t* _stringLiteralC89D4252D8148E6ED2EC59643DF4398D7A803267;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDAC60E0D057AFE661D0C6E451953C8268511BA;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A13C19468D4A481A7C624EA0F98A0477FCA948;
IL2CPP_EXTERN_C String_t* _stringLiteralD24E0611904A42C1E931A39EB89DC52BC9F76653;
IL2CPP_EXTERN_C String_t* _stringLiteralD5069D81915B4AAA94117DBD391BF7132DDA9C11;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5FBFC6F1646459ABB684A9C0441C6220BE7460;
IL2CPP_EXTERN_C String_t* _stringLiteralE5CD3C30109BF1347C8F33B0C8422735FD0A330A;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m32F506BE5FE2E4C613F06F8B208E0D5FC794601F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0F64C67B6F6980EE49C60350F878BD5E31AEA07E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_GetEqual_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0_m557792A2DC3C707409AD5786704C1F7864F410AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_GetEqual_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8_m5450D65F72CA7410EDE0B8B6BB965639C9E1F49B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_GetEqual_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20_m4AC51D7677A0F28915FBFC925C57BFE63B36805A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8_m937CDE2C0471EAF92BA5B86BF551960EC1D4E6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2_m55CC2779035AFBCCFD9B87FCC9AB67B8A698DFC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_GetUpper_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16_mC522DB218F2E0F9767CA24A550B91BE9045D952D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_InsertionSort_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50_m258B5011A3B37991991591174271F52C24BBE8C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisIntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839_m9AB69CC00CE80043D83F7DFBCE866488E246C8FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C_m7BCFC0B1FE565D81680F45FC8267E460B43D039C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleHandle_InsertionSort_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45_m15FA4D36EBA3A39B00B541076154836BDCD46F32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m7E9E200C8AC0B796CE7188B226AB37DBAD37EC7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m573055E6ED3C1024C5623136F7D378B464C79342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m78F99DD50B9EE3247088B7B56B7B173ABAAB1ADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m7CA99BD8B0E7A24B9994325CEA8D931267AC1BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m2ED9FEE09431A02D2BCDEC1C1496392E0E13967E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mCF6388BD8438C65853584A9EA88857B09FE51B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mCFAA667E54D805CAFF19ACFC8E3C7036F30BA405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_RuntimeMethod_var;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240;
struct RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF;
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34  : public RuntimeObject
{
	Light2DU5BU5D_t82B2154049C7A198A49461BF8D3C43B2032C4B53* ____items;
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
struct List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B  : public RuntimeObject
{
	ShadowCaster2DU5BU5D_tFE30E144D785567FC9F351DB87FC39A1364A38F2* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37  : public RuntimeObject
{
	ShadowCasterGroup2DU5BU5D_t006FAD67E63312F058E4E2601D32D5079738683F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tF36189722591C3623670D29AB499AC82FAB865C9  : public RuntimeObject
{
};
struct BaseCommandBuffer_t82E5E256352AA36243FB8F4D56B299E749323C53  : public RuntimeObject
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_WrappedCommandBuffer;
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___m_ExecutingPass;
};
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE  : public RuntimeObject
{
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CsamplerU3Ek__BackingField;
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CinlineSamplerU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_Recorder;
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_InlineRecorder;
};
struct ShadowCasterGroup2DManager_tD4DF649108FFD9B4E2F33AD838D64B91F21D49CB  : public RuntimeObject
{
};
struct ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F  : public RuntimeObject
{
};
struct ShadowShape2D_tE11456DC730F0E8FBE32420402926DAE0F54EE0E  : public RuntimeObject
{
};
struct ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072  : public RuntimeObject
{
};
struct ShapeProviderUtility_t4024275446F2139D99C53FBF0D4981653107F80E  : public RuntimeObject
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
struct ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DelaEdgeCompare_tE7F76464E799DE60A8BF6D3237C394A4D423F094 
{
	union
	{
		struct
		{
		};
		uint8_t DelaEdgeCompare_tE7F76464E799DE60A8BF6D3237C394A4D423F094__padding[1];
	};
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
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct LightStats_t748A504C18A616691BD0688FD94C25E2CDAC0F15 
{
	int32_t ___totalLights;
	int32_t ___totalShadows;
	int32_t ___totalNormalMapUsage;
	int32_t ___totalVolumetricUsage;
	uint32_t ___blendStylesUsed;
	uint32_t ___blendStylesWithLights;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499 
{
	union
	{
		struct
		{
		};
		uint8_t ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499__padding[1];
	};
};
struct PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0 
{
	union
	{
		struct
		{
		};
		uint8_t PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0__padding[1];
	};
};
struct ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD__padding[1];
	};
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731  : public BaseCommandBuffer_t82E5E256352AA36243FB8F4D56B299E749323C53
{
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 
{
	int16_t ___m_LowerBound;
	int16_t ___m_UpperBound;
};
struct TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45 
{
	union
	{
		struct
		{
		};
		uint8_t TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45__padding[1];
	};
};
struct TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA 
{
	union
	{
		struct
		{
		};
		uint8_t TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA__padding[1];
	};
};
struct TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50 
{
	union
	{
		struct
		{
		};
		uint8_t TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50__padding[1];
	};
};
struct TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C 
{
	union
	{
		struct
		{
		};
		uint8_t TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C__padding[1];
	};
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
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E 
{
	union
	{
		struct
		{
		};
		uint8_t XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E__padding[1];
	};
};
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA 
{
	double ___x;
	double ___y;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6085_t301FC2821D88A870C37CED58FD29F59C2477555B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6085_t301FC2821D88A870C37CED58FD29F59C2477555B__padding[6085];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6164_t05123BEEBDDF8825CD3C34C29B5AF0703E1CEDA9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6164_t05123BEEBDDF8825CD3C34C29B5AF0703E1CEDA9__padding[6164];
	};
};
#pragma pack(pop, tp)
struct U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088 
{
	union
	{
		struct
		{
			double ___FixedElementField;
		};
		uint8_t U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088__padding[32];
	};
};
struct U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD 
{
	union
	{
		struct
		{
			double ___FixedElementField;
		};
		uint8_t U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD__padding[32];
	};
};
struct U3CrenderTargetIdsU3Ee__FixedBuffer_t6321558A3C34846EA189907CD244021D741F37C7 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CrenderTargetIdsU3Ee__FixedBuffer_t6321558A3C34846EA189907CD244021D741F37C7__padding[16];
	};
};
struct U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55 
{
	union
	{
		struct
		{
			bool ___FixedElementField;
		};
		uint8_t U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55__padding[4];
	};
};
struct U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55_marshaled_pinvoke
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55__padding[4];
	};
};
struct U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55_marshaled_com
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55__padding[4];
	};
};
struct RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4 
{
	int32_t ___count;
	int32_t ___index;
	int32_t ___v0Offset;
	int32_t ___v1Offset;
};
struct TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20 
{
	union
	{
		struct
		{
		};
		uint8_t TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20__padding[1];
	};
};
struct TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8 
{
	union
	{
		struct
		{
		};
		uint8_t TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8__padding[1];
	};
};
struct TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0 
{
	union
	{
		struct
		{
		};
		uint8_t TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0__padding[1];
	};
};
struct TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8 
{
	union
	{
		struct
		{
		};
		uint8_t TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8__padding[1];
	};
};
struct TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2 
{
	union
	{
		struct
		{
		};
		uint8_t TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2__padding[1];
	};
};
struct TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16 
{
	union
	{
		struct
		{
		};
		uint8_t TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16__padding[1];
	};
};
struct IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___intValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___floatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_forAlignmentOnly;
		};
	};
};
struct LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_forAlignmentOnly;
		};
	};
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AntialiasingMode_tDF75AC7BDAF51FA550F528F7B798416ACB8D3487 
{
	int32_t ___value__;
};
struct AntialiasingQuality_t45B2A050F79EB8B705FED3F3F30A70942E71D605 
{
	int32_t ___value__;
};
struct BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___radius;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct CameraRenderType_tC686ABD18F67CA30E6DF217007744F509606A41D 
{
	int32_t ___value__;
};
struct CameraType_tCA1017DBE96964E1D967942FB98F152F14121FCD 
{
	int32_t ___value__;
};
struct ColorGradingMode_t980B9396D20213763F23C4D474BC079FC68BF83E 
{
	int32_t ___value__;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo;
};
struct Downsampling_tFE6A5D41D0A9881972AE6C6470FA5E1700410D49 
{
	int32_t ___value__;
};
struct FilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34 
{
	int32_t ___value__;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct HDRColorBufferPrecision_tEF57E1CB7C2B230E3AFF5D6628010DD456EA58C7 
{
	int32_t ___value__;
};
struct ImageScalingMode_tB7E238BD8F6E6D9CBC6C2C92E3E4C9DF72A4AF54 
{
	int32_t ___value__;
};
struct ImageUpscalingFilter_t6BAB8A7CB0216E88F69458503780865981937631 
{
	int32_t ___value__;
};
struct LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3 
{
	int32_t ___startLayerID;
	int32_t ___endLayerValue;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___layerRange;
	LightStats_t748A504C18A616691BD0688FD94C25E2CDAC0F15 ___lightStats;
	U3CrenderTargetIdsU3Ee__FixedBuffer_t6321558A3C34846EA189907CD244021D741F37C7 ___renderTargetIds;
	U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55 ___renderTargetUsed;
	List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* ___lights;
	List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* ___shadowLights;
	List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* ___shadowCasters;
};
struct LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3_marshaled_pinvoke
{
	int32_t ___startLayerID;
	int32_t ___endLayerValue;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___layerRange;
	LightStats_t748A504C18A616691BD0688FD94C25E2CDAC0F15 ___lightStats;
	U3CrenderTargetIdsU3Ee__FixedBuffer_t6321558A3C34846EA189907CD244021D741F37C7 ___renderTargetIds;
	U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55_marshaled_pinvoke ___renderTargetUsed;
	List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* ___lights;
	List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* ___shadowLights;
	List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* ___shadowCasters;
};
struct LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3_marshaled_com
{
	int32_t ___startLayerID;
	int32_t ___endLayerValue;
	SortingLayerRange_t96D04CFB4E8824978FEB2CFFFCFEAC37E56D52C9 ___layerRange;
	LightStats_t748A504C18A616691BD0688FD94C25E2CDAC0F15 ___lightStats;
	U3CrenderTargetIdsU3Ee__FixedBuffer_t6321558A3C34846EA189907CD244021D741F37C7 ___renderTargetIds;
	U3CrenderTargetUsedU3Ee__FixedBuffer_tB76B3193CCB85709551AAF9663C2D45E63982A55_marshaled_com ___renderTargetUsed;
	List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* ___lights;
	List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* ___shadowLights;
	List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* ___shadowCasters;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
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
struct PerObjectData_t04DDCBE9ABF1113E8F9BAFCF4A7F94DD841B9CC9 
{
	int32_t ___value__;
};
struct RTClearFlags_t127E0A4F62D0A19D256CBCB7AB0E7A774A96C24F 
{
	int32_t ___value__;
};
struct RTHandleProperties_tBCB3E1EFE8B366995704C1322B9C443877580CD6 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___previousViewportSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___previousRenderTargetSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___currentViewportSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___currentRenderTargetSize;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rtHandleScale;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_tAFC98053C956B68EDA12B1B8A9BC4B245C97D996 
{
	int32_t ___value__;
};
struct RenderTextureCreationFlags_t1C01993691E5BA956575134696509089FE852F50 
{
	int32_t ___value__;
};
struct RenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69 
{
	int32_t ___value__;
};
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832 
{
	bool ___supportsMainLightShadows;
	bool ___mainLightShadowsEnabled;
	int32_t ___mainLightShadowmapWidth;
	int32_t ___mainLightShadowmapHeight;
	int32_t ___mainLightShadowCascadesCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit;
	float ___mainLightShadowCascadeBorder;
	bool ___supportsAdditionalLightShadows;
	bool ___additionalLightShadowsEnabled;
	int32_t ___additionalLightsShadowmapWidth;
	int32_t ___additionalLightsShadowmapHeight;
	bool ___supportsSoftShadows;
	int32_t ___shadowmapDepthBufferBits;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution;
	bool ___isKeywordAdditionalLightShadowsEnabled;
	bool ___isKeywordSoftShadowsEnabled;
	int32_t ___mainLightShadowResolution;
	int32_t ___mainLightRenderTargetWidth;
	int32_t ___mainLightRenderTargetHeight;
};
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_pinvoke
{
	int32_t ___supportsMainLightShadows;
	int32_t ___mainLightShadowsEnabled;
	int32_t ___mainLightShadowmapWidth;
	int32_t ___mainLightShadowmapHeight;
	int32_t ___mainLightShadowCascadesCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit;
	float ___mainLightShadowCascadeBorder;
	int32_t ___supportsAdditionalLightShadows;
	int32_t ___additionalLightShadowsEnabled;
	int32_t ___additionalLightsShadowmapWidth;
	int32_t ___additionalLightsShadowmapHeight;
	int32_t ___supportsSoftShadows;
	int32_t ___shadowmapDepthBufferBits;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution;
	int32_t ___isKeywordAdditionalLightShadowsEnabled;
	int32_t ___isKeywordSoftShadowsEnabled;
	int32_t ___mainLightShadowResolution;
	int32_t ___mainLightRenderTargetWidth;
	int32_t ___mainLightRenderTargetHeight;
};
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_com
{
	int32_t ___supportsMainLightShadows;
	int32_t ___mainLightShadowsEnabled;
	int32_t ___mainLightShadowmapWidth;
	int32_t ___mainLightShadowmapHeight;
	int32_t ___mainLightShadowCascadesCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit;
	float ___mainLightShadowCascadeBorder;
	int32_t ___supportsAdditionalLightShadows;
	int32_t ___additionalLightShadowsEnabled;
	int32_t ___additionalLightsShadowmapWidth;
	int32_t ___additionalLightsShadowmapHeight;
	int32_t ___supportsSoftShadows;
	int32_t ___shadowmapDepthBufferBits;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution;
	int32_t ___isKeywordAdditionalLightShadowsEnabled;
	int32_t ___isKeywordSoftShadowsEnabled;
	int32_t ___mainLightShadowResolution;
	int32_t ___mainLightRenderTargetWidth;
	int32_t ___mainLightRenderTargetHeight;
};
struct ShadowSamplingMode_t8BE740C4258CFEDDBAC01FDC0438D8EE3F776BA8 
{
	int32_t ___value__;
};
struct SortingCriteria_t4907D221CB6E6AA4A32C1ED7B5D17103FD3E7C39 
{
	int32_t ___value__;
};
struct TemporalAAQuality_t03A8B3F777D54108A9CE21E79AB4C022968AD5F5 
{
	int32_t ___value__;
};
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	int32_t ___value__;
};
struct TransparencySortMode_t37A2377DA9F8D6D10C927284BC4F27443D78FC02 
{
	int32_t ___value__;
};
struct UBounds_tDF56564D5DC9DBE3DCA3C2881172C01FD51D137B 
{
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___min;
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___max;
};
struct UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___center;
	float ___radius;
};
struct UEncroachingSegment_tD43A7B104CDD43702E11FA1AC6A56598A7CB1FB3 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___index;
};
struct UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct UEventType_t9F261CFE389DD17CC389F1CAF1407883FC2FBD36 
{
	int32_t ___value__;
};
struct UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D ___iuarray;
	int32_t ___iucount;
};
struct UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD 
{
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D ___points;
	int32_t ___pointCount;
};
struct VRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8 
{
	int32_t ___value__;
};
struct ComponentVersions_t6B5961C4DC651154FD63F0C5704184C1902F8CC2 
{
	int32_t ___value__;
};
struct LightType_t9904BD65A669E4678EF2ACB402E7AE7E61C6B83E 
{
	int32_t ___value__;
};
struct NormalMapQuality_tE19F804425B8100A14092BB7F23D4A4977C5751F 
{
	int32_t ___value__;
};
struct OverlapOperation_tF7A1DFAB10D0456A5802070622650329D0F2C0AE 
{
	int32_t ___value__;
};
struct ComponentVersions_tCF065C1CE6F3935A830B2F88D68FE28FD7FE72FC 
{
	int32_t ___value__;
};
struct EdgeProcessing_tDE5A39D3E1FC11BB03D69BB2D7A84E8AC1A24E43 
{
	int32_t ___value__;
};
struct ShadowCastingOptions_t6BD849434B3FFC986C045DE7E4924998D823603A 
{
	int32_t ___value__;
};
struct ShadowCastingSources_tA77F102950C34267D7502B1147ACA7A16E6341FA 
{
	int32_t ___value__;
};
struct EdgeProcessing_tE4170AFAA411A1B9DD6D1C51FD0A1D7F9B6CCDA7 
{
	int32_t ___value__;
};
struct ProjectionType_tDE235E8C03834E96189F3C5B61735AFE40EFDFB3 
{
	int32_t ___value__;
};
struct ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3FECF0DA96110F272EFBED08317E94C449DE9123 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBCDB44165F65D6BEE48CAD34C04286D158C1A200 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4 
{
	int32_t ___gradingMode;
	int32_t ___lutSize;
	bool ___useFastSRGBLinearConversion;
	bool ___supportScreenSpaceLensFlare;
	bool ___supportDataDrivenLensFlare;
};
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_pinvoke
{
	int32_t ___gradingMode;
	int32_t ___lutSize;
	int32_t ___useFastSRGBLinearConversion;
	int32_t ___supportScreenSpaceLensFlare;
	int32_t ___supportDataDrivenLensFlare;
};
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_com
{
	int32_t ___gradingMode;
	int32_t ___lutSize;
	int32_t ___useFastSRGBLinearConversion;
	int32_t ___supportScreenSpaceLensFlare;
	int32_t ___supportDataDrivenLensFlare;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	int32_t ___U3CwidthU3Ek__BackingField;
	int32_t ___U3CheightU3Ek__BackingField;
	int32_t ___U3CmsaaSamplesU3Ek__BackingField;
	int32_t ___U3CvolumeDepthU3Ek__BackingField;
	int32_t ___U3CmipCountU3Ek__BackingField;
	int32_t ____graphicsFormat;
	int32_t ___U3CstencilFormatU3Ek__BackingField;
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField;
	int32_t ___U3CvrUsageU3Ek__BackingField;
	int32_t ____flags;
	int32_t ___U3CmemorylessU3Ek__BackingField;
};
struct ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A 
{
	uint32_t ___m_Value;
	int32_t ___m_Version;
	int32_t ___U3CtypeU3Ek__BackingField;
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
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA  : public ShadowShape2D_tE11456DC730F0E8FBE32420402926DAE0F54EE0E
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_LocalBounds;
	int32_t ___m_EdgeProcessing;
	float ___m_TrimEdge;
	bool ___m_FlipX;
	bool ___m_FlipY;
	float ___m_InitialTrim;
	BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 ___m_BoundingSphere;
};
struct UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___va;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vb;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vc;
	UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC ___c;
	float ___area;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___indices;
};
struct Settings_t3BEFDFF2C1A3D3A215DAF7B76E735B1BFB946C92 
{
	int32_t ___quality;
	float ___frameInfluence;
	float ___jitterScale;
	float ___mipBias;
	float ___varianceClampScale;
	float ___contrastAdaptiveSharpening;
	int32_t ___resetHistoryFrames;
	int32_t ___jitterFrameCountOffset;
};
struct AdditionalLightsShadowAtlasLayout_t2641AB50478ED46482F321134D86853AA802E50E 
{
	NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___m_SortedShadowResolutionRequests;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;
	int32_t ___m_TotalShadowSlicesCount;
	int32_t ___m_TotalShadowResolutionRequestCount;
	bool ___m_TooManyShadowMaps;
	int32_t ___m_ShadowSlicesScaleFactor;
	int32_t ___m_AtlasSize;
};
struct AdditionalLightsShadowAtlasLayout_t2641AB50478ED46482F321134D86853AA802E50E_marshaled_pinvoke
{
	NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___m_SortedShadowResolutionRequests;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;
	int32_t ___m_TotalShadowSlicesCount;
	int32_t ___m_TotalShadowResolutionRequestCount;
	int32_t ___m_TooManyShadowMaps;
	int32_t ___m_ShadowSlicesScaleFactor;
	int32_t ___m_AtlasSize;
};
struct AdditionalLightsShadowAtlasLayout_t2641AB50478ED46482F321134D86853AA802E50E_marshaled_com
{
	NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___m_SortedShadowResolutionRequests;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;
	int32_t ___m_TotalShadowSlicesCount;
	int32_t ___m_TotalShadowResolutionRequestCount;
	int32_t ___m_TooManyShadowMaps;
	int32_t ___m_ShadowSlicesScaleFactor;
	int32_t ___m_AtlasSize;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_JitterMatrix;
	bool ___m_CachedRenderIntoTextureXR;
	bool ___m_InitBuiltinXRConstants;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
	int32_t ___renderType;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect;
	bool ___useScreenCoordOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___screenSizeOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___screenCoordScaleBias;
	int32_t ___pixelWidth;
	int32_t ___pixelHeight;
	float ___aspectRatio;
	float ___renderScale;
	int32_t ___imageScalingMode;
	int32_t ___upscalingFilter;
	bool ___fsrOverrideSharpness;
	float ___fsrSharpness;
	int32_t ___hdrColorBufferPrecision;
	bool ___clearDepth;
	int32_t ___cameraType;
	bool ___isDefaultViewport;
	bool ___isHdrEnabled;
	bool ___allowHDROutput;
	bool ___requiresDepthTexture;
	bool ___requiresOpaqueTexture;
	bool ___postProcessingRequiresDepthTexture;
	bool ___xrRendering;
	bool ___stackLastCameraOutputToHDR;
	int32_t ___defaultOpaqueSortFlags;
	XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF* ___U3CxrU3Ek__BackingField;
	float ___maxShadowDistance;
	bool ___postProcessEnabled;
	bool ___stackAnyPostProcessingEnabled;
	RuntimeObject* ___captureActions;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger;
	bool ___isStopNaNEnabled;
	bool ___isDitheringEnabled;
	int32_t ___antialiasing;
	int32_t ___antialiasingQuality;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer;
	bool ___resolveFinalTarget;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	TaaPersistentData_t7AD3D320FD8FE7195225F0A7C7C676480A6ED775* ___taaPersistentData;
	Settings_t3BEFDFF2C1A3D3A215DAF7B76E735B1BFB946C92 ___taaSettings;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___baseCamera;
};
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_JitterMatrix;
	int32_t ___m_CachedRenderIntoTextureXR;
	int32_t ___m_InitBuiltinXRConstants;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
	int32_t ___renderType;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect;
	int32_t ___useScreenCoordOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___screenSizeOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___screenCoordScaleBias;
	int32_t ___pixelWidth;
	int32_t ___pixelHeight;
	float ___aspectRatio;
	float ___renderScale;
	int32_t ___imageScalingMode;
	int32_t ___upscalingFilter;
	int32_t ___fsrOverrideSharpness;
	float ___fsrSharpness;
	int32_t ___hdrColorBufferPrecision;
	int32_t ___clearDepth;
	int32_t ___cameraType;
	int32_t ___isDefaultViewport;
	int32_t ___isHdrEnabled;
	int32_t ___allowHDROutput;
	int32_t ___requiresDepthTexture;
	int32_t ___requiresOpaqueTexture;
	int32_t ___postProcessingRequiresDepthTexture;
	int32_t ___xrRendering;
	int32_t ___stackLastCameraOutputToHDR;
	int32_t ___defaultOpaqueSortFlags;
	XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF* ___U3CxrU3Ek__BackingField;
	float ___maxShadowDistance;
	int32_t ___postProcessEnabled;
	int32_t ___stackAnyPostProcessingEnabled;
	RuntimeObject* ___captureActions;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger;
	int32_t ___isStopNaNEnabled;
	int32_t ___isDitheringEnabled;
	int32_t ___antialiasing;
	int32_t ___antialiasingQuality;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer;
	int32_t ___resolveFinalTarget;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	TaaPersistentData_t7AD3D320FD8FE7195225F0A7C7C676480A6ED775* ___taaPersistentData;
	Settings_t3BEFDFF2C1A3D3A215DAF7B76E735B1BFB946C92 ___taaSettings;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___baseCamera;
};
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_JitterMatrix;
	int32_t ___m_CachedRenderIntoTextureXR;
	int32_t ___m_InitBuiltinXRConstants;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
	int32_t ___renderType;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect;
	int32_t ___useScreenCoordOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___screenSizeOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___screenCoordScaleBias;
	int32_t ___pixelWidth;
	int32_t ___pixelHeight;
	float ___aspectRatio;
	float ___renderScale;
	int32_t ___imageScalingMode;
	int32_t ___upscalingFilter;
	int32_t ___fsrOverrideSharpness;
	float ___fsrSharpness;
	int32_t ___hdrColorBufferPrecision;
	int32_t ___clearDepth;
	int32_t ___cameraType;
	int32_t ___isDefaultViewport;
	int32_t ___isHdrEnabled;
	int32_t ___allowHDROutput;
	int32_t ___requiresDepthTexture;
	int32_t ___requiresOpaqueTexture;
	int32_t ___postProcessingRequiresDepthTexture;
	int32_t ___xrRendering;
	int32_t ___stackLastCameraOutputToHDR;
	int32_t ___defaultOpaqueSortFlags;
	XRPass_tFC4577E97B88E0EAAAB2EB387AB3A92E9EB9C6DF* ___U3CxrU3Ek__BackingField;
	float ___maxShadowDistance;
	int32_t ___postProcessEnabled;
	int32_t ___stackAnyPostProcessingEnabled;
	RuntimeObject* ___captureActions;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger;
	int32_t ___isStopNaNEnabled;
	int32_t ___isDitheringEnabled;
	int32_t ___antialiasing;
	int32_t ___antialiasingQuality;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer;
	int32_t ___resolveFinalTarget;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	TaaPersistentData_t7AD3D320FD8FE7195225F0A7C7C676480A6ED775* ___taaPersistentData;
	Settings_t3BEFDFF2C1A3D3A215DAF7B76E735B1BFB946C92 ___taaSettings;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___baseCamera;
};
struct IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839 
{
	NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 ___points;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___edges;
	U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088 ___xvasort;
	U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD ___xvbsort;
};
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470 
{
	int32_t ___mainLightIndex;
	int32_t ___additionalLightsCount;
	int32_t ___maxPerObjectAdditionalLightsCount;
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights;
	bool ___shadeAdditionalLightsPerVertex;
	bool ___supportsMixedLighting;
	bool ___reflectionProbeBoxProjection;
	bool ___reflectionProbeBlending;
	bool ___supportsLightLayers;
	bool ___supportsAdditionalLights;
};
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_pinvoke
{
	int32_t ___mainLightIndex;
	int32_t ___additionalLightsCount;
	int32_t ___maxPerObjectAdditionalLightsCount;
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights;
	int32_t ___shadeAdditionalLightsPerVertex;
	int32_t ___supportsMixedLighting;
	int32_t ___reflectionProbeBoxProjection;
	int32_t ___reflectionProbeBlending;
	int32_t ___supportsLightLayers;
	int32_t ___supportsAdditionalLights;
};
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_com
{
	int32_t ___mainLightIndex;
	int32_t ___additionalLightsCount;
	int32_t ___maxPerObjectAdditionalLightsCount;
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights;
	int32_t ___shadeAdditionalLightsPerVertex;
	int32_t ___supportsMixedLighting;
	int32_t ___reflectionProbeBoxProjection;
	int32_t ___reflectionProbeBlending;
	int32_t ___supportsLightLayers;
	int32_t ___supportsAdditionalLights;
};
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B  : public RuntimeObject
{
	RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F* ___m_Owner;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RT;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_ExternalTexture;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_NameID;
	bool ___m_EnableMSAA;
	bool ___m_EnableRandomWrite;
	bool ___m_EnableHWDynamicScale;
	String_t* ___m_Name;
	bool ___m_UseCustomHandleScales;
	RTHandleProperties_tBCB3E1EFE8B366995704C1322B9C443877580CD6 ___m_CustomHandleProperties;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscaleFactorU3Ek__BackingField;
	ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791* ___scaleFunc;
	bool ___U3CuseScalingU3Ek__BackingField;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CreferenceSizeU3Ek__BackingField;
};
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___U3CisInvalidatedU3Ek__BackingField;
	DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B* ___debugShaders;
	ProbeVolumeResources_t30A6677110700C97538A9A5E99ABEE1F847C4CE7* ___probeVolumeResources;
	List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ___m_RendererFeatures;
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___m_RendererFeatureMap;
	bool ___m_UseNativeRenderPass;
};
struct TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___roots;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___ranks;
};
struct Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241 
{
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___m_Edges;
	NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02 ___m_Stars;
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___m_Cells;
	int32_t ___m_CellCount;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ILArray;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_IUArray;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_SPArray;
	int32_t ___m_NumEdges;
	int32_t ___m_NumHulls;
	int32_t ___m_NumPoints;
	int32_t ___m_StarCount;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Flags;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Neighbors;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Constraints;
	int32_t ___m_Allocator;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 
{
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___handle;
	bool ___builtin;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_marshaled_pinvoke
{
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___handle;
	int32_t ___builtin;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_marshaled_com
{
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___handle;
	int32_t ___builtin;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA  : public ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7
{
	int32_t ___m_TransparencySortMode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TransparencySortAxis;
	float ___m_HDREmulationScale;
	float ___m_LightRenderTextureScale;
	Light2DBlendStyleU5BU5D_tD2A922FE5FA60CCC63036A69CD719E15814D265A* ___m_LightBlendStyles;
	bool ___m_UseDepthStencilBuffer;
	bool ___m_UseCameraSortingLayersTexture;
	int32_t ___m_CameraSortingLayersTextureBound;
	int32_t ___m_CameraSortingLayerDownsamplingMethod;
	uint32_t ___m_MaxLightRenderTextureCount;
	uint32_t ___m_MaxShadowRenderTextureCount;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_LightShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_CoreBlitShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_CoreBlitColorAndDepthPS;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_BlitHDROverlay;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_SamplingShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_ProjectedShadowShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_SpriteShadowShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_SpriteUnshadowShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_GeometryShadowShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_GeometryUnshadowShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_FallbackErrorShader;
	PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___m_PostProcessData;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_FallOffLookup;
	Dictionary_2_t96A940D78E875DD4E24C2F48746D6A7CBE9AC441* ___U3ClightMaterialsU3Ek__BackingField;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CspriteSelfShadowMaterialU3Ek__BackingField;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CspriteUnshadowMaterialU3Ek__BackingField;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CgeometrySelfShadowMaterialU3Ek__BackingField;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CgeometryUnshadowMaterialU3Ek__BackingField;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CprojectedShadowMaterialU3Ek__BackingField;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CprojectedUnshadowMaterialU3Ek__BackingField;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___normalsRenderTarget;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___cameraSortingLayerRenderTarget;
	RuntimeObject* ___U3ClightCullResultU3Ek__BackingField;
};
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 
{
	NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___visibleLightsShadowCullingInfos;
	AdditionalLightsShadowAtlasLayout_t2641AB50478ED46482F321134D86853AA802E50E ___shadowAtlasLayout;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults;
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E ___cameraData;
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470 ___lightData;
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832 ___shadowData;
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4 ___postProcessingData;
	bool ___supportsDynamicBatching;
	int32_t ___perObjectData;
	bool ___postProcessingEnabled;
};
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshaled_pinvoke
{
	NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___visibleLightsShadowCullingInfos;
	AdditionalLightsShadowAtlasLayout_t2641AB50478ED46482F321134D86853AA802E50E_marshaled_pinvoke ___shadowAtlasLayout;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults;
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_pinvoke ___cameraData;
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_pinvoke ___lightData;
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_pinvoke ___shadowData;
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_pinvoke ___postProcessingData;
	int32_t ___supportsDynamicBatching;
	int32_t ___perObjectData;
	int32_t ___postProcessingEnabled;
};
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshaled_com
{
	NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___visibleLightsShadowCullingInfos;
	AdditionalLightsShadowAtlasLayout_t2641AB50478ED46482F321134D86853AA802E50E_marshaled_com ___shadowAtlasLayout;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults;
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_com ___cameraData;
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_com ___lightData;
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_com ___shadowData;
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_com ___postProcessingData;
	int32_t ___supportsDynamicBatching;
	int32_t ___perObjectData;
	int32_t ___postProcessingEnabled;
};
struct SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
struct Light2DBase_t21E41B15B3A532090B53439B4E99AB1207263C26  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___m_ShadowGroup;
	int32_t ___m_Priority;
	List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* ___m_ShadowCasters;
};
struct Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC  : public Light2DBase_t21E41B15B3A532090B53439B4E99AB1207263C26
{
	int32_t ___m_ComponentVersion;
	int32_t ___m_LightType;
	int32_t ___m_BlendStyleIndex;
	float ___m_FalloffIntensity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	float ___m_Intensity;
	float ___m_LightVolumeIntensity;
	bool ___m_LightVolumeEnabled;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_ApplyToSortingLayers;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_LightCookieSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DeprecatedPointLightCookieSprite;
	int32_t ___m_LightOrder;
	bool ___m_AlphaBlendOnOverlap;
	int32_t ___m_OverlapOperation;
	float ___m_NormalMapDistance;
	int32_t ___m_NormalMapQuality;
	bool ___m_UseNormalMap;
	bool ___m_ShadowsEnabled;
	float ___m_ShadowIntensity;
	float ___m_ShadowSoftness;
	float ___m_ShadowSoftnessFalloffIntensity;
	bool ___m_ShadowVolumeIntensityEnabled;
	float ___m_ShadowVolumeIntensity;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh;
	LightMeshVertexU5BU5D_t148DD69C87414B5F05F0AEE34D75820F65279329* ___m_Vertices;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_Triangles;
	int32_t ___m_PreviousLightCookieSprite;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedPosition;
	int32_t ___m_BatchSlotIndex;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_CookieSpriteTexture;
	TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 ___m_CookieSpriteTextureHandle;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_LocalBounds;
	BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 ___U3CboundingSphereU3Ek__BackingField;
	bool ___forceUpdate;
	float ___m_PointLightInnerAngle;
	float ___m_PointLightOuterAngle;
	float ___m_PointLightInnerRadius;
	float ___m_PointLightOuterRadius;
	int32_t ___m_ShapeLightParametricSides;
	float ___m_ShapeLightParametricAngleOffset;
	float ___m_ShapeLightParametricRadius;
	float ___m_ShapeLightFalloffSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ShapeLightFalloffOffset;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ShapePath;
	float ___m_PreviousShapeLightFalloffSize;
	int32_t ___m_PreviousShapeLightParametricSides;
	float ___m_PreviousShapeLightParametricAngleOffset;
	float ___m_PreviousShapeLightParametricRadius;
	int32_t ___m_PreviousShapePathHash;
	int32_t ___m_PreviousLightType;
};
struct ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500  : public ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D
{
	int32_t ___m_ComponentVersion;
	bool ___m_HasRenderer;
	bool ___m_UseRendererSilhouette;
	bool ___m_CastsShadows;
	bool ___m_SelfShadows;
	float ___m_AlphaCutoff;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_ApplyToSortingLayers;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ShapePath;
	int32_t ___m_ShapePathHash;
	int32_t ___m_InstanceId;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_ShadowShape2DComponent;
	ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* ___m_ShadowShape2DProvider;
	int32_t ___m_ShadowCastingSource;
	ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* ___m_ShadowMesh;
	int32_t ___m_CastingOption;
	float ___m_PreviousTrimEdge;
	int32_t ___m_PreviousEdgeProcessing;
	int32_t ___m_PreviousShadowCastingSource;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_PreviousShadowShape2DSource;
	ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* ___m_ShadowCasterGroup;
	ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* ___m_PreviousShadowCasterGroup;
	bool ___m_ForceShadowMeshRebuild;
	int32_t ___m_PreviousShadowGroup;
	bool ___m_PreviousCastsShadows;
	int32_t ___m_PreviousPathHash;
	int32_t ___m_SpriteMaterialCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedLossyScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedRotation;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CachedShadowMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CachedInverseShadowMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CachedLocalToWorldMatrix;
};
struct List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34_StaticFields
{
	Light2DU5BU5D_t82B2154049C7A198A49461BF8D3C43B2032C4B53* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B_StaticFields
{
	ShadowCaster2DU5BU5D_tFE30E144D785567FC9F351DB87FC39A1364A38F2* ___s_emptyArray;
};
struct List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37_StaticFields
{
	ShadowCasterGroup2DU5BU5D_t006FAD67E63312F058E4E2601D32D5079738683F* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tF36189722591C3623670D29AB499AC82FAB865C9_StaticFields
{
	__StaticArrayInitTypeSizeU3D6164_t05123BEEBDDF8825CD3C34C29B5AF0703E1CEDA9 ___4DC4F06B6D043D8519F5B6AD2CFF4CE9FACF683BFAD98033ACBC3BD6BAA22410;
	__StaticArrayInitTypeSizeU3D6085_t301FC2821D88A870C37CED58FD29F59C2477555B ___A62D9361CC26234153A8DBF236E444A55C6D213839F9698F938D6AF6FE0C6D05;
};
struct ShadowCasterGroup2DManager_tD4DF649108FFD9B4E2F33AD838D64B91F21D49CB_StaticFields
{
	List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* ___s_ShadowCasterGroups;
};
struct ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields
{
	int32_t ___k_LightPosID;
	int32_t ___k_ShadowRadiusID;
	int32_t ___k_ShadowColorMaskID;
	int32_t ___k_ShadowModelMatrixID;
	int32_t ___k_ShadowModelInvMatrixID;
	int32_t ___k_ShadowModelScaleID;
	int32_t ___k_ShadowContractionDistanceID;
	int32_t ___k_ShadowAlphaCutoffID;
	int32_t ___k_SoftShadowAngle;
	int32_t ___k_ShadowSoftnessFalloffIntensityID;
	int32_t ___k_ShadowShadowColorID;
	int32_t ___k_ShadowUnshadowColorID;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_ProfilingSamplerShadows;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_ProfilingSamplerShadowsA;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_ProfilingSamplerShadowsR;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_ProfilingSamplerShadowsG;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_ProfilingSamplerShadowsB;
	float ___k_MaxShadowSoftnessAngle;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_ShadowColorLookup;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___k_UnshadowColorLookup;
	RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* ___m_RenderTargets;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_RenderTargetIds;
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___m_LightInputTextures;
	ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240* ___m_ProfilingSamplerShadowColorsLookup;
	uint32_t ___U3CmaxTextureCountU3Ek__BackingField;
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
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields
{
	int32_t ___kMaxArea;
	int32_t ___kMaxEdgeCount;
	int32_t ___kMaxIndexCount;
	int32_t ___kMaxVertexCount;
	int32_t ___kMaxTriangleCount;
	int32_t ___kMaxRefineIterations;
	int32_t ___kMaxSmoothenIterations;
	float ___kIncrementAreaFactor;
};
struct PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields
{
	double ___kEpsilon;
	int32_t ___kMaxIntersectionTolerance;
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
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_StaticFields
{
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___zero;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052_StaticFields
{
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___zero;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_StaticFields
{
	bool ___ThrowOnSetRenderTarget;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_StaticFields
{
	int32_t ___k_ColorId;
	int32_t ___k_MainTexId;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B m_Items[1];

	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B value)
	{
		m_Items[index] = value;
	}
};
struct RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF  : public RuntimeArray
{
	ALIGN_FIELD (8) RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* m_Items[1];

	inline RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
struct ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240  : public RuntimeArray
{
	ALIGN_FIELD (8) ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* m_Items[1];

	inline ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisIntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839_m9AB69CC00CE80043D83F7DFBCE866488E246C8FC_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C_m7BCFC0B1FE565D81680F45FC8267E460B43D039C_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54_gshared (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_src, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB_gshared (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2_m55CC2779035AFBCCFD9B87FCC9AB67B8A698DFC8_gshared (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_check, TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2 ___3_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetUpper_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16_mC522DB218F2E0F9767CA24A550B91BE9045D952D_gshared (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_check, TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16 ___3_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_gshared (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_gshared_inline (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_gshared (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8_m937CDE2C0471EAF92BA5B86BF551960EC1D4E6C6_gshared (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___2_check, TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8 ___3_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_gshared (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0_m557792A2DC3C707409AD5786704C1F7864F410AA_gshared (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___2_check, TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0 ___3_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2ED9FEE09431A02D2BCDEC1C1496392E0E13967E_gshared (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8_m5450D65F72CA7410EDE0B8B6BB965639C9E1F49B_gshared (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_values, int32_t ___1_count, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_check, TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8 ___3_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20_m4AC51D7677A0F28915FBFC925C57BFE63B36805A_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_values, int32_t ___1_count, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___2_check, TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20 ___3_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45_m15FA4D36EBA3A39B00B541076154836BDCD46F32_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_gshared (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mCF6388BD8438C65853584A9EA88857B09FE51B97_gshared (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mCFAA667E54D805CAFF19ACFC8E3C7036F30BA405_gshared (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m7E9E200C8AC0B796CE7188B226AB37DBAD37EC7E_gshared (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50_m258B5011A3B37991991591174271F52C24BBE8C5_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50 ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m7CA99BD8B0E7A24B9994325CEA8D931267AC1BDD_gshared (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m573055E6ED3C1024C5623136F7D378B464C79342_gshared (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_gshared_inline (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_gshared_inline (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78F99DD50B9EE3247088B7B56B7B173ABAAB1ADD_gshared (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_gshared_inline (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C_gshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_gshared (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_src, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_src, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_gshared (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_gshared (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowMeshVertex__ctor_m2AA5F11678057369D90EC50FB7617477A9E909C9 (ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79* __this, int32_t ___0_inProjectionType, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_inEdgePosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_inEdgePosition1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemappingInfo_Initialize_mC79F12A1E91E25F931C9F858473E38216719C497 (RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ShadowMesh2D_get_mesh_m77225D909CD28099B6E8E109DC00111881EC1698_inline (ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShadowRendering_set_maxTextureCount_m0E7989731298A22E597B948BD4DDDE84139EFE71_inline (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324 (int32_t ___0_nameID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* RTHandles_Alloc_mBC3081E1BB6BBE2F7722B13009D5D30DAD5DD67A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_tex, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* CoreUtils_CreateEngineMaterial_m81DECC0AF6901F95B5041A00ED588F5230546AD2 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_projectedShadowMaterial_m2B41EE220BB6CF8F6AFDB4D6B9D5CEE0FB6A1532_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_projectedShadowShader_m487E9F13199027ABD59B6DBD21228CD3EAEB345E_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, int32_t ___1_offset, int32_t ___2_pass, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_projectedShadowMaterial_m92F2FF910697148A41C6AEDC5600838FF0F97E79_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_projectedUnshadowMaterial_m850DE00788FCD51337CA3A1B3DF818CED804A93B_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_projectedUnshadowMaterial_m6A37BE29BC05D7A3FBFC915F43D5E4BCEB43FF85_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_spriteSelfShadowMaterial_m7436BA5A575F6DF3AA3732E7C7C44ABFD63CDD20_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_spriteShadowShader_mEE8A51EECAD1865B4CA800B88ACD498A406DC638_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_spriteSelfShadowMaterial_mB2B00B1F4E2DEE264AA79B0C2F22BA329095AECD_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_spriteUnshadowMaterial_m4415A748869AAA64EAC66ED6E1588639DEC52F2F_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_spriteUnshadowShader_m8CF9DD2D555495EDD0743F91C50EED1F58B9DABE_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_spriteUnshadowMaterial_mD8C9E9C343D025813148B3379D8F1828A423EE2E_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_geometrySelfShadowMaterial_mF219386663094A2C9BDC3B4E69EF8112827DC86A_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_geometryShadowShader_m34010B53A85C227A4CFF1991A115EC2FDADBAB59_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_geometrySelfShadowMaterial_mBCF9BB3E6AD7C14085F5B23ED646430D9CE7B590_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_geometryUnshadowMaterial_mCBF3F176611E39E5D20A4917440AE0FC5B54E950_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_geometryUnshadowShader_m22EB7203D804A2692B1F8343C72BDED346E00D2A_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_geometryUnshadowMaterial_m533C4F9582B0C6E1270E153C9311D139858EC233_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CalculateFrustumCornersOrthographic_m22EA13A775F8325A4CF1480DFAE06991A687277F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, float ___1_distance, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___2_corners, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CalculateFrustumCornersPerspective_mA6985BEDB971D8E85C79442820EEC60B084C69D5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, float ___1_distance, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___2_corners, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Max_m9B6D8FEE7F4CE32C0AAB682606FFBA59E1F37C74_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Min_m1CAC3499F14EA87366C0C3C1F501B4FB2863CDB4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
inline Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* List_1_get_Item_m0F64C67B6F6980EE49C60350F878BD5E31AEA07E (List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* (*) (List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m32F506BE5FE2E4C613F06F8B208E0D5FC794601F_inline (List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* ShadowCasterGroup2DManager_get_shadowCasterGroups_mD2D34E88683CFFBE42142BC775F83689D96ADCC7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ShadowRendering_CalculateWorldSpaceBounds_mFC268ED4AD9EE7410AF79C2CDEB1B067D1371CB9 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, RuntimeObject* ___1_cullResult, const RuntimeMethod* method) ;
inline ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF (List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* (*) (List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* ShadowCasterGroup2D_GetShadowCasters_mDCD74C94A151D61CAC8F53DE3750AD40CBFE51BA_inline (ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* __this, const RuntimeMethod* method) ;
inline ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78 (List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* (*) (List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShadowCaster2D_get_shadowCastingSource_mE28EEAF8CC7C2E234C6CDE2C9B3688189D0F1F7E_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* ShadowCaster2D_get_shadowShape2DProvider_mAF6299D6D50E4B1FC94464BDA5667FBAB2552525_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ShadowCaster2D_get_shadowShape2DComponent_mE86BE25189D62590E996611DB23634FD253E7901_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeProviderUtility_CallOnBeforeRender_m7C51462DD5E927D3EF32E4948DB40644A7B245C2 (ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* ___0_shapeProvider, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___1_component, ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* ___2_shadowMesh, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___3_bounds, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_inline (List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_inline (List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CreateShadowRenderTexture_mF1678878C9EA31F8AA3DA7342A60DD8CD66C2EB1 (RuntimeObject* ___0_pass, int32_t ___1_handleId, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 ___2_renderingData, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___3_cmdBuffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_RenderShadows_mA73CBD0D7A92973C0736EBD2B519B455CEAB186A (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___1_rendererData, LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* ___2_layer, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___3_light, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CreateShadowRenderTexture_m646D41B6763426609E002132D260B479E7948D2D (RuntimeObject* ___0_pass, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 ___1_renderingData, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___2_cmdBuffer, int32_t ___3_shadowIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9_inline (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_rt, int32_t ___1_colorLoadAction, int32_t ___2_colorStoreAction, int32_t ___3_depthLoadAction, int32_t ___4_depthStoreAction, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mF79756BB41395A459CC5FD5CFFC517F65D93D86C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___0_clearFlags, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_backgroundColor, float ___2_depth, uint32_t ___3_stencil, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* CommandBufferHelpers_GetRasterCommandBuffer_mF283AF98E23435091D7F6EBCBBC445E8C7F6CF7A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_baseBuffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Renderer2DData_get_lightRenderTextureScale_m6FD4326249B00A168A36C2B314D4C035FEE7CB8F_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_m0D1C84B1D245FA247C36A59D816BBB179E0670D1 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_graphicsFormat_m037DA25F9A8B956D830C7B7E5C6E258DC1133A13 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___0_nameID, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___1_desc, int32_t ___2_filter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterCommandBuffer_SetGlobalVector_mFAFB36D110E22296957D8816D2E2588543CC1E30 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* __this, int32_t ___0_nameID, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterCommandBuffer_SetGlobalMatrix_m447561261E28EF447ACD0C87B12CDA72FC71958E (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* __this, int32_t ___0_nameID, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_shadowSoftnessFalloffIntensity_m46A7A9E2EC93A73206E76EDC333B62AFB4919326_inline (Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterCommandBuffer_SetGlobalFloat_m74D67A28A137B83CDE68CBF45902C201D39F51C5 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowCaster2D_get_edgeProcessing_m60499748789A90315F9B94656F8C68D937E35D97 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShadowCaster2D_get_trimEdge_m3E133B9631F634C782E323204196FF536ABBD51F (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_mD6F1CC7E87FA88B5838D5EDAFBA602EF94FE1F69 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___0_name, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalColor_m20990264BA5EDA9EF20B587E2D258E08FCC9584C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___0_nameID, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterCommandBuffer_SetGlobalColor_m576870BD1840A40B754798D87A843585F9DCAC1B (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* __this, int32_t ___0_nameID, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowCaster2D_IsLit_m84045950AA9DE345C719C1A1F0AA4A0944FF71B7 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___0_light, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowCaster2D_IsShadowedLayer_mB707B6F9E7F3AE915122E6B6D9684435668FDFF1 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, int32_t ___0_layer, const RuntimeMethod* method) ;
inline bool Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowRendering_ShadowCasterIsVisible_m901BA428CB526E0ECB849A88BBD9A1F49D5B036F (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___0_shadowCaster, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowCaster2D_get_castsShadows_m4D2E2254C8C21E8EACF99F26ECCB10E33EBAC234 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_SetShadowProjectionGlobals_m4648B05392469B3A37B8B46D193E85F9020D3001 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___1_shadowCaster, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___2_light, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterCommandBuffer_DrawMesh_mA7E21B2FB94C16ACF42F955089B019F153A3C511 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_matrix, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_material, int32_t ___3_submeshIndex, int32_t ___4_shaderPass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteShapeRenderer_GetSplineMeshCount_mB0789A1FCA7CCC40FA3083EF173146088719A62A (SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShadowCaster2D_get_spriteMaterialCount_m203A04545F355886EE50BFD034BEDEF7377FF021_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ShadowRendering_GetRendererFromCaster_m6D7D8BE57FD015AD6E17AC71ABC06B4EBEBDCD68 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___0_shadowCaster, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___1_light, int32_t ___2_layerToRender, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ShadowCaster2D_get_alphaCutoff_mFAF68B32010B7ACF0D2C0E084D60EBA59BEC7834_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowCaster2D_get_selfShadows_m40E1BF40EEC25DF7538D6E6CACC6FFF86A113475 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowRendering_GetRendererSubmeshes_m89AC52C66C3E91562D51094BC3F28F383D770B89 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_renderer, ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___1_shadowCaster2D, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RasterCommandBuffer_DrawRenderer_mF5EDCB5D5417597C726C38DA53612196CBAA05AD (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_renderer, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, int32_t ___2_submeshIndex, int32_t ___3_shaderPass, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShadowCaster2D_get_castingOption_m11F5F86721E7CABA77996CDFCC3741F3C9A8F9DA_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope__ctor_m9E02453E096ED9C287DE7B8ECA111FA9A71F744C (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, BaseCommandBuffer_t82E5E256352AA36243FB8F4D56B299E749323C53* ___0_cmd, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___1_sampler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4 (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 Light2D_get_boundingSphere_m1B78AF6A3981BE032C1EE459C109948160B307E0_inline (Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_shadowSoftness_m5127B43BDA9A3C5CD99CF8976D3CE9A0F5A79683_inline (Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetProjectedShadowMaterial_mF79827ED39DF40998A911656E1C198D25BF4D0C9 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetProjectedUnshadowMaterial_mFAF66A404023EC26ACB31CB946BDEAB1F6450EE9 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetSpriteShadowMaterial_mC47BECEDD6453FAE2E49E2223816F278083CB42E (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetSpriteUnshadowMaterial_mD7C249A243DDDFED43E48D97B20AC32266D778B3 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetGeometryShadowMaterial_mA143EE752E3247C63FF820BABA58AA12AA3E15F2 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetGeometryUnshadowMaterial_m300ECB92E475135406D7ACD1524823F00FB6AC18 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_RenderProjectedShadows_m4C2DECC72599FC8F444FF2BF7038EEA047F1748D (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, int32_t ___1_layerToRender, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___2_light, List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* ___3_shadowCasters, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_projectedShadowsMaterial, int32_t ___5_pass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_RenderSelfShadowOption_mA4F58650434E0940C1E3A73FDAEA480973CFC2A9 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, int32_t ___1_layerToRender, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___2_light, List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* ___3_shadowCasters, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_projectedUnshadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___5_spriteShadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___6_spriteUnshadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___7_geometryShadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___8_geometryUnshadowMaterial, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7 (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_gshared)(___0_nativeArray, method);
}
inline void ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA, const RuntimeMethod*))ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool math_isinf_m4901864832BAA489A01E23F560733ACEF6E3ED60_inline (double ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline (double ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ModuleHandle_OrientFastDouble_m22FA5D345F2DE849281B3A4FD34A094C241FAC2F (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_a, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_b, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CheckCollinear_m2DDF994C13C20490A8520E11CDA42958EA13E026 (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_a0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_a1, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_b0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___3_b1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_LineLineIntersection_m17350F15EBC948F829EB7C392AD18A7AFD241284 (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_a0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_a1, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_b0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___3_b1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_LineLineIntersection_mE3D6BA5A3BEAFD6CF5168142443F49E1B4A086ED (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_p1, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_p2, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_p3, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___3_p4, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* ___4_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline void ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisIntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839_m9AB69CC00CE80043D83F7DFBCE866488E246C8FC (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839 ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839, const RuntimeMethod*))ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisIntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839_m9AB69CC00CE80043D83F7DFBCE866488E246C8FC_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C_m7BCFC0B1FE565D81680F45FC8267E460B43D039C (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C, const RuntimeMethod*))ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C_m7BCFC0B1FE565D81680F45FC8267E460B43D039C_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 TessLink_CreateLink_m29A2928ED0ECDA9EE29A29E2EC92D6678F10FF05 (int32_t ___0_count, int32_t ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_distance_m72BEFBAADFC4404FADD3AD81F7EDD40E32624F4D_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessLink_Link_m371C8A216AFD9AC8BCD5F015C59DD926F8088B8B (TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08 (TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA math_min_m1D64D6B67B27FD9738D14BCEE6298146CB05CE00_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessLink_DestroyLink_m8AE3E6F07F5695531C7712DC0777B62A7494AF1F (TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 ___0_link, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54 (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Multiply_m34D03129CE0D7AD665A914DE83CB749585B2455F_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA double2_op_Implicit_m168C031549D6C086B7C49ECA5B18C892B3112F17_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_v, const RuntimeMethod* method) ;
inline void ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_src, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2, int32_t, const RuntimeMethod*))ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_gshared)(___0_src, ___1_dst, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarGraph_RemoveDuplicateEdges_m02B7AF8FAF00D6029D902205B836E6E7B9B9FD43 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___0_edges, int32_t* ___1_edgeCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_duplicates, int32_t ___3_duplicateCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CalculateEdgeIntersections_mD706558D362051701D8FBF2757B7C4A2EFB04D54 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int32_t ___1_edgeCount, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 ___2_points, int32_t ___3_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___4_results, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* ___5_intersects, int32_t* ___6_resultCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CalculateTJunctions_mEE0C82242AAEC33550DF9992A5F259762D5CFD44 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int32_t ___1_edgeCount, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 ___2_points, int32_t ___3_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___4_results, int32_t* ___5_resultCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CutEdges_mD2C22A6E61E85C92EFE1EE79E687F67B3FCE01BF (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* ___0_points, int32_t* ___1_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___2_edges, int32_t* ___3_edgeCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___4_tJunctions, int32_t* ___5_tJunctionCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___6_intersections, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 ___7_intersects, int32_t ___8_intersectionCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarGraph_RemoveDuplicatePoints_m0E4EA60CACDB36682410B04FD3DDB7A92C31A0EA (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* ___0_points, int32_t* ___1_pointCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___2_duplicates, int32_t* ___3_duplicateCount, int32_t ___4_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, const RuntimeMethod*))NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*, const RuntimeMethod*))NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_a, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_b, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_c, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tessellator_SetAllocator_m66AFC39E8CFBDC82638D7D7BC3BA70CB4B818C96_inline (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_allocator, const RuntimeMethod* method) ;
inline int32_t ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2_m55CC2779035AFBCCFD9B87FCC9AB67B8A698DFC8 (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_check, TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2 ___3_condition, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8, int32_t, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2, const RuntimeMethod*))ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2_m55CC2779035AFBCCFD9B87FCC9AB67B8A698DFC8_gshared)(___0_values, ___1_count, ___2_check, ___3_condition, method);
}
inline int32_t ModuleHandle_GetUpper_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16_mC522DB218F2E0F9767CA24A550B91BE9045D952D (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_check, TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16 ___3_condition, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8, int32_t, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16, const RuntimeMethod*))ModuleHandle_GetUpper_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16_mC522DB218F2E0F9767CA24A550B91BE9045D952D_gshared)(___0_values, ___1_count, ___2_check, ___3_condition, method);
}
inline int32_t ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*, int32_t, const RuntimeMethod*))ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_gshared)(__this, ___0_index, method);
}
inline int32_t ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_inline (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*, const RuntimeMethod*))ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_gshared_inline)(__this, method);
}
inline void ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679 (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*, int32_t, int32_t, const RuntimeMethod*))ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_AddPoint_m1B8B2A1C5A2F7742F1E5AF1D7618E65C1B75C70B (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___3_p, int32_t ___4_idx, const RuntimeMethod* method) ;
inline int32_t ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8_m937CDE2C0471EAF92BA5B86BF551960EC1D4E6C6 (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___2_check, TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8 ___3_condition, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8, int32_t, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8, const RuntimeMethod*))ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8_m937CDE2C0471EAF92BA5B86BF551960EC1D4E6C6_gshared)(___0_values, ___1_count, ___2_check, ___3_condition, method);
}
inline void ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9 (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, int32_t, int32_t, const RuntimeMethod*))ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_gshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_InsertHull_mC363D2CABF716C07C41BB4209A4BCBCC50F1EFC1 (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_Hulls, int32_t ___1_Pos, int32_t* ___2_Count, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___3_Value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_SplitHulls_mC558F30B7A383F1169945126EF5FF34B2E9B54C9 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t* ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___3_evt, const RuntimeMethod* method) ;
inline int32_t ModuleHandle_GetEqual_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0_m557792A2DC3C707409AD5786704C1F7864F410AA (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_values, int32_t ___1_count, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___2_check, TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0 ___3_condition, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8, int32_t, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0, const RuntimeMethod*))ModuleHandle_GetEqual_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0_m557792A2DC3C707409AD5786704C1F7864F410AA_gshared)(___0_values, ___1_count, ___2_check, ___3_condition, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_EraseHull_mC63AB321BFF1D86A25F33DE2180CD685D138069C (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_Hulls, int32_t ___1_Pos, int32_t* ___2_Count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_MergeHulls_m9A96C241CD12A18A2CF1FAC88978385323F57DFE (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t* ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___3_evt, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessEdgeCompare_Compare_mE3BC27F4E0F907DADA5C2B96C0826122EBB34E97 (TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m2ED9FEE09431A02D2BCDEC1C1496392E0E13967E (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2ED9FEE09431A02D2BCDEC1C1496392E0E13967E_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_InsertUniqueEdge_m05BA0DE1A1B7A7392EA482F6AFD23CCE325D4625 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_e, int32_t* ___2_edgeCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_PrepareDelaunay_mB942127F1C81668537200C7D5BEBEAB81A8E8396 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int32_t ___1_edgeCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
inline int32_t ModuleHandle_GetEqual_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8_m5450D65F72CA7410EDE0B8B6BB965639C9E1F49B (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_values, int32_t ___1_count, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_check, TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8 ___3_condition, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2, int32_t, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8, const RuntimeMethod*))ModuleHandle_GetEqual_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8_m5450D65F72CA7410EDE0B8B6BB965639C9E1F49B_gshared)(___0_values, ___1_count, ___2_check, ___3_condition, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellator_FindConstraint_m6913A7E958CC2DF88EF0FF08E6651728B26C547A (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_AddTriangle_m007B2BB6D24FC02369BD0777488E181BF3D18544 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_i, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_RemovePair_mFCFB259D9EB11DF42B6D598B2577324DEB458C45 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_r, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_RemoveTriangle_m34E53EFC4378A920679A5FD8C30C02630CD78968 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_i, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_EdgeFlip_m1C6D8B63CCA7B3A8183D14680904C72FBA89C843 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_i, int32_t ___1_j, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleHandle_IsInsideCircle_m5DB9909A76433AC967E655FA2FE550020079D780 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_a, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_b, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_c, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___3_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___1_stack, int32_t* ___2_stackCount, int32_t ___3_a, int32_t ___4_b, int32_t ___5_x, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_GetCells_m67140E0BC8D71B44D99C55F76B7FB4160F853854 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t* ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_ApplyDelaunay_m39B60F4E8FE33D874D762C034A2D1157F28FCF49 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___1_edges, const RuntimeMethod* method) ;
inline int32_t ModuleHandle_GetEqual_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20_m4AC51D7677A0F28915FBFC925C57BFE63B36805A (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_values, int32_t ___1_count, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___2_check, TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20 ___3_condition, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57, int32_t, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20, const RuntimeMethod*))ModuleHandle_GetEqual_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20_m4AC51D7677A0F28915FBFC925C57BFE63B36805A_gshared)(___0_values, ___1_count, ___2_check, ___3_condition, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellator_FindNeighbor_m3BD0F869CABD9603D3EAF91D591931C8BF79C2A1 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_cells, int32_t ___1_count, int32_t ___2_a, int32_t ___3_b, int32_t ___4_c, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00 (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00_gshared)(___0_nativeArray, method);
}
inline void ModuleHandle_InsertionSort_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45_m15FA4D36EBA3A39B00B541076154836BDCD46F32 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45 ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45, const RuntimeMethod*))ModuleHandle_InsertionSort_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45_m15FA4D36EBA3A39B00B541076154836BDCD46F32_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_Constrain_mF9C988B9CE9F1C8E4F518FE3850D5FE9577D954F (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t* ___0_count, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213 (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*, const RuntimeMethod*))NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_RemoveExterior_m63CD3C9CFC589841E8071F8095AE44C9DAC4F4F3 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t* ___0_cellCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_RemoveInterior_m613C8F301ABDA9F6C96049E2F1675539E2F56756 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_cellCount, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mCF6388BD8438C65853584A9EA88857B09FE51B97 (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mCF6388BD8438C65853584A9EA88857B09FE51B97_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_mCFAA667E54D805CAFF19ACFC8E3C7036F30BA405 (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mCFAA667E54D805CAFF19ACFC8E3C7036F30BA405_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m7E9E200C8AC0B796CE7188B226AB37DBAD37EC7E (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m7E9E200C8AC0B796CE7188B226AB37DBAD37EC7E_gshared)(___0_nativeArray, method);
}
inline void ModuleHandle_InsertionSort_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50_m258B5011A3B37991991591174271F52C24BBE8C5 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50 ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50, const RuntimeMethod*))ModuleHandle_InsertionSort_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50_m258B5011A3B37991991591174271F52C24BBE8C5_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_pow_m2B2C611A37952CFB13BB0AE800A6A601A2E4A49B_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_m7CA99BD8B0E7A24B9994325CEA8D931267AC1BDD (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B*, const RuntimeMethod*))NativeArray_1_Dispose_m7CA99BD8B0E7A24B9994325CEA8D931267AC1BDD_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m573055E6ED3C1024C5623136F7D378B464C79342 (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8*, const RuntimeMethod*))NativeArray_1_Dispose_m573055E6ED3C1024C5623136F7D378B464C79342_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_Triangulate_mE55C698C207EA1A8DA592191AB17C3FB7688989E (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, int32_t ___1_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___2_edges, int32_t ___3_edgeCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_Cleanup_m54EFF571CA8971F236A791FC880C8046286D2A37 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_inline (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_gshared_inline)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_inline (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m78F99DD50B9EE3247088B7B56B7B173ABAAB1ADD (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*, const RuntimeMethod*))NativeArray_1_Dispose_m78F99DD50B9EE3247088B7B56B7B173ABAAB1ADD_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_inline (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullPointL_Test_mD67B5326AED143E216C7DC238637E8E0B3131ECC (TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p, float* ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullPointU_Test_m3AF0A2CD6162B20C77771850BF94DC7A2D8ED9C2 (TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p, float* ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tessellator_FindSplit_m10B801FE843957B0D014E7867373EAF6AA2CF1FD (UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_hull, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_edge, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullEventLe_Test_m4FE651114100DE7E07DBADE520E75FC168A97CB3 (TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_p, float* ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullEventE_Test_mD7344227B61F43A6A023EBC2F1C13140FD082F49 (TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_p, float* ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestEdgePointE_Test_m1405C8998CF580F46817D5D0F33BBC98B4CC240B (TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_h, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_p, float* ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessCellCompare_Compare_m33DEA3199CA382144A3B0376035D2F1A789B4108 (TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_a, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestCellE_Test_m41B697E52090E8C53B5FF1ABE7981AAFB2E48C3E (TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_h, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_p, float* ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XCompare_Compare_mC591D9D097659ECE784A849856E80AB4D5E2C11A (XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E* __this, double ___0_a, double ___1_b, const RuntimeMethod* method) ;
inline void ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E, const RuntimeMethod*))ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C_gshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntersectionCompare_Compare_m47AF21131D95CE78ACD63B1848834162EE5FB582 (IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessEventCompare_Compare_mCB358637173C49F5385C5C10E6EF7FB2998FEF40 (TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50* __this, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___0_a, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessJunctionCompare_Compare_m28B7673AAA0AD8D3EAFE0DD9289AB335D4350F13 (TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaEdgeCompare_Compare_m4AE4388767DAE729E5F497C66009C5DEB796B61A (DelaEdgeCompare_tE7F76464E799DE60A8BF6D3237C394A4D423F094* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_a, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mEF31DE7BD0179009683C5D7B0C58E6571B30CF4A_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_cross_m4CA2DAE150C6381B0D05E8AA9E48E88CF6157180_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModuleHandle_Sign_m2A3FE8C13958F68CA76C2F1A510C4B90ED9168F1 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_p1, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p2, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_p3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_va, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_vb, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_vc, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC ModuleHandle_CircumCircle_m74CD844316D22901FA11DDFA9880D477AAA0722F (UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 ___0_tri, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int4__ctor_m4E8D71A09721E26F7FCCE82EA8AD699062EE6216_inline (int4_tBA77D4945786DE82C3A487B33955EA1004996052* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, int32_t ___3_w, const RuntimeMethod* method) ;
inline void ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5 (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_src, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E, int32_t, const RuntimeMethod*))ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_gshared)(___0_src, ___1_dst, ___2_length, method);
}
inline void ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_src, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, int32_t, const RuntimeMethod*))ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2_gshared)(___0_src, ___1_dst, ___2_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_min_m68ED612C41E325FA3446050EA04D0AC0CD191558_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_max_mFD64D6399932C2D91018BA7895C06FD055E1361B_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Reorder_m40FFFB135A6763AE1ED04125D4AC161FFE65ABFF (int32_t ___0_startVertexCount, int32_t ___1_index, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___2_indices, int32_t* ___3_indexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___4_vertices, int32_t* ___5_vertexCount, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_GraphConditioner_m322541485AFCB09F1FDF3609BECCB093D0DA138E (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___1_pgPoints, int32_t* ___2_pgPointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___3_pgEdges, int32_t* ___4_pgEdgeCount, bool ___5_resetTopology, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_Tessellate_mE45146D6B03B63F8D23C19B8B3FAF0047300B1AC (int32_t ___0_allocator, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_pgPoints, int32_t ___2_pgPointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___3_pgEdges, int32_t ___4_pgEdgeCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___5_outputVertices, int32_t* ___6_vertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___7_outputIndices, int32_t* ___8_indexCount, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E*, const RuntimeMethod*))NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_Validate_m55816BC6804855F94178B5FDEC284BB63C0ACC88 (int32_t ___0_allocator, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_inputPoints, int32_t ___2_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___3_inputEdges, int32_t ___4_edgeCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___5_outputPoints, int32_t* ___6_outputPointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___7_outputEdges, int32_t* ___8_outputEdgeCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_TransferOutput_mE769E946634074513DB462A6E244FD843ED2135C (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_srcEdges, int32_t ___1_srcEdgeCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___2_dstEdges, int32_t* ___3_dstEdgeCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___4_srcIndices, int32_t ___5_srcIndexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___6_dstIndices, int32_t* ___7_dstIndexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___8_srcVertices, int32_t ___9_srcVertexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___10_dstVertices, int32_t* ___11_dstVertexCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t math_asulong_m2CF160E23B5FF618A85C3C29B2FB1C000E40290F_inline (double ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_asdouble_m3E7BC790C743E67EA45476AECD6D2D9A9E62E4F2_inline (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA double2_op_Subtraction_mDAD1E402F52C548544D20D62D7FA098F4F858BC8_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_lhs, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_length_mBC9788A14DDEC3FA5794F7F49EDD1516C5EDE4E3_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, double ___0_x, double ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double2__ctor_m3355A4008574AE2483EAD2841176C67734F10F33_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_length_m3DB47D254C8544FBB740A892B4AE2143E8F45634_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_aslong_mCD3846AC0EFB4901B00A20D0960C80C8CBE66366_inline (double ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_asdouble_m4C4CC1B9299FE33530ED375768D67B00676C31C8_inline (int64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_dot_mA992F4ADC67180A7EB3850222857193CD0F6B21E_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_sqrt_mA3A9D5DFDF6841F8836E3ECD5D83555842383F36_inline (double ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowMeshVertex__ctor_m2AA5F11678057369D90EC50FB7617477A9E909C9 (ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79* __this, int32_t ___0_inProjectionType, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_inEdgePosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_inEdgePosition1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_inEdgePosition0;
		float L_2 = L_1.___x;
		L_0->___x = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_inEdgePosition0;
		float L_5 = L_4.___y;
		L_3->___y = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___position);
		L_6->___z = (0.0f);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_7 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(&__this->___tangent);
		int32_t L_8 = ___0_inProjectionType;
		L_7->___x = ((float)L_8);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_9 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(&__this->___tangent);
		L_9->___y = (0.0f);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_10 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(&__this->___tangent);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___2_inEdgePosition1;
		float L_12 = L_11.___x;
		L_10->___z = L_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_13 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(&__this->___tangent);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___2_inEdgePosition1;
		float L_15 = L_14.___y;
		L_13->___w = L_15;
		return;
	}
}
IL2CPP_EXTERN_C  void ShadowMeshVertex__ctor_m2AA5F11678057369D90EC50FB7617477A9E909C9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_inProjectionType, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_inEdgePosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_inEdgePosition1, const RuntimeMethod* method)
{
	ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShadowMeshVertex_t79CEE224683C48457A66B224C228E3A6F7529B79*>(__this + _offset);
	ShadowMeshVertex__ctor_m2AA5F11678057369D90EC50FB7617477A9E909C9(_thisAdjusted, ___0_inProjectionType, ___1_inEdgePosition0, ___2_inEdgePosition1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemappingInfo_Initialize_mC79F12A1E91E25F931C9F858473E38216719C497 (RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4* __this, const RuntimeMethod* method) 
{
	{
		__this->___count = 0;
		__this->___index = (-1);
		__this->___v0Offset = 0;
		__this->___v1Offset = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void RemappingInfo_Initialize_mC79F12A1E91E25F931C9F858473E38216719C497_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RemappingInfo_t27437378F969AFC36D804A6C4F0F974E20EF15D4*>(__this + _offset);
	RemappingInfo_Initialize_mC79F12A1E91E25F931C9F858473E38216719C497(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeProviderUtility_CallOnBeforeRender_m7C51462DD5E927D3EF32E4948DB40644A7B245C2 (ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* ___0_shapeProvider, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___1_component, ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* ___2_shadowMesh, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___3_bounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___1_component;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* L_2 = ___0_shapeProvider;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = ___1_component;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* L_6 = ___0_shapeProvider;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7 = ___1_component;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_8 = ___3_bounds;
		ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* L_9 = ___2_shadowMesh;
		NullCheck(L_6);
		VirtualActionInvoker3< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, ShadowShape2D_tE11456DC730F0E8FBE32420402926DAE0F54EE0E* >::Invoke(10, L_6, L_7, L_8, L_9);
		return;
	}

IL_0023:
	{
		ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* L_10 = ___2_shadowMesh;
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* L_11 = ___2_shadowMesh;
		NullCheck(L_11);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12;
		L_12 = ShadowMesh2D_get_mesh_m77225D909CD28099B6E8E109DC00111881EC1698_inline(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* L_14 = ___2_shadowMesh;
		NullCheck(L_14);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15;
		L_15 = ShadowMesh2D_get_mesh_m77225D909CD28099B6E8E109DC00111881EC1698_inline(L_14, NULL);
		NullCheck(L_15);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_15, NULL);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeProviderUtility_PersistantDataCreated_m435BC95D833768183FCB85269612D96AF54B7791 (ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* ___0_shapeProvider, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___1_component, ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* ___2_shadowMesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___1_component;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* L_2 = ___0_shapeProvider;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* L_3 = ___0_shapeProvider;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = ___1_component;
		ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* L_5 = ___2_shadowMesh;
		NullCheck(L_3);
		VirtualActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, ShadowShape2D_tE11456DC730F0E8FBE32420402926DAE0F54EE0E* >::Invoke(9, L_3, L_4, L_5);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeProviderUtility__ctor_mBFDC150C86C11364B9B1650E4A63BB80A8EE7D0C (ShapeProviderUtility_t4024275446F2139D99C53FBF0D4981653107F80E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ShadowRendering_get_maxTextureCount_m1BC0EA9B75B149E2604389A7FBF8A1CD6589D72A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___U3CmaxTextureCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_set_maxTextureCount_m0E7989731298A22E597B948BD4DDDE84139EFE71 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___U3CmaxTextureCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ShadowRendering_get_lightInputTextures_mE4AFC2A828A8BE487069D55E4500992BDDD44FA4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_0 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_InitializeBudget_mF4924A4929E5A768A8EC050D901BBDAA87CF572E (uint32_t ___0_maxTextureCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTHandles_t84D932A74064E591F31E9813FBED5D64F5CC888C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD24E0611904A42C1E931A39EB89DC52BC9F76653);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* L_0 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* L_1 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets;
		NullCheck(L_1);
		uint32_t L_2 = ___0_maxTextureCount;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int64_t)((int64_t)(uint64_t)L_2))))
		{
			goto IL_0081;
		}
	}

IL_0013:
	{
		uint32_t L_3 = ___0_maxTextureCount;
		RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* L_4 = (RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF*)(RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF*)SZArrayNew(RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF_il2cpp_TypeInfo_var, (uint32_t)L_3);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets), (void*)L_4);
		uint32_t L_5 = ___0_maxTextureCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds), (void*)L_6);
		uint32_t L_7 = ___0_maxTextureCount;
		ShadowRendering_set_maxTextureCount_m0E7989731298A22E597B948BD4DDDE84139EFE71_inline(L_7, NULL);
		V_0 = 0;
		goto IL_007b;
	}

IL_0033:
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds;
		int32_t L_9 = V_0;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD24E0611904A42C1E931A39EB89DC52BC9F76653, L_12, NULL);
		int32_t L_14;
		L_14 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_13, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_14);
		RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* L_15 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets;
		int32_t L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_21;
		L_21 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_20, NULL);
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_defaults.int32_class, &L_23);
		String_t* L_25;
		L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD24E0611904A42C1E931A39EB89DC52BC9F76653, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(RTHandles_t84D932A74064E591F31E9813FBED5D64F5CC888C_il2cpp_TypeInfo_var);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_26;
		L_26 = RTHandles_Alloc_mBC3081E1BB6BBE2F7722B13009D5D30DAD5DD67A(L_21, L_25, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_26);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007b:
	{
		int32_t L_28 = V_0;
		uint32_t L_29 = ___0_maxTextureCount;
		if ((((int64_t)((int64_t)L_28)) < ((int64_t)((int64_t)(uint64_t)L_29))))
		{
			goto IL_0033;
		}
	}

IL_0081:
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_30 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures;
		if (!L_30)
		{
			goto IL_0094;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_31 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures;
		NullCheck(L_31);
		uint32_t L_32 = ___0_maxTextureCount;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))) == ((int64_t)((int64_t)(uint64_t)L_32))))
		{
			goto IL_009f;
		}
	}

IL_0094:
	{
		uint32_t L_33 = ___0_maxTextureCount;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_34 = (RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)SZArrayNew(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var, (uint32_t)L_33);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures), (void*)L_34);
	}

IL_009f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, int32_t ___1_offset, int32_t ___2_pass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___0_shader;
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = CoreUtils_CreateEngineMaterial_m81DECC0AF6901F95B5041A00ED588F5230546AD2(L_0, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowColorMaskID;
		int32_t L_4 = ___1_offset;
		NullCheck(L_2);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_2, L_3, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))&((int32_t)31))))), NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = L_2;
		int32_t L_6 = ___2_pass;
		NullCheck(L_5);
		bool L_7;
		L_7 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_5, L_6, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetProjectedShadowMaterial_mF79827ED39DF40998A911656E1C198D25BF4D0C9 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_0 = ___0_rendererData;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer2DData_get_projectedShadowMaterial_m2B41EE220BB6CF8F6AFDB4D6B9D5CEE0FB6A1532_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_3 = ___0_rendererData;
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Renderer2DData_get_projectedShadowShader_m487E9F13199027ABD59B6DBD21228CD3EAEB345E_inline(L_3, NULL);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_5 = ___0_rendererData;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer2DData_get_projectedShadowMaterial_m2B41EE220BB6CF8F6AFDB4D6B9D5CEE0FB6A1532_inline(L_5, NULL);
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}

IL_0026:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_9 = ___0_rendererData;
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_10 = ___0_rendererData;
		NullCheck(L_10);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11;
		L_11 = Renderer2DData_get_projectedShadowShader_m487E9F13199027ABD59B6DBD21228CD3EAEB345E_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD(L_11, 0, 0, NULL);
		NullCheck(L_9);
		Renderer2DData_set_projectedShadowMaterial_m92F2FF910697148A41C6AEDC5600838FF0F97E79_inline(L_9, L_12, NULL);
	}

IL_0039:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_13 = ___0_rendererData;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer2DData_get_projectedShadowMaterial_m2B41EE220BB6CF8F6AFDB4D6B9D5CEE0FB6A1532_inline(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetProjectedUnshadowMaterial_mFAF66A404023EC26ACB31CB946BDEAB1F6450EE9 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_0 = ___0_rendererData;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer2DData_get_projectedUnshadowMaterial_m850DE00788FCD51337CA3A1B3DF818CED804A93B_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_3 = ___0_rendererData;
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Renderer2DData_get_projectedShadowShader_m487E9F13199027ABD59B6DBD21228CD3EAEB345E_inline(L_3, NULL);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_5 = ___0_rendererData;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer2DData_get_projectedUnshadowMaterial_m850DE00788FCD51337CA3A1B3DF818CED804A93B_inline(L_5, NULL);
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}

IL_0026:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_9 = ___0_rendererData;
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_10 = ___0_rendererData;
		NullCheck(L_10);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11;
		L_11 = Renderer2DData_get_projectedShadowShader_m487E9F13199027ABD59B6DBD21228CD3EAEB345E_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD(L_11, 1, 1, NULL);
		NullCheck(L_9);
		Renderer2DData_set_projectedUnshadowMaterial_m6A37BE29BC05D7A3FBFC915F43D5E4BCEB43FF85_inline(L_9, L_12, NULL);
	}

IL_0039:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_13 = ___0_rendererData;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer2DData_get_projectedUnshadowMaterial_m850DE00788FCD51337CA3A1B3DF818CED804A93B_inline(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetSpriteShadowMaterial_mC47BECEDD6453FAE2E49E2223816F278083CB42E (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_0 = ___0_rendererData;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer2DData_get_spriteSelfShadowMaterial_m7436BA5A575F6DF3AA3732E7C7C44ABFD63CDD20_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_3 = ___0_rendererData;
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Renderer2DData_get_spriteShadowShader_mEE8A51EECAD1865B4CA800B88ACD498A406DC638_inline(L_3, NULL);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_5 = ___0_rendererData;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer2DData_get_spriteSelfShadowMaterial_m7436BA5A575F6DF3AA3732E7C7C44ABFD63CDD20_inline(L_5, NULL);
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}

IL_0026:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_9 = ___0_rendererData;
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_10 = ___0_rendererData;
		NullCheck(L_10);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11;
		L_11 = Renderer2DData_get_spriteShadowShader_mEE8A51EECAD1865B4CA800B88ACD498A406DC638_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD(L_11, 0, 0, NULL);
		NullCheck(L_9);
		Renderer2DData_set_spriteSelfShadowMaterial_mB2B00B1F4E2DEE264AA79B0C2F22BA329095AECD_inline(L_9, L_12, NULL);
	}

IL_0039:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_13 = ___0_rendererData;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer2DData_get_spriteSelfShadowMaterial_m7436BA5A575F6DF3AA3732E7C7C44ABFD63CDD20_inline(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetSpriteUnshadowMaterial_mD7C249A243DDDFED43E48D97B20AC32266D778B3 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_0 = ___0_rendererData;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer2DData_get_spriteUnshadowMaterial_m4415A748869AAA64EAC66ED6E1588639DEC52F2F_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_3 = ___0_rendererData;
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Renderer2DData_get_spriteUnshadowShader_m8CF9DD2D555495EDD0743F91C50EED1F58B9DABE_inline(L_3, NULL);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_5 = ___0_rendererData;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer2DData_get_spriteUnshadowMaterial_m4415A748869AAA64EAC66ED6E1588639DEC52F2F_inline(L_5, NULL);
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}

IL_0026:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_9 = ___0_rendererData;
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_10 = ___0_rendererData;
		NullCheck(L_10);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11;
		L_11 = Renderer2DData_get_spriteUnshadowShader_m8CF9DD2D555495EDD0743F91C50EED1F58B9DABE_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD(L_11, 1, 0, NULL);
		NullCheck(L_9);
		Renderer2DData_set_spriteUnshadowMaterial_mD8C9E9C343D025813148B3379D8F1828A423EE2E_inline(L_9, L_12, NULL);
	}

IL_0039:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_13 = ___0_rendererData;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer2DData_get_spriteUnshadowMaterial_m4415A748869AAA64EAC66ED6E1588639DEC52F2F_inline(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetGeometryShadowMaterial_mA143EE752E3247C63FF820BABA58AA12AA3E15F2 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_0 = ___0_rendererData;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer2DData_get_geometrySelfShadowMaterial_mF219386663094A2C9BDC3B4E69EF8112827DC86A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_3 = ___0_rendererData;
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Renderer2DData_get_geometryShadowShader_m34010B53A85C227A4CFF1991A115EC2FDADBAB59_inline(L_3, NULL);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_5 = ___0_rendererData;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer2DData_get_geometrySelfShadowMaterial_mF219386663094A2C9BDC3B4E69EF8112827DC86A_inline(L_5, NULL);
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}

IL_0026:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_9 = ___0_rendererData;
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_10 = ___0_rendererData;
		NullCheck(L_10);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11;
		L_11 = Renderer2DData_get_geometryShadowShader_m34010B53A85C227A4CFF1991A115EC2FDADBAB59_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD(L_11, 0, 0, NULL);
		NullCheck(L_9);
		Renderer2DData_set_geometrySelfShadowMaterial_mBCF9BB3E6AD7C14085F5B23ED646430D9CE7B590_inline(L_9, L_12, NULL);
	}

IL_0039:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_13 = ___0_rendererData;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer2DData_get_geometrySelfShadowMaterial_mF219386663094A2C9BDC3B4E69EF8112827DC86A_inline(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ShadowRendering_GetGeometryUnshadowMaterial_m300ECB92E475135406D7ACD1524823F00FB6AC18 (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___0_rendererData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_0 = ___0_rendererData;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer2DData_get_geometryUnshadowMaterial_mCBF3F176611E39E5D20A4917440AE0FC5B54E950_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_3 = ___0_rendererData;
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Renderer2DData_get_geometryUnshadowShader_m22EB7203D804A2692B1F8343C72BDED346E00D2A_inline(L_3, NULL);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_5 = ___0_rendererData;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer2DData_get_geometryUnshadowMaterial_mCBF3F176611E39E5D20A4917440AE0FC5B54E950_inline(L_5, NULL);
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}

IL_0026:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_9 = ___0_rendererData;
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_10 = ___0_rendererData;
		NullCheck(L_10);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11;
		L_11 = Renderer2DData_get_geometryUnshadowShader_m22EB7203D804A2692B1F8343C72BDED346E00D2A_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = ShadowRendering_CreateMaterial_m8234BC4D52AD07B733DD6BC003A4DC0C9D646AAD(L_11, 1, 0, NULL);
		NullCheck(L_9);
		Renderer2DData_set_geometryUnshadowMaterial_m533C4F9582B0C6E1270E153C9311D139858EC233_inline(L_9, L_12, NULL);
	}

IL_0039:
	{
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_13 = ___0_rendererData;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer2DData_get_geometryUnshadowMaterial_mCBF3F176611E39E5D20A4917440AE0FC5B54E950_inline(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CalculateFrustumCornersPerspective_mA6985BEDB971D8E85C79442820EEC60B084C69D5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, float ___1_distance, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___2_corners, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3;
		L_3 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.5f), L_2)), (0.0174532924f))));
		float L_4 = ___1_distance;
		V_1 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		float L_5 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___0_camera;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_6, NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_5, L_7));
		float L_8 = V_2;
		float L_9 = V_1;
		float L_10 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 0, (L_11));
		float L_12 = V_2;
		float L_13 = V_1;
		float L_14 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_12, ((-L_13)), L_14, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 1, (L_15));
		float L_16 = V_2;
		float L_17 = V_1;
		float L_18 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((-L_16)), L_17, L_18, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 2, (L_19));
		float L_20 = V_2;
		float L_21 = V_1;
		float L_22 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((-L_20)), ((-L_21)), L_22, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 3, (L_23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CalculateFrustumCornersOrthographic_m22EA13A775F8325A4CF1480DFAE06991A687277F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, float ___1_distance, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___2_corners, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___0_camera;
		NullCheck(L_3);
		float L_4;
		L_4 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_3, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_2, L_4));
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_5, L_6, L_7, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 0, (L_8));
		float L_9 = V_1;
		float L_10 = V_0;
		float L_11 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_9, ((-L_10)), L_11, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 1, (L_12));
		float L_13 = V_1;
		float L_14 = V_0;
		float L_15 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((-L_13)), L_14, L_15, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 2, (L_16));
		float L_17 = V_1;
		float L_18 = V_0;
		float L_19 = ___1_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((-L_17)), ((-L_18)), L_19, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&___2_corners))->___m_Buffer, 3, (L_20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ShadowRendering_CalculateWorldSpaceBounds_mFC268ED4AD9EE7410AF79C2CDEB1B067D1371CB9 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, RuntimeObject* ___1_cullResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILight2DCullResult_tEFAF8D99AB687F868772AE79E916D7DBFF623D11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m32F506BE5FE2E4C613F06F8B208E0D5FC794601F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0F64C67B6F6980EE49C60350F878BD5E31AEA07E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&V_0), 4, 2, 0, NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_RuntimeMethod_var);
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&V_1), 4, 2, 0, NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_camera;
		NullCheck(L_0);
		bool L_1;
		L_1 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___0_camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___0_camera;
		NullCheck(L_3);
		float L_4;
		L_4 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_3, NULL);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		ShadowRendering_CalculateFrustumCornersOrthographic_m22EA13A775F8325A4CF1480DFAE06991A687277F(L_2, L_4, L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___0_camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = ___0_camera;
		NullCheck(L_7);
		float L_8;
		L_8 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_7, NULL);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_9 = V_1;
		ShadowRendering_CalculateFrustumCornersOrthographic_m22EA13A775F8325A4CF1480DFAE06991A687277F(L_6, L_8, L_9, NULL);
		goto IL_0052;
	}

IL_0038:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = ___0_camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = ___0_camera;
		NullCheck(L_11);
		float L_12;
		L_12 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_11, NULL);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		ShadowRendering_CalculateFrustumCornersPerspective_mA6985BEDB971D8E85C79442820EEC60B084C69D5(L_10, L_12, L_13, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___0_camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = ___0_camera;
		NullCheck(L_15);
		float L_16;
		L_16 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_15, NULL);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_17 = V_1;
		ShadowRendering_CalculateFrustumCornersPerspective_mA6985BEDB971D8E85C79442820EEC60B084C69D5(L_14, L_16, L_17, NULL);
	}

IL_0052:
	{
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), NULL);
		V_5 = 0;
		goto IL_00c9;
	}

IL_0083:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		int32_t L_19 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&V_0))->___m_Buffer, L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Max_m9B6D8FEE7F4CE32C0AAB682606FFBA59E1F37C74_inline(L_18, L_20, NULL);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		int32_t L_23 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&V_1))->___m_Buffer, L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_Max_m9B6D8FEE7F4CE32C0AAB682606FFBA59E1F37C74_inline(L_22, L_24, NULL);
		V_3 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		int32_t L_27 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&V_0))->___m_Buffer, L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_Min_m1CAC3499F14EA87366C0C3C1F501B4FB2863CDB4_inline(L_26, L_28, NULL);
		V_2 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		int32_t L_31 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, ((&V_1))->___m_Buffer, L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_Min_m1CAC3499F14EA87366C0C3C1F501B4FB2863CDB4_inline(L_30, L_32, NULL);
		V_2 = L_33;
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c9:
	{
		int32_t L_35 = V_5;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_0083;
		}
	}
	{
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC((&V_0), NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_RuntimeMethod_var);
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC((&V_1), NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = ___0_camera;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_3;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_37, L_38, NULL);
		V_3 = L_39;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40 = ___0_camera;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_2;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_41, L_42, NULL);
		V_2 = L_43;
		V_6 = 0;
		goto IL_012c;
	}

IL_00fb:
	{
		RuntimeObject* L_44 = ___1_cullResult;
		NullCheck(L_44);
		List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* L_45;
		L_45 = InterfaceFuncInvoker0< List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* >::Invoke(0, ILight2DCullResult_tEFAF8D99AB687F868772AE79E916D7DBFF623D11_il2cpp_TypeInfo_var, L_44);
		int32_t L_46 = V_6;
		NullCheck(L_45);
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_47;
		L_47 = List_1_get_Item_m0F64C67B6F6980EE49C60350F878BD5E31AEA07E(L_45, L_46, List_1_get_Item_m0F64C67B6F6980EE49C60350F878BD5E31AEA07E_RuntimeMethod_var);
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		V_7 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_Max_m9B6D8FEE7F4CE32C0AAB682606FFBA59E1F37C74_inline(L_50, L_51, NULL);
		V_3 = L_52;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_Min_m1CAC3499F14EA87366C0C3C1F501B4FB2863CDB4_inline(L_53, L_54, NULL);
		V_2 = L_55;
		int32_t L_56 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_012c:
	{
		int32_t L_57 = V_6;
		RuntimeObject* L_58 = ___1_cullResult;
		NullCheck(L_58);
		List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* L_59;
		L_59 = InterfaceFuncInvoker0< List_1_tFD95D3788F1143F387FC9BAAEE36741606416B34* >::Invoke(0, ILight2DCullResult_tEFAF8D99AB687F868772AE79E916D7DBFF623D11_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		int32_t L_60;
		L_60 = List_1_get_Count_m32F506BE5FE2E4C613F06F8B208E0D5FC794601F_inline(L_59, List_1_get_Count_m32F506BE5FE2E4C613F06F8B208E0D5FC794601F_RuntimeMethod_var);
		if ((((int32_t)L_57) < ((int32_t)L_60)))
		{
			goto IL_00fb;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_65, L_66, NULL);
		V_4 = L_67;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A_inline((&L_69), L_64, L_68, NULL);
		return L_69;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CallOnBeforeRender_m87C1AD9258CD9ABC9212779776097EC0F7A277BC (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, RuntimeObject* ___1_cullResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* V_3 = NULL;
	int32_t V_4 = 0;
	ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* V_5 = NULL;
	{
		List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_0;
		L_0 = ShadowCasterGroup2DManager_get_shadowCasterGroups_mD2D34E88683CFFBE42142BC775F83689D96ADCC7_inline(NULL);
		if (!L_0)
		{
			goto IL_0084;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___0_camera;
		RuntimeObject* L_2 = ___1_cullResult;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = ShadowRendering_CalculateWorldSpaceBounds_mFC268ED4AD9EE7410AF79C2CDEB1B067D1371CB9(L_1, L_2, NULL);
		V_0 = L_3;
		List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_4;
		L_4 = ShadowCasterGroup2DManager_get_shadowCasterGroups_mD2D34E88683CFFBE42142BC775F83689D96ADCC7_inline(NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_007b;
	}

IL_0019:
	{
		List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* L_7;
		L_7 = List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF(L_5, L_6, List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_8;
		L_8 = ShadowCasterGroup2D_GetShadowCasters_mDCD74C94A151D61CAC8F53DE3750AD40CBFE51BA_inline(L_7, NULL);
		V_3 = L_8;
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_9 = V_3;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		V_4 = 0;
		goto IL_006d;
	}

IL_002e:
	{
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_12;
		L_12 = List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78(L_10, L_11, List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		V_5 = L_12;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_13 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ShadowCaster2D_get_shadowCastingSource_mE28EEAF8CC7C2E234C6CDE2C9B3688189D0F1F7E_inline(L_15, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0067;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_17 = V_5;
		NullCheck(L_17);
		ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* L_18;
		L_18 = ShadowCaster2D_get_shadowShape2DProvider_mAF6299D6D50E4B1FC94464BDA5667FBAB2552525_inline(L_17, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_19 = V_5;
		NullCheck(L_19);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_20;
		L_20 = ShadowCaster2D_get_shadowShape2DComponent_mE86BE25189D62590E996611DB23634FD253E7901_inline(L_19, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_21 = V_5;
		NullCheck(L_21);
		ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* L_22 = L_21->___m_ShadowMesh;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_23 = V_0;
		ShapeProviderUtility_CallOnBeforeRender_m7C51462DD5E927D3EF32E4948DB40644A7B245C2(L_18, L_20, L_22, L_23, NULL);
	}

IL_0067:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006d:
	{
		int32_t L_25 = V_4;
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_inline(L_26, List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_002e;
		}
	}

IL_0077:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_007b:
	{
		int32_t L_29 = V_2;
		List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_inline(L_30, List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0019;
		}
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CreateShadowRenderTexture_m646D41B6763426609E002132D260B479E7948D2D (RuntimeObject* ___0_pass, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 ___1_renderingData, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___2_cmdBuffer, int32_t ___3_shadowIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_pass;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds;
		int32_t L_2 = ___3_shadowIndex;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 L_5 = ___1_renderingData;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = ___2_cmdBuffer;
		ShadowRendering_CreateShadowRenderTexture_mF1678878C9EA31F8AA3DA7342A60DD8CD66C2EB1(L_0, L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_PrerenderShadows_m85B580B2E3E689F195CA65FCE36726AE708EFADF (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___1_rendererData, LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* ___2_layer, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___3_light, int32_t ___4_shadowIndex, float ___5_shadowIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_0 = ___0_cmdBuffer;
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_1 = ___1_rendererData;
		LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* L_2 = ___2_layer;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_3 = ___3_light;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		ShadowRendering_RenderShadows_mA73CBD0D7A92973C0736EBD2B519B455CEAB186A(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowRendering_PrerenderShadows_m38E3EE0127295FB65248CB39C70812814253FD8C (RuntimeObject* ___0_pass, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 ___1_renderingData, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___2_cmdBuffer, LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* ___3_layer, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___4_light, int32_t ___5_shadowIndex, float ___6_shadowIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBufferHelpers_tC060BE75E2415886D2440C39620E4619A39539C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRenderPass2D_t41FD5A7EAB2A5B9CAC8EA96CAA862D7315F636D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		RuntimeObject* L_0 = ___0_pass;
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 L_1 = ___1_renderingData;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_2 = ___2_cmdBuffer;
		int32_t L_3 = ___5_shadowIndex;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		ShadowRendering_CreateShadowRenderTexture_m646D41B6763426609E002132D260B479E7948D2D(L_0, L_1, L_2, L_3, NULL);
		LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* L_4 = ___3_layer;
		List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_5 = L_4->___shadowCasters;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_inline(L_5, List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_RuntimeMethod_var);
		int32_t L_7 = ((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		if (!L_7)
		{
			G_B2_0 = L_7;
			goto IL_0058;
		}
		G_B1_0 = L_7;
	}
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_8 = ___2_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* L_9 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets;
		int32_t L_10 = ___5_shadowIndex;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_13;
		L_13 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9_inline(L_12, NULL);
		NullCheck(L_8);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_8, L_13, 2, 0, 2, 3, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_14 = ___2_cmdBuffer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_14);
		CommandBuffer_ClearRenderTarget_mF79756BB41395A459CC5FD5CFFC517F65D93D86C(L_14, 7, L_15, (1.0f), 0, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_16 = ___2_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(CommandBufferHelpers_tC060BE75E2415886D2440C39620E4619A39539C8_il2cpp_TypeInfo_var);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_17;
		L_17 = CommandBufferHelpers_GetRasterCommandBuffer_mF283AF98E23435091D7F6EBCBBC445E8C7F6CF7A(L_16, NULL);
		RuntimeObject* L_18 = ___0_pass;
		NullCheck(L_18);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_19;
		L_19 = InterfaceFuncInvoker0< Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* >::Invoke(0, IRenderPass2D_t41FD5A7EAB2A5B9CAC8EA96CAA862D7315F636D8_il2cpp_TypeInfo_var, L_18);
		LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* L_20 = ___3_layer;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_21 = ___4_light;
		ShadowRendering_RenderShadows_mA73CBD0D7A92973C0736EBD2B519B455CEAB186A(L_17, L_19, L_20, L_21, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0058:
	{
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_22 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures;
		int32_t L_23 = ___5_shadowIndex;
		RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* L_24 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets;
		int32_t L_25 = ___5_shadowIndex;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_28;
		L_28 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9_inline(L_27, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B)L_28);
		return (bool)G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_CreateShadowRenderTexture_mF1678878C9EA31F8AA3DA7342A60DD8CD66C2EB1 (RuntimeObject* ___0_pass, int32_t ___1_handleId, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 ___2_renderingData, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___3_cmdBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRenderPass2D_t41FD5A7EAB2A5B9CAC8EA96CAA862D7315F636D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		RuntimeObject* L_0 = ___0_pass;
		NullCheck(L_0);
		Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_1;
		L_1 = InterfaceFuncInvoker0< Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* >::Invoke(0, IRenderPass2D_t41FD5A7EAB2A5B9CAC8EA96CAA862D7315F636D8_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		float L_2;
		L_2 = Renderer2DData_get_lightRenderTextureScale_m6FD4326249B00A168A36C2B314D4C035FEE7CB8F_inline(L_1, NULL);
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.00999999978f), (1.0f), NULL);
		V_0 = L_3;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_4 = (CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E*)(&(&___2_renderingData)->___cameraData);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_5 = (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46*)(&L_4->___cameraTargetDescriptor);
		int32_t L_6;
		L_6 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_5, NULL);
		float L_7 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_6), L_7)));
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_8 = (CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E*)(&(&___2_renderingData)->___cameraData);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_9 = (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46*)(&L_8->___cameraTargetDescriptor);
		int32_t L_10;
		L_10 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_9, NULL);
		float L_11 = V_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_10), L_11)));
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		RenderTextureDescriptor__ctor_m0D1C84B1D245FA247C36A59D816BBB179E0670D1((&V_3), L_12, L_13, NULL);
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539((&V_3), (bool)0, NULL);
		RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414((&V_3), (bool)0, NULL);
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819((&V_3), ((int32_t)24), NULL);
		RenderTextureDescriptor_set_graphicsFormat_m037DA25F9A8B956D830C7B7E5C6E258DC1133A13((&V_3), ((int32_t)74), NULL);
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&V_3), 1, NULL);
		RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline((&V_3), 2, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_14 = ___3_cmdBuffer;
		int32_t L_15 = ___1_handleId;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_16 = V_3;
		NullCheck(L_14);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_14, L_15, L_16, 1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_ReleaseShadowRenderTexture_m58B1B092C38DD47EE161B78861EA26BF7128651B (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_cmdBuffer, int32_t ___1_shadowIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___0_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds;
		int32_t L_2 = ___1_shadowIndex;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_0, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_SetShadowProjectionGlobals_m4648B05392469B3A37B8B46D193E85F9020D3001 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___1_shadowCaster, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___2_light, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_0 = ___0_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowModelScaleID;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_2 = ___1_shadowCaster;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___m_CachedLossyScale;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_3, NULL);
		NullCheck(L_0);
		RasterCommandBuffer_SetGlobalVector_mFAFB36D110E22296957D8816D2E2588543CC1E30(L_0, L_1, L_4, NULL);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_5 = ___0_cmdBuffer;
		int32_t L_6 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowModelMatrixID;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_7 = ___1_shadowCaster;
		NullCheck(L_7);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = L_7->___m_CachedShadowMatrix;
		NullCheck(L_5);
		RasterCommandBuffer_SetGlobalMatrix_m447561261E28EF447ACD0C87B12CDA72FC71958E(L_5, L_6, L_8, NULL);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_9 = ___0_cmdBuffer;
		int32_t L_10 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowModelInvMatrixID;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_11 = ___1_shadowCaster;
		NullCheck(L_11);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = L_11->___m_CachedInverseShadowMatrix;
		NullCheck(L_9);
		RasterCommandBuffer_SetGlobalMatrix_m447561261E28EF447ACD0C87B12CDA72FC71958E(L_9, L_10, L_12, NULL);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_13 = ___0_cmdBuffer;
		int32_t L_14 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowSoftnessFalloffIntensityID;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_15 = ___2_light;
		NullCheck(L_15);
		float L_16;
		L_16 = Light2D_get_shadowSoftnessFalloffIntensity_m46A7A9E2EC93A73206E76EDC333B62AFB4919326_inline(L_15, NULL);
		NullCheck(L_13);
		RasterCommandBuffer_SetGlobalFloat_m74D67A28A137B83CDE68CBF45902C201D39F51C5(L_13, L_14, L_16, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_17 = ___1_shadowCaster;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ShadowCaster2D_get_edgeProcessing_m60499748789A90315F9B94656F8C68D937E35D97(L_17, NULL);
		if (L_18)
		{
			goto IL_0063;
		}
	}
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_19 = ___0_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_20 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowContractionDistanceID;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_21 = ___1_shadowCaster;
		NullCheck(L_21);
		float L_22;
		L_22 = ShadowCaster2D_get_trimEdge_m3E133B9631F634C782E323204196FF536ABBD51F(L_21, NULL);
		NullCheck(L_19);
		RasterCommandBuffer_SetGlobalFloat_m74D67A28A137B83CDE68CBF45902C201D39F51C5(L_19, L_20, L_22, NULL);
		return;
	}

IL_0063:
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_23 = ___0_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_24 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowContractionDistanceID;
		NullCheck(L_23);
		RasterCommandBuffer_SetGlobalFloat_m74D67A28A137B83CDE68CBF45902C201D39F51C5(L_23, L_24, (0.0f), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_SetGlobalShadowTexture_m57F5462AE413508271DCC7BC1E6BA9E24227FCAE (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_cmdBuffer, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___1_light, int32_t ___2_shadowIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral288D3B30927E4D95B96B2D2711C4053AA1D54F18);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_shadowIndex;
		V_0 = L_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_1 = ___0_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_2 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		CommandBuffer_SetGlobalTexture_mD6F1CC7E87FA88B5838D5EDAFBA602EF94FE1F69(L_1, _stringLiteral288D3B30927E4D95B96B2D2711C4053AA1D54F18, L_5, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = ___0_cmdBuffer;
		int32_t L_7 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowShadowColorID;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowColorLookup;
		NullCheck(L_6);
		CommandBuffer_SetGlobalColor_m20990264BA5EDA9EF20B587E2D258E08FCC9584C(L_6, L_7, L_8, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = ___0_cmdBuffer;
		int32_t L_10 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowUnshadowColorID;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_UnshadowColorLookup;
		NullCheck(L_9);
		CommandBuffer_SetGlobalColor_m20990264BA5EDA9EF20B587E2D258E08FCC9584C(L_9, L_10, L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_SetGlobalShadowProp_mD6955D940C798A303A5DB4CC33FEBBF3A8851673 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_0 = ___0_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowShadowColorID;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowColorLookup;
		NullCheck(L_0);
		RasterCommandBuffer_SetGlobalColor_m576870BD1840A40B754798D87A843585F9DCAC1B(L_0, L_1, L_2, NULL);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_3 = ___0_cmdBuffer;
		int32_t L_4 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowUnshadowColorID;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_UnshadowColorLookup;
		NullCheck(L_3);
		RasterCommandBuffer_SetGlobalColor_m576870BD1840A40B754798D87A843585F9DCAC1B(L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShadowRendering_ShadowCasterIsVisible_m901BA428CB526E0ECB849A88BBD9A1F49D5B036F (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___0_shadowCaster, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ShadowRendering_GetRendererFromCaster_m6D7D8BE57FD015AD6E17AC71ABC06B4EBEBDCD68 (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___0_shadowCaster, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___1_light, int32_t ___2_layerToRender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		V_0 = (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)NULL;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_0 = ___0_shadowCaster;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_1 = ___1_light;
		NullCheck(L_0);
		bool L_2;
		L_2 = ShadowCaster2D_IsLit_m84045950AA9DE345C719C1A1F0AA4A0944FF71B7(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_3 = ___0_shadowCaster;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_5 = ___0_shadowCaster;
		int32_t L_6 = ___2_layerToRender;
		NullCheck(L_5);
		bool L_7;
		L_7 = ShadowCaster2D_IsShadowedLayer_mB707B6F9E7F3AE915122E6B6D9684435668FDFF1(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_8 = ___0_shadowCaster;
		NullCheck(L_8);
		bool L_9;
		L_9 = Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3(L_8, (&V_0), Component_TryGetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB716E62C397CE180F1E59E318CD5073E785CCDE3_RuntimeMethod_var);
	}

IL_0026:
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_RenderProjectedShadows_m4C2DECC72599FC8F444FF2BF7038EEA047F1748D (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, int32_t ___1_layerToRender, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___2_light, List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* ___3_shadowCasters, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_projectedShadowsMaterial, int32_t ___5_pass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_007f;
	}

IL_0004:
	{
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_0 = ___3_shadowCasters;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_2;
		L_2 = List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78(L_0, L_1, List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		V_1 = L_2;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ShadowRendering_ShadowCasterIsVisible_m901BA428CB526E0ECB849A88BBD9A1F49D5B036F(L_3, NULL);
		if (!L_4)
		{
			goto IL_007b;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = ShadowCaster2D_get_castsShadows_m4D2E2254C8C21E8EACF99F26ECCB10E33EBAC234(L_5, NULL);
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_7 = V_1;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_8 = ___2_light;
		NullCheck(L_7);
		bool L_9;
		L_9 = ShadowCaster2D_IsLit_m84045950AA9DE345C719C1A1F0AA4A0944FF71B7(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___4_projectedShadowsMaterial;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_14 = V_1;
		int32_t L_15 = ___1_layerToRender;
		NullCheck(L_14);
		bool L_16;
		L_16 = ShadowCaster2D_IsShadowedLayer_mB707B6F9E7F3AE915122E6B6D9684435668FDFF1(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ShadowCaster2D_get_shadowCastingSource_mE28EEAF8CC7C2E234C6CDE2C9B3688189D0F1F7E_inline(L_17, NULL);
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_19 = V_1;
		NullCheck(L_19);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_20;
		L_20 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_22 = ___0_cmdBuffer;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_23 = V_1;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_24 = ___2_light;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		ShadowRendering_SetShadowProjectionGlobals_m4648B05392469B3A37B8B46D193E85F9020D3001(L_22, L_23, L_24, NULL);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_25 = ___0_cmdBuffer;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_26 = V_1;
		NullCheck(L_26);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27;
		L_27 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_26, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_28 = V_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
		L_30 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_29, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = ___4_projectedShadowsMaterial;
		int32_t L_32 = ___5_pass;
		NullCheck(L_25);
		RasterCommandBuffer_DrawMesh_mA7E21B2FB94C16ACF42F955089B019F153A3C511(L_25, L_27, L_30, L_31, 0, L_32, NULL);
	}

IL_007b:
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_007f:
	{
		int32_t L_34 = V_0;
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_35 = ___3_shadowCasters;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_inline(L_35, List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShadowRendering_GetRendererSubmeshes_m89AC52C66C3E91562D51094BC3F28F383D770B89 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_renderer, ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* ___1_shadowCaster2D, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_renderer;
		if (!((SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC*)IsInstClass((RuntimeObject*)L_0, SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = ___0_renderer;
		NullCheck(((SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC*)CastclassClass((RuntimeObject*)L_1, SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var)));
		int32_t L_2;
		L_2 = SpriteShapeRenderer_GetSplineMeshCount_mB0789A1FCA7CCC40FA3083EF173146088719A62A(((SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC*)CastclassClass((RuntimeObject*)L_1, SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_2;
		goto IL_001d;
	}

IL_0016:
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_3 = ___1_shadowCaster2D;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ShadowCaster2D_get_spriteMaterialCount_m203A04545F355886EE50BFD034BEDEF7377FF021_inline(L_3, NULL);
		V_0 = L_4;
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_RenderSelfShadowOption_mA4F58650434E0940C1E3A73FDAEA480973CFC2A9 (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, int32_t ___1_layerToRender, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___2_light, List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* ___3_shadowCasters, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_projectedUnshadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___5_spriteShadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___6_spriteUnshadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___7_geometryShadowMaterial, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___8_geometryUnshadowMaterial, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* V_1 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* V_8 = NULL;
	int32_t V_9 = 0;
	ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* V_10 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		V_0 = 0;
		goto IL_00ea;
	}

IL_0007:
	{
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_0 = ___3_shadowCasters;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_2;
		L_2 = List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78(L_0, L_1, List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		V_1 = L_2;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_3 = V_1;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_4 = ___2_light;
		int32_t L_5 = ___1_layerToRender;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = ShadowRendering_GetRendererFromCaster_m6D7D8BE57FD015AD6E17AC71ABC06B4EBEBDCD68(L_3, L_4, L_5, NULL);
		V_2 = L_6;
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_7 = ___0_cmdBuffer;
		int32_t L_8 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowAlphaCutoffID;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_9 = V_1;
		NullCheck(L_9);
		float L_10;
		L_10 = ShadowCaster2D_get_alphaCutoff_mFAF68B32010B7ACF0D2C0E084D60EBA59BEC7834_inline(L_9, NULL);
		NullCheck(L_7);
		RasterCommandBuffer_SetGlobalFloat_m74D67A28A137B83CDE68CBF45902C201D39F51C5(L_7, L_8, L_10, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = ShadowRendering_ShadowCasterIsVisible_m901BA428CB526E0ECB849A88BBD9A1F49D5B036F(L_13, NULL);
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = ShadowCaster2D_get_selfShadows_m40E1BF40EEC25DF7538D6E6CACC6FFF86A113475(L_15, NULL);
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17 = V_2;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = ShadowRendering_GetRendererSubmeshes_m89AC52C66C3E91562D51094BC3F28F383D770B89(L_17, L_18, NULL);
		V_3 = L_19;
		V_4 = 0;
		goto IL_0061;
	}

IL_004f:
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_20 = ___0_cmdBuffer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = ___5_spriteShadowMaterial;
		int32_t L_23 = V_4;
		NullCheck(L_20);
		RasterCommandBuffer_DrawRenderer_mF5EDCB5D5417597C726C38DA53612196CBAA05AD(L_20, L_21, L_22, L_23, 0, NULL);
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0061:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_3;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_00e6;
	}

IL_0068:
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_27 = V_2;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_28 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = ShadowRendering_GetRendererSubmeshes_m89AC52C66C3E91562D51094BC3F28F383D770B89(L_27, L_28, NULL);
		V_5 = L_29;
		V_6 = 0;
		goto IL_0088;
	}

IL_0076:
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_30 = ___0_cmdBuffer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_31 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = ___6_spriteUnshadowMaterial;
		int32_t L_33 = V_6;
		NullCheck(L_30);
		RasterCommandBuffer_DrawRenderer_mF5EDCB5D5417597C726C38DA53612196CBAA05AD(L_30, L_31, L_32, L_33, 0, NULL);
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0088:
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_5;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00e6;
	}

IL_0090:
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_37 = V_1;
		NullCheck(L_37);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_38;
		L_38 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_00e6;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_40 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = ShadowRendering_ShadowCasterIsVisible_m901BA428CB526E0ECB849A88BBD9A1F49D5B036F(L_40, NULL);
		if (!L_41)
		{
			goto IL_00cb;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_42 = V_1;
		NullCheck(L_42);
		bool L_43;
		L_43 = ShadowCaster2D_get_selfShadows_m40E1BF40EEC25DF7538D6E6CACC6FFF86A113475(L_42, NULL);
		if (!L_43)
		{
			goto IL_00cb;
		}
	}
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_44 = ___0_cmdBuffer;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_45 = V_1;
		NullCheck(L_45);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46;
		L_46 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_45, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_47 = V_1;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_49;
		L_49 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_48, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = ___7_geometryShadowMaterial;
		NullCheck(L_44);
		RasterCommandBuffer_DrawMesh_mA7E21B2FB94C16ACF42F955089B019F153A3C511(L_44, L_46, L_49, L_50, 0, 0, NULL);
		goto IL_00e6;
	}

IL_00cb:
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_51 = ___0_cmdBuffer;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_52 = V_1;
		NullCheck(L_52);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_53;
		L_53 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_52, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_54 = V_1;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		NullCheck(L_55);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_56;
		L_56 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_55, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = ___8_geometryUnshadowMaterial;
		NullCheck(L_51);
		RasterCommandBuffer_DrawMesh_mA7E21B2FB94C16ACF42F955089B019F153A3C511(L_51, L_53, L_56, L_57, 0, 0, NULL);
	}

IL_00e6:
	{
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00ea:
	{
		int32_t L_59 = V_0;
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_60 = ___3_shadowCasters;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_inline(L_60, List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_0007;
		}
	}
	{
		V_7 = 0;
		goto IL_015d;
	}

IL_00fb:
	{
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_62 = ___3_shadowCasters;
		int32_t L_63 = V_7;
		NullCheck(L_62);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_64;
		L_64 = List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78(L_62, L_63, List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		V_8 = L_64;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_65 = V_8;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = ShadowRendering_ShadowCasterIsVisible_m901BA428CB526E0ECB849A88BBD9A1F49D5B036F(L_65, NULL);
		if (!L_66)
		{
			goto IL_0157;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_67 = V_8;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = ShadowCaster2D_get_castingOption_m11F5F86721E7CABA77996CDFCC3741F3C9A8F9DA_inline(L_67, NULL);
		if ((!(((uint32_t)L_68) == ((uint32_t)1))))
		{
			goto IL_0157;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_69 = V_8;
		NullCheck(L_69);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_70;
		L_70 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_69, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_70, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_71)
		{
			goto IL_0157;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_72 = V_8;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_73 = ___2_light;
		int32_t L_74 = ___1_layerToRender;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_75;
		L_75 = ShadowRendering_GetRendererFromCaster_m6D7D8BE57FD015AD6E17AC71ABC06B4EBEBDCD68(L_72, L_73, L_74, NULL);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_76 = ___0_cmdBuffer;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_77 = V_8;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_78 = ___2_light;
		ShadowRendering_SetShadowProjectionGlobals_m4648B05392469B3A37B8B46D193E85F9020D3001(L_76, L_77, L_78, NULL);
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_79 = ___0_cmdBuffer;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_80 = V_8;
		NullCheck(L_80);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_81;
		L_81 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_80, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_82 = V_8;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_82, NULL);
		NullCheck(L_83);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_84;
		L_84 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_83, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = ___4_projectedUnshadowMaterial;
		NullCheck(L_79);
		RasterCommandBuffer_DrawMesh_mA7E21B2FB94C16ACF42F955089B019F153A3C511(L_79, L_81, L_84, L_85, 0, 1, NULL);
	}

IL_0157:
	{
		int32_t L_86 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_015d:
	{
		int32_t L_87 = V_7;
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_88 = ___3_shadowCasters;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_inline(L_88, List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		if ((((int32_t)L_87) < ((int32_t)L_89)))
		{
			goto IL_00fb;
		}
	}
	{
		V_9 = 0;
		goto IL_01fd;
	}

IL_016f:
	{
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_90 = ___3_shadowCasters;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_92;
		L_92 = List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78(L_90, L_91, List_1_get_Item_m65655DE75A812900EA3B9FF0D3E048BE93F8CB78_RuntimeMethod_var);
		V_10 = L_92;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_93 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = ShadowRendering_ShadowCasterIsVisible_m901BA428CB526E0ECB849A88BBD9A1F49D5B036F(L_93, NULL);
		if (!L_94)
		{
			goto IL_01f7;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_95 = V_10;
		NullCheck(L_95);
		bool L_96;
		L_96 = ShadowCaster2D_get_selfShadows_m40E1BF40EEC25DF7538D6E6CACC6FFF86A113475(L_95, NULL);
		if (L_96)
		{
			goto IL_01f7;
		}
	}
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_97 = V_10;
		Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_98 = ___2_light;
		int32_t L_99 = ___1_layerToRender;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_100;
		L_100 = ShadowRendering_GetRendererFromCaster_m6D7D8BE57FD015AD6E17AC71ABC06B4EBEBDCD68(L_97, L_98, L_99, NULL);
		V_11 = L_100;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_101 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_101, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_102)
		{
			goto IL_01cb;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_103 = V_11;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_104 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		int32_t L_105;
		L_105 = ShadowRendering_GetRendererSubmeshes_m89AC52C66C3E91562D51094BC3F28F383D770B89(L_103, L_104, NULL);
		V_12 = L_105;
		V_13 = 0;
		goto IL_01c3;
	}

IL_01b0:
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_106 = ___0_cmdBuffer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_107 = V_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108 = ___6_spriteUnshadowMaterial;
		int32_t L_109 = V_13;
		NullCheck(L_106);
		RasterCommandBuffer_DrawRenderer_mF5EDCB5D5417597C726C38DA53612196CBAA05AD(L_106, L_107, L_108, L_109, 1, NULL);
		int32_t L_110 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_01c3:
	{
		int32_t L_111 = V_13;
		int32_t L_112 = V_12;
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_01b0;
		}
	}
	{
		goto IL_01f7;
	}

IL_01cb:
	{
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_113 = V_10;
		NullCheck(L_113);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_114;
		L_114 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_113, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_114, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_115)
		{
			goto IL_01f7;
		}
	}
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_116 = ___0_cmdBuffer;
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_117 = V_10;
		NullCheck(L_117);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_118;
		L_118 = ShadowCaster2D_get_mesh_m487088118BA14D1E81CACC9820703372075A8CD0(L_117, NULL);
		ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* L_119 = V_10;
		NullCheck(L_119);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_120;
		L_120 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_119, NULL);
		NullCheck(L_120);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_121;
		L_121 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_120, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122 = ___8_geometryUnshadowMaterial;
		NullCheck(L_116);
		RasterCommandBuffer_DrawMesh_mA7E21B2FB94C16ACF42F955089B019F153A3C511(L_116, L_118, L_121, L_122, 0, 1, NULL);
	}

IL_01f7:
	{
		int32_t L_123 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_01fd:
	{
		int32_t L_124 = V_9;
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_125 = ___3_shadowCasters;
		NullCheck(L_125);
		int32_t L_126;
		L_126 = List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_inline(L_125, List_1_get_Count_m15E446414B64EB608E8061B37984EC57F4360D2C_RuntimeMethod_var);
		if ((((int32_t)L_124) < ((int32_t)L_126)))
		{
			goto IL_016f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering_RenderShadows_mA73CBD0D7A92973C0736EBD2B519B455CEAB186A (RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* ___0_cmdBuffer, Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* ___1_rendererData, LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* ___2_layer, Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* ___3_light, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_5 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_6 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_7 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* V_10 = NULL;
	{
		RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_0 = ___0_cmdBuffer;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_1 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadows;
		ProfilingScope__ctor_m9E02453E096ED9C287DE7B8ECA111FA9A71F744C((&V_0), L_0, L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0109:
			{
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_2 = ___3_light;
				NullCheck(L_2);
				BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 L_3;
				L_3 = Light2D_get_boundingSphere_m1B78AF6A3981BE032C1EE459C109948160B307E0_inline(L_2, NULL);
				float L_4 = L_3.___radius;
				Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_5 = ___3_light;
				NullCheck(L_5);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
				L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
				NullCheck(L_6);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
				L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
				Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_8 = ___3_light;
				NullCheck(L_8);
				BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 L_9;
				L_9 = Light2D_get_boundingSphere_m1B78AF6A3981BE032C1EE459C109948160B307E0_inline(L_8, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___position;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_10, NULL);
				V_8 = L_11;
				float L_12;
				L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
				V_1 = ((float)il2cpp_codegen_add(L_4, L_12));
				RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_13 = ___0_cmdBuffer;
				il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
				int32_t L_14 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_LightPosID;
				Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_15 = ___3_light;
				NullCheck(L_15);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
				NullCheck(L_16);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
				L_18 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_17, NULL);
				NullCheck(L_13);
				RasterCommandBuffer_SetGlobalVector_mFAFB36D110E22296957D8816D2E2588543CC1E30(L_13, L_14, L_18, NULL);
				RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_19 = ___0_cmdBuffer;
				int32_t L_20 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowRadiusID;
				float L_21 = V_1;
				NullCheck(L_19);
				RasterCommandBuffer_SetGlobalFloat_m74D67A28A137B83CDE68CBF45902C201D39F51C5(L_19, L_20, L_21, NULL);
				RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_22 = ___0_cmdBuffer;
				int32_t L_23 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_SoftShadowAngle;
				Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_24 = ___3_light;
				NullCheck(L_24);
				float L_25;
				L_25 = Light2D_get_shadowSoftness_m5127B43BDA9A3C5CD99CF8976D3CE9A0F5A79683_inline(L_24, NULL);
				float L_26 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_MaxShadowSoftnessAngle;
				NullCheck(L_22);
				RasterCommandBuffer_SetGlobalFloat_m74D67A28A137B83CDE68CBF45902C201D39F51C5(L_22, L_23, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0174532924f), L_25)), L_26)), NULL);
				Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_27 = ___1_rendererData;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
				L_28 = ShadowRendering_GetProjectedShadowMaterial_mF79827ED39DF40998A911656E1C198D25BF4D0C9(L_27, NULL);
				V_2 = L_28;
				Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_29 = ___1_rendererData;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30;
				L_30 = ShadowRendering_GetProjectedUnshadowMaterial_mFAF66A404023EC26ACB31CB946BDEAB1F6450EE9(L_29, NULL);
				V_3 = L_30;
				Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_31 = ___1_rendererData;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32;
				L_32 = ShadowRendering_GetSpriteShadowMaterial_mC47BECEDD6453FAE2E49E2223816F278083CB42E(L_31, NULL);
				V_4 = L_32;
				Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_33 = ___1_rendererData;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
				L_34 = ShadowRendering_GetSpriteUnshadowMaterial_mD7C249A243DDDFED43E48D97B20AC32266D778B3(L_33, NULL);
				V_5 = L_34;
				Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_35 = ___1_rendererData;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36;
				L_36 = ShadowRendering_GetGeometryShadowMaterial_mA143EE752E3247C63FF820BABA58AA12AA3E15F2(L_35, NULL);
				V_6 = L_36;
				Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* L_37 = ___1_rendererData;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
				L_38 = ShadowRendering_GetGeometryUnshadowMaterial_m300ECB92E475135406D7ACD1524823F00FB6AC18(L_37, NULL);
				V_7 = L_38;
				V_9 = 0;
				goto IL_00f8_1;
			}

IL_00b5_1:
			{
				LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* L_39 = ___2_layer;
				List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_40 = L_39->___shadowCasters;
				int32_t L_41 = V_9;
				NullCheck(L_40);
				ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* L_42;
				L_42 = List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF(L_40, L_41, List_1_get_Item_mDA2D817CB4CC70B91173DEEA7E8F0F40F587D9DF_RuntimeMethod_var);
				NullCheck(L_42);
				List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_43;
				L_43 = ShadowCasterGroup2D_GetShadowCasters_mDCD74C94A151D61CAC8F53DE3750AD40CBFE51BA_inline(L_42, NULL);
				V_10 = L_43;
				RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_44 = ___0_cmdBuffer;
				LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* L_45 = ___2_layer;
				int32_t L_46 = L_45->___startLayerID;
				Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_47 = ___3_light;
				List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_48 = V_10;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = V_2;
				il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
				ShadowRendering_RenderProjectedShadows_m4C2DECC72599FC8F444FF2BF7038EEA047F1748D(L_44, L_46, L_47, L_48, L_49, 0, NULL);
				RasterCommandBuffer_t9F2AE1816D65B8E65E75040EB1847A77E445D731* L_50 = ___0_cmdBuffer;
				LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* L_51 = ___2_layer;
				int32_t L_52 = L_51->___startLayerID;
				Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* L_53 = ___3_light;
				List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_54 = V_10;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = V_3;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = V_4;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = V_5;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = V_6;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = V_7;
				ShadowRendering_RenderSelfShadowOption_mA4F58650434E0940C1E3A73FDAEA480973CFC2A9(L_50, L_52, L_53, L_54, L_55, L_56, L_57, L_58, L_59, NULL);
				int32_t L_60 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_60, 1));
			}

IL_00f8_1:
			{
				int32_t L_61 = V_9;
				LayerBatch_t8609CE5678A7F6CF261A7FC7CCC0C345346187F3* L_62 = ___2_layer;
				List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_63 = L_62->___shadowCasters;
				NullCheck(L_63);
				int32_t L_64;
				L_64 = List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_inline(L_63, List_1_get_Count_m43661B27D30A8C60848195B9E783D5842F952A08_RuntimeMethod_var);
				if ((((int32_t)L_61) < ((int32_t)L_64)))
				{
					goto IL_00b5_1;
				}
			}
			{
				goto IL_0117;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0117:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowRendering__cctor_m3284B7B1564FF36D44700C39029479777FC9A48E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FFBAA1DFB47800F13D44190C56827B03CE5E3DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC8249171BF5A08AD6AE3707210845B7A1D82C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48AFFDEF495CDCC4474DF0B703765F5DEE1804E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C68A465D4DEA0F5713791AA0DB28A82C406B819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E186C7E71F702ADEC19839A9BAF845840FD3F1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E223453154474AFA2ECDAF78A5F7E19A2FC4A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AE2EC9DE29B3E57D687B9B75E325B9E2B7D2A91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5C228F1E969B5BB50AA097746D200A4F1D75723);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDFE8A3827558BB2D833AB047C84BFD2A8B1774A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF1CFD1309A1474E2661F037CEC1EB778EBF62E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0C17A04E9D45458363E915905BA94E35369EAF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC89D4252D8148E6ED2EC59643DF4398D7A803267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBDAC60E0D057AFE661D0C6E451953C8268511BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0A13C19468D4A481A7C624EA0F98A0477FCA948);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5069D81915B4AAA94117DBD391BF7132DDA9C11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5FBFC6F1646459ABB684A9C0441C6220BE7460);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5CD3C30109BF1347C8F33B0C8422735FD0A330A);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral4E186C7E71F702ADEC19839A9BAF845840FD3F1F, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_LightPosID = L_0;
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralD5069D81915B4AAA94117DBD391BF7132DDA9C11, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowRadiusID = L_1;
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralDD5FBFC6F1646459ABB684A9C0441C6220BE7460, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowColorMaskID = L_2;
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralBDFE8A3827558BB2D833AB047C84BFD2A8B1774A, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowModelMatrixID = L_3;
		int32_t L_4;
		L_4 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral48AFFDEF495CDCC4474DF0B703765F5DEE1804E8, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowModelInvMatrixID = L_4;
		int32_t L_5;
		L_5 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral0FFBAA1DFB47800F13D44190C56827B03CE5E3DE, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowModelScaleID = L_5;
		int32_t L_6;
		L_6 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7E223453154474AFA2ECDAF78A5F7E19A2FC4A74, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowContractionDistanceID = L_6;
		int32_t L_7;
		L_7 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralC89D4252D8148E6ED2EC59643DF4398D7A803267, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowAlphaCutoffID = L_7;
		int32_t L_8;
		L_8 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral9AE2EC9DE29B3E57D687B9B75E325B9E2B7D2A91, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_SoftShadowAngle = L_8;
		int32_t L_9;
		L_9 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralD0A13C19468D4A481A7C624EA0F98A0477FCA948, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowSoftnessFalloffIntensityID = L_9;
		int32_t L_10;
		L_10 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralCBDAC60E0D057AFE661D0C6E451953C8268511BA, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowShadowColorID = L_10;
		int32_t L_11;
		L_11 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralBF1CFD1309A1474E2661F037CEC1EB778EBF62E2, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowUnshadowColorID = L_11;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_12 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_12, _stringLiteral3CC8249171BF5A08AD6AE3707210845B7A1D82C6, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadows = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadows), (void*)L_12);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_13 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_13, _stringLiteralC0C17A04E9D45458363E915905BA94E35369EAF2, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsA = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsA), (void*)L_13);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_14 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_14, _stringLiteralE5CD3C30109BF1347C8F33B0C8422735FD0A330A, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsR = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsR), (void*)L_14);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_15 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_15, _stringLiteralB5C228F1E969B5BB50AA097746D200A4F1D75723, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsG = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsG), (void*)L_15);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_16 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_16, _stringLiteral4C68A465D4DEA0F5713791AA0DB28A82C406B819, NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsB = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsB), (void*)L_16);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_MaxShadowSoftnessAngle = (15.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), (0.0f), (0.0f), (1.0f), (0.0f), NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_ShadowColorLookup = L_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_18), (0.0f), (1.0f), (0.0f), (0.0f), NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___k_UnshadowColorLookup = L_18;
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets = (RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargets), (void*)(RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF*)NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_RenderTargetIds), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures = (RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_LightInputTextures), (void*)(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)NULL);
		ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240* L_19 = (ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240*)(ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240*)SZArrayNew(ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240_il2cpp_TypeInfo_var, (uint32_t)4);
		ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240* L_20 = L_19;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_21 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsA;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)L_21);
		ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240* L_22 = L_20;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_23 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsB;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)L_23);
		ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240* L_24 = L_22;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_25 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsG;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)L_25);
		ProfilingSamplerU5BU5D_tE16B1AF92F0481D3201E2094700BE7CC2DB7E240* L_26 = L_24;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_27 = ((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowsR;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)L_27);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowColorsLookup = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___m_ProfilingSamplerShadowColorsLookup), (void*)L_26);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarGraph_RemoveDuplicateEdges_m02B7AF8FAF00D6029D902205B836E6E7B9B9FD43 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___0_edges, int32_t* ___1_edgeCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_duplicates, int32_t ___3_duplicateCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_9;
	memset((&V_9), 0, sizeof(V_9));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		int32_t L_0 = ___3_duplicateCount;
		if (L_0)
		{
			goto IL_006a;
		}
	}
	{
		V_1 = 0;
		goto IL_0063;
	}

IL_0007:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_1 = ___0_edges;
		int32_t L_2 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_1)->___m_Buffer, L_2);
		V_2 = L_3;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_4 = ___0_edges;
		int32_t L_5 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_4)->___m_Buffer, L_5);
		int32_t L_7 = L_6.___x;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_8 = ___0_edges;
		int32_t L_9 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_8)->___m_Buffer, L_9);
		int32_t L_11 = L_10.___y;
		int32_t L_12;
		L_12 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(L_7, L_11, NULL);
		(&V_2)->___x = L_12;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_13 = ___0_edges;
		int32_t L_14 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_13)->___m_Buffer, L_14);
		int32_t L_16 = L_15.___x;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_17 = ___0_edges;
		int32_t L_18 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_19;
		L_19 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_17)->___m_Buffer, L_18);
		int32_t L_20 = L_19.___y;
		int32_t L_21;
		L_21 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_16, L_20, NULL);
		(&V_2)->___y = L_21;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_22 = ___0_edges;
		int32_t L_23 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_24 = V_2;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_22)->___m_Buffer, L_23, (L_24));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0063:
	{
		int32_t L_26 = V_1;
		int32_t* L_27 = ___1_edgeCount;
		int32_t L_28 = *((int32_t*)L_27);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0007;
		}
	}
	{
		goto IL_00c9;
	}

IL_006a:
	{
		V_3 = 0;
		goto IL_00c4;
	}

IL_006e:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_29 = ___0_edges;
		int32_t L_30 = V_3;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_29)->___m_Buffer, L_30);
		V_4 = L_31;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_32 = V_4;
		int32_t L_33 = L_32.___x;
		int32_t L_34;
		L_34 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_duplicates))->___m_Buffer, L_33);
		V_5 = L_34;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_35 = V_4;
		int32_t L_36 = L_35.___y;
		int32_t L_37;
		L_37 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_duplicates))->___m_Buffer, L_36);
		V_6 = L_37;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		int32_t L_40;
		L_40 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(L_38, L_39, NULL);
		(&V_4)->___x = L_40;
		int32_t L_41 = V_5;
		int32_t L_42 = V_6;
		int32_t L_43;
		L_43 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_41, L_42, NULL);
		(&V_4)->___y = L_43;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_44 = ___0_edges;
		int32_t L_45 = V_3;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_46 = V_4;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_44)->___m_Buffer, L_45, (L_46));
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00c4:
	{
		int32_t L_48 = V_3;
		int32_t* L_49 = ___1_edgeCount;
		int32_t L_50 = *((int32_t*)L_49);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_006e;
		}
	}

IL_00c9:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_51 = ___0_edges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_52 = (*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_51);
		void* L_53;
		L_53 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D(L_52, NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		int32_t* L_54 = ___1_edgeCount;
		int32_t L_55 = *((int32_t*)L_54);
		il2cpp_codegen_initobj((&V_7), sizeof(TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA));
		TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA L_56 = V_7;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950(L_53, 0, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), L_56, ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950_RuntimeMethod_var);
		V_0 = 1;
		V_8 = 1;
		goto IL_0148;
	}

IL_00ef:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_57 = ___0_edges;
		int32_t L_58 = V_8;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_59;
		L_59 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_57)->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_58, 1)));
		V_9 = L_59;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_60 = ___0_edges;
		int32_t L_61 = V_8;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_62;
		L_62 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_60)->___m_Buffer, L_61);
		V_10 = L_62;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_63 = V_10;
		int32_t L_64 = L_63.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_65 = V_9;
		int32_t L_66 = L_65.___x;
		if ((!(((uint32_t)L_64) == ((uint32_t)L_66))))
		{
			goto IL_0125;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_67 = V_10;
		int32_t L_68 = L_67.___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_69 = V_9;
		int32_t L_70 = L_69.___y;
		if ((((int32_t)L_68) == ((int32_t)L_70)))
		{
			goto IL_0142;
		}
	}

IL_0125:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_71 = V_10;
		int32_t L_72 = L_71.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_73 = V_10;
		int32_t L_74 = L_73.___y;
		if ((((int32_t)L_72) == ((int32_t)L_74)))
		{
			goto IL_0142;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_75 = ___0_edges;
		int32_t L_76 = V_0;
		int32_t L_77 = L_76;
		V_0 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_78 = V_10;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_75)->___m_Buffer, L_77, (L_78));
	}

IL_0142:
	{
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0148:
	{
		int32_t L_80 = V_8;
		int32_t* L_81 = ___1_edgeCount;
		int32_t L_82 = *((int32_t*)L_81);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t* L_83 = ___1_edgeCount;
		int32_t L_84 = V_0;
		*((int32_t*)L_83) = (int32_t)L_84;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CheckCollinear_m2DDF994C13C20490A8520E11CDA42958EA13E026 (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_a0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_a1, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_b0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___3_b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_0;
	memset((&V_0), 0, sizeof(V_0));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_1;
	memset((&V_1), 0, sizeof(V_1));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_2;
	memset((&V_2), 0, sizeof(V_2));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___0_a0;
		V_0 = L_0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_1 = ___1_a1;
		V_1 = L_1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2 = ___2_b0;
		V_2 = L_2;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_3 = ___3_b1;
		V_3 = L_3;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_4 = V_1;
		double L_5 = L_4.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = V_0;
		double L_7 = L_6.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_8 = V_1;
		double L_9 = L_8.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_10 = V_0;
		double L_11 = L_10.___x;
		V_4 = ((double)(((double)il2cpp_codegen_subtract(L_5, L_7))/((double)il2cpp_codegen_subtract(L_9, L_11))));
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_12 = V_2;
		double L_13 = L_12.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_14 = V_0;
		double L_15 = L_14.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_16 = V_2;
		double L_17 = L_16.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_18 = V_0;
		double L_19 = L_18.___x;
		V_5 = ((double)(((double)il2cpp_codegen_subtract(L_13, L_15))/((double)il2cpp_codegen_subtract(L_17, L_19))));
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_20 = V_3;
		double L_21 = L_20.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_22 = V_0;
		double L_23 = L_22.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_24 = V_3;
		double L_25 = L_24.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_26 = V_0;
		double L_27 = L_26.___x;
		V_6 = ((double)(((double)il2cpp_codegen_subtract(L_21, L_23))/((double)il2cpp_codegen_subtract(L_25, L_27))));
		double L_28 = V_4;
		bool L_29;
		L_29 = math_isinf_m4901864832BAA489A01E23F560733ACEF6E3ED60_inline(L_28, NULL);
		if (!L_29)
		{
			goto IL_007a;
		}
	}
	{
		double L_30 = V_5;
		bool L_31;
		L_31 = math_isinf_m4901864832BAA489A01E23F560733ACEF6E3ED60_inline(L_30, NULL);
		if (!L_31)
		{
			goto IL_007a;
		}
	}
	{
		double L_32 = V_6;
		bool L_33;
		L_33 = math_isinf_m4901864832BAA489A01E23F560733ACEF6E3ED60_inline(L_32, NULL);
		if (L_33)
		{
			goto IL_009d;
		}
	}

IL_007a:
	{
		double L_34 = V_4;
		double L_35 = V_5;
		double L_36;
		L_36 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(((double)il2cpp_codegen_subtract(L_34, L_35)), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_37 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_36) > ((double)L_37))))
		{
			goto IL_009d;
		}
	}
	{
		double L_38 = V_4;
		double L_39 = V_6;
		double L_40;
		L_40 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(((double)il2cpp_codegen_subtract(L_38, L_39)), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_41 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		return (bool)((((double)L_40) > ((double)L_41))? 1 : 0);
	}

IL_009d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_LineLineIntersection_m17350F15EBC948F829EB7C392AD18A7AFD241284 (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_a0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_a1, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_b0, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___3_b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___0_a0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_1 = ___2_b0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2 = ___3_b1;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = ModuleHandle_OrientFastDouble_m22FA5D345F2DE849281B3A4FD34A094C241FAC2F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_4 = ___1_a1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_5 = ___2_b0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = ___3_b1;
		double L_7;
		L_7 = ModuleHandle_OrientFastDouble_m22FA5D345F2DE849281B3A4FD34A094C241FAC2F(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		double L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_9 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_8) > ((double)L_9))))
		{
			goto IL_0022;
		}
	}
	{
		double L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_11 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((((double)L_10) > ((double)L_11)))
		{
			goto IL_0034;
		}
	}

IL_0022:
	{
		double L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_13 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_12) < ((double)((-L_13))))))
		{
			goto IL_0036;
		}
	}
	{
		double L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_15 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_14) < ((double)((-L_15))))))
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		return (bool)0;
	}

IL_0036:
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_16 = ___2_b0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_17 = ___0_a0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_18 = ___1_a1;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		double L_19;
		L_19 = ModuleHandle_OrientFastDouble_m22FA5D345F2DE849281B3A4FD34A094C241FAC2F(L_16, L_17, L_18, NULL);
		V_2 = L_19;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_20 = ___3_b1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_21 = ___0_a0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_22 = ___1_a1;
		double L_23;
		L_23 = ModuleHandle_OrientFastDouble_m22FA5D345F2DE849281B3A4FD34A094C241FAC2F(L_20, L_21, L_22, NULL);
		V_3 = L_23;
		double L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_25 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_24) > ((double)L_25))))
		{
			goto IL_0058;
		}
	}
	{
		double L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_27 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((((double)L_26) > ((double)L_27)))
		{
			goto IL_006a;
		}
	}

IL_0058:
	{
		double L_28 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_29 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_28) < ((double)((-L_29))))))
		{
			goto IL_006c;
		}
	}
	{
		double L_30 = V_3;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_31 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_30) < ((double)((-L_31))))))
		{
			goto IL_006c;
		}
	}

IL_006a:
	{
		return (bool)0;
	}

IL_006c:
	{
		double L_32 = V_0;
		double L_33;
		L_33 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_34 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_33) < ((double)L_34))))
		{
			goto IL_00aa;
		}
	}
	{
		double L_35 = V_1;
		double L_36;
		L_36 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_37 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_36) < ((double)L_37))))
		{
			goto IL_00aa;
		}
	}
	{
		double L_38 = V_2;
		double L_39;
		L_39 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_40 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_39) < ((double)L_40))))
		{
			goto IL_00aa;
		}
	}
	{
		double L_41 = V_3;
		double L_42;
		L_42 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_43 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_42) < ((double)L_43))))
		{
			goto IL_00aa;
		}
	}
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_44 = ___0_a0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_45 = ___1_a1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_46 = ___2_b0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_47 = ___3_b1;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = PlanarGraph_CheckCollinear_m2DDF994C13C20490A8520E11CDA42958EA13E026(L_44, L_45, L_46, L_47, NULL);
		return L_48;
	}

IL_00aa:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_LineLineIntersection_mE3D6BA5A3BEAFD6CF5168142443F49E1B4A086ED (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_p1, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_p2, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_p3, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___3_p4, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* ___4_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___1_p2;
		double L_1 = L_0.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2 = ___0_p1;
		double L_3 = L_2.___x;
		V_0 = ((double)il2cpp_codegen_subtract(L_1, L_3));
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_4 = ___1_p2;
		double L_5 = L_4.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = ___0_p1;
		double L_7 = L_6.___y;
		V_1 = ((double)il2cpp_codegen_subtract(L_5, L_7));
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_8 = ___3_p4;
		double L_9 = L_8.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_10 = ___2_p3;
		double L_11 = L_10.___x;
		V_2 = ((double)il2cpp_codegen_subtract(L_9, L_11));
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_12 = ___3_p4;
		double L_13 = L_12.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_14 = ___2_p3;
		double L_15 = L_14.___y;
		V_3 = ((double)il2cpp_codegen_subtract(L_13, L_15));
		double L_16 = V_0;
		double L_17 = V_3;
		double L_18 = V_1;
		double L_19 = V_2;
		V_4 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_16, L_17)), ((double)il2cpp_codegen_multiply(L_18, L_19))));
		double L_20 = V_4;
		double L_21;
		L_21 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_22 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_21) < ((double)L_22))))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0051:
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_23 = ___2_p3;
		double L_24 = L_23.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_25 = ___0_p1;
		double L_26 = L_25.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_27 = ___2_p3;
		double L_28 = L_27.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_29 = ___0_p1;
		double L_30 = L_29.___y;
		V_5 = ((double)il2cpp_codegen_subtract(L_28, L_30));
		double L_31 = V_3;
		double L_32 = V_5;
		double L_33 = V_2;
		double L_34 = V_4;
		V_6 = ((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_24, L_26)), L_31)), ((double)il2cpp_codegen_multiply(L_32, L_33))))/L_34));
		double L_35 = V_6;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_36 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_35) >= ((double)((-L_36))))))
		{
			goto IL_00bc;
		}
	}
	{
		double L_37 = V_6;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_38 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_37) <= ((double)((double)il2cpp_codegen_add((1.0), L_38))))))
		{
			goto IL_00bc;
		}
	}
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* L_39 = ___4_result;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_40 = ___0_p1;
		double L_41 = L_40.___x;
		double L_42 = V_6;
		double L_43 = V_0;
		L_39->___x = ((double)il2cpp_codegen_add(L_41, ((double)il2cpp_codegen_multiply(L_42, L_43))));
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* L_44 = ___4_result;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_45 = ___0_p1;
		double L_46 = L_45.___y;
		double L_47 = V_6;
		double L_48 = V_1;
		L_44->___y = ((double)il2cpp_codegen_add(L_46, ((double)il2cpp_codegen_multiply(L_47, L_48))));
		return (bool)1;
	}

IL_00bc:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CalculateEdgeIntersections_mD706558D362051701D8FBF2757B7C4A2EFB04D54 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int32_t ___1_edgeCount, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 ___2_points, int32_t ___3_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___4_results, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* ___5_intersects, int32_t* ___6_resultCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisIntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839_m9AB69CC00CE80043D83F7DFBCE866488E246C8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_3;
	memset((&V_3), 0, sizeof(V_3));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_4;
	memset((&V_4), 0, sizeof(V_4));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_5;
	memset((&V_5), 0, sizeof(V_5));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_6;
	memset((&V_6), 0, sizeof(V_6));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_7;
	memset((&V_7), 0, sizeof(V_7));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		int32_t* L_0 = ___6_resultCount;
		*((int32_t*)L_0) = (int32_t)0;
		V_0 = 0;
		goto IL_0112;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		goto IL_0107;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_2);
		V_2 = L_3;
		int32_t L_4 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_4);
		V_3 = L_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = V_2;
		int32_t L_7 = L_6.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_8 = V_3;
		int32_t L_9 = L_8.___x;
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0103;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_10 = V_2;
		int32_t L_11 = L_10.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_12 = V_3;
		int32_t L_13 = L_12.___y;
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0103;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_14 = V_2;
		int32_t L_15 = L_14.___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = V_3;
		int32_t L_17 = L_16.___x;
		if ((((int32_t)L_15) == ((int32_t)L_17)))
		{
			goto IL_0103;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_18 = V_2;
		int32_t L_19 = L_18.___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_20 = V_3;
		int32_t L_21 = L_20.___y;
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_0103;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_22 = V_2;
		int32_t L_23 = L_22.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_23);
		V_4 = L_24;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_25 = V_2;
		int32_t L_26 = L_25.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_26);
		V_5 = L_27;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_28 = V_3;
		int32_t L_29 = L_28.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_29);
		V_6 = L_30;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_31 = V_3;
		int32_t L_32 = L_31.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_33;
		L_33 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_32);
		V_7 = L_33;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_34 = ((double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_StaticFields*)il2cpp_codegen_static_fields_for(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_il2cpp_TypeInfo_var))->___zero;
		V_8 = L_34;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_35 = V_4;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_36 = V_5;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_37 = V_6;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_38 = V_7;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = PlanarGraph_LineLineIntersection_m17350F15EBC948F829EB7C392AD18A7AFD241284(L_35, L_36, L_37, L_38, NULL);
		if (!L_39)
		{
			goto IL_0103;
		}
	}
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_40 = V_4;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_41 = V_5;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_42 = V_6;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_43 = V_7;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = PlanarGraph_LineLineIntersection_mE3D6BA5A3BEAFD6CF5168142443F49E1B4A086ED(L_40, L_41, L_42, L_43, (&V_8), NULL);
		if (!L_44)
		{
			goto IL_0103;
		}
	}
	{
		int32_t* L_45 = ___6_resultCount;
		int32_t L_46 = *((int32_t*)L_45);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_47 = ___5_intersects;
		int32_t L_48;
		L_48 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_47)->___m_Length);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)0;
	}

IL_00db:
	{
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_49 = ___5_intersects;
		int32_t* L_50 = ___6_resultCount;
		int32_t L_51 = *((int32_t*)L_50);
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_52 = V_8;
		IL2CPP_NATIVEARRAY_SET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_49)->___m_Buffer, L_51, (L_52));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_53 = ___4_results;
		int32_t* L_54 = ___6_resultCount;
		int32_t* L_55 = ___6_resultCount;
		int32_t L_56 = *((int32_t*)L_55);
		V_9 = L_56;
		int32_t L_57 = V_9;
		*((int32_t*)L_54) = (int32_t)((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t L_58 = V_9;
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_61;
		memset((&L_61), 0, sizeof(L_61));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_61), L_59, L_60, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_53)->___m_Buffer, L_58, (L_61));
	}

IL_0103:
	{
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0107:
	{
		int32_t L_63 = V_1;
		int32_t L_64 = ___1_edgeCount;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0112:
	{
		int32_t L_66 = V_0;
		int32_t L_67 = ___1_edgeCount;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_68 = ___6_resultCount;
		int32_t L_69 = *((int32_t*)L_68);
		int32_t L_70 = ___1_edgeCount;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		int32_t L_71 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kMaxIntersectionTolerance;
		if ((((int32_t)L_69) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_70, L_71)))))
		{
			goto IL_0127;
		}
	}
	{
		return (bool)0;
	}

IL_0127:
	{
		il2cpp_codegen_initobj((&V_10), sizeof(IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_72 = ___0_edges;
		(&V_10)->___edges = L_72;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 L_73 = ___2_points;
		(&V_10)->___points = L_73;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_74 = ___4_results;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_75 = (*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_74);
		void* L_76;
		L_76 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D(L_75, NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		int32_t* L_77 = ___6_resultCount;
		int32_t L_78 = *((int32_t*)L_77);
		IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839 L_79 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisIntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839_m9AB69CC00CE80043D83F7DFBCE866488E246C8FC(L_76, 0, ((int32_t)il2cpp_codegen_subtract(L_78, 1)), L_79, ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisIntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839_m9AB69CC00CE80043D83F7DFBCE866488E246C8FC_RuntimeMethod_var);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CalculateTJunctions_mEE0C82242AAEC33550DF9992A5F259762D5CFD44 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int32_t ___1_edgeCount, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 ___2_points, int32_t ___3_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___4_results, int32_t* ___5_resultCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_3;
	memset((&V_3), 0, sizeof(V_3));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_4;
	memset((&V_4), 0, sizeof(V_4));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		int32_t* L_0 = ___5_resultCount;
		*((int32_t*)L_0) = (int32_t)0;
		V_0 = 0;
		goto IL_00a1;
	}

IL_000b:
	{
		V_1 = 0;
		goto IL_0096;
	}

IL_0012:
	{
		int32_t L_1 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_1);
		V_2 = L_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3 = V_2;
		int32_t L_4 = L_3.___x;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0092;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = V_2;
		int32_t L_7 = L_6.___y;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0092;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9 = V_2;
		int32_t L_10 = L_9.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_10);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_12 = V_2;
		int32_t L_13 = L_12.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_13);
		V_3 = L_14;
		int32_t L_15 = V_1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_15);
		V_4 = L_16;
		int32_t L_17 = V_1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___2_points))->___m_Buffer, L_17);
		V_5 = L_18;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_19 = V_3;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_20 = V_4;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_21 = V_5;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = PlanarGraph_LineLineIntersection_m17350F15EBC948F829EB7C392AD18A7AFD241284(L_11, L_19, L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_0092;
		}
	}
	{
		int32_t* L_23 = ___5_resultCount;
		int32_t L_24 = *((int32_t*)L_23);
		int32_t L_25;
		L_25 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___4_results))->___m_Length);
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0076:
	{
		int32_t* L_26 = ___5_resultCount;
		int32_t* L_27 = ___5_resultCount;
		int32_t L_28 = *((int32_t*)L_27);
		V_6 = L_28;
		int32_t L_29 = V_6;
		*((int32_t*)L_26) = (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_6;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_33;
		memset((&L_33), 0, sizeof(L_33));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_33), L_31, L_32, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___4_results))->___m_Buffer, L_30, (L_33));
	}

IL_0092:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0096:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = ___3_pointCount;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a1:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = ___1_edgeCount;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_CutEdges_mD2C22A6E61E85C92EFE1EE79E687F67B3FCE01BF (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* ___0_points, int32_t* ___1_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___2_edges, int32_t* ___3_edgeCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___4_tJunctions, int32_t* ___5_tJunctionCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___6_intersections, NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 ___7_intersects, int32_t ___8_intersectionCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C_m7BCFC0B1FE565D81680F45FC8267E460B43D039C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_13;
	memset((&V_13), 0, sizeof(V_13));
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_18;
	memset((&V_18), 0, sizeof(V_18));
	{
		V_0 = 0;
		goto IL_00a2;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___6_intersections))->___m_Buffer, L_0);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = L_1;
		int32_t L_3 = L_2.___x;
		V_1 = L_3;
		int32_t L_4 = L_2.___y;
		V_2 = L_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5 = ((int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields*)il2cpp_codegen_static_fields_for(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_il2cpp_TypeInfo_var))->___zero;
		V_3 = L_5;
		int32_t L_6 = V_1;
		(&V_3)->___x = L_6;
		int32_t* L_7 = ___1_pointCount;
		int32_t L_8 = *((int32_t*)L_7);
		(&V_3)->___y = L_8;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_9 = ___4_tJunctions;
		int32_t* L_10 = ___5_tJunctionCount;
		int32_t* L_11 = ___5_tJunctionCount;
		int32_t L_12 = *((int32_t*)L_11);
		V_5 = L_12;
		int32_t L_13 = V_5;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_9)->___m_Buffer, L_14, (L_15));
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = ((int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields*)il2cpp_codegen_static_fields_for(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_il2cpp_TypeInfo_var))->___zero;
		V_4 = L_16;
		int32_t L_17 = V_2;
		(&V_4)->___x = L_17;
		int32_t* L_18 = ___1_pointCount;
		int32_t L_19 = *((int32_t*)L_18);
		(&V_4)->___y = L_19;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_20 = ___4_tJunctions;
		int32_t* L_21 = ___5_tJunctionCount;
		int32_t* L_22 = ___5_tJunctionCount;
		int32_t L_23 = *((int32_t*)L_22);
		V_5 = L_23;
		int32_t L_24 = V_5;
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_26 = V_4;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_20)->___m_Buffer, L_25, (L_26));
		int32_t* L_27 = ___1_pointCount;
		int32_t L_28 = *((int32_t*)L_27);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_29 = ___0_points;
		int32_t L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_29)->___m_Length);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0084;
		}
	}
	{
		return (bool)0;
	}

IL_0084:
	{
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_31 = ___0_points;
		int32_t* L_32 = ___1_pointCount;
		int32_t* L_33 = ___1_pointCount;
		int32_t L_34 = *((int32_t*)L_33);
		V_5 = L_34;
		int32_t L_35 = V_5;
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_5;
		int32_t L_37 = V_0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_38;
		L_38 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&___7_intersects))->___m_Buffer, L_37);
		IL2CPP_NATIVEARRAY_SET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_31)->___m_Buffer, L_36, (L_38));
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00a2:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = ___8_intersectionCount;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0007;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_42 = ___4_tJunctions;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_43 = (*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_42);
		void* L_44;
		L_44 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D(L_43, NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		int32_t* L_45 = ___5_tJunctionCount;
		int32_t L_46 = *((int32_t*)L_45);
		il2cpp_codegen_initobj((&V_6), sizeof(TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C));
		TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C L_47 = V_6;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C_m7BCFC0B1FE565D81680F45FC8267E460B43D039C(L_44, 0, ((int32_t)il2cpp_codegen_subtract(L_46, 1)), L_47, ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C_m7BCFC0B1FE565D81680F45FC8267E460B43D039C_RuntimeMethod_var);
		int32_t* L_48 = ___5_tJunctionCount;
		int32_t L_49 = *((int32_t*)L_48);
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
		goto IL_0225;
	}

IL_00d7:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_50 = ___4_tJunctions;
		int32_t L_51 = V_7;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_52;
		L_52 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_50)->___m_Buffer, L_51);
		V_8 = L_52;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_53 = V_8;
		int32_t L_54 = L_53.___x;
		V_9 = L_54;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_55 = ___2_edges;
		int32_t L_56 = V_9;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_57;
		L_57 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_55)->___m_Buffer, L_56);
		V_10 = L_57;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_58 = V_10;
		int32_t L_59 = L_58.___x;
		V_11 = L_59;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_60 = V_10;
		int32_t L_61 = L_60.___y;
		V_12 = L_61;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_62 = ___0_points;
		int32_t L_63 = V_11;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_62)->___m_Buffer, L_63);
		V_13 = L_64;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_65 = ___0_points;
		int32_t L_66 = V_12;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_67;
		L_67 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_65)->___m_Buffer, L_66);
		V_14 = L_67;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_68 = V_13;
		double L_69 = L_68.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_70 = V_14;
		double L_71 = L_70.___x;
		if ((((double)((double)il2cpp_codegen_subtract(L_69, L_71))) < ((double)(0.0))))
		{
			goto IL_015f;
		}
	}
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_72 = V_13;
		double L_73 = L_72.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_74 = V_14;
		double L_75 = L_74.___x;
		if ((!(((double)L_73) == ((double)L_75))))
		{
			goto IL_0167;
		}
	}
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_76 = V_13;
		double L_77 = L_76.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_78 = V_14;
		double L_79 = L_78.___y;
		if ((!(((double)((double)il2cpp_codegen_subtract(L_77, L_79))) < ((double)(0.0)))))
		{
			goto IL_0167;
		}
	}

IL_015f:
	{
		int32_t L_80 = V_11;
		int32_t L_81 = V_12;
		V_11 = L_81;
		V_12 = L_80;
	}

IL_0167:
	{
		int32_t L_82 = V_11;
		(&V_10)->___x = L_82;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_83 = V_8;
		int32_t L_84 = L_83.___y;
		int32_t L_85 = L_84;
		V_5 = L_85;
		(&V_10)->___y = L_85;
		int32_t L_86 = V_5;
		V_15 = L_86;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_87 = ___2_edges;
		int32_t L_88 = V_9;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_89 = V_10;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_87)->___m_Buffer, L_88, (L_89));
		goto IL_01d8;
	}

IL_0191:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_90 = ___4_tJunctions;
		int32_t L_91 = V_7;
		int32_t L_92 = ((int32_t)il2cpp_codegen_subtract(L_91, 1));
		V_7 = L_92;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_93;
		L_93 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_90)->___m_Buffer, L_92);
		int32_t L_94 = L_93.___y;
		V_17 = L_94;
		il2cpp_codegen_initobj((&V_18), sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A));
		int32_t L_95 = V_15;
		(&V_18)->___x = L_95;
		int32_t L_96 = V_17;
		(&V_18)->___y = L_96;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_97 = ___2_edges;
		int32_t* L_98 = ___3_edgeCount;
		int32_t* L_99 = ___3_edgeCount;
		int32_t L_100 = *((int32_t*)L_99);
		V_5 = L_100;
		int32_t L_101 = V_5;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_101, 1));
		int32_t L_102 = V_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_103 = V_18;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_97)->___m_Buffer, L_102, (L_103));
		int32_t L_104 = V_17;
		V_15 = L_104;
	}

IL_01d8:
	{
		int32_t L_105 = V_7;
		if ((((int32_t)L_105) <= ((int32_t)0)))
		{
			goto IL_01f1;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_106 = ___4_tJunctions;
		int32_t L_107 = V_7;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_106)->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_107, 1)));
		int32_t L_109 = L_108.___x;
		int32_t L_110 = V_9;
		if ((((int32_t)L_109) == ((int32_t)L_110)))
		{
			goto IL_0191;
		}
	}

IL_01f1:
	{
		il2cpp_codegen_initobj((&V_16), sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A));
		int32_t L_111 = V_15;
		(&V_16)->___x = L_111;
		int32_t L_112 = V_12;
		(&V_16)->___y = L_112;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_113 = ___2_edges;
		int32_t* L_114 = ___3_edgeCount;
		int32_t* L_115 = ___3_edgeCount;
		int32_t L_116 = *((int32_t*)L_115);
		V_5 = L_116;
		int32_t L_117 = V_5;
		*((int32_t*)L_114) = (int32_t)((int32_t)il2cpp_codegen_add(L_117, 1));
		int32_t L_118 = V_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_119 = V_16;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_113)->___m_Buffer, L_118, (L_119));
		int32_t L_120 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
	}

IL_0225:
	{
		int32_t L_121 = V_7;
		if ((((int32_t)L_121) >= ((int32_t)0)))
		{
			goto IL_00d7;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarGraph_RemoveDuplicatePoints_m0E4EA60CACDB36682410B04FD3DDB7A92C31A0EA (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* ___0_points, int32_t* ___1_pointCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___2_duplicates, int32_t* ___3_duplicateCount, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t* L_0 = ___1_pointCount;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t L_2 = ___4_allocator;
		TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 L_3;
		L_3 = TessLink_CreateLink_m29A2928ED0ECDA9EE29A29E2EC92D6678F10FF05(L_1, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0044;
	}

IL_000e:
	{
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_003b;
	}

IL_0014:
	{
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_5 = ___0_points;
		int32_t L_6 = V_1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_5)->___m_Buffer, L_6);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_8 = ___0_points;
		int32_t L_9 = V_2;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_8)->___m_Buffer, L_9);
		double L_11;
		L_11 = math_distance_m72BEFBAADFC4404FADD3AD81F7EDD40E32624F4D_inline(L_7, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		double L_12 = ((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon;
		if ((!(((double)L_11) < ((double)L_12))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		TessLink_Link_m371C8A216AFD9AC8BCD5F015C59DD926F8088B8B((&V_0), L_13, L_14, NULL);
	}

IL_0037:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003b:
	{
		int32_t L_16 = V_2;
		int32_t* L_17 = ___1_pointCount;
		int32_t L_18 = *((int32_t*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0044:
	{
		int32_t L_20 = V_1;
		int32_t* L_21 = ___1_pointCount;
		int32_t L_22 = *((int32_t*)L_21);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t* L_23 = ___3_duplicateCount;
		*((int32_t*)L_23) = (int32_t)0;
		V_3 = 0;
		goto IL_0085;
	}

IL_0050:
	{
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08((&V_0), L_24, NULL);
		V_4 = L_25;
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t* L_28 = ___3_duplicateCount;
		int32_t* L_29 = ___3_duplicateCount;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_31 = ___0_points;
		int32_t L_32 = V_4;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_33 = ___0_points;
		int32_t L_34 = V_3;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_35;
		L_35 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_33)->___m_Buffer, L_34);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_36 = ___0_points;
		int32_t L_37 = V_4;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_38;
		L_38 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_36)->___m_Buffer, L_37);
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_39;
		L_39 = math_min_m1D64D6B67B27FD9738D14BCEE6298146CB05CE00_inline(L_35, L_38, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_31)->___m_Buffer, L_32, (L_39));
	}

IL_0081:
	{
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0085:
	{
		int32_t L_41 = V_3;
		int32_t* L_42 = ___1_pointCount;
		int32_t L_43 = *((int32_t*)L_42);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t* L_44 = ___3_duplicateCount;
		int32_t L_45 = *((int32_t*)L_44);
		if (!L_45)
		{
			goto IL_0118;
		}
	}
	{
		int32_t* L_46 = ___1_pointCount;
		int32_t L_47 = *((int32_t*)L_46);
		V_5 = L_47;
		int32_t* L_48 = ___1_pointCount;
		*((int32_t*)L_48) = (int32_t)0;
		V_6 = 0;
		goto IL_00df;
	}

IL_009d:
	{
		int32_t L_49 = V_6;
		int32_t L_50;
		L_50 = TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08((&V_0), L_49, NULL);
		int32_t L_51 = V_6;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_00d0;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_52 = ___2_duplicates;
		int32_t L_53 = V_6;
		int32_t* L_54 = ___1_pointCount;
		int32_t L_55 = *((int32_t*)L_54);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_52)->___m_Buffer, L_53, (L_55));
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_56 = ___0_points;
		int32_t* L_57 = ___1_pointCount;
		int32_t* L_58 = ___1_pointCount;
		int32_t L_59 = *((int32_t*)L_58);
		V_7 = L_59;
		int32_t L_60 = V_7;
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_7;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_62 = ___0_points;
		int32_t L_63 = V_6;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_62)->___m_Buffer, L_63);
		IL2CPP_NATIVEARRAY_SET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_56)->___m_Buffer, L_61, (L_64));
		goto IL_00d9;
	}

IL_00d0:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_65 = ___2_duplicates;
		int32_t L_66 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_65)->___m_Buffer, L_66, ((-1)));
	}

IL_00d9:
	{
		int32_t L_67 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00df:
	{
		int32_t L_68 = V_6;
		int32_t L_69 = V_5;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_009d;
		}
	}
	{
		V_8 = 0;
		goto IL_0112;
	}

IL_00ea:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_70 = ___2_duplicates;
		int32_t L_71 = V_8;
		int32_t L_72;
		L_72 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_70)->___m_Buffer, L_71);
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_73 = ___2_duplicates;
		int32_t L_74 = V_8;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_75 = ___2_duplicates;
		int32_t L_76 = V_8;
		int32_t L_77;
		L_77 = TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08((&V_0), L_76, NULL);
		int32_t L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_75)->___m_Buffer, L_77);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_73)->___m_Buffer, L_74, (L_78));
	}

IL_010c:
	{
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0112:
	{
		int32_t L_80 = V_8;
		int32_t L_81 = V_5;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_00ea;
		}
	}

IL_0118:
	{
		TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 L_82 = V_0;
		TessLink_DestroyLink_m8AE3E6F07F5695531C7712DC0777B62A7494AF1F(L_82, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarGraph_Validate_m55816BC6804855F94178B5FDEC284BB63C0ACC88 (int32_t ___0_allocator, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_inputPoints, int32_t ___2_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___3_inputEdges, int32_t ___4_edgeCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___5_outputPoints, int32_t* ___6_outputPointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___7_outputEdges, int32_t* ___8_outputEdgeCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t G_B10_0 = 0;
	{
		V_0 = (10000.0f);
		int32_t L_0 = ___4_edgeCount;
		V_1 = L_0;
		V_2 = (bool)1;
		V_3 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxEdgeCount;
		int32_t L_2 = ___0_allocator;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_4), L_1, L_2, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		int32_t L_3 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxEdgeCount;
		int32_t L_4 = ___0_allocator;
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&V_5), L_3, L_4, 1, NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		int32_t L_5 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxEdgeCount;
		int32_t L_6 = ___0_allocator;
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&V_6), L_5, L_6, 1, NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		int32_t L_7 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxEdgeCount;
		int32_t L_8 = ___0_allocator;
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&V_7), L_7, L_8, 1, NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		int32_t L_9 = ___2_pointCount;
		int32_t L_10 = ___0_allocator;
		NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54((&V_8), ((int32_t)il2cpp_codegen_multiply(L_9, 8)), L_10, 1, NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54_RuntimeMethod_var);
		int32_t L_11 = ___2_pointCount;
		int32_t L_12 = ___0_allocator;
		NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54((&V_9), ((int32_t)il2cpp_codegen_multiply(L_11, 8)), L_12, 1, NativeArray_1__ctor_mC429670774D3D1F7CB41BBD8C5BD9943404BDF54_RuntimeMethod_var);
		V_10 = 0;
		goto IL_0085;
	}

IL_0062:
	{
		int32_t L_13 = V_10;
		int32_t L_14 = V_10;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___1_inputPoints))->___m_Buffer, L_14);
		float L_16 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17;
		L_17 = float2_op_Multiply_m34D03129CE0D7AD665A914DE83CB749585B2455F_inline(L_15, L_16, NULL);
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_18;
		L_18 = double2_op_Implicit_m168C031549D6C086B7C49ECA5B18C892B3112F17_inline(L_17, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&V_8))->___m_Buffer, L_13, (L_18));
		int32_t L_19 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0085:
	{
		int32_t L_20 = V_10;
		int32_t L_21 = ___2_pointCount;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_22 = ___3_inputEdges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_23 = V_5;
		int32_t L_24 = ___4_edgeCount;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856(L_22, L_23, L_24, ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_25 = V_4;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		PlanarGraph_RemoveDuplicateEdges_m02B7AF8FAF00D6029D902205B836E6E7B9B9FD43((&V_5), (&___4_edgeCount), L_25, 0, NULL);
		goto IL_0118;
	}

IL_00a2:
	{
		V_11 = 0;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_26 = V_5;
		int32_t L_27 = ___4_edgeCount;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 L_28 = V_8;
		int32_t L_29 = ___2_pointCount;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = PlanarGraph_CalculateEdgeIntersections_mD706558D362051701D8FBF2757B7C4A2EFB04D54(L_26, L_27, L_28, L_29, (&V_7), (&V_9), (&V_11), NULL);
		V_3 = L_30;
		bool L_31 = V_3;
		if (!L_31)
		{
			goto IL_0126;
		}
	}
	{
		V_12 = 0;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_32 = V_5;
		int32_t L_33 = ___4_edgeCount;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 L_34 = V_8;
		int32_t L_35 = ___2_pointCount;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_36 = V_6;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = PlanarGraph_CalculateTJunctions_mEE0C82242AAEC33550DF9992A5F259762D5CFD44(L_32, L_33, L_34, L_35, L_36, (&V_12), NULL);
		V_3 = L_37;
		bool L_38 = V_3;
		if (!L_38)
		{
			goto IL_0126;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_39 = V_7;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7 L_40 = V_9;
		int32_t L_41 = V_11;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = PlanarGraph_CutEdges_mD2C22A6E61E85C92EFE1EE79E687F67B3FCE01BF((&V_8), (&___2_pointCount), (&V_5), (&___4_edgeCount), (&V_6), (&V_12), L_39, L_40, L_41, NULL);
		V_3 = L_42;
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_0126;
		}
	}
	{
		V_13 = 0;
		int32_t L_44 = ___0_allocator;
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		PlanarGraph_RemoveDuplicatePoints_m0E4EA60CACDB36682410B04FD3DDB7A92C31A0EA((&V_8), (&___2_pointCount), (&V_4), (&V_13), L_44, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_45 = V_4;
		int32_t L_46 = V_13;
		PlanarGraph_RemoveDuplicateEdges_m02B7AF8FAF00D6029D902205B836E6E7B9B9FD43((&V_5), (&___4_edgeCount), L_45, L_46, NULL);
		int32_t L_47 = V_11;
		if (L_47)
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_48 = V_12;
		G_B10_0 = ((!(((uint32_t)L_48) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0117;
	}

IL_0116:
	{
		G_B10_0 = 1;
	}

IL_0117:
	{
		V_2 = (bool)G_B10_0;
	}

IL_0118:
	{
		bool L_49 = V_2;
		if (!L_49)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_50 = V_1;
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		V_1 = L_51;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}

IL_0126:
	{
		bool L_52 = V_3;
		if (!L_52)
		{
			goto IL_0184;
		}
	}
	{
		int32_t* L_53 = ___8_outputEdgeCount;
		int32_t L_54 = ___4_edgeCount;
		*((int32_t*)L_53) = (int32_t)L_54;
		int32_t* L_55 = ___6_outputPointCount;
		int32_t L_56 = ___2_pointCount;
		*((int32_t*)L_55) = (int32_t)L_56;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_57 = V_5;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_58 = ___7_outputEdges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_59 = (*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_58);
		int32_t L_60 = ___4_edgeCount;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856(L_57, L_59, L_60, ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		V_14 = 0;
		goto IL_017f;
	}

IL_0147:
	{
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_61 = ___5_outputPoints;
		int32_t L_62 = V_14;
		int32_t L_63 = V_14;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&V_8))->___m_Buffer, L_63);
		double L_65 = L_64.___x;
		float L_66 = V_0;
		int32_t L_67 = V_14;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_68;
		L_68 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, ((&V_8))->___m_Buffer, L_67);
		double L_69 = L_68.___y;
		float L_70 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_71;
		memset((&L_71), 0, sizeof(L_71));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_71), ((float)((double)(L_65/((double)L_66)))), ((float)((double)(L_69/((double)L_70)))), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_61)->___m_Buffer, L_62, (L_71));
		int32_t L_72 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_017f:
	{
		int32_t L_73 = V_14;
		int32_t L_74 = ___2_pointCount;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0147;
		}
	}

IL_0184:
	{
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2((&V_5), NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB((&V_8), NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB_RuntimeMethod_var);
		NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB((&V_9), NativeArray_1_Dispose_mE0AE14258D3045288D915F3FD346533D843D7CDB_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_4), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2((&V_6), NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2((&V_7), NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		bool L_75 = V_3;
		if (!L_75)
		{
			goto IL_01b6;
		}
	}
	{
		int32_t L_76 = V_1;
		return (bool)((((int32_t)L_76) > ((int32_t)0))? 1 : 0);
	}

IL_01b6:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarGraph__cctor_m41BAFC16976D7CC16BE6F8C0863A6FE6EC3BD336 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kEpsilon = (1.0000000000000001E-05);
		((PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_StaticFields*)il2cpp_codegen_static_fields_for(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var))->___kMaxIntersectionTolerance = 4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tessellator_FindSplit_m10B801FE843957B0D014E7867373EAF6AA2CF1FD (UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_hull, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_edge, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_0 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = L_0.___a;
		float L_2 = L_1.___x;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_3 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = L_3.___a;
		float L_5 = L_4.___x;
		if ((!(((float)L_2) < ((float)L_5))))
		{
			goto IL_0038;
		}
	}
	{
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_6 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = L_6.___a;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_8 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9 = L_8.___b;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_10 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11 = L_10.___a;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_7, L_9, L_11, NULL);
		V_0 = L_12;
		goto IL_0050;
	}

IL_0038:
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_13 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14 = L_13.___b;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_15 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_16 = L_15.___a;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_17 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_18 = L_17.___a;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_14, L_16, L_18, NULL);
		V_0 = L_19;
	}

IL_0050:
	{
		float L_20 = V_0;
		if ((((float)(0.0f)) == ((float)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		float L_21 = V_0;
		return L_21;
	}

IL_005a:
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_22 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_23 = L_22.___b;
		float L_24 = L_23.___x;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_25 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_26 = L_25.___b;
		float L_27 = L_26.___x;
		if ((!(((float)L_24) < ((float)L_27))))
		{
			goto IL_008c;
		}
	}
	{
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_28 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_29 = L_28.___a;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_30 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_31 = L_30.___b;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_32 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_33 = L_32.___b;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_34;
		L_34 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_29, L_31, L_33, NULL);
		V_0 = L_34;
		goto IL_00a4;
	}

IL_008c:
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_35 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_36 = L_35.___b;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_37 = ___1_edge;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_38 = L_37.___a;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_39 = ___0_hull;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_40 = L_39.___b;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_41;
		L_41 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_36, L_38, L_40, NULL);
		V_0 = L_41;
	}

IL_00a4:
	{
		float L_42 = V_0;
		if ((((float)(0.0f)) == ((float)L_42)))
		{
			goto IL_00ae;
		}
	}
	{
		float L_43 = V_0;
		return L_43;
	}

IL_00ae:
	{
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_44 = ___0_hull;
		int32_t L_45 = L_44.___idx;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_46 = ___1_edge;
		int32_t L_47 = L_46.___idx;
		return ((float)((int32_t)il2cpp_codegen_subtract(L_45, L_47)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_SetAllocator_m66AFC39E8CFBDC82638D7D7BC3BA70CB4B818C96 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_allocator;
		__this->___m_Allocator = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Tessellator_SetAllocator_m66AFC39E8CFBDC82638D7D7BC3BA70CB4B818C96_AdjustorThunk (RuntimeObject* __this, int32_t ___0_allocator, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	Tessellator_SetAllocator_m66AFC39E8CFBDC82638D7D7BC3BA70CB4B818C96_inline(_thisAdjusted, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_AddPoint_m1B8B2A1C5A2F7742F1E5AF1D7618E65C1B75C70B (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___3_p, int32_t ___4_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2_m55CC2779035AFBCCFD9B87FCC9AB67B8A698DFC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_GetUpper_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16_mC522DB218F2E0F9767CA24A550B91BE9045D952D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_0 = ___0_hulls;
		int32_t L_1 = ___1_hullCount;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___3_p;
		il2cpp_codegen_initobj((&V_2), sizeof(TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2));
		TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2 L_3 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2_m55CC2779035AFBCCFD9B87FCC9AB67B8A698DFC8(L_0, L_1, L_2, L_3, ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2_m55CC2779035AFBCCFD9B87FCC9AB67B8A698DFC8_RuntimeMethod_var);
		V_0 = L_4;
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_5 = ___0_hulls;
		int32_t L_6 = ___1_hullCount;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = ___3_p;
		il2cpp_codegen_initobj((&V_3), sizeof(TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16));
		TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16 L_8 = V_3;
		int32_t L_9;
		L_9 = ModuleHandle_GetUpper_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16_mC522DB218F2E0F9767CA24A550B91BE9045D952D(L_5, L_6, L_7, L_8, ModuleHandle_GetUpper_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_TisTestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16_mC522DB218F2E0F9767CA24A550B91BE9045D952D_RuntimeMethod_var);
		V_1 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		int32_t L_12 = V_0;
		V_4 = L_12;
		goto IL_0222;
	}

IL_0038:
	{
		int32_t L_13 = V_4;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_hulls))->___m_Buffer, L_13);
		V_5 = L_14;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_15 = V_5;
		int32_t L_16 = L_15.___ilcount;
		V_6 = L_16;
		goto IL_00b4;
	}

IL_004e:
	{
		il2cpp_codegen_initobj((&V_7), sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF));
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_17 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___ilarray);
		int32_t L_18 = V_6;
		int32_t L_19;
		L_19 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_17, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		(&V_7)->___x = L_19;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_20 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___ilarray);
		int32_t L_21 = V_6;
		int32_t L_22;
		L_22 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 2)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		(&V_7)->___y = L_22;
		int32_t L_23 = ___4_idx;
		(&V_7)->___z = L_23;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* L_24 = (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*)(&__this->___m_Cells);
		int32_t L_25 = __this->___m_CellCount;
		V_8 = L_25;
		int32_t L_26 = V_8;
		__this->___m_CellCount = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_8;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_28 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, (L_24)->___m_Buffer, L_27, (L_28));
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_00b4:
	{
		int32_t L_30 = V_6;
		if ((((int32_t)L_30) <= ((int32_t)1)))
		{
			goto IL_00f8;
		}
	}
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_31 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___ilarray);
		int32_t L_32 = V_6;
		int32_t L_33;
		L_33 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 2)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_34;
		L_34 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___2_points))->___m_Buffer, L_33);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_35 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___ilarray);
		int32_t L_36 = V_6;
		int32_t L_37;
		L_37 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_35, ((int32_t)il2cpp_codegen_subtract(L_36, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_38;
		L_38 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___2_points))->___m_Buffer, L_37);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_39 = ___3_p;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_40;
		L_40 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_34, L_38, L_39, NULL);
		if ((((float)L_40) > ((float)(0.0f))))
		{
			goto IL_004e;
		}
	}

IL_00f8:
	{
		int32_t L_41 = V_6;
		(&V_5)->___ilcount = ((int32_t)il2cpp_codegen_add(L_41, 1));
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_42 = V_5;
		int32_t L_43 = L_42.___ilcount;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_44 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___ilarray);
		int32_t L_45;
		L_45 = ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_inline(L_44, ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_RuntimeMethod_var);
		if ((((int32_t)L_43) <= ((int32_t)L_45)))
		{
			goto IL_011a;
		}
	}
	{
		return (bool)0;
	}

IL_011a:
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_46 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___ilarray);
		int32_t L_47 = V_6;
		int32_t L_48 = ___4_idx;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_46, L_47, L_48, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_49 = V_5;
		int32_t L_50 = L_49.___iucount;
		V_6 = L_50;
		goto IL_019b;
	}

IL_0135:
	{
		il2cpp_codegen_initobj((&V_9), sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF));
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_51 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___iuarray);
		int32_t L_52 = V_6;
		int32_t L_53;
		L_53 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_51, ((int32_t)il2cpp_codegen_subtract(L_52, 2)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		(&V_9)->___x = L_53;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_54 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___iuarray);
		int32_t L_55 = V_6;
		int32_t L_56;
		L_56 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_54, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		(&V_9)->___y = L_56;
		int32_t L_57 = ___4_idx;
		(&V_9)->___z = L_57;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* L_58 = (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*)(&__this->___m_Cells);
		int32_t L_59 = __this->___m_CellCount;
		V_8 = L_59;
		int32_t L_60 = V_8;
		__this->___m_CellCount = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_8;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_62 = V_9;
		IL2CPP_NATIVEARRAY_SET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, (L_58)->___m_Buffer, L_61, (L_62));
		int32_t L_63 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_019b:
	{
		int32_t L_64 = V_6;
		if ((((int32_t)L_64) <= ((int32_t)1)))
		{
			goto IL_01df;
		}
	}
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_65 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___iuarray);
		int32_t L_66 = V_6;
		int32_t L_67;
		L_67 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_65, ((int32_t)il2cpp_codegen_subtract(L_66, 2)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_68;
		L_68 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___2_points))->___m_Buffer, L_67);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_69 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___iuarray);
		int32_t L_70 = V_6;
		int32_t L_71;
		L_71 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_69, ((int32_t)il2cpp_codegen_subtract(L_70, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_72;
		L_72 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___2_points))->___m_Buffer, L_71);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_73 = ___3_p;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_74;
		L_74 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_68, L_72, L_73, NULL);
		if ((((float)L_74) < ((float)(0.0f))))
		{
			goto IL_0135;
		}
	}

IL_01df:
	{
		int32_t L_75 = V_6;
		(&V_5)->___iucount = ((int32_t)il2cpp_codegen_add(L_75, 1));
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_76 = V_5;
		int32_t L_77 = L_76.___iucount;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_78 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___iuarray);
		int32_t L_79;
		L_79 = ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_inline(L_78, ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_RuntimeMethod_var);
		if ((((int32_t)L_77) <= ((int32_t)L_79)))
		{
			goto IL_0201;
		}
	}
	{
		return (bool)0;
	}

IL_0201:
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_80 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___iuarray);
		int32_t L_81 = V_6;
		int32_t L_82 = ___4_idx;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_80, L_81, L_82, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		int32_t L_83 = V_4;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_84 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_hulls))->___m_Buffer, L_83, (L_84));
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0222:
	{
		int32_t L_86 = V_4;
		int32_t L_87 = V_1;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Tessellator_AddPoint_m1B8B2A1C5A2F7742F1E5AF1D7618E65C1B75C70B_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___3_p, int32_t ___4_idx, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	bool _returnValue;
	_returnValue = Tessellator_AddPoint_m1B8B2A1C5A2F7742F1E5AF1D7618E65C1B75C70B(_thisAdjusted, ___0_hulls, ___1_hullCount, ___2_points, ___3_p, ___4_idx, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_InsertHull_mC363D2CABF716C07C41BB4209A4BCBCC50F1EFC1 (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_Hulls, int32_t ___1_Pos, int32_t* ___2_Count, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___3_Value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___2_Count;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_Hulls))->___m_Length);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t* L_3 = ___2_Count;
		int32_t L_4 = *((int32_t*)L_3);
		V_0 = L_4;
		goto IL_0028;
	}

IL_0012:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_Hulls))->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_6, 1)));
		IL2CPP_NATIVEARRAY_SET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_Hulls))->___m_Buffer, L_5, (L_7));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_Pos;
		if ((((int32_t)L_9) > ((int32_t)L_10)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_11 = ___1_Pos;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_12 = ___3_Value;
		IL2CPP_NATIVEARRAY_SET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_Hulls))->___m_Buffer, L_11, (L_12));
		int32_t* L_13 = ___2_Count;
		int32_t* L_14 = ___2_Count;
		int32_t L_15 = *((int32_t*)L_14);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_EraseHull_mC63AB321BFF1D86A25F33DE2180CD685D138069C (NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_Hulls, int32_t ___1_Pos, int32_t* ___2_Count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___2_Count;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_Hulls))->___m_Length);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = ___1_Pos;
		V_0 = L_3;
		goto IL_0025;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_Hulls))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_5, 1)));
		IL2CPP_NATIVEARRAY_SET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_Hulls))->___m_Buffer, L_4, (L_6));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_Count;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_10, 1)))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t* L_11 = ___2_Count;
		int32_t* L_12 = ___2_Count;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_SplitHulls_mC558F30B7A383F1169945126EF5FF34B2E9B54C9 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t* ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___3_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8_m937CDE2C0471EAF92BA5B86BF551960EC1D4E6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_0 = ___0_hulls;
		int32_t* L_1 = ___1_hullCount;
		int32_t L_2 = *((int32_t*)L_1);
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_3 = ___3_evt;
		il2cpp_codegen_initobj((&V_4), sizeof(TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8));
		TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8 L_4 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8_m937CDE2C0471EAF92BA5B86BF551960EC1D4E6C6(L_0, L_2, L_3, L_4, ModuleHandle_GetLower_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8_m937CDE2C0471EAF92BA5B86BF551960EC1D4E6C6_RuntimeMethod_var);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_hulls))->___m_Buffer, L_7);
		V_1 = L_8;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_9 = ___3_evt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10 = L_9.___a;
		(&V_2)->___a = L_10;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_11 = ___3_evt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = L_11.___b;
		(&V_2)->___b = L_12;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_13 = ___3_evt;
		int32_t L_14 = L_13.___idx;
		(&V_2)->___idx = L_14;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_15 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_1)->___iuarray);
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_16 = V_1;
		int32_t L_17 = L_16.___iucount;
		int32_t L_18;
		L_18 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_3 = L_18;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_19 = __this->___m_IUArray;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_20 = V_2;
		int32_t L_21 = L_20.___idx;
		int32_t L_22 = __this->___m_NumHulls;
		int32_t L_23 = __this->___m_NumHulls;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_24;
		memset((&L_24), 0, sizeof(L_24));
		ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9((&L_24), L_19, ((int32_t)il2cpp_codegen_multiply(L_21, L_22)), L_23, ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		(&V_2)->___iuarray = L_24;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_25 = V_1;
		int32_t L_26 = L_25.___iucount;
		(&V_2)->___iucount = L_26;
		V_5 = 0;
		goto IL_00bc;
	}

IL_009a:
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_27 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_2)->___iuarray);
		int32_t L_28 = V_5;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_29 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_1)->___iuarray);
		int32_t L_30 = V_5;
		int32_t L_31;
		L_31 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_29, L_30, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_27, L_28, L_31, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00bc:
	{
		int32_t L_33 = V_5;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_34 = V_2;
		int32_t L_35 = L_34.___iucount;
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_009a;
		}
	}
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_36 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_1)->___iuarray);
		int32_t L_37 = V_3;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_36, 0, L_37, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		(&V_1)->___iucount = 1;
		int32_t L_38 = V_0;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_39 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_hulls))->___m_Buffer, L_38, (L_39));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_40 = __this->___m_ILArray;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_41 = V_2;
		int32_t L_42 = L_41.___idx;
		int32_t L_43 = __this->___m_NumHulls;
		int32_t L_44 = __this->___m_NumHulls;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_45;
		memset((&L_45), 0, sizeof(L_45));
		ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9((&L_45), L_40, ((int32_t)il2cpp_codegen_multiply(L_42, L_43)), L_44, ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		(&V_2)->___ilarray = L_45;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_46 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_2)->___ilarray);
		int32_t L_47 = V_3;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_46, 0, L_47, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		(&V_2)->___ilcount = 1;
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_48 = ___0_hulls;
		int32_t L_49 = V_0;
		int32_t* L_50 = ___1_hullCount;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_51 = V_2;
		Tessellator_InsertHull_mC363D2CABF716C07C41BB4209A4BCBCC50F1EFC1(L_48, ((int32_t)il2cpp_codegen_add(L_49, 1)), L_50, L_51, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Tessellator_SplitHulls_mC558F30B7A383F1169945126EF5FF34B2E9B54C9_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t* ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___3_evt, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	bool _returnValue;
	_returnValue = Tessellator_SplitHulls_mC558F30B7A383F1169945126EF5FF34B2E9B54C9(_thisAdjusted, ___0_hulls, ___1_hullCount, ___2_points, ___3_evt, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_MergeHulls_m9A96C241CD12A18A2CF1FAC88978385323F57DFE (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t* ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___3_evt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_GetEqual_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0_m557792A2DC3C707409AD5786704C1F7864F410AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_0 = ___3_evt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = L_0.___a;
		V_0 = L_1;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_2 = ___3_evt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_3 = L_2.___b;
		(&___3_evt)->___a = L_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = V_0;
		(&___3_evt)->___b = L_4;
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_5 = ___0_hulls;
		int32_t* L_6 = ___1_hullCount;
		int32_t L_7 = *((int32_t*)L_6);
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_8 = ___3_evt;
		il2cpp_codegen_initobj((&V_4), sizeof(TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0));
		TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0 L_9 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = ModuleHandle_GetEqual_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0_m557792A2DC3C707409AD5786704C1F7864F410AA(L_5, L_7, L_8, L_9, ModuleHandle_GetEqual_TisUHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0_m557792A2DC3C707409AD5786704C1F7864F410AA_RuntimeMethod_var);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		int32_t L_12 = V_1;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_hulls))->___m_Buffer, L_12);
		V_2 = L_13;
		int32_t L_14 = V_1;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_hulls))->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_14, 1)));
		V_3 = L_15;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_16 = V_2;
		int32_t L_17 = L_16.___iucount;
		(&V_3)->___iucount = L_17;
		V_5 = 0;
		goto IL_0081;
	}

IL_005f:
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_18 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_3)->___iuarray);
		int32_t L_19 = V_5;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_20 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_2)->___iuarray);
		int32_t L_21 = V_5;
		int32_t L_22;
		L_22 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_20, L_21, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_18, L_19, L_22, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0081:
	{
		int32_t L_24 = V_5;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_25 = V_3;
		int32_t L_26 = L_25.___iucount;
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_27 = V_1;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_28 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&___0_hulls))->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_27, 1)), (L_28));
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_29 = ___0_hulls;
		int32_t L_30 = V_1;
		int32_t* L_31 = ___1_hullCount;
		Tessellator_EraseHull_mC63AB321BFF1D86A25F33DE2180CD685D138069C(L_29, L_30, L_31, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Tessellator_MergeHulls_m9A96C241CD12A18A2CF1FAC88978385323F57DFE_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 ___0_hulls, int32_t* ___1_hullCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___2_points, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___3_evt, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	bool _returnValue;
	_returnValue = Tessellator_MergeHulls_m9A96C241CD12A18A2CF1FAC88978385323F57DFE(_thisAdjusted, ___0_hulls, ___1_hullCount, ___2_points, ___3_evt, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_InsertUniqueEdge_m05BA0DE1A1B7A7392EA482F6AFD23CCE325D4625 (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_e, int32_t* ___2_edgeCount, const RuntimeMethod* method) 
{
	TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA));
		V_1 = (bool)1;
		V_2 = 0;
		goto IL_0026;
	}

IL_000e:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___1_e;
		int32_t L_1 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_1);
		int32_t L_3;
		L_3 = TessEdgeCompare_Compare_mE3BC27F4E0F907DADA5C2B96C0826122EBB34E97((&V_0), L_0, L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_0022:
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0026:
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_6 = V_2;
		int32_t* L_7 = ___2_edgeCount;
		int32_t L_8 = *((int32_t*)L_7);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_002e:
	{
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_10 = ___2_edgeCount;
		int32_t* L_11 = ___2_edgeCount;
		int32_t L_12 = *((int32_t*)L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_3;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15 = ___1_e;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_14, (L_15));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_PrepareDelaunay_mB942127F1C81668537200C7D5BEBEAB81A8E8396 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int32_t ___1_edgeCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m2ED9FEE09431A02D2BCDEC1C1496392E0E13967E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_12;
	memset((&V_12), 0, sizeof(V_12));
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_13;
	memset((&V_13), 0, sizeof(V_13));
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B3_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B4_1 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B6_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B7_1 = NULL;
	{
		int32_t L_0 = __this->___m_CellCount;
		__this->___m_StarCount = ((int32_t)il2cpp_codegen_multiply(L_0, 3));
		int32_t L_1 = __this->___m_StarCount;
		int32_t L_2 = __this->___m_Allocator;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_m2ED9FEE09431A02D2BCDEC1C1496392E0E13967E((&L_3), L_1, L_2, 1, NativeArray_1__ctor_m2ED9FEE09431A02D2BCDEC1C1496392E0E13967E_RuntimeMethod_var);
		__this->___m_Stars = L_3;
		int32_t L_4 = __this->___m_StarCount;
		int32_t L_5 = __this->___m_StarCount;
		int32_t L_6 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_7;
		memset((&L_7), 0, sizeof(L_7));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_7), ((int32_t)il2cpp_codegen_multiply(L_4, L_5)), L_6, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_SPArray = L_7;
		V_0 = 0;
		int32_t L_8 = __this->___m_StarCount;
		int32_t L_9 = __this->___m_Allocator;
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&V_1), L_8, L_9, 1, NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		V_2 = 0;
		goto IL_00ff;
	}

IL_0062:
	{
		int32_t L_10 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_10);
		V_3 = L_11;
		int32_t L_12 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_12);
		int32_t L_14 = L_13.___x;
		int32_t L_15 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_15);
		int32_t L_17 = L_16.___y;
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			G_B3_0 = (&V_3);
			goto IL_0098;
		}
		G_B2_0 = (&V_3);
	}
	{
		int32_t L_18 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_19;
		L_19 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_18);
		int32_t L_20 = L_19.___y;
		G_B4_0 = L_20;
		G_B4_1 = G_B2_0;
		goto IL_00a5;
	}

IL_0098:
	{
		int32_t L_21 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_22;
		L_22 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_21);
		int32_t L_23 = L_22.___x;
		G_B4_0 = L_23;
		G_B4_1 = G_B3_0;
	}

IL_00a5:
	{
		G_B4_1->___x = G_B4_0;
		int32_t L_24 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_25;
		L_25 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_24);
		int32_t L_26 = L_25.___x;
		int32_t L_27 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_27);
		int32_t L_29 = L_28.___y;
		if ((((int32_t)L_26) > ((int32_t)L_29)))
		{
			G_B6_0 = (&V_3);
			goto IL_00d7;
		}
		G_B5_0 = (&V_3);
	}
	{
		int32_t L_30 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_30);
		int32_t L_32 = L_31.___y;
		G_B7_0 = L_32;
		G_B7_1 = G_B5_0;
		goto IL_00e4;
	}

IL_00d7:
	{
		int32_t L_33 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_34;
		L_34 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_33);
		int32_t L_35 = L_34.___x;
		G_B7_0 = L_35;
		G_B7_1 = G_B6_0;
	}

IL_00e4:
	{
		G_B7_1->___y = G_B7_0;
		int32_t L_36 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_37 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___0_edges))->___m_Buffer, L_36, (L_37));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_38 = V_1;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_39 = V_3;
		Tessellator_InsertUniqueEdge_m05BA0DE1A1B7A7392EA482F6AFD23CCE325D4625(L_38, L_39, (&V_0), NULL);
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ff:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = ___1_edgeCount;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_43 = V_0;
		int32_t L_44 = __this->___m_Allocator;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&L_45), L_43, L_44, 1, NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		__this->___m_Edges = L_45;
		V_4 = 0;
		goto IL_013a;
	}

IL_011e:
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_46 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___m_Edges);
		int32_t L_47 = V_4;
		int32_t L_48 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_49;
		L_49 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&V_1))->___m_Buffer, L_48);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_46)->___m_Buffer, L_47, (L_49));
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_013a:
	{
		int32_t L_51 = V_4;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_011e;
		}
	}
	{
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2((&V_1), NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_53 = __this->___m_Edges;
		void* L_54;
		L_54 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D(L_53, NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m25C40908D798F72BB7C4D9BFB9701455549FC47D_RuntimeMethod_var);
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_55 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___m_Edges);
		int32_t L_56;
		L_56 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_55)->___m_Length);
		il2cpp_codegen_initobj((&V_5), sizeof(TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA));
		TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA L_57 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950(L_54, 0, ((int32_t)il2cpp_codegen_subtract(L_56, 1)), L_57, ModuleHandle_InsertionSort_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA_m444973AA133D701F7ABCE9CEDF41EC5810D0E950_RuntimeMethod_var);
		V_6 = 0;
		goto IL_01c0;
	}

IL_0173:
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_58 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_59 = V_6;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_60;
		L_60 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_58)->___m_Buffer, L_59);
		V_7 = L_60;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_61 = __this->___m_SPArray;
		int32_t L_62 = V_6;
		int32_t L_63 = __this->___m_StarCount;
		int32_t L_64 = __this->___m_StarCount;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_65;
		memset((&L_65), 0, sizeof(L_65));
		ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9((&L_65), L_61, ((int32_t)il2cpp_codegen_multiply(L_62, L_63)), L_64, ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		(&V_7)->___points = L_65;
		(&V_7)->___pointCount = 0;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_66 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_67 = V_6;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_68 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_66)->___m_Buffer, L_67, (L_68));
		int32_t L_69 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01c0:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = __this->___m_StarCount;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_0173;
		}
	}
	{
		V_8 = 0;
		goto IL_032e;
	}

IL_01d2:
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* L_72 = (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*)(&__this->___m_Cells);
		int32_t L_73 = V_8;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_74;
		L_74 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, (L_72)->___m_Buffer, L_73);
		int32_t L_75 = L_74.___x;
		V_9 = L_75;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* L_76 = (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*)(&__this->___m_Cells);
		int32_t L_77 = V_8;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, (L_76)->___m_Buffer, L_77);
		int32_t L_79 = L_78.___y;
		V_10 = L_79;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* L_80 = (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*)(&__this->___m_Cells);
		int32_t L_81 = V_8;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_82;
		L_82 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, (L_80)->___m_Buffer, L_81);
		int32_t L_83 = L_82.___z;
		V_11 = L_83;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_84 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_85 = V_9;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_86;
		L_86 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_84)->___m_Buffer, L_85);
		V_12 = L_86;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_87 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_88 = V_10;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_89;
		L_89 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_87)->___m_Buffer, L_88);
		V_13 = L_89;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_90 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_91 = V_11;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_92;
		L_92 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_90)->___m_Buffer, L_91);
		V_14 = L_92;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_93 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_12)->___points);
		int32_t* L_94 = (int32_t*)(&(&V_12)->___pointCount);
		int32_t* L_95 = L_94;
		int32_t L_96 = *((int32_t*)L_95);
		V_15 = L_96;
		int32_t L_97 = V_15;
		*((int32_t*)L_95) = (int32_t)((int32_t)il2cpp_codegen_add(L_97, 1));
		int32_t L_98 = V_15;
		int32_t L_99 = V_10;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_93, L_98, L_99, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_100 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_12)->___points);
		int32_t* L_101 = (int32_t*)(&(&V_12)->___pointCount);
		int32_t* L_102 = L_101;
		int32_t L_103 = *((int32_t*)L_102);
		V_15 = L_103;
		int32_t L_104 = V_15;
		*((int32_t*)L_102) = (int32_t)((int32_t)il2cpp_codegen_add(L_104, 1));
		int32_t L_105 = V_15;
		int32_t L_106 = V_11;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_100, L_105, L_106, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_107 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_13)->___points);
		int32_t* L_108 = (int32_t*)(&(&V_13)->___pointCount);
		int32_t* L_109 = L_108;
		int32_t L_110 = *((int32_t*)L_109);
		V_15 = L_110;
		int32_t L_111 = V_15;
		*((int32_t*)L_109) = (int32_t)((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_112 = V_15;
		int32_t L_113 = V_11;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_107, L_112, L_113, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_114 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_13)->___points);
		int32_t* L_115 = (int32_t*)(&(&V_13)->___pointCount);
		int32_t* L_116 = L_115;
		int32_t L_117 = *((int32_t*)L_116);
		V_15 = L_117;
		int32_t L_118 = V_15;
		*((int32_t*)L_116) = (int32_t)((int32_t)il2cpp_codegen_add(L_118, 1));
		int32_t L_119 = V_15;
		int32_t L_120 = V_9;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_114, L_119, L_120, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_121 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_14)->___points);
		int32_t* L_122 = (int32_t*)(&(&V_14)->___pointCount);
		int32_t* L_123 = L_122;
		int32_t L_124 = *((int32_t*)L_123);
		V_15 = L_124;
		int32_t L_125 = V_15;
		*((int32_t*)L_123) = (int32_t)((int32_t)il2cpp_codegen_add(L_125, 1));
		int32_t L_126 = V_15;
		int32_t L_127 = V_9;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_121, L_126, L_127, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_128 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_14)->___points);
		int32_t* L_129 = (int32_t*)(&(&V_14)->___pointCount);
		int32_t* L_130 = L_129;
		int32_t L_131 = *((int32_t*)L_130);
		V_15 = L_131;
		int32_t L_132 = V_15;
		*((int32_t*)L_130) = (int32_t)((int32_t)il2cpp_codegen_add(L_132, 1));
		int32_t L_133 = V_15;
		int32_t L_134 = V_10;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_128, L_133, L_134, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_135 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_136 = V_9;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_137 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_135)->___m_Buffer, L_136, (L_137));
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_138 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_139 = V_10;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_140 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_138)->___m_Buffer, L_139, (L_140));
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_141 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_142 = V_11;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_143 = V_14;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_141)->___m_Buffer, L_142, (L_143));
		int32_t L_144 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_032e:
	{
		int32_t L_145 = V_8;
		int32_t L_146 = __this->___m_CellCount;
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_01d2;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Tessellator_PrepareDelaunay_mB942127F1C81668537200C7D5BEBEAB81A8E8396_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_edges, int32_t ___1_edgeCount, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	Tessellator_PrepareDelaunay_mB942127F1C81668537200C7D5BEBEAB81A8E8396(_thisAdjusted, ___0_edges, ___1_edgeCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_0 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_1 = ___1_b;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_0)->___m_Buffer, L_1);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_3 = L_2.___points;
		V_0 = L_3;
		V_1 = 1;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_4 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_5 = ___1_b;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_4)->___m_Buffer, L_5);
		int32_t L_7 = L_6.___pointCount;
		V_2 = L_7;
		goto IL_0042;
	}

IL_0028:
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_0), L_8, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		int32_t L_10 = ___0_a;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_0), ((int32_t)il2cpp_codegen_subtract(L_11, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		return L_12;
	}

IL_003e:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 2));
	}

IL_0042:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0028;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellator_FindConstraint_m6913A7E958CC2DF88EF0FF08E6651728B26C547A (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_GetEqual_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8_m5450D65F72CA7410EDE0B8B6BB965639C9E1F49B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_0;
	memset((&V_0), 0, sizeof(V_0));
	TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B2_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B3_1 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B5_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* G_B6_1 = NULL;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			G_B2_0 = (&V_0);
			goto IL_0009;
		}
		G_B1_0 = (&V_0);
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000a;
	}

IL_0009:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_000a:
	{
		G_B3_1->___x = G_B3_0;
		int32_t L_4 = ___0_a;
		int32_t L_5 = ___1_b;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			G_B5_0 = (&V_0);
			goto IL_0018;
		}
		G_B4_0 = (&V_0);
	}
	{
		int32_t L_6 = ___1_b;
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0019;
	}

IL_0018:
	{
		int32_t L_7 = ___0_a;
		G_B6_0 = L_7;
		G_B6_1 = G_B5_0;
	}

IL_0019:
	{
		G_B6_1->___y = G_B6_0;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_8 = __this->___m_Edges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_9 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___m_Edges);
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_9)->___m_Length);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_11 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8));
		TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8 L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = ModuleHandle_GetEqual_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8_m5450D65F72CA7410EDE0B8B6BB965639C9E1F49B(L_8, L_10, L_11, L_12, ModuleHandle_GetEqual_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisTestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8_m5450D65F72CA7410EDE0B8B6BB965639C9E1F49B_RuntimeMethod_var);
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t Tessellator_FindConstraint_m6913A7E958CC2DF88EF0FF08E6651728B26C547A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Tessellator_FindConstraint_m6913A7E958CC2DF88EF0FF08E6651728B26C547A(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_AddTriangle_m007B2BB6D24FC02369BD0777488E181BF3D18544 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_i, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_0 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_1 = ___0_i;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_0)->___m_Buffer, L_1);
		V_0 = L_2;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_3 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_4 = ___1_j;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_3)->___m_Buffer, L_4);
		V_1 = L_5;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_6 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_7 = ___2_k;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_6)->___m_Buffer, L_7);
		V_2 = L_8;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_9 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_0)->___points);
		int32_t* L_10 = (int32_t*)(&(&V_0)->___pointCount);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_3;
		int32_t L_15 = ___1_j;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_9, L_14, L_15, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_16 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_0)->___points);
		int32_t* L_17 = (int32_t*)(&(&V_0)->___pointCount);
		int32_t* L_18 = L_17;
		int32_t L_19 = *((int32_t*)L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		*((int32_t*)L_18) = (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_3;
		int32_t L_22 = ___2_k;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_16, L_21, L_22, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_23 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_1)->___points);
		int32_t* L_24 = (int32_t*)(&(&V_1)->___pointCount);
		int32_t* L_25 = L_24;
		int32_t L_26 = *((int32_t*)L_25);
		V_3 = L_26;
		int32_t L_27 = V_3;
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_3;
		int32_t L_29 = ___2_k;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_23, L_28, L_29, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_30 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_1)->___points);
		int32_t* L_31 = (int32_t*)(&(&V_1)->___pointCount);
		int32_t* L_32 = L_31;
		int32_t L_33 = *((int32_t*)L_32);
		V_3 = L_33;
		int32_t L_34 = V_3;
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_3;
		int32_t L_36 = ___0_i;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_30, L_35, L_36, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_37 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_2)->___points);
		int32_t* L_38 = (int32_t*)(&(&V_2)->___pointCount);
		int32_t* L_39 = L_38;
		int32_t L_40 = *((int32_t*)L_39);
		V_3 = L_40;
		int32_t L_41 = V_3;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_3;
		int32_t L_43 = ___0_i;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_37, L_42, L_43, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_44 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_2)->___points);
		int32_t* L_45 = (int32_t*)(&(&V_2)->___pointCount);
		int32_t* L_46 = L_45;
		int32_t L_47 = *((int32_t*)L_46);
		V_3 = L_47;
		int32_t L_48 = V_3;
		*((int32_t*)L_46) = (int32_t)((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_3;
		int32_t L_50 = ___1_j;
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679(L_44, L_49, L_50, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_51 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_52 = ___0_i;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_53 = V_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_51)->___m_Buffer, L_52, (L_53));
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_54 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_55 = ___1_j;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_56 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_54)->___m_Buffer, L_55, (L_56));
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_57 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_58 = ___2_k;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_59 = V_2;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_57)->___m_Buffer, L_58, (L_59));
		return;
	}
}
IL2CPP_EXTERN_C  void Tessellator_AddTriangle_m007B2BB6D24FC02369BD0777488E181BF3D18544_AdjustorThunk (RuntimeObject* __this, int32_t ___0_i, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	Tessellator_AddTriangle_m007B2BB6D24FC02369BD0777488E181BF3D18544(_thisAdjusted, ___0_i, ___1_j, ___2_k, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_RemovePair_mFCFB259D9EB11DF42B6D598B2577324DEB458C45 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_r, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_0 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_1 = ___0_r;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_0)->___m_Buffer, L_1);
		V_0 = L_2;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_3 = V_0;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_4 = L_3.___points;
		V_1 = L_4;
		V_2 = 1;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_5 = V_0;
		int32_t L_6 = L_5.___pointCount;
		V_3 = L_6;
		goto IL_0086;
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		int32_t L_8;
		L_8 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_1), ((int32_t)il2cpp_codegen_subtract(L_7, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		int32_t L_9 = ___1_j;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_10 = V_2;
		int32_t L_11;
		L_11 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_1), L_10, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		int32_t L_12 = ___2_k;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		int32_t L_15;
		L_15 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_1), ((int32_t)il2cpp_codegen_subtract(L_14, 2)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679((&V_1), ((int32_t)il2cpp_codegen_subtract(L_13, 1)), L_15, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		int32_t L_18;
		L_18 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_1), ((int32_t)il2cpp_codegen_subtract(L_17, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679((&V_1), L_16, L_18, ArraySlice_1_set_Item_mD5E255B16D3E66C642A6BAAF9ADE29AB9F098679_RuntimeMethod_var);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_19 = V_1;
		(&V_0)->___points = L_19;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_20 = V_0;
		int32_t L_21 = L_20.___pointCount;
		(&V_0)->___pointCount = ((int32_t)il2cpp_codegen_subtract(L_21, 2));
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_22 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_23 = ___0_r;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_24 = V_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_22)->___m_Buffer, L_23, (L_24));
		return;
	}

IL_0082:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 2));
	}

IL_0086:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Tessellator_RemovePair_mFCFB259D9EB11DF42B6D598B2577324DEB458C45_AdjustorThunk (RuntimeObject* __this, int32_t ___0_r, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	Tessellator_RemovePair_mFCFB259D9EB11DF42B6D598B2577324DEB458C45(_thisAdjusted, ___0_r, ___1_j, ___2_k, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_RemoveTriangle_m34E53EFC4378A920679A5FD8C30C02630CD78968 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_i, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_i;
		int32_t L_1 = ___1_j;
		int32_t L_2 = ___2_k;
		Tessellator_RemovePair_mFCFB259D9EB11DF42B6D598B2577324DEB458C45(__this, L_0, L_1, L_2, NULL);
		int32_t L_3 = ___1_j;
		int32_t L_4 = ___2_k;
		int32_t L_5 = ___0_i;
		Tessellator_RemovePair_mFCFB259D9EB11DF42B6D598B2577324DEB458C45(__this, L_3, L_4, L_5, NULL);
		int32_t L_6 = ___2_k;
		int32_t L_7 = ___0_i;
		int32_t L_8 = ___1_j;
		Tessellator_RemovePair_mFCFB259D9EB11DF42B6D598B2577324DEB458C45(__this, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Tessellator_RemoveTriangle_m34E53EFC4378A920679A5FD8C30C02630CD78968_AdjustorThunk (RuntimeObject* __this, int32_t ___0_i, int32_t ___1_j, int32_t ___2_k, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	Tessellator_RemoveTriangle_m34E53EFC4378A920679A5FD8C30C02630CD78968(_thisAdjusted, ___0_i, ___1_j, ___2_k, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_EdgeFlip_m1C6D8B63CCA7B3A8183D14680904C72FBA89C843 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_i, int32_t ___1_j, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_i;
		int32_t L_1 = ___1_j;
		int32_t L_2;
		L_2 = Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C(__this, L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___1_j;
		int32_t L_4 = ___0_i;
		int32_t L_5;
		L_5 = Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C(__this, L_3, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = ___0_i;
		int32_t L_7 = ___1_j;
		int32_t L_8 = V_0;
		Tessellator_RemoveTriangle_m34E53EFC4378A920679A5FD8C30C02630CD78968(__this, L_6, L_7, L_8, NULL);
		int32_t L_9 = ___1_j;
		int32_t L_10 = ___0_i;
		int32_t L_11 = V_1;
		Tessellator_RemoveTriangle_m34E53EFC4378A920679A5FD8C30C02630CD78968(__this, L_9, L_10, L_11, NULL);
		int32_t L_12 = ___0_i;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		Tessellator_AddTriangle_m007B2BB6D24FC02369BD0777488E181BF3D18544(__this, L_12, L_13, L_14, NULL);
		int32_t L_15 = ___1_j;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		Tessellator_AddTriangle_m007B2BB6D24FC02369BD0777488E181BF3D18544(__this, L_15, L_16, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Tessellator_EdgeFlip_m1C6D8B63CCA7B3A8183D14680904C72FBA89C843_AdjustorThunk (RuntimeObject* __this, int32_t ___0_i, int32_t ___1_j, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	Tessellator_EdgeFlip_m1C6D8B63CCA7B3A8183D14680904C72FBA89C843(_thisAdjusted, ___0_i, ___1_j, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___1_stack, int32_t* ___2_stackCount, int32_t ___3_a, int32_t ___4_b, int32_t ___5_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___3_a;
		int32_t L_1 = ___4_b;
		int32_t L_2;
		L_2 = Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C(__this, L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		int32_t L_4 = ___4_b;
		int32_t L_5 = ___3_a;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = ___3_a;
		int32_t L_7 = ___4_b;
		___3_a = L_7;
		___4_b = L_6;
		int32_t L_8 = ___5_x;
		int32_t L_9 = V_0;
		___5_x = L_9;
		V_0 = L_8;
	}

IL_0025:
	{
		int32_t L_10 = ___3_a;
		int32_t L_11 = ___4_b;
		int32_t L_12;
		L_12 = Tessellator_FindConstraint_m6913A7E958CC2DF88EF0FF08E6651728B26C547A(__this, L_10, L_11, NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}

IL_0034:
	{
		int32_t L_13 = ___3_a;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_13);
		int32_t L_15 = ___4_b;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_15);
		int32_t L_17 = ___5_x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_17);
		int32_t L_19 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_20;
		L_20 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_19);
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ModuleHandle_IsInsideCircle_m5DB9909A76433AC967E655FA2FE550020079D780(L_14, L_16, L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		int32_t* L_22 = ___2_stackCount;
		int32_t L_23 = *((int32_t*)L_22);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_24 = ___1_stack;
		int32_t L_25;
		L_25 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_24)->___m_Length);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(2, L_23))) < ((int32_t)L_25)))
		{
			goto IL_006c;
		}
	}
	{
		return (bool)0;
	}

IL_006c:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_26 = ___1_stack;
		int32_t* L_27 = ___2_stackCount;
		int32_t* L_28 = ___2_stackCount;
		int32_t L_29 = *((int32_t*)L_28);
		V_1 = L_29;
		int32_t L_30 = V_1;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_1;
		int32_t L_32 = ___3_a;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_26)->___m_Buffer, L_31, (L_32));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_33 = ___1_stack;
		int32_t* L_34 = ___2_stackCount;
		int32_t* L_35 = ___2_stackCount;
		int32_t L_36 = *((int32_t*)L_35);
		V_1 = L_36;
		int32_t L_37 = V_1;
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_1;
		int32_t L_39 = ___4_b;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_33)->___m_Buffer, L_38, (L_39));
	}

IL_008e:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___1_stack, int32_t* ___2_stackCount, int32_t ___3_a, int32_t ___4_b, int32_t ___5_x, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	bool _returnValue;
	_returnValue = Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A(_thisAdjusted, ___0_points, ___1_stack, ___2_stackCount, ___3_a, ___4_b, ___5_x, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_GetCells_m67140E0BC8D71B44D99C55F76B7FB4160F853854 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t* ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	{
		int32_t L_0 = __this->___m_NumPoints;
		int32_t L_1 = __this->___m_NumPoints;
		int32_t L_2 = __this->___m_Allocator;
		NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F((&V_0), ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1)))), L_2, 1, NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		int32_t* L_3 = ___0_count;
		*((int32_t*)L_3) = (int32_t)0;
		V_1 = 0;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_4 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_4)->___m_Length);
		V_2 = L_5;
		goto IL_00c8;
	}

IL_0033:
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_6 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_7 = V_1;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_6)->___m_Buffer, L_7);
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_9 = L_8.___points;
		V_3 = L_9;
		V_4 = 0;
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_10 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_11 = V_1;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_10)->___m_Buffer, L_11);
		int32_t L_13 = L_12.___pointCount;
		V_5 = L_13;
		goto IL_00be;
	}

IL_005d:
	{
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_3), L_14, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_6 = L_15;
		int32_t L_16 = V_4;
		int32_t L_17;
		L_17 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED((&V_3), ((int32_t)il2cpp_codegen_add(L_16, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_7 = L_17;
		int32_t L_18 = V_1;
		int32_t L_19 = V_6;
		int32_t L_20 = V_7;
		int32_t L_21;
		L_21 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(L_19, L_20, NULL);
		if ((((int32_t)L_18) >= ((int32_t)L_21)))
		{
			goto IL_00b8;
		}
	}
	{
		il2cpp_codegen_initobj((&V_8), sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF));
		int32_t L_22 = V_1;
		(&V_8)->___x = L_22;
		int32_t L_23 = V_6;
		(&V_8)->___y = L_23;
		int32_t L_24 = V_7;
		(&V_8)->___z = L_24;
		int32_t* L_25 = ___0_count;
		int32_t* L_26 = ___0_count;
		int32_t L_27 = *((int32_t*)L_26);
		V_9 = L_27;
		int32_t L_28 = V_9;
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_9;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_30 = V_8;
		IL2CPP_NATIVEARRAY_SET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_0))->___m_Buffer, L_29, (L_30));
	}

IL_00b8:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 2));
	}

IL_00be:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = V_5;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c8:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_37 = V_0;
		return L_37;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_GetCells_m67140E0BC8D71B44D99C55F76B7FB4160F853854_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_count, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 _returnValue;
	_returnValue = Tessellator_GetCells_m67140E0BC8D71B44D99C55F76B7FB4160F853854(_thisAdjusted, ___0_count, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_ApplyDelaunay_m39B60F4E8FE33D874D762C034A2D1157F28FCF49 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___1_edges, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B44_0 = 0;
	{
		int32_t L_0 = __this->___m_CellCount;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->___m_NumPoints;
		int32_t L_2 = __this->___m_NumPoints;
		int32_t L_3 = __this->___m_Allocator;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)))), L_3, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		V_1 = 0;
		V_2 = (bool)1;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_4 = ___1_edges;
		int32_t L_5 = __this->___m_NumEdges;
		Tessellator_PrepareDelaunay_mB942127F1C81668537200C7D5BEBEAB81A8E8396(__this, L_4, L_5, NULL);
		V_4 = 0;
		goto IL_0147;
	}

IL_0040:
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_6 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_7 = V_4;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_6)->___m_Buffer, L_7);
		V_5 = L_8;
		V_6 = 1;
		goto IL_0133;
	}

IL_0057:
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_9 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___points);
		int32_t L_10 = V_6;
		int32_t L_11;
		L_11 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_9, L_10, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_7 = L_11;
		int32_t L_12 = V_7;
		int32_t L_13 = V_4;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_7;
		int32_t L_16;
		L_16 = Tessellator_FindConstraint_m6913A7E958CC2DF88EF0FF08E6651728B26C547A(__this, L_14, L_15, NULL);
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_012d;
		}
	}
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_17 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___points);
		int32_t L_18 = V_6;
		int32_t L_19;
		L_19 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_17, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_8 = L_19;
		V_9 = (-1);
		V_10 = 1;
		goto IL_00c6;
	}

IL_009a:
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_20 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___points);
		int32_t L_21 = V_10;
		int32_t L_22;
		L_22 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		int32_t L_23 = V_7;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00c0;
		}
	}
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_24 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_5)->___points);
		int32_t L_25 = V_10;
		int32_t L_26;
		L_26 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_24, L_25, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_9 = L_26;
		goto IL_00d1;
	}

IL_00c0:
	{
		int32_t L_27 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_27, 2));
	}

IL_00c6:
	{
		int32_t L_28 = V_10;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_29 = V_5;
		int32_t L_30 = L_29.___pointCount;
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_009a;
		}
	}

IL_00d1:
	{
		int32_t L_31 = V_9;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_32 = V_4;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_33;
		L_33 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_32);
		int32_t L_34 = V_7;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_35;
		L_35 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_34);
		int32_t L_36 = V_8;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_37;
		L_37 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_36);
		int32_t L_38 = V_9;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_39;
		L_39 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_38);
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = ModuleHandle_IsInsideCircle_m5DB9909A76433AC967E655FA2FE550020079D780(L_33, L_35, L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_41 = V_1;
		int32_t L_42;
		L_42 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(2, L_41))) < ((int32_t)L_42)))
		{
			goto IL_0111;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0141;
	}

IL_0111:
	{
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = V_4;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_44, (L_45));
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_47, (L_48));
	}

IL_012d:
	{
		int32_t L_49 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 2));
	}

IL_0133:
	{
		int32_t L_50 = V_6;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_51 = V_5;
		int32_t L_52 = L_51.___pointCount;
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0057;
		}
	}

IL_0141:
	{
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0147:
	{
		bool L_54 = V_2;
		if (!L_54)
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_55 = V_4;
		int32_t L_56 = __this->___m_NumPoints;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0040;
		}
	}

IL_0157:
	{
		int32_t L_57 = __this->___m_NumPoints;
		int32_t L_58 = __this->___m_NumPoints;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_57, L_58));
		goto IL_029b;
	}

IL_016a:
	{
		int32_t L_59 = V_1;
		int32_t L_60;
		L_60 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_59, 1)));
		V_11 = L_60;
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_62 = V_1;
		int32_t L_63;
		L_63 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_62, 1)));
		V_12 = L_63;
		int32_t L_64 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		V_13 = (-1);
		V_14 = (-1);
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_65 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		int32_t L_66 = V_12;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_67;
		L_67 = IL2CPP_NATIVEARRAY_GET_ITEM(UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD, (L_65)->___m_Buffer, L_66);
		V_15 = L_67;
		V_16 = 1;
		goto IL_01e2;
	}

IL_01a4:
	{
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_68 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_15)->___points);
		int32_t L_69 = V_16;
		int32_t L_70;
		L_70 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_68, ((int32_t)il2cpp_codegen_subtract(L_69, 1)), ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_17 = L_70;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* L_71 = (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D*)(&(&V_15)->___points);
		int32_t L_72 = V_16;
		int32_t L_73;
		L_73 = ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED(L_71, L_72, ArraySlice_1_get_Item_m3C38DAD893B1C62550C334C0B767DCA8053486ED_RuntimeMethod_var);
		V_18 = L_73;
		int32_t L_74 = V_17;
		int32_t L_75 = V_11;
		if ((!(((uint32_t)L_74) == ((uint32_t)L_75))))
		{
			goto IL_01d2;
		}
	}
	{
		int32_t L_76 = V_18;
		V_14 = L_76;
		goto IL_01dc;
	}

IL_01d2:
	{
		int32_t L_77 = V_18;
		int32_t L_78 = V_11;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01dc;
		}
	}
	{
		int32_t L_79 = V_17;
		V_13 = L_79;
	}

IL_01dc:
	{
		int32_t L_80 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_80, 2));
	}

IL_01e2:
	{
		int32_t L_81 = V_16;
		UStar_t9DB4CDAF023B029D798358DF266EC59ED195F8DD L_82 = V_15;
		int32_t L_83 = L_82.___pointCount;
		if ((((int32_t)L_81) < ((int32_t)L_83)))
		{
			goto IL_01a4;
		}
	}
	{
		int32_t L_84 = V_13;
		if ((((int32_t)L_84) < ((int32_t)0)))
		{
			goto IL_029b;
		}
	}
	{
		int32_t L_85 = V_14;
		if ((((int32_t)L_85) < ((int32_t)0)))
		{
			goto IL_029b;
		}
	}
	{
		int32_t L_86 = V_12;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_87;
		L_87 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_86);
		int32_t L_88 = V_11;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_89;
		L_89 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_88);
		int32_t L_90 = V_13;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_91;
		L_91 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_90);
		int32_t L_92 = V_14;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_93;
		L_93 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_92);
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = ModuleHandle_IsInsideCircle_m5DB9909A76433AC967E655FA2FE550020079D780(L_87, L_89, L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_029b;
		}
	}
	{
		int32_t L_95 = V_12;
		int32_t L_96 = V_11;
		Tessellator_EdgeFlip_m1C6D8B63CCA7B3A8183D14680904C72FBA89C843(__this, L_95, L_96, NULL);
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_97 = ___0_points;
		int32_t L_98 = V_13;
		int32_t L_99 = V_12;
		int32_t L_100 = V_14;
		bool L_101;
		L_101 = Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A(__this, L_97, (&V_0), (&V_1), L_98, L_99, L_100, NULL);
		V_2 = L_101;
		bool L_102 = V_2;
		if (!L_102)
		{
			goto IL_025a;
		}
	}
	{
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_103 = ___0_points;
		int32_t L_104 = V_12;
		int32_t L_105 = V_14;
		int32_t L_106 = V_13;
		bool L_107;
		L_107 = Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A(__this, L_103, (&V_0), (&V_1), L_104, L_105, L_106, NULL);
		G_B35_0 = ((int32_t)(L_107));
		goto IL_025b;
	}

IL_025a:
	{
		G_B35_0 = 0;
	}

IL_025b:
	{
		V_2 = (bool)G_B35_0;
		bool L_108 = V_2;
		if (!L_108)
		{
			goto IL_0272;
		}
	}
	{
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_109 = ___0_points;
		int32_t L_110 = V_14;
		int32_t L_111 = V_11;
		int32_t L_112 = V_13;
		bool L_113;
		L_113 = Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A(__this, L_109, (&V_0), (&V_1), L_110, L_111, L_112, NULL);
		G_B38_0 = ((int32_t)(L_113));
		goto IL_0273;
	}

IL_0272:
	{
		G_B38_0 = 0;
	}

IL_0273:
	{
		V_2 = (bool)G_B38_0;
		bool L_114 = V_2;
		if (!L_114)
		{
			goto IL_028a;
		}
	}
	{
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_115 = ___0_points;
		int32_t L_116 = V_11;
		int32_t L_117 = V_13;
		int32_t L_118 = V_14;
		bool L_119;
		L_119 = Tessellator_Flip_m6DA43B217DF80D40A990220077BB66AF23D04A8A(__this, L_115, (&V_0), (&V_1), L_116, L_117, L_118, NULL);
		G_B41_0 = ((int32_t)(L_119));
		goto IL_028b;
	}

IL_028a:
	{
		G_B41_0 = 0;
	}

IL_028b:
	{
		V_2 = (bool)G_B41_0;
		bool L_120 = V_2;
		if (!L_120)
		{
			goto IL_0299;
		}
	}
	{
		int32_t L_121 = V_3;
		int32_t L_122 = ((int32_t)il2cpp_codegen_subtract(L_121, 1));
		V_3 = L_122;
		G_B44_0 = ((((int32_t)L_122) > ((int32_t)0))? 1 : 0);
		goto IL_029a;
	}

IL_0299:
	{
		G_B44_0 = 0;
	}

IL_029a:
	{
		V_2 = (bool)G_B44_0;
	}

IL_029b:
	{
		int32_t L_123 = V_1;
		bool L_124 = V_2;
		if (((int32_t)(((((int32_t)L_123) > ((int32_t)0))? 1 : 0)&(int32_t)L_124)))
		{
			goto IL_016a;
		}
	}
	{
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		bool L_125 = V_2;
		return L_125;
	}
}
IL2CPP_EXTERN_C  bool Tessellator_ApplyDelaunay_m39B60F4E8FE33D874D762C034A2D1157F28FCF49_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___1_edges, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	bool _returnValue;
	_returnValue = Tessellator_ApplyDelaunay_m39B60F4E8FE33D874D762C034A2D1157F28FCF49(_thisAdjusted, ___0_points, ___1_edges, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellator_FindNeighbor_m3BD0F869CABD9603D3EAF91D591931C8BF79C2A1 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_cells, int32_t ___1_count, int32_t ___2_a, int32_t ___3_b, int32_t ___4_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_GetEqual_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20_m4AC51D7677A0F28915FBFC925C57BFE63B36805A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_3;
	memset((&V_3), 0, sizeof(V_3));
	TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___2_a;
		V_0 = L_0;
		int32_t L_1 = ___3_b;
		V_1 = L_1;
		int32_t L_2 = ___4_c;
		V_2 = L_2;
		int32_t L_3 = ___3_b;
		int32_t L_4 = ___4_c;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_5 = ___3_b;
		int32_t L_6 = ___2_a;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7 = ___3_b;
		V_0 = L_7;
		int32_t L_8 = ___4_c;
		V_1 = L_8;
		int32_t L_9 = ___2_a;
		V_2 = L_9;
		goto IL_002a;
	}

IL_001d:
	{
		int32_t L_10 = ___4_c;
		int32_t L_11 = ___2_a;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_12 = ___4_c;
		V_0 = L_12;
		int32_t L_13 = ___2_a;
		V_1 = L_13;
		int32_t L_14 = ___3_b;
		V_2 = L_14;
	}

IL_002a:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		int32_t L_16 = V_0;
		(&V_3)->___x = L_16;
		int32_t L_17 = V_1;
		(&V_3)->___y = L_17;
		int32_t L_18 = V_2;
		(&V_3)->___z = L_18;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_19 = ___0_cells;
		int32_t L_20 = ___1_count;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_21 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20));
		TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20 L_22 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = ModuleHandle_GetEqual_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20_m4AC51D7677A0F28915FBFC925C57BFE63B36805A(L_19, L_20, L_21, L_22, ModuleHandle_GetEqual_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20_m4AC51D7677A0F28915FBFC925C57BFE63B36805A_RuntimeMethod_var);
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t Tessellator_FindNeighbor_m3BD0F869CABD9603D3EAF91D591931C8BF79C2A1_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 ___0_cells, int32_t ___1_count, int32_t ___2_a, int32_t ___3_b, int32_t ___4_c, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Tessellator_FindNeighbor_m3BD0F869CABD9603D3EAF91D591931C8BF79C2A1(_thisAdjusted, ___0_cells, ___1_count, ___2_a, ___3_b, ___4_c, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_Constrain_mF9C988B9CE9F1C8E4F518FE3850D5FE9577D954F (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t* ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_InsertionSort_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45_m15FA4D36EBA3A39B00B541076154836BDCD46F32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* G_B22_1 = NULL;
	int32_t G_B22_2 = 0;
	int32_t G_B21_0 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* G_B21_1 = NULL;
	int32_t G_B21_2 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* G_B23_2 = NULL;
	int32_t G_B23_3 = 0;
	{
		int32_t* L_0 = ___0_count;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_1;
		L_1 = Tessellator_GetCells_m67140E0BC8D71B44D99C55F76B7FB4160F853854(__this, L_0, NULL);
		V_0 = L_1;
		int32_t* L_2 = ___0_count;
		int32_t L_3 = *((int32_t*)L_2);
		V_1 = L_3;
		V_7 = 0;
		goto IL_0094;
	}

IL_0013:
	{
		int32_t L_4 = V_7;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_0))->___m_Buffer, L_4);
		V_8 = L_5;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_6 = V_8;
		int32_t L_7 = L_6.___x;
		V_9 = L_7;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_8 = V_8;
		int32_t L_9 = L_8.___y;
		V_10 = L_9;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_10 = V_8;
		int32_t L_11 = L_10.___z;
		V_11 = L_11;
		int32_t L_12 = V_10;
		int32_t L_13 = V_11;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_14 = V_10;
		int32_t L_15 = V_9;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_16 = V_10;
		(&V_8)->___x = L_16;
		int32_t L_17 = V_11;
		(&V_8)->___y = L_17;
		int32_t L_18 = V_9;
		(&V_8)->___z = L_18;
		goto IL_0083;
	}

IL_0062:
	{
		int32_t L_19 = V_11;
		int32_t L_20 = V_9;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_21 = V_11;
		(&V_8)->___x = L_21;
		int32_t L_22 = V_9;
		(&V_8)->___y = L_22;
		int32_t L_23 = V_10;
		(&V_8)->___z = L_23;
	}

IL_0083:
	{
		int32_t L_24 = V_7;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_25 = V_8;
		IL2CPP_NATIVEARRAY_SET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_0))->___m_Buffer, L_24, (L_25));
		int32_t L_26 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0094:
	{
		int32_t L_27 = V_7;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0013;
		}
	}
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_29 = V_0;
		void* L_30;
		L_30 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00(L_29, NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_m9322523E8F4F331EE08D7DE23A5F5E48B851AF00_RuntimeMethod_var);
		int32_t L_31 = __this->___m_CellCount;
		il2cpp_codegen_initobj((&V_12), sizeof(TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45));
		TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45 L_32 = V_12;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_InsertionSort_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45_m15FA4D36EBA3A39B00B541076154836BDCD46F32(L_30, 0, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), L_32, ModuleHandle_InsertionSort_Tisint3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_TisTessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45_m15FA4D36EBA3A39B00B541076154836BDCD46F32_RuntimeMethod_var);
		int32_t L_33 = V_1;
		int32_t L_34 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_35;
		memset((&L_35), 0, sizeof(L_35));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_35), L_33, L_34, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_Flags = L_35;
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_38;
		memset((&L_38), 0, sizeof(L_38));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_38), ((int32_t)il2cpp_codegen_multiply(L_36, 3)), L_37, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_Neighbors = L_38;
		int32_t L_39 = V_1;
		int32_t L_40 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_41;
		memset((&L_41), 0, sizeof(L_41));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_41), ((int32_t)il2cpp_codegen_multiply(L_39, 3)), L_40, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_Constraints = L_41;
		int32_t L_42 = V_1;
		int32_t L_43 = __this->___m_Allocator;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_2), ((int32_t)il2cpp_codegen_multiply(L_42, 3)), L_43, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		int32_t L_44 = V_1;
		int32_t L_45 = __this->___m_Allocator;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_3), ((int32_t)il2cpp_codegen_multiply(L_44, 3)), L_45, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		V_4 = 1;
		V_5 = 0;
		V_6 = 0;
		V_13 = 0;
		goto IL_0238;
	}

IL_012a:
	{
		int32_t L_46 = V_13;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_47;
		L_47 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_0))->___m_Buffer, L_46);
		V_14 = L_47;
		V_15 = 0;
		goto IL_022a;
	}

IL_013d:
	{
		int32_t L_48 = V_15;
		V_16 = L_48;
		int32_t L_49 = V_15;
		V_17 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_49, 1))%3));
		int32_t L_50 = V_16;
		if (!L_50)
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_51 = V_15;
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_015b;
		}
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_52 = V_14;
		int32_t L_53 = L_52.___z;
		G_B15_0 = L_53;
		goto IL_016b;
	}

IL_015b:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_54 = V_14;
		int32_t L_55 = L_54.___y;
		G_B15_0 = L_55;
		goto IL_016b;
	}

IL_0164:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_56 = V_14;
		int32_t L_57 = L_56.___x;
		G_B15_0 = L_57;
	}

IL_016b:
	{
		V_16 = G_B15_0;
		int32_t L_58 = V_17;
		if (!L_58)
		{
			goto IL_0188;
		}
	}
	{
		int32_t L_59 = V_17;
		if ((((int32_t)L_59) == ((int32_t)1)))
		{
			goto IL_017f;
		}
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_60 = V_14;
		int32_t L_61 = L_60.___z;
		G_B20_0 = L_61;
		goto IL_018f;
	}

IL_017f:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_62 = V_14;
		int32_t L_63 = L_62.___y;
		G_B20_0 = L_63;
		goto IL_018f;
	}

IL_0188:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_64 = V_14;
		int32_t L_65 = L_64.___x;
		G_B20_0 = L_65;
	}

IL_018f:
	{
		V_17 = G_B20_0;
		int32_t L_66 = V_17;
		int32_t L_67 = V_16;
		int32_t L_68;
		L_68 = Tessellator_OppositeOf_m22FD730F3F313FD1E8DD6FCA4ECA99883B92F38C(__this, L_66, L_67, NULL);
		V_18 = L_68;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_69 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Neighbors);
		int32_t L_70 = V_13;
		int32_t L_71 = V_15;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_72 = V_0;
		int32_t* L_73 = ___0_count;
		int32_t L_74 = *((int32_t*)L_73);
		int32_t L_75 = V_17;
		int32_t L_76 = V_16;
		int32_t L_77 = V_18;
		int32_t L_78;
		L_78 = Tessellator_FindNeighbor_m3BD0F869CABD9603D3EAF91D591931C8BF79C2A1(__this, L_72, L_74, L_75, L_76, L_77, NULL);
		int32_t L_79 = L_78;
		V_20 = L_79;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_69)->___m_Buffer, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_70)), L_71)), (L_79));
		int32_t L_80 = V_20;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_81 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Constraints);
		int32_t L_82 = V_13;
		int32_t L_83 = V_15;
		int32_t L_84 = V_16;
		int32_t L_85 = V_17;
		int32_t L_86;
		L_86 = Tessellator_FindConstraint_m6913A7E958CC2DF88EF0FF08E6651728B26C547A(__this, L_84, L_85, NULL);
		if ((!(((uint32_t)(-1)) == ((uint32_t)L_86))))
		{
			G_B22_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_82)), L_83));
			G_B22_1 = L_81;
			G_B22_2 = L_80;
			goto IL_01e0;
		}
		G_B21_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_82)), L_83));
		G_B21_1 = L_81;
		G_B21_2 = L_80;
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		goto IL_01e1;
	}

IL_01e0:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
	}

IL_01e1:
	{
		int32_t L_87 = G_B23_0;
		V_20 = L_87;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (G_B23_2)->___m_Buffer, G_B23_1, (L_87));
		int32_t L_88 = V_20;
		V_19 = L_88;
		if ((((int32_t)G_B23_3) >= ((int32_t)0)))
		{
			goto IL_0224;
		}
	}
	{
		int32_t L_89 = V_19;
		if (!L_89)
		{
			goto IL_0206;
		}
	}
	{
		int32_t L_90 = V_5;
		int32_t L_91 = L_90;
		V_5 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		int32_t L_92 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_2))->___m_Buffer, L_91, (L_92));
		goto IL_0224;
	}

IL_0206:
	{
		int32_t L_93 = V_6;
		int32_t L_94 = L_93;
		V_6 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		int32_t L_95 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_94, (L_95));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_96 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		int32_t L_97 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_96)->___m_Buffer, L_97, (1));
	}

IL_0224:
	{
		int32_t L_98 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_022a:
	{
		int32_t L_99 = V_15;
		if ((((int32_t)L_99) < ((int32_t)3)))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_100 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0238:
	{
		int32_t L_101 = V_13;
		int32_t L_102 = V_1;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_033a;
	}

IL_0245:
	{
		int32_t L_103 = V_6;
		int32_t L_104;
		L_104 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, ((int32_t)il2cpp_codegen_subtract(L_103, 1)));
		V_21 = L_104;
		int32_t L_105 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_105, 1));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_106 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		int32_t L_107 = V_21;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_106)->___m_Buffer, L_107);
		int32_t L_109 = V_4;
		if ((((int32_t)L_108) == ((int32_t)((-L_109)))))
		{
			goto IL_0303;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_110 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		int32_t L_111 = V_21;
		int32_t L_112 = V_4;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_110)->___m_Buffer, L_111, (L_112));
		int32_t L_113 = V_21;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_114;
		L_114 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_0))->___m_Buffer, L_113);
		V_22 = 0;
		goto IL_02fe;
	}

IL_028b:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_115 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Neighbors);
		int32_t L_116 = V_21;
		int32_t L_117 = V_22;
		int32_t L_118;
		L_118 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_115)->___m_Buffer, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_116)), L_117)));
		V_23 = L_118;
		int32_t L_119 = V_23;
		if ((((int32_t)L_119) < ((int32_t)0)))
		{
			goto IL_02f8;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_120 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		int32_t L_121 = V_23;
		int32_t L_122;
		L_122 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_120)->___m_Buffer, L_121);
		if (L_122)
		{
			goto IL_02f8;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_123 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Constraints);
		int32_t L_124 = V_21;
		int32_t L_125 = V_22;
		int32_t L_126;
		L_126 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_123)->___m_Buffer, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, L_124)), L_125)));
		if (!L_126)
		{
			goto IL_02d9;
		}
	}
	{
		int32_t L_127 = V_5;
		int32_t L_128 = L_127;
		V_5 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		int32_t L_129 = V_23;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_2))->___m_Buffer, L_128, (L_129));
		goto IL_02f8;
	}

IL_02d9:
	{
		int32_t L_130 = V_6;
		int32_t L_131 = L_130;
		V_6 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		int32_t L_132 = V_23;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_131, (L_132));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_133 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		int32_t L_134 = V_23;
		int32_t L_135 = V_4;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_133)->___m_Buffer, L_134, (L_135));
	}

IL_02f8:
	{
		int32_t L_136 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_02fe:
	{
		int32_t L_137 = V_22;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_028b;
		}
	}

IL_0303:
	{
		int32_t L_138 = V_6;
		if ((((int32_t)L_138) > ((int32_t)0)))
		{
			goto IL_0245;
		}
	}
	{
		V_24 = 0;
		goto IL_0328;
	}

IL_0310:
	{
		int32_t L_139 = V_24;
		int32_t L_140 = V_24;
		int32_t L_141;
		L_141 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_2))->___m_Buffer, L_140);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_139, (L_141));
		int32_t L_142 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_0328:
	{
		int32_t L_143 = V_24;
		int32_t L_144 = V_5;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_0310;
		}
	}
	{
		int32_t L_145 = V_5;
		V_6 = L_145;
		V_5 = 0;
		int32_t L_146 = V_4;
		V_4 = ((-L_146));
	}

IL_033a:
	{
		int32_t L_147 = V_6;
		if ((((int32_t)L_147) > ((int32_t)0)))
		{
			goto IL_0303;
		}
	}
	{
		int32_t L_148 = V_5;
		if ((((int32_t)L_148) > ((int32_t)0)))
		{
			goto IL_0303;
		}
	}
	{
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_3), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_2), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_149 = V_0;
		return L_149;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_Constrain_mF9C988B9CE9F1C8E4F518FE3850D5FE9577D954F_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_count, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 _returnValue;
	_returnValue = Tessellator_Constrain_mF9C988B9CE9F1C8E4F518FE3850D5FE9577D954F(_thisAdjusted, ___0_count, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_RemoveExterior_m63CD3C9CFC589841E8071F8095AE44C9DAC4F4F3 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t* ___0_cellCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_0;
		L_0 = Tessellator_Constrain_mF9C988B9CE9F1C8E4F518FE3850D5FE9577D954F(__this, (&V_0), NULL);
		V_1 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = __this->___m_Allocator;
		NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F((&V_2), L_1, L_2, 1, NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		int32_t* L_3 = ___0_cellCount;
		*((int32_t*)L_3) = (int32_t)0;
		V_3 = 0;
		goto IL_004f;
	}

IL_0021:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_4 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		int32_t L_5 = V_3;
		int32_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_4)->___m_Buffer, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t* L_7 = ___0_cellCount;
		int32_t* L_8 = ___0_cellCount;
		int32_t L_9 = *((int32_t*)L_8);
		V_4 = L_9;
		int32_t L_10 = V_4;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_1))->___m_Buffer, L_12);
		IL2CPP_NATIVEARRAY_SET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_2))->___m_Buffer, L_11, (L_13));
	}

IL_004b:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004f:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0021;
		}
	}
	{
		NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213((&V_1), NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_17 = V_2;
		return L_17;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_RemoveExterior_m63CD3C9CFC589841E8071F8095AE44C9DAC4F4F3_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_cellCount, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 _returnValue;
	_returnValue = Tessellator_RemoveExterior_m63CD3C9CFC589841E8071F8095AE44C9DAC4F4F3(_thisAdjusted, ___0_cellCount, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_RemoveInterior_m613C8F301ABDA9F6C96049E2F1675539E2F56756 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_cellCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		V_0 = 0;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_0;
		L_0 = Tessellator_Constrain_mF9C988B9CE9F1C8E4F518FE3850D5FE9577D954F(__this, (&V_0), NULL);
		V_1 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = __this->___m_Allocator;
		NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F((&V_2), L_1, L_2, 1, NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		___0_cellCount = 0;
		V_3 = 0;
		goto IL_0049;
	}

IL_0021:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		int32_t L_4 = V_3;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_3)->___m_Buffer, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_6 = ___0_cellCount;
		int32_t L_7 = L_6;
		___0_cellCount = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_3;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_1))->___m_Buffer, L_8);
		IL2CPP_NATIVEARRAY_SET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_2))->___m_Buffer, L_7, (L_9));
	}

IL_0045:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0049:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0021;
		}
	}
	{
		NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213((&V_1), NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 Tessellator_RemoveInterior_m613C8F301ABDA9F6C96049E2F1675539E2F56756_AdjustorThunk (RuntimeObject* __this, int32_t ___0_cellCount, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 _returnValue;
	_returnValue = Tessellator_RemoveInterior_m613C8F301ABDA9F6C96049E2F1675539E2F56756(_thisAdjusted, ___0_cellCount, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_Triangulate_mE55C698C207EA1A8DA592191AB17C3FB7688989E (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, int32_t ___1_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___2_edges, int32_t ___3_edgeCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_InsertionSort_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50_m258B5011A3B37991991591174271F52C24BBE8C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m7E9E200C8AC0B796CE7188B226AB37DBAD37EC7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m573055E6ED3C1024C5623136F7D378B464C79342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m7CA99BD8B0E7A24B9994325CEA8D931267AC1BDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mCF6388BD8438C65853584A9EA88857B09FE51B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mCFAA667E54D805CAFF19ACFC8E3C7036F30BA405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	float V_5 = 0.0f;
	UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_10;
	memset((&V_10), 0, sizeof(V_10));
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_11;
	memset((&V_11), 0, sizeof(V_11));
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_12;
	memset((&V_12), 0, sizeof(V_12));
	UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE V_13;
	memset((&V_13), 0, sizeof(V_13));
	UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE V_14;
	memset((&V_14), 0, sizeof(V_14));
	UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE V_15;
	memset((&V_15), 0, sizeof(V_15));
	UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE V_16;
	memset((&V_16), 0, sizeof(V_16));
	TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	{
		int32_t L_0 = ___3_edgeCount;
		__this->___m_NumEdges = L_0;
		int32_t L_1 = ___3_edgeCount;
		__this->___m_NumHulls = ((int32_t)il2cpp_codegen_multiply(L_1, 2));
		int32_t L_2 = ___1_pointCount;
		__this->___m_NumPoints = L_2;
		__this->___m_CellCount = 0;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxTriangleCount;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_5;
		memset((&L_5), 0, sizeof(L_5));
		NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F((&L_5), L_3, L_4, 1, NativeArray_1__ctor_mEFB2363DF23CE325BB07F64D5297DE7530D4A83F_RuntimeMethod_var);
		__this->___m_Cells = L_5;
		int32_t L_6 = __this->___m_NumHulls;
		int32_t L_7 = __this->___m_NumHulls;
		int32_t L_8 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_9), ((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)))), L_8, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_ILArray = L_9;
		int32_t L_10 = __this->___m_NumHulls;
		int32_t L_11 = __this->___m_NumHulls;
		int32_t L_12 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_13), ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)))), L_12, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_IUArray = L_13;
		int32_t L_14 = __this->___m_NumPoints;
		int32_t L_15 = __this->___m_Allocator;
		NativeArray_1__ctor_mCF6388BD8438C65853584A9EA88857B09FE51B97((&V_0), ((int32_t)il2cpp_codegen_multiply(L_14, 8)), L_15, 1, NativeArray_1__ctor_mCF6388BD8438C65853584A9EA88857B09FE51B97_RuntimeMethod_var);
		V_1 = 0;
		int32_t L_16 = __this->___m_NumPoints;
		int32_t L_17 = __this->___m_NumEdges;
		int32_t L_18 = __this->___m_Allocator;
		NativeArray_1__ctor_mCFAA667E54D805CAFF19ACFC8E3C7036F30BA405((&V_2), ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, 2)))), L_18, 1, NativeArray_1__ctor_mCFAA667E54D805CAFF19ACFC8E3C7036F30BA405_RuntimeMethod_var);
		V_3 = 0;
		V_7 = 0;
		goto IL_00ff;
	}

IL_00b5:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE));
		int32_t L_19 = V_7;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_20;
		L_20 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_19);
		(&V_8)->___a = L_20;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_21 = (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)(&(&V_8)->___b);
		il2cpp_codegen_initobj(L_21, sizeof(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA));
		int32_t L_22 = V_7;
		(&V_8)->___idx = L_22;
		(&V_8)->___type = 0;
		int32_t L_23 = V_3;
		int32_t L_24 = L_23;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_25 = V_8;
		IL2CPP_NATIVEARRAY_SET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_24, (L_25));
		int32_t L_26 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00ff:
	{
		int32_t L_27 = V_7;
		int32_t L_28 = __this->___m_NumPoints;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_00b5;
		}
	}
	{
		V_9 = 0;
		goto IL_024b;
	}

IL_0111:
	{
		int32_t L_29 = V_9;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_30;
		L_30 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, ((&___2_edges))->___m_Buffer, L_29);
		V_10 = L_30;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_31 = V_10;
		int32_t L_32 = L_31.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_33;
		L_33 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_32);
		V_11 = L_33;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_34 = V_10;
		int32_t L_35 = L_34.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_36;
		L_36 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_35);
		V_12 = L_36;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_37 = V_11;
		float L_38 = L_37.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_39 = V_12;
		float L_40 = L_39.___x;
		if ((!(((float)L_38) < ((float)L_40))))
		{
			goto IL_01c3;
		}
	}
	{
		il2cpp_codegen_initobj((&V_13), sizeof(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_41 = V_11;
		(&V_13)->___a = L_41;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_42 = V_12;
		(&V_13)->___b = L_42;
		int32_t L_43 = V_9;
		(&V_13)->___idx = L_43;
		(&V_13)->___type = 2;
		il2cpp_codegen_initobj((&V_14), sizeof(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_44 = V_12;
		(&V_14)->___a = L_44;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_45 = V_11;
		(&V_14)->___b = L_45;
		int32_t L_46 = V_9;
		(&V_14)->___idx = L_46;
		(&V_14)->___type = 1;
		int32_t L_47 = V_3;
		int32_t L_48 = L_47;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_49 = V_13;
		IL2CPP_NATIVEARRAY_SET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_48, (L_49));
		int32_t L_50 = V_3;
		int32_t L_51 = L_50;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_52 = V_14;
		IL2CPP_NATIVEARRAY_SET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_51, (L_52));
		goto IL_0245;
	}

IL_01c3:
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_53 = V_11;
		float L_54 = L_53.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_55 = V_12;
		float L_56 = L_55.___x;
		if ((!(((float)L_54) > ((float)L_56))))
		{
			goto IL_0245;
		}
	}
	{
		il2cpp_codegen_initobj((&V_15), sizeof(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_57 = V_12;
		(&V_15)->___a = L_57;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_58 = V_11;
		(&V_15)->___b = L_58;
		int32_t L_59 = V_9;
		(&V_15)->___idx = L_59;
		(&V_15)->___type = 2;
		il2cpp_codegen_initobj((&V_16), sizeof(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_60 = V_11;
		(&V_16)->___a = L_60;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_61 = V_12;
		(&V_16)->___b = L_61;
		int32_t L_62 = V_9;
		(&V_16)->___idx = L_62;
		(&V_16)->___type = 1;
		int32_t L_63 = V_3;
		int32_t L_64 = L_63;
		V_3 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_65 = V_15;
		IL2CPP_NATIVEARRAY_SET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_64, (L_65));
		int32_t L_66 = V_3;
		int32_t L_67 = L_66;
		V_3 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_68 = V_16;
		IL2CPP_NATIVEARRAY_SET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_67, (L_68));
	}

IL_0245:
	{
		int32_t L_69 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_024b:
	{
		int32_t L_70 = V_9;
		int32_t L_71 = __this->___m_NumEdges;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_0111;
		}
	}
	{
		NativeArray_1_t6DFA7159F8B44F4F2F4CA9F98E8EB3EE67983D9B L_72 = V_2;
		void* L_73;
		L_73 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m7E9E200C8AC0B796CE7188B226AB37DBAD37EC7E(L_72, NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_m7E9E200C8AC0B796CE7188B226AB37DBAD37EC7E_RuntimeMethod_var);
		int32_t L_74 = V_3;
		il2cpp_codegen_initobj((&V_17), sizeof(TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50));
		TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50 L_75 = V_17;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_InsertionSort_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50_m258B5011A3B37991991591174271F52C24BBE8C5(L_73, 0, ((int32_t)il2cpp_codegen_subtract(L_74, 1)), L_75, ModuleHandle_InsertionSort_TisUEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE_TisTessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50_m258B5011A3B37991991591174271F52C24BBE8C5_RuntimeMethod_var);
		V_4 = (bool)1;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_76;
		L_76 = IL2CPP_NATIVEARRAY_GET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, 0);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_77 = L_76.___a;
		float L_78 = L_77.___x;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_79;
		L_79 = IL2CPP_NATIVEARRAY_GET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, 0);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_80 = L_79.___a;
		float L_81 = L_80.___x;
		float L_82;
		L_82 = math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline(L_81, NULL);
		float L_83;
		L_83 = math_pow_m2B2C611A37952CFB13BB0AE800A6A601A2E4A49B_inline((2.0f), (-16.0f), NULL);
		V_5 = ((float)il2cpp_codegen_subtract(L_78, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add((1.0f), L_82)), L_83))));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_84 = (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)(&(&V_6)->___a);
		float L_85 = V_5;
		L_84->___x = L_85;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_86 = (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)(&(&V_6)->___a);
		L_86->___y = (1.0f);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_87 = (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)(&(&V_6)->___b);
		float L_88 = V_5;
		L_87->___x = L_88;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_89 = (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)(&(&V_6)->___b);
		L_89->___y = (0.0f);
		(&V_6)->___idx = (-1);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_90 = __this->___m_ILArray;
		int32_t L_91 = __this->___m_NumHulls;
		int32_t L_92 = __this->___m_NumHulls;
		int32_t L_93 = __this->___m_NumHulls;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_94;
		memset((&L_94), 0, sizeof(L_94));
		ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9((&L_94), L_90, ((int32_t)il2cpp_codegen_multiply(L_91, L_92)), L_93, ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		(&V_6)->___ilarray = L_94;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_95 = __this->___m_IUArray;
		int32_t L_96 = __this->___m_NumHulls;
		int32_t L_97 = __this->___m_NumHulls;
		int32_t L_98 = __this->___m_NumHulls;
		ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D L_99;
		memset((&L_99), 0, sizeof(L_99));
		ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9((&L_99), L_95, ((int32_t)il2cpp_codegen_multiply(L_96, L_97)), L_98, ArraySlice_1__ctor_m6151E08BAB1AD0668D076901DC8C7C6D07567DC9_RuntimeMethod_var);
		(&V_6)->___iuarray = L_99;
		(&V_6)->___ilcount = 0;
		(&V_6)->___iucount = 0;
		int32_t L_100 = V_1;
		int32_t L_101 = L_100;
		V_1 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_102 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5, ((&V_0))->___m_Buffer, L_101, (L_102));
		V_18 = 0;
		int32_t L_103 = V_3;
		V_19 = L_103;
		goto IL_03e6;
	}

IL_036c:
	{
		int32_t L_104 = V_18;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_105;
		L_105 = IL2CPP_NATIVEARRAY_GET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_104);
		int32_t L_106 = L_105.___type;
		V_20 = L_106;
		int32_t L_107 = V_20;
		if (!L_107)
		{
			goto IL_0387;
		}
	}
	{
		int32_t L_108 = V_20;
		if ((((int32_t)L_108) == ((int32_t)2)))
		{
			goto IL_03b0;
		}
	}
	{
		goto IL_03c7;
	}

IL_0387:
	{
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_109 = V_0;
		int32_t L_110 = V_1;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_111 = ___0_points;
		int32_t L_112 = V_18;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_113;
		L_113 = IL2CPP_NATIVEARRAY_GET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_112);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_114 = L_113.___a;
		int32_t L_115 = V_18;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_116;
		L_116 = IL2CPP_NATIVEARRAY_GET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_115);
		int32_t L_117 = L_116.___idx;
		bool L_118;
		L_118 = Tessellator_AddPoint_m1B8B2A1C5A2F7742F1E5AF1D7618E65C1B75C70B(__this, L_109, L_110, L_111, L_114, L_117, NULL);
		V_4 = L_118;
		goto IL_03dc;
	}

IL_03b0:
	{
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_119 = V_0;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_120 = ___0_points;
		int32_t L_121 = V_18;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_122;
		L_122 = IL2CPP_NATIVEARRAY_GET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_121);
		bool L_123;
		L_123 = Tessellator_SplitHulls_mC558F30B7A383F1169945126EF5FF34B2E9B54C9(__this, L_119, (&V_1), L_120, L_122, NULL);
		V_4 = L_123;
		goto IL_03dc;
	}

IL_03c7:
	{
		NativeArray_1_t44FA93AB0B24CED597862F0C975E5276D1C92FA8 L_124 = V_0;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_125 = ___0_points;
		int32_t L_126 = V_18;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_127;
		L_127 = IL2CPP_NATIVEARRAY_GET_ITEM(UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE, ((&V_2))->___m_Buffer, L_126);
		bool L_128;
		L_128 = Tessellator_MergeHulls_m9A96C241CD12A18A2CF1FAC88978385323F57DFE(__this, L_124, (&V_1), L_125, L_127, NULL);
		V_4 = L_128;
	}

IL_03dc:
	{
		bool L_129 = V_4;
		if (!L_129)
		{
			goto IL_03ec;
		}
	}
	{
		int32_t L_130 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_03e6:
	{
		int32_t L_131 = V_18;
		int32_t L_132 = V_19;
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_036c;
		}
	}

IL_03ec:
	{
		NativeArray_1_Dispose_m7CA99BD8B0E7A24B9994325CEA8D931267AC1BDD((&V_2), NativeArray_1_Dispose_m7CA99BD8B0E7A24B9994325CEA8D931267AC1BDD_RuntimeMethod_var);
		NativeArray_1_Dispose_m573055E6ED3C1024C5623136F7D378B464C79342((&V_0), NativeArray_1_Dispose_m573055E6ED3C1024C5623136F7D378B464C79342_RuntimeMethod_var);
		bool L_133 = V_4;
		return L_133;
	}
}
IL2CPP_EXTERN_C  bool Tessellator_Triangulate_mE55C698C207EA1A8DA592191AB17C3FB7688989E_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, int32_t ___1_pointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___2_edges, int32_t ___3_edgeCount, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	bool _returnValue;
	_returnValue = Tessellator_Triangulate_mE55C698C207EA1A8DA592191AB17C3FB7688989E(_thisAdjusted, ___0_points, ___1_pointCount, ___2_edges, ___3_edgeCount, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tessellator_Tessellate_mE45146D6B03B63F8D23C19B8B3FAF0047300B1AC (int32_t ___0_allocator, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_pgPoints, int32_t ___2_pgPointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___3_pgEdges, int32_t ___4_pgEdgeCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___5_outputVertices, int32_t* ___6_vertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___7_outputIndices, int32_t* ___8_indexCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B14_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241));
		int32_t L_0 = ___0_allocator;
		Tessellator_SetAllocator_m66AFC39E8CFBDC82638D7D7BC3BA70CB4B818C96_inline((&V_0), L_0, NULL);
		V_1 = 0;
		V_2 = 0;
		V_3 = (bool)1;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_1 = ___1_pgPoints;
		int32_t L_2 = ___2_pgPointCount;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_3 = ___3_pgEdges;
		int32_t L_4 = ___4_pgEdgeCount;
		bool L_5;
		L_5 = Tessellator_Triangulate_mE55C698C207EA1A8DA592191AB17C3FB7688989E((&V_0), L_1, L_2, L_3, L_4, NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_7 = ___1_pgPoints;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_8 = ___3_pgEdges;
		bool L_9;
		L_9 = Tessellator_ApplyDelaunay_m39B60F4E8FE33D874D762C034A2D1157F28FCF49((&V_0), L_7, L_8, NULL);
		G_B3_0 = ((int32_t)(L_9));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_3 = (bool)G_B3_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_015e;
		}
	}
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57 L_11;
		L_11 = Tessellator_RemoveExterior_m63CD3C9CFC589841E8071F8095AE44C9DAC4F4F3((&V_0), (&V_2), NULL);
		V_4 = L_11;
		V_5 = 0;
		goto IL_0117;
	}

IL_004c:
	{
		int32_t L_12 = V_5;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_4))->___m_Buffer, L_12);
		int32_t L_14 = L_13.___x;
		V_6 = (uint16_t)((int32_t)(uint16_t)L_14);
		int32_t L_15 = V_5;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_4))->___m_Buffer, L_15);
		int32_t L_17 = L_16.___y;
		V_7 = (uint16_t)((int32_t)(uint16_t)L_17);
		int32_t L_18 = V_5;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_19;
		L_19 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_4))->___m_Buffer, L_18);
		int32_t L_20 = L_19.___z;
		V_8 = (uint16_t)((int32_t)(uint16_t)L_20);
		uint16_t L_21 = V_6;
		uint16_t L_22 = V_7;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_23 = V_7;
		uint16_t L_24 = V_8;
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		uint16_t L_26 = V_8;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00d6;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_27 = ___7_outputIndices;
		int32_t* L_28 = ___8_indexCount;
		int32_t* L_29 = ___8_indexCount;
		int32_t L_30 = *((int32_t*)L_29);
		V_9 = L_30;
		int32_t L_31 = V_9;
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_9;
		uint16_t L_33 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_27)->___m_Buffer, L_32, (L_33));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_34 = ___7_outputIndices;
		int32_t* L_35 = ___8_indexCount;
		int32_t* L_36 = ___8_indexCount;
		int32_t L_37 = *((int32_t*)L_36);
		V_9 = L_37;
		int32_t L_38 = V_9;
		*((int32_t*)L_35) = (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = V_9;
		uint16_t L_40 = V_8;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_34)->___m_Buffer, L_39, (L_40));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_41 = ___7_outputIndices;
		int32_t* L_42 = ___8_indexCount;
		int32_t* L_43 = ___8_indexCount;
		int32_t L_44 = *((int32_t*)L_43);
		V_9 = L_44;
		int32_t L_45 = V_9;
		*((int32_t*)L_42) = (int32_t)((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_9;
		uint16_t L_47 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_41)->___m_Buffer, L_46, (L_47));
	}

IL_00d6:
	{
		int32_t L_48 = V_5;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_49;
		L_49 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_4))->___m_Buffer, L_48);
		int32_t L_50 = L_49.___x;
		int32_t L_51 = V_5;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_52;
		L_52 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_4))->___m_Buffer, L_51);
		int32_t L_53 = L_52.___y;
		int32_t L_54;
		L_54 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_50, L_53, NULL);
		int32_t L_55 = V_5;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_56;
		L_56 = IL2CPP_NATIVEARRAY_GET_ITEM(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, ((&V_4))->___m_Buffer, L_55);
		int32_t L_57 = L_56.___z;
		int32_t L_58;
		L_58 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_54, L_57, NULL);
		int32_t L_59 = V_1;
		int32_t L_60;
		L_60 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_58, L_59, NULL);
		V_1 = L_60;
		int32_t L_61 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0117:
	{
		int32_t L_62 = V_5;
		int32_t L_63 = V_2;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_64 = V_1;
		if (L_64)
		{
			goto IL_0125;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_0128;
	}

IL_0125:
	{
		int32_t L_65 = V_1;
		G_B14_0 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0128:
	{
		V_1 = G_B14_0;
		V_10 = 0;
		goto IL_0152;
	}

IL_012e:
	{
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_66 = ___5_outputVertices;
		int32_t* L_67 = ___6_vertexCount;
		int32_t* L_68 = ___6_vertexCount;
		int32_t L_69 = *((int32_t*)L_68);
		V_9 = L_69;
		int32_t L_70 = V_9;
		*((int32_t*)L_67) = (int32_t)((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_71 = V_9;
		int32_t L_72 = V_10;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_73;
		L_73 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___1_pgPoints))->___m_Buffer, L_72);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_66)->___m_Buffer, L_71, (L_73));
		int32_t L_74 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0152:
	{
		int32_t L_75 = V_10;
		int32_t L_76 = V_1;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_012e;
		}
	}
	{
		NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213((&V_4), NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
	}

IL_015e:
	{
		Tessellator_Cleanup_m54EFF571CA8971F236A791FC880C8046286D2A37((&V_0), NULL);
		bool L_77 = V_3;
		return L_77;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellator_Cleanup_m54EFF571CA8971F236A791FC880C8046286D2A37 (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m78F99DD50B9EE3247088B7B56B7B173ABAAB1ADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_0 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___m_Edges);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_inline(L_0, NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_2 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___m_Edges);
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2(L_2, NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
	}

IL_0018:
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_3 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		bool L_4;
		L_4 = NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_inline(L_3, NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* L_5 = (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02*)(&__this->___m_Stars);
		NativeArray_1_Dispose_m78F99DD50B9EE3247088B7B56B7B173ABAAB1ADD(L_5, NativeArray_1_Dispose_m78F99DD50B9EE3247088B7B56B7B173ABAAB1ADD_RuntimeMethod_var);
	}

IL_0030:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_SPArray);
		bool L_7;
		L_7 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_6, NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_8 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_SPArray);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_8, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_0048:
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* L_9 = (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*)(&__this->___m_Cells);
		bool L_10;
		L_10 = NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_inline(L_9, NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* L_11 = (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57*)(&__this->___m_Cells);
		NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213(L_11, NativeArray_1_Dispose_m0015D099CB0B1F5A98810933273CC400B0BD4213_RuntimeMethod_var);
	}

IL_0060:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_12 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_ILArray);
		bool L_13;
		L_13 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_12, NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_14 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_ILArray);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_14, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_0078:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_IUArray);
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_15, NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_17 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_IUArray);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_17, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_0090:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_18 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		bool L_19;
		L_19 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_18, NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_00a8;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_20 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Flags);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_20, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_00a8:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_21 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Neighbors);
		bool L_22;
		L_22 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_21, NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_23 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Neighbors);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_23, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_00c0:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_24 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Constraints);
		bool L_25;
		L_25 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_24, NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_RuntimeMethod_var);
		if (!L_25)
		{
			goto IL_00d8;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_26 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___m_Constraints);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_26, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Tessellator_Cleanup_m54EFF571CA8971F236A791FC880C8046286D2A37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241*>(__this + _offset);
	Tessellator_Cleanup_m54EFF571CA8971F236A791FC880C8046286D2A37(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullPointL_Test_mD67B5326AED143E216C7DC238637E8E0B3131ECC (TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p, float* ___2_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float* L_0 = ___2_t;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_1 = ___0_h;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = L_1.___a;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_3 = ___0_h;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = L_3.___b;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___1_p;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_2, L_4, L_5, NULL);
		*((float*)L_0) = (float)L_6;
		float* L_7 = ___2_t;
		float L_8 = *((float*)L_7);
		return (bool)((((float)L_8) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TestHullPointL_Test_mD67B5326AED143E216C7DC238637E8E0B3131ECC_AdjustorThunk (RuntimeObject* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p, float* ___2_t, const RuntimeMethod* method)
{
	TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TestHullPointL_t66B59732E84CD8B8F0A35BD81BEC20971C1608A2*>(__this + _offset);
	bool _returnValue;
	_returnValue = TestHullPointL_Test_mD67B5326AED143E216C7DC238637E8E0B3131ECC(_thisAdjusted, ___0_h, ___1_p, ___2_t, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullPointU_Test_m3AF0A2CD6162B20C77771850BF94DC7A2D8ED9C2 (TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p, float* ___2_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float* L_0 = ___2_t;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_1 = ___0_h;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = L_1.___a;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_3 = ___0_h;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = L_3.___b;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___1_p;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_2, L_4, L_5, NULL);
		*((float*)L_0) = (float)L_6;
		float* L_7 = ___2_t;
		float L_8 = *((float*)L_7);
		return (bool)((((float)L_8) > ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TestHullPointU_Test_m3AF0A2CD6162B20C77771850BF94DC7A2D8ED9C2_AdjustorThunk (RuntimeObject* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p, float* ___2_t, const RuntimeMethod* method)
{
	TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TestHullPointU_tEB7A8E96D653DF22C78B1363A319E645F05C2D16*>(__this + _offset);
	bool _returnValue;
	_returnValue = TestHullPointU_Test_m3AF0A2CD6162B20C77771850BF94DC7A2D8ED9C2(_thisAdjusted, ___0_h, ___1_p, ___2_t, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullEventLe_Test_m4FE651114100DE7E07DBADE520E75FC168A97CB3 (TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_p, float* ___2_t, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___2_t;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_1 = ___0_h;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_2 = ___1_p;
		float L_3;
		L_3 = Tessellator_FindSplit_m10B801FE843957B0D014E7867373EAF6AA2CF1FD(L_1, L_2, NULL);
		*((float*)L_0) = (float)L_3;
		float* L_4 = ___2_t;
		float L_5 = *((float*)L_4);
		return (bool)((((int32_t)((!(((float)L_5) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TestHullEventLe_Test_m4FE651114100DE7E07DBADE520E75FC168A97CB3_AdjustorThunk (RuntimeObject* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_p, float* ___2_t, const RuntimeMethod* method)
{
	TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TestHullEventLe_t428A4856E8BA71EA857A13595B81271483FF55B8*>(__this + _offset);
	bool _returnValue;
	_returnValue = TestHullEventLe_Test_m4FE651114100DE7E07DBADE520E75FC168A97CB3(_thisAdjusted, ___0_h, ___1_p, ___2_t, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestHullEventE_Test_mD7344227B61F43A6A023EBC2F1C13140FD082F49 (TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_p, float* ___2_t, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___2_t;
		UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 L_1 = ___0_h;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_2 = ___1_p;
		float L_3;
		L_3 = Tessellator_FindSplit_m10B801FE843957B0D014E7867373EAF6AA2CF1FD(L_1, L_2, NULL);
		*((float*)L_0) = (float)L_3;
		float* L_4 = ___2_t;
		float L_5 = *((float*)L_4);
		return (bool)((((float)L_5) == ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TestHullEventE_Test_mD7344227B61F43A6A023EBC2F1C13140FD082F49_AdjustorThunk (RuntimeObject* __this, UHull_t4B21C0DB3D81E27C2BF60852E612499E598472B5 ___0_h, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_p, float* ___2_t, const RuntimeMethod* method)
{
	TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TestHullEventE_t91CCCB62CEA34865B529A1AEF9C7C933A3E3D4F0*>(__this + _offset);
	bool _returnValue;
	_returnValue = TestHullEventE_Test_mD7344227B61F43A6A023EBC2F1C13140FD082F49(_thisAdjusted, ___0_h, ___1_p, ___2_t, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestEdgePointE_Test_m1405C8998CF580F46817D5D0F33BBC98B4CC240B (TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_h, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_p, float* ___2_t, const RuntimeMethod* method) 
{
	TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA));
		float* L_0 = ___2_t;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___0_h;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___1_p;
		int32_t L_3;
		L_3 = TessEdgeCompare_Compare_mE3BC27F4E0F907DADA5C2B96C0826122EBB34E97((&V_0), L_1, L_2, NULL);
		*((float*)L_0) = (float)((float)L_3);
		float* L_4 = ___2_t;
		float L_5 = *((float*)L_4);
		return (bool)((((float)L_5) == ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TestEdgePointE_Test_m1405C8998CF580F46817D5D0F33BBC98B4CC240B_AdjustorThunk (RuntimeObject* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_h, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_p, float* ___2_t, const RuntimeMethod* method)
{
	TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TestEdgePointE_t5D1D1312698D906FEA6A04880C83D7AAF75B71D8*>(__this + _offset);
	bool _returnValue;
	_returnValue = TestEdgePointE_Test_m1405C8998CF580F46817D5D0F33BBC98B4CC240B(_thisAdjusted, ___0_h, ___1_p, ___2_t, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TestCellE_Test_m41B697E52090E8C53B5FF1ABE7981AAFB2E48C3E (TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_h, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_p, float* ___2_t, const RuntimeMethod* method) 
{
	TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45));
		float* L_0 = ___2_t;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_1 = ___0_h;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_2 = ___1_p;
		int32_t L_3;
		L_3 = TessCellCompare_Compare_m33DEA3199CA382144A3B0376035D2F1A789B4108((&V_0), L_1, L_2, NULL);
		*((float*)L_0) = (float)((float)L_3);
		float* L_4 = ___2_t;
		float L_5 = *((float*)L_4);
		return (bool)((((float)L_5) == ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TestCellE_Test_m41B697E52090E8C53B5FF1ABE7981AAFB2E48C3E_AdjustorThunk (RuntimeObject* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_h, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_p, float* ___2_t, const RuntimeMethod* method)
{
	TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TestCellE_t0F8BBDD3840E1308A945CF738127F1842790CD20*>(__this + _offset);
	bool _returnValue;
	_returnValue = TestCellE_Test_m41B697E52090E8C53B5FF1ABE7981AAFB2E48C3E(_thisAdjusted, ___0_h, ___1_p, ___2_t, method);
	return _returnValue;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XCompare_Compare_mC591D9D097659ECE784A849856E80AB4D5E2C11A (XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E* __this, double ___0_a, double ___1_b, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_a;
		double L_1 = ___1_b;
		if ((((double)L_0) < ((double)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t XCompare_Compare_mC591D9D097659ECE784A849856E80AB4D5E2C11A_AdjustorThunk (RuntimeObject* __this, double ___0_a, double ___1_b, const RuntimeMethod* method)
{
	XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XCompare_Compare_mC591D9D097659ECE784A849856E80AB4D5E2C11A(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntersectionCompare_Compare_m47AF21131D95CE78ACD63B1848834162EE5FB582 (IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_3;
	memset((&V_3), 0, sizeof(V_3));
	double* V_4 = NULL;
	XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_0 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___edges);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___0_a;
		int32_t L_2 = L_1.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_0)->___m_Buffer, L_2);
		V_0 = L_3;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_4 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___edges);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5 = ___0_a;
		int32_t L_6 = L_5.___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_4)->___m_Buffer, L_6);
		V_1 = L_7;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_8 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___edges);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9 = ___1_b;
		int32_t L_10 = L_9.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_8)->___m_Buffer, L_10);
		V_2 = L_11;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_12 = (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)(&__this->___edges);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_13 = ___1_b;
		int32_t L_14 = L_13.___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_12)->___m_Buffer, L_14);
		V_3 = L_15;
		U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088* L_16 = (U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088*)(&__this->___xvasort);
		double* L_17 = (double*)(&L_16->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_18 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_19 = V_0;
		int32_t L_20 = L_19.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_18)->___m_Buffer, L_20);
		double L_22 = L_21.___x;
		*((double*)L_17) = (double)L_22;
		U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088* L_23 = (U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088*)(&__this->___xvasort);
		double* L_24 = (double*)(&L_23->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_25 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_26 = V_0;
		int32_t L_27 = L_26.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_25)->___m_Buffer, L_27);
		double L_29 = L_28.___x;
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_24, 8))) = (double)L_29;
		U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088* L_30 = (U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088*)(&__this->___xvasort);
		double* L_31 = (double*)(&L_30->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_32 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_33 = V_1;
		int32_t L_34 = L_33.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_35;
		L_35 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_32)->___m_Buffer, L_34);
		double L_36 = L_35.___x;
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 8))))) = (double)L_36;
		U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088* L_37 = (U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088*)(&__this->___xvasort);
		double* L_38 = (double*)(&L_37->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_39 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_40 = V_1;
		int32_t L_41 = L_40.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_42;
		L_42 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_39)->___m_Buffer, L_41);
		double L_43 = L_42.___x;
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 8))))) = (double)L_43;
		U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD* L_44 = (U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD*)(&__this->___xvbsort);
		double* L_45 = (double*)(&L_44->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_46 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_47 = V_2;
		int32_t L_48 = L_47.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_49;
		L_49 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_46)->___m_Buffer, L_48);
		double L_50 = L_49.___x;
		*((double*)L_45) = (double)L_50;
		U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD* L_51 = (U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD*)(&__this->___xvbsort);
		double* L_52 = (double*)(&L_51->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_53 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_54 = V_2;
		int32_t L_55 = L_54.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_56;
		L_56 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_53)->___m_Buffer, L_55);
		double L_57 = L_56.___x;
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_52, 8))) = (double)L_57;
		U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD* L_58 = (U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD*)(&__this->___xvbsort);
		double* L_59 = (double*)(&L_58->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_60 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_61 = V_3;
		int32_t L_62 = L_61.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_63;
		L_63 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_60)->___m_Buffer, L_62);
		double L_64 = L_63.___x;
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_59, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 8))))) = (double)L_64;
		U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD* L_65 = (U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD*)(&__this->___xvbsort);
		double* L_66 = (double*)(&L_65->___FixedElementField);
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_67 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_68 = V_3;
		int32_t L_69 = L_68.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_67)->___m_Buffer, L_69);
		double L_71 = L_70.___x;
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 8))))) = (double)L_71;
		U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088* L_72 = (U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088*)(&__this->___xvasort);
		double* L_73 = (double*)(&L_72->___FixedElementField);
		V_4 = L_73;
		double* L_74 = V_4;
		il2cpp_codegen_initobj((&V_5), sizeof(XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E));
		XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E L_75 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C((void*)((uintptr_t)L_74), 0, 3, L_75, ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C_RuntimeMethod_var);
		V_4 = (double*)((uintptr_t)0);
		U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD* L_76 = (U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD*)(&__this->___xvbsort);
		double* L_77 = (double*)(&L_76->___FixedElementField);
		V_4 = L_77;
		double* L_78 = V_4;
		il2cpp_codegen_initobj((&V_5), sizeof(XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E));
		XCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E L_79 = V_5;
		ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C((void*)((uintptr_t)L_78), 0, 3, L_79, ModuleHandle_InsertionSort_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisXCompare_tA4217D83836668585CB503D8C16C62FFDE0DC50E_m6491FF3686DFF10132910921E97A729DF591029C_RuntimeMethod_var);
		V_4 = (double*)((uintptr_t)0);
		V_6 = 0;
		goto IL_021f;
	}

IL_01bf:
	{
		U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088* L_80 = (U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088*)(&__this->___xvasort);
		double* L_81 = (double*)(&L_80->___FixedElementField);
		int32_t L_82 = V_6;
		double L_83 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 8)))));
		U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD* L_84 = (U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD*)(&__this->___xvbsort);
		double* L_85 = (double*)(&L_84->___FixedElementField);
		int32_t L_86 = V_6;
		double L_87 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_86), 8)))));
		if ((((double)((double)il2cpp_codegen_subtract(L_83, L_87))) == ((double)(0.0))))
		{
			goto IL_0219;
		}
	}
	{
		U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088* L_88 = (U3CxvasortU3Ee__FixedBuffer_t6D55D69851347CAF88CD71F4A5DF01BBC4DE7088*)(&__this->___xvasort);
		double* L_89 = (double*)(&L_88->___FixedElementField);
		int32_t L_90 = V_6;
		double L_91 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 8)))));
		U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD* L_92 = (U3CxvbsortU3Ee__FixedBuffer_t2B4FE4EECBE0F32E4E7F9C0E31065512A62783FD*)(&__this->___xvbsort);
		double* L_93 = (double*)(&L_92->___FixedElementField);
		int32_t L_94 = V_6;
		double L_95 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 8)))));
		if ((((double)L_91) < ((double)L_95)))
		{
			goto IL_0217;
		}
	}
	{
		return 1;
	}

IL_0217:
	{
		return (-1);
	}

IL_0219:
	{
		int32_t L_96 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_021f:
	{
		int32_t L_97 = V_6;
		if ((((int32_t)L_97) < ((int32_t)4)))
		{
			goto IL_01bf;
		}
	}
	{
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_98 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_99 = V_0;
		int32_t L_100 = L_99.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_101;
		L_101 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_98)->___m_Buffer, L_100);
		double L_102 = L_101.___y;
		NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7* L_103 = (NativeArray_1_tC5C4512CB4AB460748938A48BEBFEE21884292B7*)(&__this->___points);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_104 = V_0;
		int32_t L_105 = L_104.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_106;
		L_106 = IL2CPP_NATIVEARRAY_GET_ITEM(double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA, (L_103)->___m_Buffer, L_105);
		double L_107 = L_106.___y;
		if ((((double)L_102) < ((double)L_107)))
		{
			goto IL_0254;
		}
	}
	{
		return 1;
	}

IL_0254:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t IntersectionCompare_Compare_m47AF21131D95CE78ACD63B1848834162EE5FB582_AdjustorThunk (RuntimeObject* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method)
{
	IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntersectionCompare_t21DEE51F23F51CD0CF9E47899B170D40ED174839*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntersectionCompare_Compare_m47AF21131D95CE78ACD63B1848834162EE5FB582(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessEventCompare_Compare_mCB358637173C49F5385C5C10E6EF7FB2998FEF40 (TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50* __this, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___0_a, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_0 = ___0_a;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = L_0.___a;
		float L_2 = L_1.___x;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_3 = ___1_b;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = L_3.___a;
		float L_5 = L_4.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_5));
		float L_6 = V_0;
		if ((((float)(0.0f)) == ((float)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		float L_7 = V_0;
		if ((((float)L_7) > ((float)(0.0f))))
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}

IL_002a:
	{
		return 1;
	}

IL_002c:
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_8 = ___0_a;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9 = L_8.___a;
		float L_10 = L_9.___y;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_11 = ___1_b;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = L_11.___a;
		float L_13 = L_12.___y;
		V_0 = ((float)il2cpp_codegen_subtract(L_10, L_13));
		float L_14 = V_0;
		if ((((float)(0.0f)) == ((float)L_14)))
		{
			goto IL_0058;
		}
	}
	{
		float L_15 = V_0;
		if ((((float)L_15) > ((float)(0.0f))))
		{
			goto IL_0056;
		}
	}
	{
		return (-1);
	}

IL_0056:
	{
		return 1;
	}

IL_0058:
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_16 = ___0_a;
		int32_t L_17 = L_16.___type;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_18 = ___1_b;
		int32_t L_19 = L_18.___type;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, L_19));
		int32_t L_20 = V_1;
		if (!L_20)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_21 = V_1;
		return L_21;
	}

IL_006b:
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_22 = ___0_a;
		int32_t L_23 = L_22.___type;
		if (!L_23)
		{
			goto IL_009f;
		}
	}
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_24 = ___0_a;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_25 = L_24.___a;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_26 = ___0_a;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_27 = L_26.___b;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_28 = ___1_b;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_29 = L_28.___b;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_30;
		L_30 = ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06(L_25, L_27, L_29, NULL);
		V_2 = L_30;
		float L_31 = V_2;
		if ((((float)(0.0f)) == ((float)L_31)))
		{
			goto IL_009f;
		}
	}
	{
		float L_32 = V_2;
		if ((((float)L_32) > ((float)(0.0f))))
		{
			goto IL_009d;
		}
	}
	{
		return (-1);
	}

IL_009d:
	{
		return 1;
	}

IL_009f:
	{
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_33 = ___0_a;
		int32_t L_34 = L_33.___idx;
		UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE L_35 = ___1_b;
		int32_t L_36 = L_35.___idx;
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_36));
	}
}
IL2CPP_EXTERN_C  int32_t TessEventCompare_Compare_mCB358637173C49F5385C5C10E6EF7FB2998FEF40_AdjustorThunk (RuntimeObject* __this, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___0_a, UEvent_t1351EDA8B088C3656BB512CCC64AE973C92D53BE ___1_b, const RuntimeMethod* method)
{
	TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessEventCompare_tB4F5A87DBF6DD41F6314F35043C5BA5898448F50*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TessEventCompare_Compare_mCB358637173C49F5385C5C10E6EF7FB2998FEF40(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessEdgeCompare_Compare_mE3BC27F4E0F907DADA5C2B96C0826122EBB34E97 (TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_a;
		int32_t L_1 = L_0.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___1_b;
		int32_t L_3 = L_2.___x;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = ___0_a;
		int32_t L_7 = L_6.___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_8 = ___1_b;
		int32_t L_9 = L_8.___y;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, L_9));
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t TessEdgeCompare_Compare_mE3BC27F4E0F907DADA5C2B96C0826122EBB34E97_AdjustorThunk (RuntimeObject* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method)
{
	TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessEdgeCompare_t9888F234DB636B348B6EFEF0ACC15E87F4930FCA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TessEdgeCompare_Compare_mE3BC27F4E0F907DADA5C2B96C0826122EBB34E97(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessCellCompare_Compare_m33DEA3199CA382144A3B0376035D2F1A789B4108 (TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_a, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_0 = ___0_a;
		int32_t L_1 = L_0.___x;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_2 = ___1_b;
		int32_t L_3 = L_2.___x;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_6 = ___0_a;
		int32_t L_7 = L_6.___y;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_8 = ___1_b;
		int32_t L_9 = L_8.___y;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, L_9));
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0026:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_12 = ___0_a;
		int32_t L_13 = L_12.___z;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_14 = ___1_b;
		int32_t L_15 = L_14.___z;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, L_15));
		int32_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t TessCellCompare_Compare_m33DEA3199CA382144A3B0376035D2F1A789B4108_AdjustorThunk (RuntimeObject* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_a, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___1_b, const RuntimeMethod* method)
{
	TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessCellCompare_tDFD8A432135A4DF55B78E2CCC74A93D3EB09DB45*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TessCellCompare_Compare_m33DEA3199CA382144A3B0376035D2F1A789B4108(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessJunctionCompare_Compare_m28B7673AAA0AD8D3EAFE0DD9289AB335D4350F13 (TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_a;
		int32_t L_1 = L_0.___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___1_b;
		int32_t L_3 = L_2.___x;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = ___0_a;
		int32_t L_7 = L_6.___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_8 = ___1_b;
		int32_t L_9 = L_8.___y;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, L_9));
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t TessJunctionCompare_Compare_m28B7673AAA0AD8D3EAFE0DD9289AB335D4350F13_AdjustorThunk (RuntimeObject* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_a, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_b, const RuntimeMethod* method)
{
	TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessJunctionCompare_t1B2A4587D20ABADA991833A85B52100303B9539C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TessJunctionCompare_Compare_m28B7673AAA0AD8D3EAFE0DD9289AB335D4350F13(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaEdgeCompare_Compare_m4AE4388767DAE729E5F497C66009C5DEB796B61A (DelaEdgeCompare_tE7F76464E799DE60A8BF6D3237C394A4D423F094* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_a, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_0 = ___0_a;
		int32_t L_1 = L_0.___x;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_2 = ___1_b;
		int32_t L_3 = L_2.___x;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_6 = ___0_a;
		int32_t L_7 = L_6.___y;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_8 = ___1_b;
		int32_t L_9 = L_8.___y;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, L_9));
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0026:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_12 = ___0_a;
		int32_t L_13 = L_12.___z;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_14 = ___1_b;
		int32_t L_15 = L_14.___z;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, L_15));
		int32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0039:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_18 = ___0_a;
		int32_t L_19 = L_18.___w;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_20 = ___1_b;
		int32_t L_21 = L_20.___w;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, L_21));
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  int32_t DelaEdgeCompare_Compare_m4AE4388767DAE729E5F497C66009C5DEB796B61A_AdjustorThunk (RuntimeObject* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_a, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___1_b, const RuntimeMethod* method)
{
	DelaEdgeCompare_tE7F76464E799DE60A8BF6D3237C394A4D423F094* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DelaEdgeCompare_tE7F76464E799DE60A8BF6D3237C394A4D423F094*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DelaEdgeCompare_Compare_m4AE4388767DAE729E5F497C66009C5DEB796B61A(_thisAdjusted, ___0_a, ___1_b, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 TessLink_CreateLink_m29A2928ED0ECDA9EE29A29E2EC92D6678F10FF05 (int32_t ___0_count, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893));
		int32_t L_0 = ___0_count;
		int32_t L_1 = ___1_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_2), L_0, L_1, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		(&V_0)->___roots = L_2;
		int32_t L_3 = ___0_count;
		int32_t L_4 = ___1_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		memset((&L_5), 0, sizeof(L_5));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_5), L_3, L_4, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		(&V_0)->___ranks = L_5;
		V_1 = 0;
		goto IL_004a;
	}

IL_002a:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&V_0)->___roots);
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_6)->___m_Buffer, L_7, (L_8));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_9 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&V_0)->___ranks);
		int32_t L_10 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_9)->___m_Buffer, L_10, (0));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004a:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___0_count;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessLink_DestroyLink_m8AE3E6F07F5695531C7712DC0777B62A7494AF1F (TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893 ___0_link, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___0_link)->___ranks);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_0, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&(&___0_link)->___roots);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_1, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08 (TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x;
		V_0 = L_0;
		goto IL_0012;
	}

IL_0004:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_2 = ___0_x;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_1)->___m_Buffer, L_2);
		___0_x = L_3;
	}

IL_0012:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_4 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_5 = ___0_x;
		int32_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_4)->___m_Buffer, L_5);
		int32_t L_7 = ___0_x;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0004;
		}
	}
	{
		goto IL_003d;
	}

IL_0023:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_8 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_8)->___m_Buffer, L_9);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_11 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_12 = V_0;
		int32_t L_13 = ___0_x;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_11)->___m_Buffer, L_12, (L_13));
		V_0 = L_10;
	}

IL_003d:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_14 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_15 = V_0;
		int32_t L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_14)->___m_Buffer, L_15);
		int32_t L_17 = ___0_x;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_18 = ___0_x;
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, const RuntimeMethod* method)
{
	TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08(_thisAdjusted, ___0_x, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessLink_Link_m371C8A216AFD9AC8BCD5F015C59DD926F8088B8B (TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1;
		L_1 = TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___1_y;
		int32_t L_3;
		L_3 = TessLink_Find_mEFBB6D30AF8D5CCDD565E36A2EAD62534AC52D08(__this, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___ranks);
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_6)->___m_Buffer, L_7);
		V_2 = L_8;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_9 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___ranks);
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_9)->___m_Buffer, L_10);
		V_3 = L_11;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0041;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_14 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_14)->___m_Buffer, L_15, (L_16));
		return;
	}

IL_0041:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_0053;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_19 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_19)->___m_Buffer, L_20, (L_21));
		return;
	}

IL_0053:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_22 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___roots);
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_22)->___m_Buffer, L_23, (L_24));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_25 = (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)(&__this->___ranks);
		int32_t L_26 = V_0;
		V_4 = L_26;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_27 = L_25;
		int32_t L_28 = V_4;
		int32_t L_29;
		L_29 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_27)->___m_Buffer, L_28);
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_4;
		int32_t L_31 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_27)->___m_Buffer, L_30, (L_31));
		return;
	}
}
IL2CPP_EXTERN_C  void TessLink_Link_m371C8A216AFD9AC8BCD5F015C59DD926F8088B8B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method)
{
	TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessLink_tFC9AFE3D440AE2D5D4C348DEA1E0736B3B983893*>(__this + _offset);
	TessLink_Link_m371C8A216AFD9AC8BCD5F015C59DD926F8088B8B(_thisAdjusted, ___0_x, ___1_y, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModuleHandle_OrientFast_m5AE5B276A51F924CB72CC43E05BED8D0C7FF6A06 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_a, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_b, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_c, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (1.11022302E-16f);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___1_b;
		float L_1 = L_0.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___0_a;
		float L_3 = L_2.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___2_c;
		float L_5 = L_4.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_b;
		float L_7 = L_6.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = ___1_b;
		float L_9 = L_8.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10 = ___0_a;
		float L_11 = L_10.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = ___2_c;
		float L_13 = L_12.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14 = ___1_b;
		float L_15 = L_14.___y;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))));
		float L_16 = V_1;
		float L_17;
		L_17 = math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline(L_16, NULL);
		float L_18 = V_0;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_004d;
		}
	}
	{
		return (0.0f);
	}

IL_004d:
	{
		float L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ModuleHandle_OrientFastDouble_m22FA5D345F2DE849281B3A4FD34A094C241FAC2F (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_a, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_b, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___2_c, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		V_0 = (1.1102230246251565E-16);
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___1_b;
		double L_1 = L_0.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2 = ___0_a;
		double L_3 = L_2.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_4 = ___2_c;
		double L_5 = L_4.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = ___1_b;
		double L_7 = L_6.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_8 = ___1_b;
		double L_9 = L_8.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_10 = ___0_a;
		double L_11 = L_10.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_12 = ___2_c;
		double L_13 = L_12.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_14 = ___1_b;
		double L_15 = L_14.___y;
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_9, L_11)), ((double)il2cpp_codegen_subtract(L_13, L_15))))));
		double L_16 = V_1;
		double L_17;
		L_17 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(L_16, NULL);
		double L_18 = V_0;
		if ((!(((double)L_17) < ((double)L_18))))
		{
			goto IL_0055;
		}
	}
	{
		return (0.0);
	}

IL_0055:
	{
		double L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC ModuleHandle_CircumCircle_m74CD844316D22901FA11DDFA9880D477AAA0722F (UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 ___0_tri, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_0 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = L_0.___va;
		float L_2 = L_1.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_3 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = L_3.___va;
		float L_5 = L_4.___x;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, L_5));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_6 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = L_6.___vb;
		float L_8 = L_7.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_9 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10 = L_9.___vb;
		float L_11 = L_10.___x;
		V_1 = ((float)il2cpp_codegen_multiply(L_8, L_11));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_12 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_13 = L_12.___vc;
		float L_14 = L_13.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_15 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_16 = L_15.___vc;
		float L_17 = L_16.___x;
		V_2 = ((float)il2cpp_codegen_multiply(L_14, L_17));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_18 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_19 = L_18.___va;
		float L_20 = L_19.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_21 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_22 = L_21.___va;
		float L_23 = L_22.___y;
		V_3 = ((float)il2cpp_codegen_multiply(L_20, L_23));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_24 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_25 = L_24.___vb;
		float L_26 = L_25.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_27 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_28 = L_27.___vb;
		float L_29 = L_28.___y;
		V_4 = ((float)il2cpp_codegen_multiply(L_26, L_29));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_30 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_31 = L_30.___vc;
		float L_32 = L_31.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_33 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_34 = L_33.___vc;
		float L_35 = L_34.___y;
		V_5 = ((float)il2cpp_codegen_multiply(L_32, L_35));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_36 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_37 = L_36.___vb;
		float L_38 = L_37.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_39 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_40 = L_39.___va;
		float L_41 = L_40.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_42 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_43 = L_42.___vc;
		float L_44 = L_43.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_45 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_46 = L_45.___va;
		float L_47 = L_46.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_48 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_49 = L_48.___vb;
		float L_50 = L_49.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_51 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_52 = L_51.___va;
		float L_53 = L_52.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_54 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_55 = L_54.___vc;
		float L_56 = L_55.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_57 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_58 = L_57.___va;
		float L_59 = L_58.___x;
		V_6 = ((float)il2cpp_codegen_multiply((2.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_38, L_41)), ((float)il2cpp_codegen_subtract(L_44, L_47)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_50, L_53)), ((float)il2cpp_codegen_subtract(L_56, L_59))))))));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_60 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_61 = L_60.___vc;
		float L_62 = L_61.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_63 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_64 = L_63.___va;
		float L_65 = L_64.___y;
		float L_66 = V_1;
		float L_67 = V_0;
		float L_68 = V_4;
		float L_69 = V_3;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_70 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_71 = L_70.___va;
		float L_72 = L_71.___y;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_73 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_74 = L_73.___vb;
		float L_75 = L_74.___y;
		float L_76 = V_2;
		float L_77 = V_0;
		float L_78 = V_5;
		float L_79 = V_3;
		float L_80 = V_6;
		V_7 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_62, L_65)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_66, L_67)), L_68)), L_69)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_72, L_75)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_76, L_77)), L_78)), L_79))))))/L_80));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_81 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_82 = L_81.___va;
		float L_83 = L_82.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_84 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_85 = L_84.___vc;
		float L_86 = L_85.___x;
		float L_87 = V_1;
		float L_88 = V_0;
		float L_89 = V_4;
		float L_90 = V_3;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_91 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_92 = L_91.___vb;
		float L_93 = L_92.___x;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_94 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_95 = L_94.___va;
		float L_96 = L_95.___x;
		float L_97 = V_2;
		float L_98 = V_0;
		float L_99 = V_5;
		float L_100 = V_3;
		float L_101 = V_6;
		V_8 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_83, L_86)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_87, L_88)), L_89)), L_90)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_93, L_96)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_97, L_98)), L_99)), L_100))))))/L_101));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_102 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_103 = L_102.___va;
		float L_104 = L_103.___x;
		float L_105 = V_7;
		V_9 = ((float)il2cpp_codegen_subtract(L_104, L_105));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_106 = ___0_tri;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_107 = L_106.___va;
		float L_108 = L_107.___y;
		float L_109 = V_8;
		V_10 = ((float)il2cpp_codegen_subtract(L_108, L_109));
		il2cpp_codegen_initobj((&V_11), sizeof(UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC));
		float L_110 = V_7;
		float L_111 = V_8;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_112;
		memset((&L_112), 0, sizeof(L_112));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_112), L_110, L_111, NULL);
		(&V_11)->___center = L_112;
		float L_113 = V_9;
		float L_114 = V_9;
		float L_115 = V_10;
		float L_116 = V_10;
		float L_117;
		L_117 = math_sqrt_mEF31DE7BD0179009683C5D7B0C58E6571B30CF4A_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_113, L_114)), ((float)il2cpp_codegen_multiply(L_115, L_116)))), NULL);
		(&V_11)->___radius = L_117;
		UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC L_118 = V_11;
		return L_118;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleHandle_IsInsideCircle_m562EC09950582F76A3070E0C20CE7A5FDCC490CD (UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC ___0_c, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_v, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___1_v;
		UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC L_1 = ___0_c;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = L_1.___center;
		float L_3;
		L_3 = math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline(L_0, L_2, NULL);
		UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC L_4 = ___0_c;
		float L_5 = L_4.___radius;
		return (bool)((((float)L_3) < ((float)L_5))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_va, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_vb, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_vc, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_1;
	memset((&V_1), 0, sizeof(V_1));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_va;
		float L_1 = L_0.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___0_va;
		float L_3 = L_2.___y;
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&V_0), L_1, L_3, (0.0f), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___1_vb;
		float L_5 = L_4.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_vb;
		float L_7 = L_6.___y;
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&V_1), L_5, L_7, (0.0f), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = ___2_vc;
		float L_9 = L_8.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10 = ___2_vc;
		float L_11 = L_10.___y;
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&V_2), L_9, L_11, (0.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline(L_12, L_13, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_16 = V_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_17;
		L_17 = float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline(L_15, L_16, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_18;
		L_18 = math_cross_m4CA2DAE150C6381B0D05E8AA9E48E88CF6157180_inline(L_14, L_17, NULL);
		float L_19 = L_18.___z;
		float L_20;
		L_20 = math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline(L_19, NULL);
		return ((float)il2cpp_codegen_multiply(L_20, (0.5f)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModuleHandle_Sign_m2A3FE8C13958F68CA76C2F1A510C4B90ED9168F1 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_p1, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_p2, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_p3, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_p1;
		float L_1 = L_0.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___2_p3;
		float L_3 = L_2.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___1_p2;
		float L_5 = L_4.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___2_p3;
		float L_7 = L_6.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = ___1_p2;
		float L_9 = L_8.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10 = ___2_p3;
		float L_11 = L_10.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = ___0_p1;
		float L_13 = L_12.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14 = ___2_p3;
		float L_15 = L_14.___y;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleHandle_IsInsideTriangle_mE5E0727E61408F6660F8523E486B325CD14D028A (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_pt, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_v1, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_v2, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___3_v3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float G_B3_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B2_0 = 0.0f;
	int32_t G_B4_0 = 0;
	float G_B4_1 = 0.0f;
	int32_t G_B8_0 = 0;
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_pt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___1_v1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___2_v2;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = ModuleHandle_Sign_m2A3FE8C13958F68CA76C2F1A510C4B90ED9168F1(L_0, L_1, L_2, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_pt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___2_v2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___3_v3;
		float L_7;
		L_7 = ModuleHandle_Sign_m2A3FE8C13958F68CA76C2F1A510C4B90ED9168F1(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = ___0_pt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9 = ___3_v3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10 = ___1_v1;
		float L_11;
		L_11 = ModuleHandle_Sign_m2A3FE8C13958F68CA76C2F1A510C4B90ED9168F1(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		float L_12 = L_3;
		if ((((float)L_12) < ((float)(0.0f))))
		{
			G_B3_0 = L_12;
			goto IL_0034;
		}
		G_B1_0 = L_12;
	}
	{
		float L_13 = V_0;
		if ((((float)L_13) < ((float)(0.0f))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0034;
		}
		G_B2_0 = G_B1_0;
	}
	{
		float L_14 = V_1;
		G_B4_0 = ((((float)L_14) < ((float)(0.0f)))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0035:
	{
		V_2 = (bool)G_B4_0;
		if ((((float)G_B4_1) > ((float)(0.0f))))
		{
			goto IL_004f;
		}
	}
	{
		float L_15 = V_0;
		if ((((float)L_15) > ((float)(0.0f))))
		{
			goto IL_004f;
		}
	}
	{
		float L_16 = V_1;
		G_B8_0 = ((((float)L_16) > ((float)(0.0f)))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B8_0 = 1;
	}

IL_0050:
	{
		V_3 = (bool)G_B8_0;
		bool L_17 = V_2;
		bool L_18 = V_3;
		return (bool)((((int32_t)((int32_t)((int32_t)L_17&(int32_t)L_18))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleHandle_IsInsideTriangleApproximate_m857F51A8532FE7F8F81A1439E79F3A11D5BF0CD6 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_pt, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_v1, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_v2, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___3_v3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___1_v1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___2_v2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___3_v3;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4(L_0, L_1, L_2, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_pt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___1_v1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___2_v2;
		float L_7;
		L_7 = ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = ___0_pt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9 = ___2_v2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10 = ___3_v3;
		float L_11;
		L_11 = ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = ___0_pt;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_13 = ___3_v3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14 = ___1_v1;
		float L_15;
		L_15 = ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4(L_12, L_13, L_14, NULL);
		V_2 = L_15;
		V_3 = (1.11022302E-16f);
		float L_16 = V_0;
		float L_17 = V_1;
		float L_18 = V_2;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_16, L_17)), L_18)))));
		float L_20 = V_3;
		return (bool)((((float)L_19) < ((float)L_20))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleHandle_IsInsideCircle_m5DB9909A76433AC967E655FA2FE550020079D780 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_a, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_b, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___2_c, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___3_p, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_a;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___0_a;
		float L_2;
		L_2 = math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline(L_0, L_1, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_3 = ___1_b;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___1_b;
		float L_5;
		L_5 = math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline(L_3, L_4, NULL);
		V_0 = L_5;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___2_c;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = ___2_c;
		float L_8;
		L_8 = math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline(L_6, L_7, NULL);
		V_1 = L_8;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9 = ___0_a;
		float L_10 = L_9.___x;
		V_2 = L_10;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11 = ___0_a;
		float L_12 = L_11.___y;
		V_3 = L_12;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_13 = ___1_b;
		float L_14 = L_13.___x;
		V_4 = L_14;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15 = ___1_b;
		float L_16 = L_15.___y;
		V_5 = L_16;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17 = ___2_c;
		float L_18 = L_17.___x;
		V_6 = L_18;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_19 = ___2_c;
		float L_20 = L_19.___y;
		V_7 = L_20;
		float L_21 = L_2;
		float L_22 = V_7;
		float L_23 = V_5;
		float L_24 = V_0;
		float L_25 = V_3;
		float L_26 = V_7;
		float L_27 = V_1;
		float L_28 = V_5;
		float L_29 = V_3;
		float L_30 = V_2;
		float L_31 = V_7;
		float L_32 = V_5;
		float L_33 = V_4;
		float L_34 = V_3;
		float L_35 = V_7;
		float L_36 = V_6;
		float L_37 = V_5;
		float L_38 = V_3;
		V_8 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_subtract(L_22, L_23)))), ((float)il2cpp_codegen_multiply(L_24, ((float)il2cpp_codegen_subtract(L_25, L_26)))))), ((float)il2cpp_codegen_multiply(L_27, ((float)il2cpp_codegen_subtract(L_28, L_29))))))/((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_30, ((float)il2cpp_codegen_subtract(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_33, ((float)il2cpp_codegen_subtract(L_34, L_35)))))), ((float)il2cpp_codegen_multiply(L_36, ((float)il2cpp_codegen_subtract(L_37, L_38))))))));
		float L_39 = V_6;
		float L_40 = V_4;
		float L_41 = V_0;
		float L_42 = V_2;
		float L_43 = V_6;
		float L_44 = V_1;
		float L_45 = V_4;
		float L_46 = V_2;
		float L_47 = V_3;
		float L_48 = V_6;
		float L_49 = V_4;
		float L_50 = V_5;
		float L_51 = V_2;
		float L_52 = V_6;
		float L_53 = V_7;
		float L_54 = V_4;
		float L_55 = V_2;
		V_9 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, ((float)il2cpp_codegen_subtract(L_39, L_40)))), ((float)il2cpp_codegen_multiply(L_41, ((float)il2cpp_codegen_subtract(L_42, L_43)))))), ((float)il2cpp_codegen_multiply(L_44, ((float)il2cpp_codegen_subtract(L_45, L_46))))))/((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_47, ((float)il2cpp_codegen_subtract(L_48, L_49)))), ((float)il2cpp_codegen_multiply(L_50, ((float)il2cpp_codegen_subtract(L_51, L_52)))))), ((float)il2cpp_codegen_multiply(L_53, ((float)il2cpp_codegen_subtract(L_54, L_55))))))));
		il2cpp_codegen_initobj((&V_10), sizeof(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA));
		float L_56 = V_8;
		(&V_10)->___x = ((float)(L_56/(2.0f)));
		float L_57 = V_9;
		(&V_10)->___y = ((float)(L_57/(2.0f)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_58 = ___0_a;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_59 = V_10;
		float L_60;
		L_60 = math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline(L_58, L_59, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_61 = ___3_p;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_62 = V_10;
		float L_63;
		L_63 = math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline(L_61, L_62, NULL);
		V_11 = L_63;
		float L_64 = V_11;
		return (bool)((((float)((float)il2cpp_codegen_subtract(L_60, L_64))) > ((float)(9.99999975E-06f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_BuildTriangles_mD6A98AB9B2DD595D042196B675EFBD00A8CA2DFC (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_vertices, int32_t ___1_vertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_indices, int32_t ___3_indexCount, NativeArray_1_t3FECF0DA96110F272EFBED08317E94C449DE9123* ___4_triangles, int32_t* ___5_triangleCount, float* ___6_maxArea, float* ___7_avgArea, float* ___8_minArea, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		goto IL_00d1;
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547));
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, L_0);
		V_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_3 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_4, 2)));
		V_4 = L_5;
		int32_t L_6 = V_2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_6);
		(&V_1)->___va = L_7;
		int32_t L_8 = V_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_8);
		(&V_1)->___vb = L_9;
		int32_t L_10 = V_4;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_10);
		(&V_1)->___vc = L_11;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC L_13;
		L_13 = ModuleHandle_CircumCircle_m74CD844316D22901FA11DDFA9880D477AAA0722F(L_12, NULL);
		(&V_1)->___c = L_13;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_14 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15 = L_14.___va;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_16 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17 = L_16.___vb;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_18 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_19 = L_18.___vc;
		float L_20;
		L_20 = ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4(L_15, L_17, L_19, NULL);
		(&V_1)->___area = L_20;
		float* L_21 = ___6_maxArea;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_22 = V_1;
		float L_23 = L_22.___area;
		float* L_24 = ___6_maxArea;
		float L_25 = *((float*)L_24);
		float L_26;
		L_26 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_23, L_25, NULL);
		*((float*)L_21) = (float)L_26;
		float* L_27 = ___8_minArea;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_28 = V_1;
		float L_29 = L_28.___area;
		float* L_30 = ___8_minArea;
		float L_31 = *((float*)L_30);
		float L_32;
		L_32 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_29, L_31, NULL);
		*((float*)L_27) = (float)L_32;
		float* L_33 = ___7_avgArea;
		float* L_34 = ___7_avgArea;
		float L_35 = *((float*)L_34);
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_36 = V_1;
		float L_37 = L_36.___area;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add(L_35, L_37));
		NativeArray_1_t3FECF0DA96110F272EFBED08317E94C449DE9123* L_38 = ___4_triangles;
		int32_t* L_39 = ___5_triangleCount;
		int32_t* L_40 = ___5_triangleCount;
		int32_t L_41 = *((int32_t*)L_40);
		V_5 = L_41;
		int32_t L_42 = V_5;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_5;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_44 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547, (L_38)->___m_Buffer, L_43, (L_44));
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 3));
	}

IL_00d1:
	{
		int32_t L_46 = V_0;
		int32_t L_47 = ___3_indexCount;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0007;
		}
	}
	{
		float* L_48 = ___7_avgArea;
		float* L_49 = ___7_avgArea;
		float L_50 = *((float*)L_49);
		int32_t* L_51 = ___5_triangleCount;
		int32_t L_52 = *((int32_t*)L_51);
		*((float*)L_48) = (float)((float)(L_50/((float)L_52)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_BuildTriangles_m6234B1C0C2B49C85551535F8CD0805845C03CAAC (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_vertices, int32_t ___1_vertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_indices, int32_t ___3_indexCount, NativeArray_1_t3FECF0DA96110F272EFBED08317E94C449DE9123* ___4_triangles, int32_t* ___5_triangleCount, float* ___6_maxArea, float* ___7_avgArea, float* ___8_minArea, float* ___9_maxEdge, float* ___10_avgEdge, float* ___11_minEdge, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		goto IL_0173;
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547));
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, L_0);
		V_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_3 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_4, 2)));
		V_4 = L_5;
		int32_t L_6 = V_2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_6);
		(&V_1)->___va = L_7;
		int32_t L_8 = V_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_8);
		(&V_1)->___vb = L_9;
		int32_t L_10 = V_4;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_10);
		(&V_1)->___vc = L_11;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC L_13;
		L_13 = ModuleHandle_CircumCircle_m74CD844316D22901FA11DDFA9880D477AAA0722F(L_12, NULL);
		(&V_1)->___c = L_13;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_14 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15 = L_14.___va;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_16 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17 = L_16.___vb;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_18 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_19 = L_18.___vc;
		float L_20;
		L_20 = ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4(L_15, L_17, L_19, NULL);
		(&V_1)->___area = L_20;
		float* L_21 = ___6_maxArea;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_22 = V_1;
		float L_23 = L_22.___area;
		float* L_24 = ___6_maxArea;
		float L_25 = *((float*)L_24);
		float L_26;
		L_26 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_23, L_25, NULL);
		*((float*)L_21) = (float)L_26;
		float* L_27 = ___8_minArea;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_28 = V_1;
		float L_29 = L_28.___area;
		float* L_30 = ___8_minArea;
		float L_31 = *((float*)L_30);
		float L_32;
		L_32 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_29, L_31, NULL);
		*((float*)L_27) = (float)L_32;
		float* L_33 = ___7_avgArea;
		float* L_34 = ___7_avgArea;
		float L_35 = *((float*)L_34);
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_36 = V_1;
		float L_37 = L_36.___area;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add(L_35, L_37));
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_38 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_39 = L_38.___va;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_40 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_41 = L_40.___vb;
		float L_42;
		L_42 = math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline(L_39, L_41, NULL);
		V_5 = L_42;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_43 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_44 = L_43.___vb;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_45 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_46 = L_45.___vc;
		float L_47;
		L_47 = math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline(L_44, L_46, NULL);
		V_6 = L_47;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_48 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_49 = L_48.___vc;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_50 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_51 = L_50.___va;
		float L_52;
		L_52 = math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline(L_49, L_51, NULL);
		V_7 = L_52;
		float* L_53 = ___9_maxEdge;
		float L_54 = V_5;
		float* L_55 = ___9_maxEdge;
		float L_56 = *((float*)L_55);
		float L_57;
		L_57 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_54, L_56, NULL);
		*((float*)L_53) = (float)L_57;
		float* L_58 = ___9_maxEdge;
		float L_59 = V_6;
		float* L_60 = ___9_maxEdge;
		float L_61 = *((float*)L_60);
		float L_62;
		L_62 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_59, L_61, NULL);
		*((float*)L_58) = (float)L_62;
		float* L_63 = ___9_maxEdge;
		float L_64 = V_7;
		float* L_65 = ___9_maxEdge;
		float L_66 = *((float*)L_65);
		float L_67;
		L_67 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_64, L_66, NULL);
		*((float*)L_63) = (float)L_67;
		float* L_68 = ___11_minEdge;
		float L_69 = V_5;
		float* L_70 = ___11_minEdge;
		float L_71 = *((float*)L_70);
		float L_72;
		L_72 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_69, L_71, NULL);
		*((float*)L_68) = (float)L_72;
		float* L_73 = ___11_minEdge;
		float L_74 = V_6;
		float* L_75 = ___11_minEdge;
		float L_76 = *((float*)L_75);
		float L_77;
		L_77 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_74, L_76, NULL);
		*((float*)L_73) = (float)L_77;
		float* L_78 = ___11_minEdge;
		float L_79 = V_7;
		float* L_80 = ___11_minEdge;
		float L_81 = *((float*)L_80);
		float L_82;
		L_82 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_79, L_81, NULL);
		*((float*)L_78) = (float)L_82;
		float* L_83 = ___10_avgEdge;
		float* L_84 = ___10_avgEdge;
		float L_85 = *((float*)L_84);
		float L_86 = V_5;
		*((float*)L_83) = (float)((float)il2cpp_codegen_add(L_85, L_86));
		float* L_87 = ___10_avgEdge;
		float* L_88 = ___10_avgEdge;
		float L_89 = *((float*)L_88);
		float L_90 = V_6;
		*((float*)L_87) = (float)((float)il2cpp_codegen_add(L_89, L_90));
		float* L_91 = ___10_avgEdge;
		float* L_92 = ___10_avgEdge;
		float L_93 = *((float*)L_92);
		float L_94 = V_7;
		*((float*)L_91) = (float)((float)il2cpp_codegen_add(L_93, L_94));
		NativeArray_1_t3FECF0DA96110F272EFBED08317E94C449DE9123* L_95 = ___4_triangles;
		int32_t* L_96 = ___5_triangleCount;
		int32_t* L_97 = ___5_triangleCount;
		int32_t L_98 = *((int32_t*)L_97);
		V_8 = L_98;
		int32_t L_99 = V_8;
		*((int32_t*)L_96) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		int32_t L_100 = V_8;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_101 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547, (L_95)->___m_Buffer, L_100, (L_101));
		int32_t L_102 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_102, 3));
	}

IL_0173:
	{
		int32_t L_103 = V_0;
		int32_t L_104 = ___3_indexCount;
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_0007;
		}
	}
	{
		float* L_105 = ___7_avgArea;
		float* L_106 = ___7_avgArea;
		float L_107 = *((float*)L_106);
		int32_t* L_108 = ___5_triangleCount;
		int32_t L_109 = *((int32_t*)L_108);
		*((float*)L_105) = (float)((float)(L_107/((float)L_109)));
		float* L_110 = ___10_avgEdge;
		float* L_111 = ___10_avgEdge;
		float L_112 = *((float*)L_111);
		int32_t L_113 = ___3_indexCount;
		*((float*)L_110) = (float)((float)(L_112/((float)L_113)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_BuildTrianglesAndEdges_m27E981150B7C706432B2B0289D171292848DD602 (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_vertices, int32_t ___1_vertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_indices, int32_t ___3_indexCount, NativeArray_1_t3FECF0DA96110F272EFBED08317E94C449DE9123* ___4_triangles, int32_t* ___5_triangleCount, NativeArray_1_tBCDB44165F65D6BEE48CAD34C04286D158C1A200* ___6_delaEdges, int32_t* ___7_delaEdgeCount, float* ___8_maxArea, float* ___9_avgArea, float* ___10_minArea, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		goto IL_0169;
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547));
		int32_t L_0 = V_0;
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, L_0);
		V_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_3 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&___2_indices))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_4, 2)));
		V_4 = L_5;
		int32_t L_6 = V_2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_6);
		(&V_1)->___va = L_7;
		int32_t L_8 = V_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_8);
		(&V_1)->___vb = L_9;
		int32_t L_10 = V_4;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_vertices))->___m_Buffer, L_10);
		(&V_1)->___vc = L_11;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		UCircle_t3F55D3F02B7E6987B939EB2283AE4ED0800E6CFC L_13;
		L_13 = ModuleHandle_CircumCircle_m74CD844316D22901FA11DDFA9880D477AAA0722F(L_12, NULL);
		(&V_1)->___c = L_13;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_14 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15 = L_14.___va;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_16 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17 = L_16.___vb;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_18 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_19 = L_18.___vc;
		float L_20;
		L_20 = ModuleHandle_TriangleArea_mB975E204C8246F28F6D0FFC2816EA77071094CD4(L_15, L_17, L_19, NULL);
		(&V_1)->___area = L_20;
		float* L_21 = ___8_maxArea;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_22 = V_1;
		float L_23 = L_22.___area;
		float* L_24 = ___8_maxArea;
		float L_25 = *((float*)L_24);
		float L_26;
		L_26 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_23, L_25, NULL);
		*((float*)L_21) = (float)L_26;
		float* L_27 = ___10_minArea;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_28 = V_1;
		float L_29 = L_28.___area;
		float* L_30 = ___10_minArea;
		float L_31 = *((float*)L_30);
		float L_32;
		L_32 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_29, L_31, NULL);
		*((float*)L_27) = (float)L_32;
		float* L_33 = ___9_avgArea;
		float* L_34 = ___9_avgArea;
		float L_35 = *((float*)L_34);
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_36 = V_1;
		float L_37 = L_36.___area;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add(L_35, L_37));
		int32_t L_38 = V_2;
		int32_t L_39 = V_3;
		int32_t L_40 = V_4;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_41;
		memset((&L_41), 0, sizeof(L_41));
		int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline((&L_41), L_38, L_39, L_40, NULL);
		(&V_1)->___indices = L_41;
		NativeArray_1_tBCDB44165F65D6BEE48CAD34C04286D158C1A200* L_42 = ___6_delaEdges;
		int32_t* L_43 = ___7_delaEdgeCount;
		int32_t* L_44 = ___7_delaEdgeCount;
		int32_t L_45 = *((int32_t*)L_44);
		V_5 = L_45;
		int32_t L_46 = V_5;
		*((int32_t*)L_43) = (int32_t)((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		int32_t L_48 = V_2;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(L_48, L_49, NULL);
		int32_t L_51 = V_2;
		int32_t L_52 = V_3;
		int32_t L_53;
		L_53 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_51, L_52, NULL);
		int32_t* L_54 = ___5_triangleCount;
		int32_t L_55 = *((int32_t*)L_54);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_56;
		memset((&L_56), 0, sizeof(L_56));
		int4__ctor_m4E8D71A09721E26F7FCCE82EA8AD699062EE6216_inline((&L_56), L_50, L_53, L_55, (-1), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int4_tBA77D4945786DE82C3A487B33955EA1004996052, (L_42)->___m_Buffer, L_47, (L_56));
		NativeArray_1_tBCDB44165F65D6BEE48CAD34C04286D158C1A200* L_57 = ___6_delaEdges;
		int32_t* L_58 = ___7_delaEdgeCount;
		int32_t* L_59 = ___7_delaEdgeCount;
		int32_t L_60 = *((int32_t*)L_59);
		V_5 = L_60;
		int32_t L_61 = V_5;
		*((int32_t*)L_58) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_5;
		int32_t L_63 = V_3;
		int32_t L_64 = V_4;
		int32_t L_65;
		L_65 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(L_63, L_64, NULL);
		int32_t L_66 = V_3;
		int32_t L_67 = V_4;
		int32_t L_68;
		L_68 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_66, L_67, NULL);
		int32_t* L_69 = ___5_triangleCount;
		int32_t L_70 = *((int32_t*)L_69);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_71;
		memset((&L_71), 0, sizeof(L_71));
		int4__ctor_m4E8D71A09721E26F7FCCE82EA8AD699062EE6216_inline((&L_71), L_65, L_68, L_70, (-1), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int4_tBA77D4945786DE82C3A487B33955EA1004996052, (L_57)->___m_Buffer, L_62, (L_71));
		NativeArray_1_tBCDB44165F65D6BEE48CAD34C04286D158C1A200* L_72 = ___6_delaEdges;
		int32_t* L_73 = ___7_delaEdgeCount;
		int32_t* L_74 = ___7_delaEdgeCount;
		int32_t L_75 = *((int32_t*)L_74);
		V_5 = L_75;
		int32_t L_76 = V_5;
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_add(L_76, 1));
		int32_t L_77 = V_5;
		int32_t L_78 = V_4;
		int32_t L_79 = V_2;
		int32_t L_80;
		L_80 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(L_78, L_79, NULL);
		int32_t L_81 = V_4;
		int32_t L_82 = V_2;
		int32_t L_83;
		L_83 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(L_81, L_82, NULL);
		int32_t* L_84 = ___5_triangleCount;
		int32_t L_85 = *((int32_t*)L_84);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_86;
		memset((&L_86), 0, sizeof(L_86));
		int4__ctor_m4E8D71A09721E26F7FCCE82EA8AD699062EE6216_inline((&L_86), L_80, L_83, L_85, (-1), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int4_tBA77D4945786DE82C3A487B33955EA1004996052, (L_72)->___m_Buffer, L_77, (L_86));
		NativeArray_1_t3FECF0DA96110F272EFBED08317E94C449DE9123* L_87 = ___4_triangles;
		int32_t* L_88 = ___5_triangleCount;
		int32_t* L_89 = ___5_triangleCount;
		int32_t L_90 = *((int32_t*)L_89);
		V_5 = L_90;
		int32_t L_91 = V_5;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add(L_91, 1));
		int32_t L_92 = V_5;
		UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547 L_93 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(UTriangle_t4AE58A93753064D88E46927E12725F5BCD799547, (L_87)->___m_Buffer, L_92, (L_93));
		int32_t L_94 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_94, 3));
	}

IL_0169:
	{
		int32_t L_95 = V_0;
		int32_t L_96 = ___3_indexCount;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_0007;
		}
	}
	{
		float* L_97 = ___9_avgArea;
		float* L_98 = ___9_avgArea;
		float L_99 = *((float*)L_98);
		int32_t* L_100 = ___5_triangleCount;
		int32_t L_101 = *((int32_t*)L_100);
		*((float*)L_97) = (float)((float)(L_99/((float)L_101)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_CopyGraph_mD2417E59077CE579091AC05BEC315E4FBD802054 (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_srcPoints, int32_t ___1_srcPointCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___2_dstPoints, int32_t* ___3_dstPointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___4_srcEdges, int32_t ___5_srcEdgeCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___6_dstEdges, int32_t* ___7_dstEdgeCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___7_dstEdgeCount;
		int32_t L_1 = ___5_srcEdgeCount;
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___3_dstPointCount;
		int32_t L_3 = ___1_srcPointCount;
		*((int32_t*)L_2) = (int32_t)L_3;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_4 = ___4_srcEdges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_5 = ___6_dstEdges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_6 = (*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_5);
		int32_t L_7 = ___5_srcEdgeCount;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856(L_4, L_6, L_7, ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_8 = ___0_srcPoints;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_9 = ___2_dstPoints;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_10 = (*(NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E*)L_9);
		int32_t L_11 = ___1_srcPointCount;
		ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5(L_8, L_10, L_11, ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_CopyGeometry_mBB391F8676ADD633B9B0A4F64001B689F055B3D0 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_srcIndices, int32_t ___1_srcIndexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___2_dstIndices, int32_t* ___3_dstIndexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___4_srcVertices, int32_t ___5_srcVertexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___6_dstVertices, int32_t* ___7_dstVertexCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___3_dstIndexCount;
		int32_t L_1 = ___1_srcIndexCount;
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___7_dstVertexCount;
		int32_t L_3 = ___5_srcVertexCount;
		*((int32_t*)L_2) = (int32_t)L_3;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4 = ___0_srcIndices;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_5 = ___2_dstIndices;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_6 = (*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_5);
		int32_t L_7 = ___1_srcIndexCount;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2(L_4, L_6, L_7, ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2_RuntimeMethod_var);
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_8 = ___4_srcVertices;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_9 = ___6_dstVertices;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_10 = (*(NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E*)L_9);
		int32_t L_11 = ___5_srcVertexCount;
		ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5(L_8, L_10, L_11, ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_TransferOutput_mE769E946634074513DB462A6E244FD843ED2135C (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___0_srcEdges, int32_t ___1_srcEdgeCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___2_dstEdges, int32_t* ___3_dstEdgeCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___4_srcIndices, int32_t ___5_srcIndexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___6_dstIndices, int32_t* ___7_dstIndexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___8_srcVertices, int32_t ___9_srcVertexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___10_dstVertices, int32_t* ___11_dstVertexCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = ___3_dstEdgeCount;
		int32_t L_1 = ___1_srcEdgeCount;
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___7_dstIndexCount;
		int32_t L_3 = ___5_srcIndexCount;
		*((int32_t*)L_2) = (int32_t)L_3;
		int32_t* L_4 = ___11_dstVertexCount;
		int32_t L_5 = ___9_srcVertexCount;
		*((int32_t*)L_4) = (int32_t)L_5;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_6 = ___0_srcEdges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_7 = ___2_dstEdges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_8 = (*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_7);
		int32_t L_9 = ___1_srcEdgeCount;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856(L_6, L_8, L_9, ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10 = ___4_srcIndices;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_11 = ___6_dstIndices;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_12 = (*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_11);
		int32_t L_13 = ___5_srcIndexCount;
		ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2(L_10, L_12, L_13, ModuleHandle_Copy_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEC29D78A711D5A6B69C7A531ABAA5DE9BAF9BAB2_RuntimeMethod_var);
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_14 = ___8_srcVertices;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_15 = ___10_dstVertices;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_16 = (*(NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E*)L_15);
		int32_t L_17 = ___9_srcVertexCount;
		ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5(L_14, L_16, L_17, ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_GraphConditioner_m322541485AFCB09F1FDF3609BECCB093D0DA138E (NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___0_points, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___1_pgPoints, int32_t* ___2_pgPointCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___3_pgEdges, int32_t* ___4_pgEdgeCount, bool ___5_resetTopology, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_1;
	memset((&V_1), 0, sizeof(V_1));
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t* G_B5_0 = NULL;
	int32_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	int32_t* G_B6_1 = NULL;
	{
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&V_0), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields*)il2cpp_codegen_static_fields_for(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_il2cpp_TypeInfo_var))->___zero;
		V_1 = L_0;
		V_5 = 0;
		goto IL_0042;
	}

IL_001c:
	{
		int32_t L_1 = V_5;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_1);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_3 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4;
		L_4 = math_min_m68ED612C41E325FA3446050EA04D0AC0CD191558_inline(L_2, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_5;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, ((&___0_points))->___m_Buffer, L_5);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8;
		L_8 = math_max_mFD64D6399932C2D91018BA7895C06FD055E1361B_inline(L_6, L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0042:
	{
		int32_t L_10 = V_5;
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_points))->___m_Length);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001c;
		}
	}
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_13 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14;
		L_14 = float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline(L_12, L_13, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15;
		L_15 = float2_op_Multiply_m34D03129CE0D7AD665A914DE83CB749585B2455F_inline(L_14, (0.5f), NULL);
		V_2 = L_15;
		V_3 = (9.99999975E-05f);
		int32_t* L_16 = ___2_pgPointCount;
		bool L_17 = ___5_resetTopology;
		if (L_17)
		{
			G_B5_0 = L_16;
			goto IL_006e;
		}
		G_B4_0 = L_16;
	}
	{
		int32_t* L_18 = ___2_pgPointCount;
		int32_t L_19 = *((int32_t*)L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B4_0;
		goto IL_006f;
	}

IL_006e:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_006f:
	{
		*((int32_t*)G_B6_1) = (int32_t)G_B6_0;
		int32_t* L_20 = ___2_pgPointCount;
		int32_t L_21 = *((int32_t*)L_20);
		V_4 = L_21;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_22 = ___1_pgPoints;
		int32_t* L_23 = ___2_pgPointCount;
		int32_t* L_24 = ___2_pgPointCount;
		int32_t L_25 = *((int32_t*)L_24);
		V_6 = L_25;
		int32_t L_26 = V_6;
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_28 = V_0;
		float L_29 = L_28.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_30 = V_0;
		float L_31 = L_30.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_32;
		memset((&L_32), 0, sizeof(L_32));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_32), L_29, L_31, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_22)->___m_Buffer, L_27, (L_32));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_33 = ___1_pgPoints;
		int32_t* L_34 = ___2_pgPointCount;
		int32_t* L_35 = ___2_pgPointCount;
		int32_t L_36 = *((int32_t*)L_35);
		V_6 = L_36;
		int32_t L_37 = V_6;
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_39 = V_0;
		float L_40 = L_39.___x;
		float L_41 = V_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_42 = V_0;
		float L_43 = L_42.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_44 = V_2;
		float L_45 = L_44.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_46;
		memset((&L_46), 0, sizeof(L_46));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_46), ((float)il2cpp_codegen_subtract(L_40, L_41)), ((float)il2cpp_codegen_add(L_43, L_45)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_33)->___m_Buffer, L_38, (L_46));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_47 = ___1_pgPoints;
		int32_t* L_48 = ___2_pgPointCount;
		int32_t* L_49 = ___2_pgPointCount;
		int32_t L_50 = *((int32_t*)L_49);
		V_6 = L_50;
		int32_t L_51 = V_6;
		*((int32_t*)L_48) = (int32_t)((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_53 = V_0;
		float L_54 = L_53.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_55 = V_1;
		float L_56 = L_55.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_57;
		memset((&L_57), 0, sizeof(L_57));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_57), L_54, L_56, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_47)->___m_Buffer, L_52, (L_57));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_58 = ___1_pgPoints;
		int32_t* L_59 = ___2_pgPointCount;
		int32_t* L_60 = ___2_pgPointCount;
		int32_t L_61 = *((int32_t*)L_60);
		V_6 = L_61;
		int32_t L_62 = V_6;
		*((int32_t*)L_59) = (int32_t)((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_63 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_64 = V_0;
		float L_65 = L_64.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_66 = V_2;
		float L_67 = L_66.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_68 = V_1;
		float L_69 = L_68.___y;
		float L_70 = V_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_71;
		memset((&L_71), 0, sizeof(L_71));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_71), ((float)il2cpp_codegen_add(L_65, L_67)), ((float)il2cpp_codegen_add(L_69, L_70)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_58)->___m_Buffer, L_63, (L_71));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_72 = ___1_pgPoints;
		int32_t* L_73 = ___2_pgPointCount;
		int32_t* L_74 = ___2_pgPointCount;
		int32_t L_75 = *((int32_t*)L_74);
		V_6 = L_75;
		int32_t L_76 = V_6;
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_add(L_76, 1));
		int32_t L_77 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_78 = V_1;
		float L_79 = L_78.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_80 = V_1;
		float L_81 = L_80.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_82;
		memset((&L_82), 0, sizeof(L_82));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_82), L_79, L_81, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_72)->___m_Buffer, L_77, (L_82));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_83 = ___1_pgPoints;
		int32_t* L_84 = ___2_pgPointCount;
		int32_t* L_85 = ___2_pgPointCount;
		int32_t L_86 = *((int32_t*)L_85);
		V_6 = L_86;
		int32_t L_87 = V_6;
		*((int32_t*)L_84) = (int32_t)((int32_t)il2cpp_codegen_add(L_87, 1));
		int32_t L_88 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_89 = V_1;
		float L_90 = L_89.___x;
		float L_91 = V_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_92 = V_0;
		float L_93 = L_92.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_94 = V_2;
		float L_95 = L_94.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_96;
		memset((&L_96), 0, sizeof(L_96));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_96), ((float)il2cpp_codegen_add(L_90, L_91)), ((float)il2cpp_codegen_add(L_93, L_95)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_83)->___m_Buffer, L_88, (L_96));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_97 = ___1_pgPoints;
		int32_t* L_98 = ___2_pgPointCount;
		int32_t* L_99 = ___2_pgPointCount;
		int32_t L_100 = *((int32_t*)L_99);
		V_6 = L_100;
		int32_t L_101 = V_6;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_101, 1));
		int32_t L_102 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_103 = V_1;
		float L_104 = L_103.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_105 = V_0;
		float L_106 = L_105.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_107;
		memset((&L_107), 0, sizeof(L_107));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_107), L_104, L_106, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_97)->___m_Buffer, L_102, (L_107));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_108 = ___1_pgPoints;
		int32_t* L_109 = ___2_pgPointCount;
		int32_t* L_110 = ___2_pgPointCount;
		int32_t L_111 = *((int32_t*)L_110);
		V_6 = L_111;
		int32_t L_112 = V_6;
		*((int32_t*)L_109) = (int32_t)((int32_t)il2cpp_codegen_add(L_112, 1));
		int32_t L_113 = V_6;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_114 = V_0;
		float L_115 = L_114.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_116 = V_2;
		float L_117 = L_116.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_118 = V_0;
		float L_119 = L_118.___y;
		float L_120 = V_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_121;
		memset((&L_121), 0, sizeof(L_121));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_121), ((float)il2cpp_codegen_add(L_115, L_117)), ((float)il2cpp_codegen_subtract(L_119, L_120)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_108)->___m_Buffer, L_113, (L_121));
		int32_t* L_122 = ___4_pgEdgeCount;
		*((int32_t*)L_122) = (int32_t)8;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_123 = ___3_pgEdges;
		int32_t L_124 = V_4;
		int32_t L_125 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_126;
		memset((&L_126), 0, sizeof(L_126));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_126), L_124, ((int32_t)il2cpp_codegen_add(L_125, 1)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_123)->___m_Buffer, 0, (L_126));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_127 = ___3_pgEdges;
		int32_t L_128 = V_4;
		int32_t L_129 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_130;
		memset((&L_130), 0, sizeof(L_130));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_130), ((int32_t)il2cpp_codegen_add(L_128, 1)), ((int32_t)il2cpp_codegen_add(L_129, 2)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_127)->___m_Buffer, 1, (L_130));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_131 = ___3_pgEdges;
		int32_t L_132 = V_4;
		int32_t L_133 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_134;
		memset((&L_134), 0, sizeof(L_134));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_134), ((int32_t)il2cpp_codegen_add(L_132, 2)), ((int32_t)il2cpp_codegen_add(L_133, 3)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_131)->___m_Buffer, 2, (L_134));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_135 = ___3_pgEdges;
		int32_t L_136 = V_4;
		int32_t L_137 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_138;
		memset((&L_138), 0, sizeof(L_138));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_138), ((int32_t)il2cpp_codegen_add(L_136, 3)), ((int32_t)il2cpp_codegen_add(L_137, 4)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_135)->___m_Buffer, 3, (L_138));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_139 = ___3_pgEdges;
		int32_t L_140 = V_4;
		int32_t L_141 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_142;
		memset((&L_142), 0, sizeof(L_142));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_142), ((int32_t)il2cpp_codegen_add(L_140, 4)), ((int32_t)il2cpp_codegen_add(L_141, 5)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_139)->___m_Buffer, 4, (L_142));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_143 = ___3_pgEdges;
		int32_t L_144 = V_4;
		int32_t L_145 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_146;
		memset((&L_146), 0, sizeof(L_146));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_146), ((int32_t)il2cpp_codegen_add(L_144, 5)), ((int32_t)il2cpp_codegen_add(L_145, 6)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_143)->___m_Buffer, 5, (L_146));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_147 = ___3_pgEdges;
		int32_t L_148 = V_4;
		int32_t L_149 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_150;
		memset((&L_150), 0, sizeof(L_150));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_150), ((int32_t)il2cpp_codegen_add(L_148, 6)), ((int32_t)il2cpp_codegen_add(L_149, 7)), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_147)->___m_Buffer, 6, (L_150));
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_151 = ___3_pgEdges;
		int32_t L_152 = V_4;
		int32_t L_153 = V_4;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_154;
		memset((&L_154), 0, sizeof(L_154));
		int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline((&L_154), ((int32_t)il2cpp_codegen_add(L_152, 7)), L_153, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, (L_151)->___m_Buffer, 7, (L_154));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Reorder_m40FFFB135A6763AE1ED04125D4AC161FFE65ABFF (int32_t ___0_startVertexCount, int32_t ___1_index, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___2_indices, int32_t* ___3_indexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___4_vertices, int32_t* ___5_vertexCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (bool)0;
		V_1 = 0;
		goto IL_0018;
	}

IL_0006:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = ___2_indices;
		int32_t L_1 = V_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer, L_1);
		int32_t L_3 = ___1_index;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_001d;
	}

IL_0014:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_1;
		int32_t* L_6 = ___3_indexCount;
		int32_t L_7 = *((int32_t*)L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_001d:
	{
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_9 = ___5_vertexCount;
		int32_t* L_10 = ___5_vertexCount;
		int32_t L_11 = *((int32_t*)L_10);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_11, 1));
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_12 = ___4_vertices;
		int32_t L_13 = ___1_index;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_14 = ___4_vertices;
		int32_t* L_15 = ___5_vertexCount;
		int32_t L_16 = *((int32_t*)L_15);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_14)->___m_Buffer, L_16);
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA, (L_12)->___m_Buffer, L_13, (L_17));
		V_2 = 0;
		goto IL_0056;
	}

IL_003e:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_18 = ___2_indices;
		int32_t L_19 = V_2;
		int32_t L_20;
		L_20 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_18)->___m_Buffer, L_19);
		int32_t* L_21 = ___5_vertexCount;
		int32_t L_22 = *((int32_t*)L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_0052;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_23 = ___2_indices;
		int32_t L_24 = V_2;
		int32_t L_25 = ___1_index;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_23)->___m_Buffer, L_24, (L_25));
	}

IL_0052:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0056:
	{
		int32_t L_27 = V_2;
		int32_t* L_28 = ___3_indexCount;
		int32_t L_29 = *((int32_t*)L_28);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_003e;
		}
	}

IL_005b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_VertexCleanupConditioner_m6AC0853FEBD2826F41C6C3115F33D927867676A6 (int32_t ___0_startVertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___1_indices, int32_t* ___2_indexCount, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___3_vertices, int32_t* ___4_vertexCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_startVertexCount;
		V_0 = L_0;
		goto IL_0014;
	}

IL_0004:
	{
		int32_t L_1 = ___0_startVertexCount;
		int32_t L_2 = V_0;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = ___1_indices;
		int32_t* L_4 = ___2_indexCount;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_5 = ___3_vertices;
		int32_t* L_6 = ___4_vertexCount;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_Reorder_m40FFFB135A6763AE1ED04125D4AC161FFE65ABFF(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0014:
	{
		int32_t L_8 = V_0;
		int32_t* L_9 = ___4_vertexCount;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E ModuleHandle_ConvexQuad_m7D9BC4D23333081D14A8044E77AED5FBF01DDFF4 (int32_t ___0_allocator, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_points, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___2_edges, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___3_outVertices, int32_t* ___4_outVertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___5_outIndices, int32_t* ___6_outIndexCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___7_outEdges, int32_t* ___8_outEdgeCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&float4_t89D9A294E7A79BD81BFBDD18654508532958555E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields*)il2cpp_codegen_static_fields_for(float4_t89D9A294E7A79BD81BFBDD18654508532958555E_il2cpp_TypeInfo_var))->___zero;
		V_0 = L_0;
		int32_t* L_1 = ___8_outEdgeCount;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t* L_2 = ___6_outIndexCount;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = ___4_outVertexCount;
		*((int32_t*)L_3) = (int32_t)0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxVertexCount;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = V_0;
		return L_7;
	}

IL_002c:
	{
		V_1 = 0;
		V_2 = 0;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_8 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxEdgeCount;
		int32_t L_9 = ___0_allocator;
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&V_3), L_8, L_9, 1, NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		int32_t L_10 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxVertexCount;
		int32_t L_11 = ___0_allocator;
		NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A((&V_4), L_10, L_11, 1, NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_RuntimeMethod_var);
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_12 = ___1_points;
		ModuleHandle_GraphConditioner_m322541485AFCB09F1FDF3609BECCB093D0DA138E(L_12, (&V_4), (&V_2), (&V_3), (&V_1), (bool)1, NULL);
		int32_t L_13 = ___0_allocator;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_14 = V_4;
		int32_t L_15 = V_2;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_16 = V_3;
		int32_t L_17 = V_1;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_18 = ___3_outVertices;
		int32_t* L_19 = ___4_outVertexCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_20 = ___5_outIndices;
		int32_t* L_21 = ___6_outIndexCount;
		bool L_22;
		L_22 = Tessellator_Tessellate_mE45146D6B03B63F8D23C19B8B3FAF0047300B1AC(L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F((&V_4), NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_RuntimeMethod_var);
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2((&V_3), NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_23 = V_0;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E ModuleHandle_Tessellate_m6AE06111AB2B0B09EC2C846DEF23C1AAA61B968E (int32_t ___0_allocator, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E ___1_points, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___2_edges, NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* ___3_outVertices, int32_t* ___4_outVertexCount, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___5_outIndices, int32_t* ___6_outIndexCount, NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* ___7_outEdges, int32_t* ___8_outEdgeCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&float4_t89D9A294E7A79BD81BFBDD18654508532958555E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields*)il2cpp_codegen_static_fields_for(float4_t89D9A294E7A79BD81BFBDD18654508532958555E_il2cpp_TypeInfo_var))->___zero;
		V_0 = L_0;
		int32_t* L_1 = ___8_outEdgeCount;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t* L_2 = ___6_outIndexCount;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = ___4_outVertexCount;
		*((int32_t*)L_3) = (int32_t)0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxVertexCount;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = V_0;
		return L_7;
	}

IL_002c:
	{
		V_1 = (bool)0;
		V_2 = (bool)0;
		V_3 = 0;
		V_4 = 0;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_edges))->___m_Length);
		int32_t L_9 = ___0_allocator;
		NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13((&V_5), ((int32_t)il2cpp_codegen_multiply(L_8, 8)), L_9, 1, NativeArray_1__ctor_m3CB679B1B77F99FC5CF890F75C914E22555A1F13_RuntimeMethod_var);
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		int32_t L_11 = ___0_allocator;
		NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A((&V_6), ((int32_t)il2cpp_codegen_multiply(L_10, 4)), L_11, 1, NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_RuntimeMethod_var);
		int32_t L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_edges))->___m_Length);
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_13 = ___0_allocator;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_14 = ___1_points;
		int32_t L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_16 = ___2_edges;
		int32_t L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_edges))->___m_Length);
		il2cpp_codegen_runtime_class_init_inline(PlanarGraph_t7364A81B5C32124D53251D8FD1135CC16793E6E0_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = PlanarGraph_Validate_m55816BC6804855F94178B5FDEC284BB63C0ACC88(L_13, L_14, L_15, L_16, L_17, (&V_6), (&V_4), (&V_5), (&V_3), NULL);
		V_1 = L_18;
	}

IL_0081:
	{
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t* L_20 = ___8_outEdgeCount;
		int32_t L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_edges))->___m_Length);
		*((int32_t*)L_20) = (int32_t)L_21;
		int32_t* L_22 = ___4_outVertexCount;
		int32_t L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		*((int32_t*)L_22) = (int32_t)L_23;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_24 = ___2_edges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_25 = ___7_outEdges;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_26 = (*(NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2*)L_25);
		int32_t L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_edges))->___m_Length);
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856(L_24, L_26, L_27, ModuleHandle_Copy_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF35997F769CB8B8D97D360DE0ABEA3248B876856_RuntimeMethod_var);
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_28 = ___1_points;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_29 = ___3_outVertices;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_30 = (*(NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E*)L_29);
		int32_t L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_points))->___m_Length);
		ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5(L_28, L_30, L_31, ModuleHandle_Copy_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m24B74CC1C60CA9F746E96A345E83BDFC58FC41E5_RuntimeMethod_var);
	}

IL_00bf:
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) <= ((int32_t)2)))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_34 = V_4;
		int32_t L_35 = ___0_allocator;
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_7), ((int32_t)il2cpp_codegen_multiply(L_34, 8)), L_35, 1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		int32_t L_36 = V_4;
		int32_t L_37 = ___0_allocator;
		NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A((&V_8), ((int32_t)il2cpp_codegen_multiply(L_36, 4)), L_37, 1, NativeArray_1__ctor_mAF9D0A865FBFFE6364C3073A253711B4C109C67A_RuntimeMethod_var);
		V_9 = 0;
		V_10 = 0;
		int32_t L_38 = ___0_allocator;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_39 = V_6;
		int32_t L_40 = V_4;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_41 = V_5;
		int32_t L_42 = V_3;
		bool L_43;
		L_43 = Tessellator_Tessellate_mE45146D6B03B63F8D23C19B8B3FAF0047300B1AC(L_38, L_39, L_40, L_41, L_42, (&V_8), (&V_10), (&V_7), (&V_9), NULL);
		V_1 = L_43;
		bool L_44 = V_1;
		if (!L_44)
		{
			goto IL_0123;
		}
	}
	{
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 L_45 = V_5;
		int32_t L_46 = V_3;
		NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* L_47 = ___7_outEdges;
		int32_t* L_48 = ___8_outEdgeCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_49 = V_7;
		int32_t L_50 = V_9;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_51 = ___5_outIndices;
		int32_t* L_52 = ___6_outIndexCount;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E L_53 = V_8;
		int32_t L_54 = V_10;
		NativeArray_1_t46D43179C2B71BAB34958401E08B5C5DA4488E9E* L_55 = ___3_outVertices;
		int32_t* L_56 = ___4_outVertexCount;
		il2cpp_codegen_runtime_class_init_inline(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		ModuleHandle_TransferOutput_mE769E946634074513DB462A6E244FD843ED2135C(L_45, L_46, L_47, L_48, L_49, L_50, L_51, L_52, L_53, L_54, L_55, L_56, NULL);
		bool L_57 = V_2;
		if (!L_57)
		{
			goto IL_0123;
		}
	}
	{
		int32_t* L_58 = ___8_outEdgeCount;
		*((int32_t*)L_58) = (int32_t)0;
	}

IL_0123:
	{
		NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F((&V_8), NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_7), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_0131:
	{
		NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F((&V_6), NativeArray_1_Dispose_mAD3B69E4B23316C46AF8C35D7E1E81206323F16F_RuntimeMethod_var);
		NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2((&V_5), NativeArray_1_Dispose_m3135DCFBA5DDC3D2CAA20FB2666F3A996856F2F2_RuntimeMethod_var);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_59 = V_0;
		return L_59;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle__cctor_mBE35D3D252C3BA83B20D8EC431BE1589A144E03D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxArea = ((int32_t)65536);
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxEdgeCount = ((int32_t)65536);
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxIndexCount = ((int32_t)65536);
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxVertexCount = ((int32_t)65536);
		int32_t L_0 = ((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxIndexCount;
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxTriangleCount = ((int32_t)(L_0/3));
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxRefineIterations = ((int32_t)48);
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kMaxSmoothenIterations = ((int32_t)256);
		((ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_StaticFields*)il2cpp_codegen_static_fields_for(ModuleHandle_t254D8E54134BB66FFC346DA3898C7A23C1F4C499_il2cpp_TypeInfo_var))->___kIncrementAreaFactor = (1.20000005f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ShadowMesh2D_get_mesh_m77225D909CD28099B6E8E109DC00111881EC1698_inline (ShadowMesh2D_t301A00F585E8C1843B25C06E21170E1BA56A85BA* __this, const RuntimeMethod* method) 
{
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___m_Mesh;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShadowRendering_set_maxTextureCount_m0E7989731298A22E597B948BD4DDDE84139EFE71_inline (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var);
		((ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_StaticFields*)il2cpp_codegen_static_fields_for(ShadowRendering_t11D2CB7A236611C4DC6F87C3453B1EE18E292E4F_il2cpp_TypeInfo_var))->___U3CmaxTextureCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_projectedShadowMaterial_m2B41EE220BB6CF8F6AFDB4D6B9D5CEE0FB6A1532_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CprojectedShadowMaterialU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_projectedShadowShader_m487E9F13199027ABD59B6DBD21228CD3EAEB345E_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___m_ProjectedShadowShader;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_projectedShadowMaterial_m92F2FF910697148A41C6AEDC5600838FF0F97E79_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CprojectedShadowMaterialU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprojectedShadowMaterialU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_projectedUnshadowMaterial_m850DE00788FCD51337CA3A1B3DF818CED804A93B_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CprojectedUnshadowMaterialU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_projectedUnshadowMaterial_m6A37BE29BC05D7A3FBFC915F43D5E4BCEB43FF85_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CprojectedUnshadowMaterialU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprojectedUnshadowMaterialU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_spriteSelfShadowMaterial_m7436BA5A575F6DF3AA3732E7C7C44ABFD63CDD20_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CspriteSelfShadowMaterialU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_spriteShadowShader_mEE8A51EECAD1865B4CA800B88ACD498A406DC638_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___m_SpriteShadowShader;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_spriteSelfShadowMaterial_mB2B00B1F4E2DEE264AA79B0C2F22BA329095AECD_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CspriteSelfShadowMaterialU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspriteSelfShadowMaterialU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_spriteUnshadowMaterial_m4415A748869AAA64EAC66ED6E1588639DEC52F2F_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CspriteUnshadowMaterialU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_spriteUnshadowShader_m8CF9DD2D555495EDD0743F91C50EED1F58B9DABE_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___m_SpriteUnshadowShader;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_spriteUnshadowMaterial_mD8C9E9C343D025813148B3379D8F1828A423EE2E_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CspriteUnshadowMaterialU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspriteUnshadowMaterialU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_geometrySelfShadowMaterial_mF219386663094A2C9BDC3B4E69EF8112827DC86A_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CgeometrySelfShadowMaterialU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_geometryShadowShader_m34010B53A85C227A4CFF1991A115EC2FDADBAB59_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___m_GeometryShadowShader;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_geometrySelfShadowMaterial_mBCF9BB3E6AD7C14085F5B23ED646430D9CE7B590_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CgeometrySelfShadowMaterialU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometrySelfShadowMaterialU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer2DData_get_geometryUnshadowMaterial_mCBF3F176611E39E5D20A4917440AE0FC5B54E950_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CgeometryUnshadowMaterialU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Renderer2DData_get_geometryUnshadowShader_m22EB7203D804A2692B1F8343C72BDED346E00D2A_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___m_GeometryUnshadowShader;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Renderer2DData_set_geometryUnshadowMaterial_m533C4F9582B0C6E1270E153C9311D139858EC233_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CgeometryUnshadowMaterialU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgeometryUnshadowMaterialU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Max_m9B6D8FEE7F4CE32C0AAB682606FFBA59E1F37C74_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_lhs;
		float L_6 = L_5.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_rhs;
		float L_8 = L_7.___y;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_lhs;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_rhs;
		float L_13 = L_12.___z;
		float L_14;
		L_14 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_4, L_9, L_14, NULL);
		V_0 = L_15;
		goto IL_003c;
	}

IL_003c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Min_m1CAC3499F14EA87366C0C3C1F501B4FB2863CDB4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_1, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_lhs;
		float L_6 = L_5.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_rhs;
		float L_8 = L_7.___y;
		float L_9;
		L_9 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_lhs;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_rhs;
		float L_13 = L_12.___z;
		float L_14;
		L_14 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_4, L_9, L_14, NULL);
		V_0 = L_15;
		goto IL_003c;
	}

IL_003c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_center;
		__this->___m_Center = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (0.5f), NULL);
		__this->___m_Extents = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* ShadowCasterGroup2DManager_get_shadowCasterGroups_mD2D34E88683CFFBE42142BC775F83689D96ADCC7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShadowCasterGroup2DManager_tD4DF649108FFD9B4E2F33AD838D64B91F21D49CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t13A09F599BCA241CD470671AB9ACCA1A82367B37* L_0 = ((ShadowCasterGroup2DManager_tD4DF649108FFD9B4E2F33AD838D64B91F21D49CB_StaticFields*)il2cpp_codegen_static_fields_for(ShadowCasterGroup2DManager_tD4DF649108FFD9B4E2F33AD838D64B91F21D49CB_il2cpp_TypeInfo_var))->___s_ShadowCasterGroups;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* ShadowCasterGroup2D_GetShadowCasters_mDCD74C94A151D61CAC8F53DE3750AD40CBFE51BA_inline (ShadowCasterGroup2D_tE5FDF092B8AD98E6B1740A8C6849F4ABC2EB557D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t765AE77BB36102069217C0CB2BBFF40DB9CDEE0B* L_0 = __this->___m_ShadowCasters;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShadowCaster2D_get_shadowCastingSource_mE28EEAF8CC7C2E234C6CDE2C9B3688189D0F1F7E_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_ShadowCastingSource;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* ShadowCaster2D_get_shadowShape2DProvider_mAF6299D6D50E4B1FC94464BDA5667FBAB2552525_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) 
{
	{
		ShadowShape2DProvider_t1F3F4E0A5018EE73690AF70C6A97CF35A1D01072* L_0 = __this->___m_ShadowShape2DProvider;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ShadowCaster2D_get_shadowShape2DComponent_mE86BE25189D62590E996611DB23634FD253E7901_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) 
{
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->___m_ShadowShape2DComponent;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9_inline (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* __this, const RuntimeMethod* method) 
{
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_0 = __this->___m_NameID;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Renderer2DData_get_lightRenderTextureScale_m6FD4326249B00A168A36C2B314D4C035FEE7CB8F_inline (Renderer2DData_t12A57144E7883136975216C06D579150AF8E21BA* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_LightRenderTextureScale;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CwidthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CheightU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CmsaaSamplesU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CdimensionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_shadowSoftnessFalloffIntensity_m46A7A9E2EC93A73206E76EDC333B62AFB4919326_inline (Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_ShadowSoftnessFalloffIntensity;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShadowCaster2D_get_spriteMaterialCount_m203A04545F355886EE50BFD034BEDEF7377FF021_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_SpriteMaterialCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ShadowCaster2D_get_alphaCutoff_mFAF68B32010B7ACF0D2C0E084D60EBA59BEC7834_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_AlphaCutoff;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ShadowCaster2D_get_castingOption_m11F5F86721E7CABA77996CDFCC3741F3C9A8F9DA_inline (ShadowCaster2D_t0433C37EF230E425BBD540057818C712B19DD500* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_CastingOption;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 Light2D_get_boundingSphere_m1B78AF6A3981BE032C1EE459C109948160B307E0_inline (Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* __this, const RuntimeMethod* method) 
{
	{
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 L_0 = __this->___U3CboundingSphereU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_shadowSoftness_m5127B43BDA9A3C5CD99CF8976D3CE9A0F5A79683_inline (Light2D_t76A34C6BE8F18AE427924700DB6DC26882DA4CAC* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_ShadowSoftness;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool math_isinf_m4901864832BAA489A01E23F560733ACEF6E3ED60_inline (double ___0_x, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_x;
		double L_1;
		L_1 = math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline(L_0, NULL);
		return (bool)((((double)L_1) == ((double)(std::numeric_limits<double>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_abs_mDF669CF3AF2C60713E8E118578461CDA050DAFD0_inline (double ___0_x, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_x;
		uint64_t L_1;
		L_1 = math_asulong_m2CF160E23B5FF618A85C3C29B2FB1C000E40290F_inline(L_0, NULL);
		double L_2;
		L_2 = math_asdouble_m3E7BC790C743E67EA45476AECD6D2D9A9E62E4F2_inline(((int64_t)((int64_t)L_1&((int64_t)(std::numeric_limits<int64_t>::max)()))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int2__ctor_m452D21510717D0961119C89A72BBB8D84DCD49F4_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___x = L_0;
		int32_t L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_distance_m72BEFBAADFC4404FADD3AD81F7EDD40E32624F4D_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_y, const RuntimeMethod* method) 
{
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___1_y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_1 = ___0_x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2;
		L_2 = double2_op_Subtraction_mDAD1E402F52C548544D20D62D7FA098F4F858BC8_inline(L_0, L_1, NULL);
		double L_3;
		L_3 = math_length_mBC9788A14DDEC3FA5794F7F49EDD1516C5EDE4E3_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA math_min_m1D64D6B67B27FD9738D14BCEE6298146CB05CE00_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_y, const RuntimeMethod* method) 
{
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___0_x;
		double L_1 = L_0.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2 = ___1_y;
		double L_3 = L_2.___x;
		double L_4;
		L_4 = math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline(L_1, L_3, NULL);
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_5 = ___0_x;
		double L_6 = L_5.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_7 = ___1_y;
		double L_8 = L_7.___y;
		double L_9;
		L_9 = math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline(L_6, L_8, NULL);
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_10;
		memset((&L_10), 0, sizeof(L_10));
		double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline((&L_10), L_4, L_9, NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Multiply_m34D03129CE0D7AD665A914DE83CB749585B2455F_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float L_2 = ___1_rhs;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_3 = ___0_lhs;
		float L_4 = L_3.___y;
		float L_5 = ___1_rhs;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6;
		memset((&L_6), 0, sizeof(L_6));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA double2_op_Implicit_m168C031549D6C086B7C49ECA5B18C892B3112F17_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_v, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_v;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_1;
		memset((&L_1), 0, sizeof(L_1));
		double2__ctor_m3355A4008574AE2483EAD2841176C67734F10F33_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tessellator_SetAllocator_m66AFC39E8CFBDC82638D7D7BC3BA70CB4B818C96_inline (Tessellator_t2BE64E5F36034B7A8D756B39A1F6380049BFC241* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_allocator;
		__this->___m_Allocator = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		uint32_t L_1;
		L_1 = math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline(L_0, NULL);
		float L_2;
		L_2 = math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline(((int32_t)((int32_t)L_1&((int32_t)2147483647LL))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_pow_m2B2C611A37952CFB13BB0AE800A6A601A2E4A49B_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(((double)((float)L_0)), ((double)((float)L_1)), NULL);
		return ((float)L_2);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mEF31DE7BD0179009683C5D7B0C58E6571B30CF4A_inline (float ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(((double)((float)L_0)));
		return ((float)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_distance_mE5E0FFDD103E710A4CB23360BFCAFD0AF2E1EFA9_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___1_y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___0_x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2;
		L_2 = float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_length_m3DB47D254C8544FBB740A892B4AE2143E8F45634_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_cross_m4CA2DAE150C6381B0D05E8AA9E48E88CF6157180_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline((&___1_y), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2;
		L_2 = float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline(L_0, L_1, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		L_3 = float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline((&___0_x), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___1_y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline(L_3, L_4, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		L_6 = float3_op_Subtraction_mB6036E9849D95650D6E73DA0D179CD7B61E696F2_inline(L_2, L_5, NULL);
		V_0 = L_6;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		L_7 = float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline((&V_0), NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float L_1 = L_0.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_y;
		float L_3 = L_2.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_x;
		float L_5 = L_4.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_y;
		float L_7 = L_6.___y;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_y;
		bool L_1;
		L_1 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___0_x;
		float L_3 = ___1_y;
		if ((((float)L_2) > ((float)L_3)))
		{
			goto IL_000e;
		}
	}
	{
		float L_4 = ___1_y;
		return L_4;
	}

IL_000e:
	{
		float L_5 = ___0_x;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_y;
		bool L_1;
		L_1 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___0_x;
		float L_3 = ___1_y;
		if ((((float)L_2) < ((float)L_3)))
		{
			goto IL_000e;
		}
	}
	{
		float L_4 = ___1_y;
		return L_4;
	}

IL_000e:
	{
		float L_5 = ___0_x;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___x = L_0;
		int32_t L_1 = ___1_y;
		__this->___y = L_1;
		int32_t L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int4__ctor_m4E8D71A09721E26F7FCCE82EA8AD699062EE6216_inline (int4_tBA77D4945786DE82C3A487B33955EA1004996052* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, int32_t ___3_w, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___x = L_0;
		int32_t L_1 = ___1_y;
		__this->___y = L_1;
		int32_t L_2 = ___2_z;
		__this->___z = L_2;
		int32_t L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_min_m68ED612C41E325FA3446050EA04D0AC0CD191558_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float L_1 = L_0.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_y;
		float L_3 = L_2.___x;
		float L_4;
		L_4 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_1, L_3, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___0_x;
		float L_6 = L_5.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = ___1_y;
		float L_8 = L_7.___y;
		float L_9;
		L_9 = math_min_m54FD010BEF505D2BA1F79FC793BEB0723C329C3B_inline(L_6, L_8, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		memset((&L_10), 0, sizeof(L_10));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_10), L_4, L_9, NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_max_mFD64D6399932C2D91018BA7895C06FD055E1361B_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float L_1 = L_0.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_y;
		float L_3 = L_2.___x;
		float L_4;
		L_4 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_1, L_3, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___0_x;
		float L_6 = L_5.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = ___1_y;
		float L_8 = L_7.___y;
		float L_9;
		L_9 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_6, L_8, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		memset((&L_10), 0, sizeof(L_10));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_10), L_4, L_9, NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Subtraction_m28172675A65BCFFBC8C9023BE815019E668B8380_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_rhs, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8;
		memset((&L_8), 0, sizeof(L_8));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySlice_1_get_Length_m4838C92F0E31C8CC233B2A85F519DD61399BECB1_gshared_inline (ArraySlice_1_t0AEFF780EBCDED5B51C8CEF7C1E1B401777D065D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m5BE85069615B49772C9DB202004FA2FD36F418F2_gshared_inline (NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m133528692BEA0A50AC87544BB12D739273F5E7E5_gshared_inline (NativeArray_1_t4291AA2BB9135A2E2115AB84664521C935CB1A02* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m448EBF5E1AF8055E179079DE8883B7F449125BAB_gshared_inline (NativeArray_1_tA39D7DB71ADA458A72B67FD0C6E1FF021412BA57* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t math_asulong_m2CF160E23B5FF618A85C3C29B2FB1C000E40290F_inline (double ___0_x, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_x;
		int64_t L_1;
		L_1 = math_aslong_mCD3846AC0EFB4901B00A20D0960C80C8CBE66366_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_asdouble_m3E7BC790C743E67EA45476AECD6D2D9A9E62E4F2_inline (uint64_t ___0_x, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		double L_1;
		L_1 = math_asdouble_m4C4CC1B9299FE33530ED375768D67B00676C31C8_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA double2_op_Subtraction_mDAD1E402F52C548544D20D62D7FA098F4F858BC8_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_lhs, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_rhs, const RuntimeMethod* method) 
{
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___0_lhs;
		double L_1 = L_0.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2 = ___1_rhs;
		double L_3 = L_2.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_4 = ___0_lhs;
		double L_5 = L_4.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = ___1_rhs;
		double L_7 = L_6.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_8;
		memset((&L_8), 0, sizeof(L_8));
		double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline((&L_8), ((double)il2cpp_codegen_subtract(L_1, L_3)), ((double)il2cpp_codegen_subtract(L_5, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_length_mBC9788A14DDEC3FA5794F7F49EDD1516C5EDE4E3_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, const RuntimeMethod* method) 
{
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___0_x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_1 = ___0_x;
		double L_2;
		L_2 = math_dot_mA992F4ADC67180A7EB3850222857193CD0F6B21E_inline(L_0, L_1, NULL);
		double L_3;
		L_3 = math_sqrt_mA3A9D5DFDF6841F8836E3ECD5D83555842383F36_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_min_m29A6A5FB36524D911D13DDB4866FF005C7BF00D5_inline (double ___0_x, double ___1_y, const RuntimeMethod* method) 
{
	{
		double L_0 = ___1_y;
		bool L_1;
		L_1 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		double L_2 = ___0_x;
		double L_3 = ___1_y;
		if ((((double)L_2) < ((double)L_3)))
		{
			goto IL_000e;
		}
	}
	{
		double L_4 = ___1_y;
		return L_4;
	}

IL_000e:
	{
		double L_5 = ___0_x;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, double ___0_x, double ___1_y, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_x;
		__this->___x = L_0;
		double L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double2__ctor_m3355A4008574AE2483EAD2841176C67734F10F33_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_v, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_v;
		float L_1 = L_0.___x;
		__this->___x = ((double)L_1);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___0_v;
		float L_3 = L_2.___y;
		__this->___y = ((double)L_3);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		int32_t L_1;
		L_1 = math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		float L_1;
		L_1 = math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_length_m3DB47D254C8544FBB740A892B4AE2143E8F45634_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, const RuntimeMethod* method) 
{
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___0_x;
		float L_2;
		L_2 = math_dot_mF673D3E5B7D267C0A8569B678D05BDCCB667D04D_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_sqrt_mEF31DE7BD0179009683C5D7B0C58E6571B30CF4A_inline(L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_get_yzx_mDF6DE39B69C5DE384F74C0D1EC91AA0388E23535_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___y;
		float L_1 = __this->___z;
		float L_2 = __this->___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m05E57074FBD5FAB0E72940C9CC019C41915280D7_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_f;
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_aslong_mCD3846AC0EFB4901B00A20D0960C80C8CBE66366_inline (double ___0_x, const RuntimeMethod* method) 
{
	LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___longValue = ((int64_t)0);
		double L_0 = ___0_x;
		(&V_0)->___doubleValue = L_0;
		LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA L_1 = V_0;
		int64_t L_2 = L_1.___longValue;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_asdouble_m4C4CC1B9299FE33530ED375768D67B00676C31C8_inline (int64_t ___0_x, const RuntimeMethod* method) 
{
	LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___doubleValue = (0.0);
		int64_t L_0 = ___0_x;
		(&V_0)->___longValue = L_0;
		LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA L_1 = V_0;
		double L_2 = L_1.___doubleValue;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_dot_mA992F4ADC67180A7EB3850222857193CD0F6B21E_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___0_x, double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___1_y, const RuntimeMethod* method) 
{
	{
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___0_x;
		double L_1 = L_0.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2 = ___1_y;
		double L_3 = L_2.___x;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_4 = ___0_x;
		double L_5 = L_4.___y;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6 = ___1_y;
		double L_7 = L_6.___y;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_1, L_3)), ((double)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double math_sqrt_mA3A9D5DFDF6841F8836E3ECD5D83555842383F36_inline (double ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_d;
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline (float ___0_x, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___intValue = 0;
		float L_0 = ___0_x;
		(&V_0)->___floatValue = L_0;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		int32_t L_2 = L_1.___intValue;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___floatValue = (0.0f);
		int32_t L_0 = ___0_x;
		(&V_0)->___intValue = L_0;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		float L_2 = L_1.___floatValue;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
