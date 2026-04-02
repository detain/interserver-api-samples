package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.DownloadQsBackup200Response;
import org.openapitools.model.DownloadQsBackupRequest;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.QueueResponse;
import org.openapitools.model.Quickserver;
import org.openapitools.model.QuickserverOrder;
import org.openapitools.model.QuickserverRow;
import org.openapitools.model.QuickserversCancel200Response;
import org.openapitools.model.RestoreRequest;
import org.openapitools.model.ReverseDnsEntries;
import org.openapitools.model.ServiceOrderPostResponse;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;
import org.openapitools.model.VpsBackupRows;
import org.openapitools.model.VpsTemplatesList;

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
@Path("/qs")
@Api(value = "/", description = "")
public interface QuickServersApi  {

    /**
     * Place QuickServer Order
     *
     * Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     *
     */
    @POST
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Place QuickServer Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Order placed successfully. Use the invoice ID to proceed to payment via `/pay/{method}/{invoices}` or view the invoice at `/billing/invoices/{id}`.", response = ServiceOrderPostResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ServiceOrderPostResponse addQs();

    /**
     * Delete QuickServer Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
     *
     */
    @DELETE
    @Path("/{id}/backups")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete QuickServer Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteQsBackup(@PathParam("id") Integer id, @QueryParam("file") String _file, @QueryParam("all") String all);

