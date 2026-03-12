package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetWebsiteBuyIp200Response;
import org.openapitools.model.PostWebsiteBuyIp200Response;
import org.openapitools.model.PostWebsiteBuyIpRequest;
import org.openapitools.model.PostWebsiteMigration200Response;
import org.openapitools.model.PostWebsiteMigrationRequest;
import org.openapitools.model.PostWebsiteMigrationRequest1;
import org.openapitools.model.ReverseDnsEntries;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;
import org.openapitools.model.WebhostingCancel200Response;
import org.openapitools.model.Website;
import org.openapitools.model.WebsiteBackups;
import org.openapitools.model.WebsiteLoginResponse;
import org.openapitools.model.WebsiteRow;
import org.openapitools.model.WebsitesOrder;
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
 * API tests for WebhostingApi
 */
@MicronautTest
public class WebhostingApiTest {

    @Inject
    WebhostingApi api;

    
    /**
     * Place Website Order
     *
     * Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.
     */
    @Test
    @Disabled("Not Implemented")
    public void addWebsiteTest() {
        // given

        // when
        api.addWebsite().block();

        // then
        // TODO implement the addWebsiteTest()
    }

    
    /**
     * Website Ordering Information
     *
     * Retrieves available webhosting plans and pricing for ordering.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewWebsiteTest() {
        // given

        // when
        WebsitesOrder body = api.getNewWebsite().block();

        // then
        // TODO implement the getNewWebsiteTest()
    }

    
    /**
     * Get Website IP Information
     *
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getWebsiteBuyIpTest() {
        // given
        Integer id = 56;

        // when
        GetWebsiteBuyIp200Response body = api.getWebsiteBuyIp(id).block();

        // then
        // TODO implement the getWebsiteBuyIpTest()
    }

    
    /**
     * Get Website Order
     *
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     */
    @Test
    @Disabled("Not Implemented")
    public void getWebsiteInfoTest() {
        // given
        Integer id = 56;

        // when
        Website body = api.getWebsiteInfo(id).block();

        // then
        // TODO implement the getWebsiteInfoTest()
    }

    
    /**
     * Get Website Invoices
     *
     * Returns the billing invoices associated with this webhosting service.
     */
    @Test
    @Disabled("Not Implemented")
    public void getWebsiteInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getWebsiteInvoices(id).block();

        // then
        // TODO implement the getWebsiteInvoicesTest()
    }

    
    /**
     * Get Website Listing
     *
     * Gets a listing of your webhosting orders and service details.
     */
    @Test
    @Disabled("Not Implemented")
    public void getWebsiteListTest() {
        // given

        // when
        List<WebsiteRow> body = api.getWebsiteList().block();

        // then
        // TODO implement the getWebsiteListTest()
    }

    
    /**
     * Get Website Backups
     *
     * Gets a list of the backups that exist for a website and their sizes.
     */
    @Test
    @Disabled("Not Implemented")
    public void getWebsitesBackupsTest() {
        // given
        Integer id = 56;

        // when
        WebsiteBackups body = api.getWebsitesBackups(id).block();

        // then
        // TODO implement the getWebsitesBackupsTest()
    }

    
    /**
     * Hosting Panel Auto Login
     *
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     */
    @Test
    @Disabled("Not Implemented")
    public void getWebsitesLoginTest() {
        // given
        Integer id = 56;

        // when
        WebsiteLoginResponse body = api.getWebsitesLogin(id).block();

        // then
        // TODO implement the getWebsitesLoginTest()
    }

    
    /**
     * Resend Website Welcome Email
     *
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     */
    @Test
    @Disabled("Not Implemented")
    public void getWebsitesWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getWebsitesWelcomeEmail(id).block();

        // then
        // TODO implement the getWebsitesWelcomeEmailTest()
    }

    
    /**
     * Get Website Reverse DNS
     *
     * Returns the current reverse DNS (PTR record) entries for the website&#39;s IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void gettWebsiteReverseDnsTest() {
        // given
        Integer id = 56;

        // when
        ReverseDnsEntries body = api.gettWebsiteReverseDns(id).block();

        // then
        // TODO implement the gettWebsiteReverseDnsTest()
    }

    
    /**
     * Update Website IP DNS
     *
     * Updates the reverse DNS hostnames for the website&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
     */
    @Test
    @Disabled("Not Implemented")
    public void postWebsiteBuyIpTest() {
        // given
        Integer id = 56;
        PostWebsiteBuyIpRequest postWebsiteBuyIpRequest = new PostWebsiteBuyIpRequest();

        // when
        PostWebsiteBuyIp200Response body = api.postWebsiteBuyIp(id, postWebsiteBuyIpRequest).block();

        // then
        // TODO implement the postWebsiteBuyIpTest()
    }

    
    /**
     * Request Website Migration
     *
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
     */
    @Test
    @Disabled("Not Implemented")
    public void postWebsiteMigrationTest() {
        // given
        Integer id = 56;
        PostWebsiteMigrationRequest postWebsiteMigrationRequest = new PostWebsiteMigrationRequest();

        // when
        PostWebsiteMigration200Response body = api.postWebsiteMigration(id, postWebsiteMigrationRequest).block();

        // then
        // TODO implement the postWebsiteMigrationTest()
    }

    
    /**
     * Update Website Reverse DNS
     *
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     */
    @Test
    @Disabled("Not Implemented")
    public void postWebsitesReverseDnsTest() {
        // given
        Integer id = 56;
        ReverseDnsEntries reverseDnsEntries = new ReverseDnsEntries();

        // when
        TextResponse body = api.postWebsitesReverseDns(id, reverseDnsEntries).block();

        // then
        // TODO implement the postWebsitesReverseDnsTest()
    }

    
    /**
     * Validate Webhosting Order
     *
     * Validates a webhosting order before placing it.
     */
    @Test
    @Disabled("Not Implemented")
    public void putWebsitesTest() {
        // given

        // when
        api.putWebsites().block();

        // then
        // TODO implement the putWebsitesTest()
    }

    
    /**
     * Update Website Order
     *
     * Updates settings on a webhosting order.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateWebsiteInfoTest() {
        // given
        String id = "example";

        // when
        api.updateWebsiteInfo(id).block();

        // then
        // TODO implement the updateWebsiteInfoTest()
    }

    
    /**
     * Cancel Website
     *
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     */
    @Test
    @Disabled("Not Implemented")
    public void webhostingCancelTest() {
        // given
        String id = "123";

        // when
        WebhostingCancel200Response body = api.webhostingCancel(id).block();

        // then
        // TODO implement the webhostingCancelTest()
    }

    
}
