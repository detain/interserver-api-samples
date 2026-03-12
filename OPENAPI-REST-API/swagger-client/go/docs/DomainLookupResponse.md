# DomainLookupResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Available** | **bool** | Whether the domain is available to register. | [optional] [default to null]
**Premium** | **bool** | Whether the domain is marked as premium by the registrar. | [optional] [default to null]
**Website** | **bool** | Indicates if the domain is already used by a website service. | [optional] [default to null]
**DomainService** | **bool** | Indicates if the domain already exists as a domain service on the account. | [optional] [default to null]
**Service** | [***interface{}**](interface{}.md) | Service catalog details for the domain&#x27;s TLD. | [optional] [default to null]
**WhoisPrivacy** | **bool** | Whether Whois privacy is available for the TLD. | [optional] [default to null]
**New** | **string** | Calculated registration price, when available. | [optional] [default to null]
**Renewal** | **string** | Calculated renewal price, when available. | [optional] [default to null]
**Transfer** | **string** | Calculated transfer price, when available. | [optional] [default to null]
**Fields** | [***interface{}**](interface{}.md) | Registrar field requirements for this domain/TLD. | [optional] [default to null]
**Currencies** | [***interface{}**](interface{}.md) | Pricing information normalized to supported currencies. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

