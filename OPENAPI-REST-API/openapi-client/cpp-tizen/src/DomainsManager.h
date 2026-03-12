#ifndef _DomainsManager_H_
#define _DomainsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
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
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Domains Domains
 * \ingroup Operations
 *  @{
 */
class DomainsManager {
public:
	DomainsManager();
	virtual ~DomainsManager();

/*! \brief Place Domain Order. *Synchronous*
 *
 * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDomainSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Place Domain Order. *Asynchronous*
 *
 * Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDomainAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Add Domain DNSSEC Records. *Synchronous*
 *
 * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainDnssecRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDomainDnssecSync(char * accessToken,
	int id, std::shared_ptr<DomainDnssecRequest> domainDnssecRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Add Domain DNSSEC Records. *Asynchronous*
 *
 * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainDnssecRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDomainDnssecAsync(char * accessToken,
	int id, std::shared_ptr<DomainDnssecRequest> domainDnssecRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Add Registered Nameserver. *Synchronous*
 *
 * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainNameserverPostRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDomainNameserverSync(char * accessToken,
	int id, std::shared_ptr<DomainNameserverPostRequest> domainNameserverPostRequest, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Add Registered Nameserver. *Asynchronous*
 *
 * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainNameserverPostRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addDomainNameserverAsync(char * accessToken,
	int id, std::shared_ptr<DomainNameserverPostRequest> domainNameserverPostRequest, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Cancel Domain Order. *Synchronous*
 *
 * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool cancelDomainSync(char * accessToken,
	int id, 
	void(* handler)(CancelDomain_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel Domain Order. *Asynchronous*
 *
 * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool cancelDomainAsync(char * accessToken,
	int id, 
	void(* handler)(CancelDomain_200_response, Error, void* )
	, void* userData);


/*! \brief Remove Domain DNSSEC Records. *Synchronous*
 *
 * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param action Set to `delete` to remove all DNSSEC records. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDomainDnssecSync(char * accessToken,
	int id, std::string action, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Remove Domain DNSSEC Records. *Asynchronous*
 *
 * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param action Set to `delete` to remove all DNSSEC records. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDomainDnssecAsync(char * accessToken,
	int id, std::string action, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Delete Registered Nameserver. *Synchronous*
 *
 * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param index The index of the registered nameserver from the registered nameservers list to delete.   *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDomainNameserverSync(char * accessToken,
	int id, int index, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Delete Registered Nameserver. *Asynchronous*
 *
 * Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param index The index of the registered nameserver from the registered nameservers list to delete.   *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteDomainNameserverAsync(char * accessToken,
	int id, int index, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Get Domain Contact Details. *Synchronous*
 *
 * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainContactSync(char * accessToken,
	int id, 
	void(* handler)(DomainContactDetails, Error, void* )
	, void* userData);

/*! \brief Get Domain Contact Details. *Asynchronous*
 *
 * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainContactAsync(char * accessToken,
	int id, 
	void(* handler)(DomainContactDetails, Error, void* )
	, void* userData);


/*! \brief Get Domain DNSSEC Records. *Synchronous*
 *
 * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainDnssecSync(char * accessToken,
	int id, 
	void(* handler)(DomainDnssecRecords, Error, void* )
	, void* userData);

/*! \brief Get Domain DNSSEC Records. *Asynchronous*
 *
 * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainDnssecAsync(char * accessToken,
	int id, 
	void(* handler)(DomainDnssecRecords, Error, void* )
	, void* userData);


/*! \brief Get Domain Order. *Synchronous*
 *
 * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainInfoSync(char * accessToken,
	int id, 
	void(* handler)(Domain, Error, void* )
	, void* userData);

/*! \brief Get Domain Order. *Asynchronous*
 *
 * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainInfoAsync(char * accessToken,
	int id, 
	void(* handler)(Domain, Error, void* )
	, void* userData);


/*! \brief Get Domain Invoices. *Synchronous*
 *
 * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get Domain Invoices. *Asynchronous*
 *
 * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief Lookup Domain Availability and Pricing. *Synchronous*
 *
 * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
 * \param name The full domain name to look up (for example `example.com`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainLookupSync(char * accessToken,
	std::string name, 
	void(* handler)(DomainLookupResponse, Error, void* )
	, void* userData);

/*! \brief Lookup Domain Availability and Pricing. *Asynchronous*
 *
 * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
 * \param name The full domain name to look up (for example `example.com`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainLookupAsync(char * accessToken,
	std::string name, 
	void(* handler)(DomainLookupResponse, Error, void* )
	, void* userData);


/*! \brief List Registered Nameservers. *Synchronous*
 *
 * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainNameserversSync(char * accessToken,
	int id, 
	void(* handler)(DomainNameserverGetResponse, Error, void* )
	, void* userData);

/*! \brief List Registered Nameservers. *Asynchronous*
 *
 * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainNameserversAsync(char * accessToken,
	int id, 
	void(* handler)(DomainNameserverGetResponse, Error, void* )
	, void* userData);


/*! \brief Get Domain Order Fields. *Synchronous*
 *
 * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
 * \param domain The fully qualified domain name (e.g. `example.com`). *Required*
 * \param regType The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainOrderFieldsSync(char * accessToken,
	std::string domain, std::string regType, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get Domain Order Fields. *Asynchronous*
 *
 * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
 * \param domain The fully qualified domain name (e.g. `example.com`). *Required*
 * \param regType The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainOrderFieldsAsync(char * accessToken,
	std::string domain, std::string regType, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Domain Order Search Results. *Synchronous*
 *
 * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
 * \param domain The fully qualified domain name to look up (e.g. `example.com`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainOrderSearchResultsSync(char * accessToken,
	std::string domain, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get Domain Order Search Results. *Asynchronous*
 *
 * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
 * \param domain The fully qualified domain name to look up (e.g. `example.com`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainOrderSearchResultsAsync(char * accessToken,
	std::string domain, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Start Domain Renewal Flow. *Synchronous*
 *
 * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainRenewalSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Start Domain Renewal Flow. *Asynchronous*
 *
 * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainRenewalAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Search Domain Suggestions. *Synchronous*
 *
 * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
 * \param name The base domain name to search (for example `example` or `example.com`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainSearchSync(char * accessToken,
	std::string name, 
	void(* handler)(DomainSearchResponse, Error, void* )
	, void* userData);

/*! \brief Search Domain Suggestions. *Asynchronous*
 *
 * Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
 * \param name The base domain name to search (for example `example` or `example.com`). *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainSearchAsync(char * accessToken,
	std::string name, 
	void(* handler)(DomainSearchResponse, Error, void* )
	, void* userData);


/*! \brief Start Domain Transfer Flow. *Synchronous*
 *
 * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainTransferSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Start Domain Transfer Flow. *Asynchronous*
 *
 * Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainTransferAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get Whois Privacy Status. *Synchronous*
 *
 * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainWhoisPrivacySync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Get Whois Privacy Status. *Asynchronous*
 *
 * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainWhoisPrivacyAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief List Domain Orders. *Synchronous*
 *
 * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainsListSync(char * accessToken,
	
	void(* handler)(std::list<DomainRow>, Error, void* )
	, void* userData);

/*! \brief List Domain Orders. *Asynchronous*
 *
 * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainsListAsync(char * accessToken,
	
	void(* handler)(std::list<DomainRow>, Error, void* )
	, void* userData);


/*! \brief Resend Domain Welcome Email. *Synchronous*
 *
 * Resends the welcome email for the domain service. The email contains registration details and management instructions.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainsWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend Domain Welcome Email. *Asynchronous*
 *
 * Resends the welcome email for the domain service. The email contains registration details and management instructions.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDomainsWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get Domain Ordering Information. *Synchronous*
 *
 * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewDomainSync(char * accessToken,
	
	void(* handler)(DomainOrder, Error, void* )
	, void* userData);

/*! \brief Get Domain Ordering Information. *Asynchronous*
 *
 * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewDomainAsync(char * accessToken,
	
	void(* handler)(DomainOrder, Error, void* )
	, void* userData);


/*! \brief Validate Domain Order. *Synchronous*
 *
 * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool patchDomainsSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate Domain Order. *Asynchronous*
 *
 * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool patchDomainsAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Request Domain Renewal. *Synchronous*
 *
 * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postDomainRenewalSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Request Domain Renewal. *Asynchronous*
 *
 * Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postDomainRenewalAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Request Domain Transfer. *Synchronous*
 *
 * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postDomainTransferSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Request Domain Transfer. *Asynchronous*
 *
 * Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postDomainTransferAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Domain Order Search. *Synchronous*
 *
 * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putDomainsSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Domain Order Search. *Asynchronous*
 *
 * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putDomainsAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update Domain Contact Details. *Synchronous*
 *
 * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainContactDetails  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainContactSync(char * accessToken,
	int id, std::shared_ptr<DomainContactDetails> domainContactDetails, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Domain Contact Details. *Asynchronous*
 *
 * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainContactDetails  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainContactAsync(char * accessToken,
	int id, std::shared_ptr<DomainContactDetails> domainContactDetails, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Update Domain Order. *Synchronous*
 *
 * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainInfoSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update Domain Order. *Asynchronous*
 *
 * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainInfoAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Replace Nameserver Set. *Synchronous*
 *
 * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainNameserverPutRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainNameserversSync(char * accessToken,
	int id, std::shared_ptr<DomainNameserverPutRequest> domainNameserverPutRequest, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Replace Nameserver Set. *Asynchronous*
 *
 * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainNameserverPutRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainNameserversAsync(char * accessToken,
	int id, std::shared_ptr<DomainNameserverPutRequest> domainNameserverPutRequest, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Update Whois Privacy. *Synchronous*
 *
 * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainWhoisPrivacyRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainWhoisPrivacySync(char * accessToken,
	int id, std::shared_ptr<DomainWhoisPrivacyRequest> domainWhoisPrivacyRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Whois Privacy. *Asynchronous*
 *
 * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
 * \param id The domain service ID. Use `domain_id` from `GET /domains`. *Required*
 * \param domainWhoisPrivacyRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateDomainWhoisPrivacyAsync(char * accessToken,
	int id, std::shared_ptr<DomainWhoisPrivacyRequest> domainWhoisPrivacyRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* DomainsManager_H_ */
