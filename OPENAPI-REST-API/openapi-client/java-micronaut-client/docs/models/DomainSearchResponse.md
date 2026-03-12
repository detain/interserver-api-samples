

# DomainSearchResponse

Lookup and suggestion results returned for a domain search.

The class is defined in **[DomainSearchResponse.java](../../src/main/java/org/openapitools/model/DomainSearchResponse.java)**

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**success** | `Boolean` | Indicates whether the registrar search succeeded. |  [optional property]
**responseText** | `String` | Human-readable status text from the registrar. |  [optional property]
**responseTime** | `String` | Response time as reported by the registrar. |  [optional property]
**lookup** | `List&lt;Object&gt;` | Availability lookup results for queried domains. |  [optional property]
**suggest** | `List&lt;Object&gt;` | Suggested alternative domains and availability data. |  [optional property]
**tlds** | `List&lt;String&gt;` | TLDs evaluated during the search. |  [optional property]








