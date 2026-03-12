goog.provide('API.Client.ReverseDnsEntries');

/**
 * The Reverse DNS entries.
 * @record
 */
API.Client.ReverseDnsEntries = function() {}

/**
 * The IPs you have access to and their current reverse dns mapping.
 * @type {!Object<!string, API.Client.AnyType>}
 * @export
 */
API.Client.ReverseDnsEntries.prototype.ips;

