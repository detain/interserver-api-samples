goog.provide('API.Client.ServerAssets');

/**
 * @record
 */
API.Client.ServerAssets = function() {}

/**
 * The title of the assets.
 * @type {!string}
 * @export
 */
API.Client.ServerAssets.prototype.title;

/**
 * The size of the assets.
 * @type {!number}
 * @export
 */
API.Client.ServerAssets.prototype.size;

/**
 * The type of the assets.
 * @type {!string}
 * @export
 */
API.Client.ServerAssets.prototype.type;

/**
 * The header of the assets table.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerAssets.prototype.header;

/**
 * The rows of the assets table.
 * @type {!Array<!Array<!string>>}
 * @export
 */
API.Client.ServerAssets.prototype.rows;

