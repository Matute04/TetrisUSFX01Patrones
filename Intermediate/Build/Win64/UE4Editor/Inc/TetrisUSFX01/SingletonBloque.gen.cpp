// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/SingletonBloque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingletonBloque() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ASingletonBloque_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ASingletonBloque();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASingletonBloque::StaticRegisterNativesASingletonBloque()
	{
	}
	UClass* Z_Construct_UClass_ASingletonBloque_NoRegister()
	{
		return ASingletonBloque::StaticClass();
	}
	struct Z_Construct_UClass_ASingletonBloque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloque_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bloque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloqueMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloqueMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingletonBloque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonBloque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingletonBloque.h" },
		{ "ModuleRelativePath", "SingletonBloque.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonBloque_Statics::NewProp_Bloque_MetaData[] = {
		{ "ModuleRelativePath", "SingletonBloque.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingletonBloque_Statics::NewProp_Bloque = { "Bloque", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingletonBloque, Bloque), Z_Construct_UClass_ASingletonBloque_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingletonBloque_Statics::NewProp_Bloque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonBloque_Statics::NewProp_Bloque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonBloque_Statics::NewProp_BloqueMesh_MetaData[] = {
		{ "Category", "SingletonBloque" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SingletonBloque.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingletonBloque_Statics::NewProp_BloqueMesh = { "BloqueMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingletonBloque, BloqueMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingletonBloque_Statics::NewProp_BloqueMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonBloque_Statics::NewProp_BloqueMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingletonBloque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingletonBloque_Statics::NewProp_Bloque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingletonBloque_Statics::NewProp_BloqueMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingletonBloque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingletonBloque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingletonBloque_Statics::ClassParams = {
		&ASingletonBloque::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASingletonBloque_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonBloque_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASingletonBloque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonBloque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingletonBloque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingletonBloque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingletonBloque, 2610040157);
	template<> TETRISUSFX01_API UClass* StaticClass<ASingletonBloque>()
	{
		return ASingletonBloque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingletonBloque(Z_Construct_UClass_ASingletonBloque, &ASingletonBloque::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ASingletonBloque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingletonBloque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
