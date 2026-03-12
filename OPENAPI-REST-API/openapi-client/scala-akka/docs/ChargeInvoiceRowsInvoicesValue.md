

# ChargeInvoiceRowsInvoicesValue


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**invoices_id** | **BigDecimal** | Unique invoice ID. |  [optional]
**invoices_description** | **String** | Description of the invoice charge. |  [optional]
**invoices_amount** | **BigDecimal** | Invoice amount. |  [optional]
**invoices_date** | **String** | Invoice date. |  [optional]
**invoices_paid** | [**InvoicesPaid**](#InvoicesPaid) |  |  [optional]
**invoices_due_date** | **String** |  |  [optional]
**invoices_currency** | **String** |  |  [optional]
**currency_symbol** | **String** |  |  [optional]
**invoices_date_formatted** | **String** |  |  [optional]
**paid_invoices** | [**Map&lt;String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValue&gt;**](ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.md) | This is optional when invoices_paid &#x3D; 1 this array will show |  [optional]


## Enum: InvoicesPaid
Allowed values: [0, 1]




