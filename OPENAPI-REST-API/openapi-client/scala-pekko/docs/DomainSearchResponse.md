

# DomainSearchResponse

Lookup and suggestion results returned for a domain search.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**success** | **Boolean** | Indicates whether the registrar search succeeded. |  [optional]
**response_text** | **String** | Human-readable status text from the registrar. |  [optional]
**response_time** | **String** | Response time as reported by the registrar. |  [optional]
**lookup** | **Seq&lt;Any&gt;** | Availability lookup results for queried domains. |  [optional]
**suggest** | **Seq&lt;Any&gt;** | Suggested alternative domains and availability data. |  [optional]
**tlds** | **Seq&lt;String&gt;** | TLDs evaluated during the search. |  [optional]



