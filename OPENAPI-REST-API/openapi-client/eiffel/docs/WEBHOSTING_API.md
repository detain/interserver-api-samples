# WEBHOSTING_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_website**](WEBHOSTING_API.md#add_website) | **Post** /websites/order | Place Website Order
[**gett_website_reverse_dns**](WEBHOSTING_API.md#gett_website_reverse_dns) | **Get** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**new_website**](WEBHOSTING_API.md#new_website) | **Get** /websites/order | Website Ordering Information
[**post_website_buy_ip**](WEBHOSTING_API.md#post_website_buy_ip) | **Post** /websites/{id}/buy_ip | Update Website IP DNS
[**post_website_migration**](WEBHOSTING_API.md#post_website_migration) | **Post** /websites/{id}/migration | Request Website Migration
[**post_websites_reverse_dns**](WEBHOSTING_API.md#post_websites_reverse_dns) | **Post** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**put_websites**](WEBHOSTING_API.md#put_websites) | **Put** /websites/order | Validate Webhosting Order
[**update_website_info**](WEBHOSTING_API.md#update_website_info) | **Post** /websites/{id} | Update Website Order
[**webhosting_cancel**](WEBHOSTING_API.md#webhosting_cancel) | **Delete** /websites/{id} | Cancel Website
[**website_buy_ip**](WEBHOSTING_API.md#website_buy_ip) | **Get** /websites/{id}/buy_ip | Get Website IP Information
[**website_info**](WEBHOSTING_API.md#website_info) | **Get** /websites/{id} | Get Website Order
[**website_invoices**](WEBHOSTING_API.md#website_invoices) | **Get** /websites/{id}/invoices | Get Website Invoices
[**website_list**](WEBHOSTING_API.md#website_list) | **Get** /websites | Get Website Listing
[**websites_backups**](WEBHOSTING_API.md#websites_backups) | **Get** /websites/{id}/backups | Get Website Backups
[**websites_login**](WEBHOSTING_API.md#websites_login) | **Get** /websites/{id}/login | Hosting Panel Auto Login
[**websites_welcome_email**](WEBHOSTING_API.md#websites_welcome_email) | **Get** /websites/{id}/welcome_email | Resend Website Welcome Email


# **add_website**
> add_website : detachable SERVICE_ORDER_POST_RESPONSE


Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SERVICE_ORDER_POST_RESPONSE**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **gett_website_reverse_dns**
> gett_website_reverse_dns (id: INTEGER_32 ): detachable REVERSE_DNS_ENTRIES


Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**REVERSE_DNS_ENTRIES**](ReverseDnsEntries.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_website**
> new_website : detachable WEBSITES_ORDER


Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.


### Parameters
This endpoint does not need any parameter.

### Return type

[**WEBSITES_ORDER**](WebsitesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_website_buy_ip**
> post_website_buy_ip (id: INTEGER_32 ; post_website_buy_ip_request: POST_WEBSITE_BUY_IP_REQUEST ): detachable POST_WEBSITE_BUY_IP_200_RESPONSE


Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]
 **post_website_buy_ip_request** | [**POST_WEBSITE_BUY_IP_REQUEST**](POST_WEBSITE_BUY_IP_REQUEST.md)|  | 

### Return type

[**POST_WEBSITE_BUY_IP_200_RESPONSE**](postWebsiteBuyIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_website_migration**
> post_website_migration (id: INTEGER_32 ; post_website_migration_request: POST_WEBSITE_MIGRATION_REQUEST ): detachable POST_WEBSITE_MIGRATION_200_RESPONSE


Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]
 **post_website_migration_request** | [**POST_WEBSITE_MIGRATION_REQUEST**](POST_WEBSITE_MIGRATION_REQUEST.md)|  | 

### Return type

[**POST_WEBSITE_MIGRATION_200_RESPONSE**](postWebsiteMigration_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_websites_reverse_dns**
> post_websites_reverse_dns (id: INTEGER_32 ; reverse_dns_entries: REVERSE_DNS_ENTRIES ): detachable TEXT_RESPONSE


Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]
 **reverse_dns_entries** | [**REVERSE_DNS_ENTRIES**](REVERSE_DNS_ENTRIES.md)|  | 

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_websites**
> put_websites 


Validate Webhosting Order

Validates a webhosting order before placing it.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_website_info**
> update_website_info (id: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Update Website Order

Updates settings on a webhosting order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **webhosting_cancel**
> webhosting_cancel (id: STRING_32 ): detachable WEBHOSTING_CANCEL_200_RESPONSE


Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**WEBHOSTING_CANCEL_200_RESPONSE**](webhostingCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **website_buy_ip**
> website_buy_ip (id: INTEGER_32 ): detachable GET_WEBSITE_BUY_IP_200_RESPONSE


Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**GET_WEBSITE_BUY_IP_200_RESPONSE**](getWebsiteBuyIp_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **website_info**
> website_info (id: INTEGER_32 ): detachable WEBSITE


Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**WEBSITE**](Website.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **website_invoices**
> website_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get Website Invoices

Returns the billing invoices associated with this webhosting service.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **website_list**
> website_list : detachable LIST [WEBSITE_ROW]


Get Website Listing

Gets a listing of your webhosting orders and service details.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [WEBSITE_ROW]**](WebsiteRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **websites_backups**
> websites_backups (id: INTEGER_32 ): detachable WEBSITE_BACKUPS


Get Website Backups

Gets a list of the backups that exist for a website and their sizes.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**WEBSITE_BACKUPS**](WebsiteBackups.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **websites_login**
> websites_login (id: INTEGER_32 ): detachable WEBSITE_LOGIN_RESPONSE


Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**WEBSITE_LOGIN_RESPONSE**](WebsiteLoginResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **websites_welcome_email**
> websites_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

