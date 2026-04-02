# AccountApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
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


<a id="changeAccountUsername"></a>
# **changeAccountUsername**
> TextResponse changeAccountUsername()

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : TextResponse = apiInstance.changeAccountUsername()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#changeAccountUsername")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#changeAccountUsername")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteAccountOauthName"></a>
# **deleteAccountOauthName**
> SuccessTextResponse deleteAccountOauthName(name)

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val name : kotlin.String = name_example // kotlin.String | 
try {
    val result : SuccessTextResponse = apiInstance.deleteAccountOauthName(name)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#deleteAccountOauthName")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#deleteAccountOauthName")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **name** | **kotlin.String**|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteAccountTfa"></a>
# **deleteAccountTfa**
> SuccessTextResponse deleteAccountTfa()

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : SuccessTextResponse = apiInstance.deleteAccountTfa()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#deleteAccountTfa")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#deleteAccountTfa")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteIpLimit"></a>
# **deleteIpLimit**
> GenericResponse deleteIpLimit(ipLimitRange)

Remove IP Access Restriction

Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val ipLimitRange : IpLimitRange =  // IpLimitRange | 
try {
    val result : GenericResponse = apiInstance.deleteIpLimit(ipLimitRange)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#deleteIpLimit")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#deleteIpLimit")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **ipLimitRange** | [**IpLimitRange**](IpLimitRange.md)|  | [optional] |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="getAccountInfo"></a>
# **getAccountInfo**
> AccountInfo getAccountInfo()

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : AccountInfo = apiInstance.getAccountInfo()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#getAccountInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#getAccountInfo")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**AccountInfo**](AccountInfo.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getAccountTfaSetup"></a>
# **getAccountTfaSetup**
> GetAccountTfaSetup200Response getAccountTfaSetup()

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : GetAccountTfaSetup200Response = apiInstance.getAccountTfaSetup()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#getAccountTfaSetup")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#getAccountTfaSetup")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetAccountTfaSetup200Response**](GetAccountTfaSetup200Response.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getHome"></a>
# **getHome**
> Home getHome()

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : Home = apiInstance.getHome()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#getHome")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#getHome")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Home**](Home.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getSearch"></a>
# **getSearch**
> SearchAutocompleteResponse getSearch()

Search Autocomplete

Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : SearchAutocompleteResponse = apiInstance.getSearch()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#getSearch")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#getSearch")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SearchAutocompleteResponse**](SearchAutocompleteResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="logout"></a>
# **logout**
> SuccessTextResponse logout()

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : SuccessTextResponse = apiInstance.logout()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#logout")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#logout")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="logoutAccountOauth"></a>
# **logoutAccountOauth**
> SuccessTextResponse logoutAccountOauth(name)

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val name : kotlin.String = name_example // kotlin.String | 
try {
    val result : SuccessTextResponse = apiInstance.logoutAccountOauth(name)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#logoutAccountOauth")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#logoutAccountOauth")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **name** | **kotlin.String**|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="updateAccountApiKey"></a>
# **updateAccountApiKey**
> SuccessTextResponse updateAccountApiKey()

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
try {
    val result : SuccessTextResponse = apiInstance.updateAccountApiKey()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#updateAccountApiKey")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#updateAccountApiKey")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="updateAccountFeatures"></a>
# **updateAccountFeatures**
> SuccessTextResponse updateAccountFeatures(disableReset, disableReinstall)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val disableReset : kotlin.Int = 56 // kotlin.Int | 
val disableReinstall : kotlin.Int = 56 // kotlin.Int | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountFeatures(disableReset, disableReinstall)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#updateAccountFeatures")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#updateAccountFeatures")
    e.printStackTrace()
}
```

### Parameters
| **disableReset** | **kotlin.Int**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **disableReinstall** | **kotlin.Int**|  | [optional] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateAccountInfo"></a>
# **updateAccountInfo**
> SuccessTextResponse updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val name : kotlin.String = name_example // kotlin.String | Your name.
val address : kotlin.String = address_example // kotlin.String | Your address.
val city : kotlin.String = city_example // kotlin.String | Your city.
val state : kotlin.String = state_example // kotlin.String | Your state.
val zip : kotlin.String = zip_example // kotlin.String | Your ZIP code.
val country : kotlin.String = country_example // kotlin.String | Your country.
val phone : kotlin.String = phone_example // kotlin.String | Your phone number.
val company : kotlin.String = company_example // kotlin.String | Your company name.
val address2 : kotlin.String = address2_example // kotlin.String | Additional address information.
val locale : kotlin.String = locale_example // kotlin.String | Your preferred locale.
val emailInvoices : kotlin.String = emailInvoices_example // kotlin.String | Your email for invoice notifications.
val emailAbuse : kotlin.String = emailAbuse_example // kotlin.String | Your email for abuse notifications.
val disableReset : kotlin.Boolean = true // kotlin.Boolean | Set to `true` to disable account resets, or `false` to enable them.
val disableReinstall : kotlin.Boolean = true // kotlin.Boolean | Set to `true` to disable server reinstalls, or `false` to enable them.
val disableServerNotifications : kotlin.Boolean = true // kotlin.Boolean | Set to `true` to disable server notifications, or `false` to enable them.
val disableEmailNotifications : kotlin.Boolean = true // kotlin.Boolean | Set to `true` to disable email notifications, or `false` to enable them.
val gstin : kotlin.String = gstin_example // kotlin.String | Your GST identification number (if applicable).
try {
    val result : SuccessTextResponse = apiInstance.updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#updateAccountInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#updateAccountInfo")
    e.printStackTrace()
}
```

### Parameters
| **name** | **kotlin.String**| Your name. | |
| **address** | **kotlin.String**| Your address. | |
| **city** | **kotlin.String**| Your city. | |
| **state** | **kotlin.String**| Your state. | |
| **zip** | **kotlin.String**| Your ZIP code. | |
| **country** | **kotlin.String**| Your country. | |
| **phone** | **kotlin.String**| Your phone number. | |
| **company** | **kotlin.String**| Your company name. | [optional] |
| **address2** | **kotlin.String**| Additional address information. | [optional] |
| **locale** | **kotlin.String**| Your preferred locale. | [optional] |
| **emailInvoices** | **kotlin.String**| Your email for invoice notifications. | [optional] |
| **emailAbuse** | **kotlin.String**| Your email for abuse notifications. | [optional] |
| **disableReset** | **kotlin.Boolean**| Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] |
| **disableReinstall** | **kotlin.Boolean**| Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] |
| **disableServerNotifications** | **kotlin.Boolean**| Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] |
| **disableEmailNotifications** | **kotlin.Boolean**| Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **gstin** | **kotlin.String**| Your GST identification number (if applicable). | [optional] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateAccountIpLimits"></a>
# **updateAccountIpLimits**
> SuccessTextResponse updateAccountIpLimits(start, end)

