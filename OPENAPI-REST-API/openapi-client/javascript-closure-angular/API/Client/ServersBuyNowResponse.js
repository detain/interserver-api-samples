goog.provide('API.Client.ServersBuyNowResponse');

/**
 * Success response after placing a buy-it-now dedicated server order.
 * @record
 */
API.Client.ServersBuyNowResponse = function() {}

/**
 * Whether the order was placed successfully.
 * @type {!boolean}
 * @export
 */
API.Client.ServersBuyNowResponse.prototype.success;

/**
 * Human-readable status message.
 * @type {!string}
 * @export
 */
API.Client.ServersBuyNowResponse.prototype.text;

/**
 * @type {!API.Client.ServersBuyNowResponse_order_details}
 * @export
 */
API.Client.ServersBuyNowResponse.prototype.orderDetails;

