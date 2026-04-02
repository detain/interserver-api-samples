# .SSLCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addSsl**](SSLCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order
[**getNewSsl**](SSLCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information
[**getSslInfo**](SSLCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info
[**getSslInvoices**](SSLCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices
[**getSslList**](SSLCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs
[**getSslWelcomeEmail**](SSLCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email
[**putSsl**](SSLCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order
[**sslCancel**](SSLCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service
[**updateSslInfo**](SSLCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order


# **addSsl**
> ServiceOrderPostResponse addSsl()

Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request = {};

const data = await apiInstance.addSsl(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**ServiceOrderPostResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getNewSsl**
> any getNewSsl()

Retrieves available SSL certificate types and pricing for ordering.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request = {};

const data = await apiInstance.getNewSsl(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**any**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Available SSL certificate types and pricing for ordering. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getSslInfo**
> any getSslInfo()

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';
import type { SSLCertificatesApiGetSslInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request: SSLCertificatesApiGetSslInfoRequest = {
    // SSL certificate ID number.
  id: 1,
};

const data = await apiInstance.getSslInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | SSL certificate ID number. | defaults to undefined


### Return type

**any**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Detailed SSL certificate information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getSslInvoices**
> ChargeInvoiceRows getSslInvoices()

Returns the billing invoices associated with this SSL certificate.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';
import type { SSLCertificatesApiGetSslInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request: SSLCertificatesApiGetSslInvoicesRequest = {
    // SSL Cert ID number
  id: 1,
};

const data = await apiInstance.getSslInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | SSL Cert ID number | defaults to undefined


### Return type

**ChargeInvoiceRows**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get Invoices response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getSslList**
> void getSslList()

Returns all SSL certificate services on the account with their current status.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request = {};

const data = await apiInstance.getSslList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;SSL&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getSslWelcomeEmail**
> SuccessTextResponse getSslWelcomeEmail()

Resends the welcome email for the order.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';
import type { SSLCertificatesApiGetSslWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request: SSLCertificatesApiGetSslWelcomeEmailRequest = {
    // SSL Cert ID number
  id: 1,
};

const data = await apiInstance.getSslWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | SSL Cert ID number | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **putSsl**
> void putSsl()

Validates an SSL certificate order before placing it.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request = {};

const data = await apiInstance.putSsl(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validate SSL Order response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **sslCancel**
> SslCancel200Response sslCancel()

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';
import type { SSLCertificatesApiSslCancelRequest } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request: SSLCertificatesApiSslCancelRequest = {
    // SSL Cert ID number
  id: 1,
};

const data = await apiInstance.sslCancel(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | SSL Cert ID number | defaults to undefined


### Return type

**SslCancel200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | SSL Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateSslInfo**
> SuccessTextResponse updateSslInfo()

Updates settings on an SSL certificate order.

### Example


```typescript
import { createConfiguration, SSLCertificatesApi } from '';
import type { SSLCertificatesApiUpdateSslInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new SSLCertificatesApi(configuration);

const request: SSLCertificatesApiUpdateSslInfoRequest = {
    // SSL certificate ID number.
  id: "id_example",
};

const data = await apiInstance.updateSslInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | SSL certificate ID number. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


