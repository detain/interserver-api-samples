goog.provide('API.Client.addServer_200_response');

/**
 * @record
 */
API.Client.AddServer200Response = function() {}

/**
 * Status message.
 * @type {!string}
 * @export
 */
API.Client.AddServer200Response.prototype.text;

/**
 * Invoice ID for payment.
 * @type {!number}
 * @export
 */
API.Client.AddServer200Response.prototype.invoice;

/**
 * Server order ID.
 * @type {!number}
 * @export
 */
API.Client.AddServer200Response.prototype.order;

