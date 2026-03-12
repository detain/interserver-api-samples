goog.provide('API.Client.VpsDALicense');

/**
 * A DirectAdmin license tier option.
 * @record
 */
API.Client.VpsDALicense = function() {}

/**
 * License tier name.
 * @type {!string}
 * @export
 */
API.Client.VpsDALicense.prototype.name;

/**
 * License tier sub-name.
 * @type {!string}
 * @export
 */
API.Client.VpsDALicense.prototype.subName;

/**
 * Monthly cost in cents.
 * @type {!number}
 * @export
 */
API.Client.VpsDALicense.prototype.cost;

/**
 * Image path for the disabled state icon.
 * @type {!string}
 * @export
 */
API.Client.VpsDALicense.prototype.imgDisabled;

/**
 * Image path for the active state icon.
 * @type {!string}
 * @export
 */
API.Client.VpsDALicense.prototype.imgActive;

