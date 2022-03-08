// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef CYBERPUNK2022_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define CYBERPUNK2022_Item_generated_h

#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_SPARSE_DATA
#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemMesh);


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemMesh);


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cyberpunk2022"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___itemMesh() { return STRUCT_OFFSET(AItem, _itemMesh); } \
	FORCEINLINE static uint32 __PPO___collisionBox() { return STRUCT_OFFSET(AItem, _collisionBox); } \
	FORCEINLINE static uint32 __PPO___pickupWidget() { return STRUCT_OFFSET(AItem, _pickupWidget); }


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_9_PROLOG
#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_RPC_WRAPPERS \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_INCLASS \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_PRIVATE_PROPERTY_OFFSET \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_SPARSE_DATA \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_INCLASS_NO_PURE_DECLS \
	Cyberpunk2022_Source_Cyberpunk2022_Item_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNK2022_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cyberpunk2022_Source_Cyberpunk2022_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
