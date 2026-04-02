# MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**addMail**](MailApi.md#addmail) | **POST** /mail/order | Place Mail Order |
| [**addRule**](MailApi.md#addrule) | **POST** /mail/{id}/rules | Create Deny Rule |
| [**createMailAlert**](MailApi.md#createmailalert) | **POST** /mail/{id}/alerts | Create Mail Alert |
| [**deleteMailAlert**](MailApi.md#deletemailalert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert |
| [**deleteRule**](MailApi.md#deleterule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule |
| [**delistBlock**](MailApi.md#delistblock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List |
| [**getMailAlerts**](MailApi.md#getmailalerts) | **GET** /mail/{id}/alerts | List Mail Alerts |
| [**getMailBlocks**](MailApi.md#getmailblocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses |
| [**getMailDelist**](MailApi.md#getmaildelist) | **GET** /mail/{id}/delist | Get Delist Status |
| [**getMailDeliverability**](MailApi.md#getmaildeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics |
| [**getMailInfo**](MailApi.md#getmailinfo) | **GET** /mail/{id} | Get Mail Order |
| [**getMailInvoices**](MailApi.md#getmailinvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices |
| [**getMailList**](MailApi.md#getmaillist) | **GET** /mail | List Mail Orders |
| [**getMailWelcomeEmail**](MailApi.md#getmailwelcomeemail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email |
| [**getNewMail**](MailApi.md#getnewmail) | **GET** /mail/order | Get Mail Ordering Information |
| [**getRules**](MailApi.md#getrules) | **GET** /mail/{id}/rules | List Deny Rules |
| [**getStats**](MailApi.md#getstats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics |
| [**mailCancel**](MailApi.md#mailcancel) | **DELETE** /mail/{id} | Cancel Mail |
| [**postMailDelist**](MailApi.md#postmaildelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender |
| [**putMail**](MailApi.md#putmail) | **PUT** /mail/order | Validate Mail Order |
| [**resetMailPassword**](MailApi.md#resetmailpassword) | **GET** /mail/{id}/reset_password | Reset Mail Password |
| [**sendAdvMail**](MailApi.md#sendadvmail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options |
| [**sendMail**](MailApi.md#sendmail) | **POST** /mail/{id}/send | Send Email |
| [**updateMailAlert**](MailApi.md#updatemailalert) | **PUT** /mail/{id}/alerts | Update Mail Alert |
| [**updateMailInfo**](MailApi.md#updatemailinfo) | **POST** /mail/{id} | Update Mail Order |
| [**viewMailLog**](MailApi.md#viewmaillog) | **GET** /mail/{id}/log | View Mail Log |



## addMail

> ServiceOrderPostResponse addMail()

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { AddMailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  try {
    const data = await api.addMail();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**ServiceOrderPostResponse**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Order placed successfully. Use the invoice ID to proceed to payment via &#x60;/pay/{method}/{invoices}&#x60; or view the invoice at &#x60;/billing/invoices/{id}&#x60;. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## addRule

> GenericResponse addRule(id, denyRuleNew)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { AddRuleRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // DenyRuleNew | These are the fields needed to create a new email deny rule.
    denyRuleNew: {"user":"mb20682","type":"email","data":"domeinwo@server.guesshost.net"},
  } satisfies AddRuleRequest;

  try {
    const data = await api.addRule(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **denyRuleNew** | [DenyRuleNew](DenyRuleNew.md) | These are the fields needed to create a new email deny rule. | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deny rule created successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## createMailAlert

> SuccessTextResponse createMailAlert(id, mailAlertRequest)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { CreateMailAlertRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // MailAlertRequest
    mailAlertRequest: ...,
  } satisfies CreateMailAlertRequest;

  try {
    const data = await api.createMailAlert(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **mailAlertRequest** | [MailAlertRequest](MailAlertRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteMailAlert

> SuccessTextResponse deleteMailAlert(id, alertId)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { DeleteMailAlertRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // number | Alert ID to delete.
    alertId: 56,
  } satisfies DeleteMailAlertRequest;

  try {
    const data = await api.deleteMailAlert(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **alertId** | `number` | Alert ID to delete. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## deleteRule

> GenericResponse deleteRule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { DeleteRuleRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // string | The ID of the Rules entry.
    rule: 34,
  } satisfies DeleteRuleRequest;

  try {
    const data = await api.deleteRule(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **rule** | `string` | The ID of the Rules entry. | [Defaults to `undefined`] |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deny rule deleted successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## delistBlock

> GenericResponse delistBlock(id, email)

Remove Email Address from Block List

Removes an email address from the mail service\&#39;s block lists.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { DelistBlockRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // string | an email address (optional)
    email: email_example,
  } satisfies DelistBlockRequest;

  try {
    const data = await api.delistBlock(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **email** | `string` | an email address | [Optional] [Defaults to `undefined`] |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `multipart/form-data`, `application/json`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email address removed from block list successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailAlerts

> MailAlertsResponse getMailAlerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailAlertsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetMailAlertsRequest;

  try {
    const data = await api.getMailAlerts(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Alert configuration for the mail service. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailBlocks

> MailBlocks getMailBlocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailBlocksRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetMailBlocksRequest;

  try {
    const data = await api.getMailBlocks(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailDelist

> MailDelistResponse getMailDelist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailDelistRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetMailDelistRequest;

  try {
    const data = await api.getMailDelist(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Blocklist entries and delist details for the mail service. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailDeliverability

> MailDeliverabilityResponse getMailDeliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailDeliverabilityRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetMailDeliverabilityRequest;

  try {
    const data = await api.getMailDeliverability(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Deliverability metrics for the mail service. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailInfo

> MailSchema getMailInfo(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetMailInfoRequest;

  try {
    const data = await api.getMailInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail Information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailInvoices

> ChargeInvoiceRows getMailInvoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailInvoicesRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetMailInvoicesRequest;

  try {
    const data = await api.getMailInvoices(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Get Invoices response |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailList

> Array&lt;MailRow&gt; getMailList()

List Mail Orders

Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailListRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  try {
    const data = await api.getMailList();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;MailRow&gt;**](MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Mail&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getMailWelcomeEmail

> SuccessTextResponse getMailWelcomeEmail(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetMailWelcomeEmailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetMailWelcomeEmailRequest;

  try {
    const data = await api.getMailWelcomeEmail(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getNewMail

> MailOrder getNewMail()

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetNewMailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  try {
    const data = await api.getNewMail();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**MailOrder**](MailOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail ordering information. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getRules

> Array&lt;DenyRuleRecord&gt; getRules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetRulesRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies GetRulesRequest;

  try {
    const data = await api.getRules(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**Array&lt;DenyRuleRecord&gt;**](DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | List of configured deny rules. |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## getStats

> MailStatsType getStats(id, time)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { GetStatsRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // 'all' | 'billing' | 'month' | '7d' | '24h' | '1d' | '1h' | The timeframe for the statistics. (optional)
    time: time_example,
  } satisfies GetStatsRequest;

  try {
    const data = await api.getStats(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **time** | `all`, `billing`, `month`, `7d`, `24h`, `1d`, `1h` | The timeframe for the statistics. | [Optional] [Defaults to `undefined`] [Enum: all, billing, month, 7d, 24h, 1d, 1h] |

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail service usage statistics. |  -  |
| **401** | Unauthorized |  -  |
| **404** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## mailCancel

> MailCancel200Response mailCancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { MailCancelRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies MailCancelRequest;

  try {
    const data = await api.mailCancel(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**MailCancel200Response**](MailCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Mail Cancel |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## postMailDelist

> SuccessTextResponse postMailDelist(id, mailDelistRequest)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { PostMailDelistRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // MailDelistRequest
    mailDelistRequest: ...,
  } satisfies PostMailDelistRequest;

  try {
    const data = await api.postMailDelist(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **mailDelistRequest** | [MailDelistRequest](MailDelistRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## putMail

> putMail()

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { PutMailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  try {
    const data = await api.putMail();
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters

This endpoint does not need any parameter.

### Return type

`void` (Empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Validate Mail order response. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## resetMailPassword

> SuccessTextResponse resetMailPassword(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { ResetMailPasswordRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
  } satisfies ResetMailPasswordRequest;

  try {
    const data = await api.resetMailPassword(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## sendAdvMail

> GenericResponse sendAdvMail(id, sendMailAdv)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { SendAdvMailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // SendMailAdv
    sendMailAdv: {"subject":"Welcome","body":"Hello","from":{"email":"user@domain.com"},"to":[{"email":"someone@client.com","name":"Mr Client"}],"attachments":[{"filename":"message.txt","data":"base64_encoded_contents"}],"id":66},
  } satisfies SendAdvMailRequest;

  try {
    const data = await api.sendAdvMail(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **sendMailAdv** | [SendMailAdv](SendMailAdv.md) |  | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email queued successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## sendMail

> GenericResponse sendMail(id, sendMail)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { SendMailRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // SendMail
    sendMail: ...,
  } satisfies SendMailRequest;

  try {
    const data = await api.sendMail(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **sendMail** | [SendMail](SendMail.md) |  | |

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `application/x-www-form-urlencoded`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Email queued successfully. |  -  |
| **400** | The specified resource was not found |  -  |
| **401** | Unauthorized |  -  |
| **404** | The specified resource was not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateMailAlert

> SuccessTextResponse updateMailAlert(id, mailAlertUpdateRequest)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { UpdateMailAlertRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // MailAlertUpdateRequest
    mailAlertUpdateRequest: ...,
  } satisfies UpdateMailAlertRequest;

  try {
    const data = await api.updateMailAlert(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **mailAlertUpdateRequest** | [MailAlertUpdateRequest](MailAlertUpdateRequest.md) |  | |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: `application/json`, `multipart/form-data`
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## updateMailInfo

> SuccessTextResponse updateMailInfo(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { UpdateMailInfoRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // string | The mail service ID. Use `mail_id` from `GET /mail`.
    id: id_example,
  } satisfies UpdateMailInfoRequest;

  try {
    const data = await api.updateMailInfo(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `string` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | A response indicating the operation completed successfully with a text message. |  -  |
| **401** | Unauthorized |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)


## viewMailLog

> MailLog viewMailLog(id, id2, origin, mx, from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby)

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the &#x60;groupby&#x60; parameter.  By default (&#x60;groupby&#x3D;recipient&#x60;), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and &#x60;mxHostname&#x60; values.  Set &#x60;groupby&#x3D;message&#x60; to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by &#x60;skip&#x60; and &#x60;limit&#x60;.  The &#x60;total&#x60; in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60;, &#x60;last monday&#x60;, or &#x60;2024-01-01 00:00:00&#x60;.  Examples: &#x60;startDate&#x3D;1704067200&amp;endDate&#x3D;1706745599&#x60; or &#x60;startDate&#x3D;2024-01-01&amp;endDate&#x3D;2024-01-31&#x60;.  **Sorting** is controlled by &#x60;sort&#x60; and &#x60;dir&#x60;.  Currently the only sort key is &#x60;time&#x60; (default), which orders by internal row ID.  **Delivery status** can be filtered with the &#x60;delivered&#x60; parameter: &#x60;delivered&#x3D;1&#x60; returns only successfully delivered messages; &#x60;delivered&#x3D;0&#x60; returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (&#x60;from&#x60;, &#x60;to&#x60;) and message headers (&#x60;headerfrom&#x60; for the &#x60;From:&#x60; header, &#x60;replyto&#x60; for &#x60;Reply-To:&#x60;). These may differ when a message is sent on behalf of another address.  The &#x60;mailid&#x60; parameter corresponds to the &#x60;id&#x60; field in the returned &#x60;MailLogEntry&#x60; objects, **not** the &#x60;_id&#x60; field.  It also matches the transaction ID returned in the &#x60;text&#x60; field of a successful send response.  The &#x60;messageId&#x60; parameter searches the &#x60;Message-ID&#x60; email header (case-insensitive substring match). 

### Example

```ts
import {
  Configuration,
  MailApi,
} from '';
import type { ViewMailLogRequest } from '';

async function example() {
  console.log("🚀 Testing  SDK...");
  const config = new Configuration({ 
    // To configure API key authorization: sessionIdCookieAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: apiKeyAuth
    apiKey: "YOUR API KEY",
    // To configure API key authorization: sessionIdHeaderAuth
    apiKey: "YOUR API KEY",
  });
  const api = new MailApi(config);

  const body = {
    // number | The mail service ID. Use `mail_id` from `GET /mail`.
    id: 56,
    // number | The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from `GET /mail` or `GET /mail/{id}`. (optional)
    id2: 2604,
    // string | Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. (optional)
    origin: 1.2.3.4,
    // string | Filter by the MX hostname the relay attempted delivery to.  For example `mx.google.com` would return messages destined for Gmail recipients. Maps to `mxHostname` in the `MailLogEntry` response. (optional)
    mx: mx.google.com,
    // string | Filter by SMTP envelope `MAIL FROM` address (exact match).  This is the address the relay used for bounce handling and may differ from the `From:` message header.  For header-level filtering use `headerfrom`. (optional)
    from: me@sender.com,
    // string | Filter by SMTP envelope `RCPT TO` address (exact match).  This is the delivery address used by the relay and may differ from the `To:` header when BCC recipients are involved. (optional)
    to: you@receiver.com,
    // string | Filter by email `Subject` header (exact match).  MIME-encoded subjects are decoded automatically in the response. (optional)
    subject: Your order has shipped,
    // string | Filter by the relay-assigned mail ID string (exact match).  This corresponds to the `id` field in `MailLogEntry` and to the `text` value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as `185997065c60008840`. (optional)
    mailid: 185997065c60008840,
    // string | Filter by the `Message-ID` email header using a substring (case-insensitive) match. The `Message-ID` is assigned by the sending mail client and is visible in the `messageId` field of `MailLogEntry`. (optional)
    messageId: <abc123@yourdomain.com>,
    // string | Filter by the `Reply-To` message header address (exact match).  Only returns messages where this header was explicitly set. (optional)
    replyto: replies@sender.com,
    // string | Filter by the `From` message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope `from` parameter when sending on behalf of another address. (optional)
    headerfrom: newsletter@sender.com,
    // 0 | 1 | Filter by delivery status.  `1` returns only messages that were successfully delivered to the destination MX.  `0` returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. (optional)
    delivered: 1,
    // number | Number of records to skip for pagination.  Use in combination with `limit` to page through large result sets.  Defaults to `0` (no skip). (optional)
    skip: 0,
    // number | Maximum number of records to return per page.  Defaults to `100`. Maximum allowed value is `10000`.  The response also includes a `total` field with the full matched count so you can calculate the number of pages. (optional)
    limit: 100,
    // ViewMailLogStartDateParameter | Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-15` or `last monday`.  Messages with a `time` value **greater than or equal to** this value will be included. (optional)
    startDate: 1641781008,
    // ViewMailLogStartDateParameter | Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-31` or `yesterday`. Messages with a `time` value **less than or equal to** this value will be included. (optional)
    endDate: 1673317008,
    // 'time' | Field to sort results by.  Currently only `time` is supported (sorts by internal row ID which corresponds to chronological order). (optional)
    sort: time,
    // 'asc' | 'desc' | Sort direction.  `desc` returns newest first (default), `asc` returns oldest first. (optional)
    dir: desc,
    // 'message' | 'recipient' | Controls how results are grouped.  `recipient` (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and delivery metadata.  `message` collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The `total` count in the response matches the grouping mode. (optional)
    groupby: recipient,
  } satisfies ViewMailLogRequest;

  try {
    const data = await api.viewMailLog(body);
    console.log(data);
  } catch (error) {
    console.error(error);
  }
}

// Run the test
example().catch(console.error);
```

### Parameters


| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `number` | The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | [Defaults to `undefined`] |
| **id2** | `number` | The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from &#x60;GET /mail&#x60; or &#x60;GET /mail/{id}&#x60;. | [Optional] [Defaults to `undefined`] |
| **origin** | `string` | Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address. | [Optional] [Defaults to `undefined`] |
| **mx** | `string` | Filter by the MX hostname the relay attempted delivery to.  For example &#x60;mx.google.com&#x60; would return messages destined for Gmail recipients. Maps to &#x60;mxHostname&#x60; in the &#x60;MailLogEntry&#x60; response. | [Optional] [Defaults to `undefined`] |
| **from** | `string` | Filter by SMTP envelope &#x60;MAIL FROM&#x60; address (exact match).  This is the address the relay used for bounce handling and may differ from the &#x60;From:&#x60; message header.  For header-level filtering use &#x60;headerfrom&#x60;. | [Optional] [Defaults to `undefined`] |
| **to** | `string` | Filter by SMTP envelope &#x60;RCPT TO&#x60; address (exact match).  This is the delivery address used by the relay and may differ from the &#x60;To:&#x60; header when BCC recipients are involved. | [Optional] [Defaults to `undefined`] |
| **subject** | `string` | Filter by email &#x60;Subject&#x60; header (exact match).  MIME-encoded subjects are decoded automatically in the response. | [Optional] [Defaults to `undefined`] |
| **mailid** | `string` | Filter by the relay-assigned mail ID string (exact match).  This corresponds to the &#x60;id&#x60; field in &#x60;MailLogEntry&#x60; and to the &#x60;text&#x60; value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as &#x60;185997065c60008840&#x60;. | [Optional] [Defaults to `undefined`] |
| **messageId** | `string` | Filter by the &#x60;Message-ID&#x60; email header using a substring (case-insensitive) match. The &#x60;Message-ID&#x60; is assigned by the sending mail client and is visible in the &#x60;messageId&#x60; field of &#x60;MailLogEntry&#x60;. | [Optional] [Defaults to `undefined`] |
| **replyto** | `string` | Filter by the &#x60;Reply-To&#x60; message header address (exact match).  Only returns messages where this header was explicitly set. | [Optional] [Defaults to `undefined`] |
| **headerfrom** | `string` | Filter by the &#x60;From&#x60; message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope &#x60;from&#x60; parameter when sending on behalf of another address. | [Optional] [Defaults to `undefined`] |
| **delivered** | `0`, `1` | Filter by delivery status.  &#x60;1&#x60; returns only messages that were successfully delivered to the destination MX.  &#x60;0&#x60; returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status. | [Optional] [Defaults to `undefined`] [Enum: 0, 1] |
| **skip** | `number` | Number of records to skip for pagination.  Use in combination with &#x60;limit&#x60; to page through large result sets.  Defaults to &#x60;0&#x60; (no skip). | [Optional] [Defaults to `0`] |
| **limit** | `number` | Maximum number of records to return per page.  Defaults to &#x60;100&#x60;. Maximum allowed value is &#x60;10000&#x60;.  The response also includes a &#x60;total&#x60; field with the full matched count so you can calculate the number of pages. | [Optional] [Defaults to `100`] |
| **startDate** | [](.md) | Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60; or &#x60;last monday&#x60;.  Messages with a &#x60;time&#x60; value **greater than or equal to** this value will be included. | [Optional] [Defaults to `undefined`] |
| **endDate** | [](.md) | Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by &#x60;strtotime()&#x60; such as &#x60;2024-01-31&#x60; or &#x60;yesterday&#x60;. Messages with a &#x60;time&#x60; value **less than or equal to** this value will be included. | [Optional] [Defaults to `undefined`] |
| **sort** | `time` | Field to sort results by.  Currently only &#x60;time&#x60; is supported (sorts by internal row ID which corresponds to chronological order). | [Optional] [Defaults to `&#39;time&#39;`] [Enum: time] |
| **dir** | `asc`, `desc` | Sort direction.  &#x60;desc&#x60; returns newest first (default), &#x60;asc&#x60; returns oldest first. | [Optional] [Defaults to `&#39;desc&#39;`] [Enum: asc, desc] |
| **groupby** | `message`, `recipient` | Controls how results are grouped.  &#x60;recipient&#x60; (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and delivery metadata.  &#x60;message&#x60; collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The &#x60;total&#x60; count in the response matches the grouping mode. | [Optional] [Defaults to `&#39;recipient&#39;`] [Enum: message, recipient] |

### Return type

[**MailLog**](MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Paginated list of mail log entries matching the specified filters. |  -  |
| **400** | bad input parameter |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#api-endpoints) [[Back to Model list]](../README.md#models) [[Back to README]](../README.md)

