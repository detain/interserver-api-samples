goog.provide('API.Client.ScrubIpsLogRowSchema');

/**
 * @record
 */
API.Client.ScrubIpsLogRowSchema = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.date;

/**
 * @type {!string}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.filter;

/**
 * @type {!string}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.blockedIp;

/**
 * @type {!string}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.targetIp;

/**
 * @type {!number}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.targetPort;

/**
 * @type {!string}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.protocol;

/**
 * @type {!number}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.byteCount;

/**
 * @type {!string}
 * @export
 */
API.Client.ScrubIpsLogRowSchema.prototype.xdpAction;

