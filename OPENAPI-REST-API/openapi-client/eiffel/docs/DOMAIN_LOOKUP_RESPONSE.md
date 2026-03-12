# DOMAIN_LOOKUP_RESPONSE

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**available** | **BOOLEAN** | Whether the domain is available to register. | [optional] [default to null]
**premium** | **BOOLEAN** | Whether the domain is marked as premium by the registrar. | [optional] [default to null]
**website** | **BOOLEAN** | Indicates if the domain is already used by a website service. | [optional] [default to null]
**domain_service** | **BOOLEAN** | Indicates if the domain already exists as a domain service on the account. | [optional] [default to null]
**service** | [**ANY**](.md) | Service catalog details for the domain&#39;s TLD. | [optional] [default to null]
**whois_privacy** | **BOOLEAN** | Whether Whois privacy is available for the TLD. | [optional] [default to null]
**new** | [**STRING_32**](STRING_32.md) | Calculated registration price, when available. | [optional] [default to null]
**renewal** | [**STRING_32**](STRING_32.md) | Calculated renewal price, when available. | [optional] [default to null]
**transfer** | [**STRING_32**](STRING_32.md) | Calculated transfer price, when available. | [optional] [default to null]
**fields** | [**ANY**](.md) | Registrar field requirements for this domain/TLD. | [optional] [default to null]
**currencies** | [**ANY**](.md) | Pricing information normalized to supported currencies. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


