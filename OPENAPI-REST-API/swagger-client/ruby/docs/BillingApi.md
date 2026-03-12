# SwaggerClient::BillingApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_account_credit_card**](BillingApi.md#add_account_credit_card) | **POST** /account/creditcards | Add Credit Card to Account
[**add_account_credit_card**](BillingApi.md#add_account_credit_card) | **POST** /account/creditcards | Add Credit Card to Account
[**add_billing_credit_card**](BillingApi.md#add_billing_credit_card) | **POST** /billing/creditcards | Add Credit Card for Billing
[**add_billing_credit_card**](BillingApi.md#add_billing_credit_card) | **POST** /billing/creditcards | Add Credit Card for Billing
[**add_billing_prepay**](BillingApi.md#add_billing_prepay) | **POST** /billing/prepays | Create Prepay Deposit
[**add_billing_prepay**](BillingApi.md#add_billing_prepay) | **POST** /billing/prepays | Create Prepay Deposit
[**delete_account_credit_card**](BillingApi.md#delete_account_credit_card) | **DELETE** /account/creditcards/{id} | Remove Credit Card
[**delete_billing_credit_card**](BillingApi.md#delete_billing_credit_card) | **DELETE** /billing/creditcards/{id} | Delete Credit Card
[**delete_billing_invoice**](BillingApi.md#delete_billing_invoice) | **DELETE** /billing/invoices/{id} | Delete Invoice
[**delete_billing_prepay**](BillingApi.md#delete_billing_prepay) | **DELETE** /billing/prepays/{id} | Delete Prepay Balance
[**get_affiliate_banners**](BillingApi.md#get_affiliate_banners) | **GET** /affiliate/banners | List Affiliate Banner Assets
[**get_affiliate_rich_report**](BillingApi.md#get_affiliate_rich_report) | **GET** /affiliate/rich_report | Get Affiliate Performance Report
[**get_affiliate_sales_graph**](BillingApi.md#get_affiliate_sales_graph) | **GET** /affiliate/sales_graph | Get Affiliate Sales Graph Data
[**get_affiliate_sales_report**](BillingApi.md#get_affiliate_sales_report) | **GET** /affiliate/sales_report | Get Affiliate Sales Report
[**get_affiliate_traffic_graph**](BillingApi.md#get_affiliate_traffic_graph) | **GET** /affiliate/traffic_graph | Get Affiliate Traffic Graph Data
[**get_affiliate_web_traffic**](BillingApi.md#get_affiliate_web_traffic) | **GET** /affiliate/web_traffic | List Affiliate Web Traffic Entries
[**get_billing_cart**](BillingApi.md#get_billing_cart) | **GET** /billing/cart | Get Shopping Cart Contents
[**get_billing_credit_card_verify**](BillingApi.md#get_billing_credit_card_verify) | **GET** /billing/creditcards/{id}/verify | Get Credit Card Verification Requirements
[**get_billing_invoice**](BillingApi.md#get_billing_invoice) | **GET** /billing/invoices/{id} | Get Invoice Details
[**get_billing_invoices**](BillingApi.md#get_billing_invoices) | **GET** /billing/invoices | List Account Invoices
[**get_billing_pre_pays**](BillingApi.md#get_billing_pre_pays) | **GET** /billing/prepays | List Prepay Balances
[**get_invoices**](BillingApi.md#get_invoices) | **GET** /invoices | Get Invoices
[**initiate_payment**](BillingApi.md#initiate_payment) | **GET** /pay/{method}/{invoices} | Initiate Payment
[**post_billing_credit_card_verify**](BillingApi.md#post_billing_credit_card_verify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**post_billing_credit_card_verify**](BillingApi.md#post_billing_credit_card_verify) | **POST** /billing/creditcards/{id}/verify | Submit Credit Card Verification
[**update_account_credit_card**](BillingApi.md#update_account_credit_card) | **POST** /account/creditcards/{id} | Update Credit Card
[**update_affiliate_dock_setup**](BillingApi.md#update_affiliate_dock_setup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**update_affiliate_dock_setup**](BillingApi.md#update_affiliate_dock_setup) | **POST** /affiliate/dock_setup | Configure Affiliate Dock Settings
[**update_affiliate_landing_page**](BillingApi.md#update_affiliate_landing_page) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
[**update_affiliate_landing_page**](BillingApi.md#update_affiliate_landing_page) | **POST** /affiliate/landing_pg | Configure Affiliate Landing Page
[**update_affiliate_payment_setup**](BillingApi.md#update_affiliate_payment_setup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**update_affiliate_payment_setup**](BillingApi.md#update_affiliate_payment_setup) | **POST** /affiliate/payment_setup | Configure Affiliate Payout Preferences
[**update_billing_credit_card**](BillingApi.md#update_billing_credit_card) | **POST** /billing/creditcards/{id} | Update Credit Card Details
[**update_billing_payment_method**](BillingApi.md#update_billing_payment_method) | **POST** /billing/payment_method | Update Default Payment Method
[**update_billing_payment_method**](BillingApi.md#update_billing_payment_method) | **POST** /billing/payment_method | Update Default Payment Method

# **add_account_credit_card**
> SuccessTextResponse add_account_credit_card(nameaddresscitystatecountryzipcccc_expcc_ccv2)

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

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

api_instance = SwaggerClient::BillingApi.new
name = 'name_example' # String | 
address = 'address_example' # String | 
city = 'city_example' # String | 
state = 'state_example' # String | 
country = 'country_example' # String | 
zip = 'zip_example' # String | 
cc = 'cc_example' # String | 
cc_exp = 'cc_exp_example' # String | 
cc_ccv2 = 'cc_ccv2_example' # String | 


begin
  #Add Credit Card to Account
  result = api_instance.add_account_credit_card(nameaddresscitystatecountryzipcccc_expcc_ccv2)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->add_account_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**|  | 
 **address** | **String**|  | 
 **city** | **String**|  | 
 **state** | **String**|  | 
 **country** | **String**|  | 
 **zip** | **String**|  | 
 **cc** | **String**|  | 
 **cc_exp** | **String**|  | 
 **cc_ccv2** | **String**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **add_account_credit_card**
> SuccessTextResponse add_account_credit_card(body)

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::BillingAddCcRequest.new # BillingAddCcRequest | 


begin
  #Add Credit Card to Account
  result = api_instance.add_account_credit_card(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->add_account_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingAddCcRequest**](BillingAddCcRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **add_billing_credit_card**
> SuccessTextResponse add_billing_credit_card(body)

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::BillingAddCcRequest.new # BillingAddCcRequest | 


begin
  #Add Credit Card for Billing
  result = api_instance.add_billing_credit_card(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->add_billing_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingAddCcRequest**](BillingAddCcRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **add_billing_credit_card**
> SuccessTextResponse add_billing_credit_card(nameaddresscitystatecountryzipcccc_expcc_ccv2)

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.

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

api_instance = SwaggerClient::BillingApi.new
name = 'name_example' # String | 
address = 'address_example' # String | 
city = 'city_example' # String | 
state = 'state_example' # String | 
country = 'country_example' # String | 
zip = 'zip_example' # String | 
cc = 'cc_example' # String | 
cc_exp = 'cc_exp_example' # String | 
cc_ccv2 = 'cc_ccv2_example' # String | 


begin
  #Add Credit Card for Billing
  result = api_instance.add_billing_credit_card(nameaddresscitystatecountryzipcccc_expcc_ccv2)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->add_billing_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **String**|  | 
 **address** | **String**|  | 
 **city** | **String**|  | 
 **state** | **String**|  | 
 **country** | **String**|  | 
 **zip** | **String**|  | 
 **cc** | **String**|  | 
 **cc_exp** | **String**|  | 
 **cc_ccv2** | **String**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **add_billing_prepay**
> SuccessTextResponse add_billing_prepay(body)

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::BillingPrepayRequest.new # BillingPrepayRequest | 


begin
  #Create Prepay Deposit
  result = api_instance.add_billing_prepay(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->add_billing_prepay: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingPrepayRequest**](BillingPrepayRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **add_billing_prepay**
> SuccessTextResponse add_billing_prepay(_moduleamountautomatic_use)

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.

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

api_instance = SwaggerClient::BillingApi.new
_module = '_module_example' # String | 
amount = SwaggerClient::BigDecimal.new # BigDecimal | 
automatic_use = 'automatic_use_example' # String | 


begin
  #Create Prepay Deposit
  result = api_instance.add_billing_prepay(_moduleamountautomatic_use)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->add_billing_prepay: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_module** | **String**|  | 
 **amount** | **BigDecimal**|  | 
 **automatic_use** | **String**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **delete_account_credit_card**
> delete_account_credit_card(id)

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.

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

api_instance = SwaggerClient::BillingApi.new
id = 'id_example' # String | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.


begin
  #Remove Credit Card
  api_instance.delete_account_credit_card(id)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->delete_account_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **delete_billing_credit_card**
> SuccessTextResponse delete_billing_credit_card(id)

Delete Credit Card

Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.

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

api_instance = SwaggerClient::BillingApi.new
id = 56 # Integer | The credit card ID to remove. Use IDs from `GET /billing/creditcards`.


begin
  #Delete Credit Card
  result = api_instance.delete_billing_credit_card(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->delete_billing_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **delete_billing_invoice**
> SuccessTextResponse delete_billing_invoice(id)

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

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

api_instance = SwaggerClient::BillingApi.new
id = 56 # Integer | The invoice ID to delete. Only unpaid invoices can be deleted.


begin
  #Delete Invoice
  result = api_instance.delete_billing_invoice(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->delete_billing_invoice: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The invoice ID to delete. Only unpaid invoices can be deleted. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **delete_billing_prepay**
> SuccessTextResponse delete_billing_prepay(id)

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.

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

api_instance = SwaggerClient::BillingApi.new
id = 56 # Integer | The prepay balance ID to delete.


begin
  #Delete Prepay Balance
  result = api_instance.delete_billing_prepay(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->delete_billing_prepay: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The prepay balance ID to delete. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_affiliate_banners**
> Array&lt;AffiliateBannerRow&gt; get_affiliate_banners

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

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

api_instance = SwaggerClient::BillingApi.new

begin
  #List Affiliate Banner Assets
  result = api_instance.get_affiliate_banners
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_affiliate_banners: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Array&lt;AffiliateBannerRow&gt;**](AffiliateBannerRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_affiliate_rich_report**
> TextResponse get_affiliate_rich_report

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

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

api_instance = SwaggerClient::BillingApi.new

begin
  #Get Affiliate Performance Report
  result = api_instance.get_affiliate_rich_report
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_affiliate_rich_report: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_affiliate_sales_graph**
> StatusMonthlyBreakdown get_affiliate_sales_graph(opts)

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

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

api_instance = SwaggerClient::BillingApi.new
opts = { 
  days: 56 # Integer | Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
}

begin
  #Get Affiliate Sales Graph Data
  result = api_instance.get_affiliate_sales_graph(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_affiliate_sales_graph: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **Integer**| Number of days of sales history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**StatusMonthlyBreakdown**](StatusMonthlyBreakdown.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_affiliate_sales_report**
> TextResponse get_affiliate_sales_report

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

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

api_instance = SwaggerClient::BillingApi.new

begin
  #Get Affiliate Sales Report
  result = api_instance.get_affiliate_sales_report
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_affiliate_sales_report: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_affiliate_traffic_graph**
> MonthlyCounts get_affiliate_traffic_graph(opts)

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

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

api_instance = SwaggerClient::BillingApi.new
opts = { 
  days: 56 # Integer | Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
}

begin
  #Get Affiliate Traffic Graph Data
  result = api_instance.get_affiliate_traffic_graph(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_affiliate_traffic_graph: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **days** | **Integer**| Number of days of traffic history to include in the graph data. Determines the time window for the returned data points. | [optional] 

### Return type

[**MonthlyCounts**](MonthlyCounts.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_affiliate_web_traffic**
> Array&lt;AffiliateTrafficRow&gt; get_affiliate_web_traffic

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

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

api_instance = SwaggerClient::BillingApi.new

begin
  #List Affiliate Web Traffic Entries
  result = api_instance.get_affiliate_web_traffic
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_affiliate_web_traffic: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Array&lt;AffiliateTrafficRow&gt;**](AffiliateTrafficRow.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_billing_cart**
> get_billing_cart

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.

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

api_instance = SwaggerClient::BillingApi.new

begin
  #Get Shopping Cart Contents
  api_instance.get_billing_cart
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_billing_cart: #{e}"
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



# **get_billing_credit_card_verify**
> SuccessTextResponse get_billing_credit_card_verify(id)

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

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

api_instance = SwaggerClient::BillingApi.new
id = 56 # Integer | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.


begin
  #Get Credit Card Verification Requirements
  result = api_instance.get_billing_credit_card_verify(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_billing_credit_card_verify: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_billing_invoice**
> BillingInvoiceDetail get_billing_invoice(id)

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.

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

api_instance = SwaggerClient::BillingApi.new
id = 56 # Integer | The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.


begin
  #Get Invoice Details
  result = api_instance.get_billing_invoice(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_billing_invoice: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses. | 

### Return type

[**BillingInvoiceDetail**](BillingInvoiceDetail.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_billing_invoices**
> BillingInvoiceList get_billing_invoices

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.

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

api_instance = SwaggerClient::BillingApi.new

begin
  #List Account Invoices
  result = api_instance.get_billing_invoices
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_billing_invoices: #{e}"
end
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BillingInvoiceList**](BillingInvoiceList.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **get_billing_pre_pays**
> get_billing_pre_pays

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.

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

api_instance = SwaggerClient::BillingApi.new

begin
  #List Prepay Balances
  api_instance.get_billing_pre_pays
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_billing_pre_pays: #{e}"
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



# **get_invoices**
> Array&lt;Invoice&gt; get_invoices(opts)

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.

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

api_instance = SwaggerClient::BillingApi.new
opts = { 
  search_string: 'search_string_example', # String | pass an optional search string for looking up inventory
  skip: 56, # Integer | number of records to skip for pagination
  limit: 56 # Integer | maximum number of records to return
}

begin
  #Get Invoices
  result = api_instance.get_invoices(opts)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->get_invoices: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **search_string** | **String**| pass an optional search string for looking up inventory | [optional] 
 **skip** | **Integer**| number of records to skip for pagination | [optional] 
 **limit** | **Integer**| maximum number of records to return | [optional] 

### Return type

[**Array&lt;Invoice&gt;**](Invoice.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **initiate_payment**
> InlineResponse2009 initiate_payment(method, invoices)

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.

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

api_instance = SwaggerClient::BillingApi.new
method = 'method_example' # String | The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
invoices = 'invoices_example' # String | A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.


begin
  #Initiate Payment
  result = api_instance.initiate_payment(method, invoices)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->initiate_payment: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **method** | **String**| The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;. | 
 **invoices** | **String**| A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;. | 

### Return type

[**InlineResponse2009**](InlineResponse2009.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **post_billing_credit_card_verify**
> SuccessTextResponse post_billing_credit_card_verify(bodyid)

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::BillingVerifyCcRequest.new # BillingVerifyCcRequest | 
id = 56 # Integer | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.


begin
  #Submit Credit Card Verification
  result = api_instance.post_billing_credit_card_verify(bodyid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->post_billing_credit_card_verify: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingVerifyCcRequest**](BillingVerifyCcRequest.md)|  | 
 **id** | **Integer**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **post_billing_credit_card_verify**
> SuccessTextResponse post_billing_credit_card_verify(idxcc_ccv2cc_amount1cc_amount2termsid)

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.

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

api_instance = SwaggerClient::BillingApi.new
idx = 56 # Integer | 
cc_ccv2 = 'cc_ccv2_example' # String | 
cc_amount1 = 'cc_amount1_example' # String | 
cc_amount2 = 'cc_amount2_example' # String | 
terms = true # BOOLEAN | 
id = 56 # Integer | The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.


begin
  #Submit Credit Card Verification
  result = api_instance.post_billing_credit_card_verify(idxcc_ccv2cc_amount1cc_amount2termsid)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->post_billing_credit_card_verify: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **idx** | **Integer**|  | 
 **cc_ccv2** | **String**|  | 
 **cc_amount1** | **String**|  | 
 **cc_amount2** | **String**|  | 
 **terms** | **BOOLEAN**|  | 
 **id** | **Integer**| The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_account_credit_card**
> update_account_credit_card(id)

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

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

api_instance = SwaggerClient::BillingApi.new
id = 56 # Integer | The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.


begin
  #Update Credit Card
  api_instance.update_account_credit_card(id)
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_account_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;. | 

### Return type

nil (empty response body)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **update_affiliate_dock_setup**
> TextResponse update_affiliate_dock_setup(affiliate_dock_titleaffiliate_dock_descriptionreferrer_coupon)

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

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

api_instance = SwaggerClient::BillingApi.new
affiliate_dock_title = 'affiliate_dock_title_example' # String | 
affiliate_dock_description = 'affiliate_dock_description_example' # String | 
referrer_coupon = 'referrer_coupon_example' # String | 


begin
  #Configure Affiliate Dock Settings
  result = api_instance.update_affiliate_dock_setup(affiliate_dock_titleaffiliate_dock_descriptionreferrer_coupon)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_affiliate_dock_setup: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **String**|  | 
 **affiliate_dock_description** | **String**|  | 
 **referrer_coupon** | **String**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **update_affiliate_dock_setup**
> TextResponse update_affiliate_dock_setup(body)

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::AffiliateDockSetup.new # AffiliateDockSetup | 


begin
  #Configure Affiliate Dock Settings
  result = api_instance.update_affiliate_dock_setup(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_affiliate_dock_setup: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**AffiliateDockSetup**](AffiliateDockSetup.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **update_affiliate_landing_page**
> TextResponse update_affiliate_landing_page(affiliate_dock_titleaffiliate_dock_descriptionreferrer_coupon)

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

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

api_instance = SwaggerClient::BillingApi.new
affiliate_dock_title = 'affiliate_dock_title_example' # String | 
affiliate_dock_description = 'affiliate_dock_description_example' # String | 
referrer_coupon = 'referrer_coupon_example' # String | 


begin
  #Configure Affiliate Landing Page
  result = api_instance.update_affiliate_landing_page(affiliate_dock_titleaffiliate_dock_descriptionreferrer_coupon)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_affiliate_landing_page: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_dock_title** | **String**|  | 
 **affiliate_dock_description** | **String**|  | 
 **referrer_coupon** | **String**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **update_affiliate_landing_page**
> TextResponse update_affiliate_landing_page(body)

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::AffiliateDockSetup.new # AffiliateDockSetup | 


begin
  #Configure Affiliate Landing Page
  result = api_instance.update_affiliate_landing_page(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_affiliate_landing_page: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**AffiliateDockSetup**](AffiliateDockSetup.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **update_affiliate_payment_setup**
> TextResponse update_affiliate_payment_setup(affiliate_paypalaffiliate_payment_method)

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

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

api_instance = SwaggerClient::BillingApi.new
affiliate_paypal = 'affiliate_paypal_example' # String | 
affiliate_payment_method = 'affiliate_payment_method_example' # String | 


begin
  #Configure Affiliate Payout Preferences
  result = api_instance.update_affiliate_payment_setup(affiliate_paypalaffiliate_payment_method)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_affiliate_payment_setup: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **affiliate_paypal** | **String**|  | 
 **affiliate_payment_method** | **String**|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **update_affiliate_payment_setup**
> TextResponse update_affiliate_payment_setup(body)

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::AffiliatePaymentSetup.new # AffiliatePaymentSetup | 


begin
  #Configure Affiliate Payout Preferences
  result = api_instance.update_affiliate_payment_setup(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_affiliate_payment_setup: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**AffiliatePaymentSetup**](AffiliatePaymentSetup.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json
 - **Accept**: application/json



# **update_billing_credit_card**
> SuccessTextResponse update_billing_credit_card(id)

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

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

api_instance = SwaggerClient::BillingApi.new
id = 56 # Integer | The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.


begin
  #Update Credit Card Details
  result = api_instance.update_billing_credit_card(id)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_billing_credit_card: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **Integer**| The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;. | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json



# **update_billing_payment_method**
> SuccessTextResponse update_billing_payment_method(body)

Update Default Payment Method

Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

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

api_instance = SwaggerClient::BillingApi.new
body = SwaggerClient::BillingPaymentMethodRequest.new # BillingPaymentMethodRequest | 


begin
  #Update Default Payment Method
  result = api_instance.update_billing_payment_method(body)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_billing_payment_method: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**BillingPaymentMethodRequest**](BillingPaymentMethodRequest.md)|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



# **update_billing_payment_method**
> SuccessTextResponse update_billing_payment_method(payment_methodcc_auto)

Update Default Payment Method

Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

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

api_instance = SwaggerClient::BillingApi.new
payment_method = 'payment_method_example' # String | 
cc_auto = 'cc_auto_example' # String | 


begin
  #Update Default Payment Method
  result = api_instance.update_billing_payment_method(payment_methodcc_auto)
  p result
rescue SwaggerClient::ApiError => e
  puts "Exception when calling BillingApi->update_billing_payment_method: #{e}"
end
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **payment_method** | **String**|  | 
 **cc_auto** | **String**|  | 

### Return type

[**SuccessTextResponse**](SuccessTextResponse.md)

### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), [sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json



