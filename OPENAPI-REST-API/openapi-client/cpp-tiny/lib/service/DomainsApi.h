#ifndef TINY_CPP_CLIENT_DomainsApi_H_
#define TINY_CPP_CLIENT_DomainsApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "CancelDomain_200_response.h"
#include "ChargeInvoiceRows.h"
#include "Domain.h"
#include "DomainContactDetails.h"
#include "DomainDnssecRecords.h"
#include "DomainDnssecRequest.h"
#include "DomainLookupResponse.h"
#include "DomainNameserverGetResponse.h"
#include "DomainNameserverPostRequest.h"
#include "DomainNameserverPutRequest.h"
#include "DomainOrder.h"
#include "DomainRow.h"
#include "DomainSearchResponse.h"
#include "DomainWhoisPrivacyRequest.h"
#include "GetAccountInfo_401_response.h"
#include "ServiceOrderPostResponse.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class DomainsApi : public Service {
public:
    DomainsApi() = default;

    virtual ~DomainsApi();

    /**
    * Place Domain Order.
    *
    * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
    */
    Response<
                ServiceOrderPostResponse
        >
    addDomain(
    );
    /**
    * Add Domain DNSSEC Records.
    *
    * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    * \param domainDnssecRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    addDomainDnssec(
            
            int id
            , 
            
            DomainDnssecRequest domainDnssecRequest
            
    );
    /**
    * Add Registered Nameserver.
    *
    * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    * \param domainNameserverPostRequest  *Required*
    */
    Response<
                TextResponse
        >
    addDomainNameserver(
            
            int id
            , 
            
            DomainNameserverPostRequest domainNameserverPostRequest
            
    );
    /**
    * Cancel Domain Order.
    *
    * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                CancelDomain_200_response
        >
    cancelDomain(
            
            int id
            
    );
    /**
    * Remove Domain DNSSEC Records.
    *
    * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    * \param action Set to `delete` to remove all DNSSEC records. *Required*
    */
    Response<
                SuccessTextResponse
        >
    deleteDomainDnssec(
            
            int id
            , 
            
            std::string action
            
    );
    /**
    * Delete Registered Nameserver.
    *
    * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    * \param index The index of the registered nameserver from the registered nameservers list to delete.   *Required*
    */
    Response<
                TextResponse
        >
    deleteDomainNameserver(
            
            int id
            , 
            
            int index
            
    );
    /**
    * Get Domain Contact Details.
    *
    * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                DomainContactDetails
        >
    getDomainContact(
            
            int id
            
    );
    /**
    * Get Domain DNSSEC Records.
    *
    * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                DomainDnssecRecords
        >
    getDomainDnssec(
            
            int id
            
    );
    /**
    * Get Domain Order.
    *
    * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                Domain
        >
    getDomainInfo(
            
            int id
            
    );
    /**
    * Get Domain Invoices.
    *
    * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getDomainInvoices(
            
            int id
            
    );
    /**
    * Lookup Domain Availability and Pricing.
    *
    * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
    * \param name The full domain name to look up (for example `example.com`). *Required*
    */
    Response<
                DomainLookupResponse
        >
    getDomainLookup(
            
            std::string name
            
    );
    /**
    * List Registered Nameservers.
    *
    * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                DomainNameserverGetResponse
        >
    getDomainNameservers(
            
            int id
            
    );
    /**
    * Get Domain Order Fields.
    *
    * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
    * \param domain The fully qualified domain name (e.g. `example.com`). *Required*
    * \param regType The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers. *Required*
    */
    Response<
            String
        >
    getDomainOrderFields(
            
            std::string domain
            , 
            
            std::string regType
            
    );
    /**
    * Get Domain Order Search Results.
    *
    * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
    * \param domain The fully qualified domain name to look up (e.g. `example.com`). *Required*
    */
    Response<
            String
        >
    getDomainOrderSearchResults(
            
            std::string domain
            
    );
    /**
    * Start Domain Renewal Flow.
    *
    * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getDomainRenewal(
            
            int id
            
    );
    /**
    * Search Domain Suggestions.
    *
    * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
    * \param name The base domain name to search (for example `example` or `example.com`). *Required*
    */
    Response<
                DomainSearchResponse
        >
    getDomainSearch(
            
            std::string name
            
    );
    /**
    * Start Domain Transfer Flow.
    *
    * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getDomainTransfer(
            
            int id
            
    );
    /**
    * Get Whois Privacy Status.
    *
    * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getDomainWhoisPrivacy(
            
            int id
            
    );
    /**
    * List Domain Orders.
    *
    * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
    */
    Response<
                    std::list<DomainRow>
        >
    getDomainsList(
    );
    /**
    * Resend Domain Welcome Email.
    *
    * Resends the welcome email for the domain service. The email contains registration details and management instructions.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getDomainsWelcomeEmail(
            
            int id
            
    );
    /**
    * Get Domain Ordering Information.
    *
    * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
    */
    Response<
                DomainOrder
        >
    getNewDomain(
    );
    /**
    * Validate Domain Order.
    *
    * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
    */
    Response<
            String
        >
    patchDomains(
    );
    /**
    * Request Domain Renewal.
    *
    * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    postDomainRenewal(
            
            int id
            
    );
    /**
    * Request Domain Transfer.
    *
    * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    postDomainTransfer(
            
            int id
            
    );
    /**
    * Domain Order Search.
    *
    * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
    */
    Response<
            String
        >
    putDomains(
    );
    /**
    * Update Domain Contact Details.
    *
    * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    * \param domainContactDetails  *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateDomainContact(
            
            int id
            , 
            
            DomainContactDetails domainContactDetails
            
    );
    /**
    * Update Domain Order.
    *
    * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateDomainInfo(
            
            std::string id
            
    );
    /**
    * Replace Nameserver Set.
    *
    * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    * \param domainNameserverPutRequest  *Required*
    */
    Response<
                TextResponse
        >
    updateDomainNameservers(
            
            int id
            , 
            
            DomainNameserverPutRequest domainNameserverPutRequest
            
    );
    /**
    * Update Whois Privacy.
    *
    * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
    * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
    * \param domainWhoisPrivacyRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateDomainWhoisPrivacy(
            
            int id
            , 
            
            DomainWhoisPrivacyRequest domainWhoisPrivacyRequest
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_DomainsApi_H_ */