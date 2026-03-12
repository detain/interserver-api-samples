package org.openapitools.api;

import org.openapitools.model.CancelDomain200Response;
import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.Domain;
import org.openapitools.model.DomainContactDetails;
import org.openapitools.model.DomainDnssecRecords;
import org.openapitools.model.DomainDnssecRequest;
import org.openapitools.model.DomainLookupResponse;
import org.openapitools.model.DomainNameserverGetResponse;
import org.openapitools.model.DomainNameserverPostRequest;
import org.openapitools.model.DomainNameserverPutRequest;
import org.openapitools.model.DomainOrder;
import org.openapitools.model.DomainRow;
import org.openapitools.model.DomainSearchResponse;
import org.openapitools.model.DomainWhoisPrivacyRequest;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;

import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiResponses;
import io.swagger.annotations.ApiResponse;
import io.swagger.jaxrs.PATCH;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/domains")
@Api(value = "/", description = "")
public interface DomainsApi  {

    /**
     * Place Domain Order
     *
     * Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
     *
     */
    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Place Domain Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void addDomain();

    /**
     * Add Domain DNSSEC Records
     *
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     *
     */
    @POST
    @Path("/{id}/dnssec")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Add Domain DNSSEC Records", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse addDomainDnssec(@PathParam("id") Integer id, DomainDnssecRequest domainDnssecRequest);

