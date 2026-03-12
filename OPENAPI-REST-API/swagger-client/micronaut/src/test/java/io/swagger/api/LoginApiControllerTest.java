package io.swagger.api;

import io.swagger.model.LoginErrorResponse;
import io.swagger.model.LoginInfo;
import io.swagger.model.LoginSubmissionExample;
import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;
import io.swagger.model.LoginSuccessResponse;

import io.micronaut.http.HttpResponse;
import io.micronaut.http.HttpStatus;
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import jakarta.inject.Inject;

import java.util.*;

import static org.junit.jupiter.api.Assumptions.assumeTrue;

@MicronautTest
class LoginApiControllerTest {

    @Inject
    private LoginApi api;

    @Test
    void getLoginInfoTest() {
        try {
            //TODO: api.getLoginInfo().blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

    @Test
    void submitLoginFormTest() {
        String login = null;
        String passwd = null;
        String remember = null;
        LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse = null;
        String tfa = null;
        try {
            //TODO: api.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa).blockingGet();
        } catch (UnsupportedOperationException e) {
            assumeTrue(false, "API is not yet implemented");
        }
    }

}
