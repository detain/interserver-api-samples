goog.provide('API.Client.BackupOrderPutResponse');

/**
 * Backup Order validation response
 * @record
 */
API.Client.BackupOrderPutResponse = function() {}

/**
 * @type {!boolean}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype._continue;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.errors;

/**
 * @type {!number}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.serviceType;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.serviceCost;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.originalCost;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.repeatServiceCost;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.hostname;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.password;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.coupon;

/**
 * @type {!number}
 * @export
 */
API.Client.BackupOrderPutResponse.prototype.couponCode;

