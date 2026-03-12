# LICENSES_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_license**](LICENSES_API.md#add_license) | **Post** /licenses/order | Place License Order
[**license_info**](LICENSES_API.md#license_info) | **Get** /licenses/{id} | Get License
[**license_invoices**](LICENSES_API.md#license_invoices) | **Get** /licenses/{id}/invoices | Get License Invoices
[**license_list**](LICENSES_API.md#license_list) | **Get** /licenses | List Licenses
[**license_order_cat_tag_info**](LICENSES_API.md#license_order_cat_tag_info) | **Get** /licenses/order/{catTag} | Get License Order Information for Category
[**licenses_cancel**](LICENSES_API.md#licenses_cancel) | **Delete** /licenses/{id} | Cancel License
[**licenses_welcome_email**](LICENSES_API.md#licenses_welcome_email) | **Get** /licenses/{id}/welcome_email | Resend License Welcome Email
[**new_license**](LICENSES_API.md#new_license) | **Get** /licenses/order | Get License Order Information
[**post_license_change_ip**](LICENSES_API.md#post_license_change_ip) | **Post** /licenses/{id}/change_ip | Change License IP
[**put_licenses**](LICENSES_API.md#put_licenses) | **Put** /licenses/order | Validate License Order
[**update_license_info**](LICENSES_API.md#update_license_info) | **Post** /licenses/{id} | Update License


# **add_license**
> add_license 


Place License Order

Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.


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

# **license_info**
> license_info (id: INTEGER_32 ): detachable LICENSE


Get License

Returns detailed information about a specific license including its type, IP assignment, and status.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null]

### Return type

[**LICENSE**](License.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **license_invoices**
> license_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get License Invoices

Returns the billing invoices associated with this license service.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **license_list**
> license_list : detachable LIST [LICENSE_ROW]


List Licenses

Returns all software license services on the account with their current status and IP assignments.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [LICENSE_ROW]**](LicenseRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **license_order_cat_tag_info**
> license_order_cat_tag_info (cat_tag: STRING_32 )


Get License Order Information for Category

Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cat_tag** | **STRING_32**| The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **licenses_cancel**
> licenses_cancel (id: INTEGER_32 ): detachable LICENSES_CANCEL_200_RESPONSE


Cancel License

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null]

### Return type

[**LICENSES_CANCEL_200_RESPONSE**](licensesCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **licenses_welcome_email**
> licenses_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend License Welcome Email

Resends the welcome email for the license service. The email contains the license key and activation instructions.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_license**
> new_license : detachable LICENSES_ORDER


Get License Order Information

Retrieves available license types, categories, and pricing for ordering a new license.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LICENSES_ORDER**](LicensesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_license_change_ip**
> post_license_change_ip (id: INTEGER_32 ; ip_object: IP_OBJECT ): detachable SUCCESS_TEXT_RESPONSE


Change License IP

Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null]
 **ip_object** | [**IP_OBJECT**](IP_OBJECT.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_licenses**
> put_licenses 


Validate License Order

Validates a license order before placing it. Use this to check for errors before committing to a purchase.


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

# **update_license_info**
> update_license_info (id: STRING_32 )


Update License

Updates settings on a license service such as its assigned IP.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

