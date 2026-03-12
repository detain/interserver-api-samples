package io.swagger.api;

import io.swagger.model.LoginErrorResponse;

import io.swagger.model.LoginSubmissionExample;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class SignupApiController implements SignupApi {

    @Override
    public Single<HttpResponse<Void>> submitSignup(@Nullable @Valid LoginSubmissionExample body) {
        // TODO: Implement me
        return SignupApi.super.submitSignup(body);
    }
}
