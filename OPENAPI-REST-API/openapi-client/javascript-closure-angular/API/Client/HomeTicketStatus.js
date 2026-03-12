goog.provide('API.Client.Home_ticketStatus');

/**
 * Ticket statuses.
 * @record
 */
API.Client.HomeTicketStatus = function() {}

/**
 * Count of open tickets.
 * @type {!number}
 * @export
 */
API.Client.HomeTicketStatus.prototype.open;

/**
 * Count of tickets on hold.
 * @type {!number}
 * @export
 */
API.Client.HomeTicketStatus.prototype.onHold;

