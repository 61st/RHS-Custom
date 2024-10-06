/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\lxir_common\functions\diagnostics\fn_isDebug.sqf
 *	by YonV
 *
 *	check if debug is enabled
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	<BOOLEAN>
 *
 *	Example:
 *	[] call lxir_common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["lxir_debug_enabled", false]);

_return;
