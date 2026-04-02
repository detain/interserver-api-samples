# WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addWebsite**](WebhostingApi.md#addWebsite) | **POST** /websites/order | Place Website Order
[**getNewWebsite**](WebhostingApi.md#getNewWebsite) | **GET** /websites/order | Website Ordering Information
[**getWebsiteBuyIp**](WebhostingApi.md#getWebsiteBuyIp) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**getWebsiteInfo**](WebhostingApi.md#getWebsiteInfo) | **GET** /websites/{id} | Get Website Order
[**getWebsiteInvoices**](WebhostingApi.md#getWebsiteInvoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**getWebsiteList**](WebhostingApi.md#getWebsiteList) | **GET** /websites | Get Website Listing
[**getWebsitesBackups**](WebhostingApi.md#getWebsitesBackups) | **GET** /websites/{id}/backups | Get Website Backups
[**getWebsitesLogin**](WebhostingApi.md#getWebsitesLogin) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**getWebsitesWelcomeEmail**](WebhostingApi.md#getWebsitesWelcomeEmail) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**gettWebsiteReverseDns**](WebhostingApi.md#gettWebsiteReverseDns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**postWebsiteBuyIp**](WebhostingApi.md#postWebsiteBuyIp) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**postWebsiteMigration**](WebhostingApi.md#postWebsiteMigration) | **POST** /websites/{id}/migration | Request Website Migration
[**postWebsitesReverseDns**](WebhostingApi.md#postWebsitesReverseDns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**putWebsites**](WebhostingApi.md#putWebsites) | **PUT** /websites/order | Validate Webhosting Order
[**updateWebsiteInfo**](WebhostingApi.md#updateWebsiteInfo) | **POST** /websites/{id} | Update Website Order
[**webhostingCancel**](WebhostingApi.md#webhostingCancel) | **DELETE** /websites/{id} | Cancel Website

<a name="addWebsite"></a>
# **addWebsite**
> ServiceOrderPostResponse addWebsite()

Place Website Order

Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
try {
    val result : ServiceOrderPostResponse = apiInstance.addWebsite()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#addWebsite")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#addWebsite")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewWebsite"></a>
# **getNewWebsite**
> WebsitesOrder getNewWebsite()

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
try {
    val result : WebsitesOrder = apiInstance.getNewWebsite()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getNewWebsite")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getNewWebsite")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWebsiteBuyIp"></a>
# **getWebsiteBuyIp**
> InlineResponse20024 getWebsiteBuyIp(id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : InlineResponse20024 = apiInstance.getWebsiteBuyIp(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteBuyIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteBuyIp")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**InlineResponse20024**](InlineResponse20024.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWebsiteInfo"></a>
# **getWebsiteInfo**
> Website getWebsiteInfo(id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : Website = apiInstance.getWebsiteInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**Website**](Website.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWebsiteInvoices"></a>
# **getWebsiteInvoices**
> ChargeInvoiceRows getWebsiteInvoices(id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : ChargeInvoiceRows = apiInstance.getWebsiteInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteInvoices")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWebsiteList"></a>
# **getWebsiteList**
> kotlin.Array&lt;WebsiteRow&gt; getWebsiteList()

Get Website Listing

Gets a listing of your webhosting orders and service details.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
try {
    val result : kotlin.Array<WebsiteRow> = apiInstance.getWebsiteList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsiteList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsiteList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.Array&lt;WebsiteRow&gt;**](WebsiteRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data

<a name="getWebsitesBackups"></a>
# **getWebsitesBackups**
> WebsiteBackups getWebsitesBackups(id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : WebsiteBackups = apiInstance.getWebsitesBackups(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsitesBackups")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsitesBackups")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWebsitesLogin"></a>
# **getWebsitesLogin**
> WebsiteLoginResponse getWebsitesLogin(id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : WebsiteLoginResponse = apiInstance.getWebsitesLogin(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsitesLogin")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsitesLogin")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWebsitesWelcomeEmail"></a>
# **getWebsitesWelcomeEmail**
> SuccessTextResponse getWebsitesWelcomeEmail(id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : SuccessTextResponse = apiInstance.getWebsitesWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#getWebsitesWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#getWebsitesWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="gettWebsiteReverseDns"></a>
# **gettWebsiteReverseDns**
> ReverseDnsEntries gettWebsiteReverseDns(id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website&#x27;s IP addresses.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : ReverseDnsEntries = apiInstance.gettWebsiteReverseDns(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#gettWebsiteReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#gettWebsiteReverseDns")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postWebsiteBuyIp"></a>
# **postWebsiteBuyIp**
> InlineResponse20025 postWebsiteBuyIp(body, id)

Update Website IP DNS

Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val body : IdBuyIpBody =  // IdBuyIpBody | 
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : InlineResponse20025 = apiInstance.postWebsiteBuyIp(body, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsiteBuyIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsiteBuyIp")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdBuyIpBody**](IdBuyIpBody.md)|  |
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**InlineResponse20025**](InlineResponse20025.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postWebsiteBuyIp"></a>
# **postWebsiteBuyIp**
> InlineResponse20025 postWebsiteBuyIp(ips, id)

Update Website IP DNS

Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val ips : kotlin.collections.Map<kotlin.String, kotlin.String> =  // kotlin.collections.Map<kotlin.String, kotlin.String> | 
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : InlineResponse20025 = apiInstance.postWebsiteBuyIp(ips, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsiteBuyIp")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsiteBuyIp")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**kotlin.collections.Map&lt;kotlin.String, kotlin.String&gt;**](kotlin.String.md)|  |
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**InlineResponse20025**](InlineResponse20025.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postWebsiteMigration"></a>
# **postWebsiteMigration**
> InlineResponse20026 postWebsiteMigration(body, id)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val body : IdMigrationBody =  // IdMigrationBody | 
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : InlineResponse20026 = apiInstance.postWebsiteMigration(body, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsiteMigration")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsiteMigration")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdMigrationBody**](IdMigrationBody.md)|  |
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**InlineResponse20026**](InlineResponse20026.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postWebsiteMigration"></a>
# **postWebsiteMigration**
> InlineResponse20026 postWebsiteMigration(custPortal, regEmail, password, ctrlPanel, ftpUsername, ftpPassword, siteBusyMig, splReqMig, domainReg, dataMig, domainRegPortal, domainRegEmail, domainRegPassword, id)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val custPortal : kotlin.String = custPortal_example // kotlin.String | 
val regEmail : kotlin.String = regEmail_example // kotlin.String | 
val password : kotlin.String = password_example // kotlin.String | 
val ctrlPanel : kotlin.String = ctrlPanel_example // kotlin.String | 
val ftpUsername : kotlin.String = ftpUsername_example // kotlin.String | 
val ftpPassword : kotlin.String = ftpPassword_example // kotlin.String | 
val siteBusyMig : kotlin.String = siteBusyMig_example // kotlin.String | 
val splReqMig : kotlin.String = splReqMig_example // kotlin.String | 
val domainReg : kotlin.String = domainReg_example // kotlin.String | 
val dataMig : kotlin.String = dataMig_example // kotlin.String | 
val domainRegPortal : kotlin.String = domainRegPortal_example // kotlin.String | 
val domainRegEmail : kotlin.String = domainRegEmail_example // kotlin.String | 
val domainRegPassword : kotlin.String = domainRegPassword_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : InlineResponse20026 = apiInstance.postWebsiteMigration(custPortal, regEmail, password, ctrlPanel, ftpUsername, ftpPassword, siteBusyMig, splReqMig, domainReg, dataMig, domainRegPortal, domainRegEmail, domainRegPassword, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsiteMigration")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsiteMigration")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **custPortal** | **kotlin.String**|  |
 **regEmail** | **kotlin.String**|  |
 **password** | **kotlin.String**|  |
 **ctrlPanel** | **kotlin.String**|  |
 **ftpUsername** | **kotlin.String**|  |
 **ftpPassword** | **kotlin.String**|  |
 **siteBusyMig** | **kotlin.String**|  |
 **splReqMig** | **kotlin.String**|  |
 **domainReg** | **kotlin.String**|  |
 **dataMig** | **kotlin.String**|  |
 **domainRegPortal** | **kotlin.String**|  |
 **domainRegEmail** | **kotlin.String**|  |
 **domainRegPassword** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**InlineResponse20026**](InlineResponse20026.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postWebsitesReverseDns"></a>
# **postWebsitesReverseDns**
> TextResponse postWebsitesReverseDns(body, id)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val body : ReverseDnsEntries =  // ReverseDnsEntries | 
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : TextResponse = apiInstance.postWebsitesReverseDns(body, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsitesReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsitesReverseDns")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  |
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postWebsitesReverseDns"></a>
# **postWebsitesReverseDns**
> TextResponse postWebsitesReverseDns(ips, id)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val ips : kotlin.collections.Map<kotlin.String, kotlin.Any> =  // kotlin.collections.Map<kotlin.String, kotlin.Any> | 
val id : kotlin.Int = 56 // kotlin.Int | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : TextResponse = apiInstance.postWebsitesReverseDns(ips, id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#postWebsitesReverseDns")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#postWebsitesReverseDns")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**kotlin.collections.Map&lt;kotlin.String, kotlin.Any&gt;**](kotlin.Any.md)|  |
 **id** | **kotlin.Int**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="putWebsites"></a>
# **putWebsites**
> putWebsites()

Validate Webhosting Order

Validates a webhosting order before placing it.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
try {
    apiInstance.putWebsites()
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#putWebsites")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#putWebsites")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="updateWebsiteInfo"></a>
# **updateWebsiteInfo**
> SuccessTextResponse updateWebsiteInfo(id)

Update Website Order

Updates settings on a webhosting order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.String = id_example // kotlin.String | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : SuccessTextResponse = apiInstance.updateWebsiteInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#updateWebsiteInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#updateWebsiteInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="webhostingCancel"></a>
# **webhostingCancel**
> InlineResponse20023 webhostingCancel(id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = WebhostingApi()
val id : kotlin.String = id_example // kotlin.String | The website service ID. Use `website_id` from `GET /websites`.
try {
    val result : InlineResponse20023 = apiInstance.webhostingCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling WebhostingApi#webhostingCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling WebhostingApi#webhostingCancel")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. |

### Return type

[**InlineResponse20023**](InlineResponse20023.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

