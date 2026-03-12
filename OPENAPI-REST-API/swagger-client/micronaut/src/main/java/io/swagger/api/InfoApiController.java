package io.swagger.api;

import io.swagger.model.InlineResponse401;

import io.swagger.model.ServicesInfo;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class InfoApiController implements InfoApi {

    @Override
    public Single<HttpResponse<ServicesInfo>> getInfo() {
        // TODO: Implement me
        return InfoApi.super.getInfo();
    }
}
