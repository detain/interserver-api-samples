goog.provide('API.Client.BackupOrderPutRequest');

/**
 * Parameters to submit to validate your backup order
 * @record
 */
API.Client.BackupOrderPutRequest = function() {}

/**
 * @type {!boolean}
 * @export
 */
API.Client.BackupOrderPutRequest.prototype.validateOnly;

/**
 * @type {!number}
 * @export
 */
API.Client.BackupOrderPutRequest.prototype.serviceType;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPutRequest.prototype.coupon;

