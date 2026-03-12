goog.provide('API.Client.ServerBillingDetails');

/**
 * Billing information for a dedicated server service including payment status, billing cycle, and cost.
 * @record
 */
API.Client.ServerBillingDetails = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.servicePaymentStatus;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceFrequency;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.nextDate;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceCurrency;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceCurrencySymbol;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceCostInfo;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceExtra;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerBillingDetails.prototype.serviceExtraJson;

