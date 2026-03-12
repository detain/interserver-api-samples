goog.provide('API.Client.DomainNameserverGetResponse_inner');

/**
 * @record
 */
API.Client.DomainNameserverGetResponseInner = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DomainNameserverGetResponseInner.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainNameserverGetResponseInner.prototype.ipaddress;

/**
 * Whether the registrar allows deletion of this nameserver entry.
 * @type {!string}
 * @export
 */
API.Client.DomainNameserverGetResponseInner.prototype.canDelete;

/** @enum {string} */
API.Client.DomainNameserverGetResponseInner.CanDeleteEnum = { 
  0: '0',
  1: '1',
}
