goog.provide('API.Client.OperatingSystem');

/**
 * An operating system option available for server provisioning.
 * @record
 */
API.Client.OperatingSystem = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.OperatingSystem.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.OperatingSystem.prototype.shortDesc;

/**
 * @type {!number}
 * @export
 */
API.Client.OperatingSystem.prototype.monthlyPrice;

