goog.provide('API.Client.Website');

/**
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 * @record
 */
API.Client.Website = function() {}

/**
 * @type {!API.Client.WebsiteServiceInfo}
 * @export
 */
API.Client.Website.prototype.serviceInfo;

/**
 * @type {!Array<!API.Client.WebsiteClientLink>}
 * @export
 */
API.Client.Website.prototype.clientLinks;

/**
 * @type {!API.Client.WebsiteBillingDetails}
 * @export
 */
API.Client.Website.prototype.billingDetails;

/**
 * Customer's currency
 * @type {!string}
 * @export
 */
API.Client.Website.prototype.custCurrency;

/**
 * Customer currency symbol
 * @type {!string}
 * @export
 */
API.Client.Website.prototype.custCurrencySymbol;

/**
 * @type {!API.Client.WebsiteServiceMaster}
 * @export
 */
API.Client.Website.prototype.serviceMaster;

/**
 * Package information
 * @type {!string}
 * @export
 */
API.Client.Website.prototype._package;

/**
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.Website.prototype.serviceExtra;

/**
 * @type {!API.Client.WebsiteExtraInfoTables}
 * @export
 */
API.Client.Website.prototype.extraInfoTables;

