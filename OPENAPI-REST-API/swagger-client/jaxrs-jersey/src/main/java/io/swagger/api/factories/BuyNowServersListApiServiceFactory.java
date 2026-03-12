package io.swagger.api.factories;

import io.swagger.api.BuyNowServersListApiService;
import io.swagger.api.impl.BuyNowServersListApiServiceImpl;


public class BuyNowServersListApiServiceFactory {
    private final static BuyNowServersListApiService service = new BuyNowServersListApiServiceImpl();

    public static BuyNowServersListApiService getBuyNowServersListApi() {
        return service;
    }
}
