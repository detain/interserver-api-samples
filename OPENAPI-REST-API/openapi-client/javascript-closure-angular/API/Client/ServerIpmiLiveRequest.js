goog.provide('API.Client.ServerIpmiLiveRequest');

/**
 * Request body to setup an IPMI Live connection.
 * @record
 */
API.Client.ServerIpmiLiveRequest = function() {}

/**
 * Your IP Address you wish to connect to the IPMI system from.
 * @type {!string}
 * @export
 */
API.Client.ServerIpmiLiveRequest.prototype.ip;

/**
 * Asset ID
 * @type {!number}
 * @export
 */
API.Client.ServerIpmiLiveRequest.prototype.asset;

