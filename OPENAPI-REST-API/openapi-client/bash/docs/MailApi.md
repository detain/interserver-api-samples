# MailApi

All URIs are relative to */apiv2*

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



## addMail

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use '/billing/invoices/{id}' or '/pay/{method}/{invoices}' to complete payment.

### Example

```bash
 addMail
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## addRule

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example

```bash
 addRule id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **denyRuleNew** | [**DenyRuleNew**](DenyRuleNew.md) | These are the fields needed to create a new email deny rule. |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## createMailAlert

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example

```bash
 createMailAlert id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **mailAlertRequest** | [**MailAlertRequest**](MailAlertRequest.md) |  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteMailAlert

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example

```bash
 deleteMailAlert id=value  alert_id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **alertId** | **integer** | Alert ID to delete. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## deleteRule

Delete Deny Rule

Removes a deny rule from the mail service.

### Example

```bash
 deleteRule id=value rule=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **rule** | **string** | The ID of the Rules entry. | [default to null]

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## delistBlock

Remove Email Address from Block List

Removes an email address from the mail service's block lists.

### Example

```bash
 delistBlock id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **email** | **string** | an email address | [optional] [default to null]

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: multipart/form-data, application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailAlerts

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example

```bash
 getMailAlerts id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailBlocks

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example

```bash
 getMailBlocks id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailDelist

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example

```bash
 getMailDelist id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailDeliverability

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example

```bash
 getMailDeliverability id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailInfo

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example

```bash
 getMailInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailInvoices

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example

```bash
 getMailInvoices id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailList

List Mail Orders

Returns the Mail Baby services on your account. Use the 'mail_id' from this list with '/mail/{id}' to retrieve service details, and with '/mail/{id}/stats' or '/mail/{id}/log' to review delivery statistics.

### Example

```bash
 getMailList
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[MailRow]**](MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getMailWelcomeEmail

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example

```bash
 getMailWelcomeEmail id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getNewMail

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example

