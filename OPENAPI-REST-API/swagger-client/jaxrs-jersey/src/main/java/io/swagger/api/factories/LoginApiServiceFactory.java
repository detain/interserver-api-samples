package io.swagger.api.factories;

import io.swagger.api.LoginApiService;
import io.swagger.api.impl.LoginApiServiceImpl;


public class LoginApiServiceFactory {
    private final static LoginApiService service = new LoginApiServiceImpl();

    public static LoginApiService getLoginApi() {
        return service;
    }
}
