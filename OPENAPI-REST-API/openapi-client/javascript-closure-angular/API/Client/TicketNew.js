goog.provide('API.Client.TicketNew');

/**
 * New helpdesk ticket request.  
 * @record
 */
API.Client.TicketNew = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.TicketNew.prototype.subject;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketNew.prototype.body;

/**
 * @type {!number}
 * @export
 */
API.Client.TicketNew.prototype.serviceId;

/**
 * @type {!string}
 * @export
 */
API.Client.TicketNew.prototype.serviceModule;

