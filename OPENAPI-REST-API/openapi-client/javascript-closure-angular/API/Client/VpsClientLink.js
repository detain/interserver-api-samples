goog.provide('API.Client.VpsClientLink');

/**
 * A navigation link for VPS-related actions in the client portal.
 * @record
 */
API.Client.VpsClientLink = function() {}

/**
 * Display label for the link.
 * @type {!string}
 * @export
 */
API.Client.VpsClientLink.prototype.label;

/**
 * URL or route for the action.
 * @type {!string}
 * @export
 */
API.Client.VpsClientLink.prototype.link;

/**
 * Icon class for the link.
 * @type {!string}
 * @export
 */
API.Client.VpsClientLink.prototype.icon;

/**
 * Icon text label.
 * @type {!string}
 * @export
 */
API.Client.VpsClientLink.prototype.iconText;

/**
 * Help tooltip text for the link.
 * @type {!string}
 * @export
 */
API.Client.VpsClientLink.prototype.helpText;

