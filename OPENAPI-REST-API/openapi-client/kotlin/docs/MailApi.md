# MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**addMail**](MailApi.md#addMail) | **POST** /mail/order | Place Mail Order |
| [**addRule**](MailApi.md#addRule) | **POST** /mail/{id}/rules | Create Deny Rule |
| [**createMailAlert**](MailApi.md#createMailAlert) | **POST** /mail/{id}/alerts | Create Mail Alert |
| [**deleteMailAlert**](MailApi.md#deleteMailAlert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert |
| [**deleteRule**](MailApi.md#deleteRule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule |
| [**delistBlock**](MailApi.md#delistBlock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List |
| [**getMailAlerts**](MailApi.md#getMailAlerts) | **GET** /mail/{id}/alerts | List Mail Alerts |
| [**getMailBlocks**](MailApi.md#getMailBlocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses |
| [**getMailDelist**](MailApi.md#getMailDelist) | **GET** /mail/{id}/delist | Get Delist Status |
| [**getMailDeliverability**](MailApi.md#getMailDeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics |
| [**getMailInfo**](MailApi.md#getMailInfo) | **GET** /mail/{id} | Get Mail Order |
| [**getMailInvoices**](MailApi.md#getMailInvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices |
| [**getMailList**](MailApi.md#getMailList) | **GET** /mail | List Mail Orders |
| [**getMailWelcomeEmail**](MailApi.md#getMailWelcomeEmail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email |
| [**getNewMail**](MailApi.md#getNewMail) | **GET** /mail/order | Get Mail Ordering Information |
| [**getRules**](MailApi.md#getRules) | **GET** /mail/{id}/rules | List Deny Rules |
| [**getStats**](MailApi.md#getStats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics |
| [**mailCancel**](MailApi.md#mailCancel) | **DELETE** /mail/{id} | Cancel Mail |
| [**postMailDelist**](MailApi.md#postMailDelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender |
| [**putMail**](MailApi.md#putMail) | **PUT** /mail/order | Validate Mail Order |
| [**resetMailPassword**](MailApi.md#resetMailPassword) | **GET** /mail/{id}/reset_password | Reset Mail Password |
| [**sendAdvMail**](MailApi.md#sendAdvMail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options |
| [**sendMail**](MailApi.md#sendMail) | **POST** /mail/{id}/send | Send Email |
| [**updateMailAlert**](MailApi.md#updateMailAlert) | **PUT** /mail/{id}/alerts | Update Mail Alert |
| [**updateMailInfo**](MailApi.md#updateMailInfo) | **POST** /mail/{id} | Update Mail Order |
| [**viewMailLog**](MailApi.md#viewMailLog) | **GET** /mail/{id}/log | View Mail Log |


<a id="addMail"></a>
# **addMail**
> addMail()

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
try {
    apiInstance.addMail()
} catch (e: ClientException) {
    println("4xx response calling MailApi#addMail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#addMail")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="addRule"></a>
# **addRule**
> GenericResponse addRule(id, denyRuleNew)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val denyRuleNew : DenyRuleNew = {"user":"mb20682","type":"email","data":"domeinwo@server.guesshost.net"} // DenyRuleNew | These are the fields needed to create a new email deny rule.
try {
    val result : GenericResponse = apiInstance.addRule(id, denyRuleNew)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#addRule")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#addRule")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **denyRuleNew** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="createMailAlert"></a>
# **createMailAlert**
> SuccessTextResponse createMailAlert(id, mailAlertRequest)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val mailAlertRequest : MailAlertRequest =  // MailAlertRequest | 
try {
    val result : SuccessTextResponse = apiInstance.createMailAlert(id, mailAlertRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#createMailAlert")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#createMailAlert")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **mailAlertRequest** | [**MailAlertRequest**](MailAlertRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="deleteMailAlert"></a>
# **deleteMailAlert**
> SuccessTextResponse deleteMailAlert(id, alertId)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val alertId : kotlin.Int = 56 // kotlin.Int | Alert ID to delete.
try {
    val result : SuccessTextResponse = apiInstance.deleteMailAlert(id, alertId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#deleteMailAlert")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#deleteMailAlert")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **alertId** | **kotlin.Int**| Alert ID to delete. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="deleteRule"></a>
# **deleteRule**
> GenericResponse deleteRule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val rule : kotlin.String = 34 // kotlin.String | The ID of the Rules entry.
try {
    val result : GenericResponse = apiInstance.deleteRule(id, rule)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#deleteRule")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#deleteRule")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **rule** | **kotlin.String**| The ID of the Rules entry. | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="delistBlock"></a>
# **delistBlock**
> GenericResponse delistBlock(id, email)

Remove Email Address from Block List

Removes an email address from the mail service&#39;s block lists.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val email : kotlin.String = email_example // kotlin.String | an email address
try {
    val result : GenericResponse = apiInstance.delistBlock(id, email)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#delistBlock")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#delistBlock")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **email** | **kotlin.String**| an email address | [optional] |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

<a id="getMailAlerts"></a>
# **getMailAlerts**
> MailAlertsResponse getMailAlerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : MailAlertsResponse = apiInstance.getMailAlerts(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailAlerts")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailAlerts")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getMailBlocks"></a>
# **getMailBlocks**
> MailBlocks getMailBlocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : MailBlocks = apiInstance.getMailBlocks(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailBlocks")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailBlocks")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getMailDelist"></a>
# **getMailDelist**
> MailDelistResponse getMailDelist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : MailDelistResponse = apiInstance.getMailDelist(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailDelist")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailDelist")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getMailDeliverability"></a>
# **getMailDeliverability**
> MailDeliverabilityResponse getMailDeliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : MailDeliverabilityResponse = apiInstance.getMailDeliverability(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailDeliverability")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailDeliverability")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getMailInfo"></a>
# **getMailInfo**
> MailSchema getMailInfo(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : MailSchema = apiInstance.getMailInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailSchema**](MailSchema.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getMailInvoices"></a>
# **getMailInvoices**
> ChargeInvoiceRows getMailInvoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : ChargeInvoiceRows = apiInstance.getMailInvoices(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailInvoices")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailInvoices")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getMailList"></a>
# **getMailList**
> kotlin.collections.List&lt;MailRow&gt; getMailList()

List Mail Orders

Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
try {
    val result : kotlin.collections.List<MailRow> = apiInstance.getMailList()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailList")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailList")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;MailRow&gt;**](MailRow.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getMailWelcomeEmail"></a>
# **getMailWelcomeEmail**
> SuccessTextResponse getMailWelcomeEmail(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.getMailWelcomeEmail(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getMailWelcomeEmail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getMailWelcomeEmail")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getNewMail"></a>
# **getNewMail**
> MailOrder getNewMail()

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
try {
    val result : MailOrder = apiInstance.getNewMail()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getNewMail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getNewMail")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**MailOrder**](MailOrder.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getRules"></a>
# **getRules**
> kotlin.collections.List&lt;DenyRuleRecord&gt; getRules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : kotlin.collections.List<DenyRuleRecord> = apiInstance.getRules(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getRules")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getRules")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**kotlin.collections.List&lt;DenyRuleRecord&gt;**](DenyRuleRecord.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getStats"></a>
# **getStats**
> MailStatsType getStats(id, time)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val time : kotlin.String = time_example // kotlin.String | The timeframe for the statistics.
try {
    val result : MailStatsType = apiInstance.getStats(id, time)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#getStats")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#getStats")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **time** | **kotlin.String**| The timeframe for the statistics. | [optional] [enum: all, billing, month, 7d, 24h, 1d, 1h] |

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="mailCancel"></a>
# **mailCancel**
> MailCancel200Response mailCancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : MailCancel200Response = apiInstance.mailCancel(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#mailCancel")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#mailCancel")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**MailCancel200Response**](MailCancel200Response.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="postMailDelist"></a>
# **postMailDelist**
> SuccessTextResponse postMailDelist(id, mailDelistRequest)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val mailDelistRequest : MailDelistRequest =  // MailDelistRequest | 
try {
    val result : SuccessTextResponse = apiInstance.postMailDelist(id, mailDelistRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#postMailDelist")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#postMailDelist")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **mailDelistRequest** | [**MailDelistRequest**](MailDelistRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="putMail"></a>
# **putMail**
> putMail()

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
try {
    apiInstance.putMail()
} catch (e: ClientException) {
    println("4xx response calling MailApi#putMail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#putMail")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="resetMailPassword"></a>
# **resetMailPassword**
> SuccessTextResponse resetMailPassword(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.resetMailPassword(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#resetMailPassword")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#resetMailPassword")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="sendAdvMail"></a>
# **sendAdvMail**
> GenericResponse sendAdvMail(id, sendMailAdv)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val sendMailAdv : SendMailAdv = {"subject":"Welcome","body":"Hello","from":{"email":"user@domain.com"},"to":[{"email":"someone@client.com","name":"Mr Client"}],"attachments":[{"filename":"message.txt","data":"base64_encoded_contents"}],"id":66} // SendMailAdv | 
try {
    val result : GenericResponse = apiInstance.sendAdvMail(id, sendMailAdv)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#sendAdvMail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#sendAdvMail")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **sendMailAdv** | [**SendMailAdv**](SendMailAdv.md)|  | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="sendMail"></a>
# **sendMail**
> GenericResponse sendMail(id, sendMail)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val sendMail : SendMail =  // SendMail | 
try {
    val result : GenericResponse = apiInstance.sendMail(id, sendMail)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#sendMail")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#sendMail")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **sendMail** | [**SendMail**](SendMail.md)|  | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="updateMailAlert"></a>
# **updateMailAlert**
> SuccessTextResponse updateMailAlert(id, mailAlertUpdateRequest)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val mailAlertUpdateRequest : MailAlertUpdateRequest =  // MailAlertUpdateRequest | 
try {
    val result : SuccessTextResponse = apiInstance.updateMailAlert(id, mailAlertUpdateRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#updateMailAlert")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#updateMailAlert")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **mailAlertUpdateRequest** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a id="updateMailInfo"></a>
# **updateMailInfo**
> updateMailInfo(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.String = id_example // kotlin.String | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    apiInstance.updateMailInfo(id)
} catch (e: ClientException) {
    println("4xx response calling MailApi#updateMailInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#updateMailInfo")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **kotlin.String**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |

### Return type

null (empty response body)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="viewMailLog"></a>
# **viewMailLog**
> MailLog viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered)

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val id2 : kotlin.Long = 2604 // kotlin.Long | The ID of your mail order this will be sent through.
val origin : kotlin.String = 1.2.3.4 // kotlin.String | originating ip address sending mail
val mx : kotlin.String = mx.google.com // kotlin.String | mx record mail was sent to
val from : kotlin.String = me@sender.com // kotlin.String | from email address
val to : kotlin.String = you@receiver.com // kotlin.String | to/destination email address
val subject : kotlin.String = Support // kotlin.String | subject containing this string
val mailid : kotlin.String = 185997065c60008840 // kotlin.String | mail id
val skip : kotlin.Int = 1000 // kotlin.Int | number of records to skip for pagination
val limit : kotlin.Int = 1000 // kotlin.Int | maximum number of records to return
val startDate : kotlin.Long = 1641781008 // kotlin.Long | earliest date to get emails in unix timestamp format
val endDate : kotlin.Long = 1673317008 // kotlin.Long | Latest date to get emails in unix timestamp format.
val delivered : kotlin.String = delivered_example // kotlin.String | Filter emails by whether or not they were delivered.
try {
    val result : MailLog = apiInstance.viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#viewMailLog")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#viewMailLog")
    e.printStackTrace()
}
```

### Parameters
| **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **id2** | **kotlin.Long**| The ID of your mail order this will be sent through. | [optional] |
| **origin** | **kotlin.String**| originating ip address sending mail | [optional] |
| **mx** | **kotlin.String**| mx record mail was sent to | [optional] |
| **from** | **kotlin.String**| from email address | [optional] |
| **to** | **kotlin.String**| to/destination email address | [optional] |
| **subject** | **kotlin.String**| subject containing this string | [optional] |
| **mailid** | **kotlin.String**| mail id | [optional] |
| **skip** | **kotlin.Int**| number of records to skip for pagination | [optional] [default to 0] |
| **limit** | **kotlin.Int**| maximum number of records to return | [optional] [default to 100] |
| **startDate** | **kotlin.Long**| earliest date to get emails in unix timestamp format | [optional] |
| **endDate** | **kotlin.Long**| Latest date to get emails in unix timestamp format. | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **delivered** | **kotlin.String**| Filter emails by whether or not they were delivered. | [optional] [enum: 0, 1] |

### Return type

[**MailLog**](MailLog.md)

### Authorization


Configure sessionIdCookieAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""
Configure apiKeyAuth:
    ApiClient.apiKey["X-API-KEY"] = ""
    ApiClient.apiKeyPrefix["X-API-KEY"] = ""
Configure sessionIdHeaderAuth:
    ApiClient.apiKey["sessionid"] = ""
    ApiClient.apiKeyPrefix["sessionid"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

