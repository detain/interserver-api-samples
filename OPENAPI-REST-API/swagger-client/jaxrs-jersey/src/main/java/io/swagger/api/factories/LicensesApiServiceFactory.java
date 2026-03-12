package io.swagger.api.factories;

import io.swagger.api.LicensesApiService;
import io.swagger.api.impl.LicensesApiServiceImpl;


public class LicensesApiServiceFactory {
    private final static LicensesApiService service = new LicensesApiServiceImpl();

    public static LicensesApiService getLicensesApi() {
        return service;
    }
}
