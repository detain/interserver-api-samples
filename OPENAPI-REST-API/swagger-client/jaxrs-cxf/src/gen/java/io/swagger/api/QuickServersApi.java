package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.IdBackupsBody;
import io.swagger.model.InlineResponse20010;
import io.swagger.model.InlineResponse20011;
import io.swagger.model.InlineResponse401;
import io.swagger.model.QueueResponse;
import io.swagger.model.Quickserver;
import io.swagger.model.QuickserverOrder;
import io.swagger.model.QuickserverRow;
import io.swagger.model.RestoreRequest;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;
import io.swagger.model.TimezoneUpdate;
import io.swagger.model.VpsBackupRows;
import io.swagger.model.VpsTemplatesList;

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
public interface QuickServersApi  {

    /**
     * Place QuickServer Order
     *
     * Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     *
     */
    @POST
    @Path("/qs/order")
    @Produces({ "application/json" })
    @Operation(summary = "Place QuickServer Order", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServiceOrderPostResponse addQs();

    /**
     * Delete QuickServer Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
     *
     */
    @DELETE
    @Path("/qs/{id}/backups")
    @Produces({ "application/json" })
    @Operation(summary = "Delete QuickServer Backup", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse deleteQsBackup(@PathParam("id") Integer id, @QueryParam("file") @NotNull String file, @QueryParam("all") String all);

    /**
     * Block QuickServer SMTP
     *
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     *
     */
    @GET
    @Path("/qs/{id}/block_smtp")
    @Produces({ "application/json" })
    @Operation(summary = "Block QuickServer SMTP", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsBlockSmtp(@PathParam("id") Integer id);

    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive for the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/disable_cd")
    @Produces({ "application/json" })
    @Operation(summary = "Disable CD Drive", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsDisableCd(@PathParam("id") Integer id);

    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement for the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/disable_quota")
    @Produces({ "application/json" })
    @Operation(summary = "Disable Quotas", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsDisableQuota(@PathParam("id") Integer id);

    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the QuickServer&#x27;s CD drive.
     *
     */
    @GET
    @Path("/qs/{id}/eject_cd")
    @Produces({ "application/json" })
    @Operation(summary = "Eject CD Drive", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsEjectCd(@PathParam("id") Integer id);

    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement for the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/enable_quota")
    @Produces({ "application/json" })
    @Operation(summary = "Enable Quotas", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsEnableQuota(@PathParam("id") Integer id);

    /**
     * Restart QuickServer
     *
     * Restarts the QuickServer. The server will be shut down and started again.
     *
     */
    @GET
    @Path("/qs/{id}/restart")
    @Produces({ "application/json" })
    @Operation(summary = "Restart QuickServer", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsRestart(@PathParam("id") Integer id);

    /**
     * Start QuickServer
     *
     * Powers on the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/start")
    @Produces({ "application/json" })
    @Operation(summary = "Start QuickServer", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsStart(@PathParam("id") Integer id);

    /**
     * Stop QuickServer
     *
     * Powers off the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/stop")
    @Produces({ "application/json" })
    @Operation(summary = "Stop QuickServer", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doQsStop(@PathParam("id") Integer id);

    /**
     * Download QuickServer Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
     *
     */
    @PATCH
    @Path("/qs/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download QuickServer Backup", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20011 downloadQsBackup(@Valid IdBackupsBody body, @PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * Download QuickServer Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
     *
     */
    @PATCH
    @Path("/qs/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download QuickServer Backup", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20011 downloadQsBackup(@Multipart(value = "file")  String file, @PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * Get QuickServer Ordering Information
     *
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     *
     */
    @GET
    @Path("/qs/order")
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Ordering Information", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Quickserver Ordering information.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QuickserverOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QuickserverOrder getNewQs();

    /**
     * List QuickServer Backups
     *
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
     *
     */
    @GET
    @Path("/qs/{id}/backups")
    @Produces({ "application/json" })
    @Operation(summary = "List QuickServer Backups", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of available backups for the QuickServer.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsBackupRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsBackupRows getQsBackups(@PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * Get QuickServer Hostname
     *
     * Retrieves the current hostname and any validation requirements for changing it.
     *
     */
    @GET
    @Path("/qs/{id}/change_hostname")
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Hostname", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Hostname info response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsChangeHostname(@PathParam("id") Integer id);

    /**
     * Get Change Root Password Info
     *
     * Retrieves instructions or metadata needed to reset the root password.
     *
     */
    @GET
    @Path("/qs/{id}/change_root_password")
    @Produces({ "application/json" })
    @Operation(summary = "Get Change Root Password Info", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Root Password response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsChangeRootPassword(@PathParam("id") Integer id);

    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/change_timezone")
    @Produces({ "application/json" })
    @Operation(summary = "Get Timezone Info", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Timezone info response", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = String.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<String> getQsChangeTimezone(@PathParam("id") Integer id);

    /**
     * Webuzo Change Pass Info
     *
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     *
     */
    @GET
    @Path("/qs/{id}/change_webuzo_password")
    @Produces({ "application/json" })
    @Operation(summary = "Webuzo Change Pass Info", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Change Webuzo Password info response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsChangeWebuzoPassword(@PathParam("id") Integer id);

    /**
     * Get QuickServer Order
     *
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     *
     */
    @GET
    @Path("/qs/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Order", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Quickserver details", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Quickserver.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Quickserver getQsInfo(@PathParam("id") Integer id);

    /**
     * Insert CD Information
     *
     * Returns available ISO images that can be mounted in the QuickServer&#x27;s virtual CD drive.
     *
     */
    @GET
    @Path("/qs/{id}/insert_cd")
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD Information", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Insert CD info response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsInsertCd(@PathParam("id") Integer id);

    /**
     * Get QuickServer Invoices
     *
     * Returns the billing invoices associated with this QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get QuickServer Invoices", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getQsInvoices(@PathParam("id") Integer id);

    /**
     * List QuickServers
     *
     * Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
     *
     */
    @GET
    @Path("/qs")
    @Produces({ "application/json" })
    @Operation(summary = "List QuickServers", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Quickservers` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = QuickserverRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<QuickserverRow> getQsList();

    /**
     * QuickServer Reinstall OS Options
     *
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/reinstall_os")
    @Produces({ "application/json" })
    @Operation(summary = "QuickServer Reinstall OS Options", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reinstall OS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsTemplatesList.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsTemplatesList getQsReinstallOs(@PathParam("id") Integer id);

    /**
     * Reset QuickServer Password Info
     *
     * Returns information needed before resetting the QuickServer&#x27;s root password.
     *
     */
    @GET
    @Path("/qs/{id}/reset_password")
    @Produces({ "application/json" })
    @Operation(summary = "Reset QuickServer Password Info", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reset password info"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsResetPassword(@PathParam("id") Integer id);

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
     *
     */
    @GET
    @Path("/qs/{id}/reverse_dns")
    @Produces({ "application/json" })
    @Operation(summary = "Reverse DNS Info", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "QuickServer Reverse DNS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ReverseDnsEntries getQsReverseDns(@PathParam("id") Integer id);

    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/setup_vnc")
    @Produces({ "application/json" })
    @Operation(summary = "VNC Setup Info", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer Setup VNC Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsSetupVnc(@PathParam("id") Integer id);

    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/traffic_usage")
    @Produces({ "application/json" })
    @Operation(summary = "Get Traffic Usage", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer Traffic usage"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsTrafficUsage(@PathParam("id") Integer id);

    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the QuickServer.
     *
     */
    @GET
    @Path("/qs/{id}/view_desktop")
    @Produces({ "application/json" })
    @Operation(summary = "Get View Desktop Info", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get QuickServer View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getQsViewDesktop(@PathParam("id") Integer id);

    /**
     * Resend QuickServer Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     *
     */
    @GET
    @Path("/qs/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend QuickServer Welcome Email", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse getQsWelcomeEmail(@PathParam("id") String id);

    /**
     * Create QuickServer Backup
     *
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     *
     */
    @POST
    @Path("/qs/{id}/backup")
    @Produces({ "application/json" })
    @Operation(summary = "Create QuickServer Backup", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsBackup(@PathParam("id") Integer id);

    /**
     * Update QuickServer Hostname
     *
     * Submits a hostname change request for the QuickServer.
     *
     */
    @POST
    @Path("/qs/{id}/change_hostname")
    @Produces({ "application/json" })
    @Operation(summary = "Update QuickServer Hostname", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsChangeHostname(@PathParam("id") Integer id);

    /**
     * Change Root Password
     *
     * Triggers a root password reset for the QuickServer.
     *
     */
    @POST
    @Path("/qs/{id}/change_root_password")
    @Produces({ "application/json" })
    @Operation(summary = "Change Root Password", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsChangeRootPassword(@PathParam("id") Integer id);

    /**
     * Change QuickServer Timezone
     *
     * Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
     *
     */
    @POST
    @Path("/qs/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change QuickServer Timezone", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsChangeTimezone(@Multipart(value = "timezone")  String timezone, @PathParam("id") Integer id);

    /**
     * Change QuickServer Timezone
     *
     * Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
     *
     */
    @POST
    @Path("/qs/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change QuickServer Timezone", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsChangeTimezone(@Valid TimezoneUpdate body, @PathParam("id") Integer id);

    /**
     * Change Webuzo Password
     *
     * Resets the Webuzo control panel password for the QuickServer.
     *
     */
    @POST
    @Path("/qs/{id}/change_webuzo_password")
    @Produces({ "application/json" })
    @Operation(summary = "Change Webuzo Password", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsChangeWebuzoPassword(@PathParam("id") Integer id);

    /**
     * Insert CD in QuickServer
     *
     * Mounts an ISO image in the QuickServer&#x27;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
     *
     */
    @POST
    @Path("/qs/{id}/insert_cd")
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD in QuickServer", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsInsertCd(@PathParam("id") Integer id);

    /**
     * Reinstall QuickServer OS
     *
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     *
     */
    @POST
    @Path("/qs/{id}/reinstall_os")
    @Produces({ "application/json" })
    @Operation(summary = "Reinstall QuickServer OS", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsReinstallOs(@PathParam("id") Integer id);

    /**
     * Reset QuickServer Password
     *
     * Resets the root password on the QuickServer to a new randomly generated password.
     *
     */
    @POST
    @Path("/qs/{id}/reset_password")
    @Produces({ "application/json" })
    @Operation(summary = "Reset QuickServer Password", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsResetPassword(@PathParam("id") Integer id);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
     *
     */
    @POST
    @Path("/qs/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update QuickServer Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postQsReverseDns(@Valid ReverseDnsEntries body, @PathParam("id") Integer id);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
     *
     */
    @POST
    @Path("/qs/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update QuickServer Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postQsReverseDns(@Multipart(value = "ips")  Map<String, Object> ips, @PathParam("id") Integer id);

    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the QuickServer.
     *
     */
    @POST
    @Path("/qs/{id}/setup_vnc")
    @Produces({ "application/json" })
    @Operation(summary = "Setup VNC", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQsSetupVnc(@PathParam("id") Integer id);

    /**
     * Search Traffic Usage
     *
     * Searches and filters the QuickServer&#x27;s bandwidth traffic usage data by date range.
     *
     */
    @POST
    @Path("/qs/{id}/traffic_usage")
    @Produces({ "application/json" })
    @Operation(summary = "Search Traffic Usage", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit QuickServer Traffic Usage"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void postQsTrafficUsage(@PathParam("id") Integer id);

    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the QuickServer.
     *
     */
    @POST
    @Path("/qs/{id}/view_desktop")
    @Produces({ "application/json" })
    @Operation(summary = "Update View Desktop", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit QuickServer View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void postQsViewDesktop(@PathParam("id") Integer id);

    /**
     * Restore QuickServer from Backup
     *
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    @POST
    @Path("/qs/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore QuickServer from Backup", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQuickServerRestore(@Valid RestoreRequest body, @PathParam("id") Integer id);

    /**
     * Restore QuickServer from Backup
     *
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    @POST
    @Path("/qs/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore QuickServer from Backup", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postQuickServerRestore(@Multipart(value = "backup")  String backup, @Multipart(value = "password")  String password, @PathParam("id") Integer id);

    /**
     * Validate QuickServer Order
     *
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     *
     */
    @PUT
    @Path("/qs/order")
    @Produces({ "application/json" })
    @Operation(summary = "Validate QuickServer Order", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate QuickServer Order response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void putQs();

    /**
     * Cancel QuickServer Order
     *
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/qs/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel QuickServer Order", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Rapid Deploy Servers Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20010.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20010 quickserversCancel(@PathParam("id") Integer id);

    /**
     * Update QuickServer Order
     *
     * Updates QuickServer metadata or stored settings associated with the order.
     *
     */
    @POST
    @Path("/qs/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update QuickServer Order", tags={ "QuickServers" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateQsInfo(@PathParam("id") String id);
}
