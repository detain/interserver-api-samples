package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.TicketsApiService;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.security.SecurityRequirement;

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
@Path("/tickets")



public class TicketsApi  {

    @Inject TicketsApiService service;

    @POST
    @Path("/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create New Ticket", description = "Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addNewTicket(
@Parameter(description = "" ,required=true) TicketNew body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.addNewTicket(body,securityContext);
    }
    @POST
    @Path("/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create New Ticket", description = "Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addNewTicket(@Parameter(description = "", required=true)@FormParam("subject")  String subject,@Parameter(description = "", required=true)@FormParam("body")  String body,@Parameter(description = "", required=true)@FormParam("service_id")  Integer serviceId,@Parameter(description = "", required=true)@FormParam("service_module")  String serviceModule,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.addNewTicket(subject,body,serviceId,serviceModule,securityContext);
    }
    @GET
    @Path("/{id}/close")
    
    @Produces({ "application/json" })
    @Operation(summary = "Close Ticket", description = "Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Close ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = CloseTicketResponseSchema.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response closeTicket( @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.closeTicket(id,securityContext);
    }
    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Close Ticket", description = "Closes the support ticket.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response deleteTicketInfo( @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.deleteTicketInfo(id,securityContext);
    }
    @GET
    @Path("/new")
    
    @Produces({ "application/json" })
    @Operation(summary = "Gets Information for creating a new ticket.", description = "Returns the form data needed to create a new support ticket, such as available departments and service categories.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "New ticket form data including departments and service categories."),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getNewTicket(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getNewTicket(securityContext);
    }
    @GET
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Get Ticket Information", description = "Returns the full details of a support ticket including its history of replies.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response getTicketInfo( @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getTicketInfo(id,securityContext);
    }
    @GET
    
    
    @Produces({ "application/json" })
    @Operation(summary = "List Support Tickets", description = "Returns a paginated list of support tickets on the account. Filter by status and time period.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of support tickets.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response getTicketsList(  @DefaultValue("1") @QueryParam("page") Integer page,  @DefaultValue("30") @QueryParam("period") String period,  @QueryParam("view") String view,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.getTicketsList(page,period,view,securityContext);
    }
    @POST
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Reply To Ticket", description = "Adds a reply to an existing support ticket.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response postTicketInfo( @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postTicketInfo(id,securityContext);
    }
    @POST
    
    
    @Produces({ "application/json" })
    @Operation(summary = "Search Support Tickets", description = "Searches support tickets by email, subject, or ticket mask ID.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Search through the ticket system for a given email, subject, or ticket mask id.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response postTicketsList(@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.postTicketsList(securityContext);
    }
    @PUT
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", description = "Updates a support ticket's properties such as subject or status.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response putTicketInfo( @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.putTicketInfo(id,securityContext);
    }
    @POST
    @Path("/{id}/reply")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Reply Ticket", description = "Posts a reply to an existing support ticket thread.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Reply to the ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReplyTicketResponseSchema.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response replyTicket( @PathParam("id") BigDecimal id,
@Parameter(description = "" ) ReplyTicketRequest body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.replyTicket(id,body,securityContext);
    }
    @POST
    @Path("/{id}/reply")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Reply Ticket", description = "Posts a reply to an existing support ticket thread.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Reply to the ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReplyTicketResponseSchema.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response replyTicket( @PathParam("id") BigDecimal id,@Parameter(description = "")@FormParam("content")  String content,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.replyTicket(id,content,securityContext);
    }
    @POST
    @Path("/{id}/update")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", description = "Updates a support ticket's subject or body content.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from updating a support ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = UpdateTicketResponseSchema.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateTicketInfo( @PathParam("id") BigDecimal id,
@Parameter(description = "" ) UpdateTicket body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.updateTicketInfo(id,body,securityContext);
    }
    @POST
    @Path("/{id}/update")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", description = "Updates a support ticket's subject or body content.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")
    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from updating a support ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = UpdateTicketResponseSchema.class))),
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        
        @ApiResponse(responseCode = "200", description = "Default response") })
    public Response updateTicketInfo( @PathParam("id") BigDecimal id,@Parameter(description = "")@FormParam("ip")  String ip,@Parameter(description = "")@FormParam("ip_address")  String ipAddress,@Parameter(description = "", schema=@Schema(allowableValues={ "y", "n" })
)@FormParam("customer_server_access")  String customerServerAccess,@Parameter(description = "")@FormParam("root_password")  String rootPassword,@Parameter(description = "")@FormParam("sudo_username")  String sudoUsername,@Parameter(description = "")@FormParam("sudo_password")  String sudoPassword,@Parameter(description = "")@FormParam("port")  Integer port,@Context SecurityContext securityContext)
    throws NotFoundException {
        return service.updateTicketInfo(id,ip,ipAddress,customerServerAccess,rootPassword,sudoUsername,sudoPassword,port,securityContext);
    }
}
