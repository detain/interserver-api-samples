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


<a name="addWebsite"></a>
# **addWebsite**
> ServiceOrderPostResponse addWebsite()

Place Website Order

    Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](../Models/ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewWebsite"></a>
# **getNewWebsite**
> WebsitesOrder getNewWebsite()

Website Ordering Information

    Retrieves available webhosting plans and pricing for ordering.

### Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](../Models/WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getWebsiteBuyIp"></a>
# **getWebsiteBuyIp**
> getWebsiteBuyIp_200_response getWebsiteBuyIp(id)

Get Website IP Information

    Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**getWebsiteBuyIp_200_response**](../Models/getWebsiteBuyIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getWebsiteInfo"></a>
# **getWebsiteInfo**
> Website getWebsiteInfo(id)

Get Website Order

    Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**Website**](../Models/Website.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getWebsiteInvoices"></a>
# **getWebsiteInvoices**
> ChargeInvoiceRows getWebsiteInvoices(id)

Get Website Invoices

    Returns the billing invoices associated with this webhosting service.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getWebsiteList"></a>
# **getWebsiteList**
> List getWebsiteList()

Get Website Listing

    Gets a listing of your webhosting orders and service details.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json, multipart/form-data

<a name="getWebsitesBackups"></a>
# **getWebsitesBackups**
> WebsiteBackups getWebsitesBackups(id)

Get Website Backups

    Gets a list of the backups that exist for a website and their sizes.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**WebsiteBackups**](../Models/WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getWebsitesLogin"></a>
# **getWebsitesLogin**
> WebsiteLoginResponse getWebsitesLogin(id)

Hosting Panel Auto Login

    Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**WebsiteLoginResponse**](../Models/WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getWebsitesWelcomeEmail"></a>
# **getWebsitesWelcomeEmail**
> SuccessTextResponse getWebsitesWelcomeEmail(id)

Resend Website Welcome Email

    Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="gettWebsiteReverseDns"></a>
# **gettWebsiteReverseDns**
> ReverseDnsEntries gettWebsiteReverseDns(id)

Get Website Reverse DNS

    Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postWebsiteBuyIp"></a>
# **postWebsiteBuyIp**
> postWebsiteBuyIp_200_response postWebsiteBuyIp(id, postWebsiteBuyIp\_request)

Update Website IP DNS

    Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |
| **postWebsiteBuyIp\_request** | [**postWebsiteBuyIp_request**](../Models/postWebsiteBuyIp_request.md)|  | |

### Return type

[**postWebsiteBuyIp_200_response**](../Models/postWebsiteBuyIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="postWebsiteMigration"></a>
# **postWebsiteMigration**
> postWebsiteMigration_200_response postWebsiteMigration(id, postWebsiteMigration\_request)

Request Website Migration

    Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |
| **postWebsiteMigration\_request** | [**postWebsiteMigration_request**](../Models/postWebsiteMigration_request.md)|  | |

### Return type

[**postWebsiteMigration_200_response**](../Models/postWebsiteMigration_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="postWebsitesReverseDns"></a>
# **postWebsitesReverseDns**
> TextResponse postWebsitesReverseDns(id, ReverseDnsEntries)

Update Website Reverse DNS

    Updates the reverse DNS entries for each of the IP addresses for the website.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |
| **ReverseDnsEntries** | [**ReverseDnsEntries**](../Models/ReverseDnsEntries.md)|  | |

### Return type

[**TextResponse**](../Models/TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="putWebsites"></a>
# **putWebsites**
> putWebsites()

Validate Webhosting Order

    Validates a webhosting order before placing it.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateWebsiteInfo"></a>
# **updateWebsiteInfo**
> SuccessTextResponse updateWebsiteInfo(id)

Update Website Order

    Updates settings on a webhosting order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="webhostingCancel"></a>
# **webhostingCancel**
> webhostingCancel_200_response webhostingCancel(id)

Cancel Website

    Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null] |

### Return type

[**webhostingCancel_200_response**](../Models/webhostingCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

