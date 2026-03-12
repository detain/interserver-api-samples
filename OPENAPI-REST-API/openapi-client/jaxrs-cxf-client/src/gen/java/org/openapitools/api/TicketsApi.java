package org.openapitools.api;

import java.math.BigDecimal;
import org.openapitools.model.CloseTicketResponseSchema;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.ReplyTicketRequest;
import org.openapitools.model.ReplyTicketResponseSchema;
import org.openapitools.model.TicketNew;
import org.openapitools.model.TicketNewResponse;
import org.openapitools.model.Tickets;
import org.openapitools.model.UpdateTicket;
import org.openapitools.model.UpdateTicketResponseSchema;
import org.openapitools.model.ViewTicketResponse;

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
@Path("/tickets")
@Api(value = "/", description = "")
public interface TicketsApi  {

    /**
     * Create New Ticket
     *
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     *
     */
    @POST
    @Path("/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create New Ticket", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A successful response after creating a ticket", response = TicketNewResponse.class),
        @ApiResponse(code = 400, message = "A successful response after creating a ticket", response = TicketNewResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TicketNewResponse addNewTicket(TicketNew ticketNew);

    /**
     * Close Ticket
     *
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     *
     */
    @GET
    @Path("/{id}/close")
    @Produces({ "application/json" })
    @ApiOperation(value = "Close Ticket", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Close ticket.", response = CloseTicketResponseSchema.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public CloseTicketResponseSchema closeTicket(@PathParam("id") String id);

    /**
     * Close Ticket
     *
     * Closes the support ticket.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Close Ticket", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Ticket Information", response = ViewTicketResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public ViewTicketResponse deleteTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * Gets Information for creating a new ticket.
     *
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     *
     */
    @GET
    @Path("/new")
    @Produces({ "application/json" })
    @ApiOperation(value = "Gets Information for creating a new ticket.", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "New ticket form data including departments and service categories."),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getNewTicket();

    /**
     * Get Ticket Information
     *
     * Returns the full details of a support ticket including its history of replies.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Ticket Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Ticket Information", response = ViewTicketResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public ViewTicketResponse getTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * List Support Tickets
     *
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List Support Tickets", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of support tickets.", response = Tickets.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Tickets getTicketsList(@QueryParam("page") @DefaultValue("1")Integer page, @QueryParam("period") @DefaultValue("30")String period, @QueryParam("view") String view);

    /**
     * Reply To Ticket
     *
     * Adds a reply to an existing support ticket.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reply To Ticket", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Ticket Information", response = ViewTicketResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public ViewTicketResponse postTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * Search Support Tickets
     *
     * Searches support tickets by email, subject, or ticket mask ID.
     *
     */
    @POST
    
    @Produces({ "application/json" })
    @ApiOperation(value = "Search Support Tickets", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Search through the ticket system for a given email, subject, or ticket mask id.", response = Tickets.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Tickets postTicketsList();

    /**
     * Update Ticket
     *
     * Updates a support ticket&#39;s properties such as subject or status.
     *
     */
    @PUT
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Ticket", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Ticket Information", response = ViewTicketResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public ViewTicketResponse putTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * Reply Ticket
     *
     * Posts a reply to an existing support ticket thread.
     *
     */
    @POST
    @Path("/{id}/reply")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Reply Ticket", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Post Reply to the ticket.", response = ReplyTicketResponseSchema.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public ReplyTicketResponseSchema replyTicket(@PathParam("id") BigDecimal id, ReplyTicketRequest replyTicketRequest);

    /**
     * Update Ticket
     *
     * Updates a support ticket&#39;s subject or body content.
     *
     */
    @POST
    @Path("/{id}/update")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Ticket", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response from updating a support ticket.", response = UpdateTicketResponseSchema.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public UpdateTicketResponseSchema updateTicketInfo(@PathParam("id") BigDecimal id, UpdateTicket updateTicket);
}
