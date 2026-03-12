package io.swagger.api;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginSubmissionExample;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class SignupApiControllerTest {

    @Inject
    private SignupApi api;

    @Test
    void submitSignupTest() {
        LoginSubmissionExample body = null;
        try {
            //TODO: api.submitSignup(body).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
