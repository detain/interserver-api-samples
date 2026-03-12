goog.provide('API.Client.MailBlockRspamd');

/**
 * This is a block entry from the rspamd block list.
 * @record
 */
API.Client.MailBlockRspamd = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.MailBlockRspamd.prototype.from;

/**
 * @type {!string}
 * @export
 */
API.Client.MailBlockRspamd.prototype.subject;

