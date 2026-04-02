@isTest
private class OASFloatingIPsApiTest {
    /**
     * Place Floating IP Order
     *
     * Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.
     */
    @isTest
    private static void addFloatingIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASFloatingIPsApi api;
        OASServiceOrderPostResponse response;
        OASServiceOrderPostResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addFloatingIp();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addFloatingIp();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addFloatingIp();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addFloatingIp();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addFloatingIp();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addFloatingIp();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel Floating IP
     *
     * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
     */
    @isTest
    private static void floatingIpsCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASFloatingIPsApi api;
        OASFloatingIpsCancel200Response response;
        OASFloatingIpsCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASFloatingIpsCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASFloatingIpsCancel200Response.getExample();
        response = (OASFloatingIpsCancel200Response) api.floatingIpsCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASFloatingIpsCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASFloatingIpsCancel200Response.getExample();
        response = (OASFloatingIpsCancel200Response) api.floatingIpsCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASFloatingIpsCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASFloatingIpsCancel200Response.getExample();
        response = (OASFloatingIpsCancel200Response) api.floatingIpsCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASFloatingIpsCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASFloatingIpsCancel200Response.getExample();
        response = (OASFloatingIpsCancel200Response) api.floatingIpsCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASFloatingIpsCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASFloatingIpsCancel200Response.getExample();
        response = (OASFloatingIpsCancel200Response) api.floatingIpsCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASFloatingIpsCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASFloatingIpsCancel200Response.getExample();
        response = (OASFloatingIpsCancel200Response) api.floatingIpsCancel(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * View Floating IP
     *
     * Returns detailed information about a specific Floating IP service including its current target IP assignment.
     */
    @isTest
    private static void getFloatingIpInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASFloatingIPsApi api;
        Object response;
        Object expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Floating IP Invoices
     *
     * Returns the billing invoices associated with this Floating IP service.
     */
    @isTest
    private static void getFloatingIpInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASFloatingIPsApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getFloatingIpInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getFloatingIpInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getFloatingIpInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getFloatingIpInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getFloatingIpInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getFloatingIpInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Floating IPs
     *
     * Returns all Floating IP services on the account with their current status and assignment details.
     */
    @isTest
    private static void getFloatingIpsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASFloatingIPsApi api;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getFloatingIpsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getFloatingIpsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getFloatingIpsList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend Floating IPs Welcome Email
     *
     * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
     */
    @isTest
    private static void getFloatingIpsWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASFloatingIPsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getFloatingIpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getFloatingIpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getFloatingIpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getFloatingIpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getFloatingIpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getFloatingIpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Floating IP Ordering Information
     *
     * Retrieves available options and pricing for ordering a new Floating IP.
     */
    @isTest
    private static void getNewFloatingIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASFloatingIPsApi api;
        Object response;
        Object expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getNewFloatingIp();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getNewFloatingIp();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getNewFloatingIp();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change Floating IP Target
     *
     * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
     */
    @isTest
    private static void postFloatingIpsChangeIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'ip' => 'null'
        };

        OASClient client;
        OASFloatingIPsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postFloatingIpsChangeIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postFloatingIpsChangeIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postFloatingIpsChangeIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postFloatingIpsChangeIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postFloatingIpsChangeIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postFloatingIpsChangeIp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate Floating IP Order
     *
     * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
     */
    @isTest
    private static void putFloatingIpsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASFloatingIPsApi api;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putFloatingIps();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putFloatingIps();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putFloatingIps();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Floating IP
     *
     * Updates settings on a Floating IP service, such as its label or configuration metadata.
     */
    @isTest
    private static void updateFloatingIpInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASFloatingIPsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASFloatingIPsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateFloatingIpInfo(params);
        System.assertEquals(expectedResponse, response);
    }
}