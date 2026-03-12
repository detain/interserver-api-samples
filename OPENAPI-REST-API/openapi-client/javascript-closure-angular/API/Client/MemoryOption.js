goog.provide('API.Client.MemoryOption');

/**
 * A memory (RAM) upgrade option available for a dedicated server configuration.
 * @record
 */
API.Client.MemoryOption = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.MemoryOption.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.MemoryOption.prototype.shortDesc;

/**
 * @type {!number}
 * @export
 */
API.Client.MemoryOption.prototype.monthlyPrice;

/**
 * @type {!string}
 * @export
 */
API.Client.MemoryOption.prototype.monthlyPriceDisplay;

