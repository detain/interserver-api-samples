# FLOATINGIPS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_floating_ip**](FLOATINGIPS_API.md#add_floating_ip) | **Post** /floating_ips/order | Place Floating IP Order
[**floating_ip_info**](FLOATINGIPS_API.md#floating_ip_info) | **Get** /floating_ips/{id} | View Floating IP
[**floating_ip_invoices**](FLOATINGIPS_API.md#floating_ip_invoices) | **Get** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**floating_ips_cancel**](FLOATINGIPS_API.md#floating_ips_cancel) | **Delete** /floating_ips/{id} | Cancel Floating IP
[**floating_ips_list**](FLOATINGIPS_API.md#floating_ips_list) | **Get** /floating_ips | List Floating IPs
[**floating_ips_welcome_email**](FLOATINGIPS_API.md#floating_ips_welcome_email) | **Get** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**new_floating_ip**](FLOATINGIPS_API.md#new_floating_ip) | **Get** /floating_ips/order | Get Floating IP Ordering Information
[**post_floating_ips_change_ip**](FLOATINGIPS_API.md#post_floating_ips_change_ip) | **Post** /floating_ips/{id}/change_ip | Change Floating IP Target
[**put_floating_ips**](FLOATINGIPS_API.md#put_floating_ips) | **Put** /floating_ips/order | Validate Floating IP Order
[**update_floating_ip_info**](FLOATINGIPS_API.md#update_floating_ip_info) | **Post** /floating_ips/{id} | Update Floating IP


# **add_floating_ip**
> add_floating_ip 


Place Floating IP Order

Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.


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

# **floating_ip_info**
> floating_ip_info (id: INTEGER_32 )


View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **floating_ip_invoices**
> floating_ip_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **floating_ips_cancel**
> floating_ips_cancel (id: INTEGER_32 ): detachable FLOATING_IPS_CANCEL_200_RESPONSE


Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null]

### Return type

[**FLOATING_IPS_CANCEL_200_RESPONSE**](floating_ipsCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **floating_ips_list**
> floating_ips_list 


List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.


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

# **floating_ips_welcome_email**
> floating_ips_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_floating_ip**
> new_floating_ip 


Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.


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

# **post_floating_ips_change_ip**
> post_floating_ips_change_ip (id: INTEGER_32 ; ip: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null]
 **ip** | **STRING_32**| IP Address | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_floating_ips**
> put_floating_ips 


Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.


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

# **update_floating_ip_info**
> update_floating_ip_info (id: STRING_32 )


Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

