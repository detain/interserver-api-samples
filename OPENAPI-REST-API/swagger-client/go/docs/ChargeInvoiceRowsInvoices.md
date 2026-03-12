# ChargeInvoiceRowsInvoices

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**InvoicesId** | **float64** | Unique invoice ID. | [optional] [default to null]
**InvoicesDescription** | **string** | Description of the invoice charge. | [optional] [default to null]
**InvoicesAmount** | **float64** | Invoice amount. | [optional] [default to null]
**InvoicesDate** | **string** | Invoice date. | [optional] [default to null]
**InvoicesPaid** | **float64** |  | [optional] [default to null]
**InvoicesDueDate** | **string** |  | [optional] [default to null]
**InvoicesCurrency** | **string** |  | [optional] [default to null]
**CurrencySymbol** | **string** |  | [optional] [default to null]
**InvoicesDateFormatted** | **string** |  | [optional] [default to null]
**PaidInvoices** | [**map[string]ChargeInvoiceRowsPaidInvoices**](ChargeInvoiceRows_paid_invoices.md) | This is optional when invoices_paid &#x3D; 1 this array will show | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

