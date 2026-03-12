package org.openapitools.api;

import org.openapitools.model.CancelScrubIp200Response;
import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.CreateFilter;
import org.openapitools.model.CreateFilter201Response;
import org.openapitools.model.CreateFilter400Response;
import org.openapitools.model.CreateFilter500Response;
import org.openapitools.model.CreateFirewallRule;
import org.openapitools.model.CreateGeoFirewallRule;
import org.openapitools.model.CreateGeoRule400Response;
import org.openapitools.model.CreateRule201Response;
import org.openapitools.model.CreateRule400Response;
import org.openapitools.model.CreateRule500Response;
import org.openapitools.model.DeleteFilter200Response;
import org.openapitools.model.DeleteFilter400Response;
import org.openapitools.model.DeleteFilter500Response;
import org.openapitools.model.DeleteFirewallRule;
import org.openapitools.model.DeleteGeoFirewallRule;
import org.openapitools.model.DisableScrub200Response;
import org.openapitools.model.DisableScrub400Response;
import org.openapitools.model.DisableScrub500Response;
import org.openapitools.model.EnableScrub200Response;
import org.openapitools.model.EnableScrub500Response;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.GetOrderDetail200Response;
import org.openapitools.model.GetScrubIpDetails200Response;
import org.openapitools.model.PlaceScrubOrder201Response;
import org.openapitools.model.ScrubIpFilterTypes;
import org.openapitools.model.ScrubIpPlaceOrder;
import org.openapitools.model.ScrubIpsDeleteRule200Response;
import org.openapitools.model.ScrubIpsDeleteRule400Response;
import org.openapitools.model.ScrubIpsDeleteRule500Response;
import org.openapitools.model.ScrubIpsLogRowSchema;
import org.openapitools.model.ScrubIpsRowSchema;
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
 * API tests for ScrubIpsApi
 */
@MicronautTest
public class ScrubIpsApiTest {

    @Inject
    ScrubIpsApi api;

    
    /**
     * Cancel Scrub IP Service
     *
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     */
    @Test
    @Disabled("Not Implemented")
    public void cancelScrubIpTest() {
        // given
        Integer id = 56;

        // when
        CancelScrubIp200Response body = api.cancelScrubIp(id).block();

        // then
        // TODO implement the cancelScrubIpTest()
    }

    
    /**
     * Create Traffic Filter
     *
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
     */
    @Test
    @Disabled("Not Implemented")
    public void createFilterTest() {
        // given
        Integer id = 56;
        CreateFilter createFilter = new CreateFilter("cs2_udp", 8080);

        // when
        CreateFilter201Response body = api.createFilter(id, createFilter).block();

        // then
        // TODO implement the createFilterTest()
    }

    
    /**
     * Create Geo Firewall Rule
     *
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     */
    @Test
    @Disabled("Not Implemented")
    public void createGeoRuleTest() {
        // given
        Integer id = 56;
        CreateGeoFirewallRule createGeoFirewallRule = new CreateGeoFirewallRule(1);

        // when
        CreateRule201Response body = api.createGeoRule(id, createGeoFirewallRule).block();

        // then
        // TODO implement the createGeoRuleTest()
    }

    
    /**
     * Create Firewall Rule
     *
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     */
    @Test
    @Disabled("Not Implemented")
    public void createRuleTest() {
        // given
        Integer id = 56;
        CreateFirewallRule createFirewallRule = new CreateFirewallRule(1, 1);

        // when
        CreateRule201Response body = api.createRule(id, createFirewallRule).block();

        // then
        // TODO implement the createRuleTest()
    }

    
    /**
     * Delete Traffic Filter
     *
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteFilterTest() {
        // given
        Integer id = 56;
        CreateFilter createFilter = new CreateFilter("cs2_udp", 8080);

        // when
        DeleteFilter200Response body = api.deleteFilter(id, createFilter).block();

        // then
        // TODO implement the deleteFilterTest()
    }

    
    /**
     * Disable Scrub Protection
     *
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     */
    @Test
    @Disabled("Not Implemented")
    public void disableScrubTest() {
        // given
        Integer id = 56;

        // when
        DisableScrub200Response body = api.disableScrub(id).block();

        // then
        // TODO implement the disableScrubTest()
    }

    
    /**
     * Enable Scrub Protection
     *
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     */
    @Test
    @Disabled("Not Implemented")
    public void enableScrubTest() {
        // given
        Integer id = 56;

        // when
        EnableScrub200Response body = api.enableScrub(id).block();

        // then
        // TODO implement the enableScrubTest()
    }

    
    /**
     * Get Scrub IP Ordering Information
     *
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     */
    @Test
    @Disabled("Not Implemented")
    public void getOrderDetailTest() {
        // given

        // when
        GetOrderDetail200Response body = api.getOrderDetail().block();

        // then
        // TODO implement the getOrderDetailTest()
    }

    
    /**
     * Get Scrub IP Details
     *
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     */
    @Test
    @Disabled("Not Implemented")
    public void getScrubIpDetailsTest() {
        // given
        Integer id = 56;

        // when
        GetScrubIpDetails200Response body = api.getScrubIpDetails(id).block();

        // then
        // TODO implement the getScrubIpDetailsTest()
    }

    
    /**
     * List Scrub Filter Types
     *
     * Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getScrubIpFilterTypesTest() {
        // given

        // when
        ScrubIpFilterTypes body = api.getScrubIpFilterTypes().block();

        // then
        // TODO implement the getScrubIpFilterTypesTest()
    }

    
    /**
     * Get ScrubIp Invoices
     *
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     */
    @Test
    @Disabled("Not Implemented")
    public void getScrubIpInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getScrubIpInvoices(id).block();

