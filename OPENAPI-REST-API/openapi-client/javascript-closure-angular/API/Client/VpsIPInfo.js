goog.provide('API.Client.VpsIPInfo');

/**
 * IP address information table for a VPS service.
 * @record
 */
API.Client.VpsIPInfo = function() {}

/**
 * Title of the table
 * @type {!string}
 * @export
 */
API.Client.VpsIPInfo.prototype.title;

/**
 * @type {!Array<!API.Client.VpsIPInfoRow>}
 * @export
 */
API.Client.VpsIPInfo.prototype.rows;

