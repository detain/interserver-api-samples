goog.provide('API.Client.ServerOrderRAID');

/**
 * A RAID configuration option available when ordering a dedicated server.
 * @record
 */
API.Client.ServerOrderRAID = function() {}

/**
 * RAID ID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderRAID.prototype.id;

/**
 * RAID price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderRAID.prototype.price;

/**
 * RAID image.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderRAID.prototype.img;

/**
 * Short description of the RAID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderRAID.prototype.shortDesc;

/**
 * Long description of the RAID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderRAID.prototype.longDesc;

/**
 * Monthly price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderRAID.prototype.monthlyPrice;

/**
 * Active status.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderRAID.prototype.active;

/**
 * Display of RAID price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderRAID.prototype.priceDisplay;

/**
 * Display of monthly RAID price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderRAID.prototype.monthlyPriceDisplay;

