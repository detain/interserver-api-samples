package io.swagger.api.factories;

import io.swagger.api.SearchApiService;
import io.swagger.api.impl.SearchApiServiceImpl;


public class SearchApiServiceFactory {
    private final static SearchApiService service = new SearchApiServiceImpl();

    public static SearchApiService getSearchApi() {
        return service;
    }
}
