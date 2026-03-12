package io.swagger.api.factories;

import io.swagger.api.MailApiService;
import io.swagger.api.impl.MailApiServiceImpl;


public class MailApiServiceFactory {
    private final static MailApiService service = new MailApiServiceImpl();

    public static MailApiService getMailApi() {
        return service;
    }
}