    /**
     * Block QuickServer SMTP
     *
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     *
     */
    @GET
    @Path("/{id}/block_smtp")
    @Produces({ "application/json" })
    @ApiOperation(value = "Block QuickServer SMTP", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsBlockSmtp(@PathParam("id") Integer id);

    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive for the QuickServer.
     *
     */
    @GET
    @Path("/{id}/disable_cd")
    @Produces({ "application/json" })
    @ApiOperation(value = "Disable CD Drive", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsDisableCd(@PathParam("id") Integer id);

    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement for the QuickServer.
     *
     */
    @GET
    @Path("/{id}/disable_quota")
    @Produces({ "application/json" })
    @ApiOperation(value = "Disable Quotas", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsDisableQuota(@PathParam("id") Integer id);

    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the QuickServer&#39;s CD drive.
     *
     */
    @GET
    @Path("/{id}/eject_cd")
    @Produces({ "application/json" })
    @ApiOperation(value = "Eject CD Drive", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsEjectCd(@PathParam("id") Integer id);

    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement for the QuickServer.
     *
     */
    @GET
    @Path("/{id}/enable_quota")
    @Produces({ "application/json" })
    @ApiOperation(value = "Enable Quotas", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsEnableQuota(@PathParam("id") Integer id);

    /**
     * Restart QuickServer
     *
     * Restarts the QuickServer. The server will be shut down and started again.
     *
     */
    @GET
    @Path("/{id}/restart")
    @Produces({ "application/json" })
    @ApiOperation(value = "Restart QuickServer", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsRestart(@PathParam("id") Integer id);

    /**
     * Start QuickServer
     *
     * Powers on the QuickServer.
     *
     */
    @GET
    @Path("/{id}/start")
    @Produces({ "application/json" })
    @ApiOperation(value = "Start QuickServer", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsStart(@PathParam("id") Integer id);

    /**
     * Stop QuickServer
     *
     * Powers off the QuickServer.
     *
     */
    @GET
    @Path("/{id}/stop")
    @Produces({ "application/json" })
    @ApiOperation(value = "Stop QuickServer", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse doQsStop(@PathParam("id") Integer id);

    /**
     * Download QuickServer Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
     *
     */
    @PATCH
    @Path("/{id}/backups")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Download QuickServer Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Download URL for the backup file.", response = DownloadQsBackup200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public DownloadQsBackup200Response downloadQsBackup(@PathParam("id") Integer id, DownloadQsBackupRequest downloadQsBackupRequest, @QueryParam("all") String all);

    /**
     * Get QuickServer Ordering Information
     *
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     *
     */
    @GET
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get QuickServer Ordering Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Quickserver Ordering information.", response = QuickserverOrder.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QuickserverOrder getNewQs();

    /**
     * List QuickServer Backups
     *
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
     *
     */
    @GET
    @Path("/{id}/backups")
    @Produces({ "application/json" })
    @ApiOperation(value = "List QuickServer Backups", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of available backups for the QuickServer.", response = VpsBackupRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VpsBackupRows getQsBackups(@PathParam("id") Integer id, @QueryParam("all") String all);

    /**
     * Get QuickServer Hostname
     *
     * Retrieves the current hostname and any validation requirements for changing it.
     *
     */
    @GET
    @Path("/{id}/change_hostname")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get QuickServer Hostname", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Change Hostname info response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsChangeHostname(@PathParam("id") Integer id);

    /**
     * Get Change Root Password Info
     *
     * Retrieves instructions or metadata needed to reset the root password.
     *
     */
    @GET
    @Path("/{id}/change_root_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Change Root Password Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Change Root Password response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsChangeRootPassword(@PathParam("id") Integer id);

    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the QuickServer.
     *
     */
    @GET
    @Path("/{id}/change_timezone")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Timezone Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Change Timezone info response", response = String.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<String> getQsChangeTimezone(@PathParam("id") Integer id);

    /**
     * Webuzo Change Pass Info
     *
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     *
     */
    @GET
    @Path("/{id}/change_webuzo_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Webuzo Change Pass Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Change Webuzo Password info response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsChangeWebuzoPassword(@PathParam("id") Integer id);

    /**
     * Get QuickServer Order
     *
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     *
     */
    @GET
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get QuickServer Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Quickserver details", response = Quickserver.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public Quickserver getQsInfo(@PathParam("id") Integer id);

    /**
     * Insert CD Information
     *
     * Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.
     *
     */
    @GET
    @Path("/{id}/insert_cd")
    @Produces({ "application/json" })
    @ApiOperation(value = "Insert CD Information", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Insert CD info response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsInsertCd(@PathParam("id") Integer id);

    /**
     * Get QuickServer Invoices
     *
     * Returns the billing invoices associated with this QuickServer.
     *
     */
    @GET
    @Path("/{id}/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get QuickServer Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get Invoices response", response = ChargeInvoiceRows.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ChargeInvoiceRows getQsInvoices(@PathParam("id") Integer id);

    /**
     * List QuickServers
     *
     * Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
     *
     */
    @GET
    
    @Produces({ "application/json" })
    @ApiOperation(value = "List QuickServers", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The listing of `Quickservers` services on your account.", response = QuickserverRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<QuickserverRow> getQsList();

    /**
     * QuickServer Reinstall OS Options
     *
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     *
     */
    @GET
    @Path("/{id}/reinstall_os")
    @Produces({ "application/json" })
    @ApiOperation(value = "QuickServer Reinstall OS Options", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Reinstall OS info response", response = VpsTemplatesList.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public VpsTemplatesList getQsReinstallOs(@PathParam("id") Integer id);

    /**
     * Reset QuickServer Password Info
     *
     * Returns information needed before resetting the QuickServer&#39;s root password.
     *
     */
    @GET
    @Path("/{id}/reset_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reset QuickServer Password Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Reset password info"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsResetPassword(@PathParam("id") Integer id);

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.
     *
     */
    @GET
    @Path("/{id}/reverse_dns")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reverse DNS Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "QuickServer Reverse DNS info response", response = ReverseDnsEntries.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public ReverseDnsEntries getQsReverseDns(@PathParam("id") Integer id);

    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the QuickServer.
     *
     */
    @GET
    @Path("/{id}/setup_vnc")
    @Produces({ "application/json" })
    @ApiOperation(value = "VNC Setup Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get QuickServer Setup VNC Information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsSetupVnc(@PathParam("id") Integer id);

    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the QuickServer.
     *
     */
    @GET
    @Path("/{id}/traffic_usage")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Traffic Usage", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get QuickServer Traffic usage"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsTrafficUsage(@PathParam("id") Integer id);

    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the QuickServer.
     *
     */
    @GET
    @Path("/{id}/view_desktop")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get View Desktop Info", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Get QuickServer View Desktop Information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void getQsViewDesktop(@PathParam("id") Integer id);

    /**
     * Resend QuickServer Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     *
     */
    @GET
    @Path("/{id}/welcome_email")
    @Produces({ "application/json" })
    @ApiOperation(value = "Resend QuickServer Welcome Email", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse getQsWelcomeEmail(@PathParam("id") String id);

    /**
     * Create QuickServer Backup
     *
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     *
     */
    @POST
    @Path("/{id}/backup")
    @Produces({ "application/json" })
    @ApiOperation(value = "Create QuickServer Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsBackup(@PathParam("id") Integer id);

    /**
     * Update QuickServer Hostname
     *
     * Submits a hostname change request for the QuickServer.
     *
     */
    @POST
    @Path("/{id}/change_hostname")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update QuickServer Hostname", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsChangeHostname(@PathParam("id") Integer id);

    /**
     * Change Root Password
     *
     * Triggers a root password reset for the QuickServer.
     *
     */
    @POST
    @Path("/{id}/change_root_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Change Root Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsChangeRootPassword(@PathParam("id") Integer id);

    /**
     * Change QuickServer Timezone
     *
     * Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
     *
     */
    @POST
    @Path("/{id}/change_timezone")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Change QuickServer Timezone", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsChangeTimezone(@PathParam("id") Integer id, @Multipart(value = "timezone")  String timezone);

    /**
     * Change Webuzo Password
     *
     * Resets the Webuzo control panel password for the QuickServer.
     *
     */
    @POST
    @Path("/{id}/change_webuzo_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Change Webuzo Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsChangeWebuzoPassword(@PathParam("id") Integer id);

    /**
     * Insert CD in QuickServer
     *
     * Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
     *
     */
    @POST
    @Path("/{id}/insert_cd")
    @Produces({ "application/json" })
    @ApiOperation(value = "Insert CD in QuickServer", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsInsertCd(@PathParam("id") Integer id);

    /**
     * Reinstall QuickServer OS
     *
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     *
     */
    @POST
    @Path("/{id}/reinstall_os")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reinstall QuickServer OS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsReinstallOs(@PathParam("id") Integer id);

    /**
     * Reset QuickServer Password
     *
     * Resets the root password on the QuickServer to a new randomly generated password.
     *
     */
    @POST
    @Path("/{id}/reset_password")
    @Produces({ "application/json" })
    @ApiOperation(value = "Reset QuickServer Password", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsResetPassword(@PathParam("id") Integer id);

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.
     *
     */
    @POST
    @Path("/{id}/reverse_dns")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Reverse DNS", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Update QuickServer Reverse DNS response", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse postQsReverseDns(@PathParam("id") Integer id, ReverseDnsEntries reverseDnsEntries);

    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the QuickServer.
     *
     */
    @POST
    @Path("/{id}/setup_vnc")
    @Produces({ "application/json" })
    @ApiOperation(value = "Setup VNC", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQsSetupVnc(@PathParam("id") Integer id);

    /**
     * Search Traffic Usage
     *
     * Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.
     *
     */
    @POST
    @Path("/{id}/traffic_usage")
    @Produces({ "application/json" })
    @ApiOperation(value = "Search Traffic Usage", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Submit QuickServer Traffic Usage"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void postQsTrafficUsage(@PathParam("id") Integer id);

    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the QuickServer.
     *
     */
    @POST
    @Path("/{id}/view_desktop")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update View Desktop", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Submit QuickServer View Desktop Information"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void postQsViewDesktop(@PathParam("id") Integer id);

    /**
     * Restore QuickServer from Backup
     *
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    @POST
    @Path("/{id}/restore")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Restore QuickServer from Backup", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response message from sending a service queue.", response = QueueResponse.class),
        @ApiResponse(code = 400, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QueueResponse postQuickServerRestore(@PathParam("id") Integer id, RestoreRequest restoreRequest);

    /**
     * Validate QuickServer Order
     *
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     *
     */
    @PUT
    @Path("/order")
    @Produces({ "application/json" })
    @ApiOperation(value = "Validate QuickServer Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Validate QuickServer Order response"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public void putQs();

    /**
     * Cancel QuickServer Order
     *
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    @DELETE
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Cancel QuickServer Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Rapid Deploy Servers Cancel", response = QuickserversCancel200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public QuickserversCancel200Response quickserversCancel(@PathParam("id") Integer id);

    /**
     * Update QuickServer Order
     *
     * Updates QuickServer metadata or stored settings associated with the order.
     *
     */
    @POST
    @Path("/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update QuickServer Order", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateQsInfo(@PathParam("id") String id);
}
