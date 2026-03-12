goog.provide('API.Client.VpsBillingDetails');

/**
 * Billing information for a VPS service including payment status, billing cycle, and cost.
 * @record
 */
API.Client.VpsBillingDetails = function() {}

/**
 * Last invoice date
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * Payment status
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.servicePaymentStatus;

/**
 * Billing frequency
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceFrequency;

/**
 * Next billing date
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.nextDate;

/**
 * Next invoice date
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * Currency used for billing
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceCurrency;

/**
 * Currency symbol
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceCurrencySymbol;

/**
 * Billing coupon code
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceCoupon;

/**
 * Cost information
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceCostInfo;

/**
 * @type {!API.Client.VpsServiceExtra}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceExtra;

/**
 * Additional information in JSON format
 * @type {!string}
 * @export
 */
API.Client.VpsBillingDetails.prototype.serviceExtraJson;

