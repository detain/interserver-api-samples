package io.swagger.api.factories;

import io.swagger.api.HomeApiService;
import io.swagger.api.impl.HomeApiServiceImpl;


public class HomeApiServiceFactory {
    private final static HomeApiService service = new HomeApiServiceImpl();

    public static HomeApiService getHomeApi() {
        return service;
    }
}