    /**
     * Add Registered Nameserver
     *
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
     *
     */
    @POST
    @Path("/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Add Registered Nameserver", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse addDomainNameserver(@PathParam("id") Integer id, DomainNameserverPostRequest domainNameserverPostRequest);

    /**
     * Cancel Domain Order
     *
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel Domain Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Domains Cancel", response = CancelDomain200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public CancelDomain200Response cancelDomain(@PathParam("id") Integer id);

    /**
     * Remove Domain DNSSEC Records
     *
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     *
     */
    @DELETE
    @Path("/{id}/dnssec")
    @Produces({ "application/json" })
    @ApiOperation(value = "Remove Domain DNSSEC Records", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteDomainDnssec(@PathParam("id") Integer id, @QueryParam("action") String action);

    /**
     * Delete Registered Nameserver
     *
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
     *
     */
    @DELETE
    @Path("/{id}/nameservers")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Registered Nameserver", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse deleteDomainNameserver(@PathParam("id") Integer id, @QueryParam("index") Integer index);

    /**
     * Get Domain Contact Details
     *
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     *
     */
    @GET
    @Path("/{id}/contact")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Domain Contact Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The registrant/admin contact details for the domain.", response = DomainContactDetails.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public DomainContactDetails getDomainContact(@PathParam("id") Integer id);

    /**
     * Get Domain DNSSEC Records
     *
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     *
     */
    @GET
    @Path("/{id}/dnssec")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Domain DNSSEC Records", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "DNSSEC records currently applied to the domain.", response = DomainDnssecRecords.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public DomainDnssecRecords getDomainDnssec(@PathParam("id") Integer id);

    /**
     * Get Domain Order
     *
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Domain Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Domain Information.", response = Domain.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Domain getDomainInfo(@PathParam("id") Integer id);

    /**
     * Get Domain Invoices
     *
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Domain Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getDomainInvoices(@PathParam("id") Integer id);

    /**
     * Lookup Domain Availability and Pricing
     *
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
     *
     */
    @GET
    @Path("/lookup/{name}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Lookup Domain Availability and Pricing", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Availability, pricing, and field metadata for the requested domain.", response = DomainLookupResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 422, message = "The domain input was invalid.", response = TextResponse.class) })
    public DomainLookupResponse getDomainLookup(@PathParam("name") String name);

    /**
     * List Registered Nameservers
     *
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     *
     */
    @GET
    @Path("/{id}/nameservers")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Registered Nameservers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Domain registered nameservers list response", response = DomainNameserverGetResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public DomainNameserverGetResponse getDomainNameservers(@PathParam("id") Integer id);

    /**
     * Get Domain Order Fields
     *
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
     *
     */
    @GET
    @Path("/order/{domain}/{regType}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Domain Order Fields", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Registration-type-specific form field definitions."),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getDomainOrderFields(@PathParam("domain") String domain, @PathParam("regType") String regType);

    /**
     * Get Domain Order Search Results
     *
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     *
     */
    @GET
    @Path("/order/{domain}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Domain Order Search Results", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Domain availability and pricing information."),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getDomainOrderSearchResults(@PathParam("domain") String domain);

    /**
     * Start Domain Renewal Flow
     *
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     *
     */
    @GET
    @Path("/{id}/renew")
    @Produces({ "application/json" })
    @ApiOperation(value = "Start Domain Renewal Flow", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getDomainRenewal(@PathParam("id") Integer id);

    /**
     * Search Domain Suggestions
     *
     * Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
     *
     */
    @GET
    @Path("/search/{name}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Search Domain Suggestions", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Suggested and lookup results for the supplied search term.", response = DomainSearchResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "No search suggestions or registrar response available.", response = TextResponse.class) })
    public DomainSearchResponse getDomainSearch(@PathParam("name") String name);

    /**
     * Start Domain Transfer Flow
     *
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
     *
     */
    @GET
    @Path("/{id}/transfer")
    @Produces({ "application/json" })
    @ApiOperation(value = "Start Domain Transfer Flow", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getDomainTransfer(@PathParam("id") Integer id);

    /**
     * Get Whois Privacy Status
     *
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     *
     */
    @GET
    @Path("/{id}/whois")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Whois Privacy Status", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getDomainWhoisPrivacy(@PathParam("id") Integer id);

    /**
     * List Domain Orders
     *
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List Domain Orders", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `Domains` services on your account.", response = DomainRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<DomainRow> getDomainsList();

    /**
     * Resend Domain Welcome Email
     *
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend Domain Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getDomainsWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Domain Ordering Information
     *
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Domain Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Domain registration order information.", response = DomainOrder.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public DomainOrder getNewDomain();

    /**
     * Validate Domain Order
     *
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
     *
     */
    @PATCH
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate Domain Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate Domain order response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void patchDomains();

    /**
     * Request Domain Renewal
     *
     * Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
     *
     */
    @POST
    @Path("/{id}/renew")
    @Produces({ "application/json" })
    @ApiOperation(value = "Request Domain Renewal", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse postDomainRenewal(@PathParam("id") Integer id);

    /**
     * Request Domain Transfer
     *
     * Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
     *
     */
    @POST
    @Path("/{id}/transfer")
    @Produces({ "application/json" })
    @ApiOperation(value = "Request Domain Transfer", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse postDomainTransfer(@PathParam("id") Integer id);

    /**
     * Domain Order Search
     *
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     *
     */
    @PUT
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Domain Order Search", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate Domain Order response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void putDomains();

    /**
     * Update Domain Contact Details
     *
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     *
     */
    @POST
    @Path("/{id}/contact")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Domain Contact Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateDomainContact(@PathParam("id") Integer id, DomainContactDetails domainContactDetails);

    /**
     * Update Domain Order
     *
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Domain Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void updateDomainInfo(@PathParam("id") String id);

    /**
     * Replace Nameserver Set
     *
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     *
     */
    @PUT
    @Path("/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Replace Nameserver Set", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse updateDomainNameservers(@PathParam("id") Integer id, DomainNameserverPutRequest domainNameserverPutRequest);

    /**
     * Update Whois Privacy
     *
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
     *
     */
    @POST
    @Path("/{id}/whois")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Whois Privacy", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateDomainWhoisPrivacy(@PathParam("id") Integer id, DomainWhoisPrivacyRequest domainWhoisPrivacyRequest);
}
