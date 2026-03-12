# SwaggerClient::ScrubIpsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cancel_scrub_ip**](ScrubIpsApi.md#cancel_scrub_ip) | **DELETE** /scrub_ips/{id} | Cancel Scrub IP Service
[**create_filter**](ScrubIpsApi.md#create_filter) | **POST** /scrub_ips/{id}/create_filter | Create Traffic Filter
[**create_geo_rule**](ScrubIpsApi.md#create_geo_rule) | **POST** /scrub_ips/{id}/create_geo_rule | Create Geo Firewall Rule
[**create_rule**](ScrubIpsApi.md#create_rule) | **POST** /scrub_ips/{id}/create_rule | Create Firewall Rule
[**delete_filter**](ScrubIpsApi.md#delete_filter) | **POST** /scrub_ips/{id}/delete_filter | Delete Traffic Filter
[**disable_scrub**](ScrubIpsApi.md#disable_scrub) | **GET** /scrub_ips/{id}/disable | Disable Scrub Protection
[**enable_scrub**](ScrubIpsApi.md#enable_scrub) | **GET** /scrub_ips/{id}/enable | Enable Scrub Protection
[**get_order_detail**](ScrubIpsApi.md#get_order_detail) | **GET** /scrub_ips/order | Get Scrub IP Ordering Information
[**get_scrub_ip_details**](ScrubIpsApi.md#get_scrub_ip_details) | **GET** /scrub_ips/{id} | Get Scrub IP Details
[**get_scrub_ip_filter_types**](ScrubIpsApi.md#get_scrub_ip_filter_types) | **GET** /scrub_ips/filter_types | List Scrub Filter Types
[**get_scrub_ip_invoices**](ScrubIpsApi.md#get_scrub_ip_invoices) | **GET** /scrub_ips/{id}/invoices | Get ScrubIp Invoices
[**get_scrub_ip_logs**](ScrubIpsApi.md#get_scrub_ip_logs) | **GET** /scrub_ips/{id}/logs | Get Scrub IP Logs
[**get_scrub_ips_list**](ScrubIpsApi.md#get_scrub_ips_list) | **GET** /scrub_ips | List Scrub IP Services
[**place_scrub_order**](ScrubIpsApi.md#place_scrub_order) | **POST** /scrub_ips/order | Place Scrub IP Order
[**scrub_ips_delete_geo_rule**](ScrubIpsApi.md#scrub_ips_delete_geo_rule) | **POST** /scrub_ips/{id}/delete_geo_rule | Delete Geo Firewall Rule
[**scrub_ips_delete_rule**](ScrubIpsApi.md#scrub_ips_delete_rule) | **POST** /scrub_ips/{id}/delete_rule | Delete Firewall Rule

# **cancel_scrub_ip**
> InlineResponse20013 cancel_scrub_ip(id)

Cancel Scrub IP Service

Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.

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

api_instance = SwaggerClient::ScrubIpsApi.new
id = 56 # Integer | ScrubIp ID number


begin
  #Cancel Scrub IP Service
  result = api_instance.cancel_scrub_ip(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->cancel_scrub_ip: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse20013**](InlineResponse20013.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **create_filter**
> InlineResponse2011 create_filter(bodyid)

Create Traffic Filter

Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.

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

api_instance = SwaggerClient::ScrubIpsApi.new
body = SwaggerClient::CreateFilter.new # CreateFilter | 
id = 56 # Integer | ScrubIp ID number


begin
  #Create Traffic Filter
  result = api_instance.create_filter(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->create_filter: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse2011**](InlineResponse2011.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **create_geo_rule**
> InlineResponse201 create_geo_rule(bodyid)

Create Geo Firewall Rule

Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.

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

api_instance = SwaggerClient::ScrubIpsApi.new
body = SwaggerClient::CreateGeoFirewallRule.new # CreateGeoFirewallRule | 
id = 56 # Integer | ScrubIp ID number


begin
  #Create Geo Firewall Rule
  result = api_instance.create_geo_rule(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->create_geo_rule: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateGeoFirewallRule**](CreateGeoFirewallRule.md)|  | 
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **create_rule**
> InlineResponse201 create_rule(bodyid)

Create Firewall Rule

Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.

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

api_instance = SwaggerClient::ScrubIpsApi.new
body = SwaggerClient::CreateFirewallRule.new # CreateFirewallRule | 
id = 56 # Integer | ScrubIp ID number


begin
  #Create Firewall Rule
  result = api_instance.create_rule(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->create_rule: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFirewallRule**](CreateFirewallRule.md)|  | 
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse201**](InlineResponse201.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **delete_filter**
> InlineResponse20017 delete_filter(bodyid)

Delete Traffic Filter

Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.

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

api_instance = SwaggerClient::ScrubIpsApi.new
body = SwaggerClient::CreateFilter.new # CreateFilter | 
id = 56 # Integer | ScrubIp ID number


begin
  #Delete Traffic Filter
  result = api_instance.delete_filter(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->delete_filter: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CreateFilter**](CreateFilter.md)|  | 
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse20017**](InlineResponse20017.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **disable_scrub**
> InlineResponse20015 disable_scrub(id)

Disable Scrub Protection

Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.

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

api_instance = SwaggerClient::ScrubIpsApi.new
id = 56 # Integer | ScrubIp ID number


begin
  #Disable Scrub Protection
  result = api_instance.disable_scrub(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->disable_scrub: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse20015**](InlineResponse20015.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **enable_scrub**
> InlineResponse20014 enable_scrub(id)

Enable Scrub Protection

Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.

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

api_instance = SwaggerClient::ScrubIpsApi.new
id = 56 # Integer | ScrubIp ID number


begin
  #Enable Scrub Protection
  result = api_instance.enable_scrub(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->enable_scrub: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse20014**](InlineResponse20014.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_order_detail**
> InlineResponse20018 get_order_detail

Get Scrub IP Ordering Information

Returns the available Scrub IP service plans and pricing information needed to build an order form.

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

api_instance = SwaggerClient::ScrubIpsApi.new

begin
  #Get Scrub IP Ordering Information
  result = api_instance.get_order_detail
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->get_order_detail: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**InlineResponse20018**](InlineResponse20018.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_scrub_ip_details**
> InlineResponse20012 get_scrub_ip_details(id)

Get Scrub IP Details

Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.

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

api_instance = SwaggerClient::ScrubIpsApi.new
id = 56 # Integer | ScrubIp ID number


begin
  #Get Scrub IP Details
  result = api_instance.get_scrub_ip_details(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->get_scrub_ip_details: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse20012**](InlineResponse20012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_scrub_ip_filter_types**
> ScrubIpFilterTypes get_scrub_ip_filter_types

List Scrub Filter Types

Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.

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

api_instance = SwaggerClient::ScrubIpsApi.new

begin
  #List Scrub Filter Types
  result = api_instance.get_scrub_ip_filter_types
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->get_scrub_ip_filter_types: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ScrubIpFilterTypes**](ScrubIpFilterTypes.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_scrub_ip_invoices**
> ChargeInvoiceRows get_scrub_ip_invoices(id)

Get ScrubIp Invoices

Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.

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

api_instance = SwaggerClient::ScrubIpsApi.new
id = 56 # Integer | ScrubIp ID number


begin
  #Get ScrubIp Invoices
  result = api_instance.get_scrub_ip_invoices(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->get_scrub_ip_invoices: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_scrub_ip_logs**
> Array&lt;ScrubIpsLogRowSchema&gt; get_scrub_ip_logs(id)

Get Scrub IP Logs

Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.

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

api_instance = SwaggerClient::ScrubIpsApi.new
id = 'id_example' # String | Scrub Order ID


begin
  #Get Scrub IP Logs
  result = api_instance.get_scrub_ip_logs(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->get_scrub_ip_logs: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| Scrub Order ID | 

### Return type

[**Array&lt;ScrubIpsLogRowSchema&gt;**](ScrubIpsLogRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_scrub_ips_list**
> Array&lt;ScrubIpsRowSchema&gt; get_scrub_ips_list

List Scrub IP Services

Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.

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

api_instance = SwaggerClient::ScrubIpsApi.new

begin
  #List Scrub IP Services
  result = api_instance.get_scrub_ips_list
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->get_scrub_ips_list: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Array&lt;ScrubIpsRowSchema&gt;**](ScrubIpsRowSchema.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **place_scrub_order**
> InlineResponse2012 place_scrub_order(body)

Place Scrub IP Order

Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.

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

api_instance = SwaggerClient::ScrubIpsApi.new
body = SwaggerClient::ScrubIpPlaceOrder.new # ScrubIpPlaceOrder | 


begin
  #Place Scrub IP Order
  result = api_instance.place_scrub_order(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->place_scrub_order: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ScrubIpPlaceOrder**](ScrubIpPlaceOrder.md)|  | 

### Return type

[**InlineResponse2012**](InlineResponse2012.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **scrub_ips_delete_geo_rule**
> InlineResponse20016 scrub_ips_delete_geo_rule(bodyid)

Delete Geo Firewall Rule

Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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

api_instance = SwaggerClient::ScrubIpsApi.new
body = SwaggerClient::DeleteGeoFirewallRule.new # DeleteGeoFirewallRule | 
id = 56 # Integer | ScrubIp ID number


begin
  #Delete Geo Firewall Rule
  result = api_instance.scrub_ips_delete_geo_rule(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->scrub_ips_delete_geo_rule: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteGeoFirewallRule**](DeleteGeoFirewallRule.md)|  | 
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



# **scrub_ips_delete_rule**
> InlineResponse20016 scrub_ips_delete_rule(bodyid)

Delete Firewall Rule

Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.

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

api_instance = SwaggerClient::ScrubIpsApi.new
body = SwaggerClient::DeleteFirewallRule.new # DeleteFirewallRule | 
id = 56 # Integer | ScrubIp ID number


begin
  #Delete Firewall Rule
  result = api_instance.scrub_ips_delete_rule(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling ScrubIpsApi->scrub_ips_delete_rule: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DeleteFirewallRule**](DeleteFirewallRule.md)|  | 
 **id** | **Integer**| ScrubIp ID number | 

### Return type

[**InlineResponse20016**](InlineResponse20016.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json



