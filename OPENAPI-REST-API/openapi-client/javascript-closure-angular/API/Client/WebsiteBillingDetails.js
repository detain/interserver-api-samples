goog.provide('API.Client.WebsiteBillingDetails');

/**
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 * @record
 */
API.Client.WebsiteBillingDetails = function() {}

/**
 * Last invoice date for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * Payment status for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.servicePaymentStatus;

/**
 * Frequency of the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceFrequency;

/**
 * Next date for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.nextDate;

/**
 * Next invoice date for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * Currency for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceCurrency;

/**
 * Currency symbol for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceCurrencySymbol;

/**
 * Coupon for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceCoupon;

/**
 * Cost information for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceCostInfo;

/**
 * Extra information for the service
 * @type {!API.Client.Object}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceExtra;

/**
 * Extra information in JSON format for the service
 * @type {!string}
 * @export
 */
API.Client.WebsiteBillingDetails.prototype.serviceExtraJson;

