# MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
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


## Creating MailApi

To initiate an instance of `MailApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.MailApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(MailApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    MailApi mailApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="addMail"></a>
# **addMail**
```java
Mono<Void> MailApi.addMail()
```

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="addRule"></a>
# **addRule**
```java
Mono<GenericResponse> MailApi.addRule(iddenyRuleNew)
```

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **denyRuleNew** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | |


### Return type
[**GenericResponse**](GenericResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
 - **Accept**: `application/json`

<a id="createMailAlert"></a>
# **createMailAlert**
```java
Mono<SuccessTextResponse> MailApi.createMailAlert(idmailAlertRequest)
```

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **mailAlertRequest** | [**MailAlertRequest**](MailAlertRequest.md)|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="deleteMailAlert"></a>
# **deleteMailAlert**
```java
Mono<SuccessTextResponse> MailApi.deleteMailAlert(idalertId)
```

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **alertId** | `Integer`| Alert ID to delete. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="deleteRule"></a>
# **deleteRule**
```java
Mono<GenericResponse> MailApi.deleteRule(idrule)
```

Delete Deny Rule

Removes a deny rule from the mail service.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **rule** | `String`| The ID of the Rules entry. | |


### Return type
[**GenericResponse**](GenericResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="delistBlock"></a>
# **delistBlock**
```java
Mono<GenericResponse> MailApi.delistBlock(idemail)
```

Remove Email Address from Block List

Removes an email address from the mail service&#39;s block lists.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **email** | `String`| an email address | [optional parameter] |


### Return type
[**GenericResponse**](GenericResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `multipart/form-data`, `application/json`
 - **Accept**: `application/json`

<a id="getMailAlerts"></a>
# **getMailAlerts**
```java
Mono<MailAlertsResponse> MailApi.getMailAlerts(id)
```

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMailBlocks"></a>
# **getMailBlocks**
```java
Mono<MailBlocks> MailApi.getMailBlocks(id)
```

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**MailBlocks**](MailBlocks.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMailDelist"></a>
# **getMailDelist**
```java
Mono<MailDelistResponse> MailApi.getMailDelist(id)
```

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**MailDelistResponse**](MailDelistResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMailDeliverability"></a>
# **getMailDeliverability**
```java
Mono<MailDeliverabilityResponse> MailApi.getMailDeliverability(id)
```

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMailInfo"></a>
# **getMailInfo**
```java
Mono<MailSchema> MailApi.getMailInfo(id)
```

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**MailSchema**](MailSchema.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMailInvoices"></a>
# **getMailInvoices**
```java
Mono<ChargeInvoiceRows> MailApi.getMailInvoices(id)
```

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMailList"></a>
# **getMailList**
```java
Mono<List<MailRow>> MailApi.getMailList()
```

List Mail Orders

Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.



### Return type
[**List&lt;MailRow&gt;**](MailRow.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getMailWelcomeEmail"></a>
# **getMailWelcomeEmail**
```java
Mono<SuccessTextResponse> MailApi.getMailWelcomeEmail(id)
```

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getNewMail"></a>
# **getNewMail**
```java
Mono<MailOrder> MailApi.getNewMail()
```

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.



### Return type
[**MailOrder**](MailOrder.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getRules"></a>
# **getRules**
```java
Mono<List<DenyRuleRecord>> MailApi.getRules(id)
```

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**List&lt;DenyRuleRecord&gt;**](DenyRuleRecord.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="getStats"></a>
# **getStats**
```java
Mono<MailStatsType> MailApi.getStats(idtime)
```

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **time** | `String`| The timeframe for the statistics. | [optional parameter] [enum: `all`, `billing`, `month`, `7d`, `24h`, `1d`, `1h`] |


### Return type
[**MailStatsType**](MailStatsType.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="mailCancel"></a>
# **mailCancel**
```java
Mono<MailCancel200Response> MailApi.mailCancel(id)
```

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**MailCancel200Response**](MailCancel200Response.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="postMailDelist"></a>
# **postMailDelist**
```java
Mono<SuccessTextResponse> MailApi.postMailDelist(idmailDelistRequest)
```

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **mailDelistRequest** | [**MailDelistRequest**](MailDelistRequest.md)|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="putMail"></a>
# **putMail**
```java
Mono<Void> MailApi.putMail()
```

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.





### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="resetMailPassword"></a>
# **resetMailPassword**
```java
Mono<SuccessTextResponse> MailApi.resetMailPassword(id)
```

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="sendAdvMail"></a>
# **sendAdvMail**
```java
Mono<GenericResponse> MailApi.sendAdvMail(idsendMailAdv)
```

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **sendMailAdv** | [**SendMailAdv**](SendMailAdv.md)|  | |


### Return type
[**GenericResponse**](GenericResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
 - **Accept**: `application/json`

<a id="sendMail"></a>
# **sendMail**
```java
Mono<GenericResponse> MailApi.sendMail(idsendMail)
```

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **sendMail** | [**SendMail**](SendMail.md)|  | |


### Return type
[**GenericResponse**](GenericResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
 - **Accept**: `application/json`

<a id="updateMailAlert"></a>
# **updateMailAlert**
```java
Mono<SuccessTextResponse> MailApi.updateMailAlert(idmailAlertUpdateRequest)
```

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **mailAlertUpdateRequest** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  | |


### Return type
[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: `application/json`, `multipart/form-data`
 - **Accept**: `application/json`

<a id="updateMailInfo"></a>
# **updateMailInfo**
```java
Mono<Void> MailApi.updateMailInfo(id)
```

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `String`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |




### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

<a id="viewMailLog"></a>
# **viewMailLog**
```java
Mono<MailLog> MailApi.viewMailLog(idid2originmxfromtosubjectmailidskiplimitstartDateendDatedelivered)
```

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | |
| **id2** | `Long`| The ID of your mail order this will be sent through. | [optional parameter] |
| **origin** | `String`| originating ip address sending mail | [optional parameter] |
| **mx** | `String`| mx record mail was sent to | [optional parameter] |
| **from** | `String`| from email address | [optional parameter] |
| **to** | `String`| to/destination email address | [optional parameter] |
| **subject** | `String`| subject containing this string | [optional parameter] |
| **mailid** | `String`| mail id | [optional parameter] |
| **skip** | `Integer`| number of records to skip for pagination | [optional parameter] [default to `0`] |
| **limit** | `Integer`| maximum number of records to return | [optional parameter] [default to `100`] |
| **startDate** | `Long`| earliest date to get emails in unix timestamp format | [optional parameter] |
| **endDate** | `Long`| Latest date to get emails in unix timestamp format. | [optional parameter] |
| **delivered** | `String`| Filter emails by whether or not they were delivered. | [optional parameter] [enum: `0`, `1`] |


### Return type
[**MailLog**](MailLog.md)

### Authorization
* **[sessionIdCookieAuth](auth.md#sessionIdCookieAuth)**
* **[apiKeyAuth](auth.md#apiKeyAuth)**
* **[sessionIdHeaderAuth](auth.md#sessionIdHeaderAuth)**

### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `application/json`

