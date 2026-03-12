goog.provide('API.Client.DnsNewRecord');

/**
 * Request data for a new DNS record.
 * @record
 */
API.Client.DnsNewRecord = function() {}

/**
 * Name part of record
 * @type {!string}
 * @export
 */
API.Client.DnsNewRecord.prototype.name;

/**
 * @type {!API.Client.DnsRecordType}
 * @export
 */
API.Client.DnsNewRecord.prototype.type;

/**
 * Content of record
 * @type {!string}
 * @export
 */
API.Client.DnsNewRecord.prototype.content;

/**
 * Time-to-live
 * @type {!number}
 * @export
 */
API.Client.DnsNewRecord.prototype.ttl;

/**
 * Priority
 * @type {!number}
 * @export
 */
API.Client.DnsNewRecord.prototype.prio;

