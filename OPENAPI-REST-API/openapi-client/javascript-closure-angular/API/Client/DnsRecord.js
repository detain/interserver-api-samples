goog.provide('API.Client.DnsRecord');

/**
 * A single DNS Record row for a Domain
 * @record
 */
API.Client.DnsRecord = function() {}

/**
 * The ID of the DNS Record.
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.id;

/**
 * The ID of the Domain this is a record of.
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.domainId;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.name;

/**
 * @type {!API.Client.DnsRecordType}
 * @export
 */
API.Client.DnsRecord.prototype.type;

/**
 * The content of the record, such as the IP address or hsotname.
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.content;

/**
 * Time To Live (seconds)
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.ttl;

/**
 * Priority
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.prio;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.disabled;

/**
 * Alternate name to use for sorting
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.ordername;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsRecord.prototype.auth;

