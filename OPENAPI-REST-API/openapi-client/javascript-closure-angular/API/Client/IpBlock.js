goog.provide('API.Client.IpBlock');

/**
 * An IP address block option available for a dedicated server configuration.
 * @record
 */
API.Client.IpBlock = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.IpBlock.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.IpBlock.prototype.shortDesc;

/**
 * @type {!string}
 * @export
 */
API.Client.IpBlock.prototype.qty;

/**
 * @type {!number}
 * @export
 */
API.Client.IpBlock.prototype.monthlyPrice;

