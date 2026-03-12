goog.provide('API.Client.MailExtraInfoTable');

/**
 * A supplementary information table for a mail service (e.g., connection details).
 * @record
 */
API.Client.MailExtraInfoTable = function() {}

/**
 * The title of the extra info table.
 * @type {!string}
 * @export
 */
API.Client.MailExtraInfoTable.prototype.title;

/**
 * The rows of the extra info table.
 * @type {!Array<!API.Client.MailExtraInfoTableRow>}
 * @export
 */
API.Client.MailExtraInfoTable.prototype.rows;

