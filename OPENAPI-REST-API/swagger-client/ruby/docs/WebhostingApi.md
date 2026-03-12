# SwaggerClient::WebhostingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_website**](WebhostingApi.md#add_website) | **POST** /websites/order | Place Website Order
[**get_new_website**](WebhostingApi.md#get_new_website) | **GET** /websites/order | Website Ordering Information
[**get_website_buy_ip**](WebhostingApi.md#get_website_buy_ip) | **GET** /websites/{id}/buy_ip | Get Website IP Information
[**get_website_info**](WebhostingApi.md#get_website_info) | **GET** /websites/{id} | Get Website Order
[**get_website_invoices**](WebhostingApi.md#get_website_invoices) | **GET** /websites/{id}/invoices | Get Website Invoices
[**get_website_list**](WebhostingApi.md#get_website_list) | **GET** /websites | Get Website Listing
[**get_websites_backups**](WebhostingApi.md#get_websites_backups) | **GET** /websites/{id}/backups | Get Website Backups
[**get_websites_login**](WebhostingApi.md#get_websites_login) | **GET** /websites/{id}/login | Hosting Panel Auto Login
[**get_websites_welcome_email**](WebhostingApi.md#get_websites_welcome_email) | **GET** /websites/{id}/welcome_email | Resend Website Welcome Email
[**gett_website_reverse_dns**](WebhostingApi.md#gett_website_reverse_dns) | **GET** /websites/{id}/reverse_dns | Get Website Reverse DNS
[**post_website_buy_ip**](WebhostingApi.md#post_website_buy_ip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**post_website_buy_ip**](WebhostingApi.md#post_website_buy_ip) | **POST** /websites/{id}/buy_ip | Update Website IP DNS
[**post_website_migration**](WebhostingApi.md#post_website_migration) | **POST** /websites/{id}/migration | Request Website Migration
[**post_website_migration**](WebhostingApi.md#post_website_migration) | **POST** /websites/{id}/migration | Request Website Migration
[**post_websites_reverse_dns**](WebhostingApi.md#post_websites_reverse_dns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**post_websites_reverse_dns**](WebhostingApi.md#post_websites_reverse_dns) | **POST** /websites/{id}/reverse_dns | Update Website Reverse DNS
[**put_websites**](WebhostingApi.md#put_websites) | **PUT** /websites/order | Validate Webhosting Order
[**update_website_info**](WebhostingApi.md#update_website_info) | **POST** /websites/{id} | Update Website Order
[**webhosting_cancel**](WebhostingApi.md#webhosting_cancel) | **DELETE** /websites/{id} | Cancel Website

# **add_website**
> add_website

Place Website Order

Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.

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

api_instance = SwaggerClient::WebhostingApi.new

begin
  #Place Website Order
  api_instance.add_website
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->add_website: #{e}"
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



# **get_new_website**
> WebsitesOrder get_new_website

Website Ordering Information

Retrieves available webhosting plans and pricing for ordering.

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

api_instance = SwaggerClient::WebhostingApi.new

begin
  #Website Ordering Information
  result = api_instance.get_new_website
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_new_website: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**WebsitesOrder**](WebsitesOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_website_buy_ip**
> InlineResponse20023 get_website_buy_ip(id)

Get Website IP Information

Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Get Website IP Information
  result = api_instance.get_website_buy_ip(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_website_buy_ip: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20023**](InlineResponse20023.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_website_info**
> Website get_website_info(id)

Get Website Order

Returns detailed information about a specific webhosting order including its domain, plan, and status.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Get Website Order
  result = api_instance.get_website_info(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_website_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**Website**](Website.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_website_invoices**
> ChargeInvoiceRows get_website_invoices(id)

Get Website Invoices

Returns the billing invoices associated with this webhosting service.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Get Website Invoices
  result = api_instance.get_website_invoices(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_website_invoices: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_website_list**
> Array&lt;WebsiteRow&gt; get_website_list

Get Website Listing

Gets a listing of your webhosting orders and service details.

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

api_instance = SwaggerClient::WebhostingApi.new

begin
  #Get Website Listing
  result = api_instance.get_website_list
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_website_list: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Array&lt;WebsiteRow&gt;**](WebsiteRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, multipart/form-data



# **get_websites_backups**
> WebsiteBackups get_websites_backups(id)

Get Website Backups

Gets a list of the backups that exist for a website and their sizes.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Get Website Backups
  result = api_instance.get_websites_backups(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_websites_backups: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteBackups**](WebsiteBackups.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_websites_login**
> WebsiteLoginResponse get_websites_login(id)

Hosting Panel Auto Login

Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Hosting Panel Auto Login
  result = api_instance.get_websites_login(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_websites_login: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**WebsiteLoginResponse**](WebsiteLoginResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_websites_welcome_email**
> SuccessTextResponse get_websites_welcome_email(id)

Resend Website Welcome Email

Resends the welcome email containing hosting credentials and panel access details for the webhosting order.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Resend Website Welcome Email
  result = api_instance.get_websites_welcome_email(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->get_websites_welcome_email: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **gett_website_reverse_dns**
> ReverseDnsEntries gett_website_reverse_dns(id)

Get Website Reverse DNS

Returns the current reverse DNS (PTR record) entries for the website's IP addresses.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Get Website Reverse DNS
  result = api_instance.gett_website_reverse_dns(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->gett_website_reverse_dns: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**ReverseDnsEntries**](ReverseDnsEntries.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **post_website_buy_ip**
> InlineResponse20024 post_website_buy_ip(bodyid)

Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

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

api_instance = SwaggerClient::WebhostingApi.new
body = SwaggerClient::IdBuyIpBody.new # IdBuyIpBody | 
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Update Website IP DNS
  result = api_instance.post_website_buy_ip(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->post_website_buy_ip: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdBuyIpBody**](IdBuyIpBody.md)|  | 
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20024**](InlineResponse20024.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_website_buy_ip**
> InlineResponse20024 post_website_buy_ip(ipsid)

Update Website IP DNS

Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.

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

api_instance = SwaggerClient::WebhostingApi.new
ips = {'key' => 'ips_example'} # Hash<String, String> | 
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Update Website IP DNS
  result = api_instance.post_website_buy_ip(ipsid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->post_website_buy_ip: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**Hash&lt;String, String&gt;**](String.md)|  | 
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20024**](InlineResponse20024.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_website_migration**
> InlineResponse20025 post_website_migration(bodyid)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

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

api_instance = SwaggerClient::WebhostingApi.new
body = SwaggerClient::IdMigrationBody.new # IdMigrationBody | 
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Request Website Migration
  result = api_instance.post_website_migration(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->post_website_migration: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IdMigrationBody**](IdMigrationBody.md)|  | 
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20025**](InlineResponse20025.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_website_migration**
> InlineResponse20025 post_website_migration(cust_portalreg_emailpasswordctrl_panelftp_usernameftp_passwordsite_busy_migspl_req_migdomain_regdata_migdomain_reg_portaldomain_reg_emaildomain_reg_passwordid)

Request Website Migration

Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.

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

api_instance = SwaggerClient::WebhostingApi.new
cust_portal = 'cust_portal_example' # String | 
reg_email = 'reg_email_example' # String | 
password = 'password_example' # String | 
ctrl_panel = 'ctrl_panel_example' # String | 
ftp_username = 'ftp_username_example' # String | 
ftp_password = 'ftp_password_example' # String | 
site_busy_mig = 'site_busy_mig_example' # String | 
spl_req_mig = 'spl_req_mig_example' # String | 
domain_reg = 'domain_reg_example' # String | 
data_mig = 'data_mig_example' # String | 
domain_reg_portal = 'domain_reg_portal_example' # String | 
domain_reg_email = 'domain_reg_email_example' # String | 
domain_reg_password = 'domain_reg_password_example' # String | 
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Request Website Migration
  result = api_instance.post_website_migration(cust_portalreg_emailpasswordctrl_panelftp_usernameftp_passwordsite_busy_migspl_req_migdomain_regdata_migdomain_reg_portaldomain_reg_emaildomain_reg_passwordid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->post_website_migration: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cust_portal** | **String**|  | 
 **reg_email** | **String**|  | 
 **password** | **String**|  | 
 **ctrl_panel** | **String**|  | 
 **ftp_username** | **String**|  | 
 **ftp_password** | **String**|  | 
 **site_busy_mig** | **String**|  | 
 **spl_req_mig** | **String**|  | 
 **domain_reg** | **String**|  | 
 **data_mig** | **String**|  | 
 **domain_reg_portal** | **String**|  | 
 **domain_reg_email** | **String**|  | 
 **domain_reg_password** | **String**|  | 
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20025**](InlineResponse20025.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_websites_reverse_dns**
> TextResponse post_websites_reverse_dns(bodyid)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

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

api_instance = SwaggerClient::WebhostingApi.new
body = SwaggerClient::ReverseDnsEntries.new # ReverseDnsEntries | 
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Update Website Reverse DNS
  result = api_instance.post_websites_reverse_dns(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->post_websites_reverse_dns: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ReverseDnsEntries**](ReverseDnsEntries.md)|  | 
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_websites_reverse_dns**
> TextResponse post_websites_reverse_dns(ipsid)

Update Website Reverse DNS

Updates the reverse DNS entries for each of the IP addresses for the website.

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

api_instance = SwaggerClient::WebhostingApi.new
ips = nil # Hash | 
id = 56 # Integer | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Update Website Reverse DNS
  result = api_instance.post_websites_reverse_dns(ipsid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->post_websites_reverse_dns: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ips** | [**Hash**](Object.md)|  | 
 **id** | **Integer**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **put_websites**
> put_websites

Validate Webhosting Order

Validates a webhosting order before placing it.

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

api_instance = SwaggerClient::WebhostingApi.new

begin
  #Validate Webhosting Order
  api_instance.put_websites
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->put_websites: #{e}"
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



# **update_website_info**
> update_website_info(id)

Update Website Order

Updates settings on a webhosting order.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 'id_example' # String | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Update Website Order
  api_instance.update_website_info(id)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->update_website_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **webhosting_cancel**
> InlineResponse20022 webhosting_cancel(id)

Cancel Website

Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.

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

api_instance = SwaggerClient::WebhostingApi.new
id = 'id_example' # String | The website service ID. Use `website_id` from `GET /websites`.


begin
  #Cancel Website
  result = api_instance.webhosting_cancel(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling WebhostingApi->webhosting_cancel: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;. | 

### Return type

[**InlineResponse20022**](InlineResponse20022.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



