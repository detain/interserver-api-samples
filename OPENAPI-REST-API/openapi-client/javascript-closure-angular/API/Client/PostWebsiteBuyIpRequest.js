goog.provide('API.Client.postWebsiteBuyIp_request');

/**
 * @record
 */
API.Client.PostWebsiteBuyIpRequest = function() {}

/**
 * A map of IP addresses to their desired reverse DNS hostnames.
 * @type {!Object<!string, string>}
 * @export
 */
API.Client.PostWebsiteBuyIpRequest.prototype.ips;

