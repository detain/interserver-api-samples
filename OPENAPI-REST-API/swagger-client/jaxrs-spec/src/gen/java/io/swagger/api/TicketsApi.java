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

@Path("/tickets")


public class TicketsApi {

    @POST
    @Path("/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create New Ticket", description = "Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response addNewTicket(@Valid TicketNew body) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response addNewTicket(@FormParam(value = "subject")  String subject,@FormParam(value = "body")  String body,@FormParam(value = "service_id")  Integer serviceId,@FormParam(value = "service_module")  String serviceModule) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response closeTicket( @PathParam("id")

 @Parameter(description = "Ticket ID") String id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response deleteTicketInfo( @PathParam("id")

 @Parameter(description = "Ticket ID number.") BigDecimal id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getNewTicket() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response getTicketInfo( @PathParam("id")

 @Parameter(description = "Ticket ID number.") BigDecimal id
) {
        return Response.ok().entity("magic!").build();
    }
    @GET
    @Produces({ "application/json" })
    @Operation(summary = "List Support Tickets", description = "Returns a paginated list of support tickets on the account. Filter by status and time period.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of support tickets.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response getTicketsList(  @QueryParam("page") @DefaultValue("1") 

 @Parameter(description = "Page number for paginated results.")  Integer page
,  @QueryParam("period") @DefaultValue("30") 

 @Parameter(description = "How far back to show tickets from. Value is in days.")  String period
,  @QueryParam("view") 

 @Parameter(description = "The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.")  String view
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response postTicketInfo( @PathParam("id")

 @Parameter(description = "Ticket ID number.") BigDecimal id
) {
        return Response.ok().entity("magic!").build();
    }
    @POST
    @Produces({ "application/json" })
    @Operation(summary = "Search Support Tickets", description = "Searches support tickets by email, subject, or ticket mask ID.", security = {
        @SecurityRequirement(name = "apiKeyAuth"),
@SecurityRequirement(name = "sessionIdCookieAuth"),
@SecurityRequirement(name = "sessionIdHeaderAuth")    }, tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Search through the ticket system for a given email, subject, or ticket mask id.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class)))
    })
    public Response postTicketsList() {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response putTicketInfo( @PathParam("id")

 @Parameter(description = "Ticket ID number.") BigDecimal id
) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response replyTicket( @PathParam("id")

 @Parameter(description = "The ticket ID number.") BigDecimal id
,@Valid ReplyTicketRequest body) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response replyTicket( @PathParam("id")

 @Parameter(description = "The ticket ID number.") BigDecimal id
,@FormParam(value = "content")  String content) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response updateTicketInfo( @PathParam("id")

 @Parameter(description = "The ticket ID number.") BigDecimal id
,@Valid UpdateTicket body) {
        return Response.ok().entity("magic!").build();
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
        @ApiResponse(responseCode = "200", description = "Default response")
    })
    public Response updateTicketInfo( @PathParam("id")

 @Parameter(description = "The ticket ID number.") BigDecimal id
,@FormParam(value = "ip")  String ip,@FormParam(value = "ip_address")  String ipAddress,@FormParam(value = "customer_server_access")  String customerServerAccess,@FormParam(value = "root_password")  String rootPassword,@FormParam(value = "sudo_username")  String sudoUsername,@FormParam(value = "sudo_password")  String sudoPassword,@FormParam(value = "port")  Integer port) {
        return Response.ok().entity("magic!").build();
    }}
