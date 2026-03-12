goog.provide('API.Client.QuickserverBillingDetails');

/**
 * Billing information for a QuickServer service including payment status, billing cycle, and cost.
 * @record
 */
API.Client.QuickserverBillingDetails = function() {}

/**
 * Last invoice date
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * Payment status
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.servicePaymentStatus;

/**
 * Service frequency
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceFrequency;

/**
 * Next date
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.nextDate;

/**
 * Next invoice date
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * Currency
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceCurrency;

/**
 * Currency symbol
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceCurrencySymbol;

/**
 * Cost information
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceCostInfo;

/**
 * @type {!API.Client.QuickserverServiceExtra}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceExtra;

/**
 * Extra information (JSON format)
 * @type {!string}
 * @export
 */
API.Client.QuickserverBillingDetails.prototype.serviceExtraJson;

