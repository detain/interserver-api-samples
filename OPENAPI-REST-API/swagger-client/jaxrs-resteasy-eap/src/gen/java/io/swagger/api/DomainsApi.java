package io.swagger.api;

import io.swagger.model.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

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

import java.util.List;
import java.util.Map;

import java.io.InputStream;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;
@Path("/domains")



public interface DomainsApi  {
   
    @POST
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Place Domain Order", description = "Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDomain(@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/dnssec")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Domain DNSSEC Records", description = "Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDomainDnssec(@Parameter(description = "" ,required=true) DomainDnssecRequest body, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/dnssec")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Domain DNSSEC Records", description = "Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDomainDnssec(@Parameter(description = "", required=true)@FormParam("algorithm")  List<Integer> algorithm,@Parameter(description = "", required=true)@FormParam("digest_type")  List<Integer> digestType,@Parameter(description = "", required=true)@FormParam("digest")  List<String> digest,@Parameter(description = "", required=true)@FormParam("key_tag")  List<Integer> keyTag, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Registered Nameserver", description = "Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDomainNameserver(@Parameter(description = "" ,required=true) DomainNameserverPostRequest body, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Add Registered Nameserver", description = "Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response addDomainNameserver(@Parameter(description = "", required=true)@FormParam("name")  String name,@Parameter(description = "", required=true)@FormParam("ipAddress")  String ipAddress, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Domain Order", description = "Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Domains Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2002.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response cancelDomain( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @DELETE
    @Path("/{id}/dnssec")
    
    @Produces({ "application/json" })
    @Operation(summary = "Remove Domain DNSSEC Records", description = "Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response deleteDomainDnssec( @PathParam("id") Integer id, @NotNull @QueryParam("action") String action,@Context SecurityContext securityContext);

    @DELETE
    @Path("/{id}/nameservers")
    
    @Produces({ "application/json" })
    @Operation(summary = "Delete Registered Nameserver", description = "Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response deleteDomainNameserver( @PathParam("id") Integer id, @NotNull @QueryParam("index") Integer index,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/contact")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Contact Details", description = "Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "The registrant/admin contact details for the domain.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainContactDetails.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainContact( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/dnssec")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain DNSSEC Records", description = "Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "DNSSEC records currently applied to the domain.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainDnssecRecords.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainDnssec( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Order", description = "Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Domain Information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Domain.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainInfo( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Invoices", description = "Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainInvoices( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/lookup/{name}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Lookup Domain Availability and Pricing", description = "Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Availability, pricing, and field metadata for the requested domain.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainLookupResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
                @ApiResponse(responseCode = "422", description = "The domain input was invalid.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class)))
         })
    Response getDomainLookup( @PathParam("name") String name,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/nameservers")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Registered Nameservers", description = "Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Domain registered nameservers list response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainNameserverGetResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainNameservers( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/order/{domain}/{regType}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Order Fields", description = "Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Registration-type-specific form field definitions."),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainOrderFields( @PathParam("domain") String domain, @PathParam("regType") String regType,@Context SecurityContext securityContext);

    @GET
    @Path("/order/{domain}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Order Search Results", description = "Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Domain availability and pricing information."),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainOrderSearchResults( @PathParam("domain") String domain,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/renew")
    
    @Produces({ "application/json" })
    @Operation(summary = "Start Domain Renewal Flow", description = "Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainRenewal( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/search/{name}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Search Domain Suggestions", description = "Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Suggested and lookup results for the supplied search term.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainSearchResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
                @ApiResponse(responseCode = "404", description = "No search suggestions or registrar response available.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class)))
         })
    Response getDomainSearch( @PathParam("name") String name,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/transfer")
    
    @Produces({ "application/json" })
    @Operation(summary = "Start Domain Transfer Flow", description = "Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainTransfer( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/whois")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Whois Privacy Status", description = "Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainWhoisPrivacy( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Domain Orders", description = "Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "The listing of `Domains` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = DomainRow.class)))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainsList(@Context SecurityContext securityContext);

    @GET
    @Path("/{id}/welcome_email")
    
    @Produces({ "application/json" })
    @Operation(summary = "Resend Domain Welcome Email", description = "Resends the welcome email for the domain service. The email contains registration details and management instructions.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getDomainsWelcomeEmail( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Domain Ordering Information", description = "Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Domain registration order information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = DomainOrder.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response getNewDomain(@Context SecurityContext securityContext);

    @PATCH
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Validate Domain Order", description = "Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Validate Domain order response"),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response patchDomains(@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/renew")
    
    @Produces({ "application/json" })
    @Operation(summary = "Request Domain Renewal", description = "Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response postDomainRenewal( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/transfer")
    
    @Produces({ "application/json" })
    @Operation(summary = "Request Domain Transfer", description = "Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response postDomainTransfer( @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @PUT
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Domain Order Search", description = "Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Validate Domain Order response"),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response putDomains(@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/contact")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Domain Contact Details", description = "Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDomainContact(@Parameter(description = "" ,required=true) DomainContactDetails body, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/contact")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Domain Contact Details", description = "Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDomainContact(@Parameter(description = "", required=true)@FormParam("status")  String status,@Parameter(description = "", required=true)@FormParam("state")  String state,@Parameter(description = "", required=true)@FormParam("org_name")  String orgName,@Parameter(description = "", required=true)@FormParam("country")  String country,@Parameter(description = "", required=true)@FormParam("postal_code")  String postalCode,@Parameter(description = "", required=true)@FormParam("email")  String email,@Parameter(description = "", required=true)@FormParam("fax")  String fax,@Parameter(description = "", required=true)@FormParam("address2")  String address2,@Parameter(description = "", required=true)@FormParam("address3")  String address3,@Parameter(description = "", required=true)@FormParam("address1")  String address1,@Parameter(description = "", required=true)@FormParam("city")  String city,@Parameter(description = "", required=true)@FormParam("phone")  String phone,@Parameter(description = "", required=true)@FormParam("first_name")  String firstName,@Parameter(description = "", required=true)@FormParam("last_name")  String lastName, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Domain Order", description = "Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDomainInfo( @PathParam("id") String id,@Context SecurityContext securityContext);

    @PUT
    @Path("/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Replace Nameserver Set", description = "Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDomainNameservers(@Parameter(description = "" ,required=true) DomainNameserverPutRequest body, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @PUT
    @Path("/{id}/nameservers")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Replace Nameserver Set", description = "Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDomainNameservers(@Parameter(description = "", required=true)@FormParam("nameserver")  List<String> nameserver, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/whois")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Whois Privacy", description = "Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDomainWhoisPrivacy(@Parameter(description = "" ,required=true) DomainWhoisPrivacyRequest body, @PathParam("id") Integer id,@Context SecurityContext securityContext);

    @POST
    @Path("/{id}/whois")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Whois Privacy", description = "Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Domains" })
    @ApiResponses(value = {
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
                @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
         })
    Response updateDomainWhoisPrivacy(@Parameter(description = "", required=true)@FormParam("func")  String func,@Parameter(description = "", required=true)@FormParam("csrf_token")  String csrfToken,@Parameter(description = "", required=true)@FormParam("domain_firstname")  String domainFirstname,@Parameter(description = "", required=true)@FormParam("domain_lastname")  String domainLastname,@Parameter(description = "", required=true)@FormParam("domain_email")  String domainEmail,@Parameter(description = "", required=true)@FormParam("domain_address")  String domainAddress,@Parameter(description = "", required=true)@FormParam("domain_address2")  String domainAddress2,@Parameter(description = "", required=true)@FormParam("domain_address3")  String domainAddress3,@Parameter(description = "", required=true)@FormParam("domain_city")  String domainCity,@Parameter(description = "", required=true)@FormParam("domain_state")  String domainState,@Parameter(description = "", required=true)@FormParam("domain_zip")  String domainZip,@Parameter(description = "", required=true)@FormParam("domain_country")  String domainCountry,@Parameter(description = "", required=true)@FormParam("domain_phone")  String domainPhone,@Parameter(description = "", required=true)@FormParam("domain_fax")  String domainFax,@Parameter(description = "", required=true)@FormParam("domain_company")  String domainCompany,@Parameter(description = "", required=true)@FormParam("domain_extra")  String domainExtra, @PathParam("id") Integer id,@Context SecurityContext securityContext);

}
