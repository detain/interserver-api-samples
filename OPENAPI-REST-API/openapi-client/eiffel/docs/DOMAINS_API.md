# DOMAINS_API

All URIs are relative to *https://my.interserver.net/apiv2*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**add_domain**](DOMAINS_API.md#add_domain) | **Post** /domains/order | Place Domain Order
[**add_domain_dnssec**](DOMAINS_API.md#add_domain_dnssec) | **Post** /domains/{id}/dnssec | Add Domain DNSSEC Records
[**add_domain_nameserver**](DOMAINS_API.md#add_domain_nameserver) | **Post** /domains/{id}/nameservers | Add Registered Nameserver
[**cancel_domain**](DOMAINS_API.md#cancel_domain) | **Delete** /domains/{id} | Cancel Domain Order
[**delete_domain_dnssec**](DOMAINS_API.md#delete_domain_dnssec) | **Delete** /domains/{id}/dnssec | Remove Domain DNSSEC Records
[**delete_domain_nameserver**](DOMAINS_API.md#delete_domain_nameserver) | **Delete** /domains/{id}/nameservers | Delete Registered Nameserver
[**domain_contact**](DOMAINS_API.md#domain_contact) | **Get** /domains/{id}/contact | Get Domain Contact Details
[**domain_dnssec**](DOMAINS_API.md#domain_dnssec) | **Get** /domains/{id}/dnssec | Get Domain DNSSEC Records
[**domain_info**](DOMAINS_API.md#domain_info) | **Get** /domains/{id} | Get Domain Order
[**domain_invoices**](DOMAINS_API.md#domain_invoices) | **Get** /domains/{id}/invoices | Get Domain Invoices
[**domain_lookup**](DOMAINS_API.md#domain_lookup) | **Get** /domains/lookup/{name} | Lookup Domain Availability and Pricing
[**domain_nameservers**](DOMAINS_API.md#domain_nameservers) | **Get** /domains/{id}/nameservers | List Registered Nameservers
[**domain_order_fields**](DOMAINS_API.md#domain_order_fields) | **Get** /domains/order/{domain}/{regType} | Get Domain Order Fields
[**domain_order_search_results**](DOMAINS_API.md#domain_order_search_results) | **Get** /domains/order/{domain} | Get Domain Order Search Results
[**domain_renewal**](DOMAINS_API.md#domain_renewal) | **Get** /domains/{id}/renew | Start Domain Renewal Flow
[**domain_search**](DOMAINS_API.md#domain_search) | **Get** /domains/search/{name} | Search Domain Suggestions
[**domain_transfer**](DOMAINS_API.md#domain_transfer) | **Get** /domains/{id}/transfer | Start Domain Transfer Flow
[**domain_whois_privacy**](DOMAINS_API.md#domain_whois_privacy) | **Get** /domains/{id}/whois | Get Whois Privacy Status
[**domains_list**](DOMAINS_API.md#domains_list) | **Get** /domains | List Domain Orders
[**domains_welcome_email**](DOMAINS_API.md#domains_welcome_email) | **Get** /domains/{id}/welcome_email | Resend Domain Welcome Email
[**new_domain**](DOMAINS_API.md#new_domain) | **Get** /domains/order | Get Domain Ordering Information
[**patch_domains**](DOMAINS_API.md#patch_domains) | **Patch** /domains/order | Validate Domain Order
[**post_domain_renewal**](DOMAINS_API.md#post_domain_renewal) | **Post** /domains/{id}/renew | Request Domain Renewal
[**post_domain_transfer**](DOMAINS_API.md#post_domain_transfer) | **Post** /domains/{id}/transfer | Request Domain Transfer
[**put_domains**](DOMAINS_API.md#put_domains) | **Put** /domains/order | Domain Order Search
[**update_domain_contact**](DOMAINS_API.md#update_domain_contact) | **Post** /domains/{id}/contact | Update Domain Contact Details
[**update_domain_info**](DOMAINS_API.md#update_domain_info) | **Post** /domains/{id} | Update Domain Order
[**update_domain_nameservers**](DOMAINS_API.md#update_domain_nameservers) | **Put** /domains/{id}/nameservers | Replace Nameserver Set
[**update_domain_whois_privacy**](DOMAINS_API.md#update_domain_whois_privacy) | **Post** /domains/{id}/whois | Update Whois Privacy


# **add_domain**
> add_domain : detachable SERVICE_ORDER_POST_RESPONSE


Place Domain Order

Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.


### Parameters
This endpoint does not need any parameter.

### Return type

[**SERVICE_ORDER_POST_RESPONSE**](ServiceOrderPostResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_domain_dnssec**
> add_domain_dnssec (id: INTEGER_32 ; domain_dnssec_request: DOMAIN_DNSSEC_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Add Domain DNSSEC Records

Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]
 **domain_dnssec_request** | [**DOMAIN_DNSSEC_REQUEST**](DOMAIN_DNSSEC_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **add_domain_nameserver**
> add_domain_nameserver (id: INTEGER_32 ; domain_nameserver_post_request: DOMAIN_NAMESERVER_POST_REQUEST ): detachable TEXT_RESPONSE


Add Registered Nameserver

Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]
 **domain_nameserver_post_request** | [**DOMAIN_NAMESERVER_POST_REQUEST**](DOMAIN_NAMESERVER_POST_REQUEST.md)|  | 

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **cancel_domain**
> cancel_domain (id: INTEGER_32 ): detachable CANCEL_DOMAIN_200_RESPONSE


Cancel Domain Order

Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**CANCEL_DOMAIN_200_RESPONSE**](CancelDomain_200_response.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_domain_dnssec**
> delete_domain_dnssec (id: INTEGER_32 ; action: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Remove Domain DNSSEC Records

Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]
 **action** | **STRING_32**| Set to &#x60;delete&#x60; to remove all DNSSEC records. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_domain_nameserver**
> delete_domain_nameserver (id: INTEGER_32 ; index: INTEGER_32 ): detachable TEXT_RESPONSE


Delete Registered Nameserver

Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]
 **index** | **INTEGER_32**| The index of the registered nameserver from the registered nameservers list to delete.   | [default to null]

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_contact**
> domain_contact (id: INTEGER_32 ): detachable DOMAIN_CONTACT_DETAILS


Get Domain Contact Details

Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**DOMAIN_CONTACT_DETAILS**](DomainContactDetails.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_dnssec**
> domain_dnssec (id: INTEGER_32 ): detachable DOMAIN_DNSSEC_RECORDS


Get Domain DNSSEC Records

Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**DOMAIN_DNSSEC_RECORDS**](DomainDnssecRecords.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_info**
> domain_info (id: INTEGER_32 ): detachable DOMAIN


Get Domain Order

Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**DOMAIN**](Domain.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_invoices**
> domain_invoices (id: INTEGER_32 ): detachable CHARGE_INVOICE_ROWS


Get Domain Invoices

Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**CHARGE_INVOICE_ROWS**](ChargeInvoiceRows.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_lookup**
> domain_lookup (name: STRING_32 ): detachable DOMAIN_LOOKUP_RESPONSE


Lookup Domain Availability and Pricing

Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **STRING_32**| The full domain name to look up (for example &#x60;example.com&#x60;). | [default to null]

### Return type

[**DOMAIN_LOOKUP_RESPONSE**](DomainLookupResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_nameservers**
> domain_nameservers (id: INTEGER_32 ): detachable DOMAIN_NAMESERVER_GET_RESPONSE


List Registered Nameservers

Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**DOMAIN_NAMESERVER_GET_RESPONSE**](DomainNameserverGetResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_order_fields**
> domain_order_fields (domain: STRING_32 ; reg_type: STRING_32 )


Get Domain Order Fields

Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **STRING_32**| The fully qualified domain name (e.g. &#x60;example.com&#x60;). | [default to null]
 **reg_type** | **STRING_32**| The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers. | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_order_search_results**
> domain_order_search_results (domain: STRING_32 )


Get Domain Order Search Results

Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **domain** | **STRING_32**| The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;). | [default to null]

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_renewal**
> domain_renewal (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Start Domain Renewal Flow

Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_search**
> domain_search (name: STRING_32 ): detachable DOMAIN_SEARCH_RESPONSE


Search Domain Suggestions

Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **name** | **STRING_32**| The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;). | [default to null]

### Return type

[**DOMAIN_SEARCH_RESPONSE**](DomainSearchResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_transfer**
> domain_transfer (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Start Domain Transfer Flow

Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domain_whois_privacy**
> domain_whois_privacy (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Get Whois Privacy Status

Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domains_list**
> domains_list : detachable LIST [DOMAIN_ROW]


List Domain Orders

Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [DOMAIN_ROW]**](DomainRow.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **domains_welcome_email**
> domains_welcome_email (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Resend Domain Welcome Email

Resends the welcome email for the domain service. The email contains registration details and management instructions.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **new_domain**
> new_domain : detachable DOMAIN_ORDER


Get Domain Ordering Information

Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.


### Parameters
This endpoint does not need any parameter.

### Return type

[**DOMAIN_ORDER**](DomainOrder.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patch_domains**
> patch_domains 


Validate Domain Order

Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_domain_renewal**
> post_domain_renewal (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Request Domain Renewal

Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **post_domain_transfer**
> post_domain_transfer (id: INTEGER_32 ): detachable SUCCESS_TEXT_RESPONSE


Request Domain Transfer

Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **put_domains**
> put_domains 


Domain Order Search

Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.


### Parameters
This endpoint does not need any parameter.

### Return type

{empty response body)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_domain_contact**
> update_domain_contact (id: INTEGER_32 ; domain_contact_details: DOMAIN_CONTACT_DETAILS ): detachable SUCCESS_TEXT_RESPONSE


Update Domain Contact Details

Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]
 **domain_contact_details** | [**DOMAIN_CONTACT_DETAILS**](DOMAIN_CONTACT_DETAILS.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_domain_info**
> update_domain_info (id: STRING_32 ): detachable SUCCESS_TEXT_RESPONSE


Update Domain Order

Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **STRING_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_domain_nameservers**
> update_domain_nameservers (id: INTEGER_32 ; domain_nameserver_put_request: DOMAIN_NAMESERVER_PUT_REQUEST ): detachable TEXT_RESPONSE


Replace Nameserver Set

Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]
 **domain_nameserver_put_request** | [**DOMAIN_NAMESERVER_PUT_REQUEST**](DOMAIN_NAMESERVER_PUT_REQUEST.md)|  | 

### Return type

[**TEXT_RESPONSE**](TextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update_domain_whois_privacy**
> update_domain_whois_privacy (id: INTEGER_32 ; domain_whois_privacy_request: DOMAIN_WHOIS_PRIVACY_REQUEST ): detachable SUCCESS_TEXT_RESPONSE


Update Whois Privacy

Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **INTEGER_32**| The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;. | [default to null]
 **domain_whois_privacy_request** | [**DOMAIN_WHOIS_PRIVACY_REQUEST**](DOMAIN_WHOIS_PRIVACY_REQUEST.md)|  | 

### Return type

[**SUCCESS_TEXT_RESPONSE**](SuccessTextResponse.md)

### Authorization

[sessionIdCookieAuth](../README.md#sessionIdCookieAuth), [apiKeyAuth](../README.md#apiKeyAuth), [sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth)

### HTTP request headers

 - **Content-Type**: application/json, multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

