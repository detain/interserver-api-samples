package io.swagger.api.factories;

import io.swagger.api.AffiliateApiService;
import io.swagger.api.impl.AffiliateApiServiceImpl;


public class AffiliateApiServiceFactory {
    private final static AffiliateApiService service = new AffiliateApiServiceImpl();

    public static AffiliateApiService getAffiliateApi() {
        return service;
    }
}
