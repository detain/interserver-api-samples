goog.provide('API.Client.ServerOrderCPU');

/**
 * A CPU option available when ordering a dedicated server.
 * @record
 */
API.Client.ServerOrderCPU = function() {}

/**
 * CPU ID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.id;

/**
 * CPU price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderCPU.prototype.price;

/**
 * CPU image.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.img;

/**
 * Short description of the CPU.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.shortDesc;

/**
 * Long description of the CPU.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.longDesc;

/**
 * Location of the CPU.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.location;

/**
 * Front Side Bus information.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.fsb;

/**
 * Manufacturer information.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.manu;

/**
 * CPU type.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.type;

/**
 * CPU speed.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.speed;

/**
 * Cache information.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.cache;

/**
 * Active status.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.active;

/**
 * Number of cores.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.numCores;

/**
 * Number of CPUs.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.numCpus;

/**
 * CPU benchmark.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.benchmark;

/**
 * Monthly price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderCPU.prototype.monthlyPrice;

/**
 * Maximum RAM supported.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.maxRam;

/**
 * Minimum RAM required.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.minRam;

/**
 * Maximum LFF (Large Form Factor) supported.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.maxLff;

/**
 * Maximum SFF (Small Form Factor) supported.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.maxSff;

/**
 * Maximum NVMe drives supported.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.maxNve;

/**
 * Visibility status.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.visible;

/**
 * Hard drive IDs.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.hdIds;

/**
 * Display of CPU price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.priceDisplay;

/**
 * Display of monthly CPU price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderCPU.prototype.monthlyPriceDisplay;

