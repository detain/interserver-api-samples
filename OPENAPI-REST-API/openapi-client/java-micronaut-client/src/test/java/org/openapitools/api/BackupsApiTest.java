package org.openapitools.api;

import org.openapitools.model.Backup;
import org.openapitools.model.BackupLoginResponse;
import org.openapitools.model.BackupOrderPostResponse;
import org.openapitools.model.BackupOrderPutResponse;
import org.openapitools.model.BackupRow;
import org.openapitools.model.BackupsOrder;
import org.openapitools.model.CancelBackup200Response;
import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.SuccessTextResponse;
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
 * API tests for BackupsApi
 */
@MicronautTest
public class BackupsApiTest {

    @Inject
    BackupsApi api;

    
    /**
     * Place Backup Order
     *
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
     */
    @Test
    @Disabled("Not Implemented")
    public void addBackupTest() {
        // given
        Boolean validateOnly = false;
        Integer serviceType = 56;
        String coupon = "example";

        // when
        BackupOrderPostResponse body = api.addBackup(validateOnly, serviceType, coupon).block();

        // then
        // TODO implement the addBackupTest()
    }

    
    /**
     * Cancel Backup Service
     *
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     */
    @Test
    @Disabled("Not Implemented")
    public void cancelBackupTest() {
        // given
        Integer id = 56;

        // when
        CancelBackup200Response body = api.cancelBackup(id).block();

        // then
        // TODO implement the cancelBackupTest()
    }

    
    /**
     * Get Backup Service Details
     *
     * Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBackupInfoTest() {
        // given
        Integer id = 56;

        // when
        Backup body = api.getBackupInfo(id).block();

        // then
        // TODO implement the getBackupInfoTest()
    }

    
    /**
     * Get Backup Order Invoices
     *
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBackupInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getBackupInvoices(id).block();

        // then
        // TODO implement the getBackupInvoicesTest()
    }

    
    /**
     * Get Backup Storage Panel Login
     *
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBackupLoginTest() {
        // given
        Integer id = 56;

        // when
        BackupLoginResponse body = api.getBackupLogin(id).block();

        // then
        // TODO implement the getBackupLoginTest()
    }

    
    /**
     * List Backup Services
     *
     * Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBackupsListTest() {
        // given

        // when
        List<BackupRow> body = api.getBackupsList().block();

        // then
        // TODO implement the getBackupsListTest()
    }

    
    /**
     * Resend Backup Welcome Email
     *
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBackupsWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getBackupsWelcomeEmail(id).block();

        // then
        // TODO implement the getBackupsWelcomeEmailTest()
    }

    
    /**
     * Get Backup Order Form Data
     *
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewBackupTest() {
        // given

        // when
        BackupsOrder body = api.getNewBackup().block();

        // then
        // TODO implement the getNewBackupTest()
    }

    
    /**
     * Update Backup Information
     *
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateBackupInfoTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.updateBackupInfo(id).block();

        // then
        // TODO implement the updateBackupInfoTest()
    }

    
    /**
     * Validate Backup Order
     *
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void validateBackupOrderTest() {
        // given
        Boolean validateOnly = false;
        Integer serviceType = 56;
        String coupon = "example";

        // when
        BackupOrderPutResponse body = api.validateBackupOrder(validateOnly, serviceType, coupon).block();

        // then
        // TODO implement the validateBackupOrderTest()
    }

    
}
