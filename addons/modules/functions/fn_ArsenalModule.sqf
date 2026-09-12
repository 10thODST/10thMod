params ["_logic", "_units", "_activated"];

if (!_activated) exitWith {};

private _objects = _logic getVariable ["bis_fnc_curatorAttachObjectCurator", []];

{
    [_x, true] call Tenthed_fnc_Arsenal;
} forEach _objects;
