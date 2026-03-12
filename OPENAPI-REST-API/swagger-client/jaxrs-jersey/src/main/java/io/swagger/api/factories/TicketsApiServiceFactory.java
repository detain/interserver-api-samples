package io.swagger.api.factories;

import io.swagger.api.TicketsApiService;
import io.swagger.api.impl.TicketsApiServiceImpl;


public class TicketsApiServiceFactory {
    private final static TicketsApiService service = new TicketsApiServiceImpl();

    public static TicketsApiService getTicketsApi() {
        return service;
    }
}
