goog.provide('API.Client.License');

/**
 * @record
 */
API.Client.License = function() {}

/**
 * @type {!API.Client.LicenseServiceInfo}
 * @export
 */
API.Client.License.prototype.serviceInfo;

/**
 * @type {!Array<!API.Client.LicenseClientLink>}
 * @export
 */
API.Client.License.prototype.clientLinks;

/**
 * @type {!API.Client.LicenseBillingDetails}
 * @export
 */
API.Client.License.prototype.billingDetails;

/**
 * Customer's currency
 * @type {!string}
 * @export
 */
API.Client.License.prototype.custCurrency;

/**
 * Currency symbol for customer
 * @type {!string}
 * @export
 */
API.Client.License.prototype.custCurrencySymbol;

/**
 * Package name
 * @type {!string}
 * @export
 */
API.Client.License.prototype._package;

/**
 * Extra service information
 * @type {!Array<!string>}
 * @export
 */
API.Client.License.prototype.serviceExtra;

/**
 * @type {!API.Client.License_extraInfoTables}
 * @export
 */
API.Client.License.prototype.extraInfoTables;

/**
 * Extra service overview information
 * @type {!string}
 * @export
 */
API.Client.License.prototype.serviceOverviewExtra;

/**
 * @type {!API.Client.LicenseServiceType}
 * @export
 */
API.Client.License.prototype.serviceType;

/**
 * License key
 * @type {!string}
 * @export
 */
API.Client.License.prototype.licenseKey;

