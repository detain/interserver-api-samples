@isTest
private class OASSSLCertificatesApiTest {
    /**
     * Place SSL Cert Order
     *
     * Places an order for a new SSL certificate. Use &#x60;PUT /ssl/order&#x60; to validate the order first.
     */
    @isTest
    private static void addSslTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASSSLCertificatesApi api;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addSsl();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addSsl();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addSsl();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * SSL Cert Ordering Information
     *
     * Retrieves available SSL certificate types and pricing for ordering.
     */
    @isTest
    private static void getNewSslTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASSSLCertificatesApi api;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getNewSsl();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getNewSsl();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getNewSsl();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get SSL Cert Info
     *
     * Returns detailed information about a specific SSL certificate including its domain and expiration.
     */
    @isTest
    private static void getSslInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASSSLCertificatesApi api;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getSslInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getSslInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getSslInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get SSL Cert Invoices
     *
     * Returns the billing invoices associated with this SSL certificate.
     */
    @isTest
    private static void getSslInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASSSLCertificatesApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getSslInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getSslInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getSslInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getSslInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getSslInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getSslInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List SSL Certs
     *
     * Returns all SSL certificate services on the account with their current status.
     */
    @isTest
    private static void getSslListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASSSLCertificatesApi api;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getSslList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getSslList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getSslList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend SSL Welcome Email
     *
     * Resends the welcome email for the order.
     */
    @isTest
    private static void getSslWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASSSLCertificatesApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getSslWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getSslWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getSslWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getSslWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getSslWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getSslWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate SSL Cert Order
     *
     * Validates an SSL certificate order before placing it.
     */
    @isTest
    private static void putSslTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASSSLCertificatesApi api;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putSsl();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putSsl();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putSsl();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel SSL Certificate Service
     *
     * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
     */
    @isTest
    private static void sslCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASSSLCertificatesApi api;
        OASSslCancel200Response response;
        OASSslCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSslCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSslCancel200Response.getExample();
        response = (OASSslCancel200Response) api.sslCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSslCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSslCancel200Response.getExample();
        response = (OASSslCancel200Response) api.sslCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSslCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSslCancel200Response.getExample();
        response = (OASSslCancel200Response) api.sslCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSslCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSslCancel200Response.getExample();
        response = (OASSslCancel200Response) api.sslCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSslCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSslCancel200Response.getExample();
        response = (OASSslCancel200Response) api.sslCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSslCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSslCancel200Response.getExample();
        response = (OASSslCancel200Response) api.sslCancel(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update SSL Cert Order
     *
     * Updates settings on an SSL certificate order.
     */
    @isTest
    private static void updateSslInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASSSLCertificatesApi api;
        String js = '';

        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateSslInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateSslInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASSSLCertificatesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateSslInfo(params);
        System.assertEquals(expectedResponse, response);
    }
}