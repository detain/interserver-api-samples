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
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Disabled;
import jakarta.inject.Inject;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;

/**
 * API tests for QuickServersApi
 */
@MicronautTest
public class QuickServersApiTest {

    @Inject
    QuickServersApi api;

    
    /**
     * Place QuickServer Order
     *
     * Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     */
    @Test
    @Disabled("Not Implemented")
    public void addQsTest() {
        // given

        // when
        ServiceOrderPostResponse body = api.addQs().block();

        // then
        // TODO implement the addQsTest()
    }

    
    /**
     * Delete QuickServer Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteQsBackupTest() {
        // given
        Integer id = 56;
        String _file = "example";
        String all = "example";

        // when
        SuccessTextResponse body = api.deleteQsBackup(id, _file, all).block();

        // then
        // TODO implement the deleteQsBackupTest()
    }

    
    /**
     * Block QuickServer SMTP
     *
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsBlockSmtpTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsBlockSmtp(id).block();

        // then
        // TODO implement the doQsBlockSmtpTest()
    }

    
    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsDisableCdTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsDisableCd(id).block();

        // then
        // TODO implement the doQsDisableCdTest()
    }

    
    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsDisableQuotaTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsDisableQuota(id).block();

        // then
        // TODO implement the doQsDisableQuotaTest()
    }

    
    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the QuickServer&#39;s CD drive.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsEjectCdTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsEjectCd(id).block();

        // then
        // TODO implement the doQsEjectCdTest()
    }

    
    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsEnableQuotaTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsEnableQuota(id).block();

        // then
        // TODO implement the doQsEnableQuotaTest()
    }

    
    /**
     * Restart QuickServer
     *
     * Restarts the QuickServer. The server will be shut down and started again.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsRestartTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsRestart(id).block();

        // then
        // TODO implement the doQsRestartTest()
    }

    
    /**
     * Start QuickServer
     *
     * Powers on the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsStartTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsStart(id).block();

        // then
        // TODO implement the doQsStartTest()
    }

    
    /**
     * Stop QuickServer
     *
     * Powers off the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void doQsStopTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doQsStop(id).block();

        // then
        // TODO implement the doQsStopTest()
    }

    
    /**
     * Download QuickServer Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
     */
    @Test
    @Disabled("Not Implemented")
    public void downloadQsBackupTest() {
        // given
        Integer id = 56;
        DownloadQsBackupRequest downloadQsBackupRequest = new DownloadQsBackupRequest("example");
        String all = "example";

        // when
        DownloadQsBackup200Response body = api.downloadQsBackup(id, downloadQsBackupRequest, all).block();

        // then
        // TODO implement the downloadQsBackupTest()
    }

    
    /**
     * Get QuickServer Ordering Information
     *
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewQsTest() {
        // given

        // when
        QuickserverOrder body = api.getNewQs().block();

        // then
        // TODO implement the getNewQsTest()
    }

    
    /**
     * List QuickServer Backups
     *
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsBackupsTest() {
        // given
        Integer id = 56;
        String all = "example";

        // when
        VpsBackupRows body = api.getQsBackups(id, all).block();

        // then
        // TODO implement the getQsBackupsTest()
    }

    
    /**
     * Get QuickServer Hostname
     *
     * Retrieves the current hostname and any validation requirements for changing it.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsChangeHostnameTest() {
        // given
        Integer id = 56;

        // when
        api.getQsChangeHostname(id).block();

        // then
        // TODO implement the getQsChangeHostnameTest()
    }

    
    /**
     * Get Change Root Password Info
     *
     * Retrieves instructions or metadata needed to reset the root password.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsChangeRootPasswordTest() {
        // given
        Integer id = 56;

        // when
        api.getQsChangeRootPassword(id).block();

        // then
        // TODO implement the getQsChangeRootPasswordTest()
    }

    
    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsChangeTimezoneTest() {
        // given
        Integer id = 56;

        // when
        List<String> body = api.getQsChangeTimezone(id).block();

        // then
        // TODO implement the getQsChangeTimezoneTest()
    }

    
    /**
     * Webuzo Change Pass Info
     *
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsChangeWebuzoPasswordTest() {
        // given
        Integer id = 56;

        // when
        api.getQsChangeWebuzoPassword(id).block();

        // then
        // TODO implement the getQsChangeWebuzoPasswordTest()
    }

    
    /**
     * Get QuickServer Order
     *
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsInfoTest() {
        // given
        Integer id = 56;

        // when
        Quickserver body = api.getQsInfo(id).block();

        // then
        // TODO implement the getQsInfoTest()
    }

    
    /**
     * Insert CD Information
     *
     * Returns available ISO images that can be mounted in the QuickServer&#39;s virtual CD drive.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsInsertCdTest() {
        // given
        Integer id = 56;

        // when
        api.getQsInsertCd(id).block();

        // then
        // TODO implement the getQsInsertCdTest()
    }

    
    /**
     * Get QuickServer Invoices
     *
     * Returns the billing invoices associated with this QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getQsInvoices(id).block();

        // then
        // TODO implement the getQsInvoicesTest()
    }

    
    /**
     * List QuickServers
     *
     * Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsListTest() {
        // given

        // when
        List<QuickserverRow> body = api.getQsList().block();

        // then
        // TODO implement the getQsListTest()
    }

    
    /**
     * QuickServer Reinstall OS Options
     *
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsReinstallOsTest() {
        // given
        Integer id = 56;

        // when
        VpsTemplatesList body = api.getQsReinstallOs(id).block();

        // then
        // TODO implement the getQsReinstallOsTest()
    }

    
    /**
     * Reset QuickServer Password Info
     *
     * Returns information needed before resetting the QuickServer&#39;s root password.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsResetPasswordTest() {
        // given
        Integer id = 56;

        // when
        api.getQsResetPassword(id).block();

        // then
        // TODO implement the getQsResetPasswordTest()
    }

    
    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsReverseDnsTest() {
        // given
        Integer id = 56;

        // when
        ReverseDnsEntries body = api.getQsReverseDns(id).block();

        // then
        // TODO implement the getQsReverseDnsTest()
    }

    
    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsSetupVncTest() {
        // given
        Integer id = 56;

        // when
        api.getQsSetupVnc(id).block();

        // then
        // TODO implement the getQsSetupVncTest()
    }

    
    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsTrafficUsageTest() {
        // given
        Integer id = 56;

        // when
        api.getQsTrafficUsage(id).block();

        // then
        // TODO implement the getQsTrafficUsageTest()
    }

    
    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsViewDesktopTest() {
        // given
        Integer id = 56;

        // when
        api.getQsViewDesktop(id).block();

        // then
        // TODO implement the getQsViewDesktopTest()
    }

    
    /**
     * Resend QuickServer Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     */
    @Test
    @Disabled("Not Implemented")
    public void getQsWelcomeEmailTest() {
        // given
        String id = "133123";

        // when
        TextResponse body = api.getQsWelcomeEmail(id).block();

        // then
        // TODO implement the getQsWelcomeEmailTest()
    }

    
    /**
     * Create QuickServer Backup
     *
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsBackupTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsBackup(id).block();

        // then
        // TODO implement the postQsBackupTest()
    }

    
    /**
     * Update QuickServer Hostname
     *
     * Submits a hostname change request for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsChangeHostnameTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsChangeHostname(id).block();

        // then
        // TODO implement the postQsChangeHostnameTest()
    }

    
    /**
     * Change Root Password
     *
     * Triggers a root password reset for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsChangeRootPasswordTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsChangeRootPassword(id).block();

        // then
        // TODO implement the postQsChangeRootPasswordTest()
    }

    
    /**
     * Change QuickServer Timezone
     *
     * Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsChangeTimezoneTest() {
        // given
        Integer id = 56;
        String timezone = "example";

        // when
        QueueResponse body = api.postQsChangeTimezone(id, timezone).block();

        // then
        // TODO implement the postQsChangeTimezoneTest()
    }

    
    /**
     * Change Webuzo Password
     *
     * Resets the Webuzo control panel password for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsChangeWebuzoPasswordTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsChangeWebuzoPassword(id).block();

        // then
        // TODO implement the postQsChangeWebuzoPasswordTest()
    }

    
    /**
     * Insert CD in QuickServer
     *
     * Mounts an ISO image in the QuickServer&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsInsertCdTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsInsertCd(id).block();

        // then
        // TODO implement the postQsInsertCdTest()
    }

    
    /**
     * Reinstall QuickServer OS
     *
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsReinstallOsTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsReinstallOs(id).block();

        // then
        // TODO implement the postQsReinstallOsTest()
    }

    
    /**
     * Reset QuickServer Password
     *
     * Resets the root password on the QuickServer to a new randomly generated password.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsResetPasswordTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsResetPassword(id).block();

        // then
        // TODO implement the postQsResetPasswordTest()
    }

    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the QuickServer&#39;s IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsReverseDnsTest() {
        // given
        Integer id = 56;
        ReverseDnsEntries reverseDnsEntries = new ReverseDnsEntries();

        // when
        TextResponse body = api.postQsReverseDns(id, reverseDnsEntries).block();

        // then
        // TODO implement the postQsReverseDnsTest()
    }

    
    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsSetupVncTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postQsSetupVnc(id).block();

        // then
        // TODO implement the postQsSetupVncTest()
    }

    
    /**
     * Search Traffic Usage
     *
     * Searches and filters the QuickServer&#39;s bandwidth traffic usage data by date range.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsTrafficUsageTest() {
        // given
        Integer id = 56;

        // when
        api.postQsTrafficUsage(id).block();

        // then
        // TODO implement the postQsTrafficUsageTest()
    }

    
    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the QuickServer.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQsViewDesktopTest() {
        // given
        Integer id = 56;

        // when
        api.postQsViewDesktop(id).block();

        // then
        // TODO implement the postQsViewDesktopTest()
    }

    
    /**
     * Restore QuickServer from Backup
     *
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
     */
    @Test
    @Disabled("Not Implemented")
    public void postQuickServerRestoreTest() {
        // given
        Integer id = 56;
        RestoreRequest restoreRequest = new RestoreRequest();

        // when
        QueueResponse body = api.postQuickServerRestore(id, restoreRequest).block();

        // then
        // TODO implement the postQuickServerRestoreTest()
    }

    
    /**
     * Validate QuickServer Order
     *
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     */
    @Test
    @Disabled("Not Implemented")
    public void putQsTest() {
        // given

        // when
        api.putQs().block();

        // then
        // TODO implement the putQsTest()
    }

    
    /**
     * Cancel QuickServer Order
     *
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     */
    @Test
    @Disabled("Not Implemented")
    public void quickserversCancelTest() {
        // given
        Integer id = 56;

        // when
        QuickserversCancel200Response body = api.quickserversCancel(id).block();

        // then
        // TODO implement the quickserversCancelTest()
    }

    
    /**
     * Update QuickServer Order
     *
     * Updates QuickServer metadata or stored settings associated with the order.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateQsInfoTest() {
        // given
        String id = "example";

        // when
        SuccessTextResponse body = api.updateQsInfo(id).block();

        // then
        // TODO implement the updateQsInfoTest()
    }

    
}