```bash
 getNewMail
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**MailOrder**](MailOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getRules

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example

```bash
 getRules id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**array[DenyRuleRecord]**](DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## getStats

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example

```bash
 getStats id=value  time=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **_time** | **string** | The timeframe for the statistics. | [optional] [default to null]

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## mailCancel

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example

```bash
 mailCancel id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**MailCancel200Response**](MailCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## postMailDelist

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the 'unblock' email address from the delist status response.

### Example

```bash
 postMailDelist id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **mailDelistRequest** | [**MailDelistRequest**](MailDelistRequest.md) |  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## putMail

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example

```bash
 putMail
```

### Parameters

This endpoint does not need any parameter.

### Return type

(empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## resetMailPassword

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use '/mail/{id}' to retrieve updated credential data after the reset.

### Example

```bash
 resetMailPassword id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## sendAdvMail

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use 'POST /mail/{id}/send'.

### Example

```bash
 sendAdvMail id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **sendMailAdv** | [**SendMailAdv**](SendMailAdv.md) |  |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## sendMail

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use 'POST /mail/{id}/advsend' instead.

### Example

```bash
 sendMail id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **sendMail** | [**SendMail**](SendMail.md) |  |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, application/x-www-form-urlencoded
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateMailAlert

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the 'alert_id' returned by the list response along with updated fields.

### Example

```bash
 updateMailAlert id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **mailAlertUpdateRequest** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md) |  |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: application/json, multipart/form-data
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## updateMailInfo

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example

```bash
 updateMailInfo id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **string** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## viewMailLog

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

**Row grouping** is controlled by the 'groupby' parameter.  By default ('groupby=recipient'), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own 'recipient', 'delivered', 'response', and 'mxHostname' values.  Set 'groupby=message' to collapse to one row per message (delivery fields will reflect one arbitrary recipient).

**Pagination** is controlled by 'skip' and 'limit'.  The 'total' in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.

**Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP 'strtotime()' such as '2024-01-15', 'last monday', or '2024-01-01 00:00:00'.  Examples: 'startDate=1704067200&endDate=1706745599' or 'startDate=2024-01-01&endDate=2024-01-31'.

**Sorting** is controlled by 'sort' and 'dir'.  Currently the only sort key is 'time' (default), which orders by internal row ID.

**Delivery status** can be filtered with the 'delivered' parameter: 'delivered=1' returns only successfully delivered messages; 'delivered=0' returns messages still in queue or that failed.

**Address filtering** distinguishes between the SMTP envelope address ('from', 'to') and message headers ('headerfrom' for the 'From:' header, 'replyto' for 'Reply-To:'). These may differ when a message is sent on behalf of another address.

The 'mailid' parameter corresponds to the 'id' field in the returned 'MailLogEntry' objects, **not** the '_id' field.  It also matches the transaction ID returned in the 'text' field of a successful send response.

The 'messageId' parameter searches the 'Message-ID' email header (case-insensitive substring match).

### Example

```bash
 viewMailLog id=value  id=value  origin=value  mx=value  from=value  to=value  subject=value  mailid=value  messageId=value  replyto=value  headerfrom=value  delivered=value  skip=value  limit=value  startDate=value  endDate=value  sort=value  dir=value  groupby=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer** | The mail service ID. Use 'mail_id' from 'GET /mail'. | [default to null]
 **id2** | **integer** | The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from 'GET /mail' or 'GET /mail/{id}'. | [optional] [default to null]
 **origin** | **string** | Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. | [optional] [default to null]
 **mx** | **string** | Filter by the MX hostname the relay attempted delivery to.  For example 'mx.google.com' would return messages destined for Gmail recipients. Maps to 'mxHostname' in the 'MailLogEntry' response. | [optional] [default to null]
 **from** | **string** | Filter by SMTP envelope 'MAIL FROM' address (exact match).  This is the address the relay used for bounce handling and may differ from the 'From:' message header.  For header-level filtering use 'headerfrom'. | [optional] [default to null]
 **to** | **string** | Filter by SMTP envelope 'RCPT TO' address (exact match).  This is the delivery address used by the relay and may differ from the 'To:' header when BCC recipients are involved. | [optional] [default to null]
 **subject** | **string** | Filter by email 'Subject' header (exact match).  MIME-encoded subjects are decoded automatically in the response. | [optional] [default to null]
 **mailid** | **string** | Filter by the relay-assigned mail ID string (exact match).  This corresponds to the 'id' field in 'MailLogEntry' and to the 'text' value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as '185997065c60008840'. | [optional] [default to null]
 **messageId** | **string** | Filter by the 'Message-ID' email header using a substring (case-insensitive) match. The 'Message-ID' is assigned by the sending mail client and is visible in the 'messageId' field of 'MailLogEntry'. | [optional] [default to null]
 **replyto** | **string** | Filter by the 'Reply-To' message header address (exact match).  Only returns messages where this header was explicitly set. | [optional] [default to null]
 **headerfrom** | **string** | Filter by the 'From' message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope 'from' parameter when sending on behalf of another address. | [optional] [default to null]
 **delivered** | **integer** | Filter by delivery status.  '1' returns only messages that were successfully delivered to the destination MX.  '0' returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. | [optional] [default to null]
 **skip** | **integer** | Number of records to skip for pagination.  Use in combination with 'limit' to page through large result sets.  Defaults to '0' (no skip). | [optional] [default to 0]
 **limit** | **integer** | Maximum number of records to return per page.  Defaults to '100'. Maximum allowed value is '10000'.  The response also includes a 'total' field with the full matched count so you can calculate the number of pages. | [optional] [default to 100]
 **startDate** | [**ViewMailLogStartDateParameter**](.md) | Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by 'strtotime()' such as '2024-01-15' or 'last monday'.  Messages with a 'time' value **greater than or equal to** this value will be included. | [optional] [default to null]
 **endDate** | [**ViewMailLogStartDateParameter**](.md) | Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by 'strtotime()' such as '2024-01-31' or 'yesterday'. Messages with a 'time' value **less than or equal to** this value will be included. | [optional] [default to null]
 **sort** | **string** | Field to sort results by.  Currently only 'time' is supported (sorts by internal row ID which corresponds to chronological order). | [optional] [default to time]
 **dir** | **string** | Sort direction.  'desc' returns newest first (default), 'asc' returns oldest first. | [optional] [default to desc]
 **groupby** | **string** | Controls how results are grouped.  'recipient' (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own 'recipient', 'delivered', 'response', and delivery metadata.  'message' collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The 'total' count in the response matches the grouping mode. | [optional] [default to recipient]

### Return type

[**MailLog**](MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

