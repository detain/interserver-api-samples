goog.provide('API.Client.BackupLoginResponse');

/**
 * Login session response for backup storage.
 * @record
 */
API.Client.BackupLoginResponse = function() {}

/**
 * Indicates whether a login session was created.
 * @type {!boolean}
 * @export
 */
API.Client.BackupLoginResponse.prototype.success;

/**
 * Login URL or error text returned by the storage provider.
 * @type {!string}
 * @export
 */
API.Client.BackupLoginResponse.prototype.text;

