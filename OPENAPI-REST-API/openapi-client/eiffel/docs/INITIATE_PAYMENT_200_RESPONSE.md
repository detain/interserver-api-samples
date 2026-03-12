# INITIATE_PAYMENT_200_RESPONSE

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**type** | [**STRING_32**](STRING_32.md) | The response type indicating how to handle the payment. Possible values: &#x60;redirect&#x60; (redirect user to a URL), &#x60;submit&#x60; (submit a form to a URL), &#x60;single&#x60; (immediate result). | [optional] [default to null]
**redirect** | [**STRING_32**](STRING_32.md) | URL to redirect the user to for payment (when type is &#x60;redirect&#x60;). | [optional] [default to null]
**action** | [**STRING_32**](STRING_32.md) | Form action URL (when type is &#x60;submit&#x60;). | [optional] [default to null]
**method** | [**STRING_32**](STRING_32.md) | HTTP method for the form submission (when type is &#x60;submit&#x60;). | [optional] [default to null]
**items** | [**ANY**](.md) | Form field name-value pairs to submit (when type is &#x60;submit&#x60;). | [optional] [default to null]
**text** | [**STRING_32**](STRING_32.md) | Status or result text. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


