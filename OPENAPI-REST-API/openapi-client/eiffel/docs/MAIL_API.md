# MAIL_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_mail**](MAIL_API.md#add_mail) | **Post** /mail/order | Place Mail Order
[**add_rule**](MAIL_API.md#add_rule) | **Post** /mail/{id}/rules | Create Deny Rule
[**create_mail_alert**](MAIL_API.md#create_mail_alert) | **Post** /mail/{id}/alerts | Create Mail Alert
[**delete_mail_alert**](MAIL_API.md#delete_mail_alert) | **Delete** /mail/{id}/alerts | Delete Mail Alert
[**delete_rule**](MAIL_API.md#delete_rule) | **Delete** /mail/{id}/rules/{rule} | Delete Deny Rule
[**delist_block**](MAIL_API.md#delist_block) | **Post** /mail/{id}/blocks/delete | Remove Email Address from Block List
[**mail_alerts**](MAIL_API.md#mail_alerts) | **Get** /mail/{id}/alerts | List Mail Alerts
[**mail_blocks**](MAIL_API.md#mail_blocks) | **Get** /mail/{id}/blocks | List Blocked Email Addresses
[**mail_cancel**](MAIL_API.md#mail_cancel) | **Delete** /mail/{id} | Cancel Mail
[**mail_delist**](MAIL_API.md#mail_delist) | **Get** /mail/{id}/delist | Get Delist Status
[**mail_deliverability**](MAIL_API.md#mail_deliverability) | **Get** /mail/{id}/deliverability | Get Deliverability Metrics
[**mail_info**](MAIL_API.md#mail_info) | **Get** /mail/{id} | Get Mail Order
[**mail_invoices**](MAIL_API.md#mail_invoices) | **Get** /mail/{id}/invoices | Get Mail Invoices
[**mail_list**](MAIL_API.md#mail_list) | **Get** /mail | List Mail Orders
[**mail_welcome_email**](MAIL_API.md#mail_welcome_email) | **Get** /mail/{id}/welcome_email | Resend Mail Welcome Email
[**new_mail**](MAIL_API.md#new_mail) | **Get** /mail/order | Get Mail Ordering Information
[**post_mail_delist**](MAIL_API.md#post_mail_delist) | **Post** /mail/{id}/delist | Delist a Blocked Sender
[**put_mail**](MAIL_API.md#put_mail) | **Put** /mail/order | Validate Mail Order
[**reset_mail_password**](MAIL_API.md#reset_mail_password) | **Get** /mail/{id}/reset_password | Reset Mail Password
[**rules**](MAIL_API.md#rules) | **Get** /mail/{id}/rules | List Deny Rules
[**send_adv_mail**](MAIL_API.md#send_adv_mail) | **Post** /mail/{id}/advsend | Send Email with Advanced Options
[**send_mail**](MAIL_API.md#send_mail) | **Post** /mail/{id}/send | Send Email
[**stats**](MAIL_API.md#stats) | **Get** /mail/{id}/stats | Get Mail Usage Statistics
[**update_mail_alert**](MAIL_API.md#update_mail_alert) | **Put** /mail/{id}/alerts | Update Mail Alert
[**update_mail_info**](MAIL_API.md#update_mail_info) | **Post** /mail/{id} | Update Mail Order
[**view_mail_log**](MAIL_API.md#view_mail_log) | **Get** /mail/{id}/log | View Mail Log


# **add_mail**
> add_mail 


Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_rule**
> add_rule (id: INTEGER_32 ; deny_rule_new: DENY_RULE_NEW ): detachable GENERIC_RESPONSE


Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **deny_rule_new** | [**DENY_RULE_NEW**](DENY_RULE_NEW.md)| These are the fields needed to create a new email deny rule. | 

### Return type

[**GENERIC_RESPONSE**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_mail_alert**
> create_mail_alert (id: INTEGER_32 ; mail_alert_request: MAIL_ALERT_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **mail_alert_request** | [**MAIL_ALERT_REQUEST**](MAIL_ALERT_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_mail_alert**
> delete_mail_alert (id: INTEGER_32 ; alert_id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Delete Mail Alert

Deletes an existing alert definition for the mail service.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **alert_id** | **INTEGER_32**| Alert ID to delete. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_rule**
> delete_rule (id: INTEGER_32 ; rule: STRING_32 ): detachable GENERIC_RESPONSE


Delete Deny Rule

Removes a deny rule from the mail service.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **rule** | **STRING_32**| The ID of the Rules entry. | [default to null]

### Return type

[**GENERIC_RESPONSE**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delist_block**
> delist_block (id: INTEGER_32 ; email:  detachable STRING_32 ): detachable GENERIC_RESPONSE


Remove Email Address from Block List

Removes an email address from the mail service's block lists.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **email** | **STRING_32**| an email address | [optional] [default to null]

### Return type

[**GENERIC_RESPONSE**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_alerts**
> mail_alerts (id: INTEGER_32 ): detachable MAIL_ALERTS_RESPONSE


List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**MAIL_ALERTS_RESPONSE**](MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_blocks**
> mail_blocks (id: INTEGER_32 ): detachable MAIL_BLOCKS


List Blocked Email Addresses

Displays a listing of the blocked email addresses


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**MAIL_BLOCKS**](MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_cancel**
> mail_cancel (id: INTEGER_32 ): detachable MAIL_CANCEL_200_RESPONSE


Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**MAIL_CANCEL_200_RESPONSE**](mailCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_delist**
> mail_delist (id: INTEGER_32 ): detachable MAIL_DELIST_RESPONSE


Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**MAIL_DELIST_RESPONSE**](MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_deliverability**
> mail_deliverability (id: INTEGER_32 ): detachable MAIL_DELIVERABILITY_RESPONSE


Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**MAIL_DELIVERABILITY_RESPONSE**](MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_info**
> mail_info (id: INTEGER_32 ): detachable MAIL_SCHEMA


Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**MAIL_SCHEMA**](MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_invoices**
> mail_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_list**
> mail_list : detachable LIST [MAIL_ROW]


List Mail Orders

Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [MAIL_ROW]**](MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_welcome_email**
> mail_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_mail**
> new_mail : detachable MAIL_ORDER


Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.


### Parameters
This endpoint does not need any parameter.

### Return type

[**MAIL_ORDER**](MailOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_mail_delist**
> post_mail_delist (id: INTEGER_32 ; mail_delist_request: MAIL_DELIST_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **mail_delist_request** | [**MAIL_DELIST_REQUEST**](MAIL_DELIST_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_mail**
> put_mail 


Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reset_mail_password**
> reset_mail_password (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **rules**
> rules (id: INTEGER_32 ): detachable LIST [DENY_RULE_RECORD]


List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

[**LIST [DENY_RULE_RECORD]**](DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **send_adv_mail**
> send_adv_mail (id: INTEGER_32 ; send_mail_adv: SEND_MAIL_ADV ): detachable GENERIC_RESPONSE


Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **send_mail_adv** | [**SEND_MAIL_ADV**](SEND_MAIL_ADV.md)|  | 

### Return type

[**GENERIC_RESPONSE**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **send_mail**
> send_mail (id: INTEGER_32 ; send_mail: SEND_MAIL ): detachable GENERIC_RESPONSE


Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **send_mail** | [**SEND_MAIL**](SEND_MAIL.md)|  | 

### Return type

[**GENERIC_RESPONSE**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **stats**
> stats (id: INTEGER_32 ; time:  detachable STRING_32 ): detachable MAIL_STATS_TYPE


Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **time** | **STRING_32**| The timeframe for the statistics. | [optional] [default to null]

### Return type

[**MAIL_STATS_TYPE**](MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_mail_alert**
> update_mail_alert (id: INTEGER_32 ; mail_alert_update_request: MAIL_ALERT_UPDATE_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Update Mail Alert

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **mail_alert_update_request** | [**MAIL_ALERT_UPDATE_REQUEST**](MAIL_ALERT_UPDATE_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_mail_info**
> update_mail_info (id: STRING_32 )


Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **view_mail_log**
> view_mail_log (id: INTEGER_32 ; id2:  detachable INTEGER_64 ; origin:  detachable STRING_32 ; mx:  detachable STRING_32 ; var_from:  detachable STRING_32 ; to:  detachable STRING_32 ; subject:  detachable STRING_32 ; mailid:  detachable STRING_32 ; skip:  detachable INTEGER_32 ; limit:  detachable INTEGER_32 ; start_date:  detachable INTEGER_64 ; end_date:  detachable INTEGER_64 ; delivered:  detachable STRING_32 ): detachable MAIL_LOG


View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [default to null]
 **id2** | **INTEGER_64**| The ID of your mail order this will be sent through. | [optional] [default to null]
 **origin** | **STRING_32**| originating ip address sending mail | [optional] [default to null]
 **mx** | **STRING_32**| mx record mail was sent to | [optional] [default to null]
 **var_from** | **STRING_32**| from email address | [optional] [default to null]
 **to** | **STRING_32**| to/destination email address | [optional] [default to null]
 **subject** | **STRING_32**| subject containing this string | [optional] [default to null]
 **mailid** | **STRING_32**| mail id | [optional] [default to null]
 **skip** | **INTEGER_32**| number of records to skip for pagination | [optional] [default to 0]
 **limit** | **INTEGER_32**| maximum number of records to return | [optional] [default to 100]
 **start_date** | **INTEGER_64**| earliest date to get emails in unix timestamp format | [optional] [default to null]
 **end_date** | **INTEGER_64**| Latest date to get emails in unix timestamp format. | [optional] [default to null]
 **delivered** | **STRING_32**| Filter emails by whether or not they were delivered. | [optional] [default to null]

### Return type

[**MAIL_LOG**](MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

