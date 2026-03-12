goog.provide('API.Client.DomainBillingDetails');

/**
 * Billing information for a domain service including payment status, dates, and cost.
 * @record
 */
API.Client.DomainBillingDetails = function() {}

/**
 * Date of the last invoice for the domain.
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * Current payment status (e.g., Paid, Unpaid).
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.servicePaymentStatus;

/**
 * Billing frequency (e.g., Yearly, Monthly).
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceFrequency;

/**
 * Next billing date (ISO 8601).
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.nextDate;

/**
 * Human-readable next invoice date.
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * Billing currency code.
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceCurrency;

/**
 * Billing currency symbol.
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceCurrencySymbol;

/**
 * Cost breakdown information.
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceCostInfo;

/**
 * @type {!API.Client.DomainBillingExtra}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceExtra;

/**
 * Raw JSON string of extra billing data.
 * @type {!string}
 * @export
 */
API.Client.DomainBillingDetails.prototype.serviceExtraJson;

