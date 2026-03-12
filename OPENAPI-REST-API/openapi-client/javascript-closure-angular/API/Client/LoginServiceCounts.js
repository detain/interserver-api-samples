goog.provide('API.Client.LoginServiceCounts');

/**
 * Order counts per module.
 * @record
 */
API.Client.LoginServiceCounts = function() {}

/**
 * The number of total VPS orders that have been placed in our billing system.
 * @type {!number}
 * @export
 */
API.Client.LoginServiceCounts.prototype.vps;

/**
 * The number of total website orders that have been placed in our billing system.
 * @type {!number}
 * @export
 */
API.Client.LoginServiceCounts.prototype.websites;

/**
 * The number of total server orders that have been placed in our billing system.
 * @type {!number}
 * @export
 */
API.Client.LoginServiceCounts.prototype.servers;

