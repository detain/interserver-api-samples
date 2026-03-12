goog.provide('API.Client.VpsTrafficHistorySectionResponse');

/**
 * VPS Traffic History Hour and Day Sections
 * @record
 */
API.Client.VpsTrafficHistorySectionResponse = function() {}

/**
 * @type {!Array<!API.Client.VpsTrafficHistorySectionDataResponse>}
 * @export
 */
API.Client.VpsTrafficHistorySectionResponse.prototype.data;

/**
 * @type {!Array<!Date>}
 * @export
 */
API.Client.VpsTrafficHistorySectionResponse.prototype.times;

