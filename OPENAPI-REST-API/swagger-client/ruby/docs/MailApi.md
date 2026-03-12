# SwaggerClient::MailApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_mail**](MailApi.md#add_mail) | **POST** /mail/order | Place Mail Order
[**add_rule**](MailApi.md#add_rule) | **POST** /mail/{id}/rules | Create Deny Rule
[**add_rule**](MailApi.md#add_rule) | **POST** /mail/{id}/rules | Create Deny Rule
[**create_mail_alert**](MailApi.md#create_mail_alert) | **POST** /mail/{id}/alerts | Create Mail Alert
[**create_mail_alert**](MailApi.md#create_mail_alert) | **POST** /mail/{id}/alerts | Create Mail Alert
[**delete_mail_alert**](MailApi.md#delete_mail_alert) | **DELETE** /mail/{id}/alerts | Delete Mail Alert
[**delete_rule**](MailApi.md#delete_rule) | **DELETE** /mail/{id}/rules/{rule} | Delete Deny Rule
[**delist_block**](MailApi.md#delist_block) | **POST** /mail/{id}/blocks/delete | Remove Email Address from Block List
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
[**post_mail_delist**](MailApi.md#post_mail_delist) | **POST** /mail/{id}/delist | Delist a Blocked Sender
[**put_mail**](MailApi.md#put_mail) | **PUT** /mail/order | Validate Mail Order
[**reset_mail_password**](MailApi.md#reset_mail_password) | **GET** /mail/{id}/reset_password | Reset Mail Password
[**send_adv_mail**](MailApi.md#send_adv_mail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
[**send_adv_mail**](MailApi.md#send_adv_mail) | **POST** /mail/{id}/advsend | Send Email with Advanced Options
[**send_mail**](MailApi.md#send_mail) | **POST** /mail/{id}/send | Send Email
[**send_mail**](MailApi.md#send_mail) | **POST** /mail/{id}/send | Send Email
[**update_mail_alert**](MailApi.md#update_mail_alert) | **PUT** /mail/{id}/alerts | Update Mail Alert
[**update_mail_alert**](MailApi.md#update_mail_alert) | **PUT** /mail/{id}/alerts | Update Mail Alert
[**update_mail_info**](MailApi.md#update_mail_info) | **POST** /mail/{id} | Update Mail Order
[**view_mail_log**](MailApi.md#view_mail_log) | **GET** /mail/{id}/log | View Mail Log

# **add_mail**
> add_mail

Place Mail Order

Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new

begin
  #Place Mail Order
  api_instance.add_mail
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->add_mail: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **add_rule**
> GenericResponse add_rule(bodyid)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
body = SwaggerClient::DenyRuleNew.new # DenyRuleNew | These are the fields needed to create a new email deny rule.
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Create Deny Rule
  result = api_instance.add_rule(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->add_rule: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DenyRuleNew**](DenyRuleNew.md)| These are the fields needed to create a new email deny rule. | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json



# **add_rule**
> GenericResponse add_rule(usertypedataid)

Create Deny Rule

Adds a new deny rule to automatically block emails that match the specified criteria.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
user = 'user_example' # String | 
type = 'type_example' # String | 
data = 'data_example' # String | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Create Deny Rule
  result = api_instance.add_rule(usertypedataid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->add_rule: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **user** | **String**|  | 
 **type** | **String**|  | 
 **data** | **String**|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json



# **create_mail_alert**
> SuccessTextResponse create_mail_alert(bodyid)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
body = SwaggerClient::MailAlertRequest.new # MailAlertRequest | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Create Mail Alert
  result = api_instance.create_mail_alert(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->create_mail_alert: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailAlertRequest**](MailAlertRequest.md)|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **create_mail_alert**
> SuccessTextResponse create_mail_alert(typevaluetoenabledid)

Create Mail Alert

Creates a new alert for the mail service, such as delivery or quota notifications.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
type = 'type_example' # String | 
value = 'value_example' # String | 
to = 'to_example' # String | 
enabled = 'enabled_example' # String | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Create Mail Alert
  result = api_instance.create_mail_alert(typevaluetoenabledid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->create_mail_alert: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **String**|  | 
 **value** | **String**|  | 
 **to** | **String**|  | 
 **enabled** | **String**|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **delete_mail_alert**
> SuccessTextResponse delete_mail_alert(id, alert_id)

Delete Mail Alert

Deletes an existing alert definition for the mail service.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.
alert_id = 56 # Integer | Alert ID to delete.


begin
  #Delete Mail Alert
  result = api_instance.delete_mail_alert(id, alert_id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->delete_mail_alert: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **alert_id** | **Integer**| Alert ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **delete_rule**
> GenericResponse delete_rule(id, rule)

Delete Deny Rule

Removes a deny rule from the mail service.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.
rule = 'rule_example' # String | The ID of the Rules entry.


begin
  #Delete Deny Rule
  result = api_instance.delete_rule(id, rule)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->delete_rule: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **rule** | **String**| The ID of the Rules entry. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **delist_block**
> GenericResponse delist_block(emailid)

Remove Email Address from Block List

Removes an email address from the mail service's block lists.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
email = 'email_example' # String | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Remove Email Address from Block List
  result = api_instance.delist_block(emailid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->delist_block: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **email** | **String**|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **delist_block**
> GenericResponse delist_block(bodyid)

Remove Email Address from Block List

Removes an email address from the mail service's block lists.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
body = SwaggerClient::EmailAddress.new # EmailAddress | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Remove Email Address from Block List
  result = api_instance.delist_block(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->delist_block: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**EmailAddress**](EmailAddress.md)|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **get_mail_alerts**
> MailAlertsResponse get_mail_alerts(id)

List Mail Alerts

Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #List Mail Alerts
  result = api_instance.get_mail_alerts(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_alerts: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailAlertsResponse**](MailAlertsResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_mail_blocks**
> MailBlocks get_mail_blocks(id)

List Blocked Email Addresses

Displays a listing of the blocked email addresses

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #List Blocked Email Addresses
  result = api_instance.get_mail_blocks(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_blocks: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailBlocks**](MailBlocks.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_mail_delist**
> MailDelistResponse get_mail_delist(id)

Get Delist Status

Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Get Delist Status
  result = api_instance.get_mail_delist(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_delist: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailDelistResponse**](MailDelistResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_mail_deliverability**
> MailDeliverabilityResponse get_mail_deliverability(id)

Get Deliverability Metrics

Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Get Deliverability Metrics
  result = api_instance.get_mail_deliverability(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_deliverability: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailDeliverabilityResponse**](MailDeliverabilityResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_mail_info**
> MailSchema get_mail_info(id)

Get Mail Order

Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Get Mail Order
  result = api_instance.get_mail_info(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**MailSchema**](MailSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_mail_invoices**
> ChargeInvoiceRows get_mail_invoices(id)

Get Mail Invoices

Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Get Mail Invoices
  result = api_instance.get_mail_invoices(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_invoices: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_mail_list**
> Array&lt;MailRow&gt; get_mail_list

List Mail Orders

Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new

begin
  #List Mail Orders
  result = api_instance.get_mail_list
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_list: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Array&lt;MailRow&gt;**](MailRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_mail_welcome_email**
> SuccessTextResponse get_mail_welcome_email(id)

Resend Mail Welcome Email

Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Resend Mail Welcome Email
  result = api_instance.get_mail_welcome_email(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_mail_welcome_email: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_new_mail**
> MailOrder get_new_mail

Get Mail Ordering Information

Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new

begin
  #Get Mail Ordering Information
  result = api_instance.get_new_mail
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_new_mail: #{e}"
end
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



# **get_rules**
> Array&lt;DenyRuleRecord&gt; get_rules(id)

List Deny Rules

Returns a listing of all the deny block rules configured for this mail service.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #List Deny Rules
  result = api_instance.get_rules(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_rules: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**Array&lt;DenyRuleRecord&gt;**](DenyRuleRecord.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_stats**
> MailStatsType get_stats(id, opts)

Get Mail Usage Statistics

Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.
opts = { 
  time: 'time_example' # String | The timeframe for the statistics.
}

begin
  #Get Mail Usage Statistics
  result = api_instance.get_stats(id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->get_stats: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **time** | **String**| The timeframe for the statistics. | [optional] 

### Return type

[**MailStatsType**](MailStatsType.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **mail_cancel**
> InlineResponse2008 mail_cancel(id)

Cancel Mail

Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Cancel Mail
  result = api_instance.mail_cancel(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->mail_cancel: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**InlineResponse2008**](InlineResponse2008.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **post_mail_delist**
> SuccessTextResponse post_mail_delist(bodyid)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
body = SwaggerClient::MailDelistRequest.new # MailDelistRequest | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Delist a Blocked Sender
  result = api_instance.post_mail_delist(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->post_mail_delist: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailDelistRequest**](MailDelistRequest.md)|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_mail_delist**
> SuccessTextResponse post_mail_delist(unblockid)

Delist a Blocked Sender

Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
unblock = 'unblock_example' # String | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Delist a Blocked Sender
  result = api_instance.post_mail_delist(unblockid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->post_mail_delist: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **unblock** | **String**|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **put_mail**
> put_mail

Validate Mail Order

Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new

begin
  #Validate Mail Order
  api_instance.put_mail
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->put_mail: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **reset_mail_password**
> SuccessTextResponse reset_mail_password(id)

Reset Mail Password

Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Reset Mail Password
  result = api_instance.reset_mail_password(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->reset_mail_password: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **send_adv_mail**
> GenericResponse send_adv_mail(bodyid)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
body = SwaggerClient::SendMailAdv.new # SendMailAdv | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Send Email with Advanced Options
  result = api_instance.send_adv_mail(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->send_adv_mail: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SendMailAdv**](SendMailAdv.md)|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json



# **send_adv_mail**
> GenericResponse send_adv_mail(subjectbodyfromtoreplytoccbccattachmentsid2id)

Send Email with Advanced Options

Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
subject = 'subject_example' # String | 
body = 'body_example' # String | 
from = SwaggerClient::EmailAddressName.new # EmailAddressName | 
to = [SwaggerClient::EmailAddressName.new] # Array<EmailAddressName> | 
replyto = [SwaggerClient::EmailAddressName.new] # Array<EmailAddressName> | 
cc = [SwaggerClient::EmailAddressName.new] # Array<EmailAddressName> | 
bcc = [SwaggerClient::EmailAddressName.new] # Array<EmailAddressName> | 
attachments = [SwaggerClient::MailAttachment.new] # Array<MailAttachment> | 
id2 = 789 # Integer | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Send Email with Advanced Options
  result = api_instance.send_adv_mail(subjectbodyfromtoreplytoccbccattachmentsid2id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->send_adv_mail: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **subject** | **String**|  | 
 **body** | **String**|  | 
 **from** | [**EmailAddressName**](.md)|  | 
 **to** | [**Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  | 
 **replyto** | [**Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  | 
 **cc** | [**Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  | 
 **bcc** | [**Array&lt;EmailAddressName&gt;**](EmailAddressName.md)|  | 
 **attachments** | [**Array&lt;MailAttachment&gt;**](MailAttachment.md)|  | 
 **id2** | **Integer**|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json



# **send_mail**
> GenericResponse send_mail(bodyid)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
body = SwaggerClient::SendMail.new # SendMail | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Send Email
  result = api_instance.send_mail(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->send_mail: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SendMail**](SendMail.md)|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json



# **send_mail**
> GenericResponse send_mail(tofromsubjectbodyid)

Send Email

Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
to = 'to_example' # String | 
from = 'from_example' # String | 
subject = 'subject_example' # String | 
body = 'body_example' # String | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Send Email
  result = api_instance.send_mail(tofromsubjectbodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->send_mail: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **to** | **String**|  | 
 **from** | **String**|  | 
 **subject** | **String**|  | 
 **body** | **String**|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**GenericResponse**](GenericResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, application/x-www-form-urlencoded
 - **Accept**: application/json



# **update_mail_alert**
> SuccessTextResponse update_mail_alert(bodyid)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
body = SwaggerClient::MailAlertUpdateRequest.new # MailAlertUpdateRequest | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Update Mail Alert
  result = api_instance.update_mail_alert(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->update_mail_alert: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MailAlertUpdateRequest**](MailAlertUpdateRequest.md)|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_mail_alert**
> SuccessTextResponse update_mail_alert(alert_idtypevaluetoenabledid)

Update Mail Alert

Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
alert_id = 56 # Integer | 
type = 'type_example' # String | 
value = 'value_example' # String | 
to = 'to_example' # String | 
enabled = 'enabled_example' # String | 
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Update Mail Alert
  result = api_instance.update_mail_alert(alert_idtypevaluetoenabledid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->update_mail_alert: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **alert_id** | **Integer**|  | 
 **type** | **String**|  | 
 **value** | **String**|  | 
 **to** | **String**|  | 
 **enabled** | **String**|  | 
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_mail_info**
> update_mail_info(id)

Update Mail Order

Updates mail service metadata for the order, such as stored settings or account details.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 'id_example' # String | The mail service ID. Use `mail_id` from `GET /mail`.


begin
  #Update Mail Order
  api_instance.update_mail_info(id)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->update_mail_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **view_mail_log**
> MailLog view_mail_log(id, opts)

View Mail Log

Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.

### Example
```ruby
# load the gem
require 'swagger_client'
# setup authorization
SwaggerClient.configure do |config|
  # Configure API key authorization: apiKeyAuth
  config.api_key['X-API-KEY'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['X-API-KEY'] = 'Bearer'

  # Configure API key authorization: sessionIdCookieAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'

  # Configure API key authorization: sessionIdHeaderAuth
  config.api_key['sessionid'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  #config.api_key_prefix['sessionid'] = 'Bearer'
end

api_instance = SwaggerClient::MailApi.new
id = 56 # Integer | The mail service ID. Use `mail_id` from `GET /mail`.
opts = { 
  id: 789, # Integer | The ID of your mail order this will be sent through.
  origin: 'origin_example', # String | originating ip address sending mail
  mx: 'mx_example', # String | mx record mail was sent to
  from: 'from_example', # String | from email address
  to: 'to_example', # String | to/destination email address
  subject: 'subject_example', # String | subject containing this string
  mailid: 'mailid_example', # String | mail id
  skip: 0, # Integer | number of records to skip for pagination
  limit: 100, # Integer | maximum number of records to return
  start_date: 789, # Integer | earliest date to get emails in unix timestamp format
  end_date: 789, # Integer | Latest date to get emails in unix timestamp format.
  delivered: 'delivered_example' # String | Filter emails by whether or not they were delivered.
}

begin
  #View Mail Log
  result = api_instance.view_mail_log(id, opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling MailApi->view_mail_log: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;. | 
 **id** | **Integer**| The ID of your mail order this will be sent through. | [optional] 
 **origin** | **String**| originating ip address sending mail | [optional] 
 **mx** | **String**| mx record mail was sent to | [optional] 
 **from** | **String**| from email address | [optional] 
 **to** | **String**| to/destination email address | [optional] 
 **subject** | **String**| subject containing this string | [optional] 
 **mailid** | **String**| mail id | [optional] 
 **skip** | **Integer**| number of records to skip for pagination | [optional] [default to 0]
 **limit** | **Integer**| maximum number of records to return | [optional] [default to 100]
 **start_date** | **Integer**| earliest date to get emails in unix timestamp format | [optional] 
 **end_date** | **Integer**| Latest date to get emails in unix timestamp format. | [optional] 
 **delivered** | **String**| Filter emails by whether or not they were delivered. | [optional] 

### Return type

[**MailLog**](MailLog.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



