# DomainBillingDetails

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceLastInvoiceDate** | **string** | Date of the last invoice for the domain. | [optional] [default to null]
**ServicePaymentStatus** | **string** | Current payment status (e.g., Paid, Unpaid). | [optional] [default to null]
**ServiceFrequency** | **string** | Billing frequency (e.g., Yearly, Monthly). | [optional] [default to null]
**NextDate** | **string** | Next billing date (ISO 8601). | [optional] [default to null]
**ServiceNextInvoiceDate** | **string** | Human-readable next invoice date. | [optional] [default to null]
**ServiceCurrency** | **string** | Billing currency code. | [optional] [default to null]
**ServiceCurrencySymbol** | **string** | Billing currency symbol. | [optional] [default to null]
**ServiceCostInfo** | **string** | Cost breakdown information. | [optional] [default to null]
**ServiceExtra** | [***DomainBillingExtra**](DomainBillingExtra.md) |  | [optional] [default to null]
**ServiceExtraJson** | **string** | Raw JSON string of extra billing data. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

