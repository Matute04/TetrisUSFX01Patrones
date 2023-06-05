// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PiezaDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiezaDecorator() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaDecorator_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaDecorator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezaBordeInterfaz_NoRegister();
// End Cross Module References
	void APiezaDecorator::StaticRegisterNativesAPiezaDecorator()
	{
	}
	UClass* Z_Construct_UClass_APiezaDecorator_NoRegister()
	{
		return APiezaDecorator::StaticClass();
	}
	struct Z_Construct_UClass_APiezaDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiezaDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiezaDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PiezaDecorator.h" },
		{ "ModuleRelativePath", "PiezaDecorator.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APiezaDecorator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPiezaBordeInterfaz_NoRegister, (int32)VTABLE_OFFSET(APiezaDecorator, IPiezaBordeInterfaz), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiezaDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiezaDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiezaDecorator_Statics::ClassParams = {
		&APiezaDecorator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APiezaDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiezaDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiezaDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiezaDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiezaDecorator, 2835722733);
	template<> TETRISUSFX01_API UClass* StaticClass<APiezaDecorator>()
	{
		return APiezaDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiezaDecorator(Z_Construct_UClass_APiezaDecorator, &APiezaDecorator::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APiezaDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiezaDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
