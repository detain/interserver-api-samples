goog.provide('API.Client.MailLog');

/**
 * Mail log records
 * @record
 */
API.Client.MailLog = function() {}

/**
 * total number of mail log entries
 * @type {!number}
 * @export
 */
API.Client.MailLog.prototype.total;

/**
 * number of emails skipped in listing
 * @type {!number}
 * @export
 */
API.Client.MailLog.prototype.skip;

/**
 * number of emails to return
 * @type {!number}
 * @export
 */
API.Client.MailLog.prototype.limit;

/**
 * @type {!Array<!API.Client.MailLogEntry>}
 * @export
 */
API.Client.MailLog.prototype.emails;

