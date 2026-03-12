package io.swagger.api.factories;

import io.swagger.api.VpsApiService;
import io.swagger.api.impl.VpsApiServiceImpl;


public class VpsApiServiceFactory {
    private final static VpsApiService service = new VpsApiServiceImpl();

    public static VpsApiService getVpsApi() {
        return service;
    }
}
