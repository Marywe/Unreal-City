// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hello_World_Coded/Hello_World_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHello_World_Actor() {}
// Cross Module References
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_AHello_World_Actor_NoRegister();
	HELLO_WORLD_CODED_API UClass* Z_Construct_UClass_AHello_World_Actor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Hello_World_Coded();
// End Cross Module References
	void AHello_World_Actor::StaticRegisterNativesAHello_World_Actor()
	{
	}
	UClass* Z_Construct_UClass_AHello_World_Actor_NoRegister()
	{
		return AHello_World_Actor::StaticClass();
	}
	struct Z_Construct_UClass_AHello_World_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_messageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHello_World_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Hello_World_Coded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHello_World_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hello_World_Actor.h" },
		{ "ModuleRelativePath", "Hello_World_Actor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_messageTime_MetaData[] = {
		{ "Category", "Tiempo" },
		{ "Comment", "//Tiempo que va a estar el mensaje en pantalla\n" },
		{ "ModuleRelativePath", "Hello_World_Actor.h" },
		{ "ToolTip", "Tiempo que va a estar el mensaje en pantalla" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_messageTime = { "messageTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHello_World_Actor, messageTime), METADATA_PARAMS(Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_messageTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_messageTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_message_MetaData[] = {
		{ "Category", "Mensaje" },
		{ "Comment", "//Texto del mensaje en pantalla\n" },
		{ "ModuleRelativePath", "Hello_World_Actor.h" },
		{ "ToolTip", "Texto del mensaje en pantalla" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHello_World_Actor, message), METADATA_PARAMS(Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHello_World_Actor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_messageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHello_World_Actor_Statics::NewProp_message,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHello_World_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHello_World_Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHello_World_Actor_Statics::ClassParams = {
		&AHello_World_Actor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHello_World_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHello_World_Actor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHello_World_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHello_World_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHello_World_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHello_World_Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHello_World_Actor, 3177015013);
	template<> HELLO_WORLD_CODED_API UClass* StaticClass<AHello_World_Actor>()
	{
		return AHello_World_Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHello_World_Actor(Z_Construct_UClass_AHello_World_Actor, &AHello_World_Actor::StaticClass, TEXT("/Script/Hello_World_Coded"), TEXT("AHello_World_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHello_World_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
