package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.FloatingIpsCancel200Response;
import org.openapitools.model.GetAccountInfo401Response;
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
 * API tests for FloatingIpsApi
 */
@MicronautTest
public class FloatingIpsApiTest {

    @Inject
    FloatingIpsApi api;

    
    /**
     * Place Floating IP Order
     *
     * Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.
     */
    @Test
    @Disabled("Not Implemented")
    public void addFloatingIpTest() {
        // given

        // when
        ServiceOrderPostResponse body = api.addFloatingIp().block();

        // then
        // TODO implement the addFloatingIpTest()
    }

    
    /**
     * Cancel Floating IP
     *
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     */
    @Test
    @Disabled("Not Implemented")
    public void floatingIpsCancelTest() {
        // given
        Integer id = 56;

        // when
        FloatingIpsCancel200Response body = api.floatingIpsCancel(id).block();

        // then
        // TODO implement the floatingIpsCancelTest()
    }

    
    /**
     * View Floating IP
     *
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     */
    @Test
    @Disabled("Not Implemented")
    public void getFloatingIpInfoTest() {
        // given
        Integer id = 56;

        // when
        Object body = api.getFloatingIpInfo(id).block();

        // then
        // TODO implement the getFloatingIpInfoTest()
    }

    
    /**
     * Get Floating IP Invoices
     *
     * Returns the billing invoices associated with this Floating IP service.
     */
    @Test
    @Disabled("Not Implemented")
    public void getFloatingIpInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getFloatingIpInvoices(id).block();

        // then
        // TODO implement the getFloatingIpInvoicesTest()
    }

    
    /**
     * List Floating IPs
     *
     * Returns all Floating IP services on the account with their current status and assignment details.
     */
    @Test
    @Disabled("Not Implemented")
    public void getFloatingIpsListTest() {
        // given

        // when
        List<Object> body = api.getFloatingIpsList().block();

        // then
        // TODO implement the getFloatingIpsListTest()
    }

    
    /**
     * Resend Floating IPs Welcome Email
     *
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     */
    @Test
    @Disabled("Not Implemented")
    public void getFloatingIpsWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getFloatingIpsWelcomeEmail(id).block();

        // then
        // TODO implement the getFloatingIpsWelcomeEmailTest()
    }

    
    /**
     * Get Floating IP Ordering Information
     *
     * Retrieves available options and pricing for ordering a new Floating IP.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewFloatingIpTest() {
        // given

        // when
        Object body = api.getNewFloatingIp().block();

        // then
        // TODO implement the getNewFloatingIpTest()
    }

    
    /**
     * Change Floating IP Target
     *
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
     */
    @Test
    @Disabled("Not Implemented")
    public void postFloatingIpsChangeIpTest() {
        // given
        Integer id = 56;
        String ip = "example";

        // when
        SuccessTextResponse body = api.postFloatingIpsChangeIp(id, ip).block();

        // then
        // TODO implement the postFloatingIpsChangeIpTest()
    }

    
    /**
     * Validate Floating IP Order
     *
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     */
    @Test
    @Disabled("Not Implemented")
    public void putFloatingIpsTest() {
        // given

        // when
        api.putFloatingIps().block();

        // then
        // TODO implement the putFloatingIpsTest()
    }

    
    /**
     * Update Floating IP
     *
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateFloatingIpInfoTest() {
        // given
        String id = "example";

        // when
        SuccessTextResponse body = api.updateFloatingIpInfo(id).block();

        // then
        // TODO implement the updateFloatingIpInfoTest()
    }

    
}
