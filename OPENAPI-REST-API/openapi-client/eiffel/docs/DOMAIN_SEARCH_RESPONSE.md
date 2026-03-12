# DOMAIN_SEARCH_RESPONSE

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**success** | **BOOLEAN** | Indicates whether the registrar search succeeded. | [optional] [default to null]
**response_text** | [**STRING_32**](STRING_32.md) | Human-readable status text from the registrar. | [optional] [default to null]
**response_time** | [**STRING_32**](STRING_32.md) | Response time as reported by the registrar. | [optional] [default to null]
**lookup** | [**LIST [ANY]**](ANY.md) | Availability lookup results for queried domains. | [optional] [default to null]
**suggest** | [**LIST [ANY]**](ANY.md) | Suggested alternative domains and availability data. | [optional] [default to null]
**tlds** | [**LIST [STRING_32]**](STRING_32.md) | TLDs evaluated during the search. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


