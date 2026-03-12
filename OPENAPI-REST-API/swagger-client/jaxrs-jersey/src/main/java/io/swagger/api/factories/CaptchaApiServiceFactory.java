package io.swagger.api.factories;

import io.swagger.api.CaptchaApiService;
import io.swagger.api.impl.CaptchaApiServiceImpl;


public class CaptchaApiServiceFactory {
    private final static CaptchaApiService service = new CaptchaApiServiceImpl();

    public static CaptchaApiService getCaptchaApi() {
        return service;
    }
}
