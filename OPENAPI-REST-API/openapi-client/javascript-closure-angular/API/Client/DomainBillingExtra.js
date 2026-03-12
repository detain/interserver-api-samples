goog.provide('API.Client.DomainBillingExtra');

/**
 * Extended billing context for a domain including registrar order details and contact info.
 * @record
 */
API.Client.DomainBillingExtra = function() {}

/**
 * @type {!API.Client.DomainOrderResponse}
 * @export
 */
API.Client.DomainBillingExtra.prototype.order;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.orderId;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.domainId;

/**
 * @type {!API.Client.DomainProvProcessPending}
 * @export
 */
API.Client.DomainBillingExtra.prototype.provProcessPending;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.email;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.firstname;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.lastname;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.company;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.address;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.address2;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.address3;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.city;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.state;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.zip;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.country;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.phone;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainBillingExtra.prototype.fax;

