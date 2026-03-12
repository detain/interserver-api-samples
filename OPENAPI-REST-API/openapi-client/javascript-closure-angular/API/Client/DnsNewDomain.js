goog.provide('API.Client.DnsNewDomain');

/**
 * The request for a new domain to be managed by the dns servers.
 * @record
 */
API.Client.DnsNewDomain = function() {}

/**
 * The domain name.
 * @type {!string}
 * @export
 */
API.Client.DnsNewDomain.prototype.domain;

/**
 * IP Address to point the domain to.
 * @type {!string}
 * @export
 */
API.Client.DnsNewDomain.prototype.ip;

