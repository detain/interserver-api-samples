# DomainSearchResponse

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Success** | **bool** | Indicates whether the registrar search succeeded. | [optional] [default to null]
**ResponseText** | **string** | Human-readable status text from the registrar. | [optional] [default to null]
**ResponseTime** | **string** | Response time as reported by the registrar. | [optional] [default to null]
**Lookup** | [**[]interface{}**](interface{}.md) | Availability lookup results for queried domains. | [optional] [default to null]
**Suggest** | [**[]interface{}**](interface{}.md) | Suggested alternative domains and availability data. | [optional] [default to null]
**Tlds** | **[]string** | TLDs evaluated during the search. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

