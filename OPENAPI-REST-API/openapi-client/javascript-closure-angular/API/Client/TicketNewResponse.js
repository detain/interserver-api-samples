goog.provide('API.Client.TicketNewResponse');

/**
 * Response returned after creating a new support ticket.
 * @record
 */
API.Client.TicketNewResponse = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.TicketNewResponse.prototype.text;

/**
 * @type {!boolean}
 * @export
 */
API.Client.TicketNewResponse.prototype.success;

/**
 * @type {!number}
 * @export
 */
API.Client.TicketNewResponse.prototype.ticketId;

