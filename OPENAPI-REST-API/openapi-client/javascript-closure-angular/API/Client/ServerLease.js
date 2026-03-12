goog.provide('API.Client.ServerLease');

/**
 * @record
 */
API.Client.ServerLease = function() {}

/**
 * MAC address associated with the lease.
 * @type {!string}
 * @export
 */
API.Client.ServerLease.prototype.mac;

/**
 * Indicates if the lease is authenticated.
 * @type {!boolean}
 * @export
 */
API.Client.ServerLease.prototype.authenticated;

/**
 * Group identifier for the lease.
 * @type {!string}
 * @export
 */
API.Client.ServerLease.prototype.group;

