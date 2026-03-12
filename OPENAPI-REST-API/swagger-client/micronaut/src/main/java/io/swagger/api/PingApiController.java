package io.swagger.api;

import io.swagger.model.InlineResponse401;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class PingApiController implements PingApi {

    @Override
    public Single<HttpResponse<String>> pingServer() {
        // TODO: Implement me
        return PingApi.super.pingServer();
    }
}
