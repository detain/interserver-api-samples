# IO.Swagger.Model.DomainLookupResponse
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Available** | **bool?** | Whether the domain is available to register. | [optional] 
**Premium** | **bool?** | Whether the domain is marked as premium by the registrar. | [optional] 
**Website** | **bool?** | Indicates if the domain is already used by a website service. | [optional] 
**DomainService** | **bool?** | Indicates if the domain already exists as a domain service on the account. | [optional] 
**Service** | **Object** | Service catalog details for the domain&#x27;s TLD. | [optional] 
**WhoisPrivacy** | **bool?** | Whether Whois privacy is available for the TLD. | [optional] 
**_New** | **string** | Calculated registration price, when available. | [optional] 
**Renewal** | **string** | Calculated renewal price, when available. | [optional] 
**Transfer** | **string** | Calculated transfer price, when available. | [optional] 
**Fields** | **Object** | Registrar field requirements for this domain/TLD. | [optional] 
**Currencies** | **Object** | Pricing information normalized to supported currencies. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

