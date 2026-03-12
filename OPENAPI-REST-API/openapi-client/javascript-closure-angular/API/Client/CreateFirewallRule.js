goog.provide('API.Client.CreateFirewallRule');

/**
 * Create firewall rule for your ip
 * @record
 */
API.Client.CreateFirewallRule = function() {}

/**
 * 1 = TCP, 2 = UDP
 * @type {!number}
 * @export
 */
API.Client.CreateFirewallRule.prototype.protocolId;

/**
 * 1 = Block,  0 = Whitelist
 * @type {!number}
 * @export
 */
API.Client.CreateFirewallRule.prototype.xdpAction;

/**
 * @type {!number}
 * @export
 */
API.Client.CreateFirewallRule.prototype.destinationPort;

/**
 * @type {!string}
 * @export
 */
API.Client.CreateFirewallRule.prototype.sourceIp;

/**
 * @type {!number}
 * @export
 */
API.Client.CreateFirewallRule.prototype.sourcePort;

/** @enum {string} */
API.Client.CreateFirewallRule.ProtocolIdEnum = { 
  1: '1',
  2: '2',
}
/** @enum {string} */
API.Client.CreateFirewallRule.XdpActionEnum = { 
  0: '0',
  1: '1',
}
