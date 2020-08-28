// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef OUTOFCONTROLDATESIM_OutOfControlDateSimProjectile_generated_h
#error "OutOfControlDateSimProjectile.generated.h already included, missing '#pragma once' in OutOfControlDateSimProjectile.h"
#endif
#define OUTOFCONTROLDATESIM_OutOfControlDateSimProjectile_generated_h

#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_SPARSE_DATA
#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOutOfControlDateSimProjectile(); \
	friend struct Z_Construct_UClass_AOutOfControlDateSimProjectile_Statics; \
public: \
	DECLARE_CLASS(AOutOfControlDateSimProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OutOfControlDateSim"), NO_API) \
	DECLARE_SERIALIZER(AOutOfControlDateSimProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOutOfControlDateSimProjectile(); \
	friend struct Z_Construct_UClass_AOutOfControlDateSimProjectile_Statics; \
public: \
	DECLARE_CLASS(AOutOfControlDateSimProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OutOfControlDateSim"), NO_API) \
	DECLARE_SERIALIZER(AOutOfControlDateSimProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOutOfControlDateSimProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOutOfControlDateSimProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutOfControlDateSimProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutOfControlDateSimProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutOfControlDateSimProjectile(AOutOfControlDateSimProjectile&&); \
	NO_API AOutOfControlDateSimProjectile(const AOutOfControlDateSimProjectile&); \
public:


#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutOfControlDateSimProjectile(AOutOfControlDateSimProjectile&&); \
	NO_API AOutOfControlDateSimProjectile(const AOutOfControlDateSimProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutOfControlDateSimProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutOfControlDateSimProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOutOfControlDateSimProjectile)


#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AOutOfControlDateSimProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AOutOfControlDateSimProjectile, ProjectileMovement); }


#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_9_PROLOG
#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_SPARSE_DATA \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_RPC_WRAPPERS \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_INCLASS \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_SPARSE_DATA \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_INCLASS_NO_PURE_DECLS \
	OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OUTOFCONTROLDATESIM_API UClass* StaticClass<class AOutOfControlDateSimProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OutOfControlDateSim_Source_OutOfControlDateSim_OutOfControlDateSimProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
