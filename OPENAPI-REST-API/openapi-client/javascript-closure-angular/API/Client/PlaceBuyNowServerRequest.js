goog.provide('API.Client.placeBuyNowServer_request');

/**
 * @record
 */
API.Client.PlaceBuyNowServerRequest = function() {}

/**
 * The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
 * @type {!number}
 * @export
 */
API.Client.PlaceBuyNowServerRequest.prototype.serverId;

/**
 * The fully-qualified hostname to assign to the server.
 * @type {!string}
 * @export
 */
API.Client.PlaceBuyNowServerRequest.prototype.serverHostname;

/**
 * The root or administrator password to set on the server.
 * @type {!string}
 * @export
 */
API.Client.PlaceBuyNowServerRequest.prototype.serverRootPassword;

