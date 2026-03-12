goog.provide('API.Client.BackupOrderPostResponse');

/**
 * Backup Order Placement Response
 * @record
 */
API.Client.BackupOrderPostResponse = function() {}

/**
 * @type {!boolean}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype._continue;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.errors;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.totalCost;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.iid;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.iids;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.realIids;

/**
 * @type {!number}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.serviceId;

/**
 * @type {!string}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.invoiceDescription;

/**
 * @type {!API.Client.BackupOrderPostResponse_cj_params}
 * @export
 */
API.Client.BackupOrderPostResponse.prototype.cjParams;

