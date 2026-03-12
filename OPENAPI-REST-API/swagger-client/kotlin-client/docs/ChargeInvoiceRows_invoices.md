# ChargeInvoiceRowsInvoices

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**invoicesId** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Unique invoice ID. |  [optional]
**invoicesDescription** | [**kotlin.String**](.md) | Description of the invoice charge. |  [optional]
**invoicesAmount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Invoice amount. |  [optional]
**invoicesDate** | [**kotlin.String**](.md) | Invoice date. |  [optional]
**invoicesPaid** | [**inline**](#InvoicesPaid) |  |  [optional]
**invoicesDueDate** | [**kotlin.String**](.md) |  |  [optional]
**invoicesCurrency** | [**kotlin.String**](.md) |  |  [optional]
**currencySymbol** | [**kotlin.String**](.md) |  |  [optional]
**invoicesDateFormatted** | [**kotlin.String**](.md) |  |  [optional]
**paidInvoices** | [**kotlin.collections.Map&lt;kotlin.String, ChargeInvoiceRowsPaidInvoices&gt;**](ChargeInvoiceRowsPaidInvoices.md) | This is optional when invoices_paid &#x3D; 1 this array will show |  [optional]

<a name="InvoicesPaid"></a>
## Enum: invoices_paid
Name | Value
---- | -----
invoicesPaid | 0, 1
