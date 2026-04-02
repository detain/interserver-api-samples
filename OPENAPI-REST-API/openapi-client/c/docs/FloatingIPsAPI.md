# FloatingIPsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FloatingIPsAPI_addFloatingIp**](FloatingIPsAPI.md#FloatingIPsAPI_addFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order
[**FloatingIPsAPI_floatingIpsCancel**](FloatingIPsAPI.md#FloatingIPsAPI_floatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP
[**FloatingIPsAPI_getFloatingIpInfo**](FloatingIPsAPI.md#FloatingIPsAPI_getFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP
[**FloatingIPsAPI_getFloatingIpInvoices**](FloatingIPsAPI.md#FloatingIPsAPI_getFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices
[**FloatingIPsAPI_getFloatingIpsList**](FloatingIPsAPI.md#FloatingIPsAPI_getFloatingIpsList) | **GET** /floating_ips | List Floating IPs
[**FloatingIPsAPI_getFloatingIpsWelcomeEmail**](FloatingIPsAPI.md#FloatingIPsAPI_getFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email
[**FloatingIPsAPI_getNewFloatingIp**](FloatingIPsAPI.md#FloatingIPsAPI_getNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information
[**FloatingIPsAPI_postFloatingIpsChangeIp**](FloatingIPsAPI.md#FloatingIPsAPI_postFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target
[**FloatingIPsAPI_putFloatingIps**](FloatingIPsAPI.md#FloatingIPsAPI_putFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order
[**FloatingIPsAPI_updateFloatingIpInfo**](FloatingIPsAPI.md#FloatingIPsAPI_updateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP


# **FloatingIPsAPI_addFloatingIp**
```c
// Place Floating IP Order
//
// Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
//
service_order_post_response_t* FloatingIPsAPI_addFloatingIp(apiClient_t *apiClient);
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

# **FloatingIPsAPI_floatingIpsCancel**
```c
// Cancel Floating IP
//
// Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
//
floating_ips_cancel_200_response_t* FloatingIPsAPI_floatingIpsCancel(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[floating_ips_cancel_200_response_t](floating_ips_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FloatingIPsAPI_getFloatingIpInfo**
```c
// View Floating IP
//
// Returns detailed information about a specific Floating IP service including its current target IP assignment.
//
object_t* FloatingIPsAPI_getFloatingIpInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[object_t](object.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FloatingIPsAPI_getFloatingIpInvoices**
```c
// Get Floating IP Invoices
//
// Returns the billing invoices associated with this Floating IP service.
//
charge_invoice_rows_t* FloatingIPsAPI_getFloatingIpInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FloatingIPsAPI_getFloatingIpsList**
```c
// List Floating IPs
//
// Returns all Floating IP services on the account with their current status and assignment details.
//
void FloatingIPsAPI_getFloatingIpsList(apiClient_t *apiClient);
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

# **FloatingIPsAPI_getFloatingIpsWelcomeEmail**
```c
// Resend Floating IPs Welcome Email
//
// Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
//
success_text_response_t* FloatingIPsAPI_getFloatingIpsWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FloatingIPsAPI_getNewFloatingIp**
```c
// Get Floating IP Ordering Information
//
// Retrieves available options and pricing for ordering a new Floating IP.
//
object_t* FloatingIPsAPI_getNewFloatingIp(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[object_t](object.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FloatingIPsAPI_postFloatingIpsChangeIp**
```c
// Change Floating IP Target
//
// Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
//
success_text_response_t* FloatingIPsAPI_postFloatingIpsChangeIp(apiClient_t *apiClient, int *id, char *ip);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 
**ip** | **char \*** | IP Address | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FloatingIPsAPI_putFloatingIps**
```c
// Validate Floating IP Order
//
// Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
//
void FloatingIPsAPI_putFloatingIps(apiClient_t *apiClient);
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

# **FloatingIPsAPI_updateFloatingIpInfo**
```c
// Update Floating IP
//
// Updates settings on a Floating IP service, such as its label or configuration metadata.
//
success_text_response_t* FloatingIPsAPI_updateFloatingIpInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

