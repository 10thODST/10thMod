params ["_object", "_vehicleName", "_className", "_spawnPoint"];

private _actionLabel = format ["Spawn %1", _vehicleName];

_object addAction [
    _actionLabel,
    {
        params ["_target", "_caller", "_actionId", "_arguments"];

        _arguments params ["_className", "_spawnPoint"];

        private _pad1 = if (surfaceIsWater (getPosASL _spawnPoint)) then {
            getPosASL _spawnPoint
        } else {
            getPosATL _spawnPoint
        };

        private _dir = getDir _spawnPoint;

        private _veh = createVehicle [
            _className,
            _pad1,
            [],
            0,
            "NONE"
        ];

        _veh setDir _dir;
    },
    [_className, _spawnPoint]
];