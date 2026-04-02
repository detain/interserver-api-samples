# DomainLookupResponse
## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
| **available** | **Boolean** | Whether the domain is available to register. | [optional] [default to null] |
| **premium** | **Boolean** | Whether the domain is marked as premium by the registrar. | [optional] [default to null] |
| **website** | **Boolean** | Indicates if the domain is already used by a website service. | [optional] [default to null] |
| **domain\_service** | **Boolean** | Indicates if the domain already exists as a domain service on the account. | [optional] [default to null] |
| **service** | [**Object**](.md) | Service catalog details for the domain&#39;s TLD. | [optional] [default to null] |
| **whois\_privacy** | **Boolean** | Whether Whois privacy is available for the TLD. | [optional] [default to null] |
| **new** | **String** | Calculated registration price, when available. | [optional] [default to null] |
| **renewal** | **String** | Calculated renewal price, when available. | [optional] [default to null] |
| **transfer** | **String** | Calculated transfer price, when available. | [optional] [default to null] |
| **fields** | [**Object**](.md) | Registrar field requirements for this domain/TLD. | [optional] [default to null] |
| **currencies** | [**Object**](.md) | Pricing information normalized to supported currencies. | [optional] [default to null] |

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

