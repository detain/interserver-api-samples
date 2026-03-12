package io.swagger.api.factories;

import io.swagger.api.WebsitesApiService;
import io.swagger.api.impl.WebsitesApiServiceImpl;


public class WebsitesApiServiceFactory {
    private final static WebsitesApiService service = new WebsitesApiServiceImpl();

    public static WebsitesApiService getWebsitesApi() {
        return service;
    }
}
