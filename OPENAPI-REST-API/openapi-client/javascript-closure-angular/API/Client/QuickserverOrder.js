goog.provide('API.Client.QuickserverOrder');

/**
 * Available QuickServer options and OS templates for ordering a new QuickServer.
 * @record
 */
API.Client.QuickserverOrder = function() {}

/**
 * Quickserver ID.
 * @type {!string}
 * @export
 */
API.Client.QuickserverOrder.prototype.qsId;

/**
 * @type {!API.Client.QuickserverOrder_server_details}
 * @export
 */
API.Client.QuickserverOrder.prototype.serverDetails;

/**
 * @type {!API.Client.QuickserverOrder_templates}
 * @export
 */
API.Client.QuickserverOrder.prototype.templates;

/**
 * @type {!API.Client.QuickserverOrder_version}
 * @export
 */
API.Client.QuickserverOrder.prototype.version;

/**
 * @type {!API.Client.QuickserverOrder_distro_sel}
 * @export
 */
API.Client.QuickserverOrder.prototype.distroSel;

