goog.provide('API.Client.ServerIpmiPowerRequest');

/**
 * IPMI Power command for servers
 * @record
 */
API.Client.ServerIpmiPowerRequest = function() {}

/**
 * The power action to send to the ipmi controller.
 * @type {!string}
 * @export
 */
API.Client.ServerIpmiPowerRequest.prototype.action;

/**
 * The Asset ID
 * @type {!number}
 * @export
 */
API.Client.ServerIpmiPowerRequest.prototype.asset;

/** @enum {string} */
API.Client.ServerIpmiPowerRequest.ActionEnum = { 
  cycle: 'cycle',
  reset: 'reset',
  on: 'on',
  off: 'off',
  soft: 'soft',
}
