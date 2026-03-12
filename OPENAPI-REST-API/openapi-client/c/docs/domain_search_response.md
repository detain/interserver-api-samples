# domain_search_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**success** | **int** | Indicates whether the registrar search succeeded. | [optional] 
**response_text** | **char \*** | Human-readable status text from the registrar. | [optional] 
**response_time** | **char \*** | Response time as reported by the registrar. | [optional] 
**lookup** | [**list_t**](object.md) \* | Availability lookup results for queried domains. | [optional] 
**suggest** | [**list_t**](object.md) \* | Suggested alternative domains and availability data. | [optional] 
**tlds** | **list_t \*** | TLDs evaluated during the search. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


