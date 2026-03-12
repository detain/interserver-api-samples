# AccountApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**changeAccountUsername**](AccountApi.md#changeAccountUsername) | **POST** /account/username | Change Account Username |
| [**deleteAccountOauthName**](AccountApi.md#deleteAccountOauthName) | **DELETE** /account/oauth/{name} | Unlink OAuth Account |
| [**deleteAccountTfa**](AccountApi.md#deleteAccountTfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication |
| [**deleteIpLimit**](AccountApi.md#deleteIpLimit) | **PATCH** /account/iplimits | Remove IP Access Restriction |
| [**getAccountInfo**](AccountApi.md#getAccountInfo) | **GET** /account | Retrieve Account Details |
| [**getAccountTfaSetup**](AccountApi.md#getAccountTfaSetup) | **GET** /account/2fa | Get Two-Factor Setup Data |
| [**getHome**](AccountApi.md#getHome) | **GET** /home | Get Home Data |
| [**getSearch**](AccountApi.md#getSearch) | **GET** /search | Search Autocomplete |
| [**logout**](AccountApi.md#logout) | **GET** /logout | Log Out |
| [**logoutAccountOauth**](AccountApi.md#logoutAccountOauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth |
| [**updateAccountApiKey**](AccountApi.md#updateAccountApiKey) | **POST** /account/apikey | Generate New API Key |
| [**updateAccountFeatures**](AccountApi.md#updateAccountFeatures) | **POST** /account/features | Update Account Feature Flags |
| [**updateAccountInfo**](AccountApi.md#updateAccountInfo) | **POST** /account | Update Account Information |
| [**updateAccountIpLimits**](AccountApi.md#updateAccountIpLimits) | **POST** /account/iplimits | Add IP Access Restriction |
| [**updateAccountPassword**](AccountApi.md#updateAccountPassword) | **POST** /account/password | Change Account Password |
| [**updateAccountSshKey**](AccountApi.md#updateAccountSshKey) | **POST** /account/sshkey | Update SSH Keys |
| [**updateAccountTfa**](AccountApi.md#updateAccountTfa) | **POST** /account/2fa | Enable Two-Factor Authentication |


<a name="changeAccountUsername"></a>
# **changeAccountUsername**
> TextResponse changeAccountUsername()

Change Account Username

    Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteAccountOauthName"></a>
# **deleteAccountOauthName**
> SuccessTextResponse deleteAccountOauthName(name)

Unlink OAuth Account

    Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | **String**|  | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteAccountTfa"></a>
# **deleteAccountTfa**
> SuccessTextResponse deleteAccountTfa()

Disable Two-Factor Authentication

    Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteIpLimit"></a>
# **deleteIpLimit**
> GenericResponse deleteIpLimit()

Remove IP Access Restriction

    Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Parameters
This endpoint does not need any parameter.

### Return type

[**GenericResponse**](../Models/GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

<a name="getAccountInfo"></a>
# **getAccountInfo**
> AccountInfo getAccountInfo()

Retrieve Account Details

    Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.

### Parameters
This endpoint does not need any parameter.

### Return type

[**AccountInfo**](../Models/AccountInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getAccountTfaSetup"></a>
# **getAccountTfaSetup**
> getAccountTfaSetup_200_response getAccountTfaSetup()

Get Two-Factor Setup Data

    Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.

### Parameters
This endpoint does not need any parameter.

### Return type

[**getAccountTfaSetup_200_response**](../Models/getAccountTfaSetup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getHome"></a>
# **getHome**
> Home getHome()

Get Home Data

    Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Parameters
This endpoint does not need any parameter.

### Return type

[**Home**](../Models/Home.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSearch"></a>
# **getSearch**
> SearchAutocompleteResponse getSearch()

Search Autocomplete

    Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.

### Parameters
This endpoint does not need any parameter.

### Return type

[**SearchAutocompleteResponse**](../Models/SearchAutocompleteResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="logout"></a>
# **logout**
> SuccessTextResponse logout()

Log Out

    Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="logoutAccountOauth"></a>
# **logoutAccountOauth**
> SuccessTextResponse logoutAccountOauth(name)

Logout of OAuth

    Logs out of the specified OAuth provider session.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | **String**|  | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateAccountApiKey"></a>
# **updateAccountApiKey**
> SuccessTextResponse updateAccountApiKey()

Generate New API Key

    Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateAccountFeatures"></a>
# **updateAccountFeatures**
> SuccessTextResponse updateAccountFeatures(disable\_reset, disable\_reinstall)

Update Account Feature Flags

    Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **disable\_reset** | **Integer**|  | [optional] [default to null] |
| **disable\_reinstall** | **Integer**|  | [optional] [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateAccountInfo"></a>
# **updateAccountInfo**
> updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, email\_invoices, email\_abuse, disable\_reset, disable\_reinstall, disable\_server\_notifications, disable\_email\_notifications, gstin)

Update Account Information

    Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | **String**| Your name. | [default to null] |
| **address** | **String**| Your address. | [default to null] |
| **city** | **String**| Your city. | [default to null] |
| **state** | **String**| Your state. | [default to null] |
| **zip** | **String**| Your ZIP code. | [default to null] |
| **country** | **String**| Your country. | [default to null] |
| **phone** | **String**| Your phone number. | [default to null] |
| **company** | **String**| Your company name. | [optional] [default to null] |
| **address2** | **String**| Additional address information. | [optional] [default to null] |
| **locale** | **String**| Your preferred locale. | [optional] [default to null] |
| **email\_invoices** | **String**| Your email for invoice notifications. | [optional] [default to null] |
| **email\_abuse** | **String**| Your email for abuse notifications. | [optional] [default to null] |
| **disable\_reset** | **Boolean**| Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] [default to null] |
| **disable\_reinstall** | **Boolean**| Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] [default to null] |
| **disable\_server\_notifications** | **Boolean**| Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] [default to null] |
| **disable\_email\_notifications** | **Boolean**| Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] [default to null] |
| **gstin** | **String**| Your GST identification number (if applicable). | [optional] [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateAccountIpLimits"></a>
# **updateAccountIpLimits**
> updateAccountIpLimits(start, end)

Add IP Access Restriction

    Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **start** | **String**| The begining (or first) IP address in the range. | [default to null] |
| **end** | **String**| The ending (or last) IP address in the range. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateAccountPassword"></a>
# **updateAccountPassword**
> TextResponse updateAccountPassword(password)

Change Account Password

    Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **password** | **String**|  | [default to null] |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateAccountSshKey"></a>
# **updateAccountSshKey**
> SuccessTextResponse updateAccountSshKey(ssh\_key)

Update SSH Keys

    Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **ssh\_key** | **String**|  | [optional] [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="updateAccountTfa"></a>
# **updateAccountTfa**
> SuccessTextResponse updateAccountTfa(2fa\_google\_code)

Enable Two-Factor Authentication

    Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **2fa\_google\_code** | **String**| The 6-digit verification code from your authenticator app. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

