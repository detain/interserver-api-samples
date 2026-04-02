# MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMail**](MailApi.md#addMail) | **POST** /mail/order | Place Mail Order
[**addRule**](MailApi.md#addRule) | **POST** /mail/{id}/rules | Create Deny Rule
[**createMailAlert**](MailApi.md#createMailAlert) | **POST** /mail/{id}/alerts | Create Mail Alert
[**deleteMailAlert**](MailApi.md#deleteMailAlert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
[**deleteRule**](MailApi.md#deleteRule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
[**delistBlock**](MailApi.md#delistBlock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
[**getMailAlerts**](MailApi.md#getMailAlerts) | **GET** /mail/{id}/alerts | List Mail Alerts
[**getMailBlocks**](MailApi.md#getMailBlocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
[**getMailDelist**](MailApi.md#getMailDelist) | **GET** /mail/{id}/delist | Get Delist Status
[**getMailDeliverability**](MailApi.md#getMailDeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
[**getMailInfo**](MailApi.md#getMailInfo) | **GET** /mail/{id} | Get Mail Order
[**getMailInvoices**](MailApi.md#getMailInvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
[**getMailList**](MailApi.md#getMailList) | **GET** /mail | List Mail Orders
[**getMailWelcomeEmail**](MailApi.md#getMailWelcomeEmail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
[**getNewMail**](MailApi.md#getNewMail) | **GET** /mail/order | Get Mail Ordering Information
[**getRules**](MailApi.md#getRules) | **GET** /mail/{id}/rules | List Deny Rules
[**getStats**](MailApi.md#getStats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
[**mailCancel**](MailApi.md#mailCancel) | **DELETE** /mail/{id} | Cancel Mail
[**postMailDelist**](MailApi.md#postMailDelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
[**putMail**](MailApi.md#putMail) | **PUT** /mail/order | Validate Mail Order
[**resetMailPassword**](MailApi.md#resetMailPassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
[**sendAdvMail**](MailApi.md#sendAdvMail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
[**sendMail**](MailApi.md#sendMail) | **POST** /mail/{id}/send | Send Email
[**updateMailAlert**](MailApi.md#updateMailAlert) | **PUT** /mail/{id}/alerts | Update Mail Alert
[**updateMailInfo**](MailApi.md#updateMailInfo) | **POST** /mail/{id} | Update Mail Order
[**viewMailLog**](MailApi.md#viewMailLog) | **GET** /mail/{id}/log | View Mail Log

<a name="addMail"></a>
# **addMail**
> ServiceOrderPostResponse addMail()

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
try {
    val result : ServiceOrderPostResponse = apiInstance.addMail()
    println(result)
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

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="addRule"></a>
# **addRule**
> GenericResponse addRule(body, id)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val body : DenyRuleNew = {
  "value" : {
    "user" : "mb20682",
    "type" : "email",
    "data" : "domeinwo@server.guesshost.net"
  }
} // DenyRuleNew | These are the fields needed to create a new email deny rule.
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.addRule(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

<a name="addRule"></a>
# **addRule**
> GenericResponse addRule(user, type, `data`, id)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val user : kotlin.String = user_example // kotlin.String | 
val type : kotlin.String = type_example // kotlin.String | 
val `data` : kotlin.String = `data`_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.addRule(user, type, `data`, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **user** | **kotlin.String**|  |
 **type** | **kotlin.String**|  | [enum: domain, email, startswith, destination]
 **&#x60;data&#x60;** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

<a name="createMailAlert"></a>
# **createMailAlert**
> SuccessTextResponse createMailAlert(body, id)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val body : MailAlertRequest =  // MailAlertRequest | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.createMailAlert(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailAlertRequest**](MailAlertRequest.md)|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="createMailAlert"></a>
# **createMailAlert**
> SuccessTextResponse createMailAlert(type, value, to, enabled, id)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val type : kotlin.String = type_example // kotlin.String | 
val value : kotlin.String = value_example // kotlin.String | 
val to : kotlin.String = to_example // kotlin.String | 
val enabled : kotlin.String = enabled_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.createMailAlert(type, value, to, enabled, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **kotlin.String**|  |
 **value** | **kotlin.String**|  |
 **to** | **kotlin.String**|  |
 **enabled** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="deleteMailAlert"></a>
# **deleteMailAlert**
> SuccessTextResponse deleteMailAlert(id, alertId)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |
 **alertId** | **kotlin.Int**| Alert ID to delete. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="deleteRule"></a>
# **deleteRule**
> GenericResponse deleteRule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val rule : kotlin.String = rule_example // kotlin.String | The ID of the Rules entry.
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |
 **rule** | **kotlin.String**| The ID of the Rules entry. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="delistBlock"></a>
# **delistBlock**
> GenericResponse delistBlock(email, id)

Remove Email Address from Block List

Removes an email address from the mail service&#x27;s block lists.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val email : kotlin.String = email_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.delistBlock(email, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="delistBlock"></a>
# **delistBlock**
> GenericResponse delistBlock(body, id)

Remove Email Address from Block List

Removes an email address from the mail service&#x27;s block lists.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val body : EmailAddress = {
  "value" : {
    "email" : "client@domain.com"
  }
} // EmailAddress | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.delistBlock(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**EmailAddress**](EmailAddress.md)|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

<a name="getMailAlerts"></a>
# **getMailAlerts**
> MailAlertsResponse getMailAlerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMailBlocks"></a>
# **getMailBlocks**
> MailBlocks getMailBlocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMailDelist"></a>
# **getMailDelist**
> MailDelistResponse getMailDelist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMailDeliverability"></a>
# **getMailDeliverability**
> MailDeliverabilityResponse getMailDeliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMailInfo"></a>
# **getMailInfo**
> MailSchema getMailInfo(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMailInvoices"></a>
# **getMailInvoices**
> ChargeInvoiceRows getMailInvoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMailList"></a>
# **getMailList**
> kotlin.Array&lt;MailRow&gt; getMailList()

List Mail Orders

Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
try {
    val result : kotlin.Array<MailRow> = apiInstance.getMailList()
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

[**kotlin.Array&lt;MailRow&gt;**](MailRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getMailWelcomeEmail"></a>
# **getMailWelcomeEmail**
> SuccessTextResponse getMailWelcomeEmail(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getNewMail"></a>
# **getNewMail**
> MailOrder getNewMail()

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getRules"></a>
# **getRules**
> kotlin.Array&lt;DenyRuleRecord&gt; getRules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : kotlin.Array<DenyRuleRecord> = apiInstance.getRules(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**kotlin.Array&lt;DenyRuleRecord&gt;**](DenyRuleRecord.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getStats"></a>
# **getStats**
> MailStatsType getStats(id, time)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |
 **time** | **kotlin.String**| The timeframe for the statistics. | [optional] [enum: all, billing, month, 7d, 24h, 1d, 1h]

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="mailCancel"></a>
# **mailCancel**
> InlineResponse2008 mailCancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : InlineResponse2008 = apiInstance.mailCancel(id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**InlineResponse2008**](InlineResponse2008.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postMailDelist"></a>
# **postMailDelist**
> SuccessTextResponse postMailDelist(body, id)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val body : MailDelistRequest =  // MailDelistRequest | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.postMailDelist(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailDelistRequest**](MailDelistRequest.md)|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="postMailDelist"></a>
# **postMailDelist**
> SuccessTextResponse postMailDelist(unblock, id)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val unblock : kotlin.String = unblock_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.postMailDelist(unblock, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **unblock** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="putMail"></a>
# **putMail**
> putMail()

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="resetMailPassword"></a>
# **resetMailPassword**
> SuccessTextResponse resetMailPassword(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="sendAdvMail"></a>
# **sendAdvMail**
> GenericResponse sendAdvMail(body, id)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val body : SendMailAdv = {
  "value" : {
    "subject" : "Welcome",
    "body" : "Hello",
    "from" : {
      "email" : "user@domain.com"
    },
    "to" : [ {
      "email" : "someone@client.com",
      "name" : "Mr Client"
    } ],
    "attachments" : [ {
      "filename" : "message.txt",
      "data" : "base64_encoded_contents"
    } ],
    "id" : 66
  }
} // SendMailAdv | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.sendAdvMail(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SendMailAdv**](SendMailAdv.md)|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

<a name="sendAdvMail"></a>
# **sendAdvMail**
> GenericResponse sendAdvMail(subject, body, from, to, replyto, cc, bcc, attachments, id2, id)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val subject : kotlin.String = subject_example // kotlin.String | 
val body : kotlin.String = body_example // kotlin.String | 
val from : EmailAddressName =  // EmailAddressName | 
val to : kotlin.Array<EmailAddressName> =  // kotlin.Array<EmailAddressName> | 
val replyto : kotlin.Array<EmailAddressName> =  // kotlin.Array<EmailAddressName> | 
val cc : kotlin.Array<EmailAddressName> =  // kotlin.Array<EmailAddressName> | 
val bcc : kotlin.Array<EmailAddressName> =  // kotlin.Array<EmailAddressName> | 
val attachments : kotlin.Array<MailAttachment> =  // kotlin.Array<MailAttachment> | 
val id2 : kotlin.Long = 789 // kotlin.Long | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.sendAdvMail(subject, body, from, to, replyto, cc, bcc, attachments, id2, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subject** | **kotlin.String**|  |
 **body** | **kotlin.String**|  |
 **from** | [**EmailAddressName**](.md)|  |
 **to** | [**kotlin.Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  |
 **replyto** | [**kotlin.Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  |
 **cc** | [**kotlin.Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  |
 **bcc** | [**kotlin.Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  |
 **attachments** | [**kotlin.Array&lt;MailAttachment&gt;**](MailAttachment.md)|  |
 **id2** | **kotlin.Long**|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

<a name="sendMail"></a>
# **sendMail**
> GenericResponse sendMail(body, id)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val body : SendMail =  // SendMail | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.sendMail(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SendMail**](SendMail.md)|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

<a name="sendMail"></a>
# **sendMail**
> GenericResponse sendMail(to, from, subject, body, id)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val to : kotlin.String = to_example // kotlin.String | 
val from : kotlin.String = from_example // kotlin.String | 
val subject : kotlin.String = subject_example // kotlin.String | 
val body : kotlin.String = body_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : GenericResponse = apiInstance.sendMail(to, from, subject, body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **to** | **kotlin.String**|  |
 **from** | **kotlin.String**|  |
 **subject** | **kotlin.String**|  |
 **body** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

<a name="updateMailAlert"></a>
# **updateMailAlert**
> SuccessTextResponse updateMailAlert(body, id)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val body : MailAlertUpdateRequest =  // MailAlertUpdateRequest | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.updateMailAlert(body, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateMailAlert"></a>
# **updateMailAlert**
> SuccessTextResponse updateMailAlert(alertId, type, value, to, enabled, id)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val alertId : kotlin.Int = 56 // kotlin.Int | 
val type : kotlin.String = type_example // kotlin.String | 
val value : kotlin.String = value_example // kotlin.String | 
val to : kotlin.String = to_example // kotlin.String | 
val enabled : kotlin.String = enabled_example // kotlin.String | 
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.updateMailAlert(alertId, type, value, to, enabled, id)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **alertId** | **kotlin.Int**|  |
 **type** | **kotlin.String**|  |
 **value** | **kotlin.String**|  |
 **to** | **kotlin.String**|  |
 **enabled** | **kotlin.String**|  |
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

<a name="updateMailInfo"></a>
# **updateMailInfo**
> SuccessTextResponse updateMailInfo(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val id : kotlin.String = id_example // kotlin.String | The mail service ID. Use `mail_id` from `GET /mail`.
try {
    val result : SuccessTextResponse = apiInstance.updateMailInfo(id)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MailApi#updateMailInfo")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MailApi#updateMailInfo")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.String**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="viewMailLog"></a>
# **viewMailLog**
> MailLog viewMailLog(id, id, origin, mx, from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby)

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the &#x60;groupby&#x60; parameter.  By default (&#x60;groupby&#x3D;recipient&#x60;), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and &#x60;mxHostname&#x60; values.  Set &#x60;groupby&#x3D;message&#x60; to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by &#x60;skip&#x60; and &#x60;limit&#x60;.  The &#x60;total&#x60; in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60;, &#x60;last monday&#x60;, or &#x60;2024-01-01 00:00:00&#x60;.  Examples: &#x60;startDate&#x3D;1704067200&amp;endDate&#x3D;1706745599&#x60; or &#x60;startDate&#x3D;2024-01-01&amp;endDate&#x3D;2024-01-31&#x60;.  **Sorting** is controlled by &#x60;sort&#x60; and &#x60;dir&#x60;.  Currently the only sort key is &#x60;time&#x60; (default), which orders by internal row ID.  **Delivery status** can be filtered with the &#x60;delivered&#x60; parameter: &#x60;delivered&#x3D;1&#x60; returns only successfully delivered messages; &#x60;delivered&#x3D;0&#x60; returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (&#x60;from&#x60;, &#x60;to&#x60;) and message headers (&#x60;headerfrom&#x60; for the &#x60;From:&#x60; header, &#x60;replyto&#x60; for &#x60;Reply-To:&#x60;). These may differ when a message is sent on behalf of another address.  The &#x60;mailid&#x60; parameter corresponds to the &#x60;id&#x60; field in the returned &#x60;MailLogEntry&#x60; objects, **not** the &#x60;_id&#x60; field.  It also matches the transaction ID returned in the &#x60;text&#x60; field of a successful send response.  The &#x60;messageId&#x60; parameter searches the &#x60;Message-ID&#x60; email header (case-insensitive substring match). 

### Example
```kotlin
// Import classes:
//import myadmin-client-kotlin-client.infrastructure.*
//import io.swagger.client.models.*;

val apiInstance = MailApi()
val id : kotlin.Int = 56 // kotlin.Int | The mail service ID. Use `mail_id` from `GET /mail`.
val id : kotlin.Long = 789 // kotlin.Long | The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from `GET /mail` or `GET /mail/{id}`.
val origin : kotlin.String = origin_example // kotlin.String | Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address.
val mx : kotlin.String = mx_example // kotlin.String | Filter by the MX hostname the relay attempted delivery to.  For example `mx.google.com` would return messages destined for Gmail recipients. Maps to `mxHostname` in the `MailLogEntry` response.
val from : kotlin.String = from_example // kotlin.String | Filter by SMTP envelope `MAIL FROM` address (exact match).  This is the address the relay used for bounce handling and may differ from the `From:` message header.  For header-level filtering use `headerfrom`.
val to : kotlin.String = to_example // kotlin.String | Filter by SMTP envelope `RCPT TO` address (exact match).  This is the delivery address used by the relay and may differ from the `To:` header when BCC recipients are involved.
val subject : kotlin.String = subject_example // kotlin.String | Filter by email `Subject` header (exact match).  MIME-encoded subjects are decoded automatically in the response.
val mailid : kotlin.String = mailid_example // kotlin.String | Filter by the relay-assigned mail ID string (exact match).  This corresponds to the `id` field in `MailLogEntry` and to the `text` value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as `185997065c60008840`.
val messageId : kotlin.String = messageId_example // kotlin.String | Filter by the `Message-ID` email header using a substring (case-insensitive) match. The `Message-ID` is assigned by the sending mail client and is visible in the `messageId` field of `MailLogEntry`.
val replyto : kotlin.String = replyto_example // kotlin.String | Filter by the `Reply-To` message header address (exact match).  Only returns messages where this header was explicitly set.
val headerfrom : kotlin.String = headerfrom_example // kotlin.String | Filter by the `From` message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope `from` parameter when sending on behalf of another address.
val delivered : kotlin.Int = 56 // kotlin.Int | Filter by delivery status.  `1` returns only messages that were successfully delivered to the destination MX.  `0` returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status.
val skip : kotlin.Int = 56 // kotlin.Int | Number of records to skip for pagination.  Use in combination with `limit` to page through large result sets.  Defaults to `0` (no skip).
val limit : kotlin.Int = 56 // kotlin.Int | Maximum number of records to return per page.  Defaults to `100`. Maximum allowed value is `10000`.  The response also includes a `total` field with the full matched count so you can calculate the number of pages.
val startDate : StartDate =  // StartDate | Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-15` or `last monday`.  Messages with a `time` value **greater than or equal to** this value will be included.
val endDate : EndDate =  // EndDate | Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-31` or `yesterday`. Messages with a `time` value **less than or equal to** this value will be included.
val sort : kotlin.String = sort_example // kotlin.String | Field to sort results by.  Currently only `time` is supported (sorts by internal row ID which corresponds to chronological order).
val dir : kotlin.String = dir_example // kotlin.String | Sort direction.  `desc` returns newest first (default), `asc` returns oldest first.
val groupby : kotlin.String = groupby_example // kotlin.String | Controls how results are grouped.  `recipient` (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and delivery metadata.  `message` collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The `total` count in the response matches the grouping mode.
try {
    val result : MailLog = apiInstance.viewMailLog(id, id, origin, mx, from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby)
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

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **kotlin.Int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. |
 **id** | **kotlin.Long**| The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;. | [optional]
 **origin** | **kotlin.String**| Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. | [optional]
 **mx** | **kotlin.String**| Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response. | [optional]
 **from** | **kotlin.String**| Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;. | [optional]
 **to** | **kotlin.String**| Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved. | [optional]
 **subject** | **kotlin.String**| Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response. | [optional]
 **mailid** | **kotlin.String**| Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;. | [optional]
 **messageId** | **kotlin.String**| Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match. The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;. | [optional]
 **replyto** | **kotlin.String**| Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set. | [optional]
 **headerfrom** | **kotlin.String**| Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address. | [optional]
 **delivered** | **kotlin.Int**| Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. | [optional] [enum: 0, 1]
 **skip** | **kotlin.Int**| Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip). | [optional] [default to 0] [enum: 0]
 **limit** | **kotlin.Int**| Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages. | [optional] [default to 100] [enum: 1, 10000]
 **startDate** | [**StartDate**](.md)| Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included. | [optional]
 **endDate** | [**EndDate**](.md)| Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;. Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included. | [optional]
 **sort** | **kotlin.String**| Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order). | [optional] [default to time] [enum: time]
 **dir** | **kotlin.String**| Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first. | [optional] [default to desc] [enum: asc, desc]
 **groupby** | **kotlin.String**| Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode. | [optional] [default to recipient] [enum: message, recipient]

### Return type

[**MailLog**](MailLog.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

