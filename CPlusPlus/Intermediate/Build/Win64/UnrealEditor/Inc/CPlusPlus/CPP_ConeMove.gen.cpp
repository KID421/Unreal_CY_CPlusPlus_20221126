// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPlus/CPP_ConeMove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ConeMove() {}
// Cross Module References
	CPLUSPLUS_API UClass* Z_Construct_UClass_ACPP_ConeMove_NoRegister();
	CPLUSPLUS_API UClass* Z_Construct_UClass_ACPP_ConeMove();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPlusPlus();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_ConeMove::execMoveObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveObject();
		P_NATIVE_END;
	}
	void ACPP_ConeMove::StaticRegisterNativesACPP_ConeMove()
	{
		UClass* Class = ACPP_ConeMove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveObject", &ACPP_ConeMove::execMoveObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_ConeMove_MoveObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ConeMove_MoveObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "KID" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ConeMove_MoveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ConeMove, nullptr, "MoveObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ConeMove_MoveObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ConeMove_MoveObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_ConeMove_MoveObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ConeMove_MoveObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_ConeMove);
	UClass* Z_Construct_UClass_ACPP_ConeMove_NoRegister()
	{
		return ACPP_ConeMove::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ConeMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isUp_MetaData[];
#endif
		static void NewProp_isUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heightMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heightMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heightCurrent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heightCurrent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ConeMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPlusPlus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_ConeMove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ConeMove_MoveObject, "MoveObject" }, // 3288877094
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_ConeMove.h" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe6\x9c\xac\xe8\xb3\x87\xe6\x96\x99|\xe8\xae\x8a\xe6\x95\xb8\xe8\xb3\x87\xe6\x96\x99" },
		{ "Comment", "// \xe5\xb1\xac\xe6\x80\xa7()\n// VisibleAnywhere \xe6\x89\x80\xe6\x9c\x89\xe5\x9c\xb0\xe6\x96\xb9\xe9\x83\xbd\xe8\x83\xbd\xe8\xa6\x8b\n// EditAnywhere \xe6\x89\x80\xe6\x9c\x89\xe5\x9c\xb0\xe6\x96\xb9\xe9\x83\xbd\xe8\x83\xbd\xe7\xb7\xa8\xe8\xbc\xaf\n// Category \xe5\x88\x86\xe9\xa1\x9e = \"\xe4\xb8\xbb\xe5\x88\x86\xe9\xa1\x9e|\xe6\xac\xa1\xe5\x88\x86\xe9\xa1\x9e|\xe6\xac\xa1\xe6\xac\xa1\xe5\x88\x86\xe9\xa1\x9e|...\"\n// Meta=() \xe8\xb3\x87\xe6\x96\x99\n// DisplayName = \"\xe9\xa1\xaf\xe7\xa4\xba\xe5\x90\x8d\xe7\xa8\xb1\"\n// \xe5\xb8\x83\xe6\x9e\x97\xe5\x80\xbc \xe8\x87\xaa\xe8\xa8\x82\xe5\x90\x8d\xe7\xa8\xb1\xef\xbc\x9b\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbe\x80\xe4\xb8\x8a" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
		{ "ToolTip", "\xe5\xb1\xac\xe6\x80\xa7()\nVisibleAnywhere \xe6\x89\x80\xe6\x9c\x89\xe5\x9c\xb0\xe6\x96\xb9\xe9\x83\xbd\xe8\x83\xbd\xe8\xa6\x8b\nEditAnywhere \xe6\x89\x80\xe6\x9c\x89\xe5\x9c\xb0\xe6\x96\xb9\xe9\x83\xbd\xe8\x83\xbd\xe7\xb7\xa8\xe8\xbc\xaf\nCategory \xe5\x88\x86\xe9\xa1\x9e = \"\xe4\xb8\xbb\xe5\x88\x86\xe9\xa1\x9e|\xe6\xac\xa1\xe5\x88\x86\xe9\xa1\x9e|\xe6\xac\xa1\xe6\xac\xa1\xe5\x88\x86\xe9\xa1\x9e|...\"\nMeta=() \xe8\xb3\x87\xe6\x96\x99\nDisplayName = \"\xe9\xa1\xaf\xe7\xa4\xba\xe5\x90\x8d\xe7\xa8\xb1\"\n\xe5\xb8\x83\xe6\x9e\x97\xe5\x80\xbc \xe8\x87\xaa\xe8\xa8\x82\xe5\x90\x8d\xe7\xa8\xb1\xef\xbc\x9b" },
	};
#endif
	void Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_SetBit(void* Obj)
	{
		((ACPP_ConeMove*)Obj)->isUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp = { "isUp", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_ConeMove), &Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_moveHeight_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe6\x9c\xac\xe8\xb3\x87\xe6\x96\x99|\xe6\x95\xb8\xe5\x80\xbc\xe8\xb3\x87\xe6\x96\x99" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "\xe5\xbe\x80\xe4\xb8\x8a\xe7\xa7\xbb\xe5\x8b\x95\xe7\x9a\x84\xe9\xab\x98\xe5\xba\xa6" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_moveHeight = { "moveHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, moveHeight), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_moveHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_moveHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMax_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe6\x9c\xac\xe8\xb3\x87\xe6\x96\x99|\xe6\x95\xb8\xe5\x80\xbc\xe8\xb3\x87\xe6\x96\x99" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xa4\xa7\xe9\xab\x98\xe5\xba\xa6" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMax = { "heightMax", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, heightMax), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMin_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe6\x9c\xac\xe8\xb3\x87\xe6\x96\x99|\xe6\x95\xb8\xe5\x80\xbc\xe8\xb3\x87\xe6\x96\x99" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xb0\x8f\xe9\xab\x98\xe5\xba\xa6" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMin = { "heightMin", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, heightMin), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe6\x9c\xac\xe8\xb3\x87\xe6\x96\x99|\xe6\x95\xb8\xe5\x80\xbc\xe8\xb3\x87\xe6\x96\x99" },
		{ "ClampMax", "500" },
		{ "ClampMin", "0" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8b\x95\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, speed), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightCurrent_MetaData[] = {
		{ "Category", "\xe5\x9f\xba\xe6\x9c\xac\xe8\xb3\x87\xe6\x96\x99|\xe6\x95\xb8\xe5\x80\xbc\xe8\xb3\x87\xe6\x96\x99" },
		{ "DisplayName", "\xe7\x95\xb6\xe5\x89\x8d\xe9\xab\x98\xe5\xba\xa6" },
		{ "ModuleRelativePath", "CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightCurrent = { "heightCurrent", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, heightCurrent), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightCurrent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_ConeMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_moveHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_heightCurrent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ConeMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ConeMove>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ConeMove_Statics::ClassParams = {
		&ACPP_ConeMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_ConeMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_ConeMove()
	{
		if (!Z_Registration_Info_UClass_ACPP_ConeMove.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ConeMove.OuterSingleton, Z_Construct_UClass_ACPP_ConeMove_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_ConeMove.OuterSingleton;
	}
	template<> CPLUSPLUS_API UClass* StaticClass<ACPP_ConeMove>()
	{
		return ACPP_ConeMove::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ConeMove);
	struct Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_ConeMove_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_ConeMove_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ConeMove, ACPP_ConeMove::StaticClass, TEXT("ACPP_ConeMove"), &Z_Registration_Info_UClass_ACPP_ConeMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ConeMove), 1465077386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_ConeMove_h_3592180170(TEXT("/Script/CPlusPlus"),
		Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_ConeMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlusPlus_Source_CPlusPlus_CPP_ConeMove_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
