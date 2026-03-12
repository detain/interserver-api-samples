goog.provide('API.Client.MailRow');

/**
 * A result row from the `Mail` `GET` request.
 * @record
 */
API.Client.MailRow = function() {}

/**
 * The id of the mail.
 * @type {!string}
 * @export
 */
API.Client.MailRow.prototype.mailId;

/**
 * The repeat invoices cost of the mail.
 * @type {!string}
 * @export
 */
API.Client.MailRow.prototype.repeatInvoicesCost;

/**
 * The username of the mail.
 * @type {!string}
 * @export
 */
API.Client.MailRow.prototype.mailUsername;

/**
 * The status of the mail.
 * @type {!string}
 * @export
 */
API.Client.MailRow.prototype.mailStatus;

/**
 * The services name of the mail.
 * @type {!string}
 * @export
 */
API.Client.MailRow.prototype.servicesName;

