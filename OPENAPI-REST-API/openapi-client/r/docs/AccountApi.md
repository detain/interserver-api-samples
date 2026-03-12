# AccountApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ChangeAccountUsername**](AccountApi.md#ChangeAccountUsername) | **POST** /account/username | Change Account Username
[**DeleteAccountOauthName**](AccountApi.md#DeleteAccountOauthName) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
[**DeleteAccountTfa**](AccountApi.md#DeleteAccountTfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
[**DeleteIpLimit**](AccountApi.md#DeleteIpLimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
[**GetAccountInfo**](AccountApi.md#GetAccountInfo) | **GET** /account | Retrieve Account Details
[**GetAccountTfaSetup**](AccountApi.md#GetAccountTfaSetup) | **GET** /account/2fa | Get Two-Factor Setup Data
[**GetHome**](AccountApi.md#GetHome) | **GET** /home | Get Home Data
[**GetSearch**](AccountApi.md#GetSearch) | **GET** /search | Search Autocomplete
[**Logout**](AccountApi.md#Logout) | **GET** /logout | Log Out
[**LogoutAccountOauth**](AccountApi.md#LogoutAccountOauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
[**UpdateAccountApiKey**](AccountApi.md#UpdateAccountApiKey) | **POST** /account/apikey | Generate New API Key
[**UpdateAccountFeatures**](AccountApi.md#UpdateAccountFeatures) | **POST** /account/features | Update Account Feature Flags
[**UpdateAccountInfo**](AccountApi.md#UpdateAccountInfo) | **POST** /account | Update Account Information
[**UpdateAccountIpLimits**](AccountApi.md#UpdateAccountIpLimits) | **POST** /account/iplimits | Add IP Access Restriction
[**UpdateAccountPassword**](AccountApi.md#UpdateAccountPassword) | **POST** /account/password | Change Account Password
[**UpdateAccountSshKey**](AccountApi.md#UpdateAccountSshKey) | **POST** /account/sshkey | Update SSH Keys
[**UpdateAccountTfa**](AccountApi.md#UpdateAccountTfa) | **POST** /account/2fa | Enable Two-Factor Authentication


# **ChangeAccountUsername**
> TextResponse ChangeAccountUsername()

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example
```R
library(openapi)

# Change Account Username
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ChangeAccountUsername(data_file = "result.txt")
result <- api_instance$ChangeAccountUsername()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |

# **DeleteAccountOauthName**
> SuccessTextResponse DeleteAccountOauthName(name)

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example
```R
library(openapi)

# Unlink OAuth Account
#
# prepare function argument(s)
var_name <- "name_example" # character | 

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteAccountOauthName(var_namedata_file = "result.txt")
result <- api_instance$DeleteAccountOauthName(var_name)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **character**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteAccountTfa**
> SuccessTextResponse DeleteAccountTfa()

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example
```R
library(openapi)

# Disable Two-Factor Authentication
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteAccountTfa(data_file = "result.txt")
result <- api_instance$DeleteAccountTfa()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteIpLimit**
> GenericResponse DeleteIpLimit()

Remove IP Access Restriction

Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example
```R
library(openapi)

# Remove IP Access Restriction
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteIpLimit(data_file = "result.txt")
result <- api_instance$DeleteIpLimit()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | IP Range removed. |  -  |
| **401** | Unauthorized |  -  |

# **GetAccountInfo**
> AccountInfo GetAccountInfo()

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.

### Example
```R
library(openapi)

# Retrieve Account Details
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAccountInfo(data_file = "result.txt")
result <- api_instance$GetAccountInfo()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**AccountInfo**](AccountInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Your account information. |  -  |
| **401** | Unauthorized |  -  |

# **GetAccountTfaSetup**
> GetAccountTfaSetup200Response GetAccountTfaSetup()

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.

### Example
```R
library(openapi)

# Get Two-Factor Setup Data
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetAccountTfaSetup(data_file = "result.txt")
result <- api_instance$GetAccountTfaSetup()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetAccountTfaSetup200Response**](getAccountTfaSetup_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Two-factor authentication setup data. |  -  |
| **401** | Unauthorized |  -  |

# **GetHome**
> Home GetHome()

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example
```R
library(openapi)

# Get Home Data
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetHome(data_file = "result.txt")
result <- api_instance$GetHome()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Home**](Home.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | General information for use on the home page. |  -  |
| **401** | Unauthorized |  -  |

# **GetSearch**
> SearchAutocompleteResponse GetSearch()

Search Autocomplete

Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.

### Example
```R
library(openapi)

# Search Autocomplete
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetSearch(data_file = "result.txt")
result <- api_instance$GetSearch()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SearchAutocompleteResponse**](SearchAutocompleteResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Search autocomplete results for the account. |  -  |
| **401** | Unauthorized |  -  |

# **Logout**
> SuccessTextResponse Logout()

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example
```R
library(openapi)

# Log Out
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$Logout(data_file = "result.txt")
result <- api_instance$Logout()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **LogoutAccountOauth**
> SuccessTextResponse LogoutAccountOauth(name)

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example
```R
library(openapi)

# Logout of OAuth
#
# prepare function argument(s)
var_name <- "name_example" # character | 

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$LogoutAccountOauth(var_namedata_file = "result.txt")
result <- api_instance$LogoutAccountOauth(var_name)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **character**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAccountApiKey**
> SuccessTextResponse UpdateAccountApiKey()

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example
```R
library(openapi)

# Generate New API Key
#

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAccountApiKey(data_file = "result.txt")
result <- api_instance$UpdateAccountApiKey()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAccountFeatures**
> SuccessTextResponse UpdateAccountFeatures(disable_reset = var.disable_reset, disable_reinstall = var.disable_reinstall)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```R
library(openapi)

# Update Account Feature Flags
#
# prepare function argument(s)
var_disable_reset <- 56 # integer |  (Optional)
var_disable_reinstall <- 56 # integer |  (Optional)

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAccountFeatures(disable_reset = var_disable_reset, disable_reinstall = var_disable_reinstalldata_file = "result.txt")
result <- api_instance$UpdateAccountFeatures(disable_reset = var_disable_reset, disable_reinstall = var_disable_reinstall)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disable_reset** | **integer**|  | [optional] 
 **disable_reinstall** | **integer**|  | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |
| **422** | Request was valid but did not contain updatable values. |  -  |

# **UpdateAccountInfo**
> UpdateAccountInfo(name, address, city, state, zip, country, phone, company = var.company, address2 = var.address2, locale = var.locale, email_invoices = var.email_invoices, email_abuse = var.email_abuse, disable_reset = var.disable_reset, disable_reinstall = var.disable_reinstall, disable_server_notifications = var.disable_server_notifications, disable_email_notifications = var.disable_email_notifications, gstin = var.gstin)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```R
library(openapi)

# Update Account Information
#
# prepare function argument(s)
var_name <- "name_example" # character | Your name.
var_address <- "address_example" # character | Your address.
var_city <- "city_example" # character | Your city.
var_state <- "state_example" # character | Your state.
var_zip <- "zip_example" # character | Your ZIP code.
var_country <- "country_example" # character | Your country.
var_phone <- "phone_example" # character | Your phone number.
var_company <- "company_example" # character | Your company name. (Optional)
var_address2 <- "address2_example" # character | Additional address information. (Optional)
var_locale <- "locale_example" # character | Your preferred locale. (Optional)
var_email_invoices <- "email_invoices_example" # character | Your email for invoice notifications. (Optional)
var_email_abuse <- "email_abuse_example" # character | Your email for abuse notifications. (Optional)
var_disable_reset <- "disable_reset_example" # character | Set to `true` to disable account resets, or `false` to enable them. (Optional)
var_disable_reinstall <- "disable_reinstall_example" # character | Set to `true` to disable server reinstalls, or `false` to enable them. (Optional)
var_disable_server_notifications <- "disable_server_notifications_example" # character | Set to `true` to disable server notifications, or `false` to enable them. (Optional)
var_disable_email_notifications <- "disable_email_notifications_example" # character | Set to `true` to disable email notifications, or `false` to enable them. (Optional)
var_gstin <- "gstin_example" # character | Your GST identification number (if applicable). (Optional)

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateAccountInfo(var_name, var_address, var_city, var_state, var_zip, var_country, var_phone, company = var_company, address2 = var_address2, locale = var_locale, email_invoices = var_email_invoices, email_abuse = var_email_abuse, disable_reset = var_disable_reset, disable_reinstall = var_disable_reinstall, disable_server_notifications = var_disable_server_notifications, disable_email_notifications = var_disable_email_notifications, gstin = var_gstin)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **character**| Your name. | 
 **address** | **character**| Your address. | 
 **city** | **character**| Your city. | 
 **state** | **character**| Your state. | 
 **zip** | **character**| Your ZIP code. | 
 **country** | **character**| Your country. | 
 **phone** | **character**| Your phone number. | 
 **company** | **character**| Your company name. | [optional] 
 **address2** | **character**| Additional address information. | [optional] 
 **locale** | **character**| Your preferred locale. | [optional] 
 **email_invoices** | **character**| Your email for invoice notifications. | [optional] 
 **email_abuse** | **character**| Your email for abuse notifications. | [optional] 
 **disable_reset** | **character**| Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] 
 **disable_reinstall** | **character**| Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] 
 **disable_server_notifications** | **character**| Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] 
 **disable_email_notifications** | **character**| Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] 
 **gstin** | **character**| Your GST identification number (if applicable). | [optional] 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **422** | Validation error while updating account data. |  -  |
| **0** | Default response |  -  |

# **UpdateAccountIpLimits**
> UpdateAccountIpLimits(start, end)

Add IP Access Restriction

Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```R
library(openapi)

# Add IP Access Restriction
#
# prepare function argument(s)
var_start <- "start_example" # character | The begining (or first) IP address in the range.
var_end <- "end_example" # character | The ending (or last) IP address in the range.

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$UpdateAccountIpLimits(var_start, var_end)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **character**| The begining (or first) IP address in the range. | 
 **end** | **character**| The ending (or last) IP address in the range. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **422** | IP limit payload contains an invalid address. |  -  |
| **0** | Default response |  -  |

# **UpdateAccountPassword**
> TextResponse UpdateAccountPassword(password)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```R
library(openapi)

# Change Account Password
#
# prepare function argument(s)
var_password <- "password_example" # character | 

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAccountPassword(var_passworddata_file = "result.txt")
result <- api_instance$UpdateAccountPassword(var_password)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **character**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAccountSshKey**
> SuccessTextResponse UpdateAccountSshKey(ssh_key = var.ssh_key)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```R
library(openapi)

# Update SSH Keys
#
# prepare function argument(s)
var_ssh_key <- "ssh_key_example" # character |  (Optional)

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAccountSshKey(ssh_key = var_ssh_keydata_file = "result.txt")
result <- api_instance$UpdateAccountSshKey(ssh_key = var_ssh_key)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ssh_key** | **character**|  | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateAccountTfa**
> SuccessTextResponse UpdateAccountTfa(var_2fa_google_code)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.

### Example
```R
library(openapi)

# Enable Two-Factor Authentication
#
# prepare function argument(s)
var_var_2fa_google_code <- "var_2fa_google_code_example" # character | The 6-digit verification code from your authenticator app.

api_instance <- AccountApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateAccountTfa(var_var_2fa_google_codedata_file = "result.txt")
result <- api_instance$UpdateAccountTfa(var_var_2fa_google_code)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **var_2fa_google_code** | **character**| The 6-digit verification code from your authenticator app. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |
| **422** | Provided two-factor verification code was invalid. |  -  |

