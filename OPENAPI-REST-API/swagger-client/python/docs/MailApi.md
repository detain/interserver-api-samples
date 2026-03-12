# myadmin-client-python.MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_mail**](MailApi.md#add_mail) | **POST** /mail/order | Place Mail Order
[**add_rule**](MailApi.md#add_rule) | **POST** /mail/{id}/rules | Create Deny Rule
[**create_mail_alert**](MailApi.md#create_mail_alert) | **POST** /mail/{id}/alerts | Create Mail Alert
[**delete_mail_alert**](MailApi.md#delete_mail_alert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
[**delete_rule**](MailApi.md#delete_rule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
[**delist_block**](MailApi.md#delist_block) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
[**get_mail_alerts**](MailApi.md#get_mail_alerts) | **GET** /mail/{id}/alerts | List Mail Alerts
[**get_mail_blocks**](MailApi.md#get_mail_blocks) | **GET** /mail/{id}/blocks | List Blocked Email Addresses
[**get_mail_delist**](MailApi.md#get_mail_delist) | **GET** /mail/{id}/delist | Get Delist Status
[**get_mail_deliverability**](MailApi.md#get_mail_deliverability) | **GET** /mail/{id}/deliverability | Get Deliverability Metrics
[**get_mail_info**](MailApi.md#get_mail_info) | **GET** /mail/{id} | Get Mail Order
[**get_mail_invoices**](MailApi.md#get_mail_invoices) | **GET** /mail/{id}/invoices | Get Mail Invoices
[**get_mail_list**](MailApi.md#get_mail_list) | **GET** /mail | List Mail Orders
[**get_mail_welcome_email**](MailApi.md#get_mail_welcome_email) | **GET** /mail/{id}/welcome_email | Resend Mail Welcome Email
[**get_new_mail**](MailApi.md#get_new_mail) | **GET** /mail/order | Get Mail Ordering Information
[**get_rules**](MailApi.md#get_rules) | **GET** /mail/{id}/rules | List Deny Rules
[**get_stats**](MailApi.md#get_stats) | **GET** /mail/{id}/stats | Get Mail Usage Statistics
[**mail_cancel**](MailApi.md#mail_cancel) | **DELETE** /mail/{id} | Cancel Mail
[**post_mail_delist**](MailApi.md#post_mail_delist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
[**put_mail**](MailApi.md#put_mail) | **PUT** /mail/order | Validate Mail Order
[**reset_mail_password**](MailApi.md#reset_mail_password) | **GET** /mail/{id}/reset_password | Reset Mail Password
[**send_adv_mail**](MailApi.md#send_adv_mail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
[**send_mail**](MailApi.md#send_mail) | **POST** /mail/{id}/send | Send Email
[**update_mail_alert**](MailApi.md#update_mail_alert) | **PUT** /mail/{id}/alerts | Update Mail Alert
[**update_mail_info**](MailApi.md#update_mail_info) | **POST** /mail/{id} | Update Mail Order
[**view_mail_log**](MailApi.md#view_mail_log) | **GET** /mail/{id}/log | View Mail Log

# **add_mail**
> add_mail()

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))

try:
    # Place Mail Order
    api_instance.add_mail()
except ApiException as e:
    print("Exception when calling MailApi->add_mail: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_rule**
> GenericResponse add_rule(body, id)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.DenyRuleNew() # DenyRuleNew | These are the fields needed to create a new email deny rule.
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Create Deny Rule
    api_response = api_instance.add_rule(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->add_rule: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | 
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_mail_alert**
> SuccessTextResponse create_mail_alert(body, id)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.MailAlertRequest() # MailAlertRequest | 
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Create Mail Alert
    api_response = api_instance.create_mail_alert(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->create_mail_alert: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailAlertRequest**](MailAlertRequest.md)|  | 
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_mail_alert**
> SuccessTextResponse delete_mail_alert(id, alert_id)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.
alert_id = 56 # int | Alert ID to delete.

try:
    # Delete Mail Alert
    api_response = api_instance.delete_mail_alert(id, alert_id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->delete_mail_alert: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **alert_id** | **int**| Alert ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_rule**
> GenericResponse delete_rule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.
rule = 'rule_example' # str | The ID of the Rules entry.

try:
    # Delete Deny Rule
    api_response = api_instance.delete_rule(id, rule)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->delete_rule: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **rule** | **str**| The ID of the Rules entry. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delist_block**
> GenericResponse delist_block(email, id)

Remove Email Address from Block List

Removes an email address from the mail service's block lists.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
email = 'email_example' # str | 
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Remove Email Address from Block List
    api_response = api_instance.delist_block(email, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->delist_block: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **str**|  | 
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_alerts**
> MailAlertsResponse get_mail_alerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # List Mail Alerts
    api_response = api_instance.get_mail_alerts(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_alerts: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_blocks**
> MailBlocks get_mail_blocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # List Blocked Email Addresses
    api_response = api_instance.get_mail_blocks(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_blocks: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_delist**
> MailDelistResponse get_mail_delist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Get Delist Status
    api_response = api_instance.get_mail_delist(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_delist: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_deliverability**
> MailDeliverabilityResponse get_mail_deliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Get Deliverability Metrics
    api_response = api_instance.get_mail_deliverability(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_deliverability: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_info**
> MailSchema get_mail_info(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Get Mail Order
    api_response = api_instance.get_mail_info(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_invoices**
> ChargeInvoiceRows get_mail_invoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Get Mail Invoices
    api_response = api_instance.get_mail_invoices(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_invoices: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_list**
> list[MailRow] get_mail_list()

List Mail Orders

Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))

try:
    # List Mail Orders
    api_response = api_instance.get_mail_list()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_list: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[MailRow]**](MailRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_mail_welcome_email**
> SuccessTextResponse get_mail_welcome_email(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Resend Mail Welcome Email
    api_response = api_instance.get_mail_welcome_email(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_mail_welcome_email: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_new_mail**
> MailOrder get_new_mail()

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))

try:
    # Get Mail Ordering Information
    api_response = api_instance.get_new_mail()
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_new_mail: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**MailOrder**](MailOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_rules**
> list[DenyRuleRecord] get_rules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # List Deny Rules
    api_response = api_instance.get_rules(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_rules: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**list[DenyRuleRecord]**](DenyRuleRecord.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_stats**
> MailStatsType get_stats(id, time=time)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.
time = 'time_example' # str | The timeframe for the statistics. (optional)

try:
    # Get Mail Usage Statistics
    api_response = api_instance.get_stats(id, time=time)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->get_stats: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **time** | **str**| The timeframe for the statistics. | [optional] 

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **mail_cancel**
> InlineResponse2008 mail_cancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Cancel Mail
    api_response = api_instance.mail_cancel(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->mail_cancel: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**InlineResponse2008**](InlineResponse2008.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_mail_delist**
> SuccessTextResponse post_mail_delist(body, id)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.MailDelistRequest() # MailDelistRequest | 
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Delist a Blocked Sender
    api_response = api_instance.post_mail_delist(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->post_mail_delist: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailDelistRequest**](MailDelistRequest.md)|  | 
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_mail**
> put_mail()

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))

try:
    # Validate Mail Order
    api_instance.put_mail()
except ApiException as e:
    print("Exception when calling MailApi->put_mail: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **reset_mail_password**
> SuccessTextResponse reset_mail_password(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Reset Mail Password
    api_response = api_instance.reset_mail_password(id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->reset_mail_password: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **send_adv_mail**
> GenericResponse send_adv_mail(body, id)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.SendMailAdv() # SendMailAdv | 
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Send Email with Advanced Options
    api_response = api_instance.send_adv_mail(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->send_adv_mail: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SendMailAdv**](SendMailAdv.md)|  | 
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **send_mail**
> GenericResponse send_mail(body, id)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.SendMail() # SendMail | 
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Send Email
    api_response = api_instance.send_mail(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->send_mail: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SendMail**](SendMail.md)|  | 
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_mail_alert**
> SuccessTextResponse update_mail_alert(body, id)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
body = myadmin-client-python.MailAlertUpdateRequest() # MailAlertUpdateRequest | 
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Update Mail Alert
    api_response = api_instance.update_mail_alert(body, id)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->update_mail_alert: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  | 
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_mail_info**
> update_mail_info(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 'id_example' # str | The mail service ID. Use `mail_id` from `GET /mail`.

try:
    # Update Mail Order
    api_instance.update_mail_info(id)
except ApiException as e:
    print("Exception when calling MailApi->update_mail_info: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **str**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

void (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **view_mail_log**
> MailLog view_mail_log(id, id=id, origin=origin, mx=mx, _from=_from, to=to, subject=subject, mailid=mailid, skip=skip, limit=limit, start_date=start_date, end_date=end_date, delivered=delivered)

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

### Example
```python
from __future__ import print_function
import time
import myadmin-client-python
from myadmin-client-python.rest import ApiException
from pprint import pprint

# Configure API key authorization: apiKeyAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['X-API-KEY'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-KEY'] = 'Bearer'
# Configure API key authorization: sessionIdCookieAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'
# Configure API key authorization: sessionIdHeaderAuth
configuration = myadmin-client-python.Configuration()
configuration.api_key['sessionid'] = 'YOUR_API_KEY'
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['sessionid'] = 'Bearer'

# create an instance of the API class
api_instance = myadmin-client-python.MailApi(myadmin-client-python.ApiClient(configuration))
id = 56 # int | The mail service ID. Use `mail_id` from `GET /mail`.
id = 789 # int | The ID of your mail order this will be sent through. (optional)
origin = 'origin_example' # str | originating ip address sending mail (optional)
mx = 'mx_example' # str | mx record mail was sent to (optional)
_from = '_from_example' # str | from email address (optional)
to = 'to_example' # str | to/destination email address (optional)
subject = 'subject_example' # str | subject containing this string (optional)
mailid = 'mailid_example' # str | mail id (optional)
skip = 0 # int | number of records to skip for pagination (optional) (default to 0)
limit = 100 # int | maximum number of records to return (optional) (default to 100)
start_date = 789 # int | earliest date to get emails in unix timestamp format (optional)
end_date = 789 # int | Latest date to get emails in unix timestamp format. (optional)
delivered = 'delivered_example' # str | Filter emails by whether or not they were delivered. (optional)

try:
    # View Mail Log
    api_response = api_instance.view_mail_log(id, id=id, origin=origin, mx=mx, _from=_from, to=to, subject=subject, mailid=mailid, skip=skip, limit=limit, start_date=start_date, end_date=end_date, delivered=delivered)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling MailApi->view_mail_log: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **int**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **id** | **int**| The ID of your mail order this will be sent through. | [optional] 
 **origin** | **str**| originating ip address sending mail | [optional] 
 **mx** | **str**| mx record mail was sent to | [optional] 
 **_from** | **str**| from email address | [optional] 
 **to** | **str**| to/destination email address | [optional] 
 **subject** | **str**| subject containing this string | [optional] 
 **mailid** | **str**| mail id | [optional] 
 **skip** | **int**| number of records to skip for pagination | [optional] [default to 0]
 **limit** | **int**| maximum number of records to return | [optional] [default to 100]
 **start_date** | **int**| earliest date to get emails in unix timestamp format | [optional] 
 **end_date** | **int**| Latest date to get emails in unix timestamp format. | [optional] 
 **delivered** | **str**| Filter emails by whether or not they were delivered. | [optional] 

### Return type

[**MailLog**](MailLog.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

