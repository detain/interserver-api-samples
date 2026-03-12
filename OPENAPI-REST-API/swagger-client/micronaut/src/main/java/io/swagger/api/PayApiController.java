package io.swagger.api;

import io.swagger.model.InlineResponse2009;

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
public class PayApiController implements PayApi {

    @Override
    public Single<HttpResponse<InlineResponse2009>> initiatePayment(String method, String invoices) {
        // TODO: Implement me
        return PayApi.super.initiatePayment(method, invoices);
    }
}
