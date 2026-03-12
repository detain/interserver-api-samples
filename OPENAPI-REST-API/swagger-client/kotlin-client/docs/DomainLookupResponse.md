# DomainLookupResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**available** | [**kotlin.Boolean**](.md) | Whether the domain is available to register. |  [optional]
**premium** | [**kotlin.Boolean**](.md) | Whether the domain is marked as premium by the registrar. |  [optional]
**website** | [**kotlin.Boolean**](.md) | Indicates if the domain is already used by a website service. |  [optional]
**domainService** | [**kotlin.Boolean**](.md) | Indicates if the domain already exists as a domain service on the account. |  [optional]
**service** | [**kotlin.Any**](.md) | Service catalog details for the domain&#x27;s TLD. |  [optional]
**whoisPrivacy** | [**kotlin.Boolean**](.md) | Whether Whois privacy is available for the TLD. |  [optional]
**new** | [**kotlin.String**](.md) | Calculated registration price, when available. |  [optional]
**renewal** | [**kotlin.String**](.md) | Calculated renewal price, when available. |  [optional]
**transfer** | [**kotlin.String**](.md) | Calculated transfer price, when available. |  [optional]
**fields** | [**kotlin.Any**](.md) | Registrar field requirements for this domain/TLD. |  [optional]
**currencies** | [**kotlin.Any**](.md) | Pricing information normalized to supported currencies. |  [optional]
