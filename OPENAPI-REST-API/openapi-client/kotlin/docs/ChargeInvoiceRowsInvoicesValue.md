
# ChargeInvoiceRowsInvoicesValue

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **invoicesId** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Unique invoice ID. |  [optional] |
| **invoicesDescription** | **kotlin.String** | Description of the invoice charge. |  [optional] |
| **invoicesAmount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Invoice amount. |  [optional] |
| **invoicesDate** | **kotlin.String** | Invoice date. |  [optional] |
| **invoicesPaid** | [**inline**](#InvoicesPaid) |  |  [optional] |
| **invoicesDueDate** | **kotlin.String** |  |  [optional] |
| **invoicesCurrency** | **kotlin.String** |  |  [optional] |
| **currencySymbol** | **kotlin.String** |  |  [optional] |
| **invoicesDateFormatted** | **kotlin.String** |  |  [optional] |
| **paidInvoices** | [**kotlin.collections.Map&lt;kotlin.String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValue&gt;**](ChargeInvoiceRowsInvoicesValuePaidInvoicesValue.md) | This is optional when invoices_paid &#x3D; 1 this array will show |  [optional] |


<a id="InvoicesPaid"></a>
## Enum: invoices_paid
| Name | Value |
| ---- | ----- |
| invoicesPaid | 0, 1 |



