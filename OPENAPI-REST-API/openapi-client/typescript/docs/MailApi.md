# .MailApi

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


# **addMail**
> ServiceOrderPostResponse addMail()

Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example


```typescript
import { createConfiguration, MailApi } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request = {};

const data = await apiInstance.addMail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**ServiceOrderPostResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **addRule**
> GenericResponse addRule(denyRuleNew)

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiAddRuleRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiAddRuleRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
    // These are the fields needed to create a new email deny rule.
  denyRuleNew: {
    user: "mb20682",
    type: "email",
    data: "domeinwo@server.guesshost.net",
  },
};

const data = await apiInstance.addRule(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **denyRuleNew** | **DenyRuleNew**| These are the fields needed to create a new email deny rule. |
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**GenericResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Deny rule created successfully. |  -  |
**400** | The specified resource was not found |  -  |
**401** | Unauthorized |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **createMailAlert**
> SuccessTextResponse createMailAlert(mailAlertRequest)

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiCreateMailAlertRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiCreateMailAlertRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
  
  mailAlertRequest: {
    type: "type_example",
    value: "value_example",
    to: "to_example",
    enabled: "enabled_example",
  },
};

const data = await apiInstance.createMailAlert(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mailAlertRequest** | **MailAlertRequest**|  |
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteMailAlert**
> SuccessTextResponse deleteMailAlert()

Deletes an existing alert definition for the mail service.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiDeleteMailAlertRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiDeleteMailAlertRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
    // Alert ID to delete.
  alertId: 1,
};

const data = await apiInstance.deleteMailAlert(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined
 **alertId** | [**number**] | Alert ID to delete. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **deleteRule**
> GenericResponse deleteRule()

Removes a deny rule from the mail service.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiDeleteRuleRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiDeleteRuleRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
    // The ID of the Rules entry.
  rule: "34",
};

const data = await apiInstance.deleteRule(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined
 **rule** | [**string**] | The ID of the Rules entry. | defaults to undefined


### Return type

**GenericResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Deny rule deleted successfully. |  -  |
**400** | The specified resource was not found |  -  |
**401** | Unauthorized |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **delistBlock**
> GenericResponse delistBlock()

Removes an email address from the mail service\'s block lists.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiDelistBlockRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiDelistBlockRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
    // an email address (optional)
  email: "user@domain.com",
};

const data = await apiInstance.delistBlock(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined
 **email** | [**string**] | an email address | (optional) defaults to undefined


### Return type

**GenericResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Email address removed from block list successfully. |  -  |
**400** | The specified resource was not found |  -  |
**401** | Unauthorized |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailAlerts**
> MailAlertsResponse getMailAlerts()

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetMailAlertsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetMailAlertsRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getMailAlerts(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**MailAlertsResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Alert configuration for the mail service. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailBlocks**
> MailBlocks getMailBlocks()

Displays a listing of the blocked email addresses

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetMailBlocksRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetMailBlocksRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getMailBlocks(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**MailBlocks**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |
**401** | Unauthorized |  -  |
**404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailDelist**
> MailDelistResponse getMailDelist()

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetMailDelistRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetMailDelistRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getMailDelist(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**MailDelistResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Blocklist entries and delist details for the mail service. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailDeliverability**
> MailDeliverabilityResponse getMailDeliverability()

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetMailDeliverabilityRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetMailDeliverabilityRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getMailDeliverability(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**MailDeliverabilityResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Deliverability metrics for the mail service. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailInfo**
> MailSchema getMailInfo()

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetMailInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetMailInfoRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getMailInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**MailSchema**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Mail Information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailInvoices**
> ChargeInvoiceRows getMailInvoices()

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetMailInvoicesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetMailInvoicesRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getMailInvoices(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**ChargeInvoiceRows**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Get Invoices response |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailList**
> Array<MailRow> getMailList()

Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.

### Example


```typescript
import { createConfiguration, MailApi } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request = {};

const data = await apiInstance.getMailList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**Array<MailRow>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | The listing of &#x60;Mail&#x60; services on your account. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getMailWelcomeEmail**
> SuccessTextResponse getMailWelcomeEmail()

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetMailWelcomeEmailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetMailWelcomeEmailRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getMailWelcomeEmail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getNewMail**
> MailOrder getNewMail()

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example


