# DomainsAPI

All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DomainsAPI_addDomain**](DomainsAPI.md#DomainsAPI_addDomain) | **POST** /domains/order | Place Domain Order
[**DomainsAPI_addDomainDnssec**](DomainsAPI.md#DomainsAPI_addDomainDnssec) | **POST** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**DomainsAPI_addDomainNameserver**](DomainsAPI.md#DomainsAPI_addDomainNameserver) | **POST** /domains/{id}/nameservers | Add Registered Nameserver
[**DomainsAPI_cancelDomain**](DomainsAPI.md#DomainsAPI_cancelDomain) | **DELETE** /domains/{id} | Cancel Domain Order
[**DomainsAPI_deleteDomainDnssec**](DomainsAPI.md#DomainsAPI_deleteDomainDnssec) | **DELETE** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**DomainsAPI_deleteDomainNameserver**](DomainsAPI.md#DomainsAPI_deleteDomainNameserver) | **DELETE** /domains/{id}/nameservers | Delete Registered Nameserver
[**DomainsAPI_getDomainContact**](DomainsAPI.md#DomainsAPI_getDomainContact) | **GET** /domains/{id}/contact | Get Domain Contact Details
[**DomainsAPI_getDomainDnssec**](DomainsAPI.md#DomainsAPI_getDomainDnssec) | **GET** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**DomainsAPI_getDomainInfo**](DomainsAPI.md#DomainsAPI_getDomainInfo) | **GET** /domains/{id} | Get Domain Order
[**DomainsAPI_getDomainInvoices**](DomainsAPI.md#DomainsAPI_getDomainInvoices) | **GET** /domains/{id}/invoices | Get Domain Invoices
[**DomainsAPI_getDomainLookup**](DomainsAPI.md#DomainsAPI_getDomainLookup) | **GET** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**DomainsAPI_getDomainNameservers**](DomainsAPI.md#DomainsAPI_getDomainNameservers) | **GET** /domains/{id}/nameservers | List Registered Nameservers
[**DomainsAPI_getDomainOrderFields**](DomainsAPI.md#DomainsAPI_getDomainOrderFields) | **GET** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**DomainsAPI_getDomainOrderSearchResults**](DomainsAPI.md#DomainsAPI_getDomainOrderSearchResults) | **GET** /domains/order/{domain} | Get Domain Order Search Results
[**DomainsAPI_getDomainRenewal**](DomainsAPI.md#DomainsAPI_getDomainRenewal) | **GET** /domains/{id}/renew | Start Domain Renewal Flow
[**DomainsAPI_getDomainSearch**](DomainsAPI.md#DomainsAPI_getDomainSearch) | **GET** /domains/search/{name} | Search Domain Suggestions
[**DomainsAPI_getDomainTransfer**](DomainsAPI.md#DomainsAPI_getDomainTransfer) | **GET** /domains/{id}/transfer | Start Domain Transfer Flow
[**DomainsAPI_getDomainWhoisPrivacy**](DomainsAPI.md#DomainsAPI_getDomainWhoisPrivacy) | **GET** /domains/{id}/whois | Get Whois Privacy Status
[**DomainsAPI_getDomainsList**](DomainsAPI.md#DomainsAPI_getDomainsList) | **GET** /domains | List Domain Orders
[**DomainsAPI_getDomainsWelcomeEmail**](DomainsAPI.md#DomainsAPI_getDomainsWelcomeEmail) | **GET** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**DomainsAPI_getNewDomain**](DomainsAPI.md#DomainsAPI_getNewDomain) | **GET** /domains/order | Get Domain Ordering Information
[**DomainsAPI_patchDomains**](DomainsAPI.md#DomainsAPI_patchDomains) | **PATCH** /domains/order | Validate Domain Order
[**DomainsAPI_postDomainRenewal**](DomainsAPI.md#DomainsAPI_postDomainRenewal) | **POST** /domains/{id}/renew | Request Domain Renewal
[**DomainsAPI_postDomainTransfer**](DomainsAPI.md#DomainsAPI_postDomainTransfer) | **POST** /domains/{id}/transfer | Request Domain Transfer
[**DomainsAPI_putDomains**](DomainsAPI.md#DomainsAPI_putDomains) | **PUT** /domains/order | Domain Order Search
[**DomainsAPI_updateDomainContact**](DomainsAPI.md#DomainsAPI_updateDomainContact) | **POST** /domains/{id}/contact | Update Domain Contact Details
[**DomainsAPI_updateDomainInfo**](DomainsAPI.md#DomainsAPI_updateDomainInfo) | **POST** /domains/{id} | Update Domain Order
[**DomainsAPI_updateDomainNameservers**](DomainsAPI.md#DomainsAPI_updateDomainNameservers) | **PUT** /domains/{id}/nameservers | Replace Nameserver Set
[**DomainsAPI_updateDomainWhoisPrivacy**](DomainsAPI.md#DomainsAPI_updateDomainWhoisPrivacy) | **POST** /domains/{id}/whois | Update Whois Privacy


# **DomainsAPI_addDomain**
```c
// Place Domain Order
//
// Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
//
service_order_post_response_t* DomainsAPI_addDomain(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[service_order_post_response_t](service_order_post_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_addDomainDnssec**
```c
// Add Domain DNSSEC Records
//
// Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
//
success_text_response_t* DomainsAPI_addDomainDnssec(apiClient_t *apiClient, int *id, domain_dnssec_request_t *domain_dnssec_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
**domain_dnssec_request** | **[domain_dnssec_request_t](domain_dnssec_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_addDomainNameserver**
```c
// Add Registered Nameserver
//
// Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
//
text_response_t* DomainsAPI_addDomainNameserver(apiClient_t *apiClient, int *id, domain_nameserver_post_request_t *domain_nameserver_post_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
**domain_nameserver_post_request** | **[domain_nameserver_post_request_t](domain_nameserver_post_request.md) \*** |  | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_cancelDomain**
```c
// Cancel Domain Order
//
// Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
//
cancel_domain_200_response_t* DomainsAPI_cancelDomain(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[cancel_domain_200_response_t](cancel_domain_200_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_deleteDomainDnssec**
```c
// Remove Domain DNSSEC Records
//
// Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
//
success_text_response_t* DomainsAPI_deleteDomainDnssec(apiClient_t *apiClient, int *id, char *action);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
**action** | **char \*** | Set to &#x60;delete&#x60; to remove all DNSSEC records. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_deleteDomainNameserver**
```c
// Delete Registered Nameserver
//
// Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
//
text_response_t* DomainsAPI_deleteDomainNameserver(apiClient_t *apiClient, int *id, int *index);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
**index** | **int \*** | The index of the registered nameserver from the registered nameservers list to delete.   | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainContact**
```c
// Get Domain Contact Details
//
// Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
//
domain_contact_details_t* DomainsAPI_getDomainContact(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[domain_contact_details_t](domain_contact_details.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainDnssec**
```c
// Get Domain DNSSEC Records
//
// Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
//
domain_dnssec_records_t* DomainsAPI_getDomainDnssec(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[domain_dnssec_records_t](domain_dnssec_records.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainInfo**
```c
// Get Domain Order
//
// Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
//
domain_t* DomainsAPI_getDomainInfo(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[domain_t](domain.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainInvoices**
```c
// Get Domain Invoices
//
// Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
//
charge_invoice_rows_t* DomainsAPI_getDomainInvoices(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[charge_invoice_rows_t](charge_invoice_rows.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainLookup**
```c
// Lookup Domain Availability and Pricing
//
// Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
//
domain_lookup_response_t* DomainsAPI_getDomainLookup(apiClient_t *apiClient, char *name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | The full domain name to look up (for example &#x60;example.com&#x60;). | 

### Return type

[domain_lookup_response_t](domain_lookup_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainNameservers**
```c
// List Registered Nameservers
//
// Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
//
domain_nameserver_get_response_t* DomainsAPI_getDomainNameservers(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[domain_nameserver_get_response_t](domain_nameserver_get_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainOrderFields**
```c
// Get Domain Order Fields
//
// Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
//
void DomainsAPI_getDomainOrderFields(apiClient_t *apiClient, char *domain, char *regType);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**domain** | **char \*** | The fully qualified domain name (e.g. &#x60;example.com&#x60;). | 
**regType** | **char \*** | The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainOrderSearchResults**
```c
// Get Domain Order Search Results
//
// Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
//
void DomainsAPI_getDomainOrderSearchResults(apiClient_t *apiClient, char *domain);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**domain** | **char \*** | The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | 

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainRenewal**
```c
// Start Domain Renewal Flow
//
// Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
//
success_text_response_t* DomainsAPI_getDomainRenewal(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainSearch**
```c
// Search Domain Suggestions
//
// Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
//
domain_search_response_t* DomainsAPI_getDomainSearch(apiClient_t *apiClient, char *name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | 

### Return type

[domain_search_response_t](domain_search_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainTransfer**
```c
// Start Domain Transfer Flow
//
// Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
//
success_text_response_t* DomainsAPI_getDomainTransfer(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainWhoisPrivacy**
```c
// Get Whois Privacy Status
//
// Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
//
success_text_response_t* DomainsAPI_getDomainWhoisPrivacy(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainsList**
```c
// List Domain Orders
//
// Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
//
list_t* DomainsAPI_getDomainsList(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](domain_row.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getDomainsWelcomeEmail**
```c
// Resend Domain Welcome Email
//
// Resends the welcome email for the domain service. The email contains registration details and management instructions.
//
success_text_response_t* DomainsAPI_getDomainsWelcomeEmail(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_getNewDomain**
```c
// Get Domain Ordering Information
//
// Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
//
domain_order_t* DomainsAPI_getNewDomain(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[domain_order_t](domain_order.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_patchDomains**
```c
// Validate Domain Order
//
// Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
//
void DomainsAPI_patchDomains(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_postDomainRenewal**
```c
// Request Domain Renewal
//
// Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
//
success_text_response_t* DomainsAPI_postDomainRenewal(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_postDomainTransfer**
```c
// Request Domain Transfer
//
// Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
//
success_text_response_t* DomainsAPI_postDomainTransfer(apiClient_t *apiClient, int *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_putDomains**
```c
// Domain Order Search
//
// Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
//
void DomainsAPI_putDomains(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_updateDomainContact**
```c
// Update Domain Contact Details
//
// Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
//
success_text_response_t* DomainsAPI_updateDomainContact(apiClient_t *apiClient, int *id, domain_contact_details_t *domain_contact_details);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
**domain_contact_details** | **[domain_contact_details_t](domain_contact_details.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_updateDomainInfo**
```c
// Update Domain Order
//
// Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
//
success_text_response_t* DomainsAPI_updateDomainInfo(apiClient_t *apiClient, char *id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_updateDomainNameservers**
```c
// Replace Nameserver Set
//
// Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
//
text_response_t* DomainsAPI_updateDomainNameservers(apiClient_t *apiClient, int *id, domain_nameserver_put_request_t *domain_nameserver_put_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
**domain_nameserver_put_request** | **[domain_nameserver_put_request_t](domain_nameserver_put_request.md) \*** |  | 

### Return type

[text_response_t](text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DomainsAPI_updateDomainWhoisPrivacy**
```c
// Update Whois Privacy
//
// Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
//
success_text_response_t* DomainsAPI_updateDomainWhoisPrivacy(apiClient_t *apiClient, int *id, domain_whois_privacy_request_t *domain_whois_privacy_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** | The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | 
**domain_whois_privacy_request** | **[domain_whois_privacy_request_t](domain_whois_privacy_request.md) \*** |  | 

### Return type

[success_text_response_t](success_text_response.md) *


### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

