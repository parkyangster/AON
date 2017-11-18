// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MOBAPrivatePCH.h"
#include "Public/HeroActionx.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroActionx() {}
// Cross Module References
	MOBA_API UEnum* Z_Construct_UEnum_MOBA_EHeroActionStatus();
	UPackage* Z_Construct_UPackage__Script_MOBA();
	MOBA_API UScriptStruct* Z_Construct_UScriptStruct_FHeroAction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOBA_API UClass* Z_Construct_UClass_AEquipment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOBA_API UClass* Z_Construct_UClass_UHeroActionx_NoRegister();
	MOBA_API UClass* Z_Construct_UClass_UHeroActionx();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
static UEnum* EHeroActionStatus_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_MOBA_EHeroActionStatus, Z_Construct_UPackage__Script_MOBA(), TEXT("EHeroActionStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeroActionStatus(EHeroActionStatus_StaticEnum, TEXT("/Script/MOBA"), TEXT("EHeroActionStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_MOBA_EHeroActionStatus()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MOBA();
		extern uint32 Get_Z_Construct_UEnum_MOBA_EHeroActionStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeroActionStatus"), 0, Get_Z_Construct_UEnum_MOBA_EHeroActionStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHeroActionStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EHeroActionStatus::Default"), 0);
			EnumNames.Emplace(TEXT("EHeroActionStatus::MoveToPosition"), 1);
			EnumNames.Emplace(TEXT("EHeroActionStatus::MoveToActor"), 2);
			EnumNames.Emplace(TEXT("EHeroActionStatus::FollowActor"), 3);
			EnumNames.Emplace(TEXT("EHeroActionStatus::AttackActor"), 4);
			EnumNames.Emplace(TEXT("EHeroActionStatus::MovingAttackActor"), 5);
			EnumNames.Emplace(TEXT("EHeroActionStatus::MoveAndAttack"), 6);
			EnumNames.Emplace(TEXT("EHeroActionStatus::SpellToPosition"), 7);
			EnumNames.Emplace(TEXT("EHeroActionStatus::SpellToActor"), 8);
			EnumNames.Emplace(TEXT("EHeroActionStatus::SpellToDirection"), 9);
			EnumNames.Emplace(TEXT("EHeroActionStatus::SpellToSelf"), 10);
			EnumNames.Emplace(TEXT("EHeroActionStatus::MoveToPickup"), 11);
			EnumNames.Emplace(TEXT("EHeroActionStatus::MoveToThrowEqu"), 12);
			EnumNames.Emplace(TEXT("EHeroActionStatus::ThrowEquToActor"), 13);
			EnumNames.Emplace(TEXT("EHeroActionStatus::AttackSceneObject"), 14);
			EnumNames.Emplace(TEXT("EHeroActionStatus::EHeroActionStatus_MAX"), 15);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EHeroActionStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("AttackActor.ToolTip"), TEXT("???\x06e4H??"));
			MetaData->SetValue(ReturnEnum, TEXT("AttackSceneObject.ToolTip"), TEXT("????\n???\x02f5??H"));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("FollowActor.ToolTip"), TEXT("???\x02a8????w???H????"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(ReturnEnum, TEXT("MoveAndAttack.ToolTip"), TEXT("?\x4cbe???????????w?\x0124H"));
			MetaData->SetValue(ReturnEnum, TEXT("MoveToActor.ToolTip"), TEXT("???\x02a8????w?\x063c?"));
			MetaData->SetValue(ReturnEnum, TEXT("MoveToPickup.ToolTip"), TEXT("???\x076b??w?\x063c\x042a??\x07af?"));
			MetaData->SetValue(ReturnEnum, TEXT("MoveToPosition.ToolTip"), TEXT("???Q???l??"));
			MetaData->SetValue(ReturnEnum, TEXT("MoveToThrowEqu.ToolTip"), TEXT("?\x07f8?"));
			MetaData->SetValue(ReturnEnum, TEXT("MovingAttackActor.ToolTip"), TEXT("?????w???H"));
			MetaData->SetValue(ReturnEnum, TEXT("SpellToActor.ToolTip"), TEXT("???w?a?I???\x07af?"));
			MetaData->SetValue(ReturnEnum, TEXT("SpellToDirection.ToolTip"), TEXT("???w??"));
			MetaData->SetValue(ReturnEnum, TEXT("SpellToPosition.ToolTip"), TEXT("A?I?a?O ???\x02a4??J???\x0124H???U?\x04e7???"));
			MetaData->SetValue(ReturnEnum, TEXT("SpellToSelf.ToolTip"), TEXT("???V??"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_MOBA_EHeroActionStatus_CRC() { return 3930572800U; }
class UScriptStruct* FHeroAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOBA_API uint32 Get_Z_Construct_UScriptStruct_FHeroAction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroAction, Z_Construct_UPackage__Script_MOBA(), TEXT("HeroAction"), sizeof(FHeroAction), Get_Z_Construct_UScriptStruct_FHeroAction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeroAction(FHeroAction::StaticStruct, TEXT("/Script/MOBA"), TEXT("HeroAction"), false, nullptr, nullptr);
static struct FScriptStruct_MOBA_StaticRegisterNativesFHeroAction
{
	FScriptStruct_MOBA_StaticRegisterNativesFHeroAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeroAction")),new UScriptStruct::TCppStructOps<FHeroAction>);
	}
} ScriptStruct_MOBA_StaticRegisterNativesFHeroAction;
	UScriptStruct* Z_Construct_UScriptStruct_FHeroAction()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MOBA();
		extern uint32 Get_Z_Construct_UScriptStruct_FHeroAction_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeroAction"), sizeof(FHeroAction), Get_Z_Construct_UScriptStruct_FHeroAction_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HeroAction"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FHeroAction>, EStructFlags(0x00000001));
			UProperty* NewProp_TimePoint = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TimePoint"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimePoint, FHeroAction), 0x0010000000000005);
			UProperty* NewProp_SequenceNumber = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SequenceNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SequenceNumber, FHeroAction), 0x0010000000000005);
			UProperty* NewProp_TargetIndex1 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetIndex1"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TargetIndex1, FHeroAction), 0x0010000000000005);
			UProperty* NewProp_TargetVec2 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetVec2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetVec2, FHeroAction), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_TargetVec1 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetVec1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetVec1, FHeroAction), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_TargetEquipment = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetEquipment"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TargetEquipment, FHeroAction), 0x0010000000000005, Z_Construct_UClass_AEquipment_NoRegister());
			UProperty* NewProp_TargetActor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TargetActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TargetActor, FHeroAction), 0x0010000000000005, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_ActionStatus = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActionStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ActionStatus, FHeroAction), 0x0010000000000005, Z_Construct_UEnum_MOBA_EHeroActionStatus());
			UProperty* NewProp_ActionStatus_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ActionStatus, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TimePoint, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_TimePoint, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TimePoint, TEXT("ToolTip"), TEXT("for time start point"));
			MetaData->SetValue(NewProp_SequenceNumber, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_SequenceNumber, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TargetIndex1, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_TargetIndex1, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TargetIndex1, TEXT("ToolTip"), TEXT("for SpellToPosition, SpellToDirection, MoveToThrowEqu"));
			MetaData->SetValue(NewProp_TargetVec2, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_TargetVec2, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TargetVec2, TEXT("ToolTip"), TEXT("for SpellToPosition, SpellToDirection"));
			MetaData->SetValue(NewProp_TargetVec1, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_TargetVec1, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TargetVec1, TEXT("ToolTip"), TEXT("for MoveToPosition, MoveAndAttack, SpellToPosition, SpellToDirection, MoveToThrowEqu"));
			MetaData->SetValue(NewProp_TargetEquipment, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_TargetEquipment, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TargetEquipment, TEXT("ToolTip"), TEXT("for MoveToPickup"));
			MetaData->SetValue(NewProp_TargetActor, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_TargetActor, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
			MetaData->SetValue(NewProp_TargetActor, TEXT("ToolTip"), TEXT("for MoveToActor, FollowActor, AttackActor, MovingAttackActor, SpellToActor, ThrowEquToActor"));
			MetaData->SetValue(NewProp_ActionStatus, TEXT("Category"), TEXT("HeroAction"));
			MetaData->SetValue(NewProp_ActionStatus, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeroAction_CRC() { return 820532355U; }
	void UHeroActionx::StaticRegisterNativesUHeroActionx()
	{
	}
	UClass* Z_Construct_UClass_UHeroActionx_NoRegister()
	{
		return UHeroActionx::StaticClass();
	}
	UClass* Z_Construct_UClass_UHeroActionx()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_MOBA();
			OuterClass = UHeroActionx::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UHeroActionx> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HeroActionx.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HeroActionx.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroActionx, 735569595);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroActionx(Z_Construct_UClass_UHeroActionx, &UHeroActionx::StaticClass, TEXT("/Script/MOBA"), TEXT("UHeroActionx"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroActionx);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION