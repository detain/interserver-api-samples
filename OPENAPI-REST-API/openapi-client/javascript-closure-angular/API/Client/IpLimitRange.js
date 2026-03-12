goog.provide('API.Client.IpLimitRange');

/**
 * The lower and upper bounds of an ip range.
 * @record
 */
API.Client.IpLimitRange = function() {}

/**
 * The begining (or first) IP address in the range.
 * @type {!string}
 * @export
 */
API.Client.IpLimitRange.prototype.start;

/**
 * The ending (or last) IP address in the range.
 * @type {!string}
 * @export
 */
API.Client.IpLimitRange.prototype.end;

