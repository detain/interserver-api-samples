goog.provide('API.Client.ServerOrderOS');

/**
 * An operating system option available when ordering a dedicated server.
 * @record
 */
API.Client.ServerOrderOS = function() {}

/**
 * Operating System ID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderOS.prototype.id;

/**
 * Operating System price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderOS.prototype.price;

/**
 * Operating System image.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderOS.prototype.img;

/**
 * Short description of the OS.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderOS.prototype.shortDesc;

/**
 * Long description of the OS.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderOS.prototype.longDesc;

/**
 * Monthly price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderOS.prototype.monthlyPrice;

/**
 * Active status.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderOS.prototype.active;

/**
 * Display of OS price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderOS.prototype.priceDisplay;

/**
 * Display of monthly OS price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderOS.prototype.monthlyPriceDisplay;

