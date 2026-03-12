package io.swagger.api.factories;

import io.swagger.api.DomainsApiService;
import io.swagger.api.impl.DomainsApiServiceImpl;


public class DomainsApiServiceFactory {
    private final static DomainsApiService service = new DomainsApiServiceImpl();

    public static DomainsApiService getDomainsApi() {
        return service;
    }
}
