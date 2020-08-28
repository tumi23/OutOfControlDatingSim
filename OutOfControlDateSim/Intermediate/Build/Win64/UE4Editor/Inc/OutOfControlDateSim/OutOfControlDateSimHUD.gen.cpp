// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutOfControlDateSim/OutOfControlDateSimHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutOfControlDateSimHUD() {}
// Cross Module References
	OUTOFCONTROLDATESIM_API UClass* Z_Construct_UClass_AOutOfControlDateSimHUD_NoRegister();
	OUTOFCONTROLDATESIM_API UClass* Z_Construct_UClass_AOutOfControlDateSimHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_OutOfControlDateSim();
// End Cross Module References
	void AOutOfControlDateSimHUD::StaticRegisterNativesAOutOfControlDateSimHUD()
	{
	}
	UClass* Z_Construct_UClass_AOutOfControlDateSimHUD_NoRegister()
	{
		return AOutOfControlDateSimHUD::StaticClass();
	}
	struct Z_Construct_UClass_AOutOfControlDateSimHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOutOfControlDateSimHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_OutOfControlDateSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutOfControlDateSimHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "OutOfControlDateSimHUD.h" },
		{ "ModuleRelativePath", "OutOfControlDateSimHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOutOfControlDateSimHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOutOfControlDateSimHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOutOfControlDateSimHUD_Statics::ClassParams = {
		&AOutOfControlDateSimHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOutOfControlDateSimHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOutOfControlDateSimHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOutOfControlDateSimHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOutOfControlDateSimHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOutOfControlDateSimHUD, 1276427697);
	template<> OUTOFCONTROLDATESIM_API UClass* StaticClass<AOutOfControlDateSimHUD>()
	{
		return AOutOfControlDateSimHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOutOfControlDateSimHUD(Z_Construct_UClass_AOutOfControlDateSimHUD, &AOutOfControlDateSimHUD::StaticClass, TEXT("/Script/OutOfControlDateSim"), TEXT("AOutOfControlDateSimHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOutOfControlDateSimHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
