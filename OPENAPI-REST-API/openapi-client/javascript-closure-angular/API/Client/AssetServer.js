goog.provide('API.Client.AssetServer');

/**
 * A pre-configured asset server available for immediate provisioning.
 * @record
 */
API.Client.AssetServer = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.AssetServer.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.AssetServer.prototype.region;

/**
 * @type {!string}
 * @export
 */
API.Client.AssetServer.prototype.price;

/**
 * @type {!Array<!API.Client.AssetServer_CPU_inner>}
 * @export
 */
API.Client.AssetServer.prototype.CPU;

/**
 * @type {!Array<!API.Client.AssetServer_CPU_inner>}
 * @export
 */
API.Client.AssetServer.prototype.memory;

/**
 * @type {!Array<!API.Client.AssetServer_CPU_inner>}
 * @export
 */
API.Client.AssetServer.prototype.bandwidth;

/**
 * @type {!Array<!API.Client.AssetServer_CPU_inner>}
 * @export
 */
API.Client.AssetServer.prototype.iPs;

/**
 * @type {!Object<!string, string>}
 * @export
 */
API.Client.AssetServer.prototype.HD;

