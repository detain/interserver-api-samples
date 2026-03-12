package io.swagger.api.factories;

import io.swagger.api.LogoutApiService;
import io.swagger.api.impl.LogoutApiServiceImpl;


public class LogoutApiServiceFactory {
    private final static LogoutApiService service = new LogoutApiServiceImpl();

    public static LogoutApiService getLogoutApi() {
        return service;
    }
}
