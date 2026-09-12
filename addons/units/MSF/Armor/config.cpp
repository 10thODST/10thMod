class CfgPatches {
    class Tenthed_Units_MSF_Armor {
        author = "Akira";
        name = "10th ODST: Military Without Borders Armors";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
			"MSF_Uniform"
        };
        weapons[] = {};
        units[] = {};
    };
};
class cfgWeapons {
	class VestItem;
	class HeadgearItem;
	class ItemInfo;

    //MGS_Soldier_vest
    class MGS_Soldier_vest;
    class Tenthed_MGS_Soldier_vest : MGS_Soldier_vest{
        displayName = "[10th] MGS_Soldier_vest";
		class ItemInfo : VestItem {
			containerClass = "Supply160";
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
    };
    //MGS_Soldier_vest_02
    class MGS_Soldier_vest_02;
    class Tenthed_MGS_Soldier_vest_02 : MGS_Soldier_vest_02{
        displayName = "[10th] MGS_Soldier_vest_02";
		class ItemInfo : VestItem {
			containerClass = "Supply160";
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
    };
    //MGS_Soldier_vest_03
    class MGS_Soldier_vest_03;
    class Tenthed_MGS_Soldier_vest_03 : MGS_Soldier_vest_03{
        displayName = "[10th] MGS_Soldier_vest_03";
		class ItemInfo : VestItem {
			containerClass = "Supply160";
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 100;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 100;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 100;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 100;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 100;
					passThrough = 0.1;
				};
			};
		};
    };
};
