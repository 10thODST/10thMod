class CfgPatches {
    class Tenthed_ArcherMissile {
        author = "Akira";
        name = "10th ODST: Archer Missile";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {"Tenthed_ArcherMissileTablet"};
    };
};

#include "style.hpp"

class CfgFunctions
{
	class Tenthed
	{
		class Main
		{
			file = "\z\10thMod\addons\functions\ArcherMissile\functions";
			class predator {};
			class predatorInit {
				postInit = 1;
			};
		};
	};
};

class CfgWeapons{
    class ItemCore;
    class ToolKitItem;
    class ToolKit;
    class Item_Base_F;

    // possible fix
    //class ACE_SelfActions;
    //class ACE_Equipment;

    // possible for rank locking
    // if ( ["PRIVATE","CORPORAL","SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"] find (rank player) < 2) then {hint "you must be at least sergeant"};


	class Tenthed_ArcherMissileTablet : ToolKit
	{
		author="Akira";
		_generalMacro="ToolKit";
		scope=2;
		displayName="[10th] Archer Missile Tablet";
		descriptionShort="Missile Tablet gives ability to call archer missile strikes onto targets.";
		picture="\A3\Weapons_F\Items\data\UI\gear_Toolkit_CA.paa";
		model="\A3\Weapons_F\Items\Toolkit";
        class ACE_SelfActions {
            class ACE_Equipment {
                class Tenthed_ArcherMissile_Term {
                    displayName = "Archer Missile on Self";
                    condition = "true";
                    //condition = "_player";
                    //condition = "if([MAJOR] find (rank _player) = MAJOR) then { true }";
                    exceptions[] = {};
                    //statement = "this call Tenthed_fnc_predator}]";
                    statement = "[] spawn Tenthed_fnc_predator";
                };
                class Tenthed_ArcherMissile_Map {
                    displayName = "Archer Missile on Map location";
                    //condition = "true";
                    condition = "true";
                    exceptions[] = {};
                    statement = "this ['Launch',['fromMap']] spawn Tenthed_fnc_predator}]";
                };
            };
        };  
	};
}
