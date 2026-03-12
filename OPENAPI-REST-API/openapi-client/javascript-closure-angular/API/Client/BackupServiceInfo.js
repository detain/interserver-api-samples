goog.provide('API.Client.BackupServiceInfo');

/**
 * Core service record for a backup storage service including ID, status, quota, and billing details.
 * @record
 */
API.Client.BackupServiceInfo = function() {}

/**
 * Backup ID.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupId;

/**
 * Backup server ID.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupServer;

/**
 * Backup username.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupUsername;

/**
 * Backup type.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupType;

/**
 * Backup currency.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupCurrency;

/**
 * Backup order date.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupOrderDate;

/**
 * Backup customer ID.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupCustid;

/**
 * Backup quota.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupQuota;

/**
 * Backup IP address.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupIp;

/**
 * Backup status.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupStatus;

/**
 * Backup invoice.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupInvoice;

/**
 * Backup coupon.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupCoupon;

/**
 * Backup extra information.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupExtra;

/**
 * Backup server status.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupServerStatus;

/**
 * Backup comment.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceInfo.prototype.backupComment;

