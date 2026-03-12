goog.provide('API.Client.RestoreRequest');

/**
 * Request data to trigger a restore from backup.
 * @record
 */
API.Client.RestoreRequest = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.RestoreRequest.prototype.backup;

/**
 * @type {!string}
 * @export
 */
API.Client.RestoreRequest.prototype.password;

