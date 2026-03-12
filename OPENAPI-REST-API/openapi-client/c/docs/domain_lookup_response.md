# domain_lookup_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**available** | **int** | Whether the domain is available to register. | [optional] 
**premium** | **int** | Whether the domain is marked as premium by the registrar. | [optional] 
**website** | **int** | Indicates if the domain is already used by a website service. | [optional] 
**domain_service** | **int** | Indicates if the domain already exists as a domain service on the account. | [optional] 
**service** | [**object_t**](.md) \* | Service catalog details for the domain&#39;s TLD. | [optional] 
**whois_privacy** | **int** | Whether Whois privacy is available for the TLD. | [optional] 
**_new** | **char \*** | Calculated registration price, when available. | [optional] 
**renewal** | **char \*** | Calculated renewal price, when available. | [optional] 
**transfer** | **char \*** | Calculated transfer price, when available. | [optional] 
**fields** | [**object_t**](.md) \* | Registrar field requirements for this domain/TLD. | [optional] 
**currencies** | [**object_t**](.md) \* | Pricing information normalized to supported currencies. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


