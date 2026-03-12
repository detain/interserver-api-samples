goog.provide('API.Client.VpsSnapshot');

/**
 * A VPS snapshot (point-in-time backup) stored on the host node.
 * @record
 */
API.Client.VpsSnapshot = function() {}

/**
 * Snapshot name.
 * @type {!string}
 * @export
 */
API.Client.VpsSnapshot.prototype.name;

/**
 * Disk space used by this snapshot in bytes.
 * @type {!number}
 * @export
 */
API.Client.VpsSnapshot.prototype.used;

/**
 * Unix timestamp of when the snapshot was created.
 * @type {!number}
 * @export
 */
API.Client.VpsSnapshot.prototype.date;

