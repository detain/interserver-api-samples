package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.IpObject;
import org.openapitools.model.License;
import org.openapitools.model.LicenseRow;
import org.openapitools.model.LicensesCancel200Response;
import org.openapitools.model.LicensesOrder;
import org.openapitools.model.ServiceOrderPostResponse;
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
 * API tests for LicensesApi
 */
@MicronautTest
public class LicensesApiTest {

    @Inject
    LicensesApi api;

    
    /**
     * Place License Order
     *
     * Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.
     */
    @Test
    @Disabled("Not Implemented")
    public void addLicenseTest() {
        // given

        // when
        ServiceOrderPostResponse body = api.addLicense().block();

        // then
        // TODO implement the addLicenseTest()
    }

    
    /**
     * Get License
     *
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     */
    @Test
    @Disabled("Not Implemented")
    public void getLicenseInfoTest() {
        // given
        Integer id = 56;

        // when
        License body = api.getLicenseInfo(id).block();

        // then
        // TODO implement the getLicenseInfoTest()
    }

    
    /**
     * Get License Invoices
     *
     * Returns the billing invoices associated with this license service.
     */
    @Test
    @Disabled("Not Implemented")
    public void getLicenseInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getLicenseInvoices(id).block();

        // then
        // TODO implement the getLicenseInvoicesTest()
    }

    
    /**
     * List Licenses
     *
     * Returns all software license services on the account with their current status and IP assignments.
     */
    @Test
    @Disabled("Not Implemented")
    public void getLicenseListTest() {
        // given

        // when
        List<LicenseRow> body = api.getLicenseList().block();

        // then
        // TODO implement the getLicenseListTest()
    }

    
    /**
     * Get License Order Information for Category
     *
     * Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.
     */
    @Test
    @Disabled("Not Implemented")
    public void getLicenseOrderCatTagInfoTest() {
        // given
        String catTag = "example";

        // when
        api.getLicenseOrderCatTagInfo(catTag).block();

        // then
        // TODO implement the getLicenseOrderCatTagInfoTest()
    }

    
    /**
     * Resend License Welcome Email
     *
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     */
    @Test
    @Disabled("Not Implemented")
    public void getLicensesWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getLicensesWelcomeEmail(id).block();

        // then
        // TODO implement the getLicensesWelcomeEmailTest()
    }

    
    /**
     * Get License Order Information
     *
     * Retrieves available license types, categories, and pricing for ordering a new license.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewLicenseTest() {
        // given

        // when
        LicensesOrder body = api.getNewLicense().block();

        // then
        // TODO implement the getNewLicenseTest()
    }

    
    /**
     * Cancel License
     *
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     */
    @Test
    @Disabled("Not Implemented")
    public void licensesCancelTest() {
        // given
        Integer id = 56;

        // when
        LicensesCancel200Response body = api.licensesCancel(id).block();

        // then
        // TODO implement the licensesCancelTest()
    }

    
    /**
     * Change License IP
     *
     * Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
     */
    @Test
    @Disabled("Not Implemented")
    public void postLicenseChangeIpTest() {
        // given
        Integer id = 56;
        IpObject ipObject = new IpObject("example");

        // when
        SuccessTextResponse body = api.postLicenseChangeIp(id, ipObject).block();

        // then
        // TODO implement the postLicenseChangeIpTest()
    }

    
    /**
     * Validate License Order
     *
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     */
    @Test
    @Disabled("Not Implemented")
    public void putLicensesTest() {
        // given

        // when
        api.putLicenses().block();

        // then
        // TODO implement the putLicensesTest()
    }

    
    /**
     * Update License
     *
     * Updates settings on a license service such as its assigned IP.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateLicenseInfoTest() {
        // given
        String id = "example";

        // when
        SuccessTextResponse body = api.updateLicenseInfo(id).block();

        // then
        // TODO implement the updateLicenseInfoTest()
    }

    
}
