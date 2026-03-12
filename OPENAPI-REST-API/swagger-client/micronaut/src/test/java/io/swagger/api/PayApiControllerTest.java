package io.swagger.api;

import io.swagger.model.InlineResponse2009;
import io.swagger.model.InlineResponse401;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class PayApiControllerTest {

    @Inject
    private PayApi api;

    @Test
    void initiatePaymentTest() {
        String method = null;
        String invoices = null;
        try {
            //TODO: api.initiatePayment(method, invoices).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
