package io.swagger.api.factories;

import io.swagger.api.InfoApiService;
import io.swagger.api.impl.InfoApiServiceImpl;


public class InfoApiServiceFactory {
    private final static InfoApiService service = new InfoApiServiceImpl();

    public static InfoApiService getInfoApi() {
        return service;
    }
}
