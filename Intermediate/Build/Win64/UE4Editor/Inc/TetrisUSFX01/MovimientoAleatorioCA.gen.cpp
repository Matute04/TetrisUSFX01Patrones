// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/MovimientoAleatorioCA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoAleatorioCA() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorioCA_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorioCA();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UMovimientoAleatorioCA::StaticRegisterNativesUMovimientoAleatorioCA()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoAleatorioCA_NoRegister()
	{
		return UMovimientoAleatorioCA::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoAleatorioCA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoAleatorioCA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoAleatorioCA_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovimientoAleatorioCA.h" },
		{ "ModuleRelativePath", "MovimientoAleatorioCA.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoAleatorioCA_Statics::NewProp_RadioMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "MovimientoAleatorioCA.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovimientoAleatorioCA_Statics::NewProp_RadioMovimiento = { "RadioMovimiento", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovimientoAleatorioCA, RadioMovimiento), METADATA_PARAMS(Z_Construct_UClass_UMovimientoAleatorioCA_Statics::NewProp_RadioMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAleatorioCA_Statics::NewProp_RadioMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovimientoAleatorioCA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovimientoAleatorioCA_Statics::NewProp_RadioMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoAleatorioCA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoAleatorioCA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoAleatorioCA_Statics::ClassParams = {
		&UMovimientoAleatorioCA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovimientoAleatorioCA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAleatorioCA_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoAleatorioCA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAleatorioCA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoAleatorioCA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoAleatorioCA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoAleatorioCA, 1170761681);
	template<> TETRISUSFX01_API UClass* StaticClass<UMovimientoAleatorioCA>()
	{
		return UMovimientoAleatorioCA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoAleatorioCA(Z_Construct_UClass_UMovimientoAleatorioCA, &UMovimientoAleatorioCA::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UMovimientoAleatorioCA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoAleatorioCA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
