package io.swagger.api.impl;

import io.swagger.api.*;
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
import org.apache.cxf.jaxrs.model.wadl.Description;
import org.apache.cxf.jaxrs.model.wadl.DocTarget;

import org.apache.cxf.jaxrs.ext.multipart.*;


/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
public class QuickServersApiServiceImpl implements QuickServersApi {
    /**
     * Place QuickServer Order
     *
     * Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     *
     */
    public ServiceOrderPostResponse addQs() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Delete QuickServer Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
     *
     */
    public SuccessTextResponse deleteQsBackup(Integer id, String file, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Block QuickServer SMTP
     *
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     *
     */
    public QueueResponse doQsBlockSmtp(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive for the QuickServer.
     *
     */
    public QueueResponse doQsDisableCd(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement for the QuickServer.
     *
     */
    public QueueResponse doQsDisableQuota(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the QuickServer&#x27;s CD drive.
     *
     */
    public QueueResponse doQsEjectCd(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement for the QuickServer.
     *
     */
    public QueueResponse doQsEnableQuota(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Restart QuickServer
     *
     * Restarts the QuickServer. The server will be shut down and started again.
     *
     */
    public QueueResponse doQsRestart(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Start QuickServer
     *
     * Powers on the QuickServer.
     *
     */
    public QueueResponse doQsStart(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Stop QuickServer
     *
     * Powers off the QuickServer.
     *
     */
    public QueueResponse doQsStop(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Download QuickServer Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
     *
     */
    public InlineResponse20011 downloadQsBackup(IdBackupsBody body, Integer id, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Download QuickServer Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
     *
     */
    public InlineResponse20011 downloadQsBackup(String file, Integer id, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get QuickServer Ordering Information
     *
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     *
     */
    public QuickserverOrder getNewQs() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * List QuickServer Backups
     *
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
     *
     */
    public VpsBackupRows getQsBackups(Integer id, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get QuickServer Hostname
     *
     * Retrieves the current hostname and any validation requirements for changing it.
     *
     */
    public void getQsChangeHostname(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get Change Root Password Info
     *
     * Retrieves instructions or metadata needed to reset the root password.
     *
     */
    public void getQsChangeRootPassword(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the QuickServer.
     *
     */
    public List<String> getQsChangeTimezone(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Webuzo Change Pass Info
     *
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     *
     */
    public void getQsChangeWebuzoPassword(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get QuickServer Order
     *
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     *
     */
    public Quickserver getQsInfo(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Insert CD Information
     *
     * Returns available ISO images that can be mounted in the QuickServer&#x27;s virtual CD drive.
     *
     */
    public void getQsInsertCd(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get QuickServer Invoices
     *
     * Returns the billing invoices associated with this QuickServer.
     *
     */
    public ChargeInvoiceRows getQsInvoices(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * List QuickServers
     *
     * Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
     *
     */
    public List<QuickserverRow> getQsList() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * QuickServer Reinstall OS Options
     *
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     *
     */
    public VpsTemplatesList getQsReinstallOs(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reset QuickServer Password Info
     *
     * Returns information needed before resetting the QuickServer&#x27;s root password.
     *
     */
    public void getQsResetPassword(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
     *
     */
    public ReverseDnsEntries getQsReverseDns(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the QuickServer.
     *
     */
    public void getQsSetupVnc(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the QuickServer.
     *
     */
    public void getQsTrafficUsage(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the QuickServer.
     *
     */
    public void getQsViewDesktop(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Resend QuickServer Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     *
     */
    public TextResponse getQsWelcomeEmail(String id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Create QuickServer Backup
     *
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     *
     */
    public QueueResponse postQsBackup(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update QuickServer Hostname
     *
     * Submits a hostname change request for the QuickServer.
     *
     */
    public QueueResponse postQsChangeHostname(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change Root Password
     *
     * Triggers a root password reset for the QuickServer.
     *
     */
    public QueueResponse postQsChangeRootPassword(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change QuickServer Timezone
     *
     * Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
     *
     */
    public QueueResponse postQsChangeTimezone(String timezone, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change QuickServer Timezone
     *
     * Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
     *
     */
    public QueueResponse postQsChangeTimezone(TimezoneUpdate body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change Webuzo Password
     *
     * Resets the Webuzo control panel password for the QuickServer.
     *
     */
    public QueueResponse postQsChangeWebuzoPassword(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Insert CD in QuickServer
     *
     * Mounts an ISO image in the QuickServer&#x27;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
     *
     */
    public QueueResponse postQsInsertCd(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reinstall QuickServer OS
     *
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     *
     */
    public QueueResponse postQsReinstallOs(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reset QuickServer Password
     *
     * Resets the root password on the QuickServer to a new randomly generated password.
     *
     */
    public QueueResponse postQsResetPassword(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
     *
     */
    public TextResponse postQsReverseDns(ReverseDnsEntries body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
     *
     */
    public TextResponse postQsReverseDns(Map<String, Object> ips, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the QuickServer.
     *
     */
    public QueueResponse postQsSetupVnc(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Search Traffic Usage
     *
     * Searches and filters the QuickServer&#x27;s bandwidth traffic usage data by date range.
     *
     */
    public void postQsTrafficUsage(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the QuickServer.
     *
     */
    public void postQsViewDesktop(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Restore QuickServer from Backup
     *
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    public QueueResponse postQuickServerRestore(RestoreRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Restore QuickServer from Backup
     *
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    public QueueResponse postQuickServerRestore(String backup, String password, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Validate QuickServer Order
     *
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     *
     */
    public void putQs() {
        // TODO: Implement...
        
        
    }
    
    /**
     * Cancel QuickServer Order
     *
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    public InlineResponse20010 quickserversCancel(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update QuickServer Order
     *
     * Updates QuickServer metadata or stored settings associated with the order.
     *
     */
    public SuccessTextResponse updateQsInfo(String id) {
        // TODO: Implement...
        
        return null;
    }
    
}

