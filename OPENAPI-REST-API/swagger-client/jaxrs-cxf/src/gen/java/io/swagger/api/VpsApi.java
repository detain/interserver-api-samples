package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;
import io.swagger.model.HostnameObject;
import io.swagger.model.IdBackupsBody2;
import io.swagger.model.InlineResponse20011;
import io.swagger.model.InlineResponse20022;
import io.swagger.model.InlineResponse401;
import io.swagger.model.PasswordRequest;
import io.swagger.model.QueueResponse;
import io.swagger.model.RestoreRequest;
import io.swagger.model.ReverseDnsEntries;
import io.swagger.model.ServiceOrderPostResponse;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TemplateRequest;
import io.swagger.model.TextResponse;
import io.swagger.model.TimezoneUpdate;
import io.swagger.model.UrlRequest;
import io.swagger.model.Vps;
import io.swagger.model.VpsBackupRows;
import io.swagger.model.VpsOrder;
import io.swagger.model.VpsOrderPostRequest;
import io.swagger.model.VpsOrderPutRequest;
import io.swagger.model.VpsOrderPutResponse;
import io.swagger.model.VpsRow;
import io.swagger.model.VpsTemplatesList;
import io.swagger.model.VpsTrafficResponse;

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
public interface VpsApi  {

    /**
     * Place VPS Order
     *
     * Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/vps/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Place VPS Order", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServiceOrderPostResponse addVps(@Valid VpsOrderPostRequest body);

    /**
     * Place VPS Order
     *
     * Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/vps/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Place VPS Order", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ServiceOrderPostResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ServiceOrderPostResponse addVps(@Multipart(value = "osDistro", required = false)  String osDistro, @Multipart(value = "slices", required = false)  Integer slices, @Multipart(value = "vpsPlatform", required = false)  String vpsPlatform, @Multipart(value = "controlpanel", required = false)  String controlpanel, @Multipart(value = "period", required = false)  Integer period, @Multipart(value = "location", required = false)  Integer location, @Multipart(value = "osVersion", required = false)  String osVersion, @Multipart(value = "hostname", required = false)  String hostname, @Multipart(value = "coupon", required = false)  String coupon, @Multipart(value = "rootpass", required = false)  String rootpass, @Multipart(value = "comment", required = false)  String comment);

    /**
     * Delete VPS Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
     *
     */
    @DELETE
    @Path("/vps/{id}/backups")
    @Produces({ "application/json" })
    @Operation(summary = "Delete VPS Backup", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse deleteVpsBackup(@PathParam("id") Integer id, @QueryParam("file") @NotNull String file, @QueryParam("all") String all);

    /**
     * Blocks SMTP
     *
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     *
     */
    @GET
    @Path("/vps/{id}/block_smtp")
    @Produces({ "application/json" })
    @Operation(summary = "Blocks SMTP", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsBlockSmtp(@PathParam("id") Integer id);

    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive on the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/disable_cd")
    @Produces({ "application/json" })
    @Operation(summary = "Disable CD Drive", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsDisableCd(@PathParam("id") Integer id);

    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement on the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/disable_quota")
    @Produces({ "application/json" })
    @Operation(summary = "Disable Quotas", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsDisableQuota(@PathParam("id") Integer id);

    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the VPS CD drive.
     *
     */
    @GET
    @Path("/vps/{id}/eject_cd")
    @Produces({ "application/json" })
    @Operation(summary = "Eject CD Drive", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsEjectCd(@PathParam("id") Integer id);

    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement on the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/enable_quota")
    @Produces({ "application/json" })
    @Operation(summary = "Enable Quotas", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsEnableQuota(@PathParam("id") Integer id);

    /**
     * Restart VPS
     *
     * Restarts the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/restart")
    @Produces({ "application/json" })
    @Operation(summary = "Restart VPS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsRestart(@PathParam("id") Integer id);

    /**
     * Start VPS
     *
     * Powers on the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/start")
    @Produces({ "application/json" })
    @Operation(summary = "Start VPS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsStart(@PathParam("id") Integer id);

    /**
     * Stop VPS
     *
     * Powers off the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/stop")
    @Produces({ "application/json" })
    @Operation(summary = "Stop VPS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse doVpsStop(@PathParam("id") Integer id);

    /**
     * Download VPS Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
     *
     */
    @PATCH
    @Path("/vps/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download VPS Backup", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20011 downloadVpsBackup(@Valid IdBackupsBody2 body, @PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * Download VPS Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
     *
     */
    @PATCH
    @Path("/vps/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Download VPS Backup", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Download URL for the backup file.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20011.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20011 downloadVpsBackup(@Multipart(value = "file")  String file, @PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * VPS Ordering Information
     *
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     *
     */
    @GET
    @Path("/vps/order")
    @Produces({ "application/json" })
    @Operation(summary = "VPS Ordering Information", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Order information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsOrder.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsOrder getNewVps();

    /**
     * Get VPS Backups List
     *
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
     *
     */
    @GET
    @Path("/vps/{id}/backups")
    @Produces({ "application/json" })
    @Operation(summary = "Get VPS Backups List", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of the available backups", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsBackupRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsBackupRows getVpsBackups(@PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * HD Space Addon Info
     *
     * Returns available hard drive space addon options and pricing for the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/buy_hd_space")
    @Produces({ "application/json" })
    @Operation(summary = "HD Space Addon Info", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Buy HD Space information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getVpsBuyHdSpace(@PathParam("id") Integer id);

    /**
     * Additional IP Addon Info
     *
     * Returns available additional IP address options and pricing for the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/buy_ip")
    @Produces({ "application/json" })
    @Operation(summary = "Additional IP Addon Info", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Buy IP information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getVpsBuyIp(@PathParam("id") Integer id);

    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/change_timezone")
    @Produces({ "application/json" })
    @Operation(summary = "Get Timezone Info", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Change Timezone info response", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = String.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<String> getVpsChangeTimezone(@PathParam("id") Integer id);

    /**
     * Get VPS Order
     *
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     *
     */
    @GET
    @Path("/vps/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Get VPS Order", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The VPS Information", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Vps.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Vps getVpsInfo(@PathParam("id") Integer id);

    /**
     * Get VPS Invoices
     *
     * Returns the billing invoices associated with this VPS.
     *
     */
    @GET
    @Path("/vps/{id}/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get VPS Invoices", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Invoices response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ChargeInvoiceRows.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ChargeInvoiceRows getVpsInvoices(@PathParam("id") Integer id);

    /**
     * List VPS Orders
     *
     * Returns all VPS services on the account with their current status and configuration.
     *
     */
    @GET
    @Path("/vps")
    @Produces({ "application/json" })
    @Operation(summary = "List VPS Orders", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The listing of `Vps` services on your account.", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = VpsRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<VpsRow> getVpsList();

    /**
     * VPS Reinstall OS Options
     *
     * Returns the list of available OS templates for reinstalling the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/reinstall_os")
    @Produces({ "application/json" })
    @Operation(summary = "VPS Reinstall OS Options", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Reinstall OS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsTemplatesList.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsTemplatesList getVpsReinstallOs(@PathParam("id") Integer id);

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    @GET
    @Path("/vps/{id}/reverse_dns")
    @Produces({ "application/json" })
    @Operation(summary = "Reverse DNS Info", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Reverse DNS info response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = ReverseDnsEntries.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public ReverseDnsEntries getVpsReverseDns(@PathParam("id") Integer id);

    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/setup_vnc")
    @Produces({ "application/json" })
    @Operation(summary = "VNC Setup Info", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Setup VNC Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getVpsSetupVnc(@PathParam("id") Integer id);

    /**
     * Slice Upgrade Info
     *
     * Returns available slice upgrade options and pricing for the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/slices")
    @Produces({ "application/json" })
    @Operation(summary = "Slice Upgrade Info", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Slices information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getVpsSlices(@PathParam("id") Integer id);

    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/traffic_usage")
    @Produces({ "application/json" })
    @Operation(summary = "Get Traffic Usage", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS Traffic usage", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsTrafficResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsTrafficResponse getVpsTrafficUsage(@PathParam("id") Integer id);

    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the VPS.
     *
     */
    @GET
    @Path("/vps/{id}/view_desktop")
    @Produces({ "application/json" })
    @Operation(summary = "Get View Desktop Info", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Get VPS View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void getVpsViewDesktop(@PathParam("id") Integer id);

    /**
     * Resend VPS Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the VPS order.
     *
     */
    @GET
    @Path("/vps/{id}/welcome_email")
    @Produces({ "application/json" })
    @Operation(summary = "Resend VPS Welcome Email", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse getVpsWelcomeEmail(@PathParam("id") String id);

    /**
     * Start a VPS Backup
     *
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     *
     */
    @GET
    @Path("/vps/{id}/backup")
    @Produces({ "application/json" })
    @Operation(summary = "Start a VPS Backup", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsBackup(@PathParam("id") Integer id);

    /**
     * Purchase HD Space Addon
     *
     * Purchases additional hard drive space for the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/buy_hd_space")
    @Produces({ "application/json" })
    @Operation(summary = "Purchase HD Space Addon", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Post Buy HD Space for VPS response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void postVpsBuyHdSpace(@PathParam("id") Integer id);

    /**
     * Purchase Additional IP
     *
     * Purchases an additional IP address for the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/buy_ip")
    @Produces({ "application/json" })
    @Operation(summary = "Purchase Additional IP", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit VPS Buy IP form response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void postVpsBuyIp(@PathParam("id") Integer id);

    /**
     * Update VPS Hostname
     *
     * Changes the hostname of the VPS. This queues a background task to update the server.
     *
     */
    @POST
    @Path("/vps/{id}/change_hostname")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update VPS Hostname", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeHostname(@Multipart(value = "hostname")  String hostname, @PathParam("id") Integer id);

    /**
     * Update VPS Hostname
     *
     * Changes the hostname of the VPS. This queues a background task to update the server.
     *
     */
    @POST
    @Path("/vps/{id}/change_hostname")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Update VPS Hostname", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeHostname(@Valid HostnameObject body, @PathParam("id") Integer id);

    /**
     * Change VPS Root Password
     *
     * Changes the root password of the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/change_root_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Root Password", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeRootPassword(@Multipart(value = "password")  String password, @PathParam("id") Integer id);

    /**
     * Change VPS Root Password
     *
     * Changes the root password of the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/change_root_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Root Password", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeRootPassword(@Valid PasswordRequest body, @PathParam("id") Integer id);

    /**
     * Change VPS Timezone
     *
     * Changes the system timezone on the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Timezone", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeTimezone(@Multipart(value = "timezone")  String timezone, @PathParam("id") Integer id);

    /**
     * Change VPS Timezone
     *
     * Changes the system timezone on the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change VPS Timezone", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeTimezone(@Valid TimezoneUpdate body, @PathParam("id") Integer id);

    /**
     * Change Webuzo Password
     *
     * Changes the Webuzo control panel password on the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/change_webuzo_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Webuzo Password", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeWebuzoPassword(@Multipart(value = "password")  String password, @PathParam("id") Integer id);

    /**
     * Change Webuzo Password
     *
     * Changes the Webuzo control panel password on the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/change_webuzo_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Change Webuzo Password", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsChangeWebuzoPassword(@Valid PasswordRequest body, @PathParam("id") Integer id);

    /**
     * Insert CD in VPS
     *
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     *
     */
    @POST
    @Path("/vps/{id}/insert_cd")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD in VPS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsInsertCd(@Multipart(value = "url")  String url, @PathParam("id") Integer id);

    /**
     * Insert CD in VPS
     *
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     *
     */
    @POST
    @Path("/vps/{id}/insert_cd")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Insert CD in VPS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsInsertCd(@Valid UrlRequest body, @PathParam("id") Integer id);

    /**
     * Reinstall VPS OS
     *
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     *
     */
    @POST
    @Path("/vps/{id}/reinstall_os")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Reinstall VPS OS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsReinstallOs(@Multipart(value = "template")  String template, @Multipart(value = "password")  String password, @Multipart(value = "localPassword")  String localPassword, @PathParam("id") Integer id);

    /**
     * Reinstall VPS OS
     *
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     *
     */
    @POST
    @Path("/vps/{id}/reinstall_os")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @Operation(summary = "Reinstall VPS OS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsReinstallOs(@Valid TemplateRequest body, @PathParam("id") Integer id);

    /**
     * Reset VPS Password
     *
     * Resets the root password on the VPS to a new randomly generated password.
     *
     */
    @POST
    @Path("/vps/{id}/reset_password")
    @Produces({ "application/json" })
    @Operation(summary = "Reset VPS Password", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsResetPassword(@PathParam("id") Integer id);

    /**
     * Restore VPS from Backup
     *
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    @POST
    @Path("/vps/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore VPS from Backup", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsRestore(@Valid RestoreRequest body, @PathParam("id") Integer id);

    /**
     * Restore VPS from Backup
     *
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    @POST
    @Path("/vps/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Restore VPS from Backup", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "400", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsRestore(@Multipart(value = "backup")  String backup, @Multipart(value = "password")  String password, @PathParam("id") Integer id);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    @POST
    @Path("/vps/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update VPS Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postVpsReverseDns(@Valid ReverseDnsEntries body, @PathParam("id") Integer id);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    @POST
    @Path("/vps/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Reverse DNS", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update VPS Reverse DNS response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse postVpsReverseDns(@Multipart(value = "ips")  Map<String, Object> ips, @PathParam("id") Integer id);

    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/setup_vnc")
    @Produces({ "application/json" })
    @Operation(summary = "Setup VNC", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response message from sending a service queue.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = QueueResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public QueueResponse postVpsSetupVnc(@PathParam("id") Integer id);

    /**
     * Purchase Slice Upgrade
     *
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     *
     */
    @POST
    @Path("/vps/{id}/slices")
    @Produces({ "application/json" })
    @Operation(summary = "Purchase Slice Upgrade", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Update VPS slices response"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void postVpsSlices(@PathParam("id") Integer id);

    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the VPS.
     *
     */
    @POST
    @Path("/vps/{id}/view_desktop")
    @Produces({ "application/json" })
    @Operation(summary = "Update View Desktop", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Submit VPS View Desktop Information"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public void postVpsViewDesktop(@PathParam("id") Integer id);

    /**
     * Validate VPS Order
     *
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     *
     */
    @PUT
    @Path("/vps/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate VPS Order", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate VPS order response.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsOrderPutResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsOrderPutResponse putVps(@Valid VpsOrderPutRequest body);

    /**
     * Validate VPS Order
     *
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     *
     */
    @PUT
    @Path("/vps/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Validate VPS Order", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Validate VPS order response.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = VpsOrderPutResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public VpsOrderPutResponse putVps(@Multipart(value = "osDistro", required = false)  String osDistro, @Multipart(value = "slices", required = false)  Integer slices, @Multipart(value = "vpsPlatform", required = false)  String vpsPlatform, @Multipart(value = "controlpanel", required = false)  String controlpanel, @Multipart(value = "period", required = false)  Integer period, @Multipart(value = "location", required = false)  Integer location, @Multipart(value = "osVersion", required = false)  String osVersion, @Multipart(value = "hostname", required = false)  String hostname, @Multipart(value = "coupon", required = false)  String coupon, @Multipart(value = "rootpass", required = false)  String rootpass, @Multipart(value = "comment", required = false)  String comment);

    /**
     * Update VPS Order
     *
     * Updates settings on a VPS order.
     *
     */
    @POST
    @Path("/vps/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update VPS Order", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateVpsInfo(@PathParam("id") String id);

    /**
     * Cancel VPS Service
     *
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/vps/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Cancel VPS Service", tags={ "VPS" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "VPS Cancel", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse20022.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse20022 vPSCancel(@PathParam("id") Integer id);
}
