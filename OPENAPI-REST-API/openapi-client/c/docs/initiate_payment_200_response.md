# initiate_payment_200_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**type** | **interserver_management_api_initiate_payment_200_response_TYPE_e** | The response type indicating how to handle the payment. Possible values: &#x60;redirect&#x60; (redirect user to a URL), &#x60;submit&#x60; (submit a form to a URL), &#x60;single&#x60; (immediate result). | [optional] 
**redirect** | **char \*** | URL to redirect the user to for payment (when type is &#x60;redirect&#x60;). | [optional] 
**action** | **char \*** | Form action URL (when type is &#x60;submit&#x60;). | [optional] 
**method** | **char \*** | HTTP method for the form submission (when type is &#x60;submit&#x60;). | [optional] 
**items** | [**object_t**](.md) \* | Form field name-value pairs to submit (when type is &#x60;submit&#x60;). | [optional] 
**text** | **char \*** | Status or result text. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