```typescript
import { createConfiguration, MailApi } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request = {};

const data = await apiInstance.getNewMail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**MailOrder**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Mail ordering information. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getRules**
> Array<DenyRuleRecord> getRules()

Returns a listing of all the deny block rules configured for this mail service.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetRulesRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetRulesRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.getRules(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**Array<DenyRuleRecord>**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | List of configured deny rules. |  -  |
**401** | Unauthorized |  -  |
**404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **getStats**
> MailStatsType getStats()

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiGetStatsRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiGetStatsRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
    // The timeframe for the statistics. (optional)
  time: "all",
};

const data = await apiInstance.getStats(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined
 **time** | [**&#39;all&#39; | &#39;billing&#39; | &#39;month&#39; | &#39;7d&#39; | &#39;24h&#39; | &#39;1d&#39; | &#39;1h&#39;**]**Array<&#39;all&#39; &#124; &#39;billing&#39; &#124; &#39;month&#39; &#124; &#39;7d&#39; &#124; &#39;24h&#39; &#124; &#39;1d&#39; &#124; &#39;1h&#39;>** | The timeframe for the statistics. | (optional) defaults to undefined


### Return type

**MailStatsType**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Mail service usage statistics. |  -  |
**401** | Unauthorized |  -  |
**404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **mailCancel**
> MailCancel200Response mailCancel()

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiMailCancelRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiMailCancelRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.mailCancel(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**MailCancel200Response**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Mail Cancel |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **postMailDelist**
> SuccessTextResponse postMailDelist(mailDelistRequest)

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiPostMailDelistRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiPostMailDelistRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
  
  mailDelistRequest: {
    unblock: "unblock_example",
  },
};

const data = await apiInstance.postMailDelist(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mailDelistRequest** | **MailDelistRequest**|  |
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **putMail**
> void putMail()

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example


```typescript
import { createConfiguration, MailApi } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request = {};

const data = await apiInstance.putMail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters
This endpoint does not need any parameter.


### Return type

**void**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validate Mail order response. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **resetMailPassword**
> SuccessTextResponse resetMailPassword()

Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiResetMailPasswordRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiResetMailPasswordRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
};

const data = await apiInstance.resetMailPassword(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **sendAdvMail**
> GenericResponse sendAdvMail(sendMailAdv)

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiSendAdvMailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiSendAdvMailRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
  
  sendMailAdv: {
    subject: "Your Package has been Delivered!",
    body: "The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.",
    _from: {
      email: "user@domain.com",
      name: "John Smith",
    },
    to: [
      {
        email: "user@domain.com",
        name: "John Smith",
      },
    ],
    replyto: [
      {
        email: "user@domain.com",
        name: "John Smith",
      },
    ],
    cc: [
      {
        email: "user@domain.com",
        name: "John Smith",
      },
    ],
    bcc: [
      {
        email: "user@domain.com",
        name: "John Smith",
      },
    ],
    attachments: [
      {
        filename: "message.txt",
        data: "aGVsbG8gdGhlcmUK",
      },
    ],
    id: 5000,
  },
};

const data = await apiInstance.sendAdvMail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendMailAdv** | **SendMailAdv**|  |
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**GenericResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Email queued successfully. |  -  |
**400** | The specified resource was not found |  -  |
**401** | Unauthorized |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **sendMail**
> GenericResponse sendMail(sendMail)

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiSendMailRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiSendMailRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
  
  sendMail: {
    to: "johndoe@company.com",
    _from: "janedoe@company.com",
    subject: "Attention Client",
    body: "This is an email to inform you that something noteworthy happened.",
  },
};

const data = await apiInstance.sendMail(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **sendMail** | **SendMail**|  |
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**GenericResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Email queued successfully. |  -  |
**400** | The specified resource was not found |  -  |
**401** | Unauthorized |  -  |
**404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateMailAlert**
> SuccessTextResponse updateMailAlert(mailAlertUpdateRequest)

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiUpdateMailAlertRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiUpdateMailAlertRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
  
  mailAlertUpdateRequest: {
    alert_id: 1,
    type: "type_example",
    value: "value_example",
    to: "to_example",
    enabled: "enabled_example",
  },
};

const data = await apiInstance.updateMailAlert(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mailAlertUpdateRequest** | **MailAlertUpdateRequest**|  |
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **updateMailInfo**
> SuccessTextResponse updateMailInfo()

Updates mail service metadata for the order, such as stored settings or account details.

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiUpdateMailInfoRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiUpdateMailInfoRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: "id_example",
};

