// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hello_World_Coded/Baliza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaliza() {}
// Cross Module References
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_ABaliza_NoRegister();
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_ABaliza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hello_World_Coded();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaliza::execSwitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Switch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaliza::execSetLight)
	{
		P_GET_UBOOL(Z_Param_linghting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLight(Z_Param_linghting);
		P_NATIVE_END;
	}
	void ABaliza::StaticRegisterNativesABaliza()
	{
		UClass* Class = ABaliza::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLight", &ABaliza::execSetLight },
			{ "Switch", &ABaliza::execSwitch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaliza_SetLight_Statics
	{
		struct Baliza_eventSetLight_Parms
		{
			bool linghting;
		};
		static void NewProp_linghting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_linghting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaliza_SetLight_Statics::NewProp_linghting_SetBit(void* Obj)
	{
		((Baliza_eventSetLight_Parms*)Obj)->linghting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaliza_SetLight_Statics::NewProp_linghting = { "linghting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Baliza_eventSetLight_Parms), &Z_Construct_UFunction_ABaliza_SetLight_Statics::NewProp_linghting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaliza_SetLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaliza_SetLight_Statics::NewProp_linghting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaliza_SetLight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Establece si se enciende o apaga\n" },
		{ "ModuleRelativePath", "Baliza.h" },
		{ "ToolTip", "Establece si se enciende o apaga" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaliza_SetLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaliza, nullptr, "SetLight", nullptr, nullptr, sizeof(Baliza_eventSetLight_Parms), Z_Construct_UFunction_ABaliza_SetLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaliza_SetLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaliza_SetLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaliza_SetLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaliza_SetLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaliza_SetLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaliza_Switch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaliza_Switch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback para el timer\n" },
		{ "ModuleRelativePath", "Baliza.h" },
		{ "ToolTip", "Callback para el timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaliza_Switch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaliza, nullptr, "Switch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaliza_Switch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaliza_Switch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaliza_Switch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaliza_Switch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaliza_NoRegister()
	{
		return ABaliza::StaticClass();
	}
	struct Z_Construct_UClass_ABaliza_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalNumSwitchs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_totalNumSwitchs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_switchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_switchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaliza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hello_World_Coded,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaliza_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaliza_SetLight, "SetLight" }, // 3686142107
		{ &Z_Construct_UFunction_ABaliza_Switch, "Switch" }, // 1801519936
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaliza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Baliza.h" },
		{ "ModuleRelativePath", "Baliza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaliza_Statics::NewProp_totalNumSwitchs_MetaData[] = {
		{ "Category", "Timming params" },
		{ "Comment", "//N?mero total de parpadeos\n" },
		{ "ModuleRelativePath", "Baliza.h" },
		{ "ToolTip", "N?mero total de parpadeos" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaliza_Statics::NewProp_totalNumSwitchs = { "totalNumSwitchs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaliza, totalNumSwitchs), METADATA_PARAMS(Z_Construct_UClass_ABaliza_Statics::NewProp_totalNumSwitchs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaliza_Statics::NewProp_totalNumSwitchs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaliza_Statics::NewProp_switchTime_MetaData[] = {
		{ "Category", "Timming params" },
		{ "Comment", "//Tiempo de encendido\n" },
		{ "ModuleRelativePath", "Baliza.h" },
		{ "ToolTip", "Tiempo de encendido" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaliza_Statics::NewProp_switchTime = { "switchTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaliza, switchTime), METADATA_PARAMS(Z_Construct_UClass_ABaliza_Statics::NewProp_switchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaliza_Statics::NewProp_switchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaliza_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "Collider" },
		{ "Comment", "//Colisionador de la baliza\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Baliza.h" },
		{ "ToolTip", "Colisionador de la baliza" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaliza_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaliza, collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaliza_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaliza_Statics::NewProp_collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaliza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaliza_Statics::NewProp_totalNumSwitchs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaliza_Statics::NewProp_switchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaliza_Statics::NewProp_collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaliza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaliza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaliza_Statics::ClassParams = {
		&ABaliza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaliza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaliza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaliza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaliza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaliza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaliza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaliza, 3386420384);
	template<> HELLO_WORLD_CODED_API UClass* StaticClass<ABaliza>()
	{
		return ABaliza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaliza(Z_Construct_UClass_ABaliza, &ABaliza::StaticClass, TEXT("/Script/Hello_World_Coded"), TEXT("ABaliza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaliza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
