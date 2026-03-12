goog.provide('API.Client.ServerOrderMemory');

/**
 * A memory (RAM) option available when ordering a dedicated server.
 * @record
 */
API.Client.ServerOrderMemory = function() {}

/**
 * Memory ID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.id;

/**
 * Memory price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.price;

/**
 * Memory image.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.img;

/**
 * Short description of the memory.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.shortDesc;

/**
 * Long description of the memory.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.longDesc;

/**
 * Manufacturer information.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.manu;

/**
 * Memory size.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.size;

/**
 * Memory type.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.type;

/**
 * Hidden status.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.hidden;

/**
 * Monthly price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderMemory.prototype.monthlyPrice;

/**
 * Drive type.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.driveType;

/**
 * Display of monthly memory price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderMemory.prototype.monthlyPriceDisplay;

