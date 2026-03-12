# DomainBillingDetails
## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
| **service\_last\_invoice\_date** | **String** | Date of the last invoice for the domain. | [optional] [default to null] |
| **service\_payment\_status** | **String** | Current payment status (e.g., Paid, Unpaid). | [optional] [default to null] |
| **service\_frequency** | **String** | Billing frequency (e.g., Yearly, Monthly). | [optional] [default to null] |
| **next\_date** | **String** | Next billing date (ISO 8601). | [optional] [default to null] |
| **service\_next\_invoice\_date** | **String** | Human-readable next invoice date. | [optional] [default to null] |
| **service\_currency** | **String** | Billing currency code. | [optional] [default to null] |
| **service\_currency\_symbol** | **String** | Billing currency symbol. | [optional] [default to null] |
| **service\_cost\_info** | **String** | Cost breakdown information. | [optional] [default to null] |
| **service\_extra** | [**DomainBillingExtra**](DomainBillingExtra.md) |  | [optional] [default to null] |
| **service\_extra\_json** | **String** | Raw JSON string of extra billing data. | [optional] [default to null] |

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

