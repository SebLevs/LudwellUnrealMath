// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudwellUnrealMath/Public/SinOscillation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSinOscillation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LUDWELLUNREALMATH_API UClass* Z_Construct_UClass_USinOscillation();
	LUDWELLUNREALMATH_API UClass* Z_Construct_UClass_USinOscillation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LudwellUnrealMath();
// End Cross Module References
	DEFINE_FUNCTION(USinOscillation::execOscillate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Oscillate();
		P_NATIVE_END;
	}
	void USinOscillation::StaticRegisterNativesUSinOscillation()
	{
		UClass* Class = USinOscillation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Oscillate", &USinOscillation::execOscillate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USinOscillation_Oscillate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USinOscillation_Oscillate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ludwell|Math" },
		{ "ModuleRelativePath", "Public/SinOscillation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USinOscillation_Oscillate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USinOscillation, nullptr, "Oscillate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USinOscillation_Oscillate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USinOscillation_Oscillate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USinOscillation_Oscillate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USinOscillation_Oscillate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USinOscillation);
	UClass* Z_Construct_UClass_USinOscillation_NoRegister()
	{
		return USinOscillation::StaticClass();
	}
	struct Z_Construct_UClass_USinOscillation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitudes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Amplitudes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequencies_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frequencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USinOscillation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LudwellUnrealMath,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USinOscillation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USinOscillation_Oscillate, "Oscillate" }, // 2637369458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinOscillation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SinOscillation.h" },
		{ "ModuleRelativePath", "Public/SinOscillation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/SinOscillation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes = { "Amplitudes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USinOscillation, Amplitudes), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinOscillation_Statics::NewProp_Frequencies_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Public/SinOscillation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USinOscillation_Statics::NewProp_Frequencies = { "Frequencies", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USinOscillation, Frequencies), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USinOscillation_Statics::NewProp_Frequencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USinOscillation_Statics::NewProp_Frequencies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USinOscillation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USinOscillation_Statics::NewProp_Frequencies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USinOscillation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USinOscillation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USinOscillation_Statics::ClassParams = {
		&USinOscillation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USinOscillation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USinOscillation_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USinOscillation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USinOscillation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USinOscillation()
	{
		if (!Z_Registration_Info_UClass_USinOscillation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USinOscillation.OuterSingleton, Z_Construct_UClass_USinOscillation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USinOscillation.OuterSingleton;
	}
	template<> LUDWELLUNREALMATH_API UClass* StaticClass<USinOscillation>()
	{
		return USinOscillation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USinOscillation);
	USinOscillation::~USinOscillation() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USinOscillation, USinOscillation::StaticClass, TEXT("USinOscillation"), &Z_Registration_Info_UClass_USinOscillation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USinOscillation), 2738769150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_381554647(TEXT("/Script/LudwellUnrealMath"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
