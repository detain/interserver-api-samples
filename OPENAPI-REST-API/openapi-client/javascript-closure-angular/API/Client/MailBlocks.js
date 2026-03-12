goog.provide('API.Client.MailBlocks');

/**
 * The listing of blocked emails.
 * @record
 */
API.Client.MailBlocks = function() {}

/**
 * @type {!Array<!API.Client.MailBlockClickHouse>}
 * @export
 */
API.Client.MailBlocks.prototype.local;

/**
 * @type {!Array<!API.Client.MailBlockClickHouse>}
 * @export
 */
API.Client.MailBlocks.prototype.mbtrap;

/**
 * @type {!Array<!API.Client.MailBlockRspamd>}
 * @export
 */
API.Client.MailBlocks.prototype.subject;

