goog.provide('API.Client.ServerNetworkInfo');

/**
 * @record
 */
API.Client.ServerNetworkInfo = function() {}

/**
 * List of VLANs.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerNetworkInfo.prototype.vlans;

/**
 * List of IPv6 VLANs.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerNetworkInfo.prototype.vlans6;

/**
 * @type {!API.Client.ServerNetworkInfo_assets}
 * @export
 */
API.Client.ServerNetworkInfo.prototype.assets;

/**
 * @type {!API.Client.ServerNetworkInfo_switchports}
 * @export
 */
API.Client.ServerNetworkInfo.prototype.switchports;

