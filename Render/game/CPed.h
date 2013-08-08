/*
    SA::Render source file
    CPed structure
*/
#pragma once
#include "CPhysical.h"
#include "CPedSound.h"
#include "CPedIntelligence.h"
#include "CPlayerData.h"
#include "CBone.h"
#include "CPedAcquaintance.h"
#include "RenderWare.h"
#include "CPedIK.h"
#include "CVehicle.h"
#include "CWeapon.h"

#pragma pack(push, 1)
struct CPed
{
    CPhysical ped;
    char field_138[348];
    CPedSound sound;
    char field_394[164];
    char field_438[40];
    char field_460;
    char gap_461[7];
    int field_468;
    int field_46C;
    int field_470;
    int field_474;
    int field_478;
    CPedIntelligence *intelligence;
    CPlayerData *m_pPlayerData;
    char field_484;
    char gap_485[3];
    CBone *bones[19];
    int animGroup;
    int field_4D8;
    int field_4DC;
    CPedAcquaintance acquaintance;
    RpClump *weapon;
    RwFrame *weaponGunflash;
    int googles;
    int pGooglesType;
    short weaponGunflashAlphaMP1;
    short field_506;
    short weaponGunflashAlphaMP2;
    short field_50A;
    CPedIK pedIK;
    int field_52C;
    int field_530;
    int field_534;
    int field_538;
    char gap_53C[4];
    int field_540;
    int field_544;
    int armour;
    int field_54C;
    int field_550;
    float field_554;
    int Zangle;
    float ZangleAiming;
    int field_560;
    int field_564;
    int field_568;
    RwV3D field_56C;
    RwV3D field_578;
    int field_584;
    float field_588;
    struct CVehicle *vehicle;
    int field_590;
    int field_594;
    int pedType;
    int field_59C;
    CWeapon weaponSlots[13];
    int field_70C;
    int field_710;
    char gap_714[4];
    char m_bActiveWeaponSlot;
    char field_719;
    char weaponAccuracy;
    char gap_71B[1];
    int m_pTargetedObject;
    char gap_720[12];
    char weaponSkill;
    char field_72D;
    char field_72E;
    char field_72F;
    int attachedFire;
    int field_734;
    int field_738;
    int field_73C;
    int field_740;
    int field_744;
    int field_748;
    int field_74C;
    int m_iTimeToDoBloodFootprints;
    char field_754;
    char gap_755[1];
    short field_756;
    int field_758;
    char gap_75C[4];
    char field_760;
    char gap_761[3];
    int field_764;
    int field_768;
    char gap_76C[20];
    int turretPosMode;
    int field_784;
    int field_788;
    int enEx;
    int field_790;
    short m_sSpecialModelIndex;
    char gap_796[2];
    int field_798;
    int field_79C;
};
#pragma pack(pop)