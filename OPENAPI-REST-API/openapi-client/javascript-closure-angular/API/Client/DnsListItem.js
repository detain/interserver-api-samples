goog.provide('API.Client.DnsListItem');

/**
 * A DNS zone entry with its ID, domain name, and record content.
 * @record
 */
API.Client.DnsListItem = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.DnsListItem.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsListItem.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.DnsListItem.prototype.content;

