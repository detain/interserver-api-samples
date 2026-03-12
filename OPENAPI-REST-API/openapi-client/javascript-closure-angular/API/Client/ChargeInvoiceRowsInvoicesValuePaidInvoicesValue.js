goog.provide('API.Client.ChargeInvoiceRows_invoices_value_paid_invoices_value');

/**
 * @record
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.invoicesId;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.invoicesDescription;

/**
 * @type {!number}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.invoicesAmount;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.invoicesDate;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.invoicesCurrency;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.currencySymbol;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.invoicesDateFormatted;

/**
 * @type {!string}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.paymentType;

/**
 * This is optional when refund is present this will show
 * @type {!Object<!string, API.Client.ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value>}
 * @export
 */
API.Client.ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.prototype.refundInvoices;

