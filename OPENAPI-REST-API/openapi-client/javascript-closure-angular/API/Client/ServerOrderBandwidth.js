goog.provide('API.Client.ServerOrderBandwidth');

/**
 * A bandwidth option available when ordering a dedicated server.
 * @record
 */
API.Client.ServerOrderBandwidth = function() {}

/**
 * Bandwidth ID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.id;

/**
 * Bandwidth price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.price;

/**
 * Bandwidth image.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.img;

/**
 * Short description of the bandwidth.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.shortDesc;

/**
 * Long description of the bandwidth.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.longDesc;

/**
 * Bandwidth type.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.type;

/**
 * Quantity of bandwidth.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.qty;

/**
 * Active status.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.active;

/**
 * Monthly price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.monthlyPrice;

/**
 * Display of bandwidth price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.priceDisplay;

/**
 * Display of monthly bandwidth price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderBandwidth.prototype.monthlyPriceDisplay;

