@isTest
private class OASLicensesApiTest {
    /**
     * Place License Order
     *
     * Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.
     */
    @isTest
    private static void addLicenseTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASLicensesApi api;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addLicense();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addLicense();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addLicense();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get License
     *
     * Returns detailed information about a specific license including its type, IP assignment, and status.
     */
    @isTest
    private static void getLicenseInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASLicensesApi api;
        OASLicense response;
        OASLicense expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicense.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicense.getExample();
        response = (OASLicense) api.getLicenseInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicense.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicense.getExample();
        response = (OASLicense) api.getLicenseInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicense.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicense.getExample();
        response = (OASLicense) api.getLicenseInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicense.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicense.getExample();
        response = (OASLicense) api.getLicenseInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicense.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicense.getExample();
        response = (OASLicense) api.getLicenseInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicense.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicense.getExample();
        response = (OASLicense) api.getLicenseInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get License Invoices
     *
     * Returns the billing invoices associated with this license service.
     */
    @isTest
    private static void getLicenseInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASLicensesApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getLicenseInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getLicenseInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getLicenseInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getLicenseInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getLicenseInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getLicenseInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Licenses
     *
     * Returns all software license services on the account with their current status and IP assignments.
     */
    @isTest
    private static void getLicenseListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASLicensesApi api;
        List<OASLicenseRow> response;
        List<OASLicenseRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASLicenseRow>{OASLicenseRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASLicenseRow>{OASLicenseRow.getExample()};
        response = (List<OASLicenseRow>) api.getLicenseList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASLicenseRow>{OASLicenseRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASLicenseRow>{OASLicenseRow.getExample()};
        response = (List<OASLicenseRow>) api.getLicenseList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASLicenseRow>{OASLicenseRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASLicenseRow>{OASLicenseRow.getExample()};
        response = (List<OASLicenseRow>) api.getLicenseList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASLicenseRow>{OASLicenseRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASLicenseRow>{OASLicenseRow.getExample()};
        response = (List<OASLicenseRow>) api.getLicenseList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASLicenseRow>{OASLicenseRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASLicenseRow>{OASLicenseRow.getExample()};
        response = (List<OASLicenseRow>) api.getLicenseList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASLicenseRow>{OASLicenseRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASLicenseRow>{OASLicenseRow.getExample()};
        response = (List<OASLicenseRow>) api.getLicenseList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get License Order Information for Category
     *
     * Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.
     */
    @isTest
    private static void getLicenseOrderCatTagInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'catTag' => 'null'
        };

        OASClient client;
        OASLicensesApi api;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getLicenseOrderCatTagInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getLicenseOrderCatTagInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getLicenseOrderCatTagInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend License Welcome Email
     *
     * Resends the welcome email for the license service. The email contains the license key and activation instructions.
     */
    @isTest
    private static void getLicensesWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASLicensesApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getLicensesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getLicensesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getLicensesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getLicensesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getLicensesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getLicensesWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get License Order Information
     *
     * Retrieves available license types, categories, and pricing for ordering a new license.
     */
    @isTest
    private static void getNewLicenseTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASLicensesApi api;
        OASLicensesOrder response;
        OASLicensesOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicensesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesOrder.getExample();
        response = (OASLicensesOrder) api.getNewLicense();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicensesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesOrder.getExample();
        response = (OASLicensesOrder) api.getNewLicense();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicensesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesOrder.getExample();
        response = (OASLicensesOrder) api.getNewLicense();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicensesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesOrder.getExample();
        response = (OASLicensesOrder) api.getNewLicense();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicensesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesOrder.getExample();
        response = (OASLicensesOrder) api.getNewLicense();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicensesOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesOrder.getExample();
        response = (OASLicensesOrder) api.getNewLicense();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel License
     *
     * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     */
    @isTest
    private static void licensesCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASLicensesApi api;
        OASLicensesCancel200Response response;
        OASLicensesCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicensesCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesCancel200Response.getExample();
        response = (OASLicensesCancel200Response) api.licensesCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicensesCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesCancel200Response.getExample();
        response = (OASLicensesCancel200Response) api.licensesCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicensesCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesCancel200Response.getExample();
        response = (OASLicensesCancel200Response) api.licensesCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicensesCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesCancel200Response.getExample();
        response = (OASLicensesCancel200Response) api.licensesCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLicensesCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesCancel200Response.getExample();
        response = (OASLicensesCancel200Response) api.licensesCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLicensesCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLicensesCancel200Response.getExample();
        response = (OASLicensesCancel200Response) api.licensesCancel(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change License IP
     *
     * Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
     */
    @isTest
    private static void postLicenseChangeIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSIpObject' => ''
        };

        OASClient client;
        OASLicensesApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postLicenseChangeIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postLicenseChangeIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postLicenseChangeIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postLicenseChangeIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postLicenseChangeIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postLicenseChangeIp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate License Order
     *
     * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
     */
    @isTest
    private static void putLicensesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASLicensesApi api;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putLicenses();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putLicenses();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putLicenses();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update License
     *
     * Updates settings on a license service such as its assigned IP.
     */
    @isTest
    private static void updateLicenseInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASLicensesApi api;
        String js = '';

        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateLicenseInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateLicenseInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASLicensesApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateLicenseInfo(params);
        System.assertEquals(expectedResponse, response);
    }
}