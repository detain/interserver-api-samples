goog.provide('API.Client.ServiceOrderPostResponse');

/**
 * Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 * @record
 */
API.Client.ServiceOrderPostResponse = function() {}

/**
 * Whether the order was accepted and can proceed to payment.
 * @type {!boolean}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype._continue;

/**
 * List of validation errors (empty on success).
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype.errors;

/**
 * Total cost of the order.
 * @type {!string}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype.totalCost;

/**
 * Primary invoice ID for payment.
 * @type {!string}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype.iid;

/**
 * All invoice identifiers associated with the order.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype.iids;

/**
 * Numeric invoice IDs for use with billing endpoints.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype.realIids;

/**
 * The new service ID created by the order.
 * @type {!number}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype.serviceId;

/**
 * Human-readable description of the invoice.
 * @type {!string}
 * @export
 */
API.Client.ServiceOrderPostResponse.prototype.invoiceDescription;

