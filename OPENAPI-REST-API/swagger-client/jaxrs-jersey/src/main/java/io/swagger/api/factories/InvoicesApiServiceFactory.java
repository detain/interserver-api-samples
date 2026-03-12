package io.swagger.api.factories;

import io.swagger.api.InvoicesApiService;
import io.swagger.api.impl.InvoicesApiServiceImpl;


public class InvoicesApiServiceFactory {
    private final static InvoicesApiService service = new InvoicesApiServiceImpl();

    public static InvoicesApiService getInvoicesApi() {
        return service;
    }
}
