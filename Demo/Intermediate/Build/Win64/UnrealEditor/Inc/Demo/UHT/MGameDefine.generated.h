// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MGameDefine.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_MGameDefine_generated_h
#error "MGameDefine.generated.h already included, missing '#pragma once' in MGameDefine.h"
#endif
#define DEMO_MGameDefine_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Demo_Source_Demo_Public_MGameDefine_h


#define FOREACH_ENUM_ERPCERRORCODE(op) \
	op(ERpcErrorCode::Ok) \
	op(ERpcErrorCode::NotEnough) \
	op(ERpcErrorCode::IllegalParam) \
	op(ERpcErrorCode::NeedReq) \
	op(ERpcErrorCode::InValidConfig) \
	op(ERpcErrorCode::Unknown) 

enum class ERpcErrorCode : uint8;
template<> struct TIsUEnumClass<ERpcErrorCode> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<ERpcErrorCode>();

#define FOREACH_ENUM_ELOGINCODE(op) \
	op(ELoginCode::Ok) \
	op(ELoginCode::DuplicateLogin) \
	op(ELoginCode::Unknown) 

enum class ELoginCode : uint8;
template<> struct TIsUEnumClass<ELoginCode> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<ELoginCode>();

#define FOREACH_ENUM_EGENDER(op) \
	op(EGender::None) \
	op(EGender::Male) \
	op(EGender::Female) 

enum class EGender : uint8;
template<> struct TIsUEnumClass<EGender> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EGender>();

#define FOREACH_ENUM_EBIRTH(op) \
	op(EBirth::None) \
	op(EBirth::Student) \
	op(EBirth::Female) 

enum class EBirth : uint8;
template<> struct TIsUEnumClass<EBirth> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EBirth>();

#define FOREACH_ENUM_EROLECLASS(op) \
	op(ERoleClass::None) \
	op(ERoleClass::Warrior) \
	op(ERoleClass::Mage) \
	op(ERoleClass::Warlock) \
	op(ERoleClass::Ranger) \
	op(ERoleClass::Druid) \
	op(ERoleClass::Paladin) \
	op(ERoleClass::Priest) 

enum class ERoleClass : uint8;
template<> struct TIsUEnumClass<ERoleClass> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<ERoleClass>();

#define FOREACH_ENUM_ECAMP(op) \
	op(ECamp::None) \
	op(ECamp::Alliance) \
	op(ECamp::Horde) 

enum class ECamp : uint8;
template<> struct TIsUEnumClass<ECamp> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<ECamp>();

#define FOREACH_ENUM_EITEMSTATE(op) \
	op(EItemState::None) \
	op(EItemState::Dropped) \
	op(EItemState::Equipped) 

enum class EItemState : uint8;
template<> struct TIsUEnumClass<EItemState> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EItemState>();

#define FOREACH_ENUM_ERACE(op) \
	op(ERace::None) \
	op(ERace::Orc) \
	op(ERace::Dwarf) \
	op(ERace::Human) \
	op(ERace::Elven) \
	op(ERace::Furry) \
	op(ERace::Undead) \
	op(ERace::Demon) \
	op(ERace::Dragon) 

enum class ERace : uint8;
template<> struct TIsUEnumClass<ERace> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<ERace>();

#define FOREACH_ENUM_EHUMANBRANCH(op) \
	op(EHumanBranch::None) 

enum class EHumanBranch : uint8;
template<> struct TIsUEnumClass<EHumanBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EHumanBranch>();

#define FOREACH_ENUM_EORCBRANCH(op) \
	op(EOrcBranch::None) 

enum class EOrcBranch : uint8;
template<> struct TIsUEnumClass<EOrcBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EOrcBranch>();

#define FOREACH_ENUM_EDWARFBRANCH(op) \
	op(EDwarfBranch::None) 

enum class EDwarfBranch : uint8;
template<> struct TIsUEnumClass<EDwarfBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EDwarfBranch>();

#define FOREACH_ENUM_EELVENBRANCH(op) \
	op(EElvenBranch::None) 

enum class EElvenBranch : uint8;
template<> struct TIsUEnumClass<EElvenBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EElvenBranch>();

#define FOREACH_ENUM_EFURRYBRANCH(op) \
	op(EFurryBranch::None) 

enum class EFurryBranch : uint8;
template<> struct TIsUEnumClass<EFurryBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EFurryBranch>();

#define FOREACH_ENUM_EUNDEADBRANCH(op) \
	op(EUndeadBranch::None) 

enum class EUndeadBranch : uint8;
template<> struct TIsUEnumClass<EUndeadBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EUndeadBranch>();

#define FOREACH_ENUM_EDEMONBRANCH(op) \
	op(EDemonBranch::None) 

enum class EDemonBranch : uint8;
template<> struct TIsUEnumClass<EDemonBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EDemonBranch>();

#define FOREACH_ENUM_EDRAGONBRANCH(op) \
	op(EDragonBranch::None) 

enum class EDragonBranch : uint8;
template<> struct TIsUEnumClass<EDragonBranch> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EDragonBranch>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Trash) \
	op(EItemType::Material) \
	op(EItemType::Equipment) \
	op(EItemType::Mission) \
	op(EItemType::Potion) \
	op(EItemType::Scroll) \
	op(EItemType::Book) \
	op(EItemType::Ammunition) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EEQUIPSLOT(op) \
	op(EEquipSlot::Unknown) \
	op(EEquipSlot::Head) \
	op(EEquipSlot::Shoulder) \
	op(EEquipSlot::Cloak) \
	op(EEquipSlot::Armor) \
	op(EEquipSlot::Gloves) \
	op(EEquipSlot::Belt) \
	op(EEquipSlot::Shoes) \
	op(EEquipSlot::Neck) \
	op(EEquipSlot::Ring1) \
	op(EEquipSlot::Ring2) \
	op(EEquipSlot::Weapon1) \
	op(EEquipSlot::Weapon2) \
	op(EEquipSlot::RangedWeapon) \
	op(EEquipSlot::Cloth1) \
	op(EEquipSlot::Cloth2) \
	op(EEquipSlot::Pants) \
	op(EEquipSlot::InDoorShoes) \
	op(EEquipSlot::MaxNum) 

enum class EEquipSlot : uint8;
template<> struct TIsUEnumClass<EEquipSlot> { enum { Value = true }; };
template<> DEMO_API UEnum* StaticEnum<EEquipSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
