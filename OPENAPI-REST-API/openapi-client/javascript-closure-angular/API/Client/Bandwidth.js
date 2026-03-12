goog.provide('API.Client.Bandwidth');

/**
 * A bandwidth option available for a dedicated server configuration.
 * @record
 */
API.Client.Bandwidth = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.Bandwidth.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.Bandwidth.prototype.shortDesc;

/**
 * @type {!number}
 * @export
 */
API.Client.Bandwidth.prototype.monthlyPrice;

/**
 * @type {!string}
 * @export
 */
API.Client.Bandwidth.prototype.monthlyPriceDisplay;

