goog.provide('API.Client.Vps');

/**
 * @record
 */
API.Client.Vps = function() {}

/**
 * @type {!API.Client.VpsServiceInfo}
 * @export
 */
API.Client.Vps.prototype.serviceInfo;

/**
 * @type {!Array<!API.Client.VpsClientLink>}
 * @export
 */
API.Client.Vps.prototype.clientLinks;

/**
 * @type {!API.Client.VpsBillingDetails}
 * @export
 */
API.Client.Vps.prototype.billingDetails;

/**
 * @type {!string}
 * @export
 */
API.Client.Vps.prototype.custCurrency;

/**
 * @type {!string}
 * @export
 */
API.Client.Vps.prototype.custCurrencySymbol;

/**
 * @type {!API.Client.VpsServiceMaster}
 * @export
 */
API.Client.Vps.prototype.serviceMaster;

/**
 * @type {!string}
 * @export
 */
API.Client.Vps.prototype._package;

/**
 * @type {!API.Client.VpsServiceExtra}
 * @export
 */
API.Client.Vps.prototype.serviceExtra;

/**
 * @type {!API.Client.VpsExtraInfoTables}
 * @export
 */
API.Client.Vps.prototype.extraInfoTables;

/**
 * @type {!string}
 * @export
 */
API.Client.Vps.prototype.module;

/**
 * @type {!string}
 * @export
 */
API.Client.Vps.prototype.token;

/**
 * @type {!number}
 * @export
 */
API.Client.Vps.prototype.daLink;

/**
 * @type {!number}
 * @export
 */
API.Client.Vps.prototype.srLink;

/**
 * @type {!API.Client.VpsCPData}
 * @export
 */
API.Client.Vps.prototype.cpData;

/**
 * @type {!API.Client.VpsDAData}
 * @export
 */
API.Client.Vps.prototype.daData;

/**
 * @type {!API.Client.VpsPlesk12Data}
 * @export
 */
API.Client.Vps.prototype.plesk12Data;

/**
 * @type {!API.Client.VpsServiceAddons}
 * @export
 */
API.Client.Vps.prototype.serviceAddons;

/**
 * @type {!string}
 * @export
 */
API.Client.Vps.prototype.osTemplate;

/**
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.Vps.prototype.cpuGraphData;

