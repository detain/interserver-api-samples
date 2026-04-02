# DomainsApi

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AddDomain**](DomainsApi.md#AddDomain) | **POST** /domains/order | Place Domain Order
[**AddDomainDnssec**](DomainsApi.md#AddDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**AddDomainNameserver**](DomainsApi.md#AddDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
[**CancelDomain**](DomainsApi.md#CancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order
[**DeleteDomainDnssec**](DomainsApi.md#DeleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**DeleteDomainNameserver**](DomainsApi.md#DeleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
[**GetDomainContact**](DomainsApi.md#GetDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details
[**GetDomainDnssec**](DomainsApi.md#GetDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**GetDomainInfo**](DomainsApi.md#GetDomainInfo) | **GET** /domains/{id} | Get Domain Order
[**GetDomainInvoices**](DomainsApi.md#GetDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
[**GetDomainLookup**](DomainsApi.md#GetDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**GetDomainNameservers**](DomainsApi.md#GetDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
[**GetDomainOrderFields**](DomainsApi.md#GetDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**GetDomainOrderSearchResults**](DomainsApi.md#GetDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
[**GetDomainRenewal**](DomainsApi.md#GetDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
[**GetDomainSearch**](DomainsApi.md#GetDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions
[**GetDomainTransfer**](DomainsApi.md#GetDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
[**GetDomainWhoisPrivacy**](DomainsApi.md#GetDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
[**GetDomainsList**](DomainsApi.md#GetDomainsList) | **GET** /domains | List Domain Orders
[**GetDomainsWelcomeEmail**](DomainsApi.md#GetDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**GetNewDomain**](DomainsApi.md#GetNewDomain) | **GET** /domains/order | Get Domain Ordering Information
[**PatchDomains**](DomainsApi.md#PatchDomains) | **PATCH** /domains/order | Validate Domain Order
[**PostDomainRenewal**](DomainsApi.md#PostDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
[**PostDomainTransfer**](DomainsApi.md#PostDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
[**PutDomains**](DomainsApi.md#PutDomains) | **PUT** /domains/order | Domain Order Search
[**UpdateDomainContact**](DomainsApi.md#UpdateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details
[**UpdateDomainInfo**](DomainsApi.md#UpdateDomainInfo) | **POST** /domains/{id} | Update Domain Order
[**UpdateDomainNameservers**](DomainsApi.md#UpdateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
[**UpdateDomainWhoisPrivacy**](DomainsApi.md#UpdateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy


# **AddDomain**
> ServiceOrderPostResponse AddDomain()

Place Domain Order

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.

### Example
```R
library(openapi)

# Place Domain Order
#

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddDomain(data_file = "result.txt")
result <- api_instance$AddDomain()
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

# **AddDomainDnssec**
> SuccessTextResponse AddDomainDnssec(id, domain_dnssec_request)

Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.

### Example
```R
library(openapi)

# Add Domain DNSSEC Records
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.
var_domain_dnssec_request <- DomainDnssecRequest$new(c(123), c(123), c("digest_example"), c(123)) # DomainDnssecRequest | 

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddDomainDnssec(var_id, var_domain_dnssec_requestdata_file = "result.txt")
result <- api_instance$AddDomainDnssec(var_id, var_domain_dnssec_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_dnssec_request** | [**DomainDnssecRequest**](DomainDnssecRequest.md)|  | 

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

# **AddDomainNameserver**
> TextResponse AddDomainNameserver(id, domain_nameserver_post_request)

Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.

### Example
```R
library(openapi)

# Add Registered Nameserver
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.
var_domain_nameserver_post_request <- DomainNameserverPostRequest$new("name_example", "ipAddress_example") # DomainNameserverPostRequest | 

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$AddDomainNameserver(var_id, var_domain_nameserver_post_requestdata_file = "result.txt")
result <- api_instance$AddDomainNameserver(var_id, var_domain_nameserver_post_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_nameserver_post_request** | [**DomainNameserverPostRequest**](DomainNameserverPostRequest.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **CancelDomain**
> CancelDomain200Response CancelDomain(id)

Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.

### Example
```R
library(openapi)

# Cancel Domain Order
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CancelDomain(var_iddata_file = "result.txt")
result <- api_instance$CancelDomain(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**CancelDomain200Response**](CancelDomain_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domains Cancel |  -  |
| **401** | Unauthorized |  -  |

# **DeleteDomainDnssec**
> SuccessTextResponse DeleteDomainDnssec(id, action)

Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.

### Example
```R
library(openapi)

# Remove Domain DNSSEC Records
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.
var_action <- "action_example" # character | Set to `delete` to remove all DNSSEC records.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteDomainDnssec(var_id, var_actiondata_file = "result.txt")
result <- api_instance$DeleteDomainDnssec(var_id, var_action)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **action** | **character**| Set to &#x60;delete&#x60; to remove all DNSSEC records. | 

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

# **DeleteDomainNameserver**
> TextResponse DeleteDomainNameserver(id, index)

Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.

### Example
```R
library(openapi)

# Delete Registered Nameserver
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.
var_index <- 56 # integer | The index of the registered nameserver from the registered nameservers list to delete.  

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$DeleteDomainNameserver(var_id, var_indexdata_file = "result.txt")
result <- api_instance$DeleteDomainNameserver(var_id, var_index)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **index** | **integer**| The index of the registered nameserver from the registered nameservers list to delete.   | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainContact**
> DomainContactDetails GetDomainContact(id)

Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.

### Example
```R
library(openapi)

# Get Domain Contact Details
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainContact(var_iddata_file = "result.txt")
result <- api_instance$GetDomainContact(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainContactDetails**](DomainContactDetails.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The registrant/admin contact details for the domain. |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainDnssec**
> DomainDnssecRecords GetDomainDnssec(id)

Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.

### Example
```R
library(openapi)

# Get Domain DNSSEC Records
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainDnssec(var_iddata_file = "result.txt")
result <- api_instance$GetDomainDnssec(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainDnssecRecords**](DomainDnssecRecords.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | DNSSEC records currently applied to the domain. |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainInfo**
> Domain GetDomainInfo(id)

Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.

### Example
```R
library(openapi)

# Get Domain Order
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainInfo(var_iddata_file = "result.txt")
result <- api_instance$GetDomainInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**Domain**](Domain.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domain Information. |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainInvoices**
> ChargeInvoiceRows GetDomainInvoices(id)

Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.

### Example
```R
library(openapi)

# Get Domain Invoices
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainInvoices(var_iddata_file = "result.txt")
result <- api_instance$GetDomainInvoices(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **GetDomainLookup**
> DomainLookupResponse GetDomainLookup(name)

Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.

### Example
```R
library(openapi)

# Lookup Domain Availability and Pricing
#
# prepare function argument(s)
var_name <- "name_example" # character | The full domain name to look up (for example `example.com`).

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainLookup(var_namedata_file = "result.txt")
result <- api_instance$GetDomainLookup(var_name)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **character**| The full domain name to look up (for example &#x60;example.com&#x60;). | 

### Return type

[**DomainLookupResponse**](DomainLookupResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Availability, pricing, and field metadata for the requested domain. |  -  |
| **401** | Unauthorized |  -  |
| **422** | The domain input was invalid. |  -  |

# **GetDomainNameservers**
> DomainNameserverGetResponse GetDomainNameservers(id)

List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.

### Example
```R
library(openapi)

# List Registered Nameservers
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainNameservers(var_iddata_file = "result.txt")
result <- api_instance$GetDomainNameservers(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[**DomainNameserverGetResponse**](DomainNameserverGetResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domain registered nameservers list response |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainOrderFields**
> GetDomainOrderFields(domain, reg_type)

Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.

### Example
```R
library(openapi)

# Get Domain Order Fields
#
# prepare function argument(s)
var_domain <- "domain_example" # character | The fully qualified domain name (e.g. `example.com`).
var_reg_type <- "reg_type_example" # character | The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetDomainOrderFields(var_domain, var_reg_type)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **character**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | 
 **reg_type** | **character**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | 

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
| **200** | Registration-type-specific form field definitions. |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainOrderSearchResults**
> GetDomainOrderSearchResults(domain)

Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.

### Example
```R
library(openapi)

# Get Domain Order Search Results
#
# prepare function argument(s)
var_domain <- "domain_example" # character | The fully qualified domain name to look up (e.g. `example.com`).

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$GetDomainOrderSearchResults(var_domain)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **character**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | 

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
| **200** | Domain availability and pricing information. |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainRenewal**
> SuccessTextResponse GetDomainRenewal(id)

Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.

### Example
```R
library(openapi)

# Start Domain Renewal Flow
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainRenewal(var_iddata_file = "result.txt")
result <- api_instance$GetDomainRenewal(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **GetDomainSearch**
> DomainSearchResponse GetDomainSearch(name)

Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.

### Example
```R
library(openapi)

# Search Domain Suggestions
#
# prepare function argument(s)
var_name <- "name_example" # character | The base domain name to search (for example `example` or `example.com`).

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainSearch(var_namedata_file = "result.txt")
result <- api_instance$GetDomainSearch(var_name)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **character**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | 

### Return type

[**DomainSearchResponse**](DomainSearchResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Suggested and lookup results for the supplied search term. |  -  |
| **401** | Unauthorized |  -  |
| **404** | No search suggestions or registrar response available. |  -  |

# **GetDomainTransfer**
> SuccessTextResponse GetDomainTransfer(id)

Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.

### Example
```R
library(openapi)

# Start Domain Transfer Flow
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainTransfer(var_iddata_file = "result.txt")
result <- api_instance$GetDomainTransfer(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **GetDomainWhoisPrivacy**
> SuccessTextResponse GetDomainWhoisPrivacy(id)

Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.

### Example
```R
library(openapi)

# Get Whois Privacy Status
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainWhoisPrivacy(var_iddata_file = "result.txt")
result <- api_instance$GetDomainWhoisPrivacy(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **GetDomainsList**
> array[DomainRow] GetDomainsList()

List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.

### Example
```R
library(openapi)

# List Domain Orders
#

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainsList(data_file = "result.txt")
result <- api_instance$GetDomainsList()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[DomainRow]**](DomainRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | The listing of &#x60;Domains&#x60; services on your account. |  -  |
| **401** | Unauthorized |  -  |

# **GetDomainsWelcomeEmail**
> SuccessTextResponse GetDomainsWelcomeEmail(id)

Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.

### Example
```R
library(openapi)

# Resend Domain Welcome Email
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetDomainsWelcomeEmail(var_iddata_file = "result.txt")
result <- api_instance$GetDomainsWelcomeEmail(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **GetNewDomain**
> DomainOrder GetNewDomain()

Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.

### Example
```R
library(openapi)

# Get Domain Ordering Information
#

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$GetNewDomain(data_file = "result.txt")
result <- api_instance$GetNewDomain()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**DomainOrder**](DomainOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Domain registration order information. |  -  |
| **401** | Unauthorized |  -  |

# **PatchDomains**
> PatchDomains()

Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).

### Example
```R
library(openapi)

# Validate Domain Order
#

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PatchDomains()
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
| **200** | Validate Domain order response |  -  |
| **401** | Unauthorized |  -  |

# **PostDomainRenewal**
> SuccessTextResponse PostDomainRenewal(id)

Request Domain Renewal

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.

### Example
```R
library(openapi)

# Request Domain Renewal
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostDomainRenewal(var_iddata_file = "result.txt")
result <- api_instance$PostDomainRenewal(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **PostDomainTransfer**
> SuccessTextResponse PostDomainTransfer(id)

Request Domain Transfer

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.

### Example
```R
library(openapi)

# Request Domain Transfer
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$PostDomainTransfer(var_iddata_file = "result.txt")
result <- api_instance$PostDomainTransfer(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **PutDomains**
> PutDomains()

Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.

### Example
```R
library(openapi)

# Domain Order Search
#

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
api_instance$PutDomains()
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
| **200** | Validate Domain Order response |  -  |
| **401** | Unauthorized |  -  |

# **UpdateDomainContact**
> SuccessTextResponse UpdateDomainContact(id, domain_contact_details)

Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.

### Example
```R
library(openapi)

# Update Domain Contact Details
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.
var_domain_contact_details <- DomainContactDetails$new("status_example", "state_example", "org_name_example", "country_example", "postal_code_example", "email_example", "fax_example", "address2_example", "address3_example", "address1_example", "city_example", "phone_example", "first_name_example", "last_name_example") # DomainContactDetails | 

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateDomainContact(var_id, var_domain_contact_detailsdata_file = "result.txt")
result <- api_instance$UpdateDomainContact(var_id, var_domain_contact_details)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_contact_details** | [**DomainContactDetails**](DomainContactDetails.md)|  | 

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

# **UpdateDomainInfo**
> SuccessTextResponse UpdateDomainInfo(id)

Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.

### Example
```R
library(openapi)

# Update Domain Order
#
# prepare function argument(s)
var_id <- "id_example" # character | The domain service ID. Use `domain_id` from `GET /domains`.

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateDomainInfo(var_iddata_file = "result.txt")
result <- api_instance$UpdateDomainInfo(var_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **character**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

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

# **UpdateDomainNameservers**
> TextResponse UpdateDomainNameservers(id, domain_nameserver_put_request)

Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.

### Example
```R
library(openapi)

# Replace Nameserver Set
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.
var_domain_nameserver_put_request <- DomainNameserverPutRequest$new(c("nameserver_example")) # DomainNameserverPutRequest | 

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateDomainNameservers(var_id, var_domain_nameserver_put_requestdata_file = "result.txt")
result <- api_instance$UpdateDomainNameservers(var_id, var_domain_nameserver_put_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_nameserver_put_request** | [**DomainNameserverPutRequest**](DomainNameserverPutRequest.md)|  | 

### Return type

[**TextResponse**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response with a text message field. |  -  |
| **401** | Unauthorized |  -  |

# **UpdateDomainWhoisPrivacy**
> SuccessTextResponse UpdateDomainWhoisPrivacy(id, domain_whois_privacy_request)

Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.

### Example
```R
library(openapi)

# Update Whois Privacy
#
# prepare function argument(s)
var_id <- 56 # integer | The domain service ID. Use `domain_id` from `GET /domains`.
var_domain_whois_privacy_request <- DomainWhoisPrivacyRequest$new("func_example", "csrf_token_example", "domain_firstname_example", "domain_lastname_example", "domain_email_example", "domain_address_example", "domain_address2_example", "domain_address3_example", "domain_city_example", "domain_state_example", "domain_zip_example", "domain_country_example", "domain_phone_example", "domain_fax_example", "domain_company_example", "domain_extra_example") # DomainWhoisPrivacyRequest | 

api_instance <- DomainsApi$new()
# Configure API key authorization: sessionIdCookieAuth
api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# Configure API key authorization: apiKeyAuth
# api_instance$api_client$api_keys["X-API-KEY"] <- Sys.getenv("API_KEY")
# Configure API key authorization: sessionIdHeaderAuth
# api_instance$api_client$api_keys["sessionid"] <- Sys.getenv("API_KEY")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$UpdateDomainWhoisPrivacy(var_id, var_domain_whois_privacy_requestdata_file = "result.txt")
result <- api_instance$UpdateDomainWhoisPrivacy(var_id, var_domain_whois_privacy_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **integer**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
 **domain_whois_privacy_request** | [**DomainWhoisPrivacyRequest**](DomainWhoisPrivacyRequest.md)|  | 

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

