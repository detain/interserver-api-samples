# openapi.api.MailApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addMail**](MailApi.md#addmail) | **POST** /mail/order | Place Mail Order
[**addRule**](MailApi.md#addrule) | **POST** /mail/{id}/rules | Create Deny Rule
[**createMailAlert**](MailApi.md#createmailalert) | **POST** /mail/{id}/alerts | Create Mail Alert
[**deleteMailAlert**](MailApi.md#deletemailalert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
[**deleteRule**](MailApi.md#deleterule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
[**delistBlock**](MailApi.md#delistblock) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
[**getMailAlerts**](MailApi.md#getmailalerts) | **GET** /mail/{id}/alerts | List Mail Alerts
[**getMailBlocks**](MailApi.md#getmailblocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
[**getMailDelist**](MailApi.md#getmaildelist) | **GET** /mail/{id}/delist | Get Delist Status
[**getMailDeliverability**](MailApi.md#getmaildeliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
[**getMailInfo**](MailApi.md#getmailinfo) | **GET** /mail/{id} | Get Mail Order
[**getMailInvoices**](MailApi.md#getmailinvoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
[**getMailList**](MailApi.md#getmaillist) | **GET** /mail | List Mail Orders
[**getMailWelcomeEmail**](MailApi.md#getmailwelcomeemail) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
[**getNewMail**](MailApi.md#getnewmail) | **GET** /mail/order | Get Mail Ordering Information
[**getRules**](MailApi.md#getrules) | **GET** /mail/{id}/rules | List Deny Rules
[**getStats**](MailApi.md#getstats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
[**mailCancel**](MailApi.md#mailcancel) | **DELETE** /mail/{id} | Cancel Mail
[**postMailDelist**](MailApi.md#postmaildelist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
[**putMail**](MailApi.md#putmail) | **PUT** /mail/order | Validate Mail Order
[**resetMailPassword**](MailApi.md#resetmailpassword) | **GET** /mail/{id}/reset_password | Reset Mail Password
[**sendAdvMail**](MailApi.md#sendadvmail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
[**sendMail**](MailApi.md#sendmail) | **POST** /mail/{id}/send | Send Email
[**updateMailAlert**](MailApi.md#updatemailalert) | **PUT** /mail/{id}/alerts | Update Mail Alert
[**updateMailInfo**](MailApi.md#updatemailinfo) | **POST** /mail/{id} | Update Mail Order
[**viewMailLog**](MailApi.md#viewmaillog) | **GET** /mail/{id}/log | View Mail Log


# **addMail**
> addMail()

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();

try {
    api_instance.addMail();
} catch (e) {
    print('Exception when calling MailApi->addMail: $e\n');
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **addRule**
> GenericResponse addRule(id, denyRuleNew)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final denyRuleNew = DenyRuleNew(); // DenyRuleNew | These are the fields needed to create a new email deny rule.

try {
    final result = api_instance.addRule(id, denyRuleNew);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->addRule: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **denyRuleNew** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createMailAlert**
> SuccessTextResponse createMailAlert(id, mailAlertRequest)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final mailAlertRequest = MailAlertRequest(); // MailAlertRequest | 

try {
    final result = api_instance.createMailAlert(id, mailAlertRequest);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->createMailAlert: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **mailAlertRequest** | [**MailAlertRequest**](MailAlertRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteMailAlert**
> SuccessTextResponse deleteMailAlert(id, alertId)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final alertId = 56; // int | Alert ID to delete.

try {
    final result = api_instance.deleteMailAlert(id, alertId);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->deleteMailAlert: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **alertId** | **int**| Alert ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteRule**
> GenericResponse deleteRule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final rule = 34; // String | The ID of the Rules entry.

try {
    final result = api_instance.deleteRule(id, rule);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->deleteRule: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **rule** | **String**| The ID of the Rules entry. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delistBlock**
> GenericResponse delistBlock(id, email)

Remove Email Address from Block List

Removes an email address from the mail service's block lists.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final email = email_example; // String | an email address

try {
    final result = api_instance.delistBlock(id, email);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->delistBlock: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **email** | **String**| an email address | [optional] 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailAlerts**
> MailAlertsResponse getMailAlerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getMailAlerts(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailAlerts: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailBlocks**
> MailBlocks getMailBlocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getMailBlocks(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailBlocks: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailDelist**
> MailDelistResponse getMailDelist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getMailDelist(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailDelist: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailDeliverability**
> MailDeliverabilityResponse getMailDeliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getMailDeliverability(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailDeliverability: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailInfo**
> MailSchema getMailInfo(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getMailInfo(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailInvoices**
> ChargeInvoiceRows getMailInvoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getMailInvoices(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailInvoices: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailList**
> List<MailRow> getMailList()

List Mail Orders

Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();

try {
    final result = api_instance.getMailList();
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailList: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<MailRow>**](MailRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getMailWelcomeEmail**
> SuccessTextResponse getMailWelcomeEmail(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getMailWelcomeEmail(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getMailWelcomeEmail: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getNewMail**
> MailOrder getNewMail()

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();

try {
    final result = api_instance.getNewMail();
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getNewMail: $e\n');
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRules**
> List<DenyRuleRecord> getRules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.getRules(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getRules: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**List<DenyRuleRecord>**](DenyRuleRecord.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getStats**
> MailStatsType getStats(id, time)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final time = time_example; // String | The timeframe for the statistics.

try {
    final result = api_instance.getStats(id, time);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->getStats: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **time** | **String**| The timeframe for the statistics. | [optional] 

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mailCancel**
> MailCancel200Response mailCancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.mailCancel(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->mailCancel: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**MailCancel200Response**](MailCancel200Response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **postMailDelist**
> SuccessTextResponse postMailDelist(id, mailDelistRequest)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final mailDelistRequest = MailDelistRequest(); // MailDelistRequest | 

try {
    final result = api_instance.postMailDelist(id, mailDelistRequest);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->postMailDelist: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **mailDelistRequest** | [**MailDelistRequest**](MailDelistRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **putMail**
> putMail()

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();

try {
    api_instance.putMail();
} catch (e) {
    print('Exception when calling MailApi->putMail: $e\n');
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **resetMailPassword**
> SuccessTextResponse resetMailPassword(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    final result = api_instance.resetMailPassword(id);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->resetMailPassword: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendAdvMail**
> GenericResponse sendAdvMail(id, sendMailAdv)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final sendMailAdv = SendMailAdv(); // SendMailAdv | 

try {
    final result = api_instance.sendAdvMail(id, sendMailAdv);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->sendAdvMail: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **sendMailAdv** | [**SendMailAdv**](SendMailAdv.md)|  | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendMail**
> GenericResponse sendMail(id, sendMail)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final sendMail = SendMail(); // SendMail | 

try {
    final result = api_instance.sendMail(id, sendMail);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->sendMail: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **sendMail** | [**SendMail**](SendMail.md)|  | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMailAlert**
> SuccessTextResponse updateMailAlert(id, mailAlertUpdateRequest)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final mailAlertUpdateRequest = MailAlertUpdateRequest(); // MailAlertUpdateRequest | 

try {
    final result = api_instance.updateMailAlert(id, mailAlertUpdateRequest);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->updateMailAlert: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **mailAlertUpdateRequest** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateMailInfo**
> updateMailInfo(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = id_example; // String | The mail service ID. Use `mail_id` from `GET /mail`.

try {
    api_instance.updateMailInfo(id);
} catch (e) {
    print('Exception when calling MailApi->updateMailInfo: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The mail service ID. Use `mail_id` from `GET /mail`. | 

### Return type

void (empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **viewMailLog**
> MailLog viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered)

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: sessionIdCookieAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdCookieAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: apiKeyAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('apiKeyAuth').apiKeyPrefix = 'Bearer';
// TODO Configure API key authorization: sessionIdHeaderAuth
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('sessionIdHeaderAuth').apiKeyPrefix = 'Bearer';

final api_instance = MailApi();
final id = 56; // int | The mail service ID. Use `mail_id` from `GET /mail`.
final id2 = 2604; // int | The ID of your mail order this will be sent through.
final origin = 1.2.3.4; // String | originating ip address sending mail
final mx = mx.google.com; // String | mx record mail was sent to
final from = me@sender.com; // String | from email address
final to = you@receiver.com; // String | to/destination email address
final subject = Support; // String | subject containing this string
final mailid = 185997065c60008840; // String | mail id
final skip = 1000; // int | number of records to skip for pagination
final limit = 1000; // int | maximum number of records to return
final startDate = 1641781008; // int | earliest date to get emails in unix timestamp format
final endDate = 1673317008; // int | Latest date to get emails in unix timestamp format.
final delivered = delivered_example; // String | Filter emails by whether or not they were delivered.

try {
    final result = api_instance.viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered);
    print(result);
} catch (e) {
    print('Exception when calling MailApi->viewMailLog: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use `mail_id` from `GET /mail`. | 
 **id2** | **int**| The ID of your mail order this will be sent through. | [optional] 
 **origin** | **String**| originating ip address sending mail | [optional] 
 **mx** | **String**| mx record mail was sent to | [optional] 
 **from** | **String**| from email address | [optional] 
 **to** | **String**| to/destination email address | [optional] 
 **subject** | **String**| subject containing this string | [optional] 
 **mailid** | **String**| mail id | [optional] 
 **skip** | **int**| number of records to skip for pagination | [optional] [default to 0]
 **limit** | **int**| maximum number of records to return | [optional] [default to 100]
 **startDate** | **int**| earliest date to get emails in unix timestamp format | [optional] 
 **endDate** | **int**| Latest date to get emails in unix timestamp format. | [optional] 
 **delivered** | **String**| Filter emails by whether or not they were delivered. | [optional] 

### Return type

[**MailLog**](MailLog.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

