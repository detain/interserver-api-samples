# SwaggerClient::DomainsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_domain**](DomainsApi.md#add_domain) | **POST** /domains/order | Place Domain Order
[**add_domain_dnssec**](DomainsApi.md#add_domain_dnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**add_domain_dnssec**](DomainsApi.md#add_domain_dnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**add_domain_nameserver**](DomainsApi.md#add_domain_nameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
[**add_domain_nameserver**](DomainsApi.md#add_domain_nameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
[**cancel_domain**](DomainsApi.md#cancel_domain) | **DELETE** /domains/{id} | Cancel Domain Order
[**delete_domain_dnssec**](DomainsApi.md#delete_domain_dnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**delete_domain_nameserver**](DomainsApi.md#delete_domain_nameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
[**get_domain_contact**](DomainsApi.md#get_domain_contact) | **GET** /domains/{id}/contact | Get Domain Contact Details
[**get_domain_dnssec**](DomainsApi.md#get_domain_dnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**get_domain_info**](DomainsApi.md#get_domain_info) | **GET** /domains/{id} | Get Domain Order
[**get_domain_invoices**](DomainsApi.md#get_domain_invoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
[**get_domain_lookup**](DomainsApi.md#get_domain_lookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**get_domain_nameservers**](DomainsApi.md#get_domain_nameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
[**get_domain_order_fields**](DomainsApi.md#get_domain_order_fields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**get_domain_order_search_results**](DomainsApi.md#get_domain_order_search_results) | **GET** /domains/order/{domain} | Get Domain Order Search Results
[**get_domain_renewal**](DomainsApi.md#get_domain_renewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
[**get_domain_search**](DomainsApi.md#get_domain_search) | **GET** /domains/search/{name} | Search Domain Suggestions
[**get_domain_transfer**](DomainsApi.md#get_domain_transfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
[**get_domain_whois_privacy**](DomainsApi.md#get_domain_whois_privacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
[**get_domains_list**](DomainsApi.md#get_domains_list) | **GET** /domains | List Domain Orders
[**get_domains_welcome_email**](DomainsApi.md#get_domains_welcome_email) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**get_new_domain**](DomainsApi.md#get_new_domain) | **GET** /domains/order | Get Domain Ordering Information
[**patch_domains**](DomainsApi.md#patch_domains) | **PATCH** /domains/order | Validate Domain Order
[**post_domain_renewal**](DomainsApi.md#post_domain_renewal) | **POST** /domains/{id}/renew | Request Domain Renewal
[**post_domain_transfer**](DomainsApi.md#post_domain_transfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
[**put_domains**](DomainsApi.md#put_domains) | **PUT** /domains/order | Domain Order Search
[**update_domain_contact**](DomainsApi.md#update_domain_contact) | **POST** /domains/{id}/contact | Update Domain Contact Details
[**update_domain_contact**](DomainsApi.md#update_domain_contact) | **POST** /domains/{id}/contact | Update Domain Contact Details
[**update_domain_info**](DomainsApi.md#update_domain_info) | **POST** /domains/{id} | Update Domain Order
[**update_domain_nameservers**](DomainsApi.md#update_domain_nameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
[**update_domain_nameservers**](DomainsApi.md#update_domain_nameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
[**update_domain_whois_privacy**](DomainsApi.md#update_domain_whois_privacy) | **POST** /domains/{id}/whois | Update Whois Privacy
[**update_domain_whois_privacy**](DomainsApi.md#update_domain_whois_privacy) | **POST** /domains/{id}/whois | Update Whois Privacy

# **add_domain**
> add_domain

Place Domain Order

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

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

api_instance = SwaggerClient::DomainsApi.new

begin
  #Place Domain Order
  api_instance.add_domain
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->add_domain: #{e}"
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



# **add_domain_dnssec**
> SuccessTextResponse add_domain_dnssec(bodyid)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

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

api_instance = SwaggerClient::DomainsApi.new
body = SwaggerClient::DomainDnssecRequest.new # DomainDnssecRequest | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Add Domain DNSSEC Records
  result = api_instance.add_domain_dnssec(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->add_domain_dnssec: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainDnssecRequest**](DomainDnssecRequest.md)|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **add_domain_dnssec**
> SuccessTextResponse add_domain_dnssec(algorithmdigest_typedigestkey_tagid)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

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

api_instance = SwaggerClient::DomainsApi.new
algorithm = [56] # Array<Integer> | 
digest_type = [56] # Array<Integer> | 
digest = ['digest_example'] # Array<String> | 
key_tag = [56] # Array<Integer> | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Add Domain DNSSEC Records
  result = api_instance.add_domain_dnssec(algorithmdigest_typedigestkey_tagid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->add_domain_dnssec: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **algorithm** | [**Array&lt;Integer&gt;**](Integer.md)|  | 
 **digest_type** | [**Array&lt;Integer&gt;**](Integer.md)|  | 
 **digest** | [**Array&lt;String&gt;**](String.md)|  | 
 **key_tag** | [**Array&lt;Integer&gt;**](Integer.md)|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **add_domain_nameserver**
> TextResponse add_domain_nameserver(bodyid)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

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

api_instance = SwaggerClient::DomainsApi.new
body = SwaggerClient::DomainNameserverPostRequest.new # DomainNameserverPostRequest | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Add Registered Nameserver
  result = api_instance.add_domain_nameserver(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->add_domain_nameserver: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md)|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **add_domain_nameserver**
> TextResponse add_domain_nameserver(nameip_addressid)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

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

api_instance = SwaggerClient::DomainsApi.new
name = 'name_example' # String | 
ip_address = 'ip_address_example' # String | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Add Registered Nameserver
  result = api_instance.add_domain_nameserver(nameip_addressid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->add_domain_nameserver: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**|  | 
 **ip_address** | **String**|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **cancel_domain**
> InlineResponse2002 cancel_domain(id)

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Cancel Domain Order
  result = api_instance.cancel_domain(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->cancel_domain: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**InlineResponse2002**](InlineResponse2002.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **delete_domain_dnssec**
> SuccessTextResponse delete_domain_dnssec(id, action)

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.
action = 'action_example' # String | Set to `delete` to remove all DNSSEC records.


begin
  #Remove Domain DNSSEC Records
  result = api_instance.delete_domain_dnssec(id, action)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->delete_domain_dnssec: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **action** | **String**| Set to &#x60;delete&#x60; to remove all DNSSEC records. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **delete_domain_nameserver**
> TextResponse delete_domain_nameserver(id, index)

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.
index = 56 # Integer | The index of the registered nameserver from the registered nameservers list to delete.  


begin
  #Delete Registered Nameserver
  result = api_instance.delete_domain_nameserver(id, index)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->delete_domain_nameserver: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **index** | **Integer**| The index of the registered nameserver from the registered nameservers list to delete.   | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_contact**
> DomainContactDetails get_domain_contact(id)

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Get Domain Contact Details
  result = api_instance.get_domain_contact(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_contact: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainContactDetails**](DomainContactDetails.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_dnssec**
> DomainDnssecRecords get_domain_dnssec(id)

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Get Domain DNSSEC Records
  result = api_instance.get_domain_dnssec(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_dnssec: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_info**
> Domain get_domain_info(id)

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Get Domain Order
  result = api_instance.get_domain_info(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**Domain**](Domain.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_invoices**
> ChargeInvoiceRows get_domain_invoices(id)

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Get Domain Invoices
  result = api_instance.get_domain_invoices(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_invoices: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**ChargeInvoiceRows**](ChargeInvoiceRows.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_lookup**
> DomainLookupResponse get_domain_lookup(name)

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

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

api_instance = SwaggerClient::DomainsApi.new
name = 'name_example' # String | The full domain name to look up (for example `example.com`).


begin
  #Lookup Domain Availability and Pricing
  result = api_instance.get_domain_lookup(name)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_lookup: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| The full domain name to look up (for example &#x60;example.com&#x60;). | 

### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_nameservers**
> DomainNameserverGetResponse get_domain_nameservers(id)

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #List Registered Nameservers
  result = api_instance.get_domain_nameservers(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_nameservers: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_order_fields**
> get_domain_order_fields(domain, reg_type)

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

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

api_instance = SwaggerClient::DomainsApi.new
domain = 'domain_example' # String | The fully qualified domain name (e.g. `example.com`).
reg_type = 'reg_type_example' # String | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.


begin
  #Get Domain Order Fields
  api_instance.get_domain_order_fields(domain, reg_type)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_order_fields: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **String**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | 
 **reg_type** | **String**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_order_search_results**
> get_domain_order_search_results(domain)

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

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

api_instance = SwaggerClient::DomainsApi.new
domain = 'domain_example' # String | The fully qualified domain name to look up (e.g. `example.com`).


begin
  #Get Domain Order Search Results
  api_instance.get_domain_order_search_results(domain)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_order_search_results: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **String**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_renewal**
> SuccessTextResponse get_domain_renewal(id)

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Start Domain Renewal Flow
  result = api_instance.get_domain_renewal(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_renewal: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_search**
> DomainSearchResponse get_domain_search(name)

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

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

api_instance = SwaggerClient::DomainsApi.new
name = 'name_example' # String | The base domain name to search (for example `example` or `example.com`).


begin
  #Search Domain Suggestions
  result = api_instance.get_domain_search(name)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_search: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | 

### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_transfer**
> SuccessTextResponse get_domain_transfer(id)

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Start Domain Transfer Flow
  result = api_instance.get_domain_transfer(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_transfer: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domain_whois_privacy**
> SuccessTextResponse get_domain_whois_privacy(id)

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Get Whois Privacy Status
  result = api_instance.get_domain_whois_privacy(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domain_whois_privacy: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domains_list**
> Array&lt;DomainRow&gt; get_domains_list

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

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

api_instance = SwaggerClient::DomainsApi.new

begin
  #List Domain Orders
  result = api_instance.get_domains_list
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domains_list: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Array&lt;DomainRow&gt;**](DomainRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_domains_welcome_email**
> SuccessTextResponse get_domains_welcome_email(id)

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Resend Domain Welcome Email
  result = api_instance.get_domains_welcome_email(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_domains_welcome_email: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_new_domain**
> DomainOrder get_new_domain

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

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

api_instance = SwaggerClient::DomainsApi.new

begin
  #Get Domain Ordering Information
  result = api_instance.get_new_domain
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->get_new_domain: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DomainOrder**](DomainOrder.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **patch_domains**
> patch_domains

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

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

api_instance = SwaggerClient::DomainsApi.new

begin
  #Validate Domain Order
  api_instance.patch_domains
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->patch_domains: #{e}"
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



# **post_domain_renewal**
> SuccessTextResponse post_domain_renewal(id)

Request Domain Renewal

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Request Domain Renewal
  result = api_instance.post_domain_renewal(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->post_domain_renewal: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **post_domain_transfer**
> SuccessTextResponse post_domain_transfer(id)

Request Domain Transfer

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

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

api_instance = SwaggerClient::DomainsApi.new
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Request Domain Transfer
  result = api_instance.post_domain_transfer(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->post_domain_transfer: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **put_domains**
> put_domains

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

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

api_instance = SwaggerClient::DomainsApi.new

begin
  #Domain Order Search
  api_instance.put_domains
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->put_domains: #{e}"
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



# **update_domain_contact**
> SuccessTextResponse update_domain_contact(bodyid)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

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

api_instance = SwaggerClient::DomainsApi.new
body = SwaggerClient::DomainContactDetails.new # DomainContactDetails | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Update Domain Contact Details
  result = api_instance.update_domain_contact(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->update_domain_contact: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainContactDetails**](DomainContactDetails.md)|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_domain_contact**
> SuccessTextResponse update_domain_contact(statusstateorg_namecountrypostal_codeemailfaxaddress2address3address1cityphonefirst_namelast_nameid)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

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

api_instance = SwaggerClient::DomainsApi.new
status = 'status_example' # String | 
state = 'state_example' # String | 
org_name = 'org_name_example' # String | 
country = 'country_example' # String | 
postal_code = 'postal_code_example' # String | 
email = 'email_example' # String | 
fax = 'fax_example' # String | 
address2 = 'address2_example' # String | 
address3 = 'address3_example' # String | 
address1 = 'address1_example' # String | 
city = 'city_example' # String | 
phone = 'phone_example' # String | 
first_name = 'first_name_example' # String | 
last_name = 'last_name_example' # String | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Update Domain Contact Details
  result = api_instance.update_domain_contact(statusstateorg_namecountrypostal_codeemailfaxaddress2address3address1cityphonefirst_namelast_nameid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->update_domain_contact: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **status** | **String**|  | 
 **state** | **String**|  | 
 **org_name** | **String**|  | 
 **country** | **String**|  | 
 **postal_code** | **String**|  | 
 **email** | **String**|  | 
 **fax** | **String**|  | 
 **address2** | **String**|  | 
 **address3** | **String**|  | 
 **address1** | **String**|  | 
 **city** | **String**|  | 
 **phone** | **String**|  | 
 **first_name** | **String**|  | 
 **last_name** | **String**|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_domain_info**
> update_domain_info(id)

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

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

api_instance = SwaggerClient::DomainsApi.new
id = 'id_example' # String | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Update Domain Order
  api_instance.update_domain_info(id)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->update_domain_info: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **update_domain_nameservers**
> TextResponse update_domain_nameservers(bodyid)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

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

api_instance = SwaggerClient::DomainsApi.new
body = SwaggerClient::DomainNameserverPutRequest.new # DomainNameserverPutRequest | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Replace Nameserver Set
  result = api_instance.update_domain_nameservers(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->update_domain_nameservers: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md)|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_domain_nameservers**
> TextResponse update_domain_nameservers(nameserverid)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

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

api_instance = SwaggerClient::DomainsApi.new
nameserver = ['nameserver_example'] # Array<String> | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Replace Nameserver Set
  result = api_instance.update_domain_nameservers(nameserverid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->update_domain_nameservers: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **nameserver** | [**Array&lt;String&gt;**](String.md)|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_domain_whois_privacy**
> SuccessTextResponse update_domain_whois_privacy(bodyid)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

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

api_instance = SwaggerClient::DomainsApi.new
body = SwaggerClient::DomainWhoisPrivacyRequest.new # DomainWhoisPrivacyRequest | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Update Whois Privacy
  result = api_instance.update_domain_whois_privacy(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->update_domain_whois_privacy: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md)|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_domain_whois_privacy**
> SuccessTextResponse update_domain_whois_privacy(funccsrf_tokendomain_firstnamedomain_lastnamedomain_emaildomain_addressdomain_address2domain_address3domain_citydomain_statedomain_zipdomain_countrydomain_phonedomain_faxdomain_companydomain_extraid)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

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

api_instance = SwaggerClient::DomainsApi.new
func = 'func_example' # String | 
csrf_token = 'csrf_token_example' # String | 
domain_firstname = 'domain_firstname_example' # String | 
domain_lastname = 'domain_lastname_example' # String | 
domain_email = 'domain_email_example' # String | 
domain_address = 'domain_address_example' # String | 
domain_address2 = 'domain_address2_example' # String | 
domain_address3 = 'domain_address3_example' # String | 
domain_city = 'domain_city_example' # String | 
domain_state = 'domain_state_example' # String | 
domain_zip = 'domain_zip_example' # String | 
domain_country = 'domain_country_example' # String | 
domain_phone = 'domain_phone_example' # String | 
domain_fax = 'domain_fax_example' # String | 
domain_company = 'domain_company_example' # String | 
domain_extra = 'domain_extra_example' # String | 
id = 56 # Integer | The domain service ID. Use `domain_id` from `GET /domains`.


begin
  #Update Whois Privacy
  result = api_instance.update_domain_whois_privacy(funccsrf_tokendomain_firstnamedomain_lastnamedomain_emaildomain_addressdomain_address2domain_address3domain_citydomain_statedomain_zipdomain_countrydomain_phonedomain_faxdomain_companydomain_extraid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling DomainsApi->update_domain_whois_privacy: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **func** | **String**|  | 
 **csrf_token** | **String**|  | 
 **domain_firstname** | **String**|  | 
 **domain_lastname** | **String**|  | 
 **domain_email** | **String**|  | 
 **domain_address** | **String**|  | 
 **domain_address2** | **String**|  | 
 **domain_address3** | **String**|  | 
 **domain_city** | **String**|  | 
 **domain_state** | **String**|  | 
 **domain_zip** | **String**|  | 
 **domain_country** | **String**|  | 
 **domain_phone** | **String**|  | 
 **domain_fax** | **String**|  | 
 **domain_company** | **String**|  | 
 **domain_extra** | **String**|  | 
 **id** | **Integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



