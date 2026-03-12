# FloatingIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addFloatingIp**](FloatingIpsApi.md#addFloatingIp) | **POST** /floating_ips/order | Place Floating IP Order |
| [**floatingIpsCancel**](FloatingIpsApi.md#floatingIpsCancel) | **DELETE** /floating_ips/{id} | Cancel Floating IP |
| [**getFloatingIpInfo**](FloatingIpsApi.md#getFloatingIpInfo) | **GET** /floating_ips/{id} | View Floating IP |
| [**getFloatingIpInvoices**](FloatingIpsApi.md#getFloatingIpInvoices) | **GET** /floating_ips/{id}/invoices | Get Floating IP Invoices |
| [**getFloatingIpsList**](FloatingIpsApi.md#getFloatingIpsList) | **GET** /floating_ips | List Floating IPs |
| [**getFloatingIpsWelcomeEmail**](FloatingIpsApi.md#getFloatingIpsWelcomeEmail) | **GET** /floating_ips/{id}/welcome_email | Resend Floating IPs Welcome Email |
| [**getNewFloatingIp**](FloatingIpsApi.md#getNewFloatingIp) | **GET** /floating_ips/order | Get Floating IP Ordering Information |
| [**postFloatingIpsChangeIp**](FloatingIpsApi.md#postFloatingIpsChangeIp) | **POST** /floating_ips/{id}/change_ip | Change Floating IP Target |
| [**putFloatingIps**](FloatingIpsApi.md#putFloatingIps) | **PUT** /floating_ips/order | Validate Floating IP Order |
| [**updateFloatingIpInfo**](FloatingIpsApi.md#updateFloatingIpInfo) | **POST** /floating_ips/{id} | Update Floating IP |


## Creating FloatingIpsApi

To initiate an instance of `FloatingIpsApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.FloatingIpsApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(FloatingIpsApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    FloatingIpsApi floatingIpsApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addFloatingIp"></a>
# **addFloatingIp**
```java
Mono<Void> FloatingIpsApi.addFloatingIp()
```

Place Floating IP Order

Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="floatingIpsCancel"></a>
# **floatingIpsCancel**
```java
Mono<FloatingIpsCancel200Response> FloatingIpsApi.floatingIpsCancel(id)
```

Cancel Floating IP

Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | |


### Return type
[**FloatingIpsCancel200Response**](FloatingIpsCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getFloatingIpInfo"></a>
# **getFloatingIpInfo**
```java
Mono<Void> FloatingIpsApi.getFloatingIpInfo(id)
```

View Floating IP

Returns detailed information about a specific Floating IP service including its current target IP assignment.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getFloatingIpInvoices"></a>
# **getFloatingIpInvoices**
```java
Mono<ChargeInvoiceRows> FloatingIpsApi.getFloatingIpInvoices(id)
```

Get Floating IP Invoices

Returns the billing invoices associated with this Floating IP service.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getFloatingIpsList"></a>
# **getFloatingIpsList**
```java
Mono<Void> FloatingIpsApi.getFloatingIpsList()
```

List Floating IPs

Returns all Floating IP services on the account with their current status and assignment details.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getFloatingIpsWelcomeEmail"></a>
# **getFloatingIpsWelcomeEmail**
```java
Mono<SuccessTextResponse> FloatingIpsApi.getFloatingIpsWelcomeEmail(id)
```

Resend Floating IPs Welcome Email

Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewFloatingIp"></a>
# **getNewFloatingIp**
```java
Mono<Void> FloatingIpsApi.getNewFloatingIp()
```

Get Floating IP Ordering Information

Retrieves available options and pricing for ordering a new Floating IP.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postFloatingIpsChangeIp"></a>
# **postFloatingIpsChangeIp**
```java
Mono<SuccessTextResponse> FloatingIpsApi.postFloatingIpsChangeIp(idip)
```

Change Floating IP Target

Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | |
| **ip** | `String`| IP Address | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="putFloatingIps"></a>
# **putFloatingIps**
```java
Mono<Void> FloatingIpsApi.putFloatingIps()
```

Validate Floating IP Order

Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateFloatingIpInfo"></a>
# **updateFloatingIpInfo**
```java
Mono<Void> FloatingIpsApi.updateFloatingIpInfo(id)
```

Update Floating IP

Updates settings on a Floating IP service, such as its label or configuration metadata.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

