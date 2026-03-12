goog.provide('API.Client.WebsiteRow');

/**
 * A result row from the `Webhosting` `GET` request.
 * @record
 */
API.Client.WebsiteRow = function() {}

/**
 * The id of the website.
 * @type {!string}
 * @export
 */
API.Client.WebsiteRow.prototype.websiteId;

/**
 * The hostname of the website.
 * @type {!string}
 * @export
 */
API.Client.WebsiteRow.prototype.websiteHostname;

/**
 * The repeat invoices cost of the website.
 * @type {!string}
 * @export
 */
API.Client.WebsiteRow.prototype.repeatInvoicesCost;

/**
 * The status of the website.
 * @type {!string}
 * @export
 */
API.Client.WebsiteRow.prototype.websiteStatus;

/**
 * The services name of the website.
 * @type {!string}
 * @export
 */
API.Client.WebsiteRow.prototype.servicesName;

/**
 * The comment of the website.
 * @type {!string}
 * @export
 */
API.Client.WebsiteRow.prototype.websiteComment;

