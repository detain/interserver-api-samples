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


<a name="addLicense"></a>
# **addLicense**
> ServiceOrderPostResponse addLicense()

Place License Order

    Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](../Models/ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLicenseInfo"></a>
# **getLicenseInfo**
> License getLicenseInfo(id)

Get License

    Returns detailed information about a specific license including its type, IP assignment, and status.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null] |

### Return type

[**License**](../Models/License.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLicenseInvoices"></a>
# **getLicenseInvoices**
> ChargeInvoiceRows getLicenseInvoices(id)

Get License Invoices

    Returns the billing invoices associated with this license service.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLicenseList"></a>
# **getLicenseList**
> List getLicenseList()

List Licenses

    Returns all software license services on the account with their current status and IP assignments.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/LicenseRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLicenseOrderCatTagInfo"></a>
# **getLicenseOrderCatTagInfo**
> getLicenseOrderCatTagInfo(catTag)

Get License Order Information for Category

    Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **catTag** | **String**| The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getLicensesWelcomeEmail"></a>
# **getLicensesWelcomeEmail**
> SuccessTextResponse getLicensesWelcomeEmail(id)

Resend License Welcome Email

    Resends the welcome email for the license service. The email contains the license key and activation instructions.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewLicense"></a>
# **getNewLicense**
> LicensesOrder getNewLicense()

Get License Order Information

    Retrieves available license types, categories, and pricing for ordering a new license.

### Parameters
This endpoint does not need any parameter.

### Return type

[**LicensesOrder**](../Models/LicensesOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="licensesCancel"></a>
# **licensesCancel**
> licensesCancel_200_response licensesCancel(id)

Cancel License

    Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null] |

### Return type

[**licensesCancel_200_response**](../Models/licensesCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postLicenseChangeIp"></a>
# **postLicenseChangeIp**
> SuccessTextResponse postLicenseChangeIp(id, IpObject)

Change License IP

    Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null] |
| **IpObject** | [**IpObject**](../Models/IpObject.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="putLicenses"></a>
# **putLicenses**
> putLicenses()

Validate License Order

    Validates a license order before placing it. Use this to check for errors before committing to a purchase.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="updateLicenseInfo"></a>
# **updateLicenseInfo**
> SuccessTextResponse updateLicenseInfo(id)

Update License

    Updates settings on a license service such as its assigned IP.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

