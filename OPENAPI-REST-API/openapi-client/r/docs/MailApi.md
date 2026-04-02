# MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddMail**](MailApi.md#AddMail) | **POST** /mail/order | Place Mail Order
[**AddRule**](MailApi.md#AddRule) | **POST** /mail/{id}/rules | Create Deny Rule
[**CreateMailAlert**](MailApi.md#CreateMailAlert) | **POST** /mail/{id}/alerts | Create Mail Alert
[**DeleteMailAlert**](MailApi.md#DeleteMailAlert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
[**DeleteRule**](MailApi.md#DeleteRule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
[**DelistBlock**](MailApi.md#DelistBlock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
[**GetMailAlerts**](MailApi.md#GetMailAlerts) | **GET** /mail/{id}/alerts | List Mail Alerts
[**GetMailBlocks**](MailApi.md#GetMailBlocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
[**GetMailDelist**](MailApi.md#GetMailDelist) | **GET** /mail/{id}/delist | Get Delist Status
[**GetMailDeliverability**](MailApi.md#GetMailDeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
[**GetMailInfo**](MailApi.md#GetMailInfo) | **GET** /mail/{id} | Get Mail Order
[**GetMailInvoices**](MailApi.md#GetMailInvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
[**GetMailList**](MailApi.md#GetMailList) | **GET** /mail | List Mail Orders
[**GetMailWelcomeEmail**](MailApi.md#GetMailWelcomeEmail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
[**GetNewMail**](MailApi.md#GetNewMail) | **GET** /mail/order | Get Mail Ordering Information
[**GetRules**](MailApi.md#GetRules) | **GET** /mail/{id}/rules | List Deny Rules
[**GetStats**](MailApi.md#GetStats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
[**MailCancel**](MailApi.md#MailCancel) | **DELETE** /mail/{id} | Cancel Mail
[**PostMailDelist**](MailApi.md#PostMailDelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
[**PutMail**](MailApi.md#PutMail) | **PUT** /mail/order | Validate Mail Order
[**ResetMailPassword**](MailApi.md#ResetMailPassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
[**SendAdvMail**](MailApi.md#SendAdvMail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
[**SendMail**](MailApi.md#SendMail) | **POST** /mail/{id}/send | Send Email
[**UpdateMailAlert**](MailApi.md#UpdateMailAlert) | **PUT** /mail/{id}/alerts | Update Mail Alert
[**UpdateMailInfo**](MailApi.md#UpdateMailInfo) | **POST** /mail/{id} | Update Mail Order
[**ViewMailLog**](MailApi.md#ViewMailLog) | **GET** /mail/{id}/log | View Mail Log


# **AddMail**
> ServiceOrderPostResponse AddMail()

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example
```R
library(openapi)

# Place Mail Order
#

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddMail(data_file = "result.txt")
result <- api_instance$AddMail()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
| **401** | Unauthorized |  -  |

# **AddRule**
> GenericResponse AddRule(id, deny_rule_new)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```R
library(openapi)

# Create Deny Rule
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_deny_rule_new <- DenyRuleNew$new("domain", "data_example", "user_example") # DenyRuleNew | These are the fields needed to create a new email deny rule.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddRule(var_id, var_deny_rule_newdata_file = "result.txt")
result <- api_instance$AddRule(var_id, var_deny_rule_new)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **deny_rule_new** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deny rule created successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

# **CreateMailAlert**
> SuccessTextResponse CreateMailAlert(id, mail_alert_request)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```R
library(openapi)

# Create Mail Alert
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_mail_alert_request <- MailAlertRequest$new("type_example", "value_example", "to_example", "enabled_example") # MailAlertRequest | 

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CreateMailAlert(var_id, var_mail_alert_requestdata_file = "result.txt")
result <- api_instance$CreateMailAlert(var_id, var_mail_alert_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **mail_alert_request** | [**MailAlertRequest**](MailAlertRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteMailAlert**
> SuccessTextResponse DeleteMailAlert(id, alert_id)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example
```R
library(openapi)

# Delete Mail Alert
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_alert_id <- 56 # integer | Alert ID to delete.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteMailAlert(var_id, var_alert_iddata_file = "result.txt")
result <- api_instance$DeleteMailAlert(var_id, var_alert_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **alert_id** | **integer**| Alert ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **DeleteRule**
> GenericResponse DeleteRule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example
```R
library(openapi)

# Delete Deny Rule
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_rule <- "34" # character | The ID of the Rules entry.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteRule(var_id, var_ruledata_file = "result.txt")
result <- api_instance$DeleteRule(var_id, var_rule)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **rule** | **character**| The ID of the Rules entry. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deny rule deleted successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

# **DelistBlock**
> GenericResponse DelistBlock(id, email = var.email)

Remove Email Address from Block List

Removes an email address from the mail service's block lists.

### Example
```R
library(openapi)

# Remove Email Address from Block List
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_email <- "email_example" # character | an email address (Optional)

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DelistBlock(var_id, email = var_emaildata_file = "result.txt")
result <- api_instance$DelistBlock(var_id, email = var_email)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **email** | **character**| an email address | [optional] 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email address removed from block list successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

# **GetMailAlerts**
> MailAlertsResponse GetMailAlerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example
```R
library(openapi)

# List Mail Alerts
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailAlerts(var_iddata_file = "result.txt")
result <- api_instance$GetMailAlerts(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Alert configuration for the mail service. |  -  |
| **401** | Unauthorized |  -  |

# **GetMailBlocks**
> MailBlocks GetMailBlocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example
```R
library(openapi)

# List Blocked Email Addresses
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailBlocks(var_iddata_file = "result.txt")
result <- api_instance$GetMailBlocks(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

# **GetMailDelist**
> MailDelistResponse GetMailDelist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example
```R
library(openapi)

# Get Delist Status
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailDelist(var_iddata_file = "result.txt")
result <- api_instance$GetMailDelist(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Blocklist entries and delist details for the mail service. |  -  |
| **401** | Unauthorized |  -  |

# **GetMailDeliverability**
> MailDeliverabilityResponse GetMailDeliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example
```R
library(openapi)

# Get Deliverability Metrics
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailDeliverability(var_iddata_file = "result.txt")
result <- api_instance$GetMailDeliverability(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deliverability metrics for the mail service. |  -  |
| **401** | Unauthorized |  -  |

# **GetMailInfo**
> MailSchema GetMailInfo(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example
```R
library(openapi)

# Get Mail Order
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailInfo(var_iddata_file = "result.txt")
result <- api_instance$GetMailInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail Information. |  -  |
| **401** | Unauthorized |  -  |

# **GetMailInvoices**
> ChargeInvoiceRows GetMailInvoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example
```R
library(openapi)

# Get Mail Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetMailInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

# **GetMailList**
> array[MailRow] GetMailList()

List Mail Orders

Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.

### Example
```R
library(openapi)

# List Mail Orders
#

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailList(data_file = "result.txt")
result <- api_instance$GetMailList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[MailRow]**](MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Mail&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetMailWelcomeEmail**
> SuccessTextResponse GetMailWelcomeEmail(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example
```R
library(openapi)

# Resend Mail Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetMailWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetMailWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **GetNewMail**
> MailOrder GetNewMail()

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example
```R
library(openapi)

# Get Mail Ordering Information
#

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewMail(data_file = "result.txt")
result <- api_instance$GetNewMail()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**MailOrder**](MailOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail ordering information. |  -  |
| **401** | Unauthorized |  -  |

# **GetRules**
> array[DenyRuleRecord] GetRules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example
```R
library(openapi)

# List Deny Rules
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetRules(var_iddata_file = "result.txt")
result <- api_instance$GetRules(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**array[DenyRuleRecord]**](DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | List of configured deny rules. |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

# **GetStats**
> MailStatsType GetStats(id, time = var.time)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example
```R
library(openapi)

# Get Mail Usage Statistics
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_time <- "time_example" # character | The timeframe for the statistics. (Optional)

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetStats(var_id, time = var_timedata_file = "result.txt")
result <- api_instance$GetStats(var_id, time = var_time)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **time** | Enum [all, billing, month, 7d, 24h, 1d, 1h] | The timeframe for the statistics. | [optional] 

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail service usage statistics. |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

# **MailCancel**
> MailCancel200Response MailCancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```R
library(openapi)

# Cancel Mail
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$MailCancel(var_iddata_file = "result.txt")
result <- api_instance$MailCancel(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailCancel200Response**](mailCancel_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail Cancel |  -  |
| **401** | Unauthorized |  -  |

# **PostMailDelist**
> SuccessTextResponse PostMailDelist(id, mail_delist_request)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.

### Example
```R
library(openapi)

# Delist a Blocked Sender
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_mail_delist_request <- MailDelistRequest$new("unblock_example") # MailDelistRequest | 

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostMailDelist(var_id, var_mail_delist_requestdata_file = "result.txt")
result <- api_instance$PostMailDelist(var_id, var_mail_delist_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **mail_delist_request** | [**MailDelistRequest**](MailDelistRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **PutMail**
> PutMail()

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example
```R
library(openapi)

# Validate Mail Order
#

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutMail()
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate Mail order response. |  -  |
| **401** | Unauthorized |  -  |

# **ResetMailPassword**
> SuccessTextResponse ResetMailPassword(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.

### Example
```R
library(openapi)

# Reset Mail Password
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ResetMailPassword(var_iddata_file = "result.txt")
result <- api_instance$ResetMailPassword(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **SendAdvMail**
> GenericResponse SendAdvMail(id, send_mail_adv)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.

### Example
```R
library(openapi)

# Send Email with Advanced Options
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_send_mail_adv <- SendMailAdv$new("subject_example", "body_example", EmailAddressName$new("email_example", "name_example"), c(EmailAddressName$new("email_example", "name_example")), c(EmailAddressName$new("email_example", "name_example")), c(EmailAddressName$new("email_example", "name_example")), c(EmailAddressName$new("email_example", "name_example")), c(MailAttachment$new("filename_example", "data_example")), 123) # SendMailAdv | 

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$SendAdvMail(var_id, var_send_mail_advdata_file = "result.txt")
result <- api_instance$SendAdvMail(var_id, var_send_mail_adv)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **send_mail_adv** | [**SendMailAdv**](SendMailAdv.md)|  | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email queued successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

# **SendMail**
> GenericResponse SendMail(id, send_mail)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.

### Example
```R
library(openapi)

# Send Email
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_send_mail <- SendMail$new("to_example", "from_example", "subject_example", "body_example") # SendMail | 

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$SendMail(var_id, var_send_maildata_file = "result.txt")
result <- api_instance$SendMail(var_id, var_send_mail)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **send_mail** | [**SendMail**](SendMail.md)|  | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email queued successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

# **UpdateMailAlert**
> SuccessTextResponse UpdateMailAlert(id, mail_alert_update_request)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.

### Example
```R
library(openapi)

# Update Mail Alert
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_mail_alert_update_request <- MailAlertUpdateRequest$new(123, "type_example", "value_example", "to_example", "enabled_example") # MailAlertUpdateRequest | 

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateMailAlert(var_id, var_mail_alert_update_requestdata_file = "result.txt")
result <- api_instance$UpdateMailAlert(var_id, var_mail_alert_update_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **mail_alert_update_request** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateMailInfo**
> SuccessTextResponse UpdateMailInfo(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example
```R
library(openapi)

# Update Mail Order
#
# prepare function argument(s)
var_id <- "id_example" # character | The mail service ID. Use `mail_id` from `GET /mail`.

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateMailInfo(var_iddata_file = "result.txt")
result <- api_instance$UpdateMailInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

# **ViewMailLog**
> MailLog ViewMailLog(id, id2 = var.id2, origin = var.origin, mx = var.mx, from = var.from, to = var.to, subject = var.subject, mailid = var.mailid, message_id = var.message_id, replyto = var.replyto, headerfrom = var.headerfrom, delivered = var.delivered, skip = 0, limit = 100, start_date = var.start_date, end_date = var.end_date, sort = "time", dir = "desc", groupby = "recipient")

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 

### Example
```R
library(openapi)

# View Mail Log
#
# prepare function argument(s)
var_id <- 56 # integer | The mail service ID. Use `mail_id` from `GET /mail`.
var_id2 <- 2604 # integer | The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from `GET /mail` or `GET /mail/{id}`. (Optional)
var_origin <- "1.2.3.4" # character | Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. (Optional)
var_mx <- "mx.google.com" # character | Filter by the MX hostname the relay attempted delivery to.  For example `mx.google.com` would return messages destined for Gmail recipients. Maps to `mxHostname` in the `MailLogEntry` response. (Optional)
var_from <- "me@sender.com" # character | Filter by SMTP envelope `MAIL FROM` address (exact match).  This is the address the relay used for bounce handling and may differ from the `From:` message header.  For header-level filtering use `headerfrom`. (Optional)
var_to <- "you@receiver.com" # character | Filter by SMTP envelope `RCPT TO` address (exact match).  This is the delivery address used by the relay and may differ from the `To:` header when BCC recipients are involved. (Optional)
var_subject <- "Your order has shipped" # character | Filter by email `Subject` header (exact match).  MIME-encoded subjects are decoded automatically in the response. (Optional)
var_mailid <- "185997065c60008840" # character | Filter by the relay-assigned mail ID string (exact match).  This corresponds to the `id` field in `MailLogEntry` and to the `text` value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as `185997065c60008840`. (Optional)
var_message_id <- "<abc123@yourdomain.com>" # character | Filter by the `Message-ID` email header using a substring (case-insensitive) match. The `Message-ID` is assigned by the sending mail client and is visible in the `messageId` field of `MailLogEntry`. (Optional)
var_replyto <- "replies@sender.com" # character | Filter by the `Reply-To` message header address (exact match).  Only returns messages where this header was explicitly set. (Optional)
var_headerfrom <- "newsletter@sender.com" # character | Filter by the `From` message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope `from` parameter when sending on behalf of another address. (Optional)
var_delivered <- 1 # integer | Filter by delivery status.  `1` returns only messages that were successfully delivered to the destination MX.  `0` returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. (Optional)
var_skip <- 0 # integer | Number of records to skip for pagination.  Use in combination with `limit` to page through large result sets.  Defaults to `0` (no skip). (Optional)
var_limit <- 100 # integer | Maximum number of records to return per page.  Defaults to `100`. Maximum allowed value is `10000`.  The response also includes a `total` field with the full matched count so you can calculate the number of pages. (Optional)
var_start_date <- viewMailLog_startDate_parameter$new() # ViewMailLogStartDateParameter | Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-15` or `last monday`.  Messages with a `time` value **greater than or equal to** this value will be included. (Optional)
var_end_date <- viewMailLog_startDate_parameter$new() # ViewMailLogStartDateParameter | Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-31` or `yesterday`. Messages with a `time` value **less than or equal to** this value will be included. (Optional)
var_sort <- "time" # character | Field to sort results by.  Currently only `time` is supported (sorts by internal row ID which corresponds to chronological order). (Optional)
var_dir <- "desc" # character | Sort direction.  `desc` returns newest first (default), `asc` returns oldest first. (Optional)
var_groupby <- "recipient" # character | Controls how results are grouped.  `recipient` (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and delivery metadata.  `message` collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The `total` count in the response matches the grouping mode. (Optional)

api_instance <- MailApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$ViewMailLog(var_id, id2 = var_id2, origin = var_origin, mx = var_mx, from = var_from, to = var_to, subject = var_subject, mailid = var_mailid, message_id = var_message_id, replyto = var_replyto, headerfrom = var_headerfrom, delivered = var_delivered, skip = var_skip, limit = var_limit, start_date = var_start_date, end_date = var_end_date, sort = var_sort, dir = var_dir, groupby = var_groupbydata_file = "result.txt")
result <- api_instance$ViewMailLog(var_id, id2 = var_id2, origin = var_origin, mx = var_mx, from = var_from, to = var_to, subject = var_subject, mailid = var_mailid, message_id = var_message_id, replyto = var_replyto, headerfrom = var_headerfrom, delivered = var_delivered, skip = var_skip, limit = var_limit, start_date = var_start_date, end_date = var_end_date, sort = var_sort, dir = var_dir, groupby = var_groupby)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **id2** | **integer**| The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;. | [optional] 
 **origin** | **character**| Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. | [optional] 
 **mx** | **character**| Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response. | [optional] 
 **from** | **character**| Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;. | [optional] 
 **to** | **character**| Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved. | [optional] 
 **subject** | **character**| Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response. | [optional] 
 **mailid** | **character**| Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;. | [optional] 
 **message_id** | **character**| Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match. The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;. | [optional] 
 **replyto** | **character**| Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set. | [optional] 
 **headerfrom** | **character**| Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address. | [optional] 
 **delivered** | Enum [0, 1] | Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. | [optional] 
 **skip** | **integer**| Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip). | [optional] [default to 0]
 **limit** | **integer**| Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages. | [optional] [default to 100]
 **start_date** | [**ViewMailLogStartDateParameter**](.md)| Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included. | [optional] 
 **end_date** | [**ViewMailLogStartDateParameter**](.md)| Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;. Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included. | [optional] 
 **sort** | Enum [time] | Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order). | [optional] [default to &quot;time&quot;]
 **dir** | Enum [asc, desc] | Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first. | [optional] [default to &quot;desc&quot;]
 **groupby** | Enum [message, recipient] | Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode. | [optional] [default to &quot;recipient&quot;]

### Return type

[**MailLog**](MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Paginated list of mail log entries matching the specified filters. |  -  |
| **400** | bad input parameter |  -  |

