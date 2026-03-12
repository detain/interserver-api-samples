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


<a name="addMail"></a>
# **addMail**
> addMail()

Place Mail Order

    Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="addRule"></a>
# **addRule**
> GenericResponse addRule(id, DenyRuleNew)

Create Deny Rule

    Adds a new deny rule to automatically block emails that match the specified criteria.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **DenyRuleNew** | [**DenyRuleNew**](../Models/DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | |

### Return type

[**GenericResponse**](../Models/GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

<a name="createMailAlert"></a>
# **createMailAlert**
> SuccessTextResponse createMailAlert(id, MailAlertRequest)

Create Mail Alert

    Creates a new alert for the mail service, such as delivery or quota notifications.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **MailAlertRequest** | [**MailAlertRequest**](../Models/MailAlertRequest.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="deleteMailAlert"></a>
# **deleteMailAlert**
> SuccessTextResponse deleteMailAlert(id, alert\_id)

Delete Mail Alert

    Deletes an existing alert definition for the mail service.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **alert\_id** | **Integer**| Alert ID to delete. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="deleteRule"></a>
# **deleteRule**
> GenericResponse deleteRule(id, rule)

Delete Deny Rule

    Removes a deny rule from the mail service.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **rule** | **String**| The ID of the Rules entry. | [default to null] |

### Return type

[**GenericResponse**](../Models/GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="delistBlock"></a>
# **delistBlock**
> GenericResponse delistBlock(id, email)

Remove Email Address from Block List

    Removes an email address from the mail service&#39;s block lists.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **email** | **String**| an email address | [optional] [default to null] |

### Return type

[**GenericResponse**](../Models/GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

<a name="getMailAlerts"></a>
# **getMailAlerts**
> MailAlertsResponse getMailAlerts(id)

List Mail Alerts

    Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**MailAlertsResponse**](../Models/MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMailBlocks"></a>
# **getMailBlocks**
> MailBlocks getMailBlocks(id)

List Blocked Email Addresses

    Displays a listing of the blocked email addresses

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**MailBlocks**](../Models/MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMailDelist"></a>
# **getMailDelist**
> MailDelistResponse getMailDelist(id)

Get Delist Status

    Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**MailDelistResponse**](../Models/MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMailDeliverability"></a>
# **getMailDeliverability**
> MailDeliverabilityResponse getMailDeliverability(id)

Get Deliverability Metrics

    Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**MailDeliverabilityResponse**](../Models/MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMailInfo"></a>
# **getMailInfo**
> MailSchema getMailInfo(id)

Get Mail Order

    Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**MailSchema**](../Models/MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMailInvoices"></a>
# **getMailInvoices**
> ChargeInvoiceRows getMailInvoices(id)

Get Mail Invoices

    Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**ChargeInvoiceRows**](../Models/ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMailList"></a>
# **getMailList**
> List getMailList()

List Mail Orders

    Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.

### Parameters
This endpoint does not need any parameter.

### Return type

[**List**](../Models/MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getMailWelcomeEmail"></a>
# **getMailWelcomeEmail**
> SuccessTextResponse getMailWelcomeEmail(id)

Resend Mail Welcome Email

    Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getNewMail"></a>
# **getNewMail**
> MailOrder getNewMail()

Get Mail Ordering Information

    Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Parameters
This endpoint does not need any parameter.

### Return type

[**MailOrder**](../Models/MailOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getRules"></a>
# **getRules**
> List getRules(id)

List Deny Rules

    Returns a listing of all the deny block rules configured for this mail service.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**List**](../Models/DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="getStats"></a>
# **getStats**
> MailStatsType getStats(id, time)

Get Mail Usage Statistics

    Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **time** | **String**| The timeframe for the statistics. | [optional] [default to null] [enum: all, billing, month, 7d, 24h, 1d, 1h] |

### Return type

[**MailStatsType**](../Models/MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="mailCancel"></a>
# **mailCancel**
> mailCancel_200_response mailCancel(id)

Cancel Mail

    Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**mailCancel_200_response**](../Models/mailCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="postMailDelist"></a>
# **postMailDelist**
> SuccessTextResponse postMailDelist(id, MailDelistRequest)

Delist a Blocked Sender

    Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **MailDelistRequest** | [**MailDelistRequest**](../Models/MailDelistRequest.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="putMail"></a>
# **putMail**
> putMail()

Validate Mail Order

    Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="resetMailPassword"></a>
# **resetMailPassword**
> SuccessTextResponse resetMailPassword(id)

Reset Mail Password

    Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="sendAdvMail"></a>
# **sendAdvMail**
> GenericResponse sendAdvMail(id, SendMailAdv)

Send Email with Advanced Options

    Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **SendMailAdv** | [**SendMailAdv**](../Models/SendMailAdv.md)|  | |

### Return type

[**GenericResponse**](../Models/GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

<a name="sendMail"></a>
# **sendMail**
> GenericResponse sendMail(id, SendMail)

Send Email

    Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **SendMail** | [**SendMail**](../Models/SendMail.md)|  | |

### Return type

[**GenericResponse**](../Models/GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

<a name="updateMailAlert"></a>
# **updateMailAlert**
> SuccessTextResponse updateMailAlert(id, MailAlertUpdateRequest)

Update Mail Alert

    Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **MailAlertUpdateRequest** | [**MailAlertUpdateRequest**](../Models/MailAlertUpdateRequest.md)|  | |

### Return type

[**SuccessTextResponse**](../Models/SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

<a name="updateMailInfo"></a>
# **updateMailInfo**
> updateMailInfo(id)

Update Mail Order

    Updates mail service metadata for the order, such as stored settings or account details.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **String**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |

### Return type

null (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

<a name="viewMailLog"></a>
# **viewMailLog**
> MailLog viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered)

View Mail Log

    Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

### Parameters

|Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null] |
| **id2** | **Long**| The ID of your mail order this will be sent through. | [optional] [default to null] |
| **origin** | **String**| originating ip address sending mail | [optional] [default to null] |
| **mx** | **String**| mx record mail was sent to | [optional] [default to null] |
| **from** | **String**| from email address | [optional] [default to null] |
| **to** | **String**| to/destination email address | [optional] [default to null] |
| **subject** | **String**| subject containing this string | [optional] [default to null] |
| **mailid** | **String**| mail id | [optional] [default to null] |
| **skip** | **Integer**| number of records to skip for pagination | [optional] [default to 0] |
| **limit** | **Integer**| maximum number of records to return | [optional] [default to 100] |
| **startDate** | **Long**| earliest date to get emails in unix timestamp format | [optional] [default to null] |
| **endDate** | **Long**| Latest date to get emails in unix timestamp format. | [optional] [default to null] |
| **delivered** | **String**| Filter emails by whether or not they were delivered. | [optional] [default to null] [enum: 0, 1] |

### Return type

[**MailLog**](../Models/MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

