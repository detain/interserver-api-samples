# DOMAIN_BILLING_DETAILS

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**service_last_invoice_date** | [**STRING_32**](STRING_32.md) | Date of the last invoice for the domain. | [optional] [default to null]
**service_payment_status** | [**STRING_32**](STRING_32.md) | Current payment status (e.g., Paid, Unpaid). | [optional] [default to null]
**service_frequency** | [**STRING_32**](STRING_32.md) | Billing frequency (e.g., Yearly, Monthly). | [optional] [default to null]
**next_date** | [**STRING_32**](STRING_32.md) | Next billing date (ISO 8601). | [optional] [default to null]
**service_next_invoice_date** | [**STRING_32**](STRING_32.md) | Human-readable next invoice date. | [optional] [default to null]
**service_currency** | [**STRING_32**](STRING_32.md) | Billing currency code. | [optional] [default to null]
**service_currency_symbol** | [**STRING_32**](STRING_32.md) | Billing currency symbol. | [optional] [default to null]
**service_cost_info** | [**STRING_32**](STRING_32.md) | Cost breakdown information. | [optional] [default to null]
**service_extra** | [**DOMAIN_BILLING_EXTRA**](DomainBillingExtra.md) |  | [optional] [default to null]
**service_extra_json** | [**STRING_32**](STRING_32.md) | Raw JSON string of extra billing data. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


