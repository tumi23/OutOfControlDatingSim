// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutOfControlDateSim/OutOfControlDateSimGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutOfControlDateSimGameMode() {}
// Cross Module References
	OUTOFCONTROLDATESIM_API UClass* Z_Construct_UClass_AOutOfControlDateSimGameMode_NoRegister();
	OUTOFCONTROLDATESIM_API UClass* Z_Construct_UClass_AOutOfControlDateSimGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OutOfControlDateSim();
// End Cross Module References
	void AOutOfControlDateSimGameMode::StaticRegisterNativesAOutOfControlDateSimGameMode()
	{
	}
	UClass* Z_Construct_UClass_AOutOfControlDateSimGameMode_NoRegister()
	{
		return AOutOfControlDateSimGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OutOfControlDateSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OutOfControlDateSimGameMode.h" },
		{ "ModuleRelativePath", "OutOfControlDateSimGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOutOfControlDateSimGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics::ClassParams = {
		&AOutOfControlDateSimGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOutOfControlDateSimGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOutOfControlDateSimGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOutOfControlDateSimGameMode, 2381680563);
	template<> OUTOFCONTROLDATESIM_API UClass* StaticClass<AOutOfControlDateSimGameMode>()
	{
		return AOutOfControlDateSimGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOutOfControlDateSimGameMode(Z_Construct_UClass_AOutOfControlDateSimGameMode, &AOutOfControlDateSimGameMode::StaticClass, TEXT("/Script/OutOfControlDateSim"), TEXT("AOutOfControlDateSimGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOutOfControlDateSimGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
