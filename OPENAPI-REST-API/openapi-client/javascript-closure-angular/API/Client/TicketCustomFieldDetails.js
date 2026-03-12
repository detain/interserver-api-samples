goog.provide('API.Client.TicketCustomFieldDetails');

/**
 * Optional fields providing additional info in ticket
 * @record
 */
API.Client.TicketCustomFieldDetails = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.TicketCustomFieldDetails.prototype.customerServerAccess;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketCustomFieldDetails.prototype.ipAddress;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketCustomFieldDetails.prototype.rootPassword;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketCustomFieldDetails.prototype.sudoUser;

/**
 * @type {!number}
 * @export
 */
API.Client.TicketCustomFieldDetails.prototype.sudoPassword;

/**
 * @type {!number}
 * @export
 */
API.Client.TicketCustomFieldDetails.prototype.port;

/** @enum {string} */
API.Client.TicketCustomFieldDetails.CustomerServerAccessEnum = { 
  y: 'y',
  n: 'n',
}
