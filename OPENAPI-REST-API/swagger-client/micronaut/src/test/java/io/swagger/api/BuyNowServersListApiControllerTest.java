package io.swagger.api;

import io.swagger.model.BuyItNowList;
import io.swagger.model.InlineResponse401;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class BuyNowServersListApiControllerTest {

    @Inject
    private BuyNowServersListApi api;

    @Test
    void getMPServersTest() {
        try {
            //TODO: api.getMPServers().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
