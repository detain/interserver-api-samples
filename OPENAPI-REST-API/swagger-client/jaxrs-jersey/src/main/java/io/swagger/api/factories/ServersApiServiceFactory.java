package io.swagger.api.factories;

import io.swagger.api.ServersApiService;
import io.swagger.api.impl.ServersApiServiceImpl;


public class ServersApiServiceFactory {
    private final static ServersApiService service = new ServersApiServiceImpl();

    public static ServersApiService getServersApi() {
        return service;
    }
}
