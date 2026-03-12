goog.provide('API.Client.VpsBackupRow');

/**
 * A single backed-up item and information about it.
 * @record
 */
API.Client.VpsBackupRow = function() {}

/**
 * Backup Type
 * @type {!string}
 * @export
 */
API.Client.VpsBackupRow.prototype.type;

/**
 * The service id such as vps  id.
 * @type {!number}
 * @export
 */
API.Client.VpsBackupRow.prototype.service;

/**
 * The name of the backup.
 * @type {!string}
 * @export
 */
API.Client.VpsBackupRow.prototype.name;

/**
 * Size of the file in bytes
 * @type {!number}
 * @export
 */
API.Client.VpsBackupRow.prototype.size;

/**
 * The creation date of the backup in a unix timestamp.
 * @type {!number}
 * @export
 */
API.Client.VpsBackupRow.prototype.date;

