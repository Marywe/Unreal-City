// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hello_World_Coded/BoxTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxTrigger() {}
// Cross Module References
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_ABoxTrigger_NoRegister();
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_ABoxTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hello_World_Coded();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoxTrigger::execOnTriggerExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherIndexBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerExit(Z_Param_otherComp,Z_Param_otherActor,Z_Param_overlappedComponent,Z_Param_OtherIndexBody);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoxTrigger::execOnTriggerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherIndexBody);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerEnter(Z_Param_otherComp,Z_Param_otherActor,Z_Param_overlappedComponent,Z_Param_OtherIndexBody,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABoxTrigger::StaticRegisterNativesABoxTrigger()
	{
		UClass* Class = ABoxTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggerEnter", &ABoxTrigger::execOnTriggerEnter },
			{ "OnTriggerExit", &ABoxTrigger::execOnTriggerExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics
	{
		struct BoxTrigger_eventOnTriggerEnter_Parms
		{
			UPrimitiveComponent* otherComp;
			AActor* otherActor;
			UPrimitiveComponent* overlappedComponent;
			int32 OtherIndexBody;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherIndexBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BoxTrigger_eventOnTriggerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoxTrigger_eventOnTriggerEnter_Parms), &Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_OtherIndexBody = { "OtherIndexBody", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerEnter_Parms, OtherIndexBody), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerEnter_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerEnter_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerEnter_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_OtherIndexBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_overlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::NewProp_otherComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback del evento BeginOverlap\n" },
		{ "ModuleRelativePath", "BoxTrigger.h" },
		{ "ToolTip", "Callback del evento BeginOverlap" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxTrigger, nullptr, "OnTriggerEnter", nullptr, nullptr, sizeof(BoxTrigger_eventOnTriggerEnter_Parms), Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics
	{
		struct BoxTrigger_eventOnTriggerExit_Parms
		{
			UPrimitiveComponent* otherComp;
			AActor* otherActor;
			UPrimitiveComponent* overlappedComponent;
			int32 OtherIndexBody;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherIndexBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_OtherIndexBody = { "OtherIndexBody", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerExit_Parms, OtherIndexBody), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerExit_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerExit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoxTrigger_eventOnTriggerExit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_OtherIndexBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_overlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::NewProp_otherComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback del evento EndOverlap\n" },
		{ "ModuleRelativePath", "BoxTrigger.h" },
		{ "ToolTip", "Callback del evento EndOverlap" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxTrigger, nullptr, "OnTriggerExit", nullptr, nullptr, sizeof(BoxTrigger_eventOnTriggerExit_Parms), Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoxTrigger_OnTriggerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoxTrigger_OnTriggerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoxTrigger_NoRegister()
	{
		return ABoxTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ABoxTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hello_World_Coded,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxTrigger_OnTriggerEnter, "OnTriggerEnter" }, // 1570225062
		{ &Z_Construct_UFunction_ABoxTrigger_OnTriggerExit, "OnTriggerExit" }, // 2315186132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoxTrigger.h" },
		{ "ModuleRelativePath", "BoxTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxTrigger_Statics::NewProp_boxCollider_MetaData[] = {
		{ "Category", "Added Collider" },
		{ "Comment", "//Colisionador del objeto\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxTrigger.h" },
		{ "ToolTip", "Colisionador del objeto" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxTrigger_Statics::NewProp_boxCollider = { "boxCollider", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxTrigger, boxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxTrigger_Statics::NewProp_boxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxTrigger_Statics::NewProp_boxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxTrigger_Statics::NewProp_actorMesh_MetaData[] = {
		{ "Category", "Added Mesh" },
		{ "Comment", "//Malla del objeto\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxTrigger.h" },
		{ "ToolTip", "Malla del objeto" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxTrigger_Statics::NewProp_actorMesh = { "actorMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxTrigger, actorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxTrigger_Statics::NewProp_actorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxTrigger_Statics::NewProp_actorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxTrigger_Statics::NewProp_boxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxTrigger_Statics::NewProp_actorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxTrigger_Statics::ClassParams = {
		&ABoxTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoxTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxTrigger, 1919689268);
	template<> HELLO_WORLD_CODED_API UClass* StaticClass<ABoxTrigger>()
	{
		return ABoxTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxTrigger(Z_Construct_UClass_ABoxTrigger, &ABoxTrigger::StaticClass, TEXT("/Script/Hello_World_Coded"), TEXT("ABoxTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
