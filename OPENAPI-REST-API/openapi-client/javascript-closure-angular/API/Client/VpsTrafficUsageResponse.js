goog.provide('API.Client.VpsTrafficUsageResponse');

/**
 * VPS Traffic Usage Section
 * @record
 */
API.Client.VpsTrafficUsageResponse = function() {}

/**
 * @type {!API.Client.VpsTrafficTotalsSectionResponse}
 * @export
 */
API.Client.VpsTrafficUsageResponse.prototype.current;

/**
 * @type {!API.Client.VpsTrafficTotalsSectionResponse}
 * @export
 */
API.Client.VpsTrafficUsageResponse.prototype.peak;

/**
 * @type {!API.Client.VpsTrafficUsageAverageResponse}
 * @export
 */
API.Client.VpsTrafficUsageResponse.prototype.average;

