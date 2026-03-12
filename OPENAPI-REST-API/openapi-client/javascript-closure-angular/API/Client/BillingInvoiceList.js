goog.provide('API.Client.BillingInvoiceList');

/**
 * Summary list of invoices for the account.
 * @record
 */
API.Client.BillingInvoiceList = function() {}

/**
 * Invoice rows returned for the account.
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.BillingInvoiceList.prototype.rows;

/**
 * Totals and summary data for the invoices list.
 * @type {!API.Client.Object}
 * @export
 */
API.Client.BillingInvoiceList.prototype.summary;

