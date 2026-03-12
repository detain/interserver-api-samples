goog.provide('API.Client.Region');

/**
 * A datacenter region where a server can be provisioned.
 * @record
 */
API.Client.Region = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.Region.prototype.regionId;

/**
 * @type {!string}
 * @export
 */
API.Client.Region.prototype.regionName;

