// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPlus/CPP_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Test() {}
// Cross Module References
	CPLUSPLUS_API UClass* Z_Construct_UClass_ACPP_Test_NoRegister();
	CPLUSPLUS_API UClass* Z_Construct_UClass_ACPP_Test();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPlusPlus();
// End Cross Module References
	void ACPP_Test::StaticRegisterNativesACPP_Test()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Test);
	UClass* Z_Construct_UClass_ACPP_Test_NoRegister()
	{
		return ACPP_Test::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Test_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Test_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPlusPlus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Test_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Test.h" },
		{ "ModuleRelativePath", "CPP_Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Test_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Test>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Test_Statics::ClassParams = {
		&ACPP_Test::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Test_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Test_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Test()
	{
		if (!Z_Registration_Info_UClass_ACPP_Test.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Test.OuterSingleton, Z_Construct_UClass_ACPP_Test_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Test.OuterSingleton;
	}
	template<> CPLUSPLUS_API UClass* StaticClass<ACPP_Test>()
	{
		return ACPP_Test::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Test);
	struct Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_Test_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_Test_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Test, ACPP_Test::StaticClass, TEXT("ACPP_Test"), &Z_Registration_Info_UClass_ACPP_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Test), 261194722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_Test_h_3796475583(TEXT("/Script/CPlusPlus"),
		Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_Test_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
