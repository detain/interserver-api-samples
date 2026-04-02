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
public interface TicketsApi  {

    /**
     * Create New Ticket
     *
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     *
     */
    @POST
    @Path("/tickets/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create New Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TicketNewResponse addNewTicket(@Valid TicketNew body);

    /**
     * Create New Ticket
     *
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     *
     */
    @POST
    @Path("/tickets/new")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Create New Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A successful response after creating a ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "400", description = "A successful response after creating a ticket", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TicketNewResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TicketNewResponse addNewTicket(@Multipart(value = "subject")  String subject, @Multipart(value = "body")  String body, @Multipart(value = "service_id")  Integer serviceId, @Multipart(value = "service_module")  String serviceModule);

    /**
     * Close Ticket
     *
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     *
     */
    @GET
    @Path("/tickets/{id}/close")
    @Produces({ "application/json" })
    @Operation(summary = "Close Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Close ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = CloseTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public CloseTicketResponseSchema closeTicket(@PathParam("id") String id);

    /**
     * Close Ticket
     *
     * Closes the support ticket.
     *
     */
    @DELETE
    @Path("/tickets/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Close Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public ViewTicketResponse deleteTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * Gets Information for creating a new ticket.
     *
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     *
     */
    @GET
    @Path("/tickets/new")
    @Produces({ "application/json" })
    @Operation(summary = "Gets Information for creating a new ticket.", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "New ticket form data including departments and service categories."),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getNewTicket();

    /**
     * Get Ticket Information
     *
     * Returns the full details of a support ticket including its history of replies.
     *
     */
    @GET
    @Path("/tickets/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get Ticket Information", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public ViewTicketResponse getTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * List Support Tickets
     *
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     *
     */
    @GET
    @Path("/tickets")
    @Produces({ "application/json" })
    @Operation(summary = "List Support Tickets", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of support tickets.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Tickets getTicketsList(@QueryParam("page") @DefaultValue("1") Integer page, @QueryParam("period") @DefaultValue("30") String period, @QueryParam("view") String view);

    /**
     * Reply To Ticket
     *
     * Adds a reply to an existing support ticket.
     *
     */
    @POST
    @Path("/tickets/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Reply To Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public ViewTicketResponse postTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * Search Support Tickets
     *
     * Searches support tickets by email, subject, or ticket mask ID.
     *
     */
    @POST
    @Path("/tickets")
    @Produces({ "application/json" })
    @Operation(summary = "Search Support Tickets", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Search through the ticket system for a given email, subject, or ticket mask id.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Tickets.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Tickets postTicketsList();

    /**
     * Update Ticket
     *
     * Updates a support ticket&#x27;s properties such as subject or status.
     *
     */
    @PUT
    @Path("/tickets/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Ticket Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ViewTicketResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public ViewTicketResponse putTicketInfo(@PathParam("id") BigDecimal id);

    /**
     * Reply Ticket
     *
     * Posts a reply to an existing support ticket thread.
     *
     */
    @POST
    @Path("/tickets/{id}/reply")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Reply Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Reply to the ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReplyTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public ReplyTicketResponseSchema replyTicket(@PathParam("id") BigDecimal id, @Valid ReplyTicketRequest body);

    /**
     * Reply Ticket
     *
     * Posts a reply to an existing support ticket thread.
     *
     */
    @POST
    @Path("/tickets/{id}/reply")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Reply Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Reply to the ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReplyTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public ReplyTicketResponseSchema replyTicket(@PathParam("id") BigDecimal id, @Multipart(value = "content", required = false)  String content);

    /**
     * Update Ticket
     *
     * Updates a support ticket&#x27;s subject or body content.
     *
     */
    @POST
    @Path("/tickets/{id}/update")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from updating a support ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = UpdateTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public UpdateTicketResponseSchema updateTicketInfo(@PathParam("id") BigDecimal id, @Valid UpdateTicket body);

    /**
     * Update Ticket
     *
     * Updates a support ticket&#x27;s subject or body content.
     *
     */
    @POST
    @Path("/tickets/{id}/update")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Ticket", tags={ "Tickets" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response from updating a support ticket.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = UpdateTicketResponseSchema.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "200", description = "Default response") })
    public UpdateTicketResponseSchema updateTicketInfo(@PathParam("id") BigDecimal id, @Multipart(value = "ip", required = false)  String ip, @Multipart(value = "ip_address", required = false)  String ipAddress, @Multipart(value = "customer_server_access", required = false)  String customerServerAccess, @Multipart(value = "root_password", required = false)  String rootPassword, @Multipart(value = "sudo_username", required = false)  String sudoUsername, @Multipart(value = "sudo_password", required = false)  String sudoPassword, @Multipart(value = "port", required = false)  Integer port);
}
