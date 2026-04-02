package io.swagger.api.impl;

import io.swagger.api.*;
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
import org.apache.cxf.jaxrs.model.wadl.Description;
import org.apache.cxf.jaxrs.model.wadl.DocTarget;

import org.apache.cxf.jaxrs.ext.multipart.*;


/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
public class VpsApiServiceImpl implements VpsApi {
    /**
     * Place VPS Order
     *
     * Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
     *
     */
    public ServiceOrderPostResponse addVps(VpsOrderPostRequest body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Place VPS Order
     *
     * Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
     *
     */
    public ServiceOrderPostResponse addVps(String osDistro, Integer slices, String vpsPlatform, String controlpanel, Integer period, Integer location, String osVersion, String hostname, String coupon, String rootpass, String comment) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Delete VPS Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
     *
     */
    public SuccessTextResponse deleteVpsBackup(Integer id, String file, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Blocks SMTP
     *
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     *
     */
    public QueueResponse doVpsBlockSmtp(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive on the VPS.
     *
     */
    public QueueResponse doVpsDisableCd(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement on the VPS.
     *
     */
    public QueueResponse doVpsDisableQuota(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the VPS CD drive.
     *
     */
    public QueueResponse doVpsEjectCd(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement on the VPS.
     *
     */
    public QueueResponse doVpsEnableQuota(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Restart VPS
     *
     * Restarts the VPS.
     *
     */
    public QueueResponse doVpsRestart(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Start VPS
     *
     * Powers on the VPS.
     *
     */
    public QueueResponse doVpsStart(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Stop VPS
     *
     * Powers off the VPS.
     *
     */
    public QueueResponse doVpsStop(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Download VPS Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
     *
     */
    public InlineResponse20011 downloadVpsBackup(IdBackupsBody2 body, Integer id, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Download VPS Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
     *
     */
    public InlineResponse20011 downloadVpsBackup(String file, Integer id, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * VPS Ordering Information
     *
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     *
     */
    public VpsOrder getNewVps() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get VPS Backups List
     *
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
     *
     */
    public VpsBackupRows getVpsBackups(Integer id, String all) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * HD Space Addon Info
     *
     * Returns available hard drive space addon options and pricing for the VPS.
     *
     */
    public void getVpsBuyHdSpace(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Additional IP Addon Info
     *
     * Returns available additional IP address options and pricing for the VPS.
     *
     */
    public void getVpsBuyIp(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the VPS.
     *
     */
    public List<String> getVpsChangeTimezone(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get VPS Order
     *
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     *
     */
    public Vps getVpsInfo(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get VPS Invoices
     *
     * Returns the billing invoices associated with this VPS.
     *
     */
    public ChargeInvoiceRows getVpsInvoices(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * List VPS Orders
     *
     * Returns all VPS services on the account with their current status and configuration.
     *
     */
    public List<VpsRow> getVpsList() {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * VPS Reinstall OS Options
     *
     * Returns the list of available OS templates for reinstalling the VPS.
     *
     */
    public VpsTemplatesList getVpsReinstallOs(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    public ReverseDnsEntries getVpsReverseDns(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the VPS.
     *
     */
    public void getVpsSetupVnc(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Slice Upgrade Info
     *
     * Returns available slice upgrade options and pricing for the VPS.
     *
     */
    public void getVpsSlices(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the VPS.
     *
     */
    public VpsTrafficResponse getVpsTrafficUsage(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the VPS.
     *
     */
    public void getVpsViewDesktop(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Resend VPS Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the VPS order.
     *
     */
    public SuccessTextResponse getVpsWelcomeEmail(String id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Start a VPS Backup
     *
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     *
     */
    public QueueResponse postVpsBackup(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Purchase HD Space Addon
     *
     * Purchases additional hard drive space for the VPS.
     *
     */
    public void postVpsBuyHdSpace(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Purchase Additional IP
     *
     * Purchases an additional IP address for the VPS.
     *
     */
    public void postVpsBuyIp(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Update VPS Hostname
     *
     * Changes the hostname of the VPS. This queues a background task to update the server.
     *
     */
    public QueueResponse postVpsChangeHostname(String hostname, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update VPS Hostname
     *
     * Changes the hostname of the VPS. This queues a background task to update the server.
     *
     */
    public QueueResponse postVpsChangeHostname(HostnameObject body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change VPS Root Password
     *
     * Changes the root password of the VPS.
     *
     */
    public QueueResponse postVpsChangeRootPassword(String password, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change VPS Root Password
     *
     * Changes the root password of the VPS.
     *
     */
    public QueueResponse postVpsChangeRootPassword(PasswordRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change VPS Timezone
     *
     * Changes the system timezone on the VPS.
     *
     */
    public QueueResponse postVpsChangeTimezone(String timezone, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change VPS Timezone
     *
     * Changes the system timezone on the VPS.
     *
     */
    public QueueResponse postVpsChangeTimezone(TimezoneUpdate body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change Webuzo Password
     *
     * Changes the Webuzo control panel password on the VPS.
     *
     */
    public QueueResponse postVpsChangeWebuzoPassword(String password, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Change Webuzo Password
     *
     * Changes the Webuzo control panel password on the VPS.
     *
     */
    public QueueResponse postVpsChangeWebuzoPassword(PasswordRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Insert CD in VPS
     *
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     *
     */
    public QueueResponse postVpsInsertCd(String url, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Insert CD in VPS
     *
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     *
     */
    public QueueResponse postVpsInsertCd(UrlRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reinstall VPS OS
     *
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     *
     */
    public QueueResponse postVpsReinstallOs(String template, String password, String localPassword, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reinstall VPS OS
     *
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     *
     */
    public QueueResponse postVpsReinstallOs(TemplateRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Reset VPS Password
     *
     * Resets the root password on the VPS to a new randomly generated password.
     *
     */
    public QueueResponse postVpsResetPassword(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Restore VPS from Backup
     *
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    public QueueResponse postVpsRestore(RestoreRequest body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Restore VPS from Backup
     *
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
     *
     */
    public QueueResponse postVpsRestore(String backup, String password, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    public TextResponse postVpsReverseDns(ReverseDnsEntries body, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     *
     */
    public TextResponse postVpsReverseDns(Map<String, Object> ips, Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the VPS.
     *
     */
    public QueueResponse postVpsSetupVnc(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Purchase Slice Upgrade
     *
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     *
     */
    public void postVpsSlices(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the VPS.
     *
     */
    public void postVpsViewDesktop(Integer id) {
        // TODO: Implement...
        
        
    }
    
    /**
     * Validate VPS Order
     *
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     *
     */
    public VpsOrderPutResponse putVps(VpsOrderPutRequest body) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Validate VPS Order
     *
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     *
     */
    public VpsOrderPutResponse putVps(String osDistro, Integer slices, String vpsPlatform, String controlpanel, Integer period, Integer location, String osVersion, String hostname, String coupon, String rootpass, String comment) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Update VPS Order
     *
     * Updates settings on a VPS order.
     *
     */
    public SuccessTextResponse updateVpsInfo(String id) {
        // TODO: Implement...
        
        return null;
    }
    
    /**
     * Cancel VPS Service
     *
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     *
     */
    public InlineResponse20022 vPSCancel(Integer id) {
        // TODO: Implement...
        
        return null;
    }
    
}

