goog.provide('API.Client.HardDrive');

/**
 * A hard drive option available for a dedicated server configuration.
 * @record
 */
API.Client.HardDrive = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.HardDrive.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.HardDrive.prototype.shortDesc;

/**
 * @type {!string}
 * @export
 */
API.Client.HardDrive.prototype.size;

/**
 * @type {!string}
 * @export
 */
API.Client.HardDrive.prototype.driveType;

/**
 * @type {!number}
 * @export
 */
API.Client.HardDrive.prototype.monthlyPrice;

/**
 * @type {!string}
 * @export
 */
API.Client.HardDrive.prototype.monthlyPriceDisplay;

