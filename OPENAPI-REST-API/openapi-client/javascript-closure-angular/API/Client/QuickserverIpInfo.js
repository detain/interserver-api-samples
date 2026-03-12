goog.provide('API.Client.QuickserverIpInfo');

/**
 * IP address information table for a QuickServer service.
 * @record
 */
API.Client.QuickserverIpInfo = function() {}

/**
 * Table title
 * @type {!string}
 * @export
 */
API.Client.QuickserverIpInfo.prototype.title;

/**
 * @type {!Array<!API.Client.QuickserverIpTableRow>}
 * @export
 */
API.Client.QuickserverIpInfo.prototype.rows;

