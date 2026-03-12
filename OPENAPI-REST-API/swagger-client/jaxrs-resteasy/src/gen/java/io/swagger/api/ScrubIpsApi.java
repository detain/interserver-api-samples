package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.ScrubIpsApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

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

import java.util.Map;
import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.inject.Inject;

import javax.validation.constraints.*;
@Path("/scrub_ips")



public class ScrubIpsApi  {

    @Inject ScrubIpsApiService service;

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Cancel Scrub IP Service", description = "Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20013.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response cancelScrubIp( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.cancelScrubIp(id,securityContext);
    }
    @POST
    @Path("/{id}/create_filter")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Traffic Filter", description = "Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2011.class))),
        
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4004.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5004.class))) })
    public Response createFilter(
@Parameter(description = "" ,required=true) CreateFilter body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.createFilter(body,id,securityContext);
    }
    @POST
    @Path("/{id}/create_geo_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Geo Firewall Rule", description = "Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Create firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse201.class))),
        
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4003.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5002.class))) })
    public Response createGeoRule(
@Parameter(description = "" ,required=true) CreateGeoFirewallRule body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.createGeoRule(body,id,securityContext);
    }
    @POST
    @Path("/{id}/create_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Create Firewall Rule", description = "Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Create firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse201.class))),
        
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4001.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5002.class))) })
    public Response createRule(
@Parameter(description = "" ,required=true) CreateFirewallRule body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.createRule(body,id,securityContext);
    }
    @POST
    @Path("/{id}/delete_filter")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Delete Traffic Filter", description = "Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Delete filter for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20017.class))),
        
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4005.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5005.class))) })
    public Response deleteFilter(
@Parameter(description = "" ,required=true) CreateFilter body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.deleteFilter(body,id,securityContext);
    }
    @GET
    @Path("/{id}/disable")
    
    @Produces({ "application/json" })
    @Operation(summary = "Disable Scrub Protection", description = "Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20015.class))),
        
        @ApiResponse(responseCode = "400", description = "Bad request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse400.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5001.class))) })
    public Response disableScrub( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.disableScrub(id,securityContext);
    }
    @GET
    @Path("/{id}/enable")
    
    @Produces({ "application/json" })
    @Operation(summary = "Enable Scrub Protection", description = "Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20014.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse500.class))) })
    public Response enableScrub( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.enableScrub(id,securityContext);
    }
    @GET
    @Path("/order")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Scrub IP Ordering Information", description = "Returns the available Scrub IP service plans and pricing information needed to build an order form.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20018.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getOrderDetail(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getOrderDetail(securityContext);
    }
    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Scrub IP Details", description = "Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Scrub IP service details including firewall rules and filters.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20012.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getScrubIpDetails( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getScrubIpDetails(id,securityContext);
    }
    @GET
    @Path("/filter_types")
    
    @Produces({ "application/json" })
    @Operation(summary = "List Scrub Filter Types", description = "Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Supported scrub filter types for building firewall rules.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ScrubIpFilterTypes.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getScrubIpFilterTypes(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getScrubIpFilterTypes(securityContext);
    }
    @GET
    @Path("/{id}/invoices")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get ScrubIp Invoices", description = "Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getScrubIpInvoices( @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getScrubIpInvoices(id,securityContext);
    }
    @GET
    @Path("/{id}/logs")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Scrub IP Logs", description = "Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Scrub Ips logs", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = ScrubIpsLogRowSchema.class)))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getScrubIpLogs( @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getScrubIpLogs(id,securityContext);
    }
    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Scrub IP Services", description = "Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Scrub Ips list", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = ScrubIpsRowSchema.class)))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getScrubIpsList(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getScrubIpsList(securityContext);
    }
    @POST
    @Path("/order")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Place Scrub IP Order", description = "Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "201", description = "Request OK", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2012.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response placeScrubOrder(
@Parameter(description = "" ,required=true) ScrubIpPlaceOrder body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.placeScrubOrder(body,securityContext);
    }
    @POST
    @Path("/{id}/delete_geo_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Delete Geo Firewall Rule", description = "Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Delete firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20016.class))),
        
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4002.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5003.class))) })
    public Response scrubIpsDeleteGeoRule(
@Parameter(description = "" ,required=true) DeleteGeoFirewallRule body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.scrubIpsDeleteGeoRule(body,id,securityContext);
    }
    @POST
    @Path("/{id}/delete_rule")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Delete Firewall Rule", description = "Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Scrub Ips" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Delete firewall rule for scrub ip", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20016.class))),
        
        @ApiResponse(responseCode = "400", description = "Bad Request", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse4002.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "500", description = "Internal Server Error", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse5003.class))) })
    public Response scrubIpsDeleteRule(
@Parameter(description = "" ,required=true) DeleteFirewallRule body
, @PathParam("id") Integer id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.scrubIpsDeleteRule(body,id,securityContext);
    }
}
