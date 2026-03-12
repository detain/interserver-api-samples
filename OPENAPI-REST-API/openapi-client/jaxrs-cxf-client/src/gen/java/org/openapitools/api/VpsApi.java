package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.DownloadQsBackup200Response;
import org.openapitools.model.DownloadQsBackupRequest;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.QueueResponse;
import org.openapitools.model.RestoreRequest;
import org.openapitools.model.ReverseDnsEntries;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;
import org.openapitools.model.VPSCancel200Response;
import org.openapitools.model.Vps;
import org.openapitools.model.VpsBackupRows;
import org.openapitools.model.VpsOrder;
import org.openapitools.model.VpsOrderPostRequest;
import org.openapitools.model.VpsOrderPutRequest;
import org.openapitools.model.VpsOrderPutResponse;
import org.openapitools.model.VpsRow;
import org.openapitools.model.VpsTemplatesList;
import org.openapitools.model.VpsTrafficResponse;

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
@Path("/vps")
@Api(value = "/", description = "")
public interface VpsApi  {

    /**
     * Place VPS Order
     *
     * Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
     *
     */
    @POST
    @Path("/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Place VPS Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void addVps(VpsOrderPostRequest vpsOrderPostRequest);

    /**
     * Delete VPS Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
     *
     */
    @DELETE
    @Path("/{id}/backups")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete VPS Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteVpsBackup(@PathParam("id") Integer id, @QueryParam("file") String _file, @QueryParam("all") String all);

    /**
     * Blocks SMTP
     *
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     *
     */
    @GET
    @Path("/{id}/block_smtp")
    @Produces({ "application/json" })
    @ApiOperation(value = "Blocks SMTP", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsBlockSmtp(@PathParam("id") Integer id);

    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive on the VPS.
     *
     */
    @GET
    @Path("/{id}/disable_cd")
    @Produces({ "application/json" })
    @ApiOperation(value = "Disable CD Drive", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsDisableCd(@PathParam("id") Integer id);

    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement on the VPS.
     *
     */
    @GET
    @Path("/{id}/disable_quota")
    @Produces({ "application/json" })
    @ApiOperation(value = "Disable Quotas", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsDisableQuota(@PathParam("id") Integer id);

    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the VPS CD drive.
     *
     */
    @GET
    @Path("/{id}/eject_cd")
    @Produces({ "application/json" })
    @ApiOperation(value = "Eject CD Drive", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsEjectCd(@PathParam("id") Integer id);

    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement on the VPS.
     *
     */
    @GET
    @Path("/{id}/enable_quota")
    @Produces({ "application/json" })
    @ApiOperation(value = "Enable Quotas", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsEnableQuota(@PathParam("id") Integer id);

    /**
     * Restart VPS
     *
     * Restarts the VPS.
     *
     */
    @GET
    @Path("/{id}/restart")
    @Produces({ "application/json" })
    @ApiOperation(value = "Restart VPS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsRestart(@PathParam("id") Integer id);

    /**
     * Start VPS
     *
     * Powers on the VPS.
     *
     */
    @GET
    @Path("/{id}/start")
    @Produces({ "application/json" })
    @ApiOperation(value = "Start VPS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsStart(@PathParam("id") Integer id);

    /**
     * Stop VPS
     *
     * Powers off the VPS.
     *
     */
    @GET
    @Path("/{id}/stop")
    @Produces({ "application/json" })
    @ApiOperation(value = "Stop VPS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doVpsStop(@PathParam("id") Integer id);

    /**
     * Download VPS Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
     *
     */
    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Download VPS Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Download URL for the backup file.", response = DownloadQsBackup200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public DownloadQsBackup200Response downloadVpsBackup(@PathParam("id") Integer id, DownloadQsBackupRequest downloadQsBackupRequest, @QueryParam("all") String all);

    /**
     * VPS Ordering Information
     *
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "VPS Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "VPS Order information", response = VpsOrder.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VpsOrder getNewVps();

    /**
     * Get VPS Backups List
     *
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
     *
     */
    @GET
    @Path("/{id}/backups")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get VPS Backups List", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of the available backups", response = VpsBackupRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VpsBackupRows getVpsBackups(@PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * HD Space Addon Info
     *
     * Returns available hard drive space addon options and pricing for the VPS.
     *
     */
    @GET
    @Path("/{id}/buy_hd_space")
    @Produces({ "application/json" })
    @ApiOperation(value = "HD Space Addon Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get VPS Buy HD Space information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getVpsBuyHdSpace(@PathParam("id") Integer id);

    /**
     * Additional IP Addon Info
     *
     * Returns available additional IP address options and pricing for the VPS.
     *
     */
    @GET
    @Path("/{id}/buy_ip")
    @Produces({ "application/json" })
    @ApiOperation(value = "Additional IP Addon Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "VPS Buy IP information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getVpsBuyIp(@PathParam("id") Integer id);

    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the VPS.
     *
     */
    @GET
    @Path("/{id}/change_timezone")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Timezone Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "VPS Change Timezone info response", response = String.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<String> getVpsChangeTimezone(@PathParam("id") Integer id);

    /**
     * Get VPS Order
     *
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get VPS Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The VPS Information", response = Vps.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Vps getVpsInfo(@PathParam("id") Integer id);

    /**
     * Get VPS Invoices
     *
     * Returns the billing invoices associated with this VPS.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get VPS Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get VPS Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getVpsInvoices(@PathParam("id") Integer id);

    /**
     * List VPS Orders
     *
     * Returns all VPS services on the account with their current status and configuration.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List VPS Orders", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `Vps` services on your account.", response = VpsRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<VpsRow> getVpsList();

    /**
     * VPS Reinstall OS Options
     *
     * Returns the list of available OS templates for reinstalling the VPS.
     *
     */
    @GET
    @Path("/{id}/reinstall_os")
    @Produces({ "application/json" })
    @ApiOperation(value = "VPS Reinstall OS Options", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "VPS Reinstall OS info response", response = VpsTemplatesList.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VpsTemplatesList getVpsReinstallOs(@PathParam("id") Integer id);

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    @GET
    @Path("/{id}/reverse_dns")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reverse DNS Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "VPS Reverse DNS info response", response = ReverseDnsEntries.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ReverseDnsEntries getVpsReverseDns(@PathParam("id") Integer id);

    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the VPS.
     *
     */
    @GET
    @Path("/{id}/setup_vnc")
    @Produces({ "application/json" })
    @ApiOperation(value = "VNC Setup Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get VPS Setup VNC Information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getVpsSetupVnc(@PathParam("id") Integer id);

    /**
     * Slice Upgrade Info
     *
     * Returns available slice upgrade options and pricing for the VPS.
     *
     */
    @GET
    @Path("/{id}/slices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Slice Upgrade Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "VPS Slices information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getVpsSlices(@PathParam("id") Integer id);

    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the VPS.
     *
     */
    @GET
    @Path("/{id}/traffic_usage")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Traffic Usage", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get VPS Traffic usage", response = VpsTrafficResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VpsTrafficResponse getVpsTrafficUsage(@PathParam("id") Integer id);

    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the VPS.
     *
     */
    @GET
    @Path("/{id}/view_desktop")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get View Desktop Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get VPS View Desktop Information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getVpsViewDesktop(@PathParam("id") Integer id);

    /**
     * Resend VPS Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the VPS order.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend VPS Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getVpsWelcomeEmail(@PathParam("id") String id);

    /**
     * Start a VPS Backup
     *
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     *
     */
    @GET
    @Path("/{id}/backup")
    @Produces({ "application/json" })
    @ApiOperation(value = "Start a VPS Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsBackup(@PathParam("id") Integer id);

    /**
     * Purchase HD Space Addon
     *
     * Purchases additional hard drive space for the VPS.
     *
     */
    @POST
    @Path("/{id}/buy_hd_space")
    @Produces({ "application/json" })
    @ApiOperation(value = "Purchase HD Space Addon", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Post Buy HD Space for VPS response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void postVpsBuyHdSpace(@PathParam("id") Integer id);

    /**
     * Purchase Additional IP
     *
     * Purchases an additional IP address for the VPS.
     *
     */
    @POST
    @Path("/{id}/buy_ip")
    @Produces({ "application/json" })
    @ApiOperation(value = "Purchase Additional IP", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Submit VPS Buy IP form response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void postVpsBuyIp(@PathParam("id") Integer id);

    /**
     * Update VPS Hostname
     *
     * Changes the hostname of the VPS. This queues a background task to update the server.
     *
     */
    @POST
    @Path("/{id}/change_hostname")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update VPS Hostname", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsChangeHostname(@PathParam("id") Integer id, @Multipart(value = "hostname", required = false)  String hostname);

    /**
     * Change VPS Root Password
     *
     * Changes the root password of the VPS.
     *
     */
    @POST
    @Path("/{id}/change_root_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Change VPS Root Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsChangeRootPassword(@PathParam("id") Integer id, @Multipart(value = "password")  String password);

    /**
     * Change VPS Timezone
     *
     * Changes the system timezone on the VPS.
     *
     */
    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Change VPS Timezone", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsChangeTimezone(@PathParam("id") Integer id, @Multipart(value = "timezone")  String timezone);

    /**
     * Change Webuzo Password
     *
     * Changes the Webuzo control panel password on the VPS.
     *
     */
    @POST
    @Path("/{id}/change_webuzo_password")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Change Webuzo Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsChangeWebuzoPassword(@PathParam("id") Integer id, @Multipart(value = "password")  String password);

    /**
     * Insert CD in VPS
     *
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     *
     */
    @POST
    @Path("/{id}/insert_cd")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Insert CD in VPS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsInsertCd(@PathParam("id") Integer id, @Multipart(value = "url", required = false)  String url);

    /**
     * Reinstall VPS OS
     *
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     *
     */
    @POST
    @Path("/{id}/reinstall_os")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Reinstall VPS OS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsReinstallOs(@PathParam("id") Integer id, @Multipart(value = "template")  String template, @Multipart(value = "localPassword")  String localPassword, @Multipart(value = "password", required = false)  String password);

    /**
     * Reset VPS Password
     *
     * Resets the root password on the VPS to a new randomly generated password.
     *
     */
    @POST
    @Path("/{id}/reset_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reset VPS Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsResetPassword(@PathParam("id") Integer id);

    /**
     * Restore VPS from Backup
     *
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Restore VPS from Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 400, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsRestore(@PathParam("id") Integer id, RestoreRequest restoreRequest);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Update VPS Reverse DNS response", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse postVpsReverseDns(@PathParam("id") Integer id, ReverseDnsEntries reverseDnsEntries);

    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the VPS.
     *
     */
    @POST
    @Path("/{id}/setup_vnc")
    @Produces({ "application/json" })
    @ApiOperation(value = "Setup VNC", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postVpsSetupVnc(@PathParam("id") Integer id);

    /**
     * Purchase Slice Upgrade
     *
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     *
     */
    @POST
    @Path("/{id}/slices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Purchase Slice Upgrade", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Update VPS slices response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void postVpsSlices(@PathParam("id") Integer id);

    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the VPS.
     *
     */
    @POST
    @Path("/{id}/view_desktop")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update View Desktop", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Submit VPS View Desktop Information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void postVpsViewDesktop(@PathParam("id") Integer id);

    /**
     * Validate VPS Order
     *
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     *
     */
    @PUT
    @Path("/order")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate VPS Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate VPS order response.", response = VpsOrderPutResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VpsOrderPutResponse putVps(VpsOrderPutRequest vpsOrderPutRequest);

    /**
     * Update VPS Order
     *
     * Updates settings on a VPS order.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update VPS Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void updateVpsInfo(@PathParam("id") String id);

    /**
     * Cancel VPS Service
     *
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel VPS Service", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "VPS Cancel", response = VPSCancel200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VPSCancel200Response vPSCancel(@PathParam("id") Integer id);
}
