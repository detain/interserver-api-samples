goog.provide('API.Client.VpsRow');

/**
 * A result row from the `Vps` `GET` request.
 * @record
 */
API.Client.VpsRow = function() {}

/**
 * The id of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.vpsId;

/**
 * The name of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.vpsName;

/**
 * The repeat invoices cost of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.repeatInvoicesCost;

/**
 * The hostname of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.vpsHostname;

/**
 * The ip of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.vpsIp;

/**
 * The status of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.vpsStatus;

/**
 * The services name of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.servicesName;

/**
 * The comment of the vps.
 * @type {!string}
 * @export
 */
API.Client.VpsRow.prototype.vpsComment;

