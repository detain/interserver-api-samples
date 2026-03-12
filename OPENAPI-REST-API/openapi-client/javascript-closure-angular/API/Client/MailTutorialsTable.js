goog.provide('API.Client.MailTutorialsTable');

/**
 * A table of tutorial links displayed for a mail service.
 * @record
 */
API.Client.MailTutorialsTable = function() {}

/**
 * The title of the tutorials table.
 * @type {!string}
 * @export
 */
API.Client.MailTutorialsTable.prototype.title;

/**
 * The rows of the tutorials table.
 * @type {!Array<!API.Client.MailTutorialsTableRow>}
 * @export
 */
API.Client.MailTutorialsTable.prototype.rows;

