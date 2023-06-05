// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/NivelBasico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivelBasico() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ANivelBasico_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ANivelBasico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UNivelFactory_NoRegister();
// End Cross Module References
	void ANivelBasico::StaticRegisterNativesANivelBasico()
	{
	}
	UClass* Z_Construct_UClass_ANivelBasico_NoRegister()
	{
		return ANivelBasico::StaticClass();
	}
	struct Z_Construct_UClass_ANivelBasico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivelBasico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivelBasico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NivelBasico.h" },
		{ "ModuleRelativePath", "NivelBasico.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivelBasico_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NivelBasico.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANivelBasico_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANivelBasico, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANivelBasico_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANivelBasico_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANivelBasico_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivelBasico_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "NivelBasico" },
		{ "ModuleRelativePath", "NivelBasico.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANivelBasico_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANivelBasico, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANivelBasico_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANivelBasico_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANivelBasico_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANivelBasico_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANivelBasico_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANivelBasico_Statics::NewProp_Colors,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANivelBasico_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNivelFactory_NoRegister, (int32)VTABLE_OFFSET(ANivelBasico, INivelFactory), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivelBasico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivelBasico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivelBasico_Statics::ClassParams = {
		&ANivelBasico::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANivelBasico_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANivelBasico_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANivelBasico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANivelBasico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivelBasico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivelBasico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivelBasico, 2037041032);
	template<> TETRISUSFX01_API UClass* StaticClass<ANivelBasico>()
	{
		return ANivelBasico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivelBasico(Z_Construct_UClass_ANivelBasico, &ANivelBasico::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ANivelBasico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivelBasico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
