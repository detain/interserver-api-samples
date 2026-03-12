# {{classname}}

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddWebsite**](WebhostingApi.md#AddWebsite) | **Post** /websites/order | Place Website Order
[**GetNewWebsite**](WebhostingApi.md#GetNewWebsite) | **Get** /websites/order | Website Ordering Information
[**GetWebsiteBuyIp**](WebhostingApi.md#GetWebsiteBuyIp) | **Get** /websites/{id}/buy_ip | Get Website IP Information
[**GetWebsiteInfo**](WebhostingApi.md#GetWebsiteInfo) | **Get** /websites/{id} | Get Website Order
[**GetWebsiteInvoices**](WebhostingApi.md#GetWebsiteInvoices) | **Get** /websites/{id}/invoices | Get Website Invoices
[**GetWebsiteList**](WebhostingApi.md#GetWebsiteList) | **Get** /websites | Get Website Listing
[**GetWebsitesBackups**](WebhostingApi.md#GetWebsitesBackups) | **Get** /websites/{id}/backups | Get Website Backups
[**GetWebsitesLogin**](WebhostingApi.md#GetWebsitesLogin) | **Get** /websites/{id}/login | Hosting Panel Auto Login
[**GetWebsitesWelcomeEmail**](WebhostingApi.md#GetWebsitesWelcomeEmail) | **Get** /websites/{id}/welcome_email | Resend Website Welcome Email
[**GettWebsiteReverseDns**](WebhostingApi.md#GettWebsiteReverseDns) | **Get** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**PostWebsiteBuyIp**](WebhostingApi.md#PostWebsiteBuyIp) | **Post** /websites/{id}/buy_ip | Update Website IP DNS
[**PostWebsiteMigration**](WebhostingApi.md#PostWebsiteMigration) | **Post** /websites/{id}/migration | Request Website Migration
[**PostWebsitesReverseDns**](WebhostingApi.md#PostWebsitesReverseDns) | **Post** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**PutWebsites**](WebhostingApi.md#PutWebsites) | **Put** /websites/order | Validate Webhosting Order
[**UpdateWebsiteInfo**](WebhostingApi.md#UpdateWebsiteInfo) | **Post** /websites/{id} | Update Website Order
[**WebhostingCancel**](WebhostingApi.md#WebhostingCancel) | **Delete** /websites/{id} | Cancel Website

# **AddWebsite**
> AddWebsite(ctx, )
Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

### Required Parameters
This endpoint does not need any parameter.

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetNewWebsite**
> WebsitesOrder GetNewWebsite(ctx, )
Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetWebsiteBuyIp**
> InlineResponse20023 GetWebsiteBuyIp(ctx, id)
Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20023**](inline_response_200_23.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetWebsiteInfo**
> Website GetWebsiteInfo(ctx, id)
Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**Website**](Website.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetWebsiteInvoices**
> ChargeInvoiceRows GetWebsiteInvoices(ctx, id)
Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetWebsiteList**
> []WebsiteRow GetWebsiteList(ctx, )
Get Website Listing

Gets a listing of your webhosting orders and service details.

### Required Parameters
This endpoint does not need any parameter.

### Return type

[**[]WebsiteRow**](WebsiteRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetWebsitesBackups**
> []WebsiteBackupsInner GetWebsitesBackups(ctx, id)
Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**[]WebsiteBackupsInner**](array.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetWebsitesLogin**
> WebsiteLoginResponse GetWebsitesLogin(ctx, id)
Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GetWebsitesWelcomeEmail**
> SuccessTextResponse GetWebsitesWelcomeEmail(ctx, id)
Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GettWebsiteReverseDns**
> ReverseDnsEntries GettWebsiteReverseDns(ctx, id)
Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostWebsiteBuyIp**
> InlineResponse20024 PostWebsiteBuyIp(ctx, body, ips, id)
Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**IdBuyIpBody**](IdBuyIpBody.md)|  | 
  **ips** | [**map[string]string**](string.md)|  | 
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20024**](inline_response_200_24.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostWebsiteMigration**
> InlineResponse20025 PostWebsiteMigration(ctx, body, custPortal, regEmail, password, ctrlPanel, ftpUsername, ftpPassword, siteBusyMig, splReqMig, domainReg, dataMig, domainRegPortal, domainRegEmail, domainRegPassword, id)
Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**IdMigrationBody**](IdMigrationBody.md)|  | 
  **custPortal** | **string**|  | 
  **regEmail** | **string**|  | 
  **password** | **string**|  | 
  **ctrlPanel** | **string**|  | 
  **ftpUsername** | **string**|  | 
  **ftpPassword** | **string**|  | 
  **siteBusyMig** | **string**|  | 
  **splReqMig** | **string**|  | 
  **domainReg** | **string**|  | 
  **dataMig** | **string**|  | 
  **domainRegPortal** | **string**|  | 
  **domainRegEmail** | **string**|  | 
  **domainRegPassword** | **string**|  | 
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20025**](inline_response_200_25.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PostWebsitesReverseDns**
> TextResponse PostWebsitesReverseDns(ctx, body, ips, id)
Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
  **ips** | [**ModelMap**](interface{}.md)|  | 
  **id** | **int32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PutWebsites**
> PutWebsites(ctx, )
Validate Webhosting Order

Validates a webhosting order before placing it.

### Required Parameters
This endpoint does not need any parameter.

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UpdateWebsiteInfo**
> UpdateWebsiteInfo(ctx, id)
Update Website Order

Updates settings on a webhosting order.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

 (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingCancel**
> InlineResponse20022 WebhostingCancel(ctx, id)
Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Required Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
  **id** | **string**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20022**](inline_response_200_22.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