Add IP Access Restriction

Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val start : kotlin.String = start_example // kotlin.String | The begining (or first) IP address in the range.
val end : kotlin.String = end_example // kotlin.String | The ending (or last) IP address in the range.
try {
    val result : SuccessTextResponse = apiInstance.updateAccountIpLimits(start, end)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#updateAccountIpLimits")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#updateAccountIpLimits")
    e.printStackTrace()
}
```

### Parameters
| **start** | **kotlin.String**| The begining (or first) IP address in the range. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **end** | **kotlin.String**| The ending (or last) IP address in the range. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateAccountPassword"></a>
# **updateAccountPassword**
> TextResponse updateAccountPassword(password)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val password : kotlin.String = password_example // kotlin.String | 
try {
    val result : TextResponse = apiInstance.updateAccountPassword(password)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#updateAccountPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#updateAccountPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **password** | **kotlin.String**|  | |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateAccountSshKey"></a>
# **updateAccountSshKey**
> SuccessTextResponse updateAccountSshKey(sshKey)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val sshKey : kotlin.String = sshKey_example // kotlin.String | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountSshKey(sshKey)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#updateAccountSshKey")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#updateAccountSshKey")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **sshKey** | **kotlin.String**|  | [optional] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="updateAccountTfa"></a>
# **updateAccountTfa**
> SuccessTextResponse updateAccountTfa(`2faGoogleCode`)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = AccountApi()
val `2faGoogleCode` : kotlin.String = `2faGoogleCode`_example // kotlin.String | The 6-digit verification code from your authenticator app.
try {
    val result : SuccessTextResponse = apiInstance.updateAccountTfa(`2faGoogleCode`)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling AccountApi#updateAccountTfa")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling AccountApi#updateAccountTfa")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **&#x60;2faGoogleCode&#x60;** | **kotlin.String**| The 6-digit verification code from your authenticator app. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

