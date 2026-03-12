goog.provide('API.Client.BackupIPInfo');

/**
 * IP address information table for a backup service.
 * @record
 */
API.Client.BackupIPInfo = function() {}

/**
 * Title of the IP information table.
 * @type {!string}
 * @export
 */
API.Client.BackupIPInfo.prototype.title;

/**
 * @type {!Array<!API.Client.BackupIPInfoRow>}
 * @export
 */
API.Client.BackupIPInfo.prototype.rows;

