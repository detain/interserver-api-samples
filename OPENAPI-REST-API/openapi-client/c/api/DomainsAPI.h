#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cancel_domain_200_response.h"
#include "../model/charge_invoice_rows.h"
#include "../model/domain.h"
#include "../model/domain_contact_details.h"
#include "../model/domain_dnssec_records.h"
#include "../model/domain_dnssec_request.h"
#include "../model/domain_lookup_response.h"
#include "../model/domain_nameserver_get_response.h"
#include "../model/domain_nameserver_post_request.h"
#include "../model/domain_nameserver_put_request.h"
#include "../model/domain_order.h"
#include "../model/domain_row.h"
#include "../model/domain_search_response.h"
#include "../model/domain_whois_privacy_request.h"
#include "../model/get_account_info_401_response.h"
#include "../model/success_text_response.h"
#include "../model/text_response.h"


// Place Domain Order
//
// Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
//
void
DomainsAPI_addDomain(apiClient_t *apiClient);


// Add Domain DNSSEC Records
//
// Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
//
success_text_response_t*
DomainsAPI_addDomainDnssec(apiClient_t *apiClient, int *id, domain_dnssec_request_t *domain_dnssec_request);


// Add Registered Nameserver
//
// Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
//
text_response_t*
DomainsAPI_addDomainNameserver(apiClient_t *apiClient, int *id, domain_nameserver_post_request_t *domain_nameserver_post_request);


// Cancel Domain Order
//
// Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
//
cancel_domain_200_response_t*
DomainsAPI_cancelDomain(apiClient_t *apiClient, int *id);


// Remove Domain DNSSEC Records
//
// Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
//
success_text_response_t*
DomainsAPI_deleteDomainDnssec(apiClient_t *apiClient, int *id, char *action);


// Delete Registered Nameserver
//
// Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
//
text_response_t*
DomainsAPI_deleteDomainNameserver(apiClient_t *apiClient, int *id, int *index);


// Get Domain Contact Details
//
// Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
//
domain_contact_details_t*
DomainsAPI_getDomainContact(apiClient_t *apiClient, int *id);


// Get Domain DNSSEC Records
//
// Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
//
domain_dnssec_records_t*
DomainsAPI_getDomainDnssec(apiClient_t *apiClient, int *id);


// Get Domain Order
//
// Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
//
domain_t*
DomainsAPI_getDomainInfo(apiClient_t *apiClient, int *id);


// Get Domain Invoices
//
// Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
//
charge_invoice_rows_t*
DomainsAPI_getDomainInvoices(apiClient_t *apiClient, int *id);


// Lookup Domain Availability and Pricing
//
// Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
//
domain_lookup_response_t*
DomainsAPI_getDomainLookup(apiClient_t *apiClient, char *name);


// List Registered Nameservers
//
// Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
//
domain_nameserver_get_response_t*
DomainsAPI_getDomainNameservers(apiClient_t *apiClient, int *id);


// Get Domain Order Fields
//
// Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
//
void
DomainsAPI_getDomainOrderFields(apiClient_t *apiClient, char *domain, char *regType);


// Get Domain Order Search Results
//
// Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
//
void
DomainsAPI_getDomainOrderSearchResults(apiClient_t *apiClient, char *domain);


// Start Domain Renewal Flow
//
// Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
//
success_text_response_t*
DomainsAPI_getDomainRenewal(apiClient_t *apiClient, int *id);


// Search Domain Suggestions
//
// Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
//
domain_search_response_t*
DomainsAPI_getDomainSearch(apiClient_t *apiClient, char *name);


// Start Domain Transfer Flow
//
// Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
//
success_text_response_t*
DomainsAPI_getDomainTransfer(apiClient_t *apiClient, int *id);


// Get Whois Privacy Status
//
// Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
//
success_text_response_t*
DomainsAPI_getDomainWhoisPrivacy(apiClient_t *apiClient, int *id);


// List Domain Orders
//
// Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
//
list_t*
DomainsAPI_getDomainsList(apiClient_t *apiClient);


// Resend Domain Welcome Email
//
// Resends the welcome email for the domain service. The email contains registration details and management instructions.
//
success_text_response_t*
DomainsAPI_getDomainsWelcomeEmail(apiClient_t *apiClient, int *id);


// Get Domain Ordering Information
//
// Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
//
domain_order_t*
DomainsAPI_getNewDomain(apiClient_t *apiClient);


// Validate Domain Order
//
// Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
//
void
DomainsAPI_patchDomains(apiClient_t *apiClient);


// Request Domain Renewal
//
// Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
//
success_text_response_t*
DomainsAPI_postDomainRenewal(apiClient_t *apiClient, int *id);


// Request Domain Transfer
//
// Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
//
success_text_response_t*
DomainsAPI_postDomainTransfer(apiClient_t *apiClient, int *id);


// Domain Order Search
//
// Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
//
void
DomainsAPI_putDomains(apiClient_t *apiClient);


// Update Domain Contact Details
//
// Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
//
success_text_response_t*
DomainsAPI_updateDomainContact(apiClient_t *apiClient, int *id, domain_contact_details_t *domain_contact_details);


// Update Domain Order
//
// Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
//
void
DomainsAPI_updateDomainInfo(apiClient_t *apiClient, char *id);


// Replace Nameserver Set
//
// Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
//
text_response_t*
DomainsAPI_updateDomainNameservers(apiClient_t *apiClient, int *id, domain_nameserver_put_request_t *domain_nameserver_put_request);


// Update Whois Privacy
//
// Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
//
success_text_response_t*
DomainsAPI_updateDomainWhoisPrivacy(apiClient_t *apiClient, int *id, domain_whois_privacy_request_t *domain_whois_privacy_request);


