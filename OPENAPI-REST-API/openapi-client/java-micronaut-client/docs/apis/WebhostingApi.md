# WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addWebsite**](WebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order |
| [**getNewWebsite**](WebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information |
| [**getWebsiteBuyIp**](WebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information |
| [**getWebsiteInfo**](WebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order |
| [**getWebsiteInvoices**](WebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices |
| [**getWebsiteList**](WebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing |
| [**getWebsitesBackups**](WebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups |
| [**getWebsitesLogin**](WebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login |
| [**getWebsitesWelcomeEmail**](WebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email |
| [**gettWebsiteReverseDns**](WebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS |
| [**postWebsiteBuyIp**](WebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS |
| [**postWebsiteMigration**](WebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration |
| [**postWebsitesReverseDns**](WebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS |
| [**putWebsites**](WebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order |
| [**updateWebsiteInfo**](WebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order |
| [**webhostingCancel**](WebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website |


## Creating WebhostingApi

To initiate an instance of `WebhostingApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.WebhostingApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(WebhostingApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    WebhostingApi webhostingApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addWebsite"></a>
# **addWebsite**
```java
Mono<Void> WebhostingApi.addWebsite()
```

Place Website Order

Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewWebsite"></a>
# **getNewWebsite**
```java
Mono<WebsitesOrder> WebhostingApi.getNewWebsite()
```

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.



### Return type
[**WebsitesOrder**](WebsitesOrder.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getWebsiteBuyIp"></a>
# **getWebsiteBuyIp**
```java
Mono<GetWebsiteBuyIp200Response> WebhostingApi.getWebsiteBuyIp(id)
```

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**GetWebsiteBuyIp200Response**](GetWebsiteBuyIp200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getWebsiteInfo"></a>
# **getWebsiteInfo**
```java
Mono<Website> WebhostingApi.getWebsiteInfo(id)
```

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**Website**](Website.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getWebsiteInvoices"></a>
# **getWebsiteInvoices**
```java
Mono<ChargeInvoiceRows> WebhostingApi.getWebsiteInvoices(id)
```

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getWebsiteList"></a>
# **getWebsiteList**
```java
Mono<List<WebsiteRow>> WebhostingApi.getWebsiteList()
```

Get Website Listing

Gets a listing of your webhosting orders and service details.



### Return type
[**List&lt;WebsiteRow&gt;**](WebsiteRow.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`, `multipart/form-data`

<a id="getWebsitesBackups"></a>
# **getWebsitesBackups**
```java
Mono<WebsiteBackups> WebhostingApi.getWebsitesBackups(id)
```

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**WebsiteBackups**](WebsiteBackups.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getWebsitesLogin"></a>
# **getWebsitesLogin**
```java
Mono<WebsiteLoginResponse> WebhostingApi.getWebsitesLogin(id)
```

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getWebsitesWelcomeEmail"></a>
# **getWebsitesWelcomeEmail**
```java
Mono<SuccessTextResponse> WebhostingApi.getWebsitesWelcomeEmail(id)
```

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="gettWebsiteReverseDns"></a>
# **gettWebsiteReverseDns**
```java
Mono<ReverseDnsEntries> WebhostingApi.gettWebsiteReverseDns(id)
```

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postWebsiteBuyIp"></a>
# **postWebsiteBuyIp**
```java
Mono<PostWebsiteBuyIp200Response> WebhostingApi.postWebsiteBuyIp(idpostWebsiteBuyIpRequest)
```

Update Website IP DNS

Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| **postWebsiteBuyIpRequest** | [**PostWebsiteBuyIpRequest**](PostWebsiteBuyIpRequest.md)|  | |


### Return type
[**PostWebsiteBuyIp200Response**](PostWebsiteBuyIp200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="postWebsiteMigration"></a>
# **postWebsiteMigration**
```java
Mono<PostWebsiteMigration200Response> WebhostingApi.postWebsiteMigration(idpostWebsiteMigrationRequest)
```

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| **postWebsiteMigrationRequest** | [**PostWebsiteMigrationRequest**](PostWebsiteMigrationRequest.md)|  | |


### Return type
[**PostWebsiteMigration200Response**](PostWebsiteMigration200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="postWebsitesReverseDns"></a>
# **postWebsitesReverseDns**
```java
Mono<TextResponse> WebhostingApi.postWebsitesReverseDns(idreverseDnsEntries)
```

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |
| **reverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | |


### Return type
[**TextResponse**](TextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="putWebsites"></a>
# **putWebsites**
```java
Mono<Void> WebhostingApi.putWebsites()
```

Validate Webhosting Order

Validates a webhosting order before placing it.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateWebsiteInfo"></a>
# **updateWebsiteInfo**
```java
Mono<Void> WebhostingApi.updateWebsiteInfo(id)
```

Update Website Order

Updates settings on a webhosting order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="webhostingCancel"></a>
# **webhostingCancel**
```java
Mono<WebhostingCancel200Response> WebhostingApi.webhostingCancel(id)
```

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | |


### Return type
[**WebhostingCancel200Response**](WebhostingCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

