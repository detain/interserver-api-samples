package io.swagger.api;

import io.swagger.model.InlineResponse401;

import io.swagger.model.Invoice;

import io.micronaut.http.annotation.Controller;
import io.micronaut.http.HttpResponse;
import io.reactivex.rxjava3.core.Single;

import javax.annotation.Nullable;
import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;

@Controller
public class InvoicesApiController implements InvoicesApi {

    @Override
    public Single<HttpResponse<List<Invoice>>> getInvoices(@Nullable String searchString, @Nullable @Min(0)Integer skip, @Nullable @Min(0) @Max(50) Integer limit) {
        // TODO: Implement me
        return InvoicesApi.super.getInvoices(searchString, skip, limit);
    }
}
