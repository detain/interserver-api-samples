# AccountAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccountAPI_changeAccountUsername**](AccountAPI.md#AccountAPI_changeAccountUsername) | **POST** /account/username | Change Account Username
[**AccountAPI_deleteAccountOauthName**](AccountAPI.md#AccountAPI_deleteAccountOauthName) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
[**AccountAPI_deleteAccountTfa**](AccountAPI.md#AccountAPI_deleteAccountTfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
[**AccountAPI_deleteIpLimit**](AccountAPI.md#AccountAPI_deleteIpLimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
[**AccountAPI_getAccountInfo**](AccountAPI.md#AccountAPI_getAccountInfo) | **GET** /account | Retrieve Account Details
[**AccountAPI_getAccountTfaSetup**](AccountAPI.md#AccountAPI_getAccountTfaSetup) | **GET** /account/2fa | Get Two-Factor Setup Data
[**AccountAPI_getHome**](AccountAPI.md#AccountAPI_getHome) | **GET** /home | Get Home Data
[**AccountAPI_getSearch**](AccountAPI.md#AccountAPI_getSearch) | **GET** /search | Search Autocomplete
[**AccountAPI_logout**](AccountAPI.md#AccountAPI_logout) | **GET** /logout | Log Out
[**AccountAPI_logoutAccountOauth**](AccountAPI.md#AccountAPI_logoutAccountOauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
[**AccountAPI_updateAccountApiKey**](AccountAPI.md#AccountAPI_updateAccountApiKey) | **POST** /account/apikey | Generate New API Key
[**AccountAPI_updateAccountFeatures**](AccountAPI.md#AccountAPI_updateAccountFeatures) | **POST** /account/features | Update Account Feature Flags
[**AccountAPI_updateAccountInfo**](AccountAPI.md#AccountAPI_updateAccountInfo) | **POST** /account | Update Account Information
[**AccountAPI_updateAccountIpLimits**](AccountAPI.md#AccountAPI_updateAccountIpLimits) | **POST** /account/iplimits | Add IP Access Restriction
[**AccountAPI_updateAccountPassword**](AccountAPI.md#AccountAPI_updateAccountPassword) | **POST** /account/password | Change Account Password
[**AccountAPI_updateAccountSshKey**](AccountAPI.md#AccountAPI_updateAccountSshKey) | **POST** /account/sshkey | Update SSH Keys
[**AccountAPI_updateAccountTfa**](AccountAPI.md#AccountAPI_updateAccountTfa) | **POST** /account/2fa | Enable Two-Factor Authentication


# **AccountAPI_changeAccountUsername**
```c
// Change Account Username
//
// Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
//
text_response_t* AccountAPI_changeAccountUsername(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_deleteAccountOauthName**
```c
// Unlink OAuth Account
//
// Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
//
success_text_response_t* AccountAPI_deleteAccountOauthName(apiClient_t *apiClient, char *name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_deleteAccountTfa**
```c
// Disable Two-Factor Authentication
//
// Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
//
success_text_response_t* AccountAPI_deleteAccountTfa(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_deleteIpLimit**
```c
// Remove IP Access Restriction
//
// Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
//
generic_response_t* AccountAPI_deleteIpLimit(apiClient_t *apiClient, ip_limit_range_t *ip_limit_range);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ip_limit_range** | **[ip_limit_range_t](ip_limit_range.md) \*** |  | [optional] 

### Return type

[generic_response_t](generic_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_getAccountInfo**
```c
// Retrieve Account Details
//
// Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
//
account_info_t* AccountAPI_getAccountInfo(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[account_info_t](account_info.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_getAccountTfaSetup**
```c
// Get Two-Factor Setup Data
//
// Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
//
get_account_tfa_setup_200_response_t* AccountAPI_getAccountTfaSetup(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[get_account_tfa_setup_200_response_t](get_account_tfa_setup_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_getHome**
```c
// Get Home Data
//
// Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
//
home_t* AccountAPI_getHome(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[home_t](home.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_getSearch**
```c
// Search Autocomplete
//
// Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
//
search_autocomplete_response_t* AccountAPI_getSearch(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[search_autocomplete_response_t](search_autocomplete_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_logout**
```c
// Log Out
//
// Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
//
success_text_response_t* AccountAPI_logout(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_logoutAccountOauth**
```c
// Logout of OAuth
//
// Logs out of the specified OAuth provider session.
//
success_text_response_t* AccountAPI_logoutAccountOauth(apiClient_t *apiClient, char *name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_updateAccountApiKey**
```c
// Generate New API Key
//
// Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
//
success_text_response_t* AccountAPI_updateAccountApiKey(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_updateAccountFeatures**
```c
// Update Account Feature Flags
//
// Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
//
success_text_response_t* AccountAPI_updateAccountFeatures(apiClient_t *apiClient, int *disable_reset, int *disable_reinstall);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**disable_reset** | **int \*** |  | [optional] 
**disable_reinstall** | **int \*** |  | [optional] 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_updateAccountInfo**
```c
// Update Account Information
//
// Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
//
success_text_response_t* AccountAPI_updateAccountInfo(apiClient_t *apiClient, char *name, char *address, char *city, char *state, char *zip, char *country, char *phone, char *company, char *address2, char *locale, char *email_invoices, char *email_abuse, int *disable_reset, int *disable_reinstall, int *disable_server_notifications, int *disable_email_notifications, char *gstin);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Your name. | 
**address** | **char \*** | Your address. | 
**city** | **char \*** | Your city. | 
**state** | **char \*** | Your state. | 
**zip** | **char \*** | Your ZIP code. | 
**country** | **char \*** | Your country. | 
**phone** | **char \*** | Your phone number. | 
**company** | **char \*** | Your company name. | [optional] 
**address2** | **char \*** | Additional address information. | [optional] 
**locale** | **char \*** | Your preferred locale. | [optional] 
**email_invoices** | **char \*** | Your email for invoice notifications. | [optional] 
**email_abuse** | **char \*** | Your email for abuse notifications. | [optional] 
**disable_reset** | **int \*** | Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] 
**disable_reinstall** | **int \*** | Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] 
**disable_server_notifications** | **int \*** | Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] 
**disable_email_notifications** | **int \*** | Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] 
**gstin** | **char \*** | Your GST identification number (if applicable). | [optional] 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_updateAccountIpLimits**
```c
// Add IP Access Restriction
//
// Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
//
success_text_response_t* AccountAPI_updateAccountIpLimits(apiClient_t *apiClient, char *start, char *end);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**start** | **char \*** | The begining (or first) IP address in the range. | 
**end** | **char \*** | The ending (or last) IP address in the range. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_updateAccountPassword**
```c
// Change Account Password
//
// Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
//
text_response_t* AccountAPI_updateAccountPassword(apiClient_t *apiClient, char *password);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**password** | **char \*** |  | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_updateAccountSshKey**
```c
// Update SSH Keys
//
// Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
//
success_text_response_t* AccountAPI_updateAccountSshKey(apiClient_t *apiClient, char *ssh_key);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ssh_key** | **char \*** |  | [optional] 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccountAPI_updateAccountTfa**
```c
// Enable Two-Factor Authentication
//
// Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
//
success_text_response_t* AccountAPI_updateAccountTfa(apiClient_t *apiClient, char *_2fa_google_code);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**_2fa_google_code** | **char \*** | The 6-digit verification code from your authenticator app. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

