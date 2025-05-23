#include "AscMapKit/Public/Powerup/AscMapKitPowerupBillboardComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

UAscMapKitPowerupBillboardComponent::UAscMapKitPowerupBillboardComponent()
{
    // todo: @reminder: update this as new powerups are created
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxAmmoTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_Ammo.T_Editor_Sprites_Player_Powerup_Auxiliary_Ammo'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxAmmoCacheTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_AmmoCache.T_Editor_Sprites_Player_Powerup_Auxiliary_AmmoCache'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxBoostTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_Boost.T_Editor_Sprites_Player_Powerup_Auxiliary_Boost'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxConcealTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_Conceal.T_Editor_Sprites_Player_Powerup_Auxiliary_Conceal'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxInvincibleTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_Invincible.T_Editor_Sprites_Player_Powerup_Auxiliary_Invincible'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxLaserCouplerTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_LaserCoupler.T_Editor_Sprites_Player_Powerup_Auxiliary_LaserCoupler'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxNavmapRevealTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_NavmapReveal.T_Editor_Sprites_Player_Powerup_Auxiliary_NavmapReveal'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxPowerTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_Power.T_Editor_Sprites_Player_Powerup_Auxiliary_Power'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxPowerTransferTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_PowerTransfer.T_Editor_Sprites_Player_Powerup_Auxiliary_PowerTransfer'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> AuxShieldTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Auxiliary_Shield.T_Editor_Sprites_Player_Powerup_Auxiliary_Shield'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriLaserTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Laser.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Laser'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriShredTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Shred.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Shred'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriMechTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Mech.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Mech'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriToxTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Tox.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Tox'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriCoilTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Coil.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Coil'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriPhaseTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Phase.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Phase'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriHydraTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Hydra.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Hydra'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> PriNeutronTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Pri_Neutron.T_Editor_Sprites_Player_Powerup_Weapon_Pri_Neutron'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecAssaultTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Assault.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Assault'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecAssaultPackTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Assault_Pack.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Assault_Pack'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecProwlerTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Prowler.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Prowler'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecProwlerPackTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Prowler_Pack.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Prowler_Pack'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecRNATextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_RNA.T_Editor_Sprites_Player_Powerup_Weapon_Sec_RNA'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecDeadeyeTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Deadeye.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Deadeye'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecDeadeyePackTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Deadeye_Pack.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Deadeye_Pack'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecVexTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Vex.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Vex'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> SecAftershockTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Sec_Aftershock.T_Editor_Sprites_Player_Powerup_Weapon_Sec_Aftershock'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> TetChaffTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Tet_Chaff.T_Editor_Sprites_Player_Powerup_Weapon_Tet_Chaff'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> TetBioTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Tet_Bio.T_Editor_Sprites_Player_Powerup_Weapon_Tet_Bio'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> TetBioPackTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Tet_Bio_Pack.T_Editor_Sprites_Player_Powerup_Weapon_Tet_Bio_Pack'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> TetHowlerTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Tet_Howler.T_Editor_Sprites_Player_Powerup_Weapon_Tet_Howler'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> TetHowlerPackTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Tet_Howler_Pack.T_Editor_Sprites_Player_Powerup_Weapon_Tet_Howler_Pack'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> TetRadialTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Tet_Radial.T_Editor_Sprites_Player_Powerup_Weapon_Tet_Radial'"));
    const ConstructorHelpers::FObjectFinder<UTexture2D> TetRadialPackTextureRef(TEXT("Texture2D'/AscMapKit/Editor/Sprites/Player/Powerup/T_Editor_Sprites_Player_Powerup_Weapon_Tet_Radial_Pack.T_Editor_Sprites_Player_Powerup_Weapon_Tet_Radial_Pack'"));

    if (AuxAmmoTextureRef.Succeeded())
        AuxAmmoTexture = AuxAmmoTextureRef.Object;
    
    if (AuxAmmoCacheTextureRef.Succeeded())
        AuxAmmoCacheTexture = AuxAmmoCacheTextureRef.Object;

    if (AuxBoostTextureRef.Succeeded())
        AuxBoostTexture = AuxBoostTextureRef.Object;

    if (AuxConcealTextureRef.Succeeded())
        AuxConcealTexture = AuxConcealTextureRef.Object;

    if (AuxInvincibleTextureRef.Succeeded())
        AuxInvincibleTexture = AuxInvincibleTextureRef.Object;

    if (AuxLaserCouplerTextureRef.Succeeded())
        AuxLaserCouplerTexture = AuxLaserCouplerTextureRef.Object;

    if (AuxNavmapRevealTextureRef.Succeeded())
        AuxNavmapRevealTexture = AuxNavmapRevealTextureRef.Object;

    if (AuxPowerTextureRef.Succeeded())
        AuxPowerTexture = AuxPowerTextureRef.Object;
    
    if (AuxPowerTransferTextureRef.Succeeded())
        AuxPowerTransferTexture = AuxPowerTransferTextureRef.Object;

    if (AuxShieldTextureRef.Succeeded())
        AuxShieldTexture = AuxShieldTextureRef.Object;
    
    if (PriLaserTextureRef.Succeeded())
        PriLaserTexture = PriLaserTextureRef.Object;

    if (PriShredTextureRef.Succeeded())
        PriShredTexture = PriShredTextureRef.Object;

    if (PriMechTextureRef.Succeeded())
        PriMechTexture = PriMechTextureRef.Object;

    if (PriToxTextureRef.Succeeded())
        PriToxTexture = PriToxTextureRef.Object;

    if (PriCoilTextureRef.Succeeded())
        PriCoilTexture = PriCoilTextureRef.Object;

    if (PriPhaseTextureRef.Succeeded())
        PriPhaseTexture = PriPhaseTextureRef.Object;

    if (PriHydraTextureRef.Succeeded())
        PriHydraTexture = PriHydraTextureRef.Object;

    if (PriNeutronTextureRef.Succeeded())
        PriNeutronTexture = PriNeutronTextureRef.Object;

    // todo: @future, @hammer
    
    if (SecAssaultTextureRef.Succeeded())
        SecAssaultTexture = SecAssaultTextureRef.Object;

    if (SecAssaultPackTextureRef.Succeeded())
        SecAssaultPackTexture = SecAssaultPackTextureRef.Object;

    if (SecProwlerTextureRef.Succeeded())
        SecProwlerTexture = SecProwlerTextureRef.Object;

    if (SecProwlerPackTextureRef.Succeeded())
        SecProwlerPackTexture = SecProwlerPackTextureRef.Object;

    if (SecRNATextureRef.Succeeded())
        SecRNATexture = SecRNATextureRef.Object;

    if (SecDeadeyeTextureRef.Succeeded())
        SecDeadeyeTexture = SecDeadeyeTextureRef.Object;

    if (SecDeadeyePackTextureRef.Succeeded())
        SecDeadeyePackTexture = SecDeadeyePackTextureRef.Object;

    if (SecVexTextureRef.Succeeded())
        SecVexTexture = SecVexTextureRef.Object;

    if (SecAftershockTextureRef.Succeeded())
        SecAftershockTexture = SecAftershockTextureRef.Object;

    if (TetBioTextureRef.Succeeded())
        TetBioTexture = TetBioTextureRef.Object;
    
    if (TetChaffTextureRef.Succeeded())
        TetChaffTexture = TetChaffTextureRef.Object;

    if (TetBioPackTextureRef.Succeeded())
        TetBioPackTexture = TetBioPackTextureRef.Object;

    if (TetHowlerTextureRef.Succeeded())
        TetHowlerTexture = TetHowlerTextureRef.Object;

    if (TetHowlerPackTextureRef.Succeeded())
        TetHowlerPackTexture = TetHowlerPackTextureRef.Object;

    if (TetRadialTextureRef.Succeeded())
        TetRadialTexture = TetRadialTextureRef.Object;

    if (TetRadialPackTextureRef.Succeeded())
        TetRadialPackTexture = TetRadialPackTextureRef.Object;
}

