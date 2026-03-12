goog.provide('API.Client.VpsCPData');

/**
 * Control panel license options available for a VPS.
 * @record
 */
API.Client.VpsCPData = function() {}

/**
 * Control panel name (e.g., cPanel).
 * @type {!string}
 * @export
 */
API.Client.VpsCPData.prototype.name;

/**
 * Monthly cost in cents for the control panel license.
 * @type {!number}
 * @export
 */
API.Client.VpsCPData.prototype.cost;

