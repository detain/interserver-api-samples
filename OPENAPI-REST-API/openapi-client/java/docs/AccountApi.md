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


<a id="changeAccountUsername"></a>
# **changeAccountUsername**
> TextResponse changeAccountUsername()

Change Account Username

Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      TextResponse result = apiInstance.changeAccountUsername();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#changeAccountUsername");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |

<a id="deleteAccountOauthName"></a>
# **deleteAccountOauthName**
> SuccessTextResponse deleteAccountOauthName(name)

Unlink OAuth Account

Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    String name = "name_example"; // String | 
    try {
      SuccessTextResponse result = apiInstance.deleteAccountOauthName(name);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#deleteAccountOauthName");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | **String**|  | |

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

<a id="deleteAccountTfa"></a>
# **deleteAccountTfa**
> SuccessTextResponse deleteAccountTfa()

Disable Two-Factor Authentication

Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      SuccessTextResponse result = apiInstance.deleteAccountTfa();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#deleteAccountTfa");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

<a id="deleteIpLimit"></a>
# **deleteIpLimit**
> GenericResponse deleteIpLimit(ipLimitRange)

Remove IP Access Restriction

Removes an IP address range from the account&#39;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    IpLimitRange ipLimitRange = new IpLimitRange(); // IpLimitRange | 
    try {
      GenericResponse result = apiInstance.deleteIpLimit(ipLimitRange);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#deleteIpLimit");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **ipLimitRange** | [**IpLimitRange**](IpLimitRange.md)|  | [optional] |

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

<a id="getAccountInfo"></a>
# **getAccountInfo**
> AccountInfo getAccountInfo()

Retrieve Account Details

Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      AccountInfo result = apiInstance.getAccountInfo();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#getAccountInfo");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Your account information. |  -  |
| **401** | Unauthorized |  -  |

<a id="getAccountTfaSetup"></a>
# **getAccountTfaSetup**
> GetAccountTfaSetup200Response getAccountTfaSetup()

Get Two-Factor Setup Data

Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      GetAccountTfaSetup200Response result = apiInstance.getAccountTfaSetup();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#getAccountTfaSetup");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Two-factor authentication setup data. |  -  |
| **401** | Unauthorized |  -  |

<a id="getHome"></a>
# **getHome**
> Home getHome()

Get Home Data

Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      Home result = apiInstance.getHome();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#getHome");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | General information for use on the home page. |  -  |
| **401** | Unauthorized |  -  |

<a id="getSearch"></a>
# **getSearch**
> SearchAutocompleteResponse getSearch()

Search Autocomplete

Returns autocomplete results for the account&#39;s services and records. Use this endpoint to power global search experiences in the client portal.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      SearchAutocompleteResponse result = apiInstance.getSearch();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#getSearch");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Search autocomplete results for the account. |  -  |
| **401** | Unauthorized |  -  |

<a id="logout"></a>
# **logout**
> SuccessTextResponse logout()

Log Out

Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      SuccessTextResponse result = apiInstance.logout();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#logout");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

<a id="logoutAccountOauth"></a>
# **logoutAccountOauth**
> SuccessTextResponse logoutAccountOauth(name)

Logout of OAuth

Logs out of the specified OAuth provider session.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    String name = "name_example"; // String | 
    try {
      SuccessTextResponse result = apiInstance.logoutAccountOauth(name);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#logoutAccountOauth");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | **String**|  | |

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

<a id="updateAccountApiKey"></a>
# **updateAccountApiKey**
> SuccessTextResponse updateAccountApiKey()

Generate New API Key

Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    try {
      SuccessTextResponse result = apiInstance.updateAccountApiKey();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#updateAccountApiKey");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

<a id="updateAccountFeatures"></a>
# **updateAccountFeatures**
> SuccessTextResponse updateAccountFeatures(disableReset, disableReinstall)

Update Account Feature Flags

Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    Integer disableReset = 56; // Integer | 
    Integer disableReinstall = 56; // Integer | 
    try {
      SuccessTextResponse result = apiInstance.updateAccountFeatures(disableReset, disableReinstall);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#updateAccountFeatures");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **disableReset** | **Integer**|  | [optional] |
| **disableReinstall** | **Integer**|  | [optional] |

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

<a id="updateAccountInfo"></a>
# **updateAccountInfo**
> SuccessTextResponse updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin)

Update Account Information

Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    String name = "name_example"; // String | Your name.
    String address = "address_example"; // String | Your address.
    String city = "city_example"; // String | Your city.
    String state = "state_example"; // String | Your state.
    String zip = "zip_example"; // String | Your ZIP code.
    String country = "country_example"; // String | Your country.
    String phone = "phone_example"; // String | Your phone number.
    String company = "company_example"; // String | Your company name.
    String address2 = "address2_example"; // String | Additional address information.
    String locale = "locale_example"; // String | Your preferred locale.
    String emailInvoices = "emailInvoices_example"; // String | Your email for invoice notifications.
    String emailAbuse = "emailAbuse_example"; // String | Your email for abuse notifications.
    Boolean disableReset = true; // Boolean | Set to `true` to disable account resets, or `false` to enable them.
    Boolean disableReinstall = true; // Boolean | Set to `true` to disable server reinstalls, or `false` to enable them.
    Boolean disableServerNotifications = true; // Boolean | Set to `true` to disable server notifications, or `false` to enable them.
    Boolean disableEmailNotifications = true; // Boolean | Set to `true` to disable email notifications, or `false` to enable them.
    String gstin = "gstin_example"; // String | Your GST identification number (if applicable).
    try {
      SuccessTextResponse result = apiInstance.updateAccountInfo(name, address, city, state, zip, country, phone, company, address2, locale, emailInvoices, emailAbuse, disableReset, disableReinstall, disableServerNotifications, disableEmailNotifications, gstin);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#updateAccountInfo");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **name** | **String**| Your name. | |
| **address** | **String**| Your address. | |
| **city** | **String**| Your city. | |
| **state** | **String**| Your state. | |
| **zip** | **String**| Your ZIP code. | |
| **country** | **String**| Your country. | |
| **phone** | **String**| Your phone number. | |
| **company** | **String**| Your company name. | [optional] |
| **address2** | **String**| Additional address information. | [optional] |
| **locale** | **String**| Your preferred locale. | [optional] |
| **emailInvoices** | **String**| Your email for invoice notifications. | [optional] |
| **emailAbuse** | **String**| Your email for abuse notifications. | [optional] |
| **disableReset** | **Boolean**| Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. | [optional] |
| **disableReinstall** | **Boolean**| Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. | [optional] |
| **disableServerNotifications** | **Boolean**| Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. | [optional] |
| **disableEmailNotifications** | **Boolean**| Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. | [optional] |
| **gstin** | **String**| Your GST identification number (if applicable). | [optional] |

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
| **422** | Validation error while updating account data. |  -  |

<a id="updateAccountIpLimits"></a>
# **updateAccountIpLimits**
> SuccessTextResponse updateAccountIpLimits(start, end)

Add IP Access Restriction

Adds an IP address range to the account&#39;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    String start = "start_example"; // String | The begining (or first) IP address in the range.
    String end = "end_example"; // String | The ending (or last) IP address in the range.
    try {
      SuccessTextResponse result = apiInstance.updateAccountIpLimits(start, end);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#updateAccountIpLimits");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **start** | **String**| The begining (or first) IP address in the range. | |
| **end** | **String**| The ending (or last) IP address in the range. | |

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
| **422** | IP limit payload contains an invalid address. |  -  |

<a id="updateAccountPassword"></a>
# **updateAccountPassword**
> TextResponse updateAccountPassword(password)

Change Account Password

Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    String password = "password_example"; // String | 
    try {
      TextResponse result = apiInstance.updateAccountPassword(password);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#updateAccountPassword");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **password** | **String**|  | |

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

<a id="updateAccountSshKey"></a>
# **updateAccountSshKey**
> SuccessTextResponse updateAccountSshKey(sshKey)

Update SSH Keys

Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    String sshKey = "sshKey_example"; // String | 
    try {
      SuccessTextResponse result = apiInstance.updateAccountSshKey(sshKey);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#updateAccountSshKey");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **sshKey** | **String**|  | [optional] |

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

<a id="updateAccountTfa"></a>
# **updateAccountTfa**
> SuccessTextResponse updateAccountTfa(_2faGoogleCode)

Enable Two-Factor Authentication

Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.AccountApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://my.interserver.net/apiv2");
    
    // Configure API key authorization: sessionIdCookieAuth
    ApiKeyAuth sessionIdCookieAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdCookieAuth");
    sessionIdCookieAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdCookieAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: apiKeyAuth
    ApiKeyAuth apiKeyAuth = (ApiKeyAuth) defaultClient.getAuthentication("apiKeyAuth");
    apiKeyAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //apiKeyAuth.setApiKeyPrefix("Token");

    // Configure API key authorization: sessionIdHeaderAuth
    ApiKeyAuth sessionIdHeaderAuth = (ApiKeyAuth) defaultClient.getAuthentication("sessionIdHeaderAuth");
    sessionIdHeaderAuth.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //sessionIdHeaderAuth.setApiKeyPrefix("Token");

    AccountApi apiInstance = new AccountApi(defaultClient);
    String _2faGoogleCode = "_2faGoogleCode_example"; // String | The 6-digit verification code from your authenticator app.
    try {
      SuccessTextResponse result = apiInstance.updateAccountTfa(_2faGoogleCode);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling AccountApi#updateAccountTfa");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **_2faGoogleCode** | **String**| The 6-digit verification code from your authenticator app. | |

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

