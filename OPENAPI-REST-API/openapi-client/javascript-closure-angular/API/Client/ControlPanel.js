goog.provide('API.Client.ControlPanel');

/**
 * A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 * @record
 */
API.Client.ControlPanel = function() {}

/**
 * @type {!number}
 * @export
 */
API.Client.ControlPanel.prototype.id;

/**
 * @type {!string}
 * @export
 */
API.Client.ControlPanel.prototype.shortDesc;

/**
 * @type {!number}
 * @export
 */
API.Client.ControlPanel.prototype.monthlyPrice;

