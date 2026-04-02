package io.swagger.api;

import java.math.BigDecimal;
import io.swagger.model.CloseTicketResponseSchema;
import io.swagger.model.InlineResponse401;
import io.swagger.model.ReplyTicketRequest;
import io.swagger.model.ReplyTicketResponseSchema;
import io.swagger.model.TicketNew;
import io.swagger.model.TicketNewResponse;
import io.swagger.model.Tickets;
import io.swagger.model.UpdateTicket;
import io.swagger.model.UpdateTicketResponseSchema;
import io.swagger.model.ViewTicketResponse;
import io.swagger.api.TicketsApiService;

import javax.ws.rs.*;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.enterprise.context.RequestScoped;
import javax.inject.Inject;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;
import java.io.InputStream;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;
import org.apache.cxf.jaxrs.ext.multipart.Multipart;

import java.util.Map;
import java.util.List;
import javax.validation.constraints.*;
@Path("/tickets")
@RequestScoped






public class TicketsApi  {

  @Context SecurityContext securityContext;

  @Inject TicketsApiService delegate;


    @POST
    @Path("/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create New Ticket", description = "Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addNewTicket(
@Parameter(description = "" ,required=true) TicketNew body
) {
        return delegate.addNewTicket(body, securityContext);
    }

    @POST
    @Path("/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create New Ticket", description = "Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addNewTicket(@Multipart(value = "subject")  String subject, @Multipart(value = "body")  String body, @Multipart(value = "service_id")  Integer serviceId, @Multipart(value = "service_module")  String serviceModule) {
        return delegate.addNewTicket(subject, body, serviceId, serviceModule, securityContext);
    }

    @GET
    @Path("/{id}/close")
    
    @Produces({ "application/json" })
    @Operation(summary = "Close Ticket", description = "Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Close ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = CloseTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response closeTicket(
@Parameter(description = "Ticket ID",required=true) @PathParam("id") String id
) {
        return delegate.closeTicket(id, securityContext);
    }

    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Close Ticket", description = "Closes the support ticket.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response deleteTicketInfo(
@Parameter(description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id
) {
        return delegate.deleteTicketInfo(id, securityContext);
    }

    @GET
    @Path("/new")
    
    @Produces({ "application/json" })
    @Operation(summary = "Gets Information for creating a new ticket.", description = "Returns the form data needed to create a new support ticket, such as available departments and service categories.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "New ticket form data including departments and service categories."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewTicket() {
        return delegate.getNewTicket(securityContext);
    }

    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Ticket Information", description = "Returns the full details of a support ticket including its history of replies.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getTicketInfo(
@Parameter(description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id
) {
        return delegate.getTicketInfo(id, securityContext);
    }

    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Support Tickets", description = "Returns a paginated list of support tickets on the account. Filter by status and time period.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of support tickets.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getTicketsList( 
@Parameter(description = "Page number for paginated results.") @DefaultValue("1") @QueryParam("page") Integer page
,  
@Parameter(description = "How far back to show tickets from. Value is in days.", schema=@Schema(allowableValues={ "30", "90", "365", "1825", "all" })
) @DefaultValue("30") @QueryParam("period") String period
,  
@Parameter(description = "The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.", schema=@Schema(allowableValues={ "Open", "Closed", "On Hold", "In Progress" })
)  @QueryParam("view") String view
) {
        return delegate.getTicketsList(page, period, view, securityContext);
    }

    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reply To Ticket", description = "Adds a reply to an existing support ticket.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response postTicketInfo(
@Parameter(description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id
) {
        return delegate.postTicketInfo(id, securityContext);
    }

    @POST
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Search Support Tickets", description = "Searches support tickets by email, subject, or ticket mask ID.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Search through the ticket system for a given email, subject, or ticket mask id.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postTicketsList() {
        return delegate.postTicketsList(securityContext);
    }

    @PUT
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", description = "Updates a support ticket's properties such as subject or status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response putTicketInfo(
@Parameter(description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id
) {
        return delegate.putTicketInfo(id, securityContext);
    }

    @POST
    @Path("/{id}/reply")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Reply Ticket", description = "Posts a reply to an existing support ticket thread.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Reply to the ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReplyTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response replyTicket(
@Parameter(description = "The ticket ID number.",required=true) @PathParam("id") BigDecimal id
, 
@Parameter(description = "" ) ReplyTicketRequest body
) {
        return delegate.replyTicket(id, body, securityContext);
    }

    @POST
    @Path("/{id}/reply")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Reply Ticket", description = "Posts a reply to an existing support ticket thread.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Reply to the ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReplyTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response replyTicket(
@Parameter(description = "The ticket ID number.",required=true) @PathParam("id") BigDecimal id
, @Multipart(value = "content", required = false)  String content) {
        return delegate.replyTicket(id, content, securityContext);
    }

    @POST
    @Path("/{id}/update")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", description = "Updates a support ticket's subject or body content.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from updating a support ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = UpdateTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateTicketInfo(
@Parameter(description = "The ticket ID number.",required=true) @PathParam("id") BigDecimal id
, 
@Parameter(description = "" ) UpdateTicket body
) {
        return delegate.updateTicketInfo(id, body, securityContext);
    }

    @POST
    @Path("/{id}/update")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", description = "Updates a support ticket's subject or body content.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from updating a support ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = UpdateTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateTicketInfo(
@Parameter(description = "The ticket ID number.",required=true) @PathParam("id") BigDecimal id
, @Multipart(value = "ip", required = false)  String ip, @Multipart(value = "ip_address", required = false)  String ipAddress, @Multipart(value = "customer_server_access", required = false)  String customerServerAccess, @Multipart(value = "root_password", required = false)  String rootPassword, @Multipart(value = "sudo_username", required = false)  String sudoUsername, @Multipart(value = "sudo_password", required = false)  String sudoPassword, @Multipart(value = "port", required = false)  Integer port) {
        return delegate.updateTicketInfo(id, ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port, securityContext);
    }
}
