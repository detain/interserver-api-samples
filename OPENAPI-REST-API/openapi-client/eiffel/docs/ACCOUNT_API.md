# ACCOUNT_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**account_info**](ACCOUNT_API.md#account_info) | **Get** /account | Retrieve Account Details
[**account_tfa_setup**](ACCOUNT_API.md#account_tfa_setup) | **Get** /account/2fa | Get Two-Factor Setup Data
[**change_account_username**](ACCOUNT_API.md#change_account_username) | **Post** /account/username | Change Account Username
[**delete_account_oauth_name**](ACCOUNT_API.md#delete_account_oauth_name) | **Delete** /account/oauth/{name} | Unlink OAuth Account
[**delete_account_tfa**](ACCOUNT_API.md#delete_account_tfa) | **Delete** /account/2fa | Disable Two-Factor Authentication
[**delete_ip_limit**](ACCOUNT_API.md#delete_ip_limit) | **Patch** /account/iplimits | Remove IP Access Restriction
[**home**](ACCOUNT_API.md#home) | **Get** /home | Get Home Data
[**logout**](ACCOUNT_API.md#logout) | **Get** /logout | Log Out
[**logout_account_oauth**](ACCOUNT_API.md#logout_account_oauth) | **Get** /account/oauth/{name}/logout | Logout of OAuth
[**search**](ACCOUNT_API.md#search) | **Get** /search | Search Autocomplete
[**update_account_api_key**](ACCOUNT_API.md#update_account_api_key) | **Post** /account/apikey | Generate New API Key
[**update_account_features**](ACCOUNT_API.md#update_account_features) | **Post** /account/features | Update Account Feature Flags
[**update_account_info**](ACCOUNT_API.md#update_account_info) | **Post** /account | Update Account Information
[**update_account_ip_limits**](ACCOUNT_API.md#update_account_ip_limits) | **Post** /account/iplimits | Add IP Access Restriction
[**update_account_password**](ACCOUNT_API.md#update_account_password) | **Post** /account/password | Change Account Password
[**update_account_ssh_key**](ACCOUNT_API.md#update_account_ssh_key) | **Post** /account/sshkey | Update SSH Keys
[**update_account_tfa**](ACCOUNT_API.md#update_account_tfa) | **Post** /account/2fa | Enable Two-Factor Authentication


# **account_info**
> account_info : detachable ACCOUNT_INFO


Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.


### Parameters
This endpoint does not need any parameter.

### Return type

[**ACCOUNT_INFO**](AccountInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **account_tfa_setup**
> account_tfa_setup : detachable GET_ACCOUNT_TFA_SETUP_200_RESPONSE


Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.


### Parameters
This endpoint does not need any parameter.

### Return type

[**GET_ACCOUNT_TFA_SETUP_200_RESPONSE**](getAccountTfaSetup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **change_account_username**
> change_account_username : detachable TEXT_RESPONSE


Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.


### Parameters
This endpoint does not need any parameter.

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_account_oauth_name**
> delete_account_oauth_name (name: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **STRING_32**|  | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_account_tfa**
> delete_account_tfa : detachable SUCCESS_TEXT_RESPONSE


Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_ip_limit**
> delete_ip_limit (ip_limit_range:  detachable IP_LIMIT_RANGE ): detachable GENERIC_RESPONSE


Remove IP Access Restriction

Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ip_limit_range** | [**IP_LIMIT_RANGE**](IP_LIMIT_RANGE.md)|  | [optional] 

### Return type

[**GENERIC_RESPONSE**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **home**
> home : detachable HOME


Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.


### Parameters
This endpoint does not need any parameter.

### Return type

[**HOME**](Home.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logout**
> logout : detachable SUCCESS_TEXT_RESPONSE


Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logout_account_oauth**
> logout_account_oauth (name: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Logout of OAuth

Logs out of the specified OAuth provider session.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **STRING_32**|  | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **search**
> search : detachable SEARCH_AUTOCOMPLETE_RESPONSE


Search Autocomplete

Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SEARCH_AUTOCOMPLETE_RESPONSE**](SearchAutocompleteResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_api_key**
> update_account_api_key : detachable SUCCESS_TEXT_RESPONSE


Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_features**
> update_account_features (disable_reset:  detachable INTEGER_32 ; disable_reinstall:  detachable INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disable_reset** | **INTEGER_32**|  | [optional] [default to null]
 **disable_reinstall** | **INTEGER_32**|  | [optional] [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_info**
> update_account_info (name: STRING_32 ; address: STRING_32 ; city: STRING_32 ; state: STRING_32 ; zip: STRING_32 ; country: STRING_32 ; phone: STRING_32 ; company:  detachable STRING_32 ; address2:  detachable STRING_32 ; locale:  detachable STRING_32 ; email_invoices:  detachable STRING_32 ; email_abuse:  detachable STRING_32 ; disable_reset:  detachable BOOLEAN ; disable_reinstall:  detachable BOOLEAN ; disable_server_notifications:  detachable BOOLEAN ; disable_email_notifications:  detachable BOOLEAN ; gstin:  detachable STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **STRING_32**| Your name. | [default to null]
 **address** | **STRING_32**| Your address. | [default to null]
 **city** | **STRING_32**| Your city. | [default to null]
 **state** | **STRING_32**| Your state. | [default to null]
 **zip** | **STRING_32**| Your ZIP code. | [default to null]
 **country** | **STRING_32**| Your country. | [default to null]
 **phone** | **STRING_32**| Your phone number. | [default to null]
 **company** | **STRING_32**| Your company name. | [optional] [default to null]
 **address2** | **STRING_32**| Additional address information. | [optional] [default to null]
 **locale** | **STRING_32**| Your preferred locale. | [optional] [default to null]
 **email_invoices** | **STRING_32**| Your email for invoice notifications. | [optional] [default to null]
 **email_abuse** | **STRING_32**| Your email for abuse notifications. | [optional] [default to null]
 **disable_reset** | **BOOLEAN**| Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] [default to null]
 **disable_reinstall** | **BOOLEAN**| Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] [default to null]
 **disable_server_notifications** | **BOOLEAN**| Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] [default to null]
 **disable_email_notifications** | **BOOLEAN**| Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] [default to null]
 **gstin** | **STRING_32**| Your GST identification number (if applicable). | [optional] [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_ip_limits**
> update_account_ip_limits (start: STRING_32 ; var_end: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Add IP Access Restriction

Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **STRING_32**| The begining (or first) IP address in the range. | [default to null]
 **var_end** | **STRING_32**| The ending (or last) IP address in the range. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_password**
> update_account_password (password: STRING_32 ): detachable TEXT_RESPONSE


Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **STRING_32**|  | [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_ssh_key**
> update_account_ssh_key (ssh_key:  detachable STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ssh_key** | **STRING_32**|  | [optional] [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_account_tfa**
> update_account_tfa (var_2fa_google_code: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **var_2fa_google_code** | **STRING_32**| The 6-digit verification code from your authenticator app. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

