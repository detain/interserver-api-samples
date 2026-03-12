goog.provide('API.Client.DomainOrder');

/**
 * Ordering metadata for domain registration and transfers.
 * @record
 */
API.Client.DomainOrder = function() {}

/**
 * Cost of Whois Privacy
 * @type {!string}
 * @export
 */
API.Client.DomainOrder.prototype.whoisPrivacyCost;

/**
 * @type {!API.Client.DomainOrder_services}
 * @export
 */
API.Client.DomainOrder.prototype.services;

/**
 * Map of TLDs to domain service IDs.
 * @type {!API.Client.Object}
 * @export
 */
API.Client.DomainOrder.prototype.tldServices;

