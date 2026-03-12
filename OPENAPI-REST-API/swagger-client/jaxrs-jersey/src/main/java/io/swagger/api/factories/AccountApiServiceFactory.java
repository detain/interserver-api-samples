package io.swagger.api.factories;

import io.swagger.api.AccountApiService;
import io.swagger.api.impl.AccountApiServiceImpl;


public class AccountApiServiceFactory {
    private final static AccountApiService service = new AccountApiServiceImpl();

    public static AccountApiService getAccountApi() {
        return service;
    }
}
