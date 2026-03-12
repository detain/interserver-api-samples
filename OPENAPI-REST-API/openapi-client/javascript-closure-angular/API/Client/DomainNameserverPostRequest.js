goog.provide('API.Client.DomainNameserverPostRequest');

/**
 * Payload for adding a registered nameserver (glue record).
 * @record
 */
API.Client.DomainNameserverPostRequest = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DomainNameserverPostRequest.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainNameserverPostRequest.prototype.ipAddress;

