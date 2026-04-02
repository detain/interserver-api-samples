# WebhostingAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WebhostingAPI_addWebsite**](WebhostingAPI.md#WebhostingAPI_addWebsite) | **POST** /websites/order | Place Website Order
[**WebhostingAPI_getNewWebsite**](WebhostingAPI.md#WebhostingAPI_getNewWebsite) | **GET** /websites/order | Website Ordering Information
[**WebhostingAPI_getWebsiteBuyIp**](WebhostingAPI.md#WebhostingAPI_getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**WebhostingAPI_getWebsiteInfo**](WebhostingAPI.md#WebhostingAPI_getWebsiteInfo) | **GET** /websites/{id} | Get Website Order
[**WebhostingAPI_getWebsiteInvoices**](WebhostingAPI.md#WebhostingAPI_getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**WebhostingAPI_getWebsiteList**](WebhostingAPI.md#WebhostingAPI_getWebsiteList) | **GET** /websites | Get Website Listing
[**WebhostingAPI_getWebsitesBackups**](WebhostingAPI.md#WebhostingAPI_getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups
[**WebhostingAPI_getWebsitesLogin**](WebhostingAPI.md#WebhostingAPI_getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**WebhostingAPI_getWebsitesWelcomeEmail**](WebhostingAPI.md#WebhostingAPI_getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**WebhostingAPI_gettWebsiteReverseDns**](WebhostingAPI.md#WebhostingAPI_gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**WebhostingAPI_postWebsiteBuyIp**](WebhostingAPI.md#WebhostingAPI_postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**WebhostingAPI_postWebsiteMigration**](WebhostingAPI.md#WebhostingAPI_postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration
[**WebhostingAPI_postWebsitesReverseDns**](WebhostingAPI.md#WebhostingAPI_postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**WebhostingAPI_putWebsites**](WebhostingAPI.md#WebhostingAPI_putWebsites) | **PUT** /websites/order | Validate Webhosting Order
[**WebhostingAPI_updateWebsiteInfo**](WebhostingAPI.md#WebhostingAPI_updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order
[**WebhostingAPI_webhostingCancel**](WebhostingAPI.md#WebhostingAPI_webhostingCancel) | **DELETE** /websites/{id} | Cancel Website


# **WebhostingAPI_addWebsite**
```c
// Place Website Order
//
// Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
//
service_order_post_response_t* WebhostingAPI_addWebsite(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[service_order_post_response_t](service_order_post_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getNewWebsite**
```c
// Website Ordering Information
//
// Retrieves available webhosting plans and pricing for ordering.
//
websites_order_t* WebhostingAPI_getNewWebsite(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[websites_order_t](websites_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getWebsiteBuyIp**
```c
// Get Website IP Information
//
// Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
//
get_website_buy_ip_200_response_t* WebhostingAPI_getWebsiteBuyIp(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[get_website_buy_ip_200_response_t](get_website_buy_ip_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getWebsiteInfo**
```c
// Get Website Order
//
// Returns detailed information about a specific webhosting order including its domain, plan, and status.
//
website_t* WebhostingAPI_getWebsiteInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[website_t](website.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getWebsiteInvoices**
```c
// Get Website Invoices
//
// Returns the billing invoices associated with this webhosting service.
//
charge_invoice_rows_t* WebhostingAPI_getWebsiteInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getWebsiteList**
```c
// Get Website Listing
//
// Gets a listing of your webhosting orders and service details.
//
list_t* WebhostingAPI_getWebsiteList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](website_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getWebsitesBackups**
```c
// Get Website Backups
//
// Gets a list of the backups that exist for a website and their sizes.
//
website_backups_t* WebhostingAPI_getWebsitesBackups(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[website_backups_t](website_backups.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getWebsitesLogin**
```c
// Hosting Panel Auto Login
//
// Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
//
website_login_response_t* WebhostingAPI_getWebsitesLogin(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[website_login_response_t](website_login_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_getWebsitesWelcomeEmail**
```c
// Resend Website Welcome Email
//
// Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
//
success_text_response_t* WebhostingAPI_getWebsitesWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_gettWebsiteReverseDns**
```c
// Get Website Reverse DNS
//
// Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
//
reverse_dns_entries_t* WebhostingAPI_gettWebsiteReverseDns(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[reverse_dns_entries_t](reverse_dns_entries.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_postWebsiteBuyIp**
```c
// Update Website IP DNS
//
// Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
//
post_website_buy_ip_200_response_t* WebhostingAPI_postWebsiteBuyIp(apiClient_t *apiClient, int *id, post_website_buy_ip_request_t *post_website_buy_ip_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
**post_website_buy_ip_request** | **[post_website_buy_ip_request_t](post_website_buy_ip_request.md) \*** |  | 

### Return type

[post_website_buy_ip_200_response_t](post_website_buy_ip_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_postWebsiteMigration**
```c
// Request Website Migration
//
// Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
//
post_website_migration_200_response_t* WebhostingAPI_postWebsiteMigration(apiClient_t *apiClient, int *id, post_website_migration_request_t *post_website_migration_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
**post_website_migration_request** | **[post_website_migration_request_t](post_website_migration_request.md) \*** |  | 

### Return type

[post_website_migration_200_response_t](post_website_migration_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_postWebsitesReverseDns**
```c
// Update Website Reverse DNS
//
// Updates the reverse DNS entries for each of the IP addresses for the website.
//
text_response_t* WebhostingAPI_postWebsitesReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 
**reverse_dns_entries** | **[reverse_dns_entries_t](reverse_dns_entries.md) \*** |  | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_putWebsites**
```c
// Validate Webhosting Order
//
// Validates a webhosting order before placing it.
//
void WebhostingAPI_putWebsites(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_updateWebsiteInfo**
```c
// Update Website Order
//
// Updates settings on a webhosting order.
//
success_text_response_t* WebhostingAPI_updateWebsiteInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WebhostingAPI_webhostingCancel**
```c
// Cancel Website
//
// Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
//
webhosting_cancel_200_response_t* WebhostingAPI_webhostingCancel(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[webhosting_cancel_200_response_t](webhosting_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

