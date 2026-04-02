# LicensesApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addLicense**](LicensesApi.md#addLicense) | **POST** /licenses/order | Place License Order |
| [**getLicenseInfo**](LicensesApi.md#getLicenseInfo) | **GET** /licenses/{id} | Get License |
| [**getLicenseInvoices**](LicensesApi.md#getLicenseInvoices) | **GET** /licenses/{id}/invoices | Get License Invoices |
| [**getLicenseList**](LicensesApi.md#getLicenseList) | **GET** /licenses | List Licenses |
| [**getLicenseOrderCatTagInfo**](LicensesApi.md#getLicenseOrderCatTagInfo) | **GET** /licenses/order/{catTag} | Get License Order Information for Category |
| [**getLicensesWelcomeEmail**](LicensesApi.md#getLicensesWelcomeEmail) | **GET** /licenses/{id}/welcome_email | Resend License Welcome Email |
| [**getNewLicense**](LicensesApi.md#getNewLicense) | **GET** /licenses/order | Get License Order Information |
| [**licensesCancel**](LicensesApi.md#licensesCancel) | **DELETE** /licenses/{id} | Cancel License |
| [**postLicenseChangeIp**](LicensesApi.md#postLicenseChangeIp) | **POST** /licenses/{id}/change_ip | Change License IP |
| [**putLicenses**](LicensesApi.md#putLicenses) | **PUT** /licenses/order | Validate License Order |
| [**updateLicenseInfo**](LicensesApi.md#updateLicenseInfo) | **POST** /licenses/{id} | Update License |


## Creating LicensesApi

To initiate an instance of `LicensesApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.LicensesApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(LicensesApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    LicensesApi licensesApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addLicense"></a>
# **addLicense**
```java
Mono<ServiceOrderPostResponse> LicensesApi.addLicense()
```

Place License Order

Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.



### Return type
[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getLicenseInfo"></a>
# **getLicenseInfo**
```java
Mono<License> LicensesApi.getLicenseInfo(id)
```

Get License

Returns detailed information about a specific license including its type, IP assignment, and status.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |


### Return type
[**License**](License.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getLicenseInvoices"></a>
# **getLicenseInvoices**
```java
Mono<ChargeInvoiceRows> LicensesApi.getLicenseInvoices(id)
```

Get License Invoices

Returns the billing invoices associated with this license service.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getLicenseList"></a>
# **getLicenseList**
```java
Mono<List<LicenseRow>> LicensesApi.getLicenseList()
```

List Licenses

Returns all software license services on the account with their current status and IP assignments.



### Return type
[**List&lt;LicenseRow&gt;**](LicenseRow.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getLicenseOrderCatTagInfo"></a>
# **getLicenseOrderCatTagInfo**
```java
Mono<Void> LicensesApi.getLicenseOrderCatTagInfo(catTag)
```

Get License Order Information for Category

Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **catTag** | `String`| The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getLicensesWelcomeEmail"></a>
# **getLicensesWelcomeEmail**
```java
Mono<SuccessTextResponse> LicensesApi.getLicensesWelcomeEmail(id)
```

Resend License Welcome Email

Resends the welcome email for the license service. The email contains the license key and activation instructions.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewLicense"></a>
# **getNewLicense**
```java
Mono<LicensesOrder> LicensesApi.getNewLicense()
```

Get License Order Information

Retrieves available license types, categories, and pricing for ordering a new license.



### Return type
[**LicensesOrder**](LicensesOrder.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="licensesCancel"></a>
# **licensesCancel**
```java
Mono<LicensesCancel200Response> LicensesApi.licensesCancel(id)
```

Cancel License

Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |


### Return type
[**LicensesCancel200Response**](LicensesCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postLicenseChangeIp"></a>
# **postLicenseChangeIp**
```java
Mono<SuccessTextResponse> LicensesApi.postLicenseChangeIp(idipObject)
```

Change License IP

Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |
| **ipObject** | [**IpObject**](IpObject.md)|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="putLicenses"></a>
# **putLicenses**
```java
Mono<Void> LicensesApi.putLicenses()
```

Validate License Order

Validates a license order before placing it. Use this to check for errors before committing to a purchase.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="updateLicenseInfo"></a>
# **updateLicenseInfo**
```java
Mono<SuccessTextResponse> LicensesApi.updateLicenseInfo(id)
```

Update License

Updates settings on a license service such as its assigned IP.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

