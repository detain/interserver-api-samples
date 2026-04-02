# SslCertificatesApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addSsl**](SslCertificatesApi.md#addSsl) | **POST** /ssl/order | Place SSL Cert Order |
| [**getNewSsl**](SslCertificatesApi.md#getNewSsl) | **GET** /ssl/order | SSL Cert Ordering Information |
| [**getSslInfo**](SslCertificatesApi.md#getSslInfo) | **GET** /ssl/{id} | Get SSL Cert Info |
| [**getSslInvoices**](SslCertificatesApi.md#getSslInvoices) | **GET** /ssl/{id}/invoices | Get SSL Cert Invoices |
| [**getSslList**](SslCertificatesApi.md#getSslList) | **GET** /ssl | List SSL Certs |
| [**getSslWelcomeEmail**](SslCertificatesApi.md#getSslWelcomeEmail) | **GET** /ssl/{id}/welcome_email | Resend SSL Welcome Email |
| [**putSsl**](SslCertificatesApi.md#putSsl) | **PUT** /ssl/order | Validate SSL Cert Order |
| [**sslCancel**](SslCertificatesApi.md#sslCancel) | **DELETE** /ssl/{id} | Cancel SSL Certificate Service |
| [**updateSslInfo**](SslCertificatesApi.md#updateSslInfo) | **POST** /ssl/{id} | Update SSL Cert Order |


## Creating SslCertificatesApi

To initiate an instance of `SslCertificatesApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.SslCertificatesApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(SslCertificatesApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    SslCertificatesApi sslCertificatesApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addSsl"></a>
# **addSsl**
```java
Mono<ServiceOrderPostResponse> SslCertificatesApi.addSsl()
```

Place SSL Cert Order

Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.



### Return type
[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewSsl"></a>
# **getNewSsl**
```java
Mono<Object> SslCertificatesApi.getNewSsl()
```

SSL Cert Ordering Information

Retrieves available SSL certificate types and pricing for ordering.



### Return type
`Object`

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getSslInfo"></a>
# **getSslInfo**
```java
Mono<Object> SslCertificatesApi.getSslInfo(id)
```

Get SSL Cert Info

Returns detailed information about a specific SSL certificate including its domain and expiration.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| SSL certificate ID number. | |


### Return type
`Object`

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getSslInvoices"></a>
# **getSslInvoices**
```java
Mono<ChargeInvoiceRows> SslCertificatesApi.getSslInvoices(id)
```

Get SSL Cert Invoices

Returns the billing invoices associated with this SSL certificate.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| SSL Cert ID number | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getSslList"></a>
# **getSslList**
```java
Mono<Void> SslCertificatesApi.getSslList()
```

List SSL Certs

Returns all SSL certificate services on the account with their current status.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getSslWelcomeEmail"></a>
# **getSslWelcomeEmail**
```java
Mono<SuccessTextResponse> SslCertificatesApi.getSslWelcomeEmail(id)
```

Resend SSL Welcome Email

Resends the welcome email for the order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| SSL Cert ID number | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="putSsl"></a>
# **putSsl**
```java
Mono<Void> SslCertificatesApi.putSsl()
```

Validate SSL Cert Order

Validates an SSL certificate order before placing it.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="sslCancel"></a>
# **sslCancel**
```java
Mono<SslCancel200Response> SslCertificatesApi.sslCancel(id)
```

Cancel SSL Certificate Service

Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| SSL Cert ID number | |


### Return type
[**SslCancel200Response**](SslCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateSslInfo"></a>
# **updateSslInfo**
```java
Mono<SuccessTextResponse> SslCertificatesApi.updateSslInfo(id)
```

Update SSL Cert Order

Updates settings on an SSL certificate order.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| SSL certificate ID number. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

