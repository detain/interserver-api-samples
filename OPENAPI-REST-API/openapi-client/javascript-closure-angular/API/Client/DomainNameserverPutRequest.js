goog.provide('API.Client.DomainNameserverPutRequest');

/**
 * Payload for replacing the assigned nameserver list for a domain.
 * @record
 */
API.Client.DomainNameserverPutRequest = function() {}

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.DomainNameserverPutRequest.prototype.nameserver;