        // then
        // TODO implement the getScrubIpInvoicesTest()
    }

    
    /**
     * Get Scrub IP Logs
     *
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     */
    @Test
    @Disabled("Not Implemented")
    public void getScrubIpLogsTest() {
        // given
        String id = "413232  ";

        // when
        List<ScrubIpsLogRowSchema> body = api.getScrubIpLogs(id).block();

        // then
        // TODO implement the getScrubIpLogsTest()
    }

    
    /**
     * List Scrub IP Services
     *
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     */
    @Test
    @Disabled("Not Implemented")
    public void getScrubIpsListTest() {
        // given

        // when
        List<ScrubIpsRowSchema> body = api.getScrubIpsList().block();

        // then
        // TODO implement the getScrubIpsListTest()
    }

    
    /**
     * Place Scrub IP Order
     *
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     */
    @Test
    @Disabled("Not Implemented")
    public void placeScrubOrderTest() {
        // given
        ScrubIpPlaceOrder scrubIpPlaceOrder = new ScrubIpPlaceOrder(102, "1.2.3.4");

        // when
        PlaceScrubOrder201Response body = api.placeScrubOrder(scrubIpPlaceOrder).block();

        // then
        // TODO implement the placeScrubOrderTest()
    }

    
    /**
     * Delete Geo Firewall Rule
     *
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     */
    @Test
    @Disabled("Not Implemented")
    public void scrubIpsDeleteGeoRuleTest() {
        // given
        Integer id = 56;
        DeleteGeoFirewallRule deleteGeoFirewallRule = new DeleteGeoFirewallRule(2045);

        // when
        ScrubIpsDeleteRule200Response body = api.scrubIpsDeleteGeoRule(id, deleteGeoFirewallRule).block();

        // then
        // TODO implement the scrubIpsDeleteGeoRuleTest()
    }

    
    /**
     * Delete Firewall Rule
     *
     * Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     */
    @Test
    @Disabled("Not Implemented")
    public void scrubIpsDeleteRuleTest() {
        // given
        Integer id = 56;
        DeleteFirewallRule deleteFirewallRule = new DeleteFirewallRule(2045);

        // when
        ScrubIpsDeleteRule200Response body = api.scrubIpsDeleteRule(id, deleteFirewallRule).block();

        // then
        // TODO implement the scrubIpsDeleteRuleTest()
    }

    
}
