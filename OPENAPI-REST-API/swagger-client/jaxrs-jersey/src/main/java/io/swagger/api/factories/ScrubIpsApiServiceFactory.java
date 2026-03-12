package io.swagger.api.factories;

import io.swagger.api.ScrubIpsApiService;
import io.swagger.api.impl.ScrubIpsApiServiceImpl;


public class ScrubIpsApiServiceFactory {
    private final static ScrubIpsApiService service = new ScrubIpsApiServiceImpl();

    public static ScrubIpsApiService getScrubIpsApi() {
        return service;
    }
}
