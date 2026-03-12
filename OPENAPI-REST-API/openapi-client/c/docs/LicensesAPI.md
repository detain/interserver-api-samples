# LicensesAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LicensesAPI_addLicense**](LicensesAPI.md#LicensesAPI_addLicense) | **POST** /licenses/order | Place License Order
[**LicensesAPI_getLicenseInfo**](LicensesAPI.md#LicensesAPI_getLicenseInfo) | **GET** /licenses/{id} | Get License
[**LicensesAPI_getLicenseInvoices**](LicensesAPI.md#LicensesAPI_getLicenseInvoices) | **GET** /licenses/{id}/invoices | Get License Invoices
[**LicensesAPI_getLicenseList**](LicensesAPI.md#LicensesAPI_getLicenseList) | **GET** /licenses | List Licenses
[**LicensesAPI_getLicenseOrderCatTagInfo**](LicensesAPI.md#LicensesAPI_getLicenseOrderCatTagInfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category
[**LicensesAPI_getLicensesWelcomeEmail**](LicensesAPI.md#LicensesAPI_getLicensesWelcomeEmail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email
[**LicensesAPI_getNewLicense**](LicensesAPI.md#LicensesAPI_getNewLicense) | **GET** /licenses/order | Get License Order Information
[**LicensesAPI_licensesCancel**](LicensesAPI.md#LicensesAPI_licensesCancel) | **DELETE** /licenses/{id} | Cancel License
[**LicensesAPI_postLicenseChangeIp**](LicensesAPI.md#LicensesAPI_postLicenseChangeIp) | **POST** /licenses/{id}/change_ip | Change License IP
[**LicensesAPI_putLicenses**](LicensesAPI.md#LicensesAPI_putLicenses) | **PUT** /licenses/order | Validate License Order
[**LicensesAPI_updateLicenseInfo**](LicensesAPI.md#LicensesAPI_updateLicenseInfo) | **POST** /licenses/{id} | Update License


# **LicensesAPI_addLicense**
```c
// Place License Order
//
// Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
//
void LicensesAPI_addLicense(apiClient_t *apiClient);
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

# **LicensesAPI_getLicenseInfo**
```c
// Get License
//
// Returns detailed information about a specific license including its type, IP assignment, and status.
//
license_t* LicensesAPI_getLicenseInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

### Return type

[license_t](license.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_getLicenseInvoices**
```c
// Get License Invoices
//
// Returns the billing invoices associated with this license service.
//
charge_invoice_rows_t* LicensesAPI_getLicenseInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_getLicenseList**
```c
// List Licenses
//
// Returns all software license services on the account with their current status and IP assignments.
//
list_t* LicensesAPI_getLicenseList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](license_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_getLicenseOrderCatTagInfo**
```c
// Get License Order Information for Category
//
// Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
//
void LicensesAPI_getLicenseOrderCatTagInfo(apiClient_t *apiClient, char *catTag);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**catTag** | **char \*** | The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_getLicensesWelcomeEmail**
```c
// Resend License Welcome Email
//
// Resends the welcome email for the license service. The email contains the license key and activation instructions.
//
success_text_response_t* LicensesAPI_getLicensesWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_getNewLicense**
```c
// Get License Order Information
//
// Retrieves available license types, categories, and pricing for ordering a new license.
//
licenses_order_t* LicensesAPI_getNewLicense(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[licenses_order_t](licenses_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_licensesCancel**
```c
// Cancel License
//
// Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
//
licenses_cancel_200_response_t* LicensesAPI_licensesCancel(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

### Return type

[licenses_cancel_200_response_t](licenses_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_postLicenseChangeIp**
```c
// Change License IP
//
// Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
//
success_text_response_t* LicensesAPI_postLicenseChangeIp(apiClient_t *apiClient, int *id, ip_object_t *ip_object);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 
**ip_object** | **[ip_object_t](ip_object.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_putLicenses**
```c
// Validate License Order
//
// Validates a license order before placing it. Use this to check for errors before committing to a purchase.
//
void LicensesAPI_putLicenses(apiClient_t *apiClient);
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

# **LicensesAPI_updateLicenseInfo**
```c
// Update License
//
// Updates settings on a license service such as its assigned IP.
//
void LicensesAPI_updateLicenseInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

