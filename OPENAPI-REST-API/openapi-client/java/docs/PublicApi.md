# PublicApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**getCaptcha**](PublicApi.md#getCaptcha) | **GET** /captcha | Get Captcha Challenge |
| [**getCountries**](PublicApi.md#getCountries) | **GET** /account/countries | Get Countries |
| [**getInfo**](PublicApi.md#getInfo) | **GET** /info | Get Server Info |
| [**getLoginInfo**](PublicApi.md#getLoginInfo) | **GET** /login | Get Login Info |
| [**getMPServers**](PublicApi.md#getMPServers) | **GET** /buy_now_servers_list | List Marketplace Servers |
| [**getOauthRedirect**](PublicApi.md#getOauthRedirect) | **GET** /oauth | Get OAuth Redirect URL |
| [**getTimezones**](PublicApi.md#getTimezones) | **GET** /account/timezones | Get Available Timezones |
| [**patchOauthTwoFactor**](PublicApi.md#patchOauthTwoFactor) | **PATCH** /oauth | Complete OAuth Two-Factor Verification |
| [**pingServer**](PublicApi.md#pingServer) | **GET** /ping | Ping Server |
| [**postOauthCallback**](PublicApi.md#postOauthCallback) | **POST** /oauth | OAuth Callback |
| [**submitLogin**](PublicApi.md#submitLogin) | **POST** /login | Submit Login Information |
| [**submitSignup**](PublicApi.md#submitSignup) | **POST** /signup | Submit Signup Information |


<a id="getCaptcha"></a>
# **getCaptcha**
> CaptchaResponse getCaptcha()

Get Captcha Challenge

Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    try {
      CaptchaResponse result = apiInstance.getCaptcha();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#getCaptcha");
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

[**CaptchaResponse**](CaptchaResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | An array containing a &#x60;captcha&#x60; field containing a string with a base64 encoded captcha image. |  -  |
| **401** | Unauthorized |  -  |

<a id="getCountries"></a>
# **getCountries**
> Object getCountries(fetchBy)

Get Countries

Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    String fetchBy = "iso2"; // String | Get countries by iso2 or iso3 or numcode
    try {
      Object result = apiInstance.getCountries(fetchBy);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#getCountries");
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
| **fetchBy** | **String**| Get countries by iso2 or iso3 or numcode | [optional] [enum: iso2, iso3, numcode] |

### Return type

**Object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The list of countries with both 2 letter abbreviations and the country names. |  -  |
| **401** | Unauthorized |  -  |

<a id="getInfo"></a>
# **getInfo**
> ServicesInfo getInfo()

Get Server Info

Returns metadata about the API server&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    try {
      ServicesInfo result = apiInstance.getInfo();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#getInfo");
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

[**ServicesInfo**](ServicesInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The modules and services information from the server. |  -  |
| **401** | Unauthorized |  -  |

<a id="getLoginInfo"></a>
# **getLoginInfo**
> LoginInfo getLoginInfo()

Get Login Info

Gets the various pieces of information useful for generating a login page.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    try {
      LoginInfo result = apiInstance.getLoginInfo();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#getLoginInfo");
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

[**LoginInfo**](LoginInfo.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Various pieces of information useful for rendering a login page. |  -  |
| **403** | Error response to a login request. |  -  |

<a id="getMPServers"></a>
# **getMPServers**
> BuyItNowList getMPServers()

List Marketplace Servers

Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    try {
      BuyItNowList result = apiInstance.getMPServers();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#getMPServers");
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

[**BuyItNowList**](BuyItNowList.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Marketplace Buy it now servers list |  -  |
| **401** | Unauthorized |  -  |

<a id="getOauthRedirect"></a>
# **getOauthRedirect**
> GetOauthRedirect200Response getOauthRedirect(provider)

Get OAuth Redirect URL

Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    String provider = "provider_example"; // String | The OAuth provider name (e.g. `Google`).
    try {
      GetOauthRedirect200Response result = apiInstance.getOauthRedirect(provider);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#getOauthRedirect");
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
| **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | |

### Return type

[**GetOauthRedirect200Response**](GetOauthRedirect200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OAuth redirect URL for the requested provider. |  -  |
| **401** | Unauthorized |  -  |

<a id="getTimezones"></a>
# **getTimezones**
> List&lt;String&gt; getTimezones()

Get Available Timezones

Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    try {
      List<String> result = apiInstance.getTimezones();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#getTimezones");
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

**List&lt;String&gt;**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | An array of all available timezone identifiers. |  -  |

<a id="patchOauthTwoFactor"></a>
# **patchOauthTwoFactor**
> PatchOauthTwoFactor200Response patchOauthTwoFactor(patchOauthTwoFactorRequest)

Complete OAuth Two-Factor Verification

Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    PatchOauthTwoFactorRequest patchOauthTwoFactorRequest = new PatchOauthTwoFactorRequest(); // PatchOauthTwoFactorRequest | 
    try {
      PatchOauthTwoFactor200Response result = apiInstance.patchOauthTwoFactor(patchOauthTwoFactorRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#patchOauthTwoFactor");
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
| **patchOauthTwoFactorRequest** | [**PatchOauthTwoFactorRequest**](PatchOauthTwoFactorRequest.md)|  | |

### Return type

[**PatchOauthTwoFactor200Response**](PatchOauthTwoFactor200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OAuth 2FA verification result. |  -  |
| **401** | Unauthorized |  -  |

<a id="pingServer"></a>
# **pingServer**
> String pingServer()

Ping Server

Performs a single ping/pong request to let you know if the server is up.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    try {
      String result = apiInstance.pingServer();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#pingServer");
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

**String**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A simple response of \&quot;pong\&quot; for use with simple tests to see if a service is up.  |  -  |
| **401** | Unauthorized |  -  |
| **0** | Something is wrong |  -  |

<a id="postOauthCallback"></a>
# **postOauthCallback**
> PostOauthCallback200Response postOauthCallback(provider, postOauthCallbackRequest)

OAuth Callback

Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    String provider = "provider_example"; // String | The OAuth provider name (e.g. `Google`).
    PostOauthCallbackRequest postOauthCallbackRequest = new PostOauthCallbackRequest(); // PostOauthCallbackRequest | 
    try {
      PostOauthCallback200Response result = apiInstance.postOauthCallback(provider, postOauthCallbackRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#postOauthCallback");
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
| **provider** | **String**| The OAuth provider name (e.g. &#x60;Google&#x60;). | |
| **postOauthCallbackRequest** | [**PostOauthCallbackRequest**](PostOauthCallbackRequest.md)|  | [optional] |

### Return type

[**PostOauthCallback200Response**](PostOauthCallback200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OAuth callback result. |  -  |
| **401** | Unauthorized |  -  |

<a id="submitLogin"></a>
# **submitLogin**
> LoginSuccessResponse submitLogin(login, passwd, remember, gRecaptchaResponse, tfa)

Submit Login Information

Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    String login = "login_example"; // String | 
    String passwd = "passwd_example"; // String | 
    String remember = "remember_example"; // String | 
    LoginSubmissionExampleGRecaptchaResponse gRecaptchaResponse = new LoginSubmissionExampleGRecaptchaResponse(); // LoginSubmissionExampleGRecaptchaResponse | 
    String tfa = "tfa_example"; // String | Two Factor Authentication Response.
    try {
      LoginSuccessResponse result = apiInstance.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#submitLogin");
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
| **login** | **String**|  | |
| **passwd** | **String**|  | |
| **remember** | **String**|  | [optional] |
| **gRecaptchaResponse** | [**LoginSubmissionExampleGRecaptchaResponse**](LoginSubmissionExampleGRecaptchaResponse.md)|  | [optional] |
| **tfa** | **String**| Two Factor Authentication Response. | [optional] |

### Return type

[**LoginSuccessResponse**](LoginSuccessResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Successful login response containing the session token. |  -  |
| **402** | Error response to a login request. |  -  |
| **0** | Default response |  -  |

<a id="submitSignup"></a>
# **submitSignup**
> submitSignup(loginSubmissionExample)

Submit Signup Information

Creates a new account in our system using the provided information.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.PublicApi;

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

    PublicApi apiInstance = new PublicApi(defaultClient);
    LoginSubmissionExample loginSubmissionExample = new LoginSubmissionExample(); // LoginSubmissionExample | 
    try {
      apiInstance.submitSignup(loginSubmissionExample);
    } catch (ApiException e) {
      System.err.println("Exception when calling PublicApi#submitSignup");
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
| **loginSubmissionExample** | [**LoginSubmissionExample**](LoginSubmissionExample.md)|  | [optional] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Account created successfully. |  -  |
| **402** | Error response to a login request. |  -  |

