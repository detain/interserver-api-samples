package io.swagger.api.factories;

import io.swagger.api.OauthApiService;
import io.swagger.api.impl.OauthApiServiceImpl;


public class OauthApiServiceFactory {
    private final static OauthApiService service = new OauthApiServiceImpl();

    public static OauthApiService getOauthApi() {
        return service;
    }
}
