goog.provide('API.Client.getScrubIpDetails_200_response_filter_firewall');

/**
 * @record
 */
API.Client.GetScrubIpDetails200ResponseFilterFirewall = function() {}

/**
 * @type {!Array<!API.Client.getScrubIpDetails_200_response_filter_firewall_rules_inner>}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseFilterFirewall.prototype.rules;

/**
 * @type {!Array<!API.Client.getScrubIpDetails_200_response_filter_firewall_filters_inner>}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseFilterFirewall.prototype.filters;

/**
 * @type {!number}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseFilterFirewall.prototype.scrubEnabled;

