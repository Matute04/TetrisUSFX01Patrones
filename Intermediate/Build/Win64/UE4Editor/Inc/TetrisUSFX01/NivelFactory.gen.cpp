// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/NivelFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivelFactory() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UNivelFactory_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UNivelFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UNivelFactory::StaticRegisterNativesUNivelFactory()
	{
	}
	UClass* Z_Construct_UClass_UNivelFactory_NoRegister()
	{
		return UNivelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNivelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNivelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNivelFactory_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "NivelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNivelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INivelFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNivelFactory_Statics::ClassParams = {
		&UNivelFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNivelFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNivelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNivelFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNivelFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNivelFactory, 2343013132);
	template<> TETRISUSFX01_API UClass* StaticClass<UNivelFactory>()
	{
		return UNivelFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNivelFactory(Z_Construct_UClass_UNivelFactory, &UNivelFactory::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UNivelFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNivelFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
