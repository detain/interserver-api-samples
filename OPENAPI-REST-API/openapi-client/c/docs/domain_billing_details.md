# domain_billing_details_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**service_last_invoice_date** | **char \*** | Date of the last invoice for the domain. | [optional] 
**service_payment_status** | **char \*** | Current payment status (e.g., Paid, Unpaid). | [optional] 
**service_frequency** | **char \*** | Billing frequency (e.g., Yearly, Monthly). | [optional] 
**next_date** | **char \*** | Next billing date (ISO 8601). | [optional] 
**service_next_invoice_date** | **char \*** | Human-readable next invoice date. | [optional] 
**service_currency** | **char \*** | Billing currency code. | [optional] 
**service_currency_symbol** | **char \*** | Billing currency symbol. | [optional] 
**service_cost_info** | **char \*** | Cost breakdown information. | [optional] 
**service_extra** | [**domain_billing_extra_t**](domain_billing_extra.md) \* |  | [optional] 
**service_extra_json** | **char \*** | Raw JSON string of extra billing data. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


