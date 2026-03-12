package io.swagger.api.factories;

import io.swagger.api.PingApiService;
import io.swagger.api.impl.PingApiServiceImpl;


public class PingApiServiceFactory {
    private final static PingApiService service = new PingApiServiceImpl();

    public static PingApiService getPingApi() {
        return service;
    }
}
