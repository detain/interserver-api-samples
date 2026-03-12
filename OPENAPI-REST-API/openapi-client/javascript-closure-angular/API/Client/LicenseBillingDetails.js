goog.provide('API.Client.LicenseBillingDetails');

/**
 * Billing information for a software license including payment status, billing cycle, and cost.
 * @record
 */
API.Client.LicenseBillingDetails = function() {}

/**
 * Last invoice date
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * Payment status
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.servicePaymentStatus;

/**
 * Service frequency
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceFrequency;

/**
 * Next date
 * @type {!Date}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.nextDate;

/**
 * Next invoice date
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * Service currency
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceCurrency;

/**
 * Service currency symbol
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceCurrencySymbol;

/**
 * Service coupon
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceCoupon;

/**
 * Service cost information
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceCostInfo;

/**
 * Additional service information
 * @type {!Array<!string>}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceExtra;

/**
 * Additional service information in JSON format
 * @type {!string}
 * @export
 */
API.Client.LicenseBillingDetails.prototype.serviceExtraJson;

