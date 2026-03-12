goog.provide('API.Client.VpsTrafficResponse');

/**
 * VPS Traffic Information
 * @record
 */
API.Client.VpsTrafficResponse = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.target;

/**
 * @type {!number}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.interval;

/**
 * @type {!API.Client.VpsTrafficHistoryResponse}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.history;

/**
 * @type {!Date}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.last;

/**
 * @type {!Array<!Date>}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.times;

/**
 * @type {!API.Client.VpsTrafficTotalsResposne}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.totals;

/**
 * @type {!API.Client.VpsTrafficUsageResponse}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.usage;

/**
 * @type {!Array<!API.Client.VpsTrafficDataSectionResponse>}
 * @export
 */
API.Client.VpsTrafficResponse.prototype.data;

