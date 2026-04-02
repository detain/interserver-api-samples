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


## Creating AccountApi

To initiate an instance of `AccountApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.AccountApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(AccountApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    AccountApi accountApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="changeAccountUsername"></a>
# **changeAccountUsername**
```java
Mono<TextResponse> AccountApi.changeAccountUsername()
```

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.



### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteAccountOauthName"></a>
# **deleteAccountOauthName**
```java
Mono<SuccessTextResponse> AccountApi.deleteAccountOauthName(name)
```

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `String`|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteAccountTfa"></a>
# **deleteAccountTfa**
```java
Mono<SuccessTextResponse> AccountApi.deleteAccountTfa()
```

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.



### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteIpLimit"></a>
# **deleteIpLimit**
```java
Mono<GenericResponse> AccountApi.deleteIpLimit(ipLimitRange)
```

Remove IP Access Restriction

Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **ipLimitRange** | [**IpLimitRange**](IpLimitRange.md)|  | [optional parameter] |


### Return type
[**GenericResponse**](GenericResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`
 - **Accept**: `application/json`

<a id="getAccountInfo"></a>
# **getAccountInfo**
```java
Mono<AccountInfo> AccountApi.getAccountInfo()
```

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.



### Return type
[**AccountInfo**](AccountInfo.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getAccountTfaSetup"></a>
# **getAccountTfaSetup**
```java
Mono<GetAccountTfaSetup200Response> AccountApi.getAccountTfaSetup()
```

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.



### Return type
[**GetAccountTfaSetup200Response**](GetAccountTfaSetup200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getHome"></a>
# **getHome**
```java
Mono<Home> AccountApi.getHome()
```

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.



### Return type
[**Home**](Home.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getSearch"></a>
# **getSearch**
```java
Mono<SearchAutocompleteResponse> AccountApi.getSearch()
```

Search Autocomplete

Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.



### Return type
[**SearchAutocompleteResponse**](SearchAutocompleteResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="logout"></a>
# **logout**
```java
Mono<SuccessTextResponse> AccountApi.logout()
```

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.



### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="logoutAccountOauth"></a>
# **logoutAccountOauth**
```java
Mono<SuccessTextResponse> AccountApi.logoutAccountOauth(name)
```

Logout of OAuth

Logs out of the specified OAuth provider session.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `String`|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateAccountApiKey"></a>
# **updateAccountApiKey**
```java
Mono<SuccessTextResponse> AccountApi.updateAccountApiKey()
```

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.



### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateAccountFeatures"></a>
# **updateAccountFeatures**
```java
Mono<SuccessTextResponse> AccountApi.updateAccountFeatures(disableResetdisableReinstall)
```

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **disableReset** | `Integer`|  | [optional parameter] |
| **disableReinstall** | `Integer`|  | [optional parameter] |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="updateAccountInfo"></a>
# **updateAccountInfo**
```java
Mono<SuccessTextResponse> AccountApi.updateAccountInfo(nameaddresscitystatezipcountryphonecompanyaddress2localeemailInvoicesemailAbusedisableResetdisableReinstalldisableServerNotificationsdisableEmailNotificationsgstin)
```

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `String`| Your name. | |
| **address** | `String`| Your address. | |
| **city** | `String`| Your city. | |
| **state** | `String`| Your state. | |
| **zip** | `String`| Your ZIP code. | |
| **country** | `String`| Your country. | |
| **phone** | `String`| Your phone number. | |
| **company** | `String`| Your company name. | [optional parameter] |
| **address2** | `String`| Additional address information. | [optional parameter] |
| **locale** | `String`| Your preferred locale. | [optional parameter] |
| **emailInvoices** | `String`| Your email for invoice notifications. | [optional parameter] |
| **emailAbuse** | `String`| Your email for abuse notifications. | [optional parameter] |
| **disableReset** | `Boolean`| Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional parameter] |
| **disableReinstall** | `Boolean`| Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional parameter] |
| **disableServerNotifications** | `Boolean`| Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional parameter] |
| **disableEmailNotifications** | `Boolean`| Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional parameter] |
| **gstin** | `String`| Your GST identification number (if applicable). | [optional parameter] |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="updateAccountIpLimits"></a>
# **updateAccountIpLimits**
```java
Mono<SuccessTextResponse> AccountApi.updateAccountIpLimits(startend)
```

Add IP Access Restriction

Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **start** | `String`| The begining (or first) IP address in the range. | |
| **end** | `String`| The ending (or last) IP address in the range. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="updateAccountPassword"></a>
# **updateAccountPassword**
```java
Mono<TextResponse> AccountApi.updateAccountPassword(password)
```

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **password** | `String`|  | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="updateAccountSshKey"></a>
# **updateAccountSshKey**
```java
Mono<SuccessTextResponse> AccountApi.updateAccountSshKey(sshKey)
```

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **sshKey** | `String`|  | [optional parameter] |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="updateAccountTfa"></a>
# **updateAccountTfa**
```java
Mono<SuccessTextResponse> AccountApi.updateAccountTfa(_2faGoogleCode)
```

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **_2faGoogleCode** | `String`| The 6-digit verification code from your authenticator app. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

