
# DomainLookupResponse

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **available** | **kotlin.Boolean** | Whether the domain is available to register. |  [optional] |
| **premium** | **kotlin.Boolean** | Whether the domain is marked as premium by the registrar. |  [optional] |
| **website** | **kotlin.Boolean** | Indicates if the domain is already used by a website service. |  [optional] |
| **domainService** | **kotlin.Boolean** | Indicates if the domain already exists as a domain service on the account. |  [optional] |
| **service** | [**kotlin.Any**](.md) | Service catalog details for the domain&#39;s TLD. |  [optional] |
| **whoisPrivacy** | **kotlin.Boolean** | Whether Whois privacy is available for the TLD. |  [optional] |
| **new** | **kotlin.String** | Calculated registration price, when available. |  [optional] |
| **renewal** | **kotlin.String** | Calculated renewal price, when available. |  [optional] |
| **transfer** | **kotlin.String** | Calculated transfer price, when available. |  [optional] |
| **fields** | [**kotlin.Any**](.md) | Registrar field requirements for this domain/TLD. |  [optional] |
| **currencies** | [**kotlin.Any**](.md) | Pricing information normalized to supported currencies. |  [optional] |



