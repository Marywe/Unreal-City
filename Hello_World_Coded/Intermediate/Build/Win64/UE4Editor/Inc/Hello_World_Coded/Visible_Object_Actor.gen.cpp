// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hello_World_Coded/Visible_Object_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisible_Object_Actor() {}
// Cross Module References
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_AVisible_Object_Actor_NoRegister();
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_AVisible_Object_Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hello_World_Coded();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVisible_Object_Actor::execOnActionKeyPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionKeyPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVisible_Object_Actor::execOnClic)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_STRUCT(FKey,Z_Param_keyname);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClic(Z_Param_actor,Z_Param_keyname);
		P_NATIVE_END;
	}
	void AVisible_Object_Actor::StaticRegisterNativesAVisible_Object_Actor()
	{
		UClass* Class = AVisible_Object_Actor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActionKeyPressed", &AVisible_Object_Actor::execOnActionKeyPressed },
			{ "OnClic", &AVisible_Object_Actor::execOnClic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback del evento de pulsaci?n de una tecla\n" },
		{ "ModuleRelativePath", "Visible_Object_Actor.h" },
		{ "ToolTip", "Callback del evento de pulsaci?n de una tecla" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVisible_Object_Actor, nullptr, "OnActionKeyPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics
	{
		struct Visible_Object_Actor_eventOnClic_Parms
		{
			AActor* actor;
			FKey keyname;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyname;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::NewProp_keyname = { "keyname", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Visible_Object_Actor_eventOnClic_Parms, keyname), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Visible_Object_Actor_eventOnClic_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::NewProp_keyname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback del evento clic sobre este actor\n" },
		{ "ModuleRelativePath", "Visible_Object_Actor.h" },
		{ "ToolTip", "Callback del evento clic sobre este actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVisible_Object_Actor, nullptr, "OnClic", nullptr, nullptr, sizeof(Visible_Object_Actor_eventOnClic_Parms), Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVisible_Object_Actor_OnClic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVisible_Object_Actor_OnClic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVisible_Object_Actor_NoRegister()
	{
		return AVisible_Object_Actor::StaticClass();
	}
	struct Z_Construct_UClass_AVisible_Object_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_displacementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_displacementSpeed;
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
	UObject* (*const Z_Construct_UClass_AVisible_Object_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hello_World_Coded,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVisible_Object_Actor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVisible_Object_Actor_OnActionKeyPressed, "OnActionKeyPressed" }, // 2903717574
		{ &Z_Construct_UFunction_AVisible_Object_Actor_OnClic, "OnClic" }, // 3174069683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisible_Object_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Visible_Object_Actor.h" },
		{ "ModuleRelativePath", "Visible_Object_Actor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_displacementSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "Comment", "//Velocidad de desplazamiento\n" },
		{ "ModuleRelativePath", "Visible_Object_Actor.h" },
		{ "ToolTip", "Velocidad de desplazamiento" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_displacementSpeed = { "displacementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVisible_Object_Actor, displacementSpeed), METADATA_PARAMS(Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_displacementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_displacementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_boxCollider_MetaData[] = {
		{ "Category", "Added Collider" },
		{ "Comment", "//Colisionador del objeto\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Visible_Object_Actor.h" },
		{ "ToolTip", "Colisionador del objeto" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_boxCollider = { "boxCollider", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVisible_Object_Actor, boxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_boxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_boxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_actorMesh_MetaData[] = {
		{ "Category", "Added Mesh" },
		{ "Comment", "//Malla del objeto\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Visible_Object_Actor.h" },
		{ "ToolTip", "Malla del objeto" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_actorMesh = { "actorMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVisible_Object_Actor, actorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_actorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_actorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVisible_Object_Actor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_displacementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_boxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisible_Object_Actor_Statics::NewProp_actorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisible_Object_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisible_Object_Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVisible_Object_Actor_Statics::ClassParams = {
		&AVisible_Object_Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVisible_Object_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVisible_Object_Actor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVisible_Object_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisible_Object_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisible_Object_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVisible_Object_Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVisible_Object_Actor, 2545684007);
	template<> HELLO_WORLD_CODED_API UClass* StaticClass<AVisible_Object_Actor>()
	{
		return AVisible_Object_Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVisible_Object_Actor(Z_Construct_UClass_AVisible_Object_Actor, &AVisible_Object_Actor::StaticClass, TEXT("/Script/Hello_World_Coded"), TEXT("AVisible_Object_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisible_Object_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
