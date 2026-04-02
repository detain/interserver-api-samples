@isTest
private class OASServersApiTest {
    /**
     * Place Server Order
     *
     * Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.
     */
    @isTest
    private static void addServerTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASServersApi api;
        OASAddServer200Response response;
        OASAddServer200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASAddServer200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASAddServer200Response.getExample();
        response = (OASAddServer200Response) api.addServer();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASAddServer200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASAddServer200Response.getExample();
        response = (OASAddServer200Response) api.addServer();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASAddServer200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASAddServer200Response.getExample();
        response = (OASAddServer200Response) api.addServer();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASAddServer200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASAddServer200Response.getExample();
        response = (OASAddServer200Response) api.addServer();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASAddServer200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASAddServer200Response.getExample();
        response = (OASAddServer200Response) api.addServer();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASAddServer200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASAddServer200Response.getExample();
        response = (OASAddServer200Response) api.addServer();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Buy Now Server Options
     *
     * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.
     */
    @isTest
    private static void buyItNowServerOrderTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASServersApi api;
        OASBuyItNowServerOrder200Response response;
        OASBuyItNowServerOrder200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowServerOrder200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowServerOrder200Response.getExample();
        response = (OASBuyItNowServerOrder200Response) api.buyItNowServerOrder();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowServerOrder200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowServerOrder200Response.getExample();
        response = (OASBuyItNowServerOrder200Response) api.buyItNowServerOrder();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowServerOrder200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowServerOrder200Response.getExample();
        response = (OASBuyItNowServerOrder200Response) api.buyItNowServerOrder();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowServerOrder200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowServerOrder200Response.getExample();
        response = (OASBuyItNowServerOrder200Response) api.buyItNowServerOrder();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowServerOrder200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowServerOrder200Response.getExample();
        response = (OASBuyItNowServerOrder200Response) api.buyItNowServerOrder();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowServerOrder200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowServerOrder200Response.getExample();
        response = (OASBuyItNowServerOrder200Response) api.buyItNowServerOrder();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     */
    @isTest
    private static void getMPServersTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASServersApi api;
        OASBuyItNowList response;
        OASBuyItNowList expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Server Ordering Information
     *
     * Retrieves available server configurations and pricing for ordering a new dedicated server.
     */
    @isTest
    private static void getNewServerTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASServersApi api;
        OASServerOrder response;
        OASServerOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerOrder.getExample();
        response = (OASServerOrder) api.getNewServer();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerOrder.getExample();
        response = (OASServerOrder) api.getNewServer();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerOrder.getExample();
        response = (OASServerOrder) api.getNewServer();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerOrder.getExample();
        response = (OASServerOrder) api.getNewServer();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerOrder.getExample();
        response = (OASServerOrder) api.getNewServer();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerOrder.getExample();
        response = (OASServerOrder) api.getNewServer();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Server Order
     *
     * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
     */
    @isTest
    private static void getServerInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASServersApi api;
        OASServer response;
        OASServer expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServer.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServer.getExample();
        response = (OASServer) api.getServerInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServer.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServer.getExample();
        response = (OASServer) api.getServerInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServer.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServer.getExample();
        response = (OASServer) api.getServerInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServer.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServer.getExample();
        response = (OASServer) api.getServerInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServer.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServer.getExample();
        response = (OASServer) api.getServerInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServer.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServer.getExample();
        response = (OASServer) api.getServerInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Server Invoices
     *
     * Returns the billing invoices associated with this dedicated server.
     */
    @isTest
    private static void getServerInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASServersApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getServerInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getServerInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getServerInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getServerInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getServerInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getServerInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Servers
     *
     * Returns all dedicated server services on the account with their current status and configuration.
     */
    @isTest
    private static void getServerListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASServersApi api;
        List<OASServerRow> response;
        List<OASServerRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASServerRow>{OASServerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASServerRow>{OASServerRow.getExample()};
        response = (List<OASServerRow>) api.getServerList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASServerRow>{OASServerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASServerRow>{OASServerRow.getExample()};
        response = (List<OASServerRow>) api.getServerList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASServerRow>{OASServerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASServerRow>{OASServerRow.getExample()};
        response = (List<OASServerRow>) api.getServerList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASServerRow>{OASServerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASServerRow>{OASServerRow.getExample()};
        response = (List<OASServerRow>) api.getServerList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASServerRow>{OASServerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASServerRow>{OASServerRow.getExample()};
        response = (List<OASServerRow>) api.getServerList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASServerRow>{OASServerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASServerRow>{OASServerRow.getExample()};
        response = (List<OASServerRow>) api.getServerList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the server\&#39;s IP addresses.
     */
    @isTest
    private static void getServerReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASServersApi api;
        OASReverseDnsEntries response;
        OASReverseDnsEntries expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getServerReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getServerReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getServerReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getServerReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getServerReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getServerReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend Server Welcome Email
     *
     * Resends the welcome email for the order.
     */
    @isTest
    private static void getServersWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASServersApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getServersWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getServersWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getServersWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getServersWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getServersWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getServersWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Place Buy Now Server Order
     *
     * Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.
     */
    @isTest
    private static void placeBuyNowServerTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSPlaceBuyNowServerRequest' => ''
        };

        OASClient client;
        OASServersApi api;
        OASServersBuyNowResponse response;
        OASServersBuyNowResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersBuyNowResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersBuyNowResponse.getExample();
        response = (OASServersBuyNowResponse) api.placeBuyNowServer(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the server\&#39;s IP addresses.
     */
    @isTest
    private static void postServerReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSReverseDnsEntries' => ''
        };

        OASClient client;
        OASServersApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postServerReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postServerReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postServerReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postServerReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postServerReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postServerReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate Server Order
     *
     * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
     */
    @isTest
    private static void putServersTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putServers();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putServers();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putServers();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Server IPMI Live Information
     *
     * Returns the current IPMI live connection information for the server.
     */
    @isTest
    private static void serverIpmiLiveGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASServersApi api;
        OASServerIpmiLiveInfo response;
        OASServerIpmiLiveInfo expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLiveGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLiveGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLiveGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLiveGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLiveGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLiveGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Server IPMI Live Setup
     *
     * Configures IPMI live access by whitelisting your current IP address for connections to the server\&#39;s IPMI management interface.
     */
    @isTest
    private static void serverIpmiLivePostTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'ip' => 'null',
            'asset' => ''
        };

        OASClient client;
        OASServersApi api;
        OASServerIpmiLiveInfo response;
        OASServerIpmiLiveInfo expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLivePost(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLivePost(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLivePost(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLivePost(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLivePost(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServerIpmiLiveInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServerIpmiLiveInfo.getExample();
        response = (OASServerIpmiLiveInfo) api.serverIpmiLivePost(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get IPMI Power Status
     *
     * Returns the chassis power status from ipmi.
     */
    @isTest
    private static void serverIpmiPowerGetTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASServersApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerGet(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerGet(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerGet(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Server IPMI Power
     *
     * Uses the IPMI interface to set the Power status on the server.
     */
    @isTest
    private static void serverIpmiPowerPostTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'action' => 'null',
            'asset' => ''
        };

        OASClient client;
        OASServersApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerPost(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerPost(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerPost(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerPost(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerPost(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.serverIpmiPowerPost(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel Server Service
     *
     * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     */
    @isTest
    private static void serversCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASServersApi api;
        OASServersCancel200Response response;
        OASServersCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServersCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersCancel200Response.getExample();
        response = (OASServersCancel200Response) api.serversCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersCancel200Response.getExample();
        response = (OASServersCancel200Response) api.serversCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServersCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersCancel200Response.getExample();
        response = (OASServersCancel200Response) api.serversCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersCancel200Response.getExample();
        response = (OASServersCancel200Response) api.serversCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServersCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersCancel200Response.getExample();
        response = (OASServersCancel200Response) api.serversCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServersCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServersCancel200Response.getExample();
        response = (OASServersCancel200Response) api.serversCancel(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Server Order
     *
     * Updates settings on a dedicated server order.
     */
    @isTest
    private static void updateServerInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASServersApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateServerInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateServerInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateServerInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateServerInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateServerInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateServerInfo(params);
        System.assertEquals(expectedResponse, response);
    }
}