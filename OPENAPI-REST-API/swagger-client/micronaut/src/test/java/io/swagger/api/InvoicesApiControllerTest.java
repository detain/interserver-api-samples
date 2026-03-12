package io.swagger.api;

import io.swagger.model.InlineResponse401;
import io.swagger.model.Invoice;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class InvoicesApiControllerTest {

    @Inject
    private InvoicesApi api;

    @Test
    void getInvoicesTest() {
        String searchString = null;
        Integer skip = null;
        Integer limit = null;
        try {
            //TODO: api.getInvoices(searchString, skip, limit).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
