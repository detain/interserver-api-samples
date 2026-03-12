goog.provide('API.Client.VpsServiceAddons');

/**
 * Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 * @record
 */
API.Client.VpsServiceAddons = function() {}

/**
 * Whether a cPanel license is active on this VPS.
 * @type {!boolean}
 * @export
 */
API.Client.VpsServiceAddons.prototype.hasCpanel;

/**
 * Whether a DirectAdmin license is active on this VPS.
 * @type {!boolean}
 * @export
 */
API.Client.VpsServiceAddons.prototype.hasDirectadmin;

/**
 * Whether a Fantastico license is active on this VPS.
 * @type {!boolean}
 * @export
 */
API.Client.VpsServiceAddons.prototype.hasFantastico;

/**
 * Whether a Softaculous license is active on this VPS.
 * @type {!boolean}
 * @export
 */
API.Client.VpsServiceAddons.prototype.hasSoftaculous;

/**
 * Whether extra disk space has been added to this VPS.
 * @type {!boolean}
 * @export
 */
API.Client.VpsServiceAddons.prototype.hasHdspace;

/**
 * Whether a dedicated IP address is assigned to this VPS.
 * @type {!boolean}
 * @export
 */
API.Client.VpsServiceAddons.prototype.dedicatedIp;

/**
 * List of additional IPv4 addresses assigned to this VPS.
 * @type {!Array<!string>}
 * @export
 */
API.Client.VpsServiceAddons.prototype.extraIps;

/**
 * List of additional IPv6 addresses assigned to this VPS.
 * @type {!Array<!string>}
 * @export
 */
API.Client.VpsServiceAddons.prototype.extraIps6;

/**
 * List of IP addresses that have unpaid charges.
 * @type {!Array<!string>}
 * @export
 */
API.Client.VpsServiceAddons.prototype.unpaidIps;

/**
 * All IPv4 addresses assigned to this VPS.
 * @type {!Array<!string>}
 * @export
 */
API.Client.VpsServiceAddons.prototype.ips;

/**
 * All IPv6 addresses assigned to this VPS.
 * @type {!Array<!string>}
 * @export
 */
API.Client.VpsServiceAddons.prototype.ips6;

/**
 * The add-on service ID for the cPanel license.
 * @type {!number}
 * @export
 */
API.Client.VpsServiceAddons.prototype.cpanelId;

/**
 * Total monthly add-on cost in cents.
 * @type {!number}
 * @export
 */
API.Client.VpsServiceAddons.prototype.cost;

/**
 * List of add-on service IDs active on this VPS.
 * @type {!Array<!string>}
 * @export
 */
API.Client.VpsServiceAddons.prototype.ids;

/**
 * Raw add-on data entries.
 * @type {!Array<!string>}
 * @export
 */
API.Client.VpsServiceAddons.prototype.rdata;

