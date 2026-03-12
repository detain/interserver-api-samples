goog.provide('API.Client.DomainOrderResponse');

/**
 * Registrar response metadata returned after a domain order.
 * @record
 */
API.Client.DomainOrderResponse = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DomainOrderResponse.prototype.oPSVersion;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainOrderResponse.prototype.protocol;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainOrderResponse.prototype.isSuccess;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainOrderResponse.prototype.action;

/**
 * @type {!API.Client.DomainOrderResponse_attributes}
 * @export
 */
API.Client.DomainOrderResponse.prototype.attributes;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainOrderResponse.prototype.responseText;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainOrderResponse.prototype.object;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainOrderResponse.prototype.responseCode;

