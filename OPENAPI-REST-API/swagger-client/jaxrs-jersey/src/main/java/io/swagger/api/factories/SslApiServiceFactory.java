package io.swagger.api.factories;

import io.swagger.api.SslApiService;
import io.swagger.api.impl.SslApiServiceImpl;


public class SslApiServiceFactory {
    private final static SslApiService service = new SslApiServiceImpl();

    public static SslApiService getSslApi() {
        return service;
    }
}
