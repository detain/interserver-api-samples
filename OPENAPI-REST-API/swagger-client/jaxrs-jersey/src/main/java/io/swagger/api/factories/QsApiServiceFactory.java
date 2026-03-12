package io.swagger.api.factories;

import io.swagger.api.QsApiService;
import io.swagger.api.impl.QsApiServiceImpl;


public class QsApiServiceFactory {
    private final static QsApiService service = new QsApiServiceImpl();

    public static QsApiService getQsApi() {
        return service;
    }
}
