goog.provide('API.Client.BuyItNowRow');

/**
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 * @record
 */
API.Client.BuyItNowRow = function() {}

/**
 * Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
 * @type {!string}
 * @export
 */
API.Client.BuyItNowRow.prototype.serverId;

/**
 * @type {!Array<!API.Client.BuyItNowRow_cpu_inner>}
 * @export
 */
API.Client.BuyItNowRow.prototype.cpu;

/**
 * @type {!string}
 * @export
 */
API.Client.BuyItNowRow.prototype.memory;

/**
 * @type {!Object<!string, string>}
 * @export
 */
API.Client.BuyItNowRow.prototype.disk;

/**
 * @type {!string}
 * @export
 */
API.Client.BuyItNowRow.prototype.bandwidth;

/**
 * @type {!string}
 * @export
 */
API.Client.BuyItNowRow.prototype.ips;

/**
 * @type {!string}
 * @export
 */
API.Client.BuyItNowRow.prototype.location;

/**
 * @type {!number}
 * @export
 */
API.Client.BuyItNowRow.prototype.price;

