goog.provide('API.Client.MailSchema');

/**
 * @record
 */
API.Client.MailSchema = function() {}

/**
 * @type {!API.Client.MailServiceInfo}
 * @export
 */
API.Client.MailSchema.prototype.serviceInfo;

/**
 * Links related to the mail service for clients.
 * @type {!Array<!API.Client.MailClientLink>}
 * @export
 */
API.Client.MailSchema.prototype.clientLinks;

/**
 * @type {!API.Client.MailBillingDetails}
 * @export
 */
API.Client.MailSchema.prototype.billingDetails;

/**
 * The customer's currency.
 * @type {!string}
 * @export
 */
API.Client.MailSchema.prototype.custCurrency;

/**
 * The currency symbol for the customer.
 * @type {!string}
 * @export
 */
API.Client.MailSchema.prototype.custCurrencySymbol;

/**
 * The package of the mail service.
 * @type {!string}
 * @export
 */
API.Client.MailSchema.prototype._package;

/**
 * @type {!API.Client.MailSchema_extraInfoTables}
 * @export
 */
API.Client.MailSchema.prototype.extraInfoTables;

/**
 * @type {!API.Client.MailServiceType}
 * @export
 */
API.Client.MailSchema.prototype.serviceType;

/**
 * The usage count of the mail service.
 * @type {!string}
 * @export
 */
API.Client.MailSchema.prototype.usageCount;

/**
 * Extra information for the mail service.
 * @type {!Array<!string>}
 * @export
 */
API.Client.MailSchema.prototype.serviceExtra;

