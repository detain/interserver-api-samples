goog.provide('API.Client.Home');

/**
 * @record
 */
API.Client.Home = function() {}

/**
 * Last login IP.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.lastLoginIp;

/**
 * Last login time.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.lastLogin;

/**
 * Currency symbol.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.currency;

/**
 * Amount with currency.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.amount;

/**
 * Number of invoices.
 * @type {!number}
 * @export
 */
API.Client.Home.prototype.invoiceList;

/**
 * Balance with currency.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.balance;

/**
 * Users full name.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.fullName;

/**
 * User email address.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.email;

/**
 * List of tickets.
 * @type {!Array<!string>}
 * @export
 */
API.Client.Home.prototype.tickets;

/**
 * @type {!API.Client.Home_ticketStatus}
 * @export
 */
API.Client.Home.prototype.ticketStatus;

/**
 * @type {!API.Client.Home_ticketStatusView}
 * @export
 */
API.Client.Home.prototype.ticketStatusView;

/**
 * @type {!API.Client.Home_details}
 * @export
 */
API.Client.Home.prototype.details;

/**
 * @type {!API.Client.Home_services}
 * @export
 */
API.Client.Home.prototype.services;

/**
 * Affiliate amount with currency.
 * @type {!string}
 * @export
 */
API.Client.Home.prototype.AFFILIATE_AMOUNT;

