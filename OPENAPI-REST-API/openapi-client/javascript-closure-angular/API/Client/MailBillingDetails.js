goog.provide('API.Client.MailBillingDetails');

/**
 * Billing information for a mail service including payment status, billing cycle, and cost.
 * @record
 */
API.Client.MailBillingDetails = function() {}

/**
 * The last invoice date of the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * The payment status of the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.servicePaymentStatus;

/**
 * The frequency of the service payment.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceFrequency;

/**
 * The next payment date of the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.nextDate;

/**
 * The next invoice date of the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * The currency of the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceCurrency;

/**
 * The currency symbol of the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceCurrencySymbol;

/**
 * The cost information of the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceCostInfo;

/**
 * Extra information for the service.
 * @type {!Array<!string>}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceExtra;

/**
 * Extra JSON information for the service.
 * @type {!string}
 * @export
 */
API.Client.MailBillingDetails.prototype.serviceExtraJson;

