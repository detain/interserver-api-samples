goog.provide('API.Client.RaidOption');

/**
 * A RAID configuration option available for a dedicated server.
 * @record
 */
API.Client.RaidOption = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.RaidOption.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.RaidOption.prototype.shortDesc;

/**
 * @type {!number}
 * @export
 */
API.Client.RaidOption.prototype.monthlyPrice;

