goog.provide('API.Client.DnsUpdateRecord');

/**
 * The request data to update a dns record.
 * @record
 */
API.Client.DnsUpdateRecord = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.name;

/**
 * @type {!API.Client.DnsRecordType}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.type;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.content;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.ttl;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.prio;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.disabled;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.ordername;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsUpdateRecord.prototype.auth;

