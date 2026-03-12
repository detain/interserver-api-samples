goog.provide('API.Client.ChargeInvoiceRows_invoices_value');

/**
 * @record
 */
API.Client.ChargeInvoiceRowsInvoicesValue = function() {}

/**
 * Unique invoice ID.
 * @type {!number}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesId;

/**
 * Description of the invoice charge.
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesDescription;

/**
 * Invoice amount.
 * @type {!number}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesAmount;

/**
 * Invoice date.
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesDate;

/**
 * @type {!number}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesPaid;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesDueDate;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesCurrency;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.currencySymbol;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.invoicesDateFormatted;

/**
 * This is optional when invoices_paid = 1 this array will show
 * @type {!Object<!string, API.Client.ChargeInvoiceRows_invoices_value_paid_invoices_value>}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValue.prototype.paidInvoices;

/** @enum {string} */
API.Client.ChargeInvoiceRowsInvoicesValue.InvoicesPaidEnum = { 
  0: '0',
  1: '1',
}
