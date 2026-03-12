# MailAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MailAPI_addMail**](MailAPI.md#MailAPI_addMail) | **POST** /mail/order | Place Mail Order
[**MailAPI_addRule**](MailAPI.md#MailAPI_addRule) | **POST** /mail/{id}/rules | Create Deny Rule
[**MailAPI_createMailAlert**](MailAPI.md#MailAPI_createMailAlert) | **POST** /mail/{id}/alerts | Create Mail Alert
[**MailAPI_deleteMailAlert**](MailAPI.md#MailAPI_deleteMailAlert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
[**MailAPI_deleteRule**](MailAPI.md#MailAPI_deleteRule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
[**MailAPI_delistBlock**](MailAPI.md#MailAPI_delistBlock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
[**MailAPI_getMailAlerts**](MailAPI.md#MailAPI_getMailAlerts) | **GET** /mail/{id}/alerts | List Mail Alerts
[**MailAPI_getMailBlocks**](MailAPI.md#MailAPI_getMailBlocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
[**MailAPI_getMailDelist**](MailAPI.md#MailAPI_getMailDelist) | **GET** /mail/{id}/delist | Get Delist Status
[**MailAPI_getMailDeliverability**](MailAPI.md#MailAPI_getMailDeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
[**MailAPI_getMailInfo**](MailAPI.md#MailAPI_getMailInfo) | **GET** /mail/{id} | Get Mail Order
[**MailAPI_getMailInvoices**](MailAPI.md#MailAPI_getMailInvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
[**MailAPI_getMailList**](MailAPI.md#MailAPI_getMailList) | **GET** /mail | List Mail Orders
[**MailAPI_getMailWelcomeEmail**](MailAPI.md#MailAPI_getMailWelcomeEmail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
[**MailAPI_getNewMail**](MailAPI.md#MailAPI_getNewMail) | **GET** /mail/order | Get Mail Ordering Information
[**MailAPI_getRules**](MailAPI.md#MailAPI_getRules) | **GET** /mail/{id}/rules | List Deny Rules
[**MailAPI_getStats**](MailAPI.md#MailAPI_getStats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
[**MailAPI_mailCancel**](MailAPI.md#MailAPI_mailCancel) | **DELETE** /mail/{id} | Cancel Mail
[**MailAPI_postMailDelist**](MailAPI.md#MailAPI_postMailDelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
[**MailAPI_putMail**](MailAPI.md#MailAPI_putMail) | **PUT** /mail/order | Validate Mail Order
[**MailAPI_resetMailPassword**](MailAPI.md#MailAPI_resetMailPassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
[**MailAPI_sendAdvMail**](MailAPI.md#MailAPI_sendAdvMail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
[**MailAPI_sendMail**](MailAPI.md#MailAPI_sendMail) | **POST** /mail/{id}/send | Send Email
[**MailAPI_updateMailAlert**](MailAPI.md#MailAPI_updateMailAlert) | **PUT** /mail/{id}/alerts | Update Mail Alert
[**MailAPI_updateMailInfo**](MailAPI.md#MailAPI_updateMailInfo) | **POST** /mail/{id} | Update Mail Order
[**MailAPI_viewMailLog**](MailAPI.md#MailAPI_viewMailLog) | **GET** /mail/{id}/log | View Mail Log


# **MailAPI_addMail**
```c
// Place Mail Order
//
// Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
//
void MailAPI_addMail(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_addRule**
```c
// Create Deny Rule
//
// Adds a new deny rule to automatically block emails that match the specified criteria.
//
generic_response_t* MailAPI_addRule(apiClient_t *apiClient, int *id, deny_rule_new_t *deny_rule_new);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**deny_rule_new** | **[deny_rule_new_t](deny_rule_new.md) \*** | These are the fields needed to create a new email deny rule. | 

### Return type

[generic_response_t](generic_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_createMailAlert**
```c
// Create Mail Alert
//
// Creates a new alert for the mail service, such as delivery or quota notifications.
//
success_text_response_t* MailAPI_createMailAlert(apiClient_t *apiClient, int *id, mail_alert_request_t *mail_alert_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**mail_alert_request** | **[mail_alert_request_t](mail_alert_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_deleteMailAlert**
```c
// Delete Mail Alert
//
// Deletes an existing alert definition for the mail service.
//
success_text_response_t* MailAPI_deleteMailAlert(apiClient_t *apiClient, int *id, int *alert_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**alert_id** | **int \*** | Alert ID to delete. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_deleteRule**
```c
// Delete Deny Rule
//
// Removes a deny rule from the mail service.
//
generic_response_t* MailAPI_deleteRule(apiClient_t *apiClient, int *id, char *rule);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**rule** | **char \*** | The ID of the Rules entry. | 

### Return type

[generic_response_t](generic_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_delistBlock**
```c
// Remove Email Address from Block List
//
// Removes an email address from the mail service's block lists.
//
generic_response_t* MailAPI_delistBlock(apiClient_t *apiClient, int *id, char *email);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**email** | **char \*** | an email address | [optional] 

### Return type

[generic_response_t](generic_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailAlerts**
```c
// List Mail Alerts
//
// Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
//
mail_alerts_response_t* MailAPI_getMailAlerts(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[mail_alerts_response_t](mail_alerts_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailBlocks**
```c
// List Blocked Email Addresses
//
// Displays a listing of the blocked email addresses
//
mail_blocks_t* MailAPI_getMailBlocks(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[mail_blocks_t](mail_blocks.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailDelist**
```c
// Get Delist Status
//
// Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
//
mail_delist_response_t* MailAPI_getMailDelist(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[mail_delist_response_t](mail_delist_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailDeliverability**
```c
// Get Deliverability Metrics
//
// Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
//
mail_deliverability_response_t* MailAPI_getMailDeliverability(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[mail_deliverability_response_t](mail_deliverability_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailInfo**
```c
// Get Mail Order
//
// Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
//
mail_schema_t* MailAPI_getMailInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[mail_schema_t](mail_schema.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailInvoices**
```c
// Get Mail Invoices
//
// Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
//
charge_invoice_rows_t* MailAPI_getMailInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailList**
```c
// List Mail Orders
//
// Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
//
list_t* MailAPI_getMailList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](mail_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getMailWelcomeEmail**
```c
// Resend Mail Welcome Email
//
// Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
//
success_text_response_t* MailAPI_getMailWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getNewMail**
```c
// Get Mail Ordering Information
//
// Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
//
mail_order_t* MailAPI_getNewMail(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[mail_order_t](mail_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getRules**
```c
// List Deny Rules
//
// Returns a listing of all the deny block rules configured for this mail service.
//
list_t* MailAPI_getRules(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[list_t](deny_rule_record.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_getStats**
```c
// Get Mail Usage Statistics
//
// Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
//
mail_stats_type_t* MailAPI_getStats(apiClient_t *apiClient, int *id, interserver_management_api_getStats_time_e time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**time** | **interserver_management_api_getStats_time_e** | The timeframe for the statistics. | [optional] 

### Return type

[mail_stats_type_t](mail_stats_type.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_mailCancel**
```c
// Cancel Mail
//
// Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
//
mail_cancel_200_response_t* MailAPI_mailCancel(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[mail_cancel_200_response_t](mail_cancel_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_postMailDelist**
```c
// Delist a Blocked Sender
//
// Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
//
success_text_response_t* MailAPI_postMailDelist(apiClient_t *apiClient, int *id, mail_delist_request_t *mail_delist_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**mail_delist_request** | **[mail_delist_request_t](mail_delist_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_putMail**
```c
// Validate Mail Order
//
// Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
//
void MailAPI_putMail(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_resetMailPassword**
```c
// Reset Mail Password
//
// Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
//
success_text_response_t* MailAPI_resetMailPassword(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_sendAdvMail**
```c
// Send Email with Advanced Options
//
// Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
//
generic_response_t* MailAPI_sendAdvMail(apiClient_t *apiClient, int *id, send_mail_adv_t *send_mail_adv);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**send_mail_adv** | **[send_mail_adv_t](send_mail_adv.md) \*** |  | 

### Return type

[generic_response_t](generic_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_sendMail**
```c
// Send Email
//
// Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
//
generic_response_t* MailAPI_sendMail(apiClient_t *apiClient, int *id, send_mail_t *send_mail);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**send_mail** | **[send_mail_t](send_mail.md) \*** |  | 

### Return type

[generic_response_t](generic_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_updateMailAlert**
```c
// Update Mail Alert
//
// Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
//
success_text_response_t* MailAPI_updateMailAlert(apiClient_t *apiClient, int *id, mail_alert_update_request_t *mail_alert_update_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**mail_alert_update_request** | **[mail_alert_update_request_t](mail_alert_update_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_updateMailInfo**
```c
// Update Mail Order
//
// Updates mail service metadata for the order, such as stored settings or account details.
//
void MailAPI_updateMailInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MailAPI_viewMailLog**
```c
// View Mail Log
//
// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
//
mail_log_t* MailAPI_viewMailLog(apiClient_t *apiClient, int *id, long id2, char *origin, char *mx, char *from, char *to, char *subject, char *mailid, int *skip, int *limit, long startDate, long endDate, interserver_management_api_viewMailLog_delivered_e delivered);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**id2** | **long** | The ID of your mail order this will be sent through. | [optional] 
**origin** | **char \*** | originating ip address sending mail | [optional] 
**mx** | **char \*** | mx record mail was sent to | [optional] 
**from** | **char \*** | from email address | [optional] 
**to** | **char \*** | to/destination email address | [optional] 
**subject** | **char \*** | subject containing this string | [optional] 
**mailid** | **char \*** | mail id | [optional] 
**skip** | **int \*** | number of records to skip for pagination | [optional] [default to 0]
**limit** | **int \*** | maximum number of records to return | [optional] [default to 100]
**startDate** | **long** | earliest date to get emails in unix timestamp format | [optional] 
**endDate** | **long** | Latest date to get emails in unix timestamp format. | [optional] 
**delivered** | **interserver_management_api_viewMailLog_delivered_e** | Filter emails by whether or not they were delivered. | [optional] 

### Return type

[mail_log_t](mail_log.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

