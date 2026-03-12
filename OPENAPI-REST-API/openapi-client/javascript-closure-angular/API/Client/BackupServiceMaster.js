goog.provide('API.Client.BackupServiceMaster');

/**
 * @record
 */
API.Client.BackupServiceMaster = function() {}

/**
 * Backup ID of the service master.
 * @type {!number}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupId;

/**
 * Name of the backup service.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupName;

/**
 * IP address of the backup service.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupIp;

/**
 * Type of the backup service.
 * @type {!number}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupType;

/**
 * Size of the backup service's hard drive.
 * @type {!number}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupHdsize;

/**
 * Amount of free space on the backup service's hard drive.
 * @type {!number}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupHdfree;

/**
 * Last update timestamp of the backup service.
 * @type {!string}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupLastUpdate;

/**
 * Availability status of the backup service.
 * @type {!number}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupAvailable;

/**
 * I/O wait status of the backup service.
 * @type {!number}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupIowait;

/**
 * Order associated with the backup service.
 * @type {!number}
 * @export
 */
API.Client.BackupServiceMaster.prototype.backupOrder;

