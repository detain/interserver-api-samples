package io.swagger.api;

import io.swagger.model.ChargeInvoiceRows;

import io.swagger.model.InlineResponse20020;

import io.swagger.model.InlineResponse401;

import io.swagger.model.SuccessTextResponse;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class SslApiController implements SslApi {

    @Override
    public Single<HttpResponse<Void>> addSsl() {
        // TODO: Implement me
        return SslApi.super.addSsl();
    }

    @Override
    public Single<HttpResponse<Void>> getNewSsl() {
        // TODO: Implement me
        return SslApi.super.getNewSsl();
    }

    @Override
    public Single<HttpResponse<Void>> getSslInfo(Integer id) {
        // TODO: Implement me
        return SslApi.super.getSslInfo(id);
    }

    @Override
    public Single<HttpResponse<ChargeInvoiceRows>> getSslInvoices(Integer id) {
        // TODO: Implement me
        return SslApi.super.getSslInvoices(id);
    }

    @Override
    public Single<HttpResponse<Void>> getSslList() {
        // TODO: Implement me
        return SslApi.super.getSslList();
    }

    @Override
    public Single<HttpResponse<SuccessTextResponse>> getSslWelcomeEmail(Integer id) {
        // TODO: Implement me
        return SslApi.super.getSslWelcomeEmail(id);
    }

    @Override
    public Single<HttpResponse<Void>> putSsl() {
        // TODO: Implement me
        return SslApi.super.putSsl();
    }

    @Override
    public Single<HttpResponse<InlineResponse20020>> sslCancel(Integer id) {
        // TODO: Implement me
        return SslApi.super.sslCancel(id);
    }

    @Override
    public Single<HttpResponse<Void>> updateSslInfo(String id) {
        // TODO: Implement me
        return SslApi.super.updateSslInfo(id);
    }
}
