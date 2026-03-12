package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.CreateFilter;
import io.swagger.model.CreateFirewallRule;
import io.swagger.model.CreateGeoFirewallRule;
import io.swagger.model.DeleteFirewallRule;
import io.swagger.model.DeleteGeoFirewallRule;
import io.swagger.model.InlineResponse20012;
import io.swagger.model.InlineResponse20013;
import io.swagger.model.InlineResponse20014;
import io.swagger.model.InlineResponse20015;
import io.swagger.model.InlineResponse20016;
import io.swagger.model.InlineResponse20017;
import io.swagger.model.InlineResponse20018;
import io.swagger.model.InlineResponse201;
import io.swagger.model.InlineResponse2011;
import io.swagger.model.InlineResponse2012;
import io.swagger.model.InlineResponse400;
import io.swagger.model.InlineResponse4001;
import io.swagger.model.InlineResponse4002;
import io.swagger.model.InlineResponse4003;
import io.swagger.model.InlineResponse4004;
import io.swagger.model.InlineResponse4005;
import io.swagger.model.InlineResponse401;
import io.swagger.model.InlineResponse500;
import io.swagger.model.InlineResponse5001;
import io.swagger.model.InlineResponse5002;
import io.swagger.model.InlineResponse5003;
import io.swagger.model.InlineResponse5004;
import io.swagger.model.InlineResponse5005;
import io.swagger.model.ScrubIpFilterTypes;
import io.swagger.model.ScrubIpPlaceOrder;
import io.swagger.model.ScrubIpsLogRowSchema;
import io.swagger.model.ScrubIpsRowSchema;

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
public interface ScrubIpsApi  {

    /**
     * Cancel Scrub IP Service
     *
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/scrub_ips/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Scrub IP Service", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20013.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20013 cancelScrubIp(@PathParam("id") Integer id);

    /**
     * Create Traffic Filter
     *
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
     *
     */
    @POST
    @Path("/scrub_ips/{id}/create_filter")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Traffic Filter", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2011.class))),
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4004.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5004.class))) })
    public InlineResponse2011 createFilter(@Valid CreateFilter body, @PathParam("id") Integer id);

    /**
     * Create Geo Firewall Rule
     *
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     *
     */
    @POST
    @Path("/scrub_ips/{id}/create_geo_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Geo Firewall Rule", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Create firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse201.class))),
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4003.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5002.class))) })
    public InlineResponse201 createGeoRule(@Valid CreateGeoFirewallRule body, @PathParam("id") Integer id);

    /**
     * Create Firewall Rule
     *
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     *
     */
    @POST
    @Path("/scrub_ips/{id}/create_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Firewall Rule", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Create firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse201.class))),
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4001.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5002.class))) })
    public InlineResponse201 createRule(@Valid CreateFirewallRule body, @PathParam("id") Integer id);

    /**
     * Delete Traffic Filter
     *
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     *
     */
    @POST
    @Path("/scrub_ips/{id}/delete_filter")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Delete Traffic Filter", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Delete filter for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20017.class))),
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4005.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5005.class))) })
    public InlineResponse20017 deleteFilter(@Valid CreateFilter body, @PathParam("id") Integer id);

    /**
     * Disable Scrub Protection
     *
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     *
     */
    @GET
    @Path("/scrub_ips/{id}/disable")
    @Produces({ "application/json" })
    @Operation(summary = "Disable Scrub Protection", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20015.class))),
        @ApiResponse(responseCode = "400", description = "Bad request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse400.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5001.class))) })
    public InlineResponse20015 disableScrub(@PathParam("id") Integer id);

    /**
     * Enable Scrub Protection
     *
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     *
     */
    @GET
    @Path("/scrub_ips/{id}/enable")
    @Produces({ "application/json" })
    @Operation(summary = "Enable Scrub Protection", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20014.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse500.class))) })
    public InlineResponse20014 enableScrub(@PathParam("id") Integer id);

    /**
     * Get Scrub IP Ordering Information
     *
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     *
     */
    @GET
    @Path("/scrub_ips/order")
    @Produces({ "application/json" })
    @Operation(summary = "Get Scrub IP Ordering Information", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20018.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20018 getOrderDetail();

    /**
     * Get Scrub IP Details
     *
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     *
     */
    @GET
    @Path("/scrub_ips/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Scrub IP Details", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Scrub IP service details including firewall rules and filters.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20012.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20012 getScrubIpDetails(@PathParam("id") Integer id);

    /**
     * List Scrub Filter Types
     *
     * Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
     *
     */
    @GET
    @Path("/scrub_ips/filter_types")
    @Produces({ "application/json" })
    @Operation(summary = "List Scrub Filter Types", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Supported scrub filter types for building firewall rules.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ScrubIpFilterTypes.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ScrubIpFilterTypes getScrubIpFilterTypes();

    /**
     * Get ScrubIp Invoices
     *
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     *
     */
    @GET
    @Path("/scrub_ips/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get ScrubIp Invoices", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getScrubIpInvoices(@PathParam("id") Integer id);

    /**
     * Get Scrub IP Logs
     *
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     *
     */
    @GET
    @Path("/scrub_ips/{id}/logs")
    @Produces({ "application/json" })
    @Operation(summary = "Get Scrub IP Logs", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Scrub Ips logs", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = ScrubIpsLogRowSchema.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<ScrubIpsLogRowSchema> getScrubIpLogs(@PathParam("id") String id);

    /**
     * List Scrub IP Services
     *
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     *
     */
    @GET
    @Path("/scrub_ips")
    @Produces({ "application/json" })
    @Operation(summary = "List Scrub IP Services", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Scrub Ips list", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = ScrubIpsRowSchema.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public List<ScrubIpsRowSchema> getScrubIpsList();

    /**
     * Place Scrub IP Order
     *
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     *
     */
    @POST
    @Path("/scrub_ips/order")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Scrub IP Order", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2012.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2012 placeScrubOrder(@Valid ScrubIpPlaceOrder body);

    /**
     * Delete Geo Firewall Rule
     *
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     *
     */
    @POST
    @Path("/scrub_ips/{id}/delete_geo_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Delete Geo Firewall Rule", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Delete firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20016.class))),
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4002.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5003.class))) })
    public InlineResponse20016 scrubIpsDeleteGeoRule(@Valid DeleteGeoFirewallRule body, @PathParam("id") Integer id);

    /**
     * Delete Firewall Rule
     *
     * Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     *
     */
    @POST
    @Path("/scrub_ips/{id}/delete_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Delete Firewall Rule", tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Delete firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20016.class))),
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4002.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5003.class))) })
    public InlineResponse20016 scrubIpsDeleteRule(@Valid DeleteFirewallRule body, @PathParam("id") Integer id);
}
