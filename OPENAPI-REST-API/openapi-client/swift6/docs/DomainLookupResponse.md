# DomainLookupResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**available** | **Bool** | Whether the domain is available to register. | [optional] 
**premium** | **Bool** | Whether the domain is marked as premium by the registrar. | [optional] 
**website** | **Bool** | Indicates if the domain is already used by a website service. | [optional] 
**domainService** | **Bool** | Indicates if the domain already exists as a domain service on the account. | [optional] 
**service** | **JSONValue** | Service catalog details for the domain&#39;s TLD. | [optional] 
**whoisPrivacy** | **Bool** | Whether Whois privacy is available for the TLD. | [optional] 
**new** | **String** | Calculated registration price, when available. | [optional] 
**renewal** | **String** | Calculated renewal price, when available. | [optional] 
**transfer** | **String** | Calculated transfer price, when available. | [optional] 
**fields** | **JSONValue** | Registrar field requirements for this domain/TLD. | [optional] 
**currencies** | **JSONValue** | Pricing information normalized to supported currencies. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


