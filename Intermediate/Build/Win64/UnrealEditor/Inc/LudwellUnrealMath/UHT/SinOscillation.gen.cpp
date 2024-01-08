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
	void USinOscillation::StaticRegisterNativesUSinOscillation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USinOscillation);
	UClass* Z_Construct_UClass_USinOscillation_NoRegister()
	{
		return USinOscillation::StaticClass();
	}
	struct Z_Construct_UClass_USinOscillation_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		{ "Category", "Oscillation parameters" },
		{ "ModuleRelativePath", "Public/SinOscillation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes = { "Amplitudes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USinOscillation, Amplitudes), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USinOscillation_Statics::NewProp_Amplitudes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USinOscillation_Statics::NewProp_Frequencies_MetaData[] = {
		{ "Category", "Oscillation parameters" },
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
		nullptr,
		Z_Construct_UClass_USinOscillation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	struct Z_CompiledInDeferFile_FID_LearningUnreal_CryptRaider_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningUnreal_CryptRaider_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USinOscillation, USinOscillation::StaticClass, TEXT("USinOscillation"), &Z_Registration_Info_UClass_USinOscillation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USinOscillation), 125847364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningUnreal_CryptRaider_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_2783607966(TEXT("/Script/LudwellUnrealMath"),
		Z_CompiledInDeferFile_FID_LearningUnreal_CryptRaider_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningUnreal_CryptRaider_Plugins_LudwellUnrealMath_Source_LudwellUnrealMath_Public_SinOscillation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
