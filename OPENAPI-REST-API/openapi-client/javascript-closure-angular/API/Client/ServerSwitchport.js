goog.provide('API.Client.ServerSwitchport');

/**
 * @record
 */
API.Client.ServerSwitchport = function() {}

/**
 * Unique identifier for the switchport.
 * @type {!number}
 * @export
 */
API.Client.ServerSwitchport.prototype.switchportId;

/**
 * Unique identifier for the switch associated with the switchport.
 * @type {!string}
 * @export
 */
API.Client.ServerSwitchport.prototype.switchId;

/**
 * Name of the switch associated with the switchport.
 * @type {!string}
 * @export
 */
API.Client.ServerSwitchport.prototype._switch;

/**
 * Port name on the switch.
 * @type {!string}
 * @export
 */
API.Client.ServerSwitchport.prototype.port;

/**
 * Blade name associated with the port.
 * @type {!string}
 * @export
 */
API.Client.ServerSwitchport.prototype.blade;

/**
 * Port identifier.
 * @type {!string}
 * @export
 */
API.Client.ServerSwitchport.prototype.justport;

/**
 * Identifier for the graph associated with the switchport.
 * @type {!string}
 * @export
 */
API.Client.ServerSwitchport.prototype.graphId;

/**
 * Unique identifier of the asset associated with the switchport.
 * @type {!number}
 * @export
 */
API.Client.ServerSwitchport.prototype.assetId;

/**
 * List of VLANs associated with the switchport.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerSwitchport.prototype.vlans;

/**
 * List of IPv6 VLANs associated with the switchport.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerSwitchport.prototype.vlans6;

