goog.provide('API.Client.UpdateTicket');

/**
 * Update custom fields of the ticket
 * @record
 */
API.Client.UpdateTicket = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.UpdateTicket.prototype.ip;

/**
 * @type {!string}
 * @export
 */
API.Client.UpdateTicket.prototype.ipAddress;

/**
 * @type {!string}
 * @export
 */
API.Client.UpdateTicket.prototype.customerServerAccess;

/**
 * @type {!string}
 * @export
 */
API.Client.UpdateTicket.prototype.rootPassword;

/**
 * @type {!string}
 * @export
 */
API.Client.UpdateTicket.prototype.sudoUsername;

/**
 * @type {!string}
 * @export
 */
API.Client.UpdateTicket.prototype.sudoPassword;

/**
 * @type {!number}
 * @export
 */
API.Client.UpdateTicket.prototype.port;

/** @enum {string} */
API.Client.UpdateTicket.CustomerServerAccessEnum = { 
  y: 'y',
  n: 'n',
}
