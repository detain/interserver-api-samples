package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.TicketsApiService;
import io.swagger.api.factories.TicketsApiServiceFactory;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Parameter;
import io.swagger.v3.oas.annotations.enums.ParameterIn;
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

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;
import org.glassfish.jersey.media.multipart.FormDataParam;

import javax.servlet.ServletConfig;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.ws.rs.*;
import javax.validation.constraints.*;


@Path("/tickets")



public class TicketsApi  {
   private final TicketsApiService delegate;

   public TicketsApi(@Context ServletConfig servletContext) {
      TicketsApiService delegate = null;

      if (servletContext != null) {
         String implClass = servletContext.getInitParameter("TicketsApi.implementation");
         if (implClass != null && !"".equals(implClass.trim())) {
            try {
               delegate = (TicketsApiService) Class.forName(implClass).newInstance();
            } catch (Exception e) {
               throw new RuntimeException(e);
            }
         } 
      }

      if (delegate == null) {
         delegate = TicketsApiServiceFactory.getTicketsApi();
      }

      this.delegate = delegate;
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
        
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Response addNewTicket(@Parameter(in = ParameterIn.DEFAULT, description = "" ,required=true) TicketNew body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.addNewTicket(body,securityContext);
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
    public Response closeTicket(@Parameter(in = ParameterIn.PATH, description = "Ticket ID",required=true) @PathParam("id") String id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.closeTicket(id,securityContext);
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
    public Response deleteTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.deleteTicketInfo(id,securityContext);
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
    public Response getNewTicket(@Context SecurityContext securityContext)
    throws NotFoundException {
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
    public Response getTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getTicketInfo(id,securityContext);
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
    public Response getTicketsList(@Parameter(in = ParameterIn.QUERY, description = "Page number for paginated results.") @DefaultValue("1") @QueryParam("page") Integer page,@Parameter(in = ParameterIn.QUERY, description = "How far back to show tickets from. Value is in days.", schema=@Schema(allowableValues={ "30", "90", "365", "1825", "all" })
) @DefaultValue("30") @QueryParam("period") String period,@Parameter(in = ParameterIn.QUERY, description = "The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.", schema=@Schema(allowableValues={ "Open", "Closed", "On Hold", "In Progress" })
) @QueryParam("view") String view,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.getTicketsList(page,period,view,securityContext);
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
    public Response postTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.postTicketInfo(id,securityContext);
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
    public Response postTicketsList(@Context SecurityContext securityContext)
    throws NotFoundException {
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
    public Response putTicketInfo(@Parameter(in = ParameterIn.PATH, description = "Ticket ID number.",required=true) @PathParam("id") BigDecimal id,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.putTicketInfo(id,securityContext);
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
    public Response replyTicket(@Parameter(in = ParameterIn.PATH, description = "The ticket ID number.",required=true) @PathParam("id") BigDecimal id,@Parameter(in = ParameterIn.DEFAULT, description = "" ) ReplyTicketRequest body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.replyTicket(id,body,securityContext);
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
    public Response updateTicketInfo(@Parameter(in = ParameterIn.PATH, description = "The ticket ID number.",required=true) @PathParam("id") BigDecimal id,@Parameter(in = ParameterIn.DEFAULT, description = "" ) UpdateTicket body
,@Context SecurityContext securityContext)
    throws NotFoundException {
        return delegate.updateTicketInfo(id,body,securityContext);
    }
}
