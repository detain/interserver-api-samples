# CHARGE_INVOICE_ROWS_INVOICES_VALUE

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**invoices_id** | **REAL_32** | Unique invoice ID. | [optional] [default to null]
**invoices_description** | [**STRING_32**](STRING_32.md) | Description of the invoice charge. | [optional] [default to null]
**invoices_amount** | **REAL_32** | Invoice amount. | [optional] [default to null]
**invoices_date** | [**STRING_32**](STRING_32.md) | Invoice date. | [optional] [default to null]
**invoices_paid** | **REAL_32** |  | [optional] [default to null]
**invoices_due_date** | [**STRING_32**](STRING_32.md) |  | [optional] [default to null]
**invoices_currency** | [**STRING_32**](STRING_32.md) |  | [optional] [default to null]
**currency_symbol** | [**STRING_32**](STRING_32.md) |  | [optional] [default to null]
**invoices_date_formatted** | [**STRING_32**](STRING_32.md) |  | [optional] [default to null]
**paid_invoices** | [**STRING_TABLE [CHARGE_INVOICE_ROWS_INVOICES_VALUE_PAID_INVOICES_VALUE]**](ChargeInvoiceRows_invoices_value_paid_invoices_value.md) | This is optional when invoices_paid &#x3D; 1 this array will show | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


