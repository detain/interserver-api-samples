goog.provide('API.Client.Tickets');

/**
 * A listing of support tickets.
 * @record
 */
API.Client.Tickets = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.Tickets.prototype.ima;

/**
 * @type {!string}
 * @export
 */
API.Client.Tickets.prototype.custid;

/**
 * @type {!string}
 * @export
 */
API.Client.Tickets.prototype.view;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.currentPage;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.limit;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.sortcol;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.sortdir;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.rowsOffset;

/**
 * @type {!Array<!API.Client.TicketsRow>}
 * @export
 */
API.Client.Tickets.prototype.tickets;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.pages;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.rowsTotal;

/**
 * @type {!number}
 * @export
 */
API.Client.Tickets.prototype.inboxCount;

/**
 * @type {!API.Client.Tickets_countArray}
 * @export
 */
API.Client.Tickets.prototype.countArray;

/**
 * @type {!string}
 * @export
 */
API.Client.Tickets.prototype.viewText;

