goog.provide('API.Client.MailLog');

/**
 * Paginated mail log response.  Contains the full matched count (`total`) plus a page of `MailLogEntry` records.  The `total` reflects the grouping mode: with `groupby=recipient` it counts delivery attempts, with `groupby=message` it counts unique messages.
 * @record
 */
API.Client.MailLog = function() {}

/**
 * Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode.
 * @type {!number}
 * @export
 */
API.Client.MailLog.prototype.total;

/**
 * The `skip` value used for this page (echoed from the request).
 * @type {!number}
 * @export
 */
API.Client.MailLog.prototype.skip;

/**
 * The `limit` value used for this page (echoed from the request).
 * @type {!number}
 * @export
 */
API.Client.MailLog.prototype.limit;

/**
 * @type {!Array<!API.Client.MailLogEntry>}
 * @export
 */
API.Client.MailLog.prototype.emails;

