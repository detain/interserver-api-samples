package org.openapitools.api;

import org.openapitools.model.CancelScrubIp200Response;
import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.CreateFilter;
import org.openapitools.model.CreateFilter201Response;
import org.openapitools.model.CreateFilter400Response;
import org.openapitools.model.CreateFilter500Response;
import org.openapitools.model.CreateFirewallRule;
import org.openapitools.model.CreateGeoFirewallRule;
import org.openapitools.model.CreateGeoRule400Response;
import org.openapitools.model.CreateRule201Response;
import org.openapitools.model.CreateRule400Response;
import org.openapitools.model.CreateRule500Response;
import org.openapitools.model.DeleteFilter200Response;
import org.openapitools.model.DeleteFilter400Response;
import org.openapitools.model.DeleteFilter500Response;
import org.openapitools.model.DeleteFirewallRule;
import org.openapitools.model.DeleteGeoFirewallRule;
import org.openapitools.model.DisableScrub200Response;
import org.openapitools.model.DisableScrub400Response;
import org.openapitools.model.DisableScrub500Response;
import org.openapitools.model.EnableScrub200Response;
import org.openapitools.model.EnableScrub500Response;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetOrderDetail200Response;
import org.openapitools.model.GetScrubIpDetails200Response;
import org.openapitools.model.PlaceScrubOrder201Response;
import org.openapitools.model.ScrubIpFilterTypes;
import org.openapitools.model.ScrubIpPlaceOrder;
import org.openapitools.model.ScrubIpsDeleteRule200Response;
import org.openapitools.model.ScrubIpsDeleteRule400Response;
import org.openapitools.model.ScrubIpsDeleteRule500Response;
import org.openapitools.model.ScrubIpsLogRowSchema;
import org.openapitools.model.ScrubIpsRowSchema;

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
@Path("/scrub_ips")
@Api(value = "/", description = "")
public interface ScrubIpsApi  {

    /**
     * Cancel Scrub IP Service
     *
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel Scrub IP Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Request OK", response = CancelScrubIp200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public CancelScrubIp200Response cancelScrubIp(@PathParam("id") Integer id);

    /**
     * Create Traffic Filter
     *
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
     *
     */
    @POST
    @Path("/{id}/create_filter")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create Traffic Filter", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 201, message = "Request OK", response = CreateFilter201Response.class),
        @ApiResponse(code = 400, message = "Bad Request", response = CreateFilter400Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = CreateFilter500Response.class) })
    public CreateFilter201Response createFilter(@PathParam("id") Integer id, CreateFilter createFilter);

    /**
     * Create Geo Firewall Rule
     *
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     *
     */
    @POST
    @Path("/{id}/create_geo_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create Geo Firewall Rule", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 201, message = "Create firewall rule for scrub ip", response = CreateRule201Response.class),
        @ApiResponse(code = 400, message = "Bad Request", response = CreateGeoRule400Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = CreateRule500Response.class) })
    public CreateRule201Response createGeoRule(@PathParam("id") Integer id, CreateGeoFirewallRule createGeoFirewallRule);

    /**
     * Create Firewall Rule
     *
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     *
     */
    @POST
    @Path("/{id}/create_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create Firewall Rule", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 201, message = "Create firewall rule for scrub ip", response = CreateRule201Response.class),
        @ApiResponse(code = 400, message = "Bad Request", response = CreateRule400Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = CreateRule500Response.class) })
    public CreateRule201Response createRule(@PathParam("id") Integer id, CreateFirewallRule createFirewallRule);

    /**
     * Delete Traffic Filter
     *
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     *
     */
    @POST
    @Path("/{id}/delete_filter")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Traffic Filter", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Delete filter for scrub ip", response = DeleteFilter200Response.class),
        @ApiResponse(code = 400, message = "Bad Request", response = DeleteFilter400Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = DeleteFilter500Response.class) })
    public DeleteFilter200Response deleteFilter(@PathParam("id") Integer id, CreateFilter createFilter);

    /**
     * Disable Scrub Protection
     *
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     *
     */
    @GET
    @Path("/{id}/disable")
    @Produces({ "application/json" })
    @ApiOperation(value = "Disable Scrub Protection", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Request OK", response = DisableScrub200Response.class),
        @ApiResponse(code = 400, message = "Bad request", response = DisableScrub400Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = DisableScrub500Response.class) })
    public DisableScrub200Response disableScrub(@PathParam("id") Integer id);

    /**
     * Enable Scrub Protection
     *
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     *
     */
    @GET
    @Path("/{id}/enable")
    @Produces({ "application/json" })
    @ApiOperation(value = "Enable Scrub Protection", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Request OK", response = EnableScrub200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = EnableScrub500Response.class) })
    public EnableScrub200Response enableScrub(@PathParam("id") Integer id);

    /**
     * Get Scrub IP Ordering Information
     *
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Scrub IP Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Order details", response = GetOrderDetail200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public GetOrderDetail200Response getOrderDetail();

    /**
     * Get Scrub IP Details
     *
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Scrub IP Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Scrub IP service details including firewall rules and filters.", response = GetScrubIpDetails200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public GetScrubIpDetails200Response getScrubIpDetails(@PathParam("id") Integer id);

    /**
     * List Scrub Filter Types
     *
     * Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
     *
     */
    @GET
    @Path("/filter_types")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Scrub Filter Types", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Supported scrub filter types for building firewall rules.", response = ScrubIpFilterTypes.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ScrubIpFilterTypes getScrubIpFilterTypes();

    /**
     * Get ScrubIp Invoices
     *
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get ScrubIp Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getScrubIpInvoices(@PathParam("id") Integer id);

    /**
     * Get Scrub IP Logs
     *
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     *
     */
    @GET
    @Path("/{id}/logs")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Scrub IP Logs", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Scrub Ips logs", response = ScrubIpsLogRowSchema.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<ScrubIpsLogRowSchema> getScrubIpLogs(@PathParam("id") String id);

    /**
     * List Scrub IP Services
     *
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List Scrub IP Services", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Scrub Ips list", response = ScrubIpsRowSchema.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public List<ScrubIpsRowSchema> getScrubIpsList();

    /**
     * Place Scrub IP Order
     *
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     *
     */
    @POST
    @Path("/order")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Place Scrub IP Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 201, message = "Request OK", response = PlaceScrubOrder201Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public PlaceScrubOrder201Response placeScrubOrder(ScrubIpPlaceOrder scrubIpPlaceOrder);

    /**
     * Delete Geo Firewall Rule
     *
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     *
     */
    @POST
    @Path("/{id}/delete_geo_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Geo Firewall Rule", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Delete firewall rule for scrub ip", response = ScrubIpsDeleteRule200Response.class),
        @ApiResponse(code = 400, message = "Bad Request", response = ScrubIpsDeleteRule400Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = ScrubIpsDeleteRule500Response.class) })
    public ScrubIpsDeleteRule200Response scrubIpsDeleteGeoRule(@PathParam("id") Integer id, DeleteGeoFirewallRule deleteGeoFirewallRule);

    /**
     * Delete Firewall Rule
     *
     * Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     *
     */
    @POST
    @Path("/{id}/delete_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Firewall Rule", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Delete firewall rule for scrub ip", response = ScrubIpsDeleteRule200Response.class),
        @ApiResponse(code = 400, message = "Bad Request", response = ScrubIpsDeleteRule400Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 500, message = "Internal Server Error", response = ScrubIpsDeleteRule500Response.class) })
    public ScrubIpsDeleteRule200Response scrubIpsDeleteRule(@PathParam("id") Integer id, DeleteFirewallRule deleteFirewallRule);
}
