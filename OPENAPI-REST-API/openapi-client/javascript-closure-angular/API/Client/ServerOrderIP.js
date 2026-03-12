goog.provide('API.Client.ServerOrderIP');

/**
 * An IP block option available when ordering a dedicated server.
 * @record
 */
API.Client.ServerOrderIP = function() {}

/**
 * IP ID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderIP.prototype.id;

/**
 * IP price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderIP.prototype.price;

/**
 * IP image.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderIP.prototype.img;

/**
 * Short description of the IP.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderIP.prototype.shortDesc;

/**
 * Long description of the IP.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderIP.prototype.longDesc;

/**
 * Quantity of IPs.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderIP.prototype.qty;

/**
 * Monthly price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderIP.prototype.monthlyPrice;

/**
 * Display of IP price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderIP.prototype.priceDisplay;

/**
 * Display of monthly IP price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderIP.prototype.monthlyPriceDisplay;

