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

import javax.ws.rs.*;
import javax.ws.rs.core.Response;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

import java.util.Map;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

@Path("/domains")


public class DomainsApi {

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
    public Response addDomain() {
        return Response.ok().entity("magic!").build();
    }
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
    public Response addDomainDnssec(@Valid DomainDnssecRequest body, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response addDomainDnssec(@FormParam(value = "algorithm")  List<Integer> algorithm,@FormParam(value = "digest_type")  List<Integer> digestType,@FormParam(value = "digest")  List<String> digest,@FormParam(value = "key_tag")  List<Integer> keyTag, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response addDomainNameserver(@Valid DomainNameserverPostRequest body, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response addDomainNameserver(@FormParam(value = "name")  String name,@FormParam(value = "ipAddress")  String ipAddress, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response cancelDomain( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response deleteDomainDnssec( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
, @NotNull  @QueryParam("action") 

 @Parameter(description = "Set to &#x60;delete&#x60; to remove all DNSSEC records.")  String action
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response deleteDomainNameserver( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
, @NotNull  @QueryParam("index") 

 @Parameter(description = "The index of the registered nameserver from the registered nameservers list to delete.  ")  Integer index
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainContact( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainDnssec( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainInfo( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainInvoices( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainLookup( @PathParam("name")

 @Parameter(description = "The full domain name to look up (for example &#x60;example.com&#x60;).") String name
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainNameservers( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainOrderFields( @PathParam("domain")

 @Parameter(description = "The fully qualified domain name (e.g. &#x60;example.com&#x60;).") String domain
, @PathParam("regType")

 @Parameter(description = "The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.") String regType
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainOrderSearchResults( @PathParam("domain")

 @Parameter(description = "The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).") String domain
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainRenewal( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainSearch( @PathParam("name")

 @Parameter(description = "The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).") String name
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainTransfer( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainWhoisPrivacy( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainsList() {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getDomainsWelcomeEmail( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response getNewDomain() {
        return Response.ok().entity("magic!").build();
    }
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
    public Response patchDomains() {
        return Response.ok().entity("magic!").build();
    }
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
    public Response postDomainRenewal( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response postDomainTransfer( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response putDomains() {
        return Response.ok().entity("magic!").build();
    }
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
    public Response updateDomainContact(@Valid DomainContactDetails body, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response updateDomainContact(@FormParam(value = "status")  String status,@FormParam(value = "state")  String state,@FormParam(value = "org_name")  String orgName,@FormParam(value = "country")  String country,@FormParam(value = "postal_code")  String postalCode,@FormParam(value = "email")  String email,@FormParam(value = "fax")  String fax,@FormParam(value = "address2")  String address2,@FormParam(value = "address3")  String address3,@FormParam(value = "address1")  String address1,@FormParam(value = "city")  String city,@FormParam(value = "phone")  String phone,@FormParam(value = "first_name")  String firstName,@FormParam(value = "last_name")  String lastName, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response updateDomainInfo( @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") String id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response updateDomainNameservers(@Valid DomainNameserverPutRequest body, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response updateDomainNameservers(@FormParam(value = "nameserver")  List<String> nameserver, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response updateDomainWhoisPrivacy(@Valid DomainWhoisPrivacyRequest body, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }
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
    public Response updateDomainWhoisPrivacy(@FormParam(value = "func")  String func,@FormParam(value = "csrf_token")  String csrfToken,@FormParam(value = "domain_firstname")  String domainFirstname,@FormParam(value = "domain_lastname")  String domainLastname,@FormParam(value = "domain_email")  String domainEmail,@FormParam(value = "domain_address")  String domainAddress,@FormParam(value = "domain_address2")  String domainAddress2,@FormParam(value = "domain_address3")  String domainAddress3,@FormParam(value = "domain_city")  String domainCity,@FormParam(value = "domain_state")  String domainState,@FormParam(value = "domain_zip")  String domainZip,@FormParam(value = "domain_country")  String domainCountry,@FormParam(value = "domain_phone")  String domainPhone,@FormParam(value = "domain_fax")  String domainFax,@FormParam(value = "domain_company")  String domainCompany,@FormParam(value = "domain_extra")  String domainExtra, @PathParam("id")

 @Parameter(description = "The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.") Integer id
) {
        return Response.ok().entity("magic!").build();
    }}
