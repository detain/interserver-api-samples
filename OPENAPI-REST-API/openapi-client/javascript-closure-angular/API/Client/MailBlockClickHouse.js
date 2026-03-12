goog.provide('API.Client.MailBlockClickHouse');

/**
 * A block entry from the clickhouse mailblocks server.
 * @record
 */
API.Client.MailBlockClickHouse = function() {}

/**
 * @type {!API.Client.date}
 * @export
 */
API.Client.MailBlockClickHouse.prototype.date;

/**
 * @type {!string}
 * @export
 */
API.Client.MailBlockClickHouse.prototype.from;

/**
 * @type {!string}
 * @export
 */
API.Client.MailBlockClickHouse.prototype.messageId;

/**
 * @type {!string}
 * @export
 */
API.Client.MailBlockClickHouse.prototype.subject;

/**
 * @type {!string}
 * @export
 */
API.Client.MailBlockClickHouse.prototype.to;

