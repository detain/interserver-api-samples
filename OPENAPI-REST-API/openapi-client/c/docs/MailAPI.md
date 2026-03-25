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
// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
//
mail_log_t* MailAPI_viewMailLog(apiClient_t *apiClient, int *id, long id2, char *origin, char *mx, char *from, char *to, char *subject, char *mailid, char *messageId, char *replyto, char *headerfrom, int *delivered, int *skip, int *limit, view_mail_log_start_date_parameter_t *startDate, view_mail_log_start_date_parameter_t *endDate, interserver_management_api_viewMailLog_sort_e sort, interserver_management_api_viewMailLog_dir_e dir, interserver_management_api_viewMailLog_groupby_e groupby);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
**id2** | **long** | The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;. | [optional] 
**origin** | **char \*** | Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. | [optional] 
**mx** | **char \*** | Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response. | [optional] 
**from** | **char \*** | Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;. | [optional] 
**to** | **char \*** | Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved. | [optional] 
**subject** | **char \*** | Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response. | [optional] 
**mailid** | **char \*** | Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;. | [optional] 
**messageId** | **char \*** | Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match.  The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;. | [optional] 
**replyto** | **char \*** | Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set. | [optional] 
**headerfrom** | **char \*** | Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address. | [optional] 
**delivered** | **int \*** | Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. | [optional] 
**skip** | **int \*** | Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip). | [optional] [default to 0]
**limit** | **int \*** | Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages. | [optional] [default to 100]
**startDate** | **[view_mail_log_start_date_parameter_t](.md) \*** | Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included. | [optional] 
**endDate** | **[view_mail_log_start_date_parameter_t](.md) \*** | Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;.  Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included. | [optional] 
**sort** | **interserver_management_api_viewMailLog_sort_e** | Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order). | [optional] [default to &#39;time&#39;]
**dir** | **interserver_management_api_viewMailLog_dir_e** | Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first. | [optional] [default to &#39;desc&#39;]
**groupby** | **interserver_management_api_viewMailLog_groupby_e** | Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode. | [optional] [default to &#39;recipient&#39;]

### Return type

[mail_log_t](mail_log.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

