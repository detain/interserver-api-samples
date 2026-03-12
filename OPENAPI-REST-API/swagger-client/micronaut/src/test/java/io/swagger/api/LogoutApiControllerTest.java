package io.swagger.api;

import io.swagger.model.InlineResponse401;
import io.swagger.model.SuccessTextResponse;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class LogoutApiControllerTest {

    @Inject
    private LogoutApi api;

    @Test
    void logoutTest() {
        try {
            //TODO: api.logout().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
