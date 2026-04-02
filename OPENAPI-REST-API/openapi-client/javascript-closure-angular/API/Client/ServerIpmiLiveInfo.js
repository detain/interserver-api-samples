goog.provide('API.Client.ServerIpmiLiveInfo');

/**
 * Information about the IPMI connection.
 * @record
 */
API.Client.ServerIpmiLiveInfo = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.ServerIpmiLiveInfo.prototype.text;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerIpmiLiveInfo.prototype.publicIp;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerIpmiLiveInfo.prototype.allowedIp;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerIpmiLiveInfo.prototype.clientUsername;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerIpmiLiveInfo.prototype.clientPassword;

