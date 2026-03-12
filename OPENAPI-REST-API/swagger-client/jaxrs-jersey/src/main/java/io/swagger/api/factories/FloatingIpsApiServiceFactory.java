package io.swagger.api.factories;

import io.swagger.api.FloatingIpsApiService;
import io.swagger.api.impl.FloatingIpsApiServiceImpl;


public class FloatingIpsApiServiceFactory {
    private final static FloatingIpsApiService service = new FloatingIpsApiServiceImpl();

    public static FloatingIpsApiService getFloatingIpsApi() {
        return service;
    }
}
