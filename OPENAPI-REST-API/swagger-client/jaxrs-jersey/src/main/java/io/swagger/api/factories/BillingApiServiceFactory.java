package io.swagger.api.factories;

import io.swagger.api.BillingApiService;
import io.swagger.api.impl.BillingApiServiceImpl;


public class BillingApiServiceFactory {
    private final static BillingApiService service = new BillingApiServiceImpl();

    public static BillingApiService getBillingApi() {
        return service;
    }
}
