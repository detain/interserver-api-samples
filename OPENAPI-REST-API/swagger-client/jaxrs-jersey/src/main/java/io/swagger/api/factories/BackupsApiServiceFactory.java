package io.swagger.api.factories;

import io.swagger.api.BackupsApiService;
import io.swagger.api.impl.BackupsApiServiceImpl;


public class BackupsApiServiceFactory {
    private final static BackupsApiService service = new BackupsApiServiceImpl();

    public static BackupsApiService getBackupsApi() {
        return service;
    }
}
