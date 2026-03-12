goog.provide('API.Client.DomainSearchResponse');

/**
 * Lookup and suggestion results returned for a domain search.
 * @record
 */
API.Client.DomainSearchResponse = function() {}

/**
 * Indicates whether the registrar search succeeded.
 * @type {!boolean}
 * @export
 */
API.Client.DomainSearchResponse.prototype.success;

/**
 * Human-readable status text from the registrar.
 * @type {!string}
 * @export
 */
API.Client.DomainSearchResponse.prototype.responseText;

/**
 * Response time as reported by the registrar.
 * @type {!string}
 * @export
 */
API.Client.DomainSearchResponse.prototype.responseTime;

/**
 * Availability lookup results for queried domains.
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.DomainSearchResponse.prototype.lookup;

/**
 * Suggested alternative domains and availability data.
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.DomainSearchResponse.prototype.suggest;

/**
 * TLDs evaluated during the search.
 * @type {!Array<!string>}
 * @export
 */
API.Client.DomainSearchResponse.prototype.tlds;

