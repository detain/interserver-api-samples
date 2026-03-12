# FloatingIPsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addFloatingIp**](FloatingIPsApi.md#addFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order |
| [**floatingIpsCancel**](FloatingIPsApi.md#floatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP |
| [**getFloatingIpInfo**](FloatingIPsApi.md#getFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP |
| [**getFloatingIpInvoices**](FloatingIPsApi.md#getFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices |
| [**getFloatingIpsList**](FloatingIPsApi.md#getFloatingIpsList) | **GET** /floating_ips | List Floating IPs |
| [**getFloatingIpsWelcomeEmail**](FloatingIPsApi.md#getFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email |
| [**getNewFloatingIp**](FloatingIPsApi.md#getNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information |
| [**postFloatingIpsChangeIp**](FloatingIPsApi.md#postFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target |
| [**putFloatingIps**](FloatingIPsApi.md#putFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order |
| [**updateFloatingIpInfo**](FloatingIPsApi.md#updateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP |


<a name="addFloatingIp"></a>
# **addFloatingIp**
> addFloatingIp()

Place Floating IP Order

    Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="floatingIpsCancel"></a>
# **floatingIpsCancel**
> floating_ipsCancel_200_response floatingIpsCancel(id)

Cancel Floating IP

    Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null] |

### Return type

[**floating_ipsCancel_200_response**](../Models/floating_ipsCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFloatingIpInfo"></a>
# **getFloatingIpInfo**
> getFloatingIpInfo(id)

View Floating IP

    Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFloatingIpInvoices"></a>
# **getFloatingIpInvoices**
> ChargeInvoiceRows getFloatingIpInvoices(id)

Get Floating IP Invoices

    Returns the billing invoices associated with this Floating IP service.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFloatingIpsList"></a>
# **getFloatingIpsList**
> getFloatingIpsList()

List Floating IPs

    Returns all Floating IP services on the account with their current status and assignment details.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getFloatingIpsWelcomeEmail"></a>
# **getFloatingIpsWelcomeEmail**
> SuccessTextResponse getFloatingIpsWelcomeEmail(id)

Resend Floating IPs Welcome Email

    Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewFloatingIp"></a>
# **getNewFloatingIp**
> getNewFloatingIp()

Get Floating IP Ordering Information

    Retrieves available options and pricing for ordering a new Floating IP.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postFloatingIpsChangeIp"></a>
# **postFloatingIpsChangeIp**
> SuccessTextResponse postFloatingIpsChangeIp(id, ip)

Change Floating IP Target

    Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null] |
| **ip** | **String**| IP Address | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="putFloatingIps"></a>
# **putFloatingIps**
> putFloatingIps()

Validate Floating IP Order

    Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateFloatingIpInfo"></a>
# **updateFloatingIpInfo**
> updateFloatingIpInfo(id)

Update Floating IP

    Updates settings on a Floating IP service, such as its label or configuration metadata.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

