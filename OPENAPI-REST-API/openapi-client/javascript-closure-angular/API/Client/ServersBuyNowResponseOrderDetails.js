goog.provide('API.Client.ServersBuyNowResponse_order_details');

/**
 * Details of the placed order.
 * @record
 */
API.Client.ServersBuyNowResponseOrderDetails = function() {}

/**
 * The newly created service ID for the ordered server.
 * @type {!number}
 * @export
 */
API.Client.ServersBuyNowResponseOrderDetails.prototype.serviceId;

/**
 * The invoice ID generated for the order.
 * @type {!number}
 * @export
 */
API.Client.ServersBuyNowResponseOrderDetails.prototype.invoiceId;

