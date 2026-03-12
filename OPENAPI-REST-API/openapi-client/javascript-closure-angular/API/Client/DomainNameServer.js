goog.provide('API.Client.DomainNameServer');

/**
 * A single registered nameserver entry with glue IPs.
 * @record
 */
API.Client.DomainNameServer = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DomainNameServer.prototype.sortorder;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainNameServer.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainNameServer.prototype.ipaddress;

