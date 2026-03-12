

# DomainLookupResponse

Availability, pricing, and order-field metadata for a domain lookup.

The class is defined in **[DomainLookupResponse.java](../../src/main/java/org/openapitools/model/DomainLookupResponse.java)**

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**available** | `Boolean` | Whether the domain is available to register. |  [optional property]
**premium** | `Boolean` | Whether the domain is marked as premium by the registrar. |  [optional property]
**website** | `Boolean` | Indicates if the domain is already used by a website service. |  [optional property]
**domainService** | `Boolean` | Indicates if the domain already exists as a domain service on the account. |  [optional property]
**service** | `Object` | Service catalog details for the domain&#39;s TLD. |  [optional property]
**whoisPrivacy** | `Boolean` | Whether Whois privacy is available for the TLD. |  [optional property]
**_new** | `String` | Calculated registration price, when available. |  [optional property]
**renewal** | `String` | Calculated renewal price, when available. |  [optional property]
**transfer** | `String` | Calculated transfer price, when available. |  [optional property]
**fields** | `Object` | Registrar field requirements for this domain/TLD. |  [optional property]
**currencies** | `Object` | Pricing information normalized to supported currencies. |  [optional property]