const data = await apiInstance.updateMailInfo(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**string**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined


### Return type

**SuccessTextResponse**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A response indicating the operation completed successfully with a text message. |  -  |
**401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **viewMailLog**
> MailLog viewMailLog()

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 

### Example


```typescript
import { createConfiguration, MailApi } from '';
import type { MailApiViewMailLogRequest } from '';

const configuration = createConfiguration();
const apiInstance = new MailApi(configuration);

const request: MailApiViewMailLogRequest = {
    // The mail service ID. Use `mail_id` from `GET /mail`.
  id: 1,
    // The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from `GET /mail` or `GET /mail/{id}`. (optional)
  id2: 2604,
    // Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. (optional)
  origin: "1.2.3.4",
    // Filter by the MX hostname the relay attempted delivery to.  For example `mx.google.com` would return messages destined for Gmail recipients. Maps to `mxHostname` in the `MailLogEntry` response. (optional)
  mx: "mx.google.com",
    // Filter by SMTP envelope `MAIL FROM` address (exact match).  This is the address the relay used for bounce handling and may differ from the `From:` message header.  For header-level filtering use `headerfrom`. (optional)
  _from: "me@sender.com",
    // Filter by SMTP envelope `RCPT TO` address (exact match).  This is the delivery address used by the relay and may differ from the `To:` header when BCC recipients are involved. (optional)
  to: "you@receiver.com",
    // Filter by email `Subject` header (exact match).  MIME-encoded subjects are decoded automatically in the response. (optional)
  subject: "Your order has shipped",
    // Filter by the relay-assigned mail ID string (exact match).  This corresponds to the `id` field in `MailLogEntry` and to the `text` value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as `185997065c60008840`. (optional)
  mailid: "185997065c60008840",
    // Filter by the `Message-ID` email header using a substring (case-insensitive) match. The `Message-ID` is assigned by the sending mail client and is visible in the `messageId` field of `MailLogEntry`. (optional)
  messageId: "<abc123@yourdomain.com>",
    // Filter by the `Reply-To` message header address (exact match).  Only returns messages where this header was explicitly set. (optional)
  replyto: "replies@sender.com",
    // Filter by the `From` message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope `from` parameter when sending on behalf of another address. (optional)
  headerfrom: "newsletter@sender.com",
    // Filter by delivery status.  `1` returns only messages that were successfully delivered to the destination MX.  `0` returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. (optional)
  delivered: 1,
    // Number of records to skip for pagination.  Use in combination with `limit` to page through large result sets.  Defaults to `0` (no skip). (optional)
  skip: 0,
    // Maximum number of records to return per page.  Defaults to `100`. Maximum allowed value is `10000`.  The response also includes a `total` field with the full matched count so you can calculate the number of pages. (optional)
  limit: 100,
    // Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-15` or `last monday`.  Messages with a `time` value **greater than or equal to** this value will be included. (optional)
  startDate: null,
    // Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-31` or `yesterday`. Messages with a `time` value **less than or equal to** this value will be included. (optional)
  endDate: null,
    // Field to sort results by.  Currently only `time` is supported (sorts by internal row ID which corresponds to chronological order). (optional)
  sort: "time",
    // Sort direction.  `desc` returns newest first (default), `asc` returns oldest first. (optional)
  dir: "desc",
    // Controls how results are grouped.  `recipient` (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and delivery metadata.  `message` collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The `total` count in the response matches the grouping mode. (optional)
  groupby: "recipient",
};

const data = await apiInstance.viewMailLog(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | defaults to undefined
 **id2** | [**number**] | The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;. | (optional) defaults to undefined
 **origin** | [**string**] | Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. | (optional) defaults to undefined
 **mx** | [**string**] | Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response. | (optional) defaults to undefined
 **_from** | [**string**] | Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;. | (optional) defaults to undefined
 **to** | [**string**] | Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved. | (optional) defaults to undefined
 **subject** | [**string**] | Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response. | (optional) defaults to undefined
 **mailid** | [**string**] | Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;. | (optional) defaults to undefined
 **messageId** | [**string**] | Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match. The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;. | (optional) defaults to undefined
 **replyto** | [**string**] | Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set. | (optional) defaults to undefined
 **headerfrom** | [**string**] | Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address. | (optional) defaults to undefined
 **delivered** | [**0 | 1**]**Array<0 &#124; 1>** | Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. | (optional) defaults to undefined
 **skip** | [**number**] | Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip). | (optional) defaults to 0
 **limit** | [**number**] | Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages. | (optional) defaults to 100
 **startDate** | **ViewMailLogStartDateParameter** | Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included. | (optional) defaults to undefined
 **endDate** | **ViewMailLogStartDateParameter** | Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;. Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included. | (optional) defaults to undefined
 **sort** | [**&#39;time&#39;**]**Array<&#39;time&#39;>** | Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order). | (optional) defaults to 'time'
 **dir** | [**&#39;asc&#39; | &#39;desc&#39;**]**Array<&#39;asc&#39; &#124; &#39;desc&#39;>** | Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first. | (optional) defaults to 'desc'
 **groupby** | [**&#39;message&#39; | &#39;recipient&#39;**]**Array<&#39;message&#39; &#124; &#39;recipient&#39;>** | Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode. | (optional) defaults to 'recipient'


### Return type

**MailLog**

### Authorization

[sessionIdCookieAuth](README.md#sessionIdCookieAuth), [apiKeyAuth](README.md#apiKeyAuth), [sessionIdHeaderAuth](README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Paginated list of mail log entries matching the specified filters. |  -  |
**400** | bad input parameter |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


