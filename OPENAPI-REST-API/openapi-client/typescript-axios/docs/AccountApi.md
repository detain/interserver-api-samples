# AccountApi

All URIs are relative to *https://my.interserver.net/apiv2*

|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|[**changeAccountUsername**](#changeaccountusername) | **POST** /account/username | Change Account Username|
|[**deleteAccountOauthName**](#deleteaccountoauthname) | **DELETE** /account/oauth/{name} | Unlink OAuth Account|
|[**deleteAccountTfa**](#deleteaccounttfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication|
|[**deleteIpLimit**](#deleteiplimit) | **PATCH** /account/iplimits | Remove IP Access Restriction|
|[**getAccountInfo**](#getaccountinfo) | **GET** /account | Retrieve Account Details|
|[**getAccountTfaSetup**](#getaccounttfasetup) | **GET** /account/2fa | Get Two-Factor Setup Data|
|[**getHome**](#gethome) | **GET** /home | Get Home Data|
|[**getSearch**](#getsearch) | **GET** /search | Search Autocomplete|
|[**logout**](#logout) | **GET** /logout | Log Out|
|[**logoutAccountOauth**](#logoutaccountoauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth|
|[**updateAccountApiKey**](#updateaccountapikey) | **POST** /account/apikey | Generate New API Key|
|[**updateAccountFeatures**](#updateaccountfeatures) | **POST** /account/features | Update Account Feature Flags|
|[**updateAccountInfo**](#updateaccountinfo) | **POST** /account | Update Account Information|
|[**updateAccountIpLimits**](#updateaccountiplimits) | **POST** /account/iplimits | Add IP Access Restriction|
|[**updateAccountPassword**](#updateaccountpassword) | **POST** /account/password | Change Account Password|
|[**updateAccountSshKey**](#updateaccountsshkey) | **POST** /account/sshkey | Update SSH Keys|
|[**updateAccountTfa**](#updateaccounttfa) | **POST** /account/2fa | Enable Two-Factor Authentication|

# **changeAccountUsername**
> TextResponse changeAccountUsername()

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.changeAccountUsername();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**400** | The specified resource was not found |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAccountOauthName**
> SuccessTextResponse deleteAccountOauthName()

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let name: string; // (default to undefined)

const { status, data } = await apiInstance.deleteAccountOauthName(
    name
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **name** | [**string**] |  | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteAccountTfa**
> SuccessTextResponse deleteAccountTfa()

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.deleteAccountTfa();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteIpLimit**
> GenericResponse deleteIpLimit()

Removes an IP address range from the account\'s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example

```typescript
import {
    AccountApi,
    Configuration,
    IpLimitRange
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let ipLimitRange: IpLimitRange; // (optional)

const { status, data } = await apiInstance.deleteIpLimit(
    ipLimitRange
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **ipLimitRange** | **IpLimitRange**|  | |


### Return type

**GenericResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | IP Range removed. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAccountInfo**
> AccountInfo getAccountInfo()

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.getAccountInfo();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**AccountInfo**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Your account information. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getAccountTfaSetup**
> GetAccountTfaSetup200Response getAccountTfaSetup()

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.getAccountTfaSetup();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**GetAccountTfaSetup200Response**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Two-factor authentication setup data. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getHome**
> Home getHome()

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.getHome();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**Home**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | General information for use on the home page. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSearch**
> SearchAutocompleteResponse getSearch()

Returns autocomplete results for the account\'s services and records. Use this endpoint to power global search experiences in the client portal.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.getSearch();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**SearchAutocompleteResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Search autocomplete results for the account. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logout**
> SuccessTextResponse logout()

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.logout();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **logoutAccountOauth**
> SuccessTextResponse logoutAccountOauth()

Logs out of the specified OAuth provider session.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let name: string; // (default to undefined)

const { status, data } = await apiInstance.logoutAccountOauth(
    name
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **name** | [**string**] |  | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountApiKey**
> SuccessTextResponse updateAccountApiKey()

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

const { status, data } = await apiInstance.updateAccountApiKey();
```

### Parameters
This endpoint does not have any parameters.


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountFeatures**
> SuccessTextResponse updateAccountFeatures()

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let disableReset: number; // (optional) (default to undefined)
let disableReinstall: number; // (optional) (default to undefined)

const { status, data } = await apiInstance.updateAccountFeatures(
    disableReset,
    disableReinstall
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **disableReset** | [**number**] |  | (optional) defaults to undefined|
| **disableReinstall** | [**number**] |  | (optional) defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |
|**422** | Request was valid but did not contain updatable values. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountInfo**
> SuccessTextResponse updateAccountInfo()

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let name: string; //Your name. (default to undefined)
let address: string; //Your address. (default to undefined)
let city: string; //Your city. (default to undefined)
let state: string; //Your state. (default to undefined)
let zip: string; //Your ZIP code. (default to undefined)
let country: string; //Your country. (default to undefined)
let phone: string; //Your phone number. (default to undefined)
let company: string; //Your company name. (optional) (default to undefined)
let address2: string; //Additional address information. (optional) (default to undefined)
let locale: string; //Your preferred locale. (optional) (default to undefined)
let emailInvoices: string; //Your email for invoice notifications. (optional) (default to undefined)
let emailAbuse: string; //Your email for abuse notifications. (optional) (default to undefined)
let disableReset: boolean; //Set to `true` to disable account resets, or `false` to enable them. (optional) (default to undefined)
let disableReinstall: boolean; //Set to `true` to disable server reinstalls, or `false` to enable them. (optional) (default to undefined)
let disableServerNotifications: boolean; //Set to `true` to disable server notifications, or `false` to enable them. (optional) (default to undefined)
let disableEmailNotifications: boolean; //Set to `true` to disable email notifications, or `false` to enable them. (optional) (default to undefined)
let gstin: string; //Your GST identification number (if applicable). (optional) (default to undefined)

const { status, data } = await apiInstance.updateAccountInfo(
    name,
    address,
    city,
    state,
    zip,
    country,
    phone,
    company,
    address2,
    locale,
    emailInvoices,
    emailAbuse,
    disableReset,
    disableReinstall,
    disableServerNotifications,
    disableEmailNotifications,
    gstin
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **name** | [**string**] | Your name. | defaults to undefined|
| **address** | [**string**] | Your address. | defaults to undefined|
| **city** | [**string**] | Your city. | defaults to undefined|
| **state** | [**string**] | Your state. | defaults to undefined|
| **zip** | [**string**] | Your ZIP code. | defaults to undefined|
| **country** | [**string**] | Your country. | defaults to undefined|
| **phone** | [**string**] | Your phone number. | defaults to undefined|
| **company** | [**string**] | Your company name. | (optional) defaults to undefined|
| **address2** | [**string**] | Additional address information. | (optional) defaults to undefined|
| **locale** | [**string**] | Your preferred locale. | (optional) defaults to undefined|
| **emailInvoices** | [**string**] | Your email for invoice notifications. | (optional) defaults to undefined|
| **emailAbuse** | [**string**] | Your email for abuse notifications. | (optional) defaults to undefined|
| **disableReset** | [**boolean**] | Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | (optional) defaults to undefined|
| **disableReinstall** | [**boolean**] | Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | (optional) defaults to undefined|
| **disableServerNotifications** | [**boolean**] | Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | (optional) defaults to undefined|
| **disableEmailNotifications** | [**boolean**] | Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | (optional) defaults to undefined|
| **gstin** | [**string**] | Your GST identification number (if applicable). | (optional) defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |
|**422** | Validation error while updating account data. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountIpLimits**
> SuccessTextResponse updateAccountIpLimits()

Adds an IP address range to the account\'s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let start: string; //The begining (or first) IP address in the range. (default to undefined)
let end: string; //The ending (or last) IP address in the range. (default to undefined)

const { status, data } = await apiInstance.updateAccountIpLimits(
    start,
    end
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **start** | [**string**] | The begining (or first) IP address in the range. | defaults to undefined|
| **end** | [**string**] | The ending (or last) IP address in the range. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |
|**422** | IP limit payload contains an invalid address. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountPassword**
> TextResponse updateAccountPassword()

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let password: string; // (default to undefined)

const { status, data } = await apiInstance.updateAccountPassword(
    password
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **password** | [**string**] |  | defaults to undefined|


### Return type

**TextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | Response with a text message field. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountSshKey**
> SuccessTextResponse updateAccountSshKey()

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let sshKey: string; // (optional) (default to undefined)

const { status, data } = await apiInstance.updateAccountSshKey(
    sshKey
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **sshKey** | [**string**] |  | (optional) defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateAccountTfa**
> SuccessTextResponse updateAccountTfa()

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.

### Example

```typescript
import {
    AccountApi,
    Configuration
} from './api';

const configuration = new Configuration();
const apiInstance = new AccountApi(configuration);

let _2faGoogleCode: string; //The 6-digit verification code from your authenticator app. (default to undefined)

const { status, data } = await apiInstance.updateAccountTfa(
    _2faGoogleCode
);
```

### Parameters

|Name | Type | Description  | Notes|
|------------- | ------------- | ------------- | -------------|
| **_2faGoogleCode** | [**string**] | The 6-digit verification code from your authenticator app. | defaults to undefined|


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
|**200** | A response indicating the operation completed successfully with a text message. |  -  |
|**401** | Unauthorized |  -  |
|**422** | Provided two-factor verification code was invalid. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

