# POST_OAUTH_CALLBACK_200_RESPONSE

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**login** | **BOOLEAN** | Whether the user was logged in to an existing account. | [optional] [default to null]
**signup** | **BOOLEAN** | Whether a new account was created. | [optional] [default to null]
**linked** | **BOOLEAN** | Whether the OAuth provider was linked to an existing account. | [optional] [default to null]
**account_id** | **INTEGER_32** | The account ID associated with the OAuth login. | [optional] [default to null]
**error_code** | [**STRING_32**](STRING_32.md) | Error code if additional verification is needed (e.g. &#x60;2fa_required&#x60;). | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


