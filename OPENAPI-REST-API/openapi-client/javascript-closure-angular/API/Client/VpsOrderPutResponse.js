goog.provide('API.Client.VpsOrderPutResponse');

/**
 * Response from VPS order validation request
 * @record
 */
API.Client.VpsOrderPutResponse = function() {}

/**
 * @type {!boolean}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype._continue;

/**
 * @type {!Array<!API.Client.AnyType>}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.errors;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.couponCode;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.serviceCost;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.sliceCost;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.serviceType;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.repeatSliceCost;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.originalSliceCost;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.originalCost;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.repeatServiceCost;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.monthlyServiceCost;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.custid;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.os;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.slices;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.platform;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.controlpanel;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.period;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.location;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.version;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.hostname;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.coupon;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutResponse.prototype.rootpass;

