goog.provide('API.Client.ViewTicketResponse');

/**
 * Ticket details
 * @record
 */
API.Client.ViewTicketResponse = function() {}

/**
 * @type {!boolean}
 * @export
 */
API.Client.ViewTicketResponse.prototype.success;

/**
 * @type {!API.Client.TicketDetails}
 * @export
 */
API.Client.ViewTicketResponse.prototype.ticket;

/**
 * @type {!API.Client.TicketCustomFieldDetails}
 * @export
 */
API.Client.ViewTicketResponse.prototype.ticketCustomFields;

/**
 * @type {!API.Client.TicketPostDetails}
 * @export
 */
API.Client.ViewTicketResponse.prototype.ticketPosts;

