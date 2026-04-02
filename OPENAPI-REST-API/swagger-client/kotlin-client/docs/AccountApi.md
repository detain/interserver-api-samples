# AccountApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**changeAccountUsername**](AccountApi.md#changeAccountUsername) | **POST** /account/username | Change Account Username
[**deleteAccountOauthName**](AccountApi.md#deleteAccountOauthName) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
[**deleteAccountTfa**](AccountApi.md#deleteAccountTfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
[**deleteIpLimit**](AccountApi.md#deleteIpLimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
[**getAccountInfo**](AccountApi.md#getAccountInfo) | **GET** /account | Retrieve Account Details
[**getAccountTfaSetup**](AccountApi.md#getAccountTfaSetup) | **GET** /account/2fa | Get Two-Factor Setup Data
[**getHome**](AccountApi.md#getHome) | **GET** /home | Get Home Data
[**getSearch**](AccountApi.md#getSearch) | **GET** /search | Search Autocomplete
[**logout**](AccountApi.md#logout) | **GET** /logout | Log Out
[**logoutAccountOauth**](AccountApi.md#logoutAccountOauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
[**updateAccountApiKey**](AccountApi.md#updateAccountApiKey) | **POST** /account/apikey | Generate New API Key
[**updateAccountFeatures**](AccountApi.md#updateAccountFeatures) | **POST** /account/features | Update Account Feature Flags
[**updateAccountInfo**](AccountApi.md#updateAccountInfo) | **POST** /account | Update Account Information
[**updateAccountIpLimits**](AccountApi.md#updateAccountIpLimits) | **POST** /account/iplimits | Add IP Access Restriction
[**updateAccountPassword**](AccountApi.md#updateAccountPassword) | **POST** /account/password | Change Account Password
[**updateAccountSshKey**](AccountApi.md#updateAccountSshKey) | **POST** /account/sshkey | Update SSH Keys
[**updateAccountTfa**](AccountApi.md#updateAccountTfa) | **POST** /account/2fa | Enable Two-Factor Authentication

<a name="changeAccountUsername"></a>
# **changeAccountUsername**
> TextResponse changeAccountUsername()

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteAccountOauthName"></a>
# **deleteAccountOauthName**
> SuccessTextResponse deleteAccountOauthName(name)

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteAccountTfa"></a>
# **deleteAccountTfa**
> SuccessTextResponse deleteAccountTfa()

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteIpLimit"></a>
# **deleteIpLimit**
> GenericResponse deleteIpLimit(body)

Remove IP Access Restriction

Removes an IP address range from the account&#x27;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val body : IpLimitRange =  // IpLimitRange | 
try {
    val result : GenericResponse = apiInstance.deleteIpLimit(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IpLimitRange**](IpLimitRange.md)|  | [optional]

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="getAccountInfo"></a>
# **getAccountInfo**
> AccountInfo getAccountInfo()

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getAccountTfaSetup"></a>
# **getAccountTfaSetup**
> InlineResponse200 getAccountTfaSetup()

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
try {
    val result : InlineResponse200 = apiInstance.getAccountTfaSetup()
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

[**InlineResponse200**](InlineResponse200.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getHome"></a>
# **getHome**
> Home getHome()

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSearch"></a>
# **getSearch**
> SearchAutocompleteResponse getSearch()

Search Autocomplete

Returns autocomplete results for the account&#x27;s services and records. Use this endpoint to power global search experiences in the client portal.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="logout"></a>
# **logout**
> SuccessTextResponse logout()

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="logoutAccountOauth"></a>
# **logoutAccountOauth**
> SuccessTextResponse logoutAccountOauth(name)

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateAccountApiKey"></a>
# **updateAccountApiKey**
> SuccessTextResponse updateAccountApiKey()

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateAccountFeatures"></a>
# **updateAccountFeatures**
> SuccessTextResponse updateAccountFeatures(disableReset, disableReinstall)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disableReset** | **kotlin.Int**|  |
 **disableReinstall** | **kotlin.Int**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountFeatures"></a>
# **updateAccountFeatures**
> SuccessTextResponse updateAccountFeatures(body)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val body : AccountFeatures =  // AccountFeatures | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountFeatures(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**AccountFeatures**](AccountFeatures.md)|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountInfo"></a>
# **updateAccountInfo**
> SuccessTextResponse updateAccountInfo(name, company, address, address2, city, state, zip, country, phone, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val name : kotlin.String = name_example // kotlin.String | 
val company : kotlin.String = company_example // kotlin.String | 
val address : kotlin.String = address_example // kotlin.String | 
val address2 : kotlin.String = address2_example // kotlin.String | 
val city : kotlin.String = city_example // kotlin.String | 
val state : kotlin.String = state_example // kotlin.String | 
val zip : kotlin.String = zip_example // kotlin.String | 
val country : kotlin.String = country_example // kotlin.String | 
val phone : kotlin.String = phone_example // kotlin.String | 
val locale : kotlin.String = locale_example // kotlin.String | 
val emailInvoices : kotlin.String = emailInvoices_example // kotlin.String | 
val emailAbuse : kotlin.String = emailAbuse_example // kotlin.String | 
val disableReset : kotlin.Boolean = true // kotlin.Boolean | 
val disableReinstall : kotlin.Boolean = true // kotlin.Boolean | 
val disableServerNotifications : kotlin.Boolean = true // kotlin.Boolean | 
val disableEmailNotifications : kotlin.Boolean = true // kotlin.Boolean | 
val gstin : kotlin.String = gstin_example // kotlin.String | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountInfo(name, company, address, address2, city, state, zip, country, phone, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **kotlin.String**|  |
 **company** | **kotlin.String**|  |
 **address** | **kotlin.String**|  |
 **address2** | **kotlin.String**|  |
 **city** | **kotlin.String**|  |
 **state** | **kotlin.String**|  |
 **zip** | **kotlin.String**|  |
 **country** | **kotlin.String**|  |
 **phone** | **kotlin.String**|  |
 **locale** | **kotlin.String**|  |
 **emailInvoices** | **kotlin.String**|  |
 **emailAbuse** | **kotlin.String**|  |
 **disableReset** | **kotlin.Boolean**|  |
 **disableReinstall** | **kotlin.Boolean**|  |
 **disableServerNotifications** | **kotlin.Boolean**|  |
 **disableEmailNotifications** | **kotlin.Boolean**|  |
 **gstin** | **kotlin.String**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountInfo"></a>
# **updateAccountInfo**
> SuccessTextResponse updateAccountInfo(body)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val body : AccountInfoPost =  // AccountInfoPost | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountInfo(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**AccountInfoPost**](AccountInfoPost.md)|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountIpLimits"></a>
# **updateAccountIpLimits**
> SuccessTextResponse updateAccountIpLimits(start, end)

Add IP Access Restriction

Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val start : kotlin.String = start_example // kotlin.String | 
val end : kotlin.String = end_example // kotlin.String | 
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **kotlin.String**|  |
 **end** | **kotlin.String**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountIpLimits"></a>
# **updateAccountIpLimits**
> SuccessTextResponse updateAccountIpLimits(body)

Add IP Access Restriction

Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val body : IpLimitRange = {
  "value" : {
    "start" : "1.2.3.0",
    "end" : "1.2.3.255"
  }
} // IpLimitRange | The lower and upper bounds of an ip range.
try {
    val result : SuccessTextResponse = apiInstance.updateAccountIpLimits(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IpLimitRange**](IpLimitRange.md)| The lower and upper bounds of an ip range. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountPassword"></a>
# **updateAccountPassword**
> TextResponse updateAccountPassword(password)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **kotlin.String**|  |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountPassword"></a>
# **updateAccountPassword**
> TextResponse updateAccountPassword(body)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val body : PasswordRequest =  // PasswordRequest | 
try {
    val result : TextResponse = apiInstance.updateAccountPassword(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**PasswordRequest**](PasswordRequest.md)|  |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountSshKey"></a>
# **updateAccountSshKey**
> SuccessTextResponse updateAccountSshKey(sshKey)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sshKey** | **kotlin.String**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountSshKey"></a>
# **updateAccountSshKey**
> SuccessTextResponse updateAccountSshKey(body)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val body : AccountSshKey =  // AccountSshKey | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountSshKey(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**AccountSshKey**](AccountSshKey.md)|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountTfa"></a>
# **updateAccountTfa**
> SuccessTextResponse updateAccountTfa(2faGoogleCode)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val 2faGoogleCode : kotlin.String = 2faGoogleCode_example // kotlin.String | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountTfa(2faGoogleCode)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **2faGoogleCode** | **kotlin.String**|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="updateAccountTfa"></a>
# **updateAccountTfa**
> SuccessTextResponse updateAccountTfa(body)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = AccountApi()
val body : Account2faBody1 =  // Account2faBody1 | 
try {
    val result : SuccessTextResponse = apiInstance.updateAccountTfa(body)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**Account2faBody1**](Account2faBody1.md)|  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

