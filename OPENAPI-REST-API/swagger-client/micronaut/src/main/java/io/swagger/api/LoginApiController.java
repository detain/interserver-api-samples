package io.swagger.api;

import io.swagger.model.LoginErrorResponse;

import io.swagger.model.LoginInfo;

import io.swagger.model.LoginSubmissionExample;

import io.swagger.model.LoginSubmissionExampleGrecaptcharesponse;

import io.swagger.model.LoginSuccessResponse;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class LoginApiController implements LoginApi {

    @Override
    public Single<HttpResponse<LoginInfo>> getLoginInfo() {
        // TODO: Implement me
        return LoginApi.super.getLoginInfo();
    }

    @Override
    public Single<HttpResponse<LoginSuccessResponse>> submitLogin(@NotNull String login, @NotNull String passwd, @NotNull String remember, @NotNull @Valid LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, @NotNull String tfa) {
        // TODO: Implement me
        return LoginApi.super.submitLogin(login, passwd, remember, gRecaptchaResponse, tfa);
    }

    @Override
    public Single<HttpResponse<LoginSuccessResponse>> submitLogin(@NotNull @Valid LoginSubmissionExample body) {
        // TODO: Implement me
        return LoginApi.super.submitLogin(body);
    }
}
