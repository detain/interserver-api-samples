goog.provide('API.Client.CreateGeoFirewallRule');

/**
 * Create firewall rule for your ip
 * @record
 */
API.Client.CreateGeoFirewallRule = function() {}

/**
 * 1 = Block,  0 = Whitelist
 * @type {!number}
 * @export
 */
API.Client.CreateGeoFirewallRule.prototype.xdpAction;

/**
 * @type {!number}
 * @export
 */
API.Client.CreateGeoFirewallRule.prototype.destinationPort;

/**
 * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
 * @type {!number}
 * @export
 */
API.Client.CreateGeoFirewallRule.prototype.countryCode;

/**
 * ASN number
 * @type {!number}
 * @export
 */
API.Client.CreateGeoFirewallRule.prototype.asn;

/** @enum {string} */
API.Client.CreateGeoFirewallRule.XdpActionEnum = { 
  0: '0',
  1: '1',
}
