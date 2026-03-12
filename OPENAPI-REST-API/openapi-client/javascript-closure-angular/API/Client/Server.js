goog.provide('API.Client.Server');

/**
 * @record
 */
API.Client.Server = function() {}

/**
 * @type {!boolean}
 * @export
 */
API.Client.Server.prototype.ipmiAuth;

/**
 * @type {!Array<!API.Client.ServerClientLink>}
 * @export
 */
API.Client.Server.prototype.clientLinks;

/**
 * @type {!API.Client.ServerBillingDetails}
 * @export
 */
API.Client.Server.prototype.billingDetails;

/**
 * @type {!string}
 * @export
 */
API.Client.Server.prototype.custCurrency;

/**
 * @type {!string}
 * @export
 */
API.Client.Server.prototype.custCurrencySymbol;

/**
 * @type {!string}
 * @export
 */
API.Client.Server.prototype._package;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.Server.prototype.serviceExtra;

/**
 * @type {!API.Client.Server_locations}
 * @export
 */
API.Client.Server.prototype.locations;

/**
 * @type {!API.Client.ServerNetworkInfo}
 * @export
 */
API.Client.Server.prototype.networkInfo;

/**
 * @type {!API.Client.ServerExtraInfoTables}
 * @export
 */
API.Client.Server.prototype.extraInfoTables;

/**
 * @type {!API.Client.ServerServiceInfo}
 * @export
 */
API.Client.Server.prototype.serviceInfo;

