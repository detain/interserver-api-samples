package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.Domain;
import io.swagger.model.DomainContactDetails;
import io.swagger.model.DomainDnssecRecords;
import io.swagger.model.DomainDnssecRequest;
import io.swagger.model.DomainLookupResponse;
import io.swagger.model.DomainNameserverGetResponse;
import io.swagger.model.DomainNameserverPostRequest;
import io.swagger.model.DomainNameserverPutRequest;
import io.swagger.model.DomainOrder;
import io.swagger.model.DomainRow;
import io.swagger.model.DomainSearchResponse;
import io.swagger.model.DomainWhoisPrivacyRequest;
import io.swagger.model.InlineResponse2002;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.MediaType;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/")
public interface DomainsApi  {

    /**
     * Place Domain Order
     *
     * Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
     *
     */
    @POST
    @Path("/domains/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place Domain Order", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServiceOrderPostResponse addDomain();

    /**
     * Add Domain DNSSEC Records
     *
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     *
     */
    @POST
    @Path("/domains/{id}/dnssec")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Domain DNSSEC Records", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addDomainDnssec(@Valid DomainDnssecRequest body, @PathParam("id") Integer id);

    /**
     * Add Domain DNSSEC Records
     *
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     *
     */
    @POST
    @Path("/domains/{id}/dnssec")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Domain DNSSEC Records", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addDomainDnssec(@Multipart(value = "algorithm")  List<Integer> algorithm, @Multipart(value = "digest_type")  List<Integer> digestType, @Multipart(value = "digest")  List<String> digest, @Multipart(value = "key_tag")  List<Integer> keyTag, @PathParam("id") Integer id);

    /**
     * Add Registered Nameserver
     *
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
     *
     */
    @POST
    @Path("/domains/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Registered Nameserver", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse addDomainNameserver(@Valid DomainNameserverPostRequest body, @PathParam("id") Integer id);

    /**
     * Add Registered Nameserver
     *
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
     *
     */
    @POST
    @Path("/domains/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Registered Nameserver", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse addDomainNameserver(@Multipart(value = "name")  String name, @Multipart(value = "ipAddress")  String ipAddress, @PathParam("id") Integer id);

    /**
     * Cancel Domain Order
     *
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     *
     */
    @DELETE
    @Path("/domains/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Domain Order", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Domains Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2002.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2002 cancelDomain(@PathParam("id") Integer id);

    /**
     * Remove Domain DNSSEC Records
     *
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     *
     */
    @DELETE
    @Path("/domains/{id}/dnssec")
    @Produces({ "application/json" })
    @Operation(summary = "Remove Domain DNSSEC Records", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse deleteDomainDnssec(@PathParam("id") Integer id, @QueryParam("action") @NotNull String action);

    /**
     * Delete Registered Nameserver
     *
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
     *
     */
    @DELETE
    @Path("/domains/{id}/nameservers")
    @Produces({ "application/json" })
    @Operation(summary = "Delete Registered Nameserver", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse deleteDomainNameserver(@PathParam("id") Integer id, @QueryParam("index") @NotNull Integer index);

    /**
     * Get Domain Contact Details
     *
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     *
     */
    @GET
    @Path("/domains/{id}/contact")
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Contact Details", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The registrant/admin contact details for the domain.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainContactDetails.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public DomainContactDetails getDomainContact(@PathParam("id") Integer id);

    /**
     * Get Domain DNSSEC Records
     *
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     *
     */
    @GET
    @Path("/domains/{id}/dnssec")
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain DNSSEC Records", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "DNSSEC records currently applied to the domain.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainDnssecRecords.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public DomainDnssecRecords getDomainDnssec(@PathParam("id") Integer id);

    /**
     * Get Domain Order
     *
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
     *
     */
    @GET
    @Path("/domains/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Order", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Domain Information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Domain.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Domain getDomainInfo(@PathParam("id") Integer id);

    /**
     * Get Domain Invoices
     *
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     *
     */
    @GET
    @Path("/domains/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Invoices", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getDomainInvoices(@PathParam("id") Integer id);

    /**
     * Lookup Domain Availability and Pricing
     *
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
     *
     */
    @GET
    @Path("/domains/lookup/{name}")
    @Produces({ "application/json" })
    @Operation(summary = "Lookup Domain Availability and Pricing", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Availability, pricing, and field metadata for the requested domain.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainLookupResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "422", description = "The domain input was invalid.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public DomainLookupResponse getDomainLookup(@PathParam("name") String name);

    /**
     * List Registered Nameservers
     *
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     *
     */
    @GET
    @Path("/domains/{id}/nameservers")
    @Produces({ "application/json" })
    @Operation(summary = "List Registered Nameservers", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Domain registered nameservers list response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainNameserverGetResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public DomainNameserverGetResponse getDomainNameservers(@PathParam("id") Integer id);

    /**
     * Get Domain Order Fields
     *
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
     *
     */
    @GET
    @Path("/domains/order/{domain}/{regType}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Order Fields", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Registration-type-specific form field definitions."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getDomainOrderFields(@PathParam("domain") String domain, @PathParam("regType") String regType);

    /**
     * Get Domain Order Search Results
     *
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     *
     */
    @GET
    @Path("/domains/order/{domain}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Order Search Results", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Domain availability and pricing information."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getDomainOrderSearchResults(@PathParam("domain") String domain);

    /**
     * Start Domain Renewal Flow
     *
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     *
     */
    @GET
    @Path("/domains/{id}/renew")
    @Produces({ "application/json" })
    @Operation(summary = "Start Domain Renewal Flow", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getDomainRenewal(@PathParam("id") Integer id);

    /**
     * Search Domain Suggestions
     *
     * Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
     *
     */
    @GET
    @Path("/domains/search/{name}")
    @Produces({ "application/json" })
    @Operation(summary = "Search Domain Suggestions", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Suggested and lookup results for the supplied search term.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainSearchResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "404", description = "No search suggestions or registrar response available.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))) })
    public DomainSearchResponse getDomainSearch(@PathParam("name") String name);

    /**
     * Start Domain Transfer Flow
     *
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
     *
     */
    @GET
    @Path("/domains/{id}/transfer")
    @Produces({ "application/json" })
    @Operation(summary = "Start Domain Transfer Flow", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getDomainTransfer(@PathParam("id") Integer id);

    /**
     * Get Whois Privacy Status
     *
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     *
     */
    @GET
    @Path("/domains/{id}/whois")
    @Produces({ "application/json" })
    @Operation(summary = "Get Whois Privacy Status", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getDomainWhoisPrivacy(@PathParam("id") Integer id);

    /**
     * List Domain Orders
     *
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
     *
     */
    @GET
    @Path("/domains")
    @Produces({ "application/json" })
    @Operation(summary = "List Domain Orders", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Domains` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DomainRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<DomainRow> getDomainsList();

    /**
     * Resend Domain Welcome Email
     *
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     *
     */
    @GET
    @Path("/domains/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend Domain Welcome Email", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getDomainsWelcomeEmail(@PathParam("id") Integer id);

    /**
     * Get Domain Ordering Information
     *
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
     *
     */
    @GET
    @Path("/domains/order")
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Ordering Information", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Domain registration order information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public DomainOrder getNewDomain();

    /**
     * Validate Domain Order
     *
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
     *
     */
    @PATCH
    @Path("/domains/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate Domain Order", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Domain order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void patchDomains();

    /**
     * Request Domain Renewal
     *
     * Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
     *
     */
    @POST
    @Path("/domains/{id}/renew")
    @Produces({ "application/json" })
    @Operation(summary = "Request Domain Renewal", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postDomainRenewal(@PathParam("id") Integer id);

    /**
     * Request Domain Transfer
     *
     * Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
     *
     */
    @POST
    @Path("/domains/{id}/transfer")
    @Produces({ "application/json" })
    @Operation(summary = "Request Domain Transfer", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postDomainTransfer(@PathParam("id") Integer id);

    /**
     * Domain Order Search
     *
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     *
     */
    @PUT
    @Path("/domains/order")
    @Produces({ "application/json" })
    @Operation(summary = "Domain Order Search", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate Domain Order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void putDomains();

    /**
     * Update Domain Contact Details
     *
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     *
     */
    @POST
    @Path("/domains/{id}/contact")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Domain Contact Details", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateDomainContact(@Valid DomainContactDetails body, @PathParam("id") Integer id);

    /**
     * Update Domain Contact Details
     *
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     *
     */
    @POST
    @Path("/domains/{id}/contact")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Domain Contact Details", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateDomainContact(@Multipart(value = "status")  String status, @Multipart(value = "state")  String state, @Multipart(value = "org_name")  String orgName, @Multipart(value = "country")  String country, @Multipart(value = "postal_code")  String postalCode, @Multipart(value = "email")  String email, @Multipart(value = "fax")  String fax, @Multipart(value = "address2")  String address2, @Multipart(value = "address3")  String address3, @Multipart(value = "address1")  String address1, @Multipart(value = "city")  String city, @Multipart(value = "phone")  String phone, @Multipart(value = "first_name")  String firstName, @Multipart(value = "last_name")  String lastName, @PathParam("id") Integer id);

    /**
     * Update Domain Order
     *
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     *
     */
    @POST
    @Path("/domains/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Domain Order", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateDomainInfo(@PathParam("id") String id);

    /**
     * Replace Nameserver Set
     *
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     *
     */
    @PUT
    @Path("/domains/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Replace Nameserver Set", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateDomainNameservers(@Valid DomainNameserverPutRequest body, @PathParam("id") Integer id);

    /**
     * Replace Nameserver Set
     *
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     *
     */
    @PUT
    @Path("/domains/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Replace Nameserver Set", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateDomainNameservers(@Multipart(value = "nameserver")  List<String> nameserver, @PathParam("id") Integer id);

    /**
     * Update Whois Privacy
     *
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
     *
     */
    @POST
    @Path("/domains/{id}/whois")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Whois Privacy", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateDomainWhoisPrivacy(@Valid DomainWhoisPrivacyRequest body, @PathParam("id") Integer id);

    /**
     * Update Whois Privacy
     *
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
     *
     */
    @POST
    @Path("/domains/{id}/whois")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Whois Privacy", tags={ "Domains" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateDomainWhoisPrivacy(@Multipart(value = "func")  String func, @Multipart(value = "csrf_token")  String csrfToken, @Multipart(value = "domain_firstname")  String domainFirstname, @Multipart(value = "domain_lastname")  String domainLastname, @Multipart(value = "domain_email")  String domainEmail, @Multipart(value = "domain_address")  String domainAddress, @Multipart(value = "domain_address2")  String domainAddress2, @Multipart(value = "domain_address3")  String domainAddress3, @Multipart(value = "domain_city")  String domainCity, @Multipart(value = "domain_state")  String domainState, @Multipart(value = "domain_zip")  String domainZip, @Multipart(value = "domain_country")  String domainCountry, @Multipart(value = "domain_phone")  String domainPhone, @Multipart(value = "domain_fax")  String domainFax, @Multipart(value = "domain_company")  String domainCompany, @Multipart(value = "domain_extra")  String domainExtra, @PathParam("id") Integer id);
}
