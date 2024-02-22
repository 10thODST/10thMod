class CfgPatches {
	class Tenthed_BruteGrenade {
		units[]={};
		weapons[]={};
		ammo[]={
            "Tenthed_A_BruteGrenade",
        };
		magazines[]=
		{
            "Tenthed_M_BruteGrenad",
        };
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"OPTRE_Core",
            "TenthedCore"
		};
		author="Slim, Akira";
	};
};

class CfgAmmo
{
    class GrenadeHand;
	class Tenthed_A_BruteGrenade: GrenadeHand {
		model="\Tenthed_Weapons\BruteGrenade\data\HaloBruteSpikeGrenade.p3d";
		hit=10;
		indirectHit=10;
		indirectHitRange=8;
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
	};
};
class CfgMagazines {
    class HandGrenade;//Grenade
	class Tenthed_M_BruteGrenad: HandGrenade {
		dlc="OPTRE";
		ammo="Tenthed_A_BruteGrenade";
		mass=8;
		displayName="[10th] Brute Grenad";
		descriptionShort="Brute Grenad";
		displayNameShort="Frag";
		model="\Tenthed_Weapons\BruteGrenade\data\HaloBruteSpikeGrenade.p3d";
		picture="\OPTRE_Weapons\explosives\icons\m9.paa";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\FRAG.paa";
		count=1;
		nameSound="handgrenade";
		initSpeed=20;
	};
};