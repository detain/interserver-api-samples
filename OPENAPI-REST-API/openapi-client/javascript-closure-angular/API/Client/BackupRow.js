goog.provide('API.Client.BackupRow');

/**
 * A result row from the `Backups` `GET` request.
 * @record
 */
API.Client.BackupRow = function() {}

/**
 * The id of the backup.
 * @type {!string}
 * @export
 */
API.Client.BackupRow.prototype.backupId;

/**
 * The name of the backup.
 * @type {!string}
 * @export
 */
API.Client.BackupRow.prototype.backupName;

/**
 * The cost of the backup.
 * @type {!string}
 * @export
 */
API.Client.BackupRow.prototype.backupCost;

/**
 * The username of the backup.
 * @type {!string}
 * @export
 */
API.Client.BackupRow.prototype.backupUsername;

/**
 * The status of the backup.
 * @type {!string}
 * @export
 */
API.Client.BackupRow.prototype.backupStatus;

/**
 * The services name of the backup.
 * @type {!string}
 * @export
 */
API.Client.BackupRow.prototype.servicesName;

