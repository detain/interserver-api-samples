# AccountAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**changeAccountUsername**](AccountAPI.md#changeaccountusername) | **POST** /account/username | Change Account Username
[**deleteAccountOauthName**](AccountAPI.md#deleteaccountoauthname) | **DELETE** /account/oauth/{name} | Unlink OAuth Account
[**deleteAccountTfa**](AccountAPI.md#deleteaccounttfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication
[**deleteIpLimit**](AccountAPI.md#deleteiplimit) | **PATCH** /account/iplimits | Remove IP Access Restriction
[**getAccountInfo**](AccountAPI.md#getaccountinfo) | **GET** /account | Retrieve Account Details
[**getAccountTfaSetup**](AccountAPI.md#getaccounttfasetup) | **GET** /account/2fa | Get Two-Factor Setup Data
[**getHome**](AccountAPI.md#gethome) | **GET** /home | Get Home Data
[**getSearch**](AccountAPI.md#getsearch) | **GET** /search | Search Autocomplete
[**logout**](AccountAPI.md#logout) | **GET** /logout | Log Out
[**logoutAccountOauth**](AccountAPI.md#logoutaccountoauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth
[**updateAccountApiKey**](AccountAPI.md#updateaccountapikey) | **POST** /account/apikey | Generate New API Key
[**updateAccountFeatures**](AccountAPI.md#updateaccountfeatures) | **POST** /account/features | Update Account Feature Flags
[**updateAccountInfo**](AccountAPI.md#updateaccountinfo) | **POST** /account | Update Account Information
[**updateAccountIpLimits**](AccountAPI.md#updateaccountiplimits) | **POST** /account/iplimits | Add IP Access Restriction
[**updateAccountPassword**](AccountAPI.md#updateaccountpassword) | **POST** /account/password | Change Account Password
[**updateAccountSshKey**](AccountAPI.md#updateaccountsshkey) | **POST** /account/sshkey | Update SSH Keys
[**updateAccountTfa**](AccountAPI.md#updateaccounttfa) | **POST** /account/2fa | Enable Two-Factor Authentication


# **changeAccountUsername**
```swift
    open class func changeAccountUsername(completion: @escaping (_ data: TextResponse?, _ error: Error?) -> Void)
```

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Change Account Username
AccountAPI.changeAccountUsername() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAccountOauthName**
```swift
    open class func deleteAccountOauthName(name: String, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let name = "name_example" // String | 

// Unlink OAuth Account
AccountAPI.deleteAccountOauthName(name: name) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String** |  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAccountTfa**
```swift
    open class func deleteAccountTfa(completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Disable Two-Factor Authentication
AccountAPI.deleteAccountTfa() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteIpLimit**
```swift
    open class func deleteIpLimit(completion: @escaping (_ data: GenericResponse?, _ error: Error?) -> Void)
```

Remove IP Access Restriction

Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Remove IP Access Restriction
AccountAPI.deleteIpLimit() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAccountInfo**
```swift
    open class func getAccountInfo(completion: @escaping (_ data: AccountInfo?, _ error: Error?) -> Void)
```

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Retrieve Account Details
AccountAPI.getAccountInfo() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAccountTfaSetup**
```swift
    open class func getAccountTfaSetup(completion: @escaping (_ data: GetAccountTfaSetup200Response?, _ error: Error?) -> Void)
```

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Two-Factor Setup Data
AccountAPI.getAccountTfaSetup() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**GetAccountTfaSetup200Response**](GetAccountTfaSetup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getHome**
```swift
    open class func getHome(completion: @escaping (_ data: Home?, _ error: Error?) -> Void)
```

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Get Home Data
AccountAPI.getHome() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSearch**
```swift
    open class func getSearch(completion: @escaping (_ data: SearchAutocompleteResponse?, _ error: Error?) -> Void)
```

Search Autocomplete

Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Search Autocomplete
AccountAPI.getSearch() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logout**
```swift
    open class func logout(completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Log Out
AccountAPI.logout() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logoutAccountOauth**
```swift
    open class func logoutAccountOauth(name: String, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let name = "name_example" // String | 

// Logout of OAuth
AccountAPI.logoutAccountOauth(name: name) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String** |  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountApiKey**
```swift
    open class func updateAccountApiKey(completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient


// Generate New API Key
AccountAPI.updateAccountApiKey() { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountFeatures**
```swift
    open class func updateAccountFeatures(disableReset: Int? = nil, disableReinstall: Int? = nil, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let disableReset = 987 // Int |  (optional)
let disableReinstall = 987 // Int |  (optional)

// Update Account Feature Flags
AccountAPI.updateAccountFeatures(disableReset: disableReset, disableReinstall: disableReinstall) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **disableReset** | **Int** |  | [optional] 
 **disableReinstall** | **Int** |  | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountInfo**
```swift
    open class func updateAccountInfo(name: String, address: String, city: String, state: String, zip: String, country: String, phone: String, company: String? = nil, address2: String? = nil, locale: String? = nil, emailInvoices: String? = nil, emailAbuse: String? = nil, disableReset: Bool? = nil, disableReinstall: Bool? = nil, disableServerNotifications: Bool? = nil, disableEmailNotifications: Bool? = nil, gstin: String? = nil, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let name = "name_example" // String | Your name.
let address = "address_example" // String | Your address.
let city = "city_example" // String | Your city.
let state = "state_example" // String | Your state.
let zip = "zip_example" // String | Your ZIP code.
let country = "country_example" // String | Your country.
let phone = "phone_example" // String | Your phone number.
let company = "company_example" // String | Your company name. (optional)
let address2 = "address2_example" // String | Additional address information. (optional)
let locale = "locale_example" // String | Your preferred locale. (optional)
let emailInvoices = "emailInvoices_example" // String | Your email for invoice notifications. (optional)
let emailAbuse = "emailAbuse_example" // String | Your email for abuse notifications. (optional)
let disableReset = true // Bool | Set to `true` to disable account resets, or `false` to enable them. (optional)
let disableReinstall = true // Bool | Set to `true` to disable server reinstalls, or `false` to enable them. (optional)
let disableServerNotifications = true // Bool | Set to `true` to disable server notifications, or `false` to enable them. (optional)
let disableEmailNotifications = true // Bool | Set to `true` to disable email notifications, or `false` to enable them. (optional)
let gstin = "gstin_example" // String | Your GST identification number (if applicable). (optional)

// Update Account Information
AccountAPI.updateAccountInfo(name: name, address: address, city: city, state: state, zip: zip, country: country, phone: phone, company: company, address2: address2, locale: locale, emailInvoices: emailInvoices, emailAbuse: emailAbuse, disableReset: disableReset, disableReinstall: disableReinstall, disableServerNotifications: disableServerNotifications, disableEmailNotifications: disableEmailNotifications, gstin: gstin) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String** | Your name. | 
 **address** | **String** | Your address. | 
 **city** | **String** | Your city. | 
 **state** | **String** | Your state. | 
 **zip** | **String** | Your ZIP code. | 
 **country** | **String** | Your country. | 
 **phone** | **String** | Your phone number. | 
 **company** | **String** | Your company name. | [optional] 
 **address2** | **String** | Additional address information. | [optional] 
 **locale** | **String** | Your preferred locale. | [optional] 
 **emailInvoices** | **String** | Your email for invoice notifications. | [optional] 
 **emailAbuse** | **String** | Your email for abuse notifications. | [optional] 
 **disableReset** | **Bool** | Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] 
 **disableReinstall** | **Bool** | Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] 
 **disableServerNotifications** | **Bool** | Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] 
 **disableEmailNotifications** | **Bool** | Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] 
 **gstin** | **String** | Your GST identification number (if applicable). | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountIpLimits**
```swift
    open class func updateAccountIpLimits(start: String, end: String, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Add IP Access Restriction

Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let start = "start_example" // String | The begining (or first) IP address in the range.
let end = "end_example" // String | The ending (or last) IP address in the range.

// Add IP Access Restriction
AccountAPI.updateAccountIpLimits(start: start, end: end) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **start** | **String** | The begining (or first) IP address in the range. | 
 **end** | **String** | The ending (or last) IP address in the range. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountPassword**
```swift
    open class func updateAccountPassword(password: String, completion: @escaping (_ data: TextResponse?, _ error: Error?) -> Void)
```

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let password = "password_example" // String | 

// Change Account Password
AccountAPI.updateAccountPassword(password: password) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **password** | **String** |  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountSshKey**
```swift
    open class func updateAccountSshKey(sshKey: String? = nil, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let sshKey = "sshKey_example" // String |  (optional)

// Update SSH Keys
AccountAPI.updateAccountSshKey(sshKey: sshKey) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sshKey** | **String** |  | [optional] 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountTfa**
```swift
    open class func updateAccountTfa(_2faGoogleCode: String, completion: @escaping (_ data: SuccessTextResponse?, _ error: Error?) -> Void)
```

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.

### Example
```swift
// The following code samples are still beta. For any issue, please report via http://github.com/OpenAPITools/openapi-generator/issues/new
import OpenAPIClient

let _2faGoogleCode = "_2faGoogleCode_example" // String | The 6-digit verification code from your authenticator app.

// Enable Two-Factor Authentication
AccountAPI.updateAccountTfa(_2faGoogleCode: _2faGoogleCode) { (response, error) in
    guard error == nil else {
        print(error)
        return
    }

    if (response) {
        dump(response)
    }
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_2faGoogleCode** | **String** | The 6-digit verification code from your authenticator app. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

