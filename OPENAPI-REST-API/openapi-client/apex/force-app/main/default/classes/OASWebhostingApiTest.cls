@isTest
private class OASWebhostingApiTest {
    /**
     * Place Website Order
     *
     * Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.
     */
    @isTest
    private static void addWebsiteTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASWebhostingApi api;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addWebsite();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addWebsite();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addWebsite();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Website Ordering Information
     *
     * Retrieves available webhosting plans and pricing for ordering.
     */
    @isTest
    private static void getNewWebsiteTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASWebhostingApi api;
        OASWebsitesOrder response;
        OASWebsitesOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsitesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsitesOrder.getExample();
        response = (OASWebsitesOrder) api.getNewWebsite();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsitesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsitesOrder.getExample();
        response = (OASWebsitesOrder) api.getNewWebsite();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsitesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsitesOrder.getExample();
        response = (OASWebsitesOrder) api.getNewWebsite();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsitesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsitesOrder.getExample();
        response = (OASWebsitesOrder) api.getNewWebsite();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsitesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsitesOrder.getExample();
        response = (OASWebsitesOrder) api.getNewWebsite();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsitesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsitesOrder.getExample();
        response = (OASWebsitesOrder) api.getNewWebsite();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Website IP Information
     *
     * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.
     */
    @isTest
    private static void getWebsiteBuyIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASGetWebsiteBuyIp200Response response;
        OASGetWebsiteBuyIp200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetWebsiteBuyIp200Response.getExample();
        response = (OASGetWebsiteBuyIp200Response) api.getWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetWebsiteBuyIp200Response.getExample();
        response = (OASGetWebsiteBuyIp200Response) api.getWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetWebsiteBuyIp200Response.getExample();
        response = (OASGetWebsiteBuyIp200Response) api.getWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetWebsiteBuyIp200Response.getExample();
        response = (OASGetWebsiteBuyIp200Response) api.getWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetWebsiteBuyIp200Response.getExample();
        response = (OASGetWebsiteBuyIp200Response) api.getWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetWebsiteBuyIp200Response.getExample();
        response = (OASGetWebsiteBuyIp200Response) api.getWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Website Order
     *
     * Returns detailed information about a specific webhosting order including its domain, plan, and status.
     */
    @isTest
    private static void getWebsiteInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASWebsite response;
        OASWebsite expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsite.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsite.getExample();
        response = (OASWebsite) api.getWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsite.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsite.getExample();
        response = (OASWebsite) api.getWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsite.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsite.getExample();
        response = (OASWebsite) api.getWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsite.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsite.getExample();
        response = (OASWebsite) api.getWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsite.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsite.getExample();
        response = (OASWebsite) api.getWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsite.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsite.getExample();
        response = (OASWebsite) api.getWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Website Invoices
     *
     * Returns the billing invoices associated with this webhosting service.
     */
    @isTest
    private static void getWebsiteInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getWebsiteInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getWebsiteInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getWebsiteInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getWebsiteInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getWebsiteInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getWebsiteInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Website Listing
     *
     * Gets a listing of your webhosting orders and service details.
     */
    @isTest
    private static void getWebsiteListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASWebhostingApi api;
        List<OASWebsiteRow> response;
        List<OASWebsiteRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASWebsiteRow>{OASWebsiteRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASWebsiteRow>{OASWebsiteRow.getExample()};
        response = (List<OASWebsiteRow>) api.getWebsiteList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASWebsiteRow>{OASWebsiteRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASWebsiteRow>{OASWebsiteRow.getExample()};
        response = (List<OASWebsiteRow>) api.getWebsiteList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASWebsiteRow>{OASWebsiteRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASWebsiteRow>{OASWebsiteRow.getExample()};
        response = (List<OASWebsiteRow>) api.getWebsiteList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASWebsiteRow>{OASWebsiteRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASWebsiteRow>{OASWebsiteRow.getExample()};
        response = (List<OASWebsiteRow>) api.getWebsiteList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASWebsiteRow>{OASWebsiteRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASWebsiteRow>{OASWebsiteRow.getExample()};
        response = (List<OASWebsiteRow>) api.getWebsiteList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASWebsiteRow>{OASWebsiteRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASWebsiteRow>{OASWebsiteRow.getExample()};
        response = (List<OASWebsiteRow>) api.getWebsiteList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Website Backups
     *
     * Gets a list of the backups that exist for a website and their sizes.
     */
    @isTest
    private static void getWebsitesBackupsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASWebsiteBackups response;
        OASWebsiteBackups expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsiteBackups.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteBackups.getExample();
        response = (OASWebsiteBackups) api.getWebsitesBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsiteBackups.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteBackups.getExample();
        response = (OASWebsiteBackups) api.getWebsitesBackups(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsiteBackups.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteBackups.getExample();
        response = (OASWebsiteBackups) api.getWebsitesBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsiteBackups.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteBackups.getExample();
        response = (OASWebsiteBackups) api.getWebsitesBackups(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsiteBackups.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteBackups.getExample();
        response = (OASWebsiteBackups) api.getWebsitesBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsiteBackups.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteBackups.getExample();
        response = (OASWebsiteBackups) api.getWebsitesBackups(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Hosting Panel Auto Login
     *
     * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
     */
    @isTest
    private static void getWebsitesLoginTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASWebsiteLoginResponse response;
        OASWebsiteLoginResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsiteLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteLoginResponse.getExample();
        response = (OASWebsiteLoginResponse) api.getWebsitesLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsiteLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteLoginResponse.getExample();
        response = (OASWebsiteLoginResponse) api.getWebsitesLogin(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsiteLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteLoginResponse.getExample();
        response = (OASWebsiteLoginResponse) api.getWebsitesLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsiteLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteLoginResponse.getExample();
        response = (OASWebsiteLoginResponse) api.getWebsitesLogin(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebsiteLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteLoginResponse.getExample();
        response = (OASWebsiteLoginResponse) api.getWebsitesLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebsiteLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebsiteLoginResponse.getExample();
        response = (OASWebsiteLoginResponse) api.getWebsitesLogin(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend Website Welcome Email
     *
     * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
     */
    @isTest
    private static void getWebsitesWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getWebsitesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getWebsitesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getWebsitesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getWebsitesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getWebsitesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getWebsitesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Website Reverse DNS
     *
     * Returns the current reverse DNS (PTR record) entries for the website\&#39;s IP addresses.
     */
    @isTest
    private static void gettWebsiteReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASReverseDnsEntries response;
        OASReverseDnsEntries expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.gettWebsiteReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.gettWebsiteReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.gettWebsiteReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.gettWebsiteReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.gettWebsiteReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.gettWebsiteReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Website IP DNS
     *
     * Updates the reverse DNS hostnames for the website\&#39;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
     */
    @isTest
    private static void postWebsiteBuyIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSPostWebsiteBuyIpRequest' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASPostWebsiteBuyIp200Response response;
        OASPostWebsiteBuyIp200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteBuyIp200Response.getExample();
        response = (OASPostWebsiteBuyIp200Response) api.postWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteBuyIp200Response.getExample();
        response = (OASPostWebsiteBuyIp200Response) api.postWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteBuyIp200Response.getExample();
        response = (OASPostWebsiteBuyIp200Response) api.postWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteBuyIp200Response.getExample();
        response = (OASPostWebsiteBuyIp200Response) api.postWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteBuyIp200Response.getExample();
        response = (OASPostWebsiteBuyIp200Response) api.postWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostWebsiteBuyIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteBuyIp200Response.getExample();
        response = (OASPostWebsiteBuyIp200Response) api.postWebsiteBuyIp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Request Website Migration
     *
     * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
     */
    @isTest
    private static void postWebsiteMigrationTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSPostWebsiteMigrationRequest' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASPostWebsiteMigration200Response response;
        OASPostWebsiteMigration200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostWebsiteMigration200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteMigration200Response.getExample();
        response = (OASPostWebsiteMigration200Response) api.postWebsiteMigration(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostWebsiteMigration200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteMigration200Response.getExample();
        response = (OASPostWebsiteMigration200Response) api.postWebsiteMigration(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostWebsiteMigration200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteMigration200Response.getExample();
        response = (OASPostWebsiteMigration200Response) api.postWebsiteMigration(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostWebsiteMigration200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteMigration200Response.getExample();
        response = (OASPostWebsiteMigration200Response) api.postWebsiteMigration(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostWebsiteMigration200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteMigration200Response.getExample();
        response = (OASPostWebsiteMigration200Response) api.postWebsiteMigration(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostWebsiteMigration200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostWebsiteMigration200Response.getExample();
        response = (OASPostWebsiteMigration200Response) api.postWebsiteMigration(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Website Reverse DNS
     *
     * Updates the reverse DNS entries for each of the IP addresses for the website.
     */
    @isTest
    private static void postWebsitesReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSReverseDnsEntries' => ''
        };

        OASClient client;
        OASWebhostingApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postWebsitesReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postWebsitesReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postWebsitesReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postWebsitesReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postWebsitesReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postWebsitesReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate Webhosting Order
     *
     * Validates a webhosting order before placing it.
     */
    @isTest
    private static void putWebsitesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASWebhostingApi api;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putWebsites();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putWebsites();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putWebsites();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Website Order
     *
     * Updates settings on a webhosting order.
     */
    @isTest
    private static void updateWebsiteInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASWebhostingApi api;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateWebsiteInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel Website
     *
     * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
     */
    @isTest
    private static void webhostingCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 123
        };

        OASClient client;
        OASWebhostingApi api;
        OASWebhostingCancel200Response response;
        OASWebhostingCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebhostingCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebhostingCancel200Response.getExample();
        response = (OASWebhostingCancel200Response) api.webhostingCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebhostingCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebhostingCancel200Response.getExample();
        response = (OASWebhostingCancel200Response) api.webhostingCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebhostingCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebhostingCancel200Response.getExample();
        response = (OASWebhostingCancel200Response) api.webhostingCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebhostingCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebhostingCancel200Response.getExample();
        response = (OASWebhostingCancel200Response) api.webhostingCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASWebhostingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASWebhostingCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebhostingCancel200Response.getExample();
        response = (OASWebhostingCancel200Response) api.webhostingCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASWebhostingCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASWebhostingCancel200Response.getExample();
        response = (OASWebhostingCancel200Response) api.webhostingCancel(params);
        System.assertEquals(expectedResponse, response);
    }
}