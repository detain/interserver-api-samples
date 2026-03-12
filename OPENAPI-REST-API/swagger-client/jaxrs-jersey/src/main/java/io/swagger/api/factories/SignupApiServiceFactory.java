package io.swagger.api.factories;

import io.swagger.api.SignupApiService;
import io.swagger.api.impl.SignupApiServiceImpl;


public class SignupApiServiceFactory {
    private final static SignupApiService service = new SignupApiServiceImpl();

    public static SignupApiService getSignupApi() {
        return service;
    }
}
