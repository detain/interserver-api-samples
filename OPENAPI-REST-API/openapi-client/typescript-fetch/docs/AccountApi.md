# AccountApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**changeAccountUsername**](AccountApi.md#changeaccountusername) | **POST** /account/username | Change Account Username |
| [**deleteAccountOauthName**](AccountApi.md#deleteaccountoauthname) | **DELETE** /account/oauth/{name} | Unlink OAuth Account |
| [**deleteAccountTfa**](AccountApi.md#deleteaccounttfa) | **DELETE** /account/2fa | Disable Two-Factor Authentication |
| [**deleteIpLimit**](AccountApi.md#deleteiplimit) | **PATCH** /account/iplimits | Remove IP Access Restriction |
| [**getAccountInfo**](AccountApi.md#getaccountinfo) | **GET** /account | Retrieve Account Details |
| [**getAccountTfaSetup**](AccountApi.md#getaccounttfasetup) | **GET** /account/2fa | Get Two-Factor Setup Data |
| [**getHome**](AccountApi.md#gethome) | **GET** /home | Get Home Data |
| [**getSearch**](AccountApi.md#getsearch) | **GET** /search | Search Autocomplete |
| [**logout**](AccountApi.md#logout) | **GET** /logout | Log Out |
| [**logoutAccountOauth**](AccountApi.md#logoutaccountoauth) | **GET** /account/oauth/{name}/logout | Logout of OAuth |
| [**updateAccountApiKey**](AccountApi.md#updateaccountapikey) | **POST** /account/apikey | Generate New API Key |
| [**updateAccountFeatures**](AccountApi.md#updateaccountfeatures) | **POST** /account/features | Update Account Feature Flags |
| [**updateAccountInfo**](AccountApi.md#updateaccountinfo) | **POST** /account | Update Account Information |
| [**updateAccountIpLimits**](AccountApi.md#updateaccountiplimits) | **POST** /account/iplimits | Add IP Access Restriction |
| [**updateAccountPassword**](AccountApi.md#updateaccountpassword) | **POST** /account/password | Change Account Password |
| [**updateAccountSshKey**](AccountApi.md#updateaccountsshkey) | **POST** /account/sshkey | Update SSH Keys |
| [**updateAccountTfa**](AccountApi.md#updateaccounttfa) | **POST** /account/2fa | Enable Two-Factor Authentication |



## changeAccountUsername

> TextResponse changeAccountUsername()

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { ChangeAccountUsernameRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.changeAccountUsername();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteAccountOauthName

> SuccessTextResponse deleteAccountOauthName(name)

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { DeleteAccountOauthNameRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // string
    name: name_example,
  } satisfies DeleteAccountOauthNameRequest;

  try {
    const data = await api.deleteAccountOauthName(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `string` |  | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteAccountTfa

> SuccessTextResponse deleteAccountTfa()

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { DeleteAccountTfaRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.deleteAccountTfa();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteIpLimit

> GenericResponse deleteIpLimit(ipLimitRange)

Remove IP Access Restriction

Removes an IP address range from the account\&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { DeleteIpLimitRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // IpLimitRange (optional)
    ipLimitRange: ...,
  } satisfies DeleteIpLimitRequest;

  try {
    const data = await api.deleteIpLimit(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **ipLimitRange** | [IpLimitRange](IpLimitRange.md) |  | [Optional] |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | IP Range removed. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAccountInfo

> AccountInfo getAccountInfo()

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { GetAccountInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.getAccountInfo();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**AccountInfo**](AccountInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Your account information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getAccountTfaSetup

> GetAccountTfaSetup200Response getAccountTfaSetup()

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { GetAccountTfaSetupRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.getAccountTfaSetup();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**GetAccountTfaSetup200Response**](GetAccountTfaSetup200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Two-factor authentication setup data. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getHome

> Home getHome()

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { GetHomeRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.getHome();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Home**](Home.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | General information for use on the home page. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getSearch

> SearchAutocompleteResponse getSearch()

Search Autocomplete

Returns autocomplete results for the account\&#39;s services and records. Use this endpoint to power global search experiences in the client portal.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { GetSearchRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.getSearch();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**SearchAutocompleteResponse**](SearchAutocompleteResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Search autocomplete results for the account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## logout

> SuccessTextResponse logout()

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { LogoutRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.logout();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## logoutAccountOauth

> SuccessTextResponse logoutAccountOauth(name)

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { LogoutAccountOauthRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // string
    name: name_example,
  } satisfies LogoutAccountOauthRequest;

  try {
    const data = await api.logoutAccountOauth(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `string` |  | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountApiKey

> SuccessTextResponse updateAccountApiKey()

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { UpdateAccountApiKeyRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  try {
    const data = await api.updateAccountApiKey();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountFeatures

> SuccessTextResponse updateAccountFeatures(disableReset, disableReinstall)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { UpdateAccountFeaturesRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // number (optional)
    disableReset: 56,
    // number (optional)
    disableReinstall: 56,
  } satisfies UpdateAccountFeaturesRequest;

  try {
    const data = await api.updateAccountFeatures(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **disableReset** | `number` |  | [Optional] [Defaults to `undefined`] |
| **disableReinstall** | `number` |  | [Optional] [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |
| **422** | Request was valid but did not contain updatable values. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountInfo

> SuccessTextResponse updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { UpdateAccountInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // string | Your name.
    name: name_example,
    // string | Your address.
    address: address_example,
    // string | Your city.
    city: city_example,
    // string | Your state.
    state: state_example,
    // string | Your ZIP code.
    zip: zip_example,
    // string | Your country.
    country: country_example,
    // string | Your phone number.
    phone: phone_example,
    // string | Your company name. (optional)
    company: company_example,
    // string | Additional address information. (optional)
    address2: address2_example,
    // string | Your preferred locale. (optional)
    locale: locale_example,
    // string | Your email for invoice notifications. (optional)
    emailInvoices: emailInvoices_example,
    // string | Your email for abuse notifications. (optional)
    emailAbuse: emailAbuse_example,
    // boolean | Set to `true` to disable account resets, or `false` to enable them. (optional)
    disableReset: true,
    // boolean | Set to `true` to disable server reinstalls, or `false` to enable them. (optional)
    disableReinstall: true,
    // boolean | Set to `true` to disable server notifications, or `false` to enable them. (optional)
    disableServerNotifications: true,
    // boolean | Set to `true` to disable email notifications, or `false` to enable them. (optional)
    disableEmailNotifications: true,
    // string | Your GST identification number (if applicable). (optional)
    gstin: gstin_example,
  } satisfies UpdateAccountInfoRequest;

  try {
    const data = await api.updateAccountInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | `string` | Your name. | [Defaults to `undefined`] |
| **address** | `string` | Your address. | [Defaults to `undefined`] |
| **city** | `string` | Your city. | [Defaults to `undefined`] |
| **state** | `string` | Your state. | [Defaults to `undefined`] |
| **zip** | `string` | Your ZIP code. | [Defaults to `undefined`] |
| **country** | `string` | Your country. | [Defaults to `undefined`] |
| **phone** | `string` | Your phone number. | [Defaults to `undefined`] |
| **company** | `string` | Your company name. | [Optional] [Defaults to `undefined`] |
| **address2** | `string` | Additional address information. | [Optional] [Defaults to `undefined`] |
| **locale** | `string` | Your preferred locale. | [Optional] [Defaults to `undefined`] |
| **emailInvoices** | `string` | Your email for invoice notifications. | [Optional] [Defaults to `undefined`] |
| **emailAbuse** | `string` | Your email for abuse notifications. | [Optional] [Defaults to `undefined`] |
| **disableReset** | `boolean` | Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [Optional] [Defaults to `undefined`] |
| **disableReinstall** | `boolean` | Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [Optional] [Defaults to `undefined`] |
| **disableServerNotifications** | `boolean` | Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [Optional] [Defaults to `undefined`] |
| **disableEmailNotifications** | `boolean` | Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [Optional] [Defaults to `undefined`] |
| **gstin** | `string` | Your GST identification number (if applicable). | [Optional] [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |
| **422** | Validation error while updating account data. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountIpLimits

> SuccessTextResponse updateAccountIpLimits(start, end)

Add IP Access Restriction

Adds an IP address range to the account\&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { UpdateAccountIpLimitsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // string | The begining (or first) IP address in the range.
    start: start_example,
    // string | The ending (or last) IP address in the range.
    end: end_example,
  } satisfies UpdateAccountIpLimitsRequest;

  try {
    const data = await api.updateAccountIpLimits(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **start** | `string` | The begining (or first) IP address in the range. | [Defaults to `undefined`] |
| **end** | `string` | The ending (or last) IP address in the range. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |
| **422** | IP limit payload contains an invalid address. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountPassword

> TextResponse updateAccountPassword(password)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { UpdateAccountPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // string
    password: password_example,
  } satisfies UpdateAccountPasswordRequest;

  try {
    const data = await api.updateAccountPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **password** | `string` |  | [Defaults to `undefined`] |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountSshKey

> SuccessTextResponse updateAccountSshKey(sshKey)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { UpdateAccountSshKeyRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // string (optional)
    sshKey: sshKey_example,
  } satisfies UpdateAccountSshKeyRequest;

  try {
    const data = await api.updateAccountSshKey(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **sshKey** | `string` |  | [Optional] [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateAccountTfa

> SuccessTextResponse updateAccountTfa(_2faGoogleCode)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.

### Example

```ts
import {
  Configuration,
  AccountApi,
} from '';
import type { UpdateAccountTfaRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new AccountApi(config);

  const body = {
    // string | The 6-digit verification code from your authenticator app.
    _2faGoogleCode: _2faGoogleCode_example,
  } satisfies UpdateAccountTfaRequest;

  try {
    const data = await api.updateAccountTfa(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **_2faGoogleCode** | `string` | The 6-digit verification code from your authenticator app. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |
| **422** | Provided two-factor verification code was invalid. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

