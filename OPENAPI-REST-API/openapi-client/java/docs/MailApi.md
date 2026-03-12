# MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addMail**](MailApi.md#addMail) | **POST** /mail/order | Place Mail Order |
| [**addRule**](MailApi.md#addRule) | **POST** /mail/{id}/rules | Create Deny Rule |
| [**createMailAlert**](MailApi.md#createMailAlert) | **POST** /mail/{id}/alerts | Create Mail Alert |
| [**deleteMailAlert**](MailApi.md#deleteMailAlert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert |
| [**deleteRule**](MailApi.md#deleteRule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule |
| [**delistBlock**](MailApi.md#delistBlock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List |
| [**getMailAlerts**](MailApi.md#getMailAlerts) | **GET** /mail/{id}/alerts | List Mail Alerts |
| [**getMailBlocks**](MailApi.md#getMailBlocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses |
| [**getMailDelist**](MailApi.md#getMailDelist) | **GET** /mail/{id}/delist | Get Delist Status |
| [**getMailDeliverability**](MailApi.md#getMailDeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics |
| [**getMailInfo**](MailApi.md#getMailInfo) | **GET** /mail/{id} | Get Mail Order |
| [**getMailInvoices**](MailApi.md#getMailInvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices |
| [**getMailList**](MailApi.md#getMailList) | **GET** /mail | List Mail Orders |
| [**getMailWelcomeEmail**](MailApi.md#getMailWelcomeEmail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email |
| [**getNewMail**](MailApi.md#getNewMail) | **GET** /mail/order | Get Mail Ordering Information |
| [**getRules**](MailApi.md#getRules) | **GET** /mail/{id}/rules | List Deny Rules |
| [**getStats**](MailApi.md#getStats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics |
| [**mailCancel**](MailApi.md#mailCancel) | **DELETE** /mail/{id} | Cancel Mail |
| [**postMailDelist**](MailApi.md#postMailDelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender |
| [**putMail**](MailApi.md#putMail) | **PUT** /mail/order | Validate Mail Order |
| [**resetMailPassword**](MailApi.md#resetMailPassword) | **GET** /mail/{id}/reset_password | Reset Mail Password |
| [**sendAdvMail**](MailApi.md#sendAdvMail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options |
| [**sendMail**](MailApi.md#sendMail) | **POST** /mail/{id}/send | Send Email |
| [**updateMailAlert**](MailApi.md#updateMailAlert) | **PUT** /mail/{id}/alerts | Update Mail Alert |
| [**updateMailInfo**](MailApi.md#updateMailInfo) | **POST** /mail/{id} | Update Mail Order |
| [**viewMailLog**](MailApi.md#viewMailLog) | **GET** /mail/{id}/log | View Mail Log |


<a id="addMail"></a>
# **addMail**
> addMail()

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    try {
      apiInstance.addMail();
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#addMail");
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

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

<a id="addRule"></a>
# **addRule**
> GenericResponse addRule(id, denyRuleNew)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    DenyRuleNew denyRuleNew = new DenyRuleNew(); // DenyRuleNew | These are the fields needed to create a new email deny rule.
    try {
      GenericResponse result = apiInstance.addRule(id, denyRuleNew);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#addRule");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **denyRuleNew** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deny rule created successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

<a id="createMailAlert"></a>
# **createMailAlert**
> SuccessTextResponse createMailAlert(id, mailAlertRequest)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    MailAlertRequest mailAlertRequest = new MailAlertRequest(); // MailAlertRequest | 
    try {
      SuccessTextResponse result = apiInstance.createMailAlert(id, mailAlertRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#createMailAlert");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **mailAlertRequest** | [**MailAlertRequest**](MailAlertRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

<a id="deleteMailAlert"></a>
# **deleteMailAlert**
> SuccessTextResponse deleteMailAlert(id, alertId)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    Integer alertId = 56; // Integer | Alert ID to delete.
    try {
      SuccessTextResponse result = apiInstance.deleteMailAlert(id, alertId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#deleteMailAlert");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **alertId** | **Integer**| Alert ID to delete. | |

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

<a id="deleteRule"></a>
# **deleteRule**
> GenericResponse deleteRule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    String rule = "34"; // String | The ID of the Rules entry.
    try {
      GenericResponse result = apiInstance.deleteRule(id, rule);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#deleteRule");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **rule** | **String**| The ID of the Rules entry. | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deny rule deleted successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

<a id="delistBlock"></a>
# **delistBlock**
> GenericResponse delistBlock(id, email)

Remove Email Address from Block List

Removes an email address from the mail service&#39;s block lists.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    String email = "email_example"; // String | an email address
    try {
      GenericResponse result = apiInstance.delistBlock(id, email);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#delistBlock");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **email** | **String**| an email address | [optional] |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email address removed from block list successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

<a id="getMailAlerts"></a>
# **getMailAlerts**
> MailAlertsResponse getMailAlerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      MailAlertsResponse result = apiInstance.getMailAlerts(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailAlerts");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Alert configuration for the mail service. |  -  |
| **401** | Unauthorized |  -  |

<a id="getMailBlocks"></a>
# **getMailBlocks**
> MailBlocks getMailBlocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      MailBlocks result = apiInstance.getMailBlocks(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailBlocks");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

<a id="getMailDelist"></a>
# **getMailDelist**
> MailDelistResponse getMailDelist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      MailDelistResponse result = apiInstance.getMailDelist(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailDelist");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Blocklist entries and delist details for the mail service. |  -  |
| **401** | Unauthorized |  -  |

<a id="getMailDeliverability"></a>
# **getMailDeliverability**
> MailDeliverabilityResponse getMailDeliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      MailDeliverabilityResponse result = apiInstance.getMailDeliverability(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailDeliverability");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deliverability metrics for the mail service. |  -  |
| **401** | Unauthorized |  -  |

<a id="getMailInfo"></a>
# **getMailInfo**
> MailSchema getMailInfo(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      MailSchema result = apiInstance.getMailInfo(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailInfo");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail Information. |  -  |
| **401** | Unauthorized |  -  |

<a id="getMailInvoices"></a>
# **getMailInvoices**
> ChargeInvoiceRows getMailInvoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      ChargeInvoiceRows result = apiInstance.getMailInvoices(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailInvoices");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

<a id="getMailList"></a>
# **getMailList**
> List&lt;MailRow&gt; getMailList()

List Mail Orders

Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    try {
      List<MailRow> result = apiInstance.getMailList();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailList");
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

[**List&lt;MailRow&gt;**](MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Mail&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

<a id="getMailWelcomeEmail"></a>
# **getMailWelcomeEmail**
> SuccessTextResponse getMailWelcomeEmail(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      SuccessTextResponse result = apiInstance.getMailWelcomeEmail(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getMailWelcomeEmail");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

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

<a id="getNewMail"></a>
# **getNewMail**
> MailOrder getNewMail()

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    try {
      MailOrder result = apiInstance.getNewMail();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getNewMail");
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

[**MailOrder**](MailOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail ordering information. |  -  |
| **401** | Unauthorized |  -  |

<a id="getRules"></a>
# **getRules**
> List&lt;DenyRuleRecord&gt; getRules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      List<DenyRuleRecord> result = apiInstance.getRules(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getRules");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**List&lt;DenyRuleRecord&gt;**](DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | List of configured deny rules. |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

<a id="getStats"></a>
# **getStats**
> MailStatsType getStats(id, time)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    String time = "all"; // String | The timeframe for the statistics.
    try {
      MailStatsType result = apiInstance.getStats(id, time);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#getStats");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **time** | **String**| The timeframe for the statistics. | [optional] [enum: all, billing, month, 7d, 24h, 1d, 1h] |

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail service usage statistics. |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

<a id="mailCancel"></a>
# **mailCancel**
> MailCancel200Response mailCancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      MailCancel200Response result = apiInstance.mailCancel(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#mailCancel");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailCancel200Response**](MailCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail Cancel |  -  |
| **401** | Unauthorized |  -  |

<a id="postMailDelist"></a>
# **postMailDelist**
> SuccessTextResponse postMailDelist(id, mailDelistRequest)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    MailDelistRequest mailDelistRequest = new MailDelistRequest(); // MailDelistRequest | 
    try {
      SuccessTextResponse result = apiInstance.postMailDelist(id, mailDelistRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#postMailDelist");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **mailDelistRequest** | [**MailDelistRequest**](MailDelistRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

<a id="putMail"></a>
# **putMail**
> putMail()

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    try {
      apiInstance.putMail();
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#putMail");
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

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate Mail order response. |  -  |
| **401** | Unauthorized |  -  |

<a id="resetMailPassword"></a>
# **resetMailPassword**
> SuccessTextResponse resetMailPassword(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      SuccessTextResponse result = apiInstance.resetMailPassword(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#resetMailPassword");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

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

<a id="sendAdvMail"></a>
# **sendAdvMail**
> GenericResponse sendAdvMail(id, sendMailAdv)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    SendMailAdv sendMailAdv = new SendMailAdv(); // SendMailAdv | 
    try {
      GenericResponse result = apiInstance.sendAdvMail(id, sendMailAdv);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#sendAdvMail");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **sendMailAdv** | [**SendMailAdv**](SendMailAdv.md)|  | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email queued successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

<a id="sendMail"></a>
# **sendMail**
> GenericResponse sendMail(id, sendMail)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    SendMail sendMail = new SendMail(); // SendMail | 
    try {
      GenericResponse result = apiInstance.sendMail(id, sendMail);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#sendMail");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **sendMail** | [**SendMail**](SendMail.md)|  | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email queued successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

<a id="updateMailAlert"></a>
# **updateMailAlert**
> SuccessTextResponse updateMailAlert(id, mailAlertUpdateRequest)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    MailAlertUpdateRequest mailAlertUpdateRequest = new MailAlertUpdateRequest(); // MailAlertUpdateRequest | 
    try {
      SuccessTextResponse result = apiInstance.updateMailAlert(id, mailAlertUpdateRequest);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#updateMailAlert");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **mailAlertUpdateRequest** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

<a id="updateMailInfo"></a>
# **updateMailInfo**
> updateMailInfo(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    String id = "id_example"; // String | The mail service ID. Use `mail_id` from `GET /mail`.
    try {
      apiInstance.updateMailInfo(id);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#updateMailInfo");
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
| **id** | **String**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **401** | Unauthorized |  -  |
| **0** | Default response |  -  |

<a id="viewMailLog"></a>
# **viewMailLog**
> MailLog viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered)

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MailApi;

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

    MailApi apiInstance = new MailApi(defaultClient);
    Integer id = 56; // Integer | The mail service ID. Use `mail_id` from `GET /mail`.
    Long id2 = 2604L; // Long | The ID of your mail order this will be sent through.
    String origin = "1.2.3.4"; // String | originating ip address sending mail
    String mx = "mx.google.com"; // String | mx record mail was sent to
    String from = "me@sender.com"; // String | from email address
    String to = "you@receiver.com"; // String | to/destination email address
    String subject = "Support"; // String | subject containing this string
    String mailid = "185997065c60008840"; // String | mail id
    Integer skip = 0; // Integer | number of records to skip for pagination
    Integer limit = 100; // Integer | maximum number of records to return
    Long startDate = 1641781008L; // Long | earliest date to get emails in unix timestamp format
    Long endDate = 1673317008L; // Long | Latest date to get emails in unix timestamp format.
    String delivered = "0"; // String | Filter emails by whether or not they were delivered.
    try {
      MailLog result = apiInstance.viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MailApi#viewMailLog");
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
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **id2** | **Long**| The ID of your mail order this will be sent through. | [optional] |
| **origin** | **String**| originating ip address sending mail | [optional] |
| **mx** | **String**| mx record mail was sent to | [optional] |
| **from** | **String**| from email address | [optional] |
| **to** | **String**| to/destination email address | [optional] |
| **subject** | **String**| subject containing this string | [optional] |
| **mailid** | **String**| mail id | [optional] |
| **skip** | **Integer**| number of records to skip for pagination | [optional] [default to 0] |
| **limit** | **Integer**| maximum number of records to return | [optional] [default to 100] |
| **startDate** | **Long**| earliest date to get emails in unix timestamp format | [optional] |
| **endDate** | **Long**| Latest date to get emails in unix timestamp format. | [optional] |
| **delivered** | **String**| Filter emails by whether or not they were delivered. | [optional] [enum: 0, 1] |

### Return type

[**MailLog**](MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Paginated list of mail log entries matching the specified filters. |  -  |
| **400** | bad input parameter |  -  |

