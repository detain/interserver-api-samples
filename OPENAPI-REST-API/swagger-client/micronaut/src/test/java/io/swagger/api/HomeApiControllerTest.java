package io.swagger.api;

import io.swagger.model.Home;
import io.swagger.model.InlineResponse401;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class HomeApiControllerTest {

    @Inject
    private HomeApi api;

    @Test
    void getHomeTest() {
        try {
            //TODO: api.getHome().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
