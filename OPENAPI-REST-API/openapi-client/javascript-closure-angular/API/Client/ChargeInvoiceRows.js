goog.provide('API.Client.ChargeInvoiceRows');

/**
 * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 * @record
 */
API.Client.ChargeInvoiceRows = function() {}

/**
 * Whether the invoice retrieval was successful.
 * @type {!boolean}
 * @export
 */
API.Client.ChargeInvoiceRows.prototype.success;

/**
 * List of invoices for the service.
 * @type {!Object<!string, API.Client.ChargeInvoiceRows_invoices_value>}
 * @export
 */
API.Client.ChargeInvoiceRows.prototype.invoices;

