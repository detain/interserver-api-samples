package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.DownloadQsBackup200Response;
import org.openapitools.model.DownloadQsBackupRequest;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.QueueResponse;
import org.openapitools.model.RestoreRequest;
import org.openapitools.model.ReverseDnsEntries;
import org.openapitools.model.ServiceOrderPostResponse;
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
 * API tests for VpsApi
 */
@MicronautTest
public class VpsApiTest {

    @Inject
    VpsApi api;

    
    /**
     * Place VPS Order
     *
     * Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
     */
    @Test
    @Disabled("Not Implemented")
    public void addVpsTest() {
        // given
        VpsOrderPostRequest vpsOrderPostRequest = new VpsOrderPostRequest("example", 1, "example", 1, 1, "example", "\"\"", "example");

        // when
        ServiceOrderPostResponse body = api.addVps(vpsOrderPostRequest).block();

        // then
        // TODO implement the addVpsTest()
    }

    
    /**
     * Delete VPS Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteVpsBackupTest() {
        // given
        Integer id = 56;
        String _file = "example";
        String all = "example";

        // when
        SuccessTextResponse body = api.deleteVpsBackup(id, _file, all).block();

        // then
        // TODO implement the deleteVpsBackupTest()
    }

    
    /**
     * Blocks SMTP
     *
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsBlockSmtpTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsBlockSmtp(id).block();

        // then
        // TODO implement the doVpsBlockSmtpTest()
    }

    
    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive on the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsDisableCdTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsDisableCd(id).block();

        // then
        // TODO implement the doVpsDisableCdTest()
    }

    
    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement on the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsDisableQuotaTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsDisableQuota(id).block();

        // then
        // TODO implement the doVpsDisableQuotaTest()
    }

    
    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the VPS CD drive.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsEjectCdTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsEjectCd(id).block();

        // then
        // TODO implement the doVpsEjectCdTest()
    }

    
    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement on the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsEnableQuotaTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsEnableQuota(id).block();

        // then
        // TODO implement the doVpsEnableQuotaTest()
    }

    
    /**
     * Restart VPS
     *
     * Restarts the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsRestartTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsRestart(id).block();

        // then
        // TODO implement the doVpsRestartTest()
    }

    
    /**
     * Start VPS
     *
     * Powers on the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsStartTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsStart(id).block();

        // then
        // TODO implement the doVpsStartTest()
    }

    
    /**
     * Stop VPS
     *
     * Powers off the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void doVpsStopTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.doVpsStop(id).block();

        // then
        // TODO implement the doVpsStopTest()
    }

    
    /**
     * Download VPS Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
     */
    @Test
    @Disabled("Not Implemented")
    public void downloadVpsBackupTest() {
        // given
        Integer id = 56;
        DownloadQsBackupRequest downloadQsBackupRequest = new DownloadQsBackupRequest("example");
        String all = "example";

        // when
        DownloadQsBackup200Response body = api.downloadVpsBackup(id, downloadQsBackupRequest, all).block();

        // then
        // TODO implement the downloadVpsBackupTest()
    }

    
    /**
     * VPS Ordering Information
     *
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewVpsTest() {
        // given

        // when
        VpsOrder body = api.getNewVps().block();

        // then
        // TODO implement the getNewVpsTest()
    }

    
    /**
     * Get VPS Backups List
     *
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsBackupsTest() {
        // given
        Integer id = 56;
        String all = "example";

        // when
        VpsBackupRows body = api.getVpsBackups(id, all).block();

        // then
        // TODO implement the getVpsBackupsTest()
    }

    
    /**
     * HD Space Addon Info
     *
     * Returns available hard drive space addon options and pricing for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsBuyHdSpaceTest() {
        // given
        Integer id = 56;

        // when
        api.getVpsBuyHdSpace(id).block();

        // then
        // TODO implement the getVpsBuyHdSpaceTest()
    }

    
    /**
     * Additional IP Addon Info
     *
     * Returns available additional IP address options and pricing for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsBuyIpTest() {
        // given
        Integer id = 56;

        // when
        api.getVpsBuyIp(id).block();

        // then
        // TODO implement the getVpsBuyIpTest()
    }

    
    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsChangeTimezoneTest() {
        // given
        Integer id = 56;

        // when
        List<String> body = api.getVpsChangeTimezone(id).block();

        // then
        // TODO implement the getVpsChangeTimezoneTest()
    }

    
    /**
     * Get VPS Order
     *
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsInfoTest() {
        // given
        Integer id = 56;

        // when
        Vps body = api.getVpsInfo(id).block();

        // then
        // TODO implement the getVpsInfoTest()
    }

    
    /**
     * Get VPS Invoices
     *
     * Returns the billing invoices associated with this VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getVpsInvoices(id).block();

        // then
        // TODO implement the getVpsInvoicesTest()
    }

    
    /**
     * List VPS Orders
     *
     * Returns all VPS services on the account with their current status and configuration.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsListTest() {
        // given

        // when
        List<VpsRow> body = api.getVpsList().block();

        // then
        // TODO implement the getVpsListTest()
    }

    
    /**
     * VPS Reinstall OS Options
     *
     * Returns the list of available OS templates for reinstalling the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsReinstallOsTest() {
        // given
        Integer id = 56;

        // when
        VpsTemplatesList body = api.getVpsReinstallOs(id).block();

        // then
        // TODO implement the getVpsReinstallOsTest()
    }

    
    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsReverseDnsTest() {
        // given
        Integer id = 56;

        // when
        ReverseDnsEntries body = api.getVpsReverseDns(id).block();

        // then
        // TODO implement the getVpsReverseDnsTest()
    }

    
    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsSetupVncTest() {
        // given
        Integer id = 56;

        // when
        api.getVpsSetupVnc(id).block();

        // then
        // TODO implement the getVpsSetupVncTest()
    }

    
    /**
     * Slice Upgrade Info
     *
     * Returns available slice upgrade options and pricing for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsSlicesTest() {
        // given
        Integer id = 56;

        // when
        api.getVpsSlices(id).block();

        // then
        // TODO implement the getVpsSlicesTest()
    }

    
    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsTrafficUsageTest() {
        // given
        Integer id = 56;

        // when
        VpsTrafficResponse body = api.getVpsTrafficUsage(id).block();

        // then
        // TODO implement the getVpsTrafficUsageTest()
    }

    
    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsViewDesktopTest() {
        // given
        Integer id = 56;

        // when
        api.getVpsViewDesktop(id).block();

        // then
        // TODO implement the getVpsViewDesktopTest()
    }

    
    /**
     * Resend VPS Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the VPS order.
     */
    @Test
    @Disabled("Not Implemented")
    public void getVpsWelcomeEmailTest() {
        // given
        String id = "4813";

        // when
        SuccessTextResponse body = api.getVpsWelcomeEmail(id).block();

        // then
        // TODO implement the getVpsWelcomeEmailTest()
    }

    
    /**
     * Start a VPS Backup
     *
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsBackupTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postVpsBackup(id).block();

        // then
        // TODO implement the postVpsBackupTest()
    }

    
    /**
     * Purchase HD Space Addon
     *
     * Purchases additional hard drive space for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsBuyHdSpaceTest() {
        // given
        Integer id = 56;

        // when
        api.postVpsBuyHdSpace(id).block();

        // then
        // TODO implement the postVpsBuyHdSpaceTest()
    }

    
    /**
     * Purchase Additional IP
     *
     * Purchases an additional IP address for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsBuyIpTest() {
        // given
        Integer id = 56;

        // when
        api.postVpsBuyIp(id).block();

        // then
        // TODO implement the postVpsBuyIpTest()
    }

    
    /**
     * Update VPS Hostname
     *
     * Changes the hostname of the VPS. This queues a background task to update the server.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsChangeHostnameTest() {
        // given
        Integer id = 56;
        String hostname = "example";

        // when
        QueueResponse body = api.postVpsChangeHostname(id, hostname).block();

        // then
        // TODO implement the postVpsChangeHostnameTest()
    }

    
    /**
     * Change VPS Root Password
     *
     * Changes the root password of the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsChangeRootPasswordTest() {
        // given
        Integer id = 56;
        String password = "example";

        // when
        QueueResponse body = api.postVpsChangeRootPassword(id, password).block();

        // then
        // TODO implement the postVpsChangeRootPasswordTest()
    }

    
    /**
     * Change VPS Timezone
     *
     * Changes the system timezone on the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsChangeTimezoneTest() {
        // given
        Integer id = 56;
        String timezone = "example";

        // when
        QueueResponse body = api.postVpsChangeTimezone(id, timezone).block();

        // then
        // TODO implement the postVpsChangeTimezoneTest()
    }

    
    /**
     * Change Webuzo Password
     *
     * Changes the Webuzo control panel password on the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsChangeWebuzoPasswordTest() {
        // given
        Integer id = 56;
        String password = "example";

        // when
        QueueResponse body = api.postVpsChangeWebuzoPassword(id, password).block();

        // then
        // TODO implement the postVpsChangeWebuzoPasswordTest()
    }

    
    /**
     * Insert CD in VPS
     *
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsInsertCdTest() {
        // given
        Integer id = 56;
        String url = "example";

        // when
        QueueResponse body = api.postVpsInsertCd(id, url).block();

        // then
        // TODO implement the postVpsInsertCdTest()
    }

    
    /**
     * Reinstall VPS OS
     *
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsReinstallOsTest() {
        // given
        Integer id = 56;
        String template = "example";
        String localPassword = "example";
        String password = "example";

        // when
        QueueResponse body = api.postVpsReinstallOs(id, template, localPassword, password).block();

        // then
        // TODO implement the postVpsReinstallOsTest()
    }

    
    /**
     * Reset VPS Password
     *
     * Resets the root password on the VPS to a new randomly generated password.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsResetPasswordTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postVpsResetPassword(id).block();

        // then
        // TODO implement the postVpsResetPasswordTest()
    }

    
    /**
     * Restore VPS from Backup
     *
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsRestoreTest() {
        // given
        Integer id = 56;
        RestoreRequest restoreRequest = new RestoreRequest();

        // when
        QueueResponse body = api.postVpsRestore(id, restoreRequest).block();

        // then
        // TODO implement the postVpsRestoreTest()
    }

    
    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsReverseDnsTest() {
        // given
        Integer id = 56;
        ReverseDnsEntries reverseDnsEntries = new ReverseDnsEntries();

        // when
        TextResponse body = api.postVpsReverseDns(id, reverseDnsEntries).block();

        // then
        // TODO implement the postVpsReverseDnsTest()
    }

    
    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsSetupVncTest() {
        // given
        Integer id = 56;

        // when
        QueueResponse body = api.postVpsSetupVnc(id).block();

        // then
        // TODO implement the postVpsSetupVncTest()
    }

    
    /**
     * Purchase Slice Upgrade
     *
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsSlicesTest() {
        // given
        Integer id = 56;

        // when
        api.postVpsSlices(id).block();

        // then
        // TODO implement the postVpsSlicesTest()
    }

    
    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the VPS.
     */
    @Test
    @Disabled("Not Implemented")
    public void postVpsViewDesktopTest() {
        // given
        Integer id = 56;

        // when
        api.postVpsViewDesktop(id).block();

        // then
        // TODO implement the postVpsViewDesktopTest()
    }

    
    /**
     * Validate VPS Order
     *
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     */
    @Test
    @Disabled("Not Implemented")
    public void putVpsTest() {
        // given
        VpsOrderPutRequest vpsOrderPutRequest = new VpsOrderPutRequest("example", 1, "example", 1, 1, "example", "\"\"", "example");

        // when
        VpsOrderPutResponse body = api.putVps(vpsOrderPutRequest).block();

        // then
        // TODO implement the putVpsTest()
    }

    
    /**
     * Update VPS Order
     *
     * Updates settings on a VPS order.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateVpsInfoTest() {
        // given
        String id = "example";

        // when
        SuccessTextResponse body = api.updateVpsInfo(id).block();

        // then
        // TODO implement the updateVpsInfoTest()
    }

    
    /**
     * Cancel VPS Service
     *
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     */
    @Test
    @Disabled("Not Implemented")
    public void vPSCancelTest() {
        // given
        Integer id = 56;

        // when
        VPSCancel200Response body = api.vPSCancel(id).block();

        // then
        // TODO implement the vPSCancelTest()
    }

    
}
