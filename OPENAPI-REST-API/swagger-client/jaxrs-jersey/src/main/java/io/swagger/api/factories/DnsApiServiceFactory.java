package io.swagger.api.factories;

import io.swagger.api.DnsApiService;
import io.swagger.api.impl.DnsApiServiceImpl;


public class DnsApiServiceFactory {
    private final static DnsApiService service = new DnsApiServiceImpl();

    public static DnsApiService getDnsApi() {
        return service;
    }
}
