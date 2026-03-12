goog.provide('API.Client.ServerOrderControlPanel');

/**
 * A control panel option available when ordering a dedicated server.
 * @record
 */
API.Client.ServerOrderControlPanel = function() {}

/**
 * Control Panel ID.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.id;

/**
 * Control Panel price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.price;

/**
 * Control Panel image.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.img;

/**
 * Short description of the control panel.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.shortDesc;

/**
 * Long description of the control panel.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.longDesc;

/**
 * OS types compatible with the control panel.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.osType;

/**
 * Monthly price.
 * @type {!number}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.monthlyPrice;

/**
 * List of types.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.types;

/**
 * Display of control panel price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.priceDisplay;

/**
 * Display of monthly control panel price.
 * @type {!string}
 * @export
 */
API.Client.ServerOrderControlPanel.prototype.monthlyPriceDisplay;

