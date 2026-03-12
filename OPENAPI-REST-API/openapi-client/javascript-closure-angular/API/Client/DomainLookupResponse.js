goog.provide('API.Client.DomainLookupResponse');

/**
 * Availability, pricing, and order-field metadata for a domain lookup.
 * @record
 */
API.Client.DomainLookupResponse = function() {}

/**
 * Whether the domain is available to register.
 * @type {!boolean}
 * @export
 */
API.Client.DomainLookupResponse.prototype.available;

/**
 * Whether the domain is marked as premium by the registrar.
 * @type {!boolean}
 * @export
 */
API.Client.DomainLookupResponse.prototype.premium;

/**
 * Indicates if the domain is already used by a website service.
 * @type {!boolean}
 * @export
 */
API.Client.DomainLookupResponse.prototype.website;

/**
 * Indicates if the domain already exists as a domain service on the account.
 * @type {!boolean}
 * @export
 */
API.Client.DomainLookupResponse.prototype.domainService;

/**
 * Service catalog details for the domain's TLD.
 * @type {!API.Client.Object}
 * @export
 */
API.Client.DomainLookupResponse.prototype.service;

/**
 * Whether Whois privacy is available for the TLD.
 * @type {!boolean}
 * @export
 */
API.Client.DomainLookupResponse.prototype.whoisPrivacy;

/**
 * Calculated registration price, when available.
 * @type {!string}
 * @export
 */
API.Client.DomainLookupResponse.prototype._new;

/**
 * Calculated renewal price, when available.
 * @type {!string}
 * @export
 */
API.Client.DomainLookupResponse.prototype.renewal;

/**
 * Calculated transfer price, when available.
 * @type {!string}
 * @export
 */
API.Client.DomainLookupResponse.prototype.transfer;

/**
 * Registrar field requirements for this domain/TLD.
 * @type {!API.Client.Object}
 * @export
 */
API.Client.DomainLookupResponse.prototype.fields;

/**
 * Pricing information normalized to supported currencies.
 * @type {!API.Client.Object}
 * @export
 */
API.Client.DomainLookupResponse.prototype.currencies;

