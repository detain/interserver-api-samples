goog.provide('API.Client.BackupBillingDetails');

/**
 * @record
 */
API.Client.BackupBillingDetails = function() {}

/**
 * Last invoice date of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceLastInvoiceDate;

/**
 * Payment status of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.servicePaymentStatus;

/**
 * Billing frequency of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceFrequency;

/**
 * Next billing date of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.nextDate;

/**
 * Next invoice date of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceNextInvoiceDate;

/**
 * Currency of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceCurrency;

/**
 * Currency symbol of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceCurrencySymbol;

/**
 * Cost information of the service.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceCostInfo;

/**
 * Service Extra Info
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceExtra;

/**
 * JSON representation of extra service information.
 * @type {!string}
 * @export
 */
API.Client.BackupBillingDetails.prototype.serviceExtraJson;

