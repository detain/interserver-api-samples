goog.provide('API.Client.LicenseIpInfo');

/**
 * IP address information table for a software license service.
 * @record
 */
API.Client.LicenseIpInfo = function() {}

/**
 * Table title
 * @type {!string}
 * @export
 */
API.Client.LicenseIpInfo.prototype.title;

/**
 * @type {!Array<!API.Client.LicenseIpInfoRow>}
 * @export
 */
API.Client.LicenseIpInfo.prototype.rows;

