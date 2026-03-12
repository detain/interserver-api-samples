# InterServerManagementApi.WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addWebsite**](WebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order
[**getNewWebsite**](WebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information
[**getWebsiteBuyIp**](WebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**getWebsiteInfo**](WebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order
[**getWebsiteInvoices**](WebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**getWebsiteList**](WebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing
[**getWebsitesBackups**](WebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups
[**getWebsitesLogin**](WebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**getWebsitesWelcomeEmail**](WebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**gettWebsiteReverseDns**](WebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**postWebsiteBuyIp**](WebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**postWebsiteMigration**](WebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration
[**postWebsitesReverseDns**](WebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**putWebsites**](WebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order
[**updateWebsiteInfo**](WebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order
[**webhostingCancel**](WebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website



## addWebsite

> addWebsite()

Place Website Order

Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
apiInstance.addWebsite((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
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


## getNewWebsite

> WebsitesOrder getNewWebsite()

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
apiInstance.getNewWebsite((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWebsiteBuyIp

> GetWebsiteBuyIp200Response getWebsiteBuyIp(id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.getWebsiteBuyIp(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**GetWebsiteBuyIp200Response**](GetWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWebsiteInfo

> Website getWebsiteInfo(id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.getWebsiteInfo(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**Website**](Website.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWebsiteInvoices

> ChargeInvoiceRows getWebsiteInvoices(id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.getWebsiteInvoices(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWebsiteList

> [WebsiteRow] getWebsiteList()

Get Website Listing

Gets a listing of your webhosting orders and service details.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
apiInstance.getWebsiteList((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[WebsiteRow]**](WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, multipart/form-data


## getWebsitesBackups

> WebsiteBackups getWebsitesBackups(id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.getWebsitesBackups(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWebsitesLogin

> WebsiteLoginResponse getWebsitesLogin(id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.getWebsitesLogin(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWebsitesWelcomeEmail

> SuccessTextResponse getWebsitesWelcomeEmail(id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.getWebsitesWelcomeEmail(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## gettWebsiteReverseDns

> ReverseDnsEntries gettWebsiteReverseDns(id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.gettWebsiteReverseDns(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## postWebsiteBuyIp

> PostWebsiteBuyIp200Response postWebsiteBuyIp(id, PostWebsiteBuyIpRequest)

Update Website IP DNS

Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
let PostWebsiteBuyIpRequest = new InterServerManagementApi.PostWebsiteBuyIpRequest(); // PostWebsiteBuyIpRequest | 
apiInstance.postWebsiteBuyIp(id, PostWebsiteBuyIpRequest, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **PostWebsiteBuyIpRequest** | [**PostWebsiteBuyIpRequest**](PostWebsiteBuyIpRequest.md)|  | 

### Return type

[**PostWebsiteBuyIp200Response**](PostWebsiteBuyIp200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json


## postWebsiteMigration

> PostWebsiteMigration200Response postWebsiteMigration(id, PostWebsiteMigrationRequest)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
let PostWebsiteMigrationRequest = new InterServerManagementApi.PostWebsiteMigrationRequest(); // PostWebsiteMigrationRequest | 
apiInstance.postWebsiteMigration(id, PostWebsiteMigrationRequest, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **PostWebsiteMigrationRequest** | [**PostWebsiteMigrationRequest**](PostWebsiteMigrationRequest.md)|  | 

### Return type

[**PostWebsiteMigration200Response**](PostWebsiteMigration200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json


## postWebsitesReverseDns

> TextResponse postWebsitesReverseDns(id, ReverseDnsEntries)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = 56; // Number | The website service ID. Use `website_id` from `GET /websites`.
let ReverseDnsEntries = new InterServerManagementApi.ReverseDnsEntries(); // ReverseDnsEntries | 
apiInstance.postWebsitesReverseDns(id, ReverseDnsEntries, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Number**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
 **ReverseDnsEntries** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json


## putWebsites

> putWebsites()

Validate Webhosting Order

Validates a webhosting order before placing it.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
apiInstance.putWebsites((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
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


## updateWebsiteInfo

> updateWebsiteInfo(id)

Update Website Order

Updates settings on a webhosting order.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = "id_example"; // String | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.updateWebsiteInfo(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## webhostingCancel

> WebhostingCancel200Response webhostingCancel(id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example

```javascript
import InterServerManagementApi from 'inter_server_management_api';
let defaultClient = InterServerManagementApi.ApiClient.instance;
// Configure API key authorization: sessionIdCookieAuth
let sessionIdCookieAuth = defaultClient.authentications['sessionIdCookieAuth'];
sessionIdCookieAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdCookieAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: apiKeyAuth
let apiKeyAuth = defaultClient.authentications['apiKeyAuth'];
apiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//apiKeyAuth.apiKeyPrefix = 'Token';
// Configure API key authorization: sessionIdHeaderAuth
let sessionIdHeaderAuth = defaultClient.authentications['sessionIdHeaderAuth'];
sessionIdHeaderAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//sessionIdHeaderAuth.apiKeyPrefix = 'Token';

let apiInstance = new InterServerManagementApi.WebhostingApi();
let id = "123"; // String | The website service ID. Use `website_id` from `GET /websites`.
apiInstance.webhostingCancel(id, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebhostingCancel200Response**](WebhostingCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

