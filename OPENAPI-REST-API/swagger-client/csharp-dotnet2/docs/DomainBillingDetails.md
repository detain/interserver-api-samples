# IO.Swagger.Model.DomainBillingDetails
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceLastInvoiceDate** | **string** | Date of the last invoice for the domain. | [optional] 
**ServicePaymentStatus** | **string** | Current payment status (e.g., Paid, Unpaid). | [optional] 
**ServiceFrequency** | **string** | Billing frequency (e.g., Yearly, Monthly). | [optional] 
**NextDate** | **string** | Next billing date (ISO 8601). | [optional] 
**ServiceNextInvoiceDate** | **string** | Human-readable next invoice date. | [optional] 
**ServiceCurrency** | **string** | Billing currency code. | [optional] 
**ServiceCurrencySymbol** | **string** | Billing currency symbol. | [optional] 
**ServiceCostInfo** | **string** | Cost breakdown information. | [optional] 
**ServiceExtra** | [**DomainBillingExtra**](DomainBillingExtra.md) |  | [optional] 
**ServiceExtraJson** | **string** | Raw JSON string of extra billing data. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