#if WITH_EDITOR
void UAscMapKitPowerupBillboardComponent::EditorUpdatePowerupType(const FAscMapKitPowerupPropertiesStruct &MapKit)
{
    SetSprite(nullptr);

    if (MapKit.UseCustomEditorSprite)
    {
        if (MapKit.CustomEditorSprite)
            SetSprite(MapKit.CustomEditorSprite);

        return;
    }

    // todo: @reminder: update this as new powerups are created
    switch (MapKit.PowerupType)
    {
        case EAscMapKitPowerupTypeEnum::Aux_06:
            SetSprite(AuxAmmoTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_07:
            SetSprite(AuxAmmoCacheTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_08:
            SetSprite(AuxBoostTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_03:
            SetSprite(AuxConcealTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_04:
            SetSprite(AuxInvincibleTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_05:
            SetSprite(AuxLaserCouplerTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_10:
            SetSprite(AuxNavmapRevealTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_01:
            SetSprite(AuxPowerTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_09:
            SetSprite(AuxPowerTransferTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Aux_02:
            SetSprite(AuxShieldTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_01:
            SetSprite(PriLaserTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_02:
            SetSprite(PriShredTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_03:
            SetSprite(PriMechTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_04:
            SetSprite(PriToxTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_05:
            SetSprite(PriCoilTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_06:
            SetSprite(PriPhaseTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_07:
            SetSprite(PriHydraTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Pri_08:
            SetSprite(PriNeutronTexture);
            break;
        // todo: @future, @hammer
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_01:
            SetSprite(SecAssaultTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_02:
            SetSprite(SecAssaultPackTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_03:
            SetSprite(SecProwlerTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_04:
            SetSprite(SecProwlerPackTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_05:
            SetSprite(SecRNATexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_06:
            SetSprite(SecDeadeyeTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_07:
            SetSprite(SecDeadeyePackTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_08:
            SetSprite(SecVexTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Sec_09:
            SetSprite(SecAftershockTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_07:
            SetSprite(TetChaffTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_03:
            SetSprite(TetBioTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_04:
            SetSprite(TetBioPackTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_05:
            SetSprite(TetHowlerTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_06:
            SetSprite(TetHowlerPackTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_01:
            SetSprite(TetRadialTexture);
            break;
        case EAscMapKitPowerupTypeEnum::Weapon_Tet_02:
            SetSprite(TetRadialPackTexture);
            break;
    }

    CurrentTexture = Sprite;
}
#endif