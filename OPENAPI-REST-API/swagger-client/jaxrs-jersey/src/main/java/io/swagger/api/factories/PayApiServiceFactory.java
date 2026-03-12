package io.swagger.api.factories;

import io.swagger.api.PayApiService;
import io.swagger.api.impl.PayApiServiceImpl;


public class PayApiServiceFactory {
    private final static PayApiService service = new PayApiServiceImpl();

    public static PayApiService getPayApi() {
        return service;
    }
}
