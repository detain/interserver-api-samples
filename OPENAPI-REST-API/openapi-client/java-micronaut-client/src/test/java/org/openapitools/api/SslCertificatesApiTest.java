package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.ServiceOrderPostResponse;
import org.openapitools.model.SslCancel200Response;
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
 * API tests for SslCertificatesApi
 */
@MicronautTest
public class SslCertificatesApiTest {

    @Inject
    SslCertificatesApi api;

    
    /**
     * Place SSL Cert Order
     *
     * Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.
     */
    @Test
    @Disabled("Not Implemented")
    public void addSslTest() {
        // given

        // when
        ServiceOrderPostResponse body = api.addSsl().block();

        // then
        // TODO implement the addSslTest()
    }

    
    /**
     * SSL Cert Ordering Information
     *
     * Retrieves available SSL certificate types and pricing for ordering.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewSslTest() {
        // given

        // when
        Object body = api.getNewSsl().block();

        // then
        // TODO implement the getNewSslTest()
    }

    
    /**
     * Get SSL Cert Info
     *
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     */
    @Test
    @Disabled("Not Implemented")
    public void getSslInfoTest() {
        // given
        Integer id = 56;

        // when
        Object body = api.getSslInfo(id).block();

        // then
        // TODO implement the getSslInfoTest()
    }

    
    /**
     * Get SSL Cert Invoices
     *
     * Returns the billing invoices associated with this SSL certificate.
     */
    @Test
    @Disabled("Not Implemented")
    public void getSslInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getSslInvoices(id).block();

        // then
        // TODO implement the getSslInvoicesTest()
    }

    
    /**
     * List SSL Certs
     *
     * Returns all SSL certificate services on the account with their current status.
     */
    @Test
    @Disabled("Not Implemented")
    public void getSslListTest() {
        // given

        // when
        api.getSslList().block();

        // then
        // TODO implement the getSslListTest()
    }

    
    /**
     * Resend SSL Welcome Email
     *
     * Resends the welcome email for the order.
     */
    @Test
    @Disabled("Not Implemented")
    public void getSslWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getSslWelcomeEmail(id).block();

        // then
        // TODO implement the getSslWelcomeEmailTest()
    }

    
    /**
     * Validate SSL Cert Order
     *
     * Validates an SSL certificate order before placing it.
     */
    @Test
    @Disabled("Not Implemented")
    public void putSslTest() {
        // given

        // when
        api.putSsl().block();

        // then
        // TODO implement the putSslTest()
    }

    
    /**
     * Cancel SSL Certificate Service
     *
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     */
    @Test
    @Disabled("Not Implemented")
    public void sslCancelTest() {
        // given
        Integer id = 56;

        // when
        SslCancel200Response body = api.sslCancel(id).block();

        // then
        // TODO implement the sslCancelTest()
    }

    
    /**
     * Update SSL Cert Order
     *
     * Updates settings on an SSL certificate order.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateSslInfoTest() {
        // given
        String id = "example";

        // when
        SuccessTextResponse body = api.updateSslInfo(id).block();

        // then
        // TODO implement the updateSslInfoTest()
    }

    
}
