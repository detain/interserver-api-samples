goog.provide('API.Client.DomainServiceType');

/**
 * Service type definition for a domain registration, including name, pricing, and category.
 * @record
 */
API.Client.DomainServiceType = function() {}

/**
 * Service type ID.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesId;

/**
 * Service type name (e.g., .com Registration).
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesName;

/**
 * Service cost per billing period.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesCost;

/**
 * Service category ID.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesCategory;

/**
 * Whether this service type is available for purchase.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesBuyable;

/**
 * Internal service type identifier.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesType;

/**
 * TLD or first configurable field for the service type.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesField1;

/**
 * Second configurable field for the service type.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesField2;

/**
 * Backend module handling this service type.
 * @type {!string}
 * @export
 */
API.Client.DomainServiceType.prototype.servicesModule;

