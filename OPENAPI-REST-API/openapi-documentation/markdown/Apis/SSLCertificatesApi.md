# SSLCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addSsl**](SSLCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order |
| [**getNewSsl**](SSLCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information |
| [**getSslInfo**](SSLCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info |
| [**getSslInvoices**](SSLCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices |
| [**getSslList**](SSLCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs |
| [**getSslWelcomeEmail**](SSLCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email |
| [**putSsl**](SSLCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order |
| [**sslCancel**](SSLCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service |
| [**updateSslInfo**](SSLCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order |


<a name="addSsl"></a>
# **addSsl**
> ServiceOrderPostResponse addSsl()

Place SSL Cert Order

    Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](../Models/ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewSsl"></a>
# **getNewSsl**
> Object getNewSsl()

SSL Cert Ordering Information

    Retrieves available SSL certificate types and pricing for ordering.

### Parameters
This endpoint does not need any parameter.

### Return type

**Object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSslInfo"></a>
# **getSslInfo**
> Object getSslInfo(id)

Get SSL Cert Info

    Returns detailed information about a specific SSL certificate including its domain and expiration.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| SSL certificate ID number. | [default to null] |

### Return type

**Object**

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSslInvoices"></a>
# **getSslInvoices**
> ChargeInvoiceRows getSslInvoices(id)

Get SSL Cert Invoices

    Returns the billing invoices associated with this SSL certificate.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| SSL Cert ID number | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSslList"></a>
# **getSslList**
> getSslList()

List SSL Certs

    Returns all SSL certificate services on the account with their current status.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getSslWelcomeEmail"></a>
# **getSslWelcomeEmail**
> SuccessTextResponse getSslWelcomeEmail(id)

Resend SSL Welcome Email

    Resends the welcome email for the order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| SSL Cert ID number | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="putSsl"></a>
# **putSsl**
> putSsl()

Validate SSL Cert Order

    Validates an SSL certificate order before placing it.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="sslCancel"></a>
# **sslCancel**
> sslCancel_200_response sslCancel(id)

Cancel SSL Certificate Service

    Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| SSL Cert ID number | [default to null] |

### Return type

[**sslCancel_200_response**](../Models/sslCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateSslInfo"></a>
# **updateSslInfo**
> SuccessTextResponse updateSslInfo(id)

Update SSL Cert Order

    Updates settings on an SSL certificate order.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| SSL certificate ID number. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

