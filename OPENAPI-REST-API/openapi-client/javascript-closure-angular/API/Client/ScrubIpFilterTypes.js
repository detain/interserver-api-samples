goog.provide('API.Client.ScrubIpFilterTypes');

/**
 * Available scrub filter types for building firewall rules.
 * @record
 */
API.Client.ScrubIpFilterTypes = function() {}

/**
 * @type {!boolean}
 * @export
 */
API.Client.ScrubIpFilterTypes.prototype.success;

/**
 * @type {!Object<!string, API.Client.ScrubIpFilterTypes_filters_value>}
 * @export
 */
API.Client.ScrubIpFilterTypes.prototype.filters;

