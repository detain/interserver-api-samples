@isTest
private class OASMailApiTest {
    /**
     * Place Mail Order
     *
     * Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     */
    @isTest
    private static void addMailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASMailApi api;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addMail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addMail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addMail();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Create Deny Rule
     *
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     */
    @isTest
    private static void addRuleTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDenyRuleNew' => {"user":"mb20682","type":"email","data":"domeinwo@server.guesshost.net"}
        };

        OASClient client;
        OASMailApi api;
        OASGenericResponse response;
        OASGenericResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.addRule(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Create Mail Alert
     *
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     */
    @isTest
    private static void createMailAlertTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSMailAlertRequest' => ''
        };

        OASClient client;
        OASMailApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.createMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.createMailAlert(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.createMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.createMailAlert(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.createMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.createMailAlert(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Mail Alert
     *
     * Deletes an existing alert definition for the mail service.
     */
    @isTest
    private static void deleteMailAlertTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'alertId' => ''
        };

        OASClient client;
        OASMailApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteMailAlert(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteMailAlert(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteMailAlert(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Deny Rule
     *
     * Removes a deny rule from the mail service.
     */
    @isTest
    private static void deleteRuleTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'rule' => 34
        };

        OASClient client;
        OASMailApi api;
        OASGenericResponse response;
        OASGenericResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.deleteRule(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Remove Email Address from Block List
     *
     * Removes an email address from the mail service\&#39;s block lists.
     */
    @isTest
    private static void delistBlockTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'email' => 'null'
        };

        OASClient client;
        OASMailApi api;
        OASGenericResponse response;
        OASGenericResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.delistBlock(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Mail Alerts
     *
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     */
    @isTest
    private static void getMailAlertsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASMailAlertsResponse response;
        OASMailAlertsResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailAlertsResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailAlertsResponse.getExample();
        response = (OASMailAlertsResponse) api.getMailAlerts(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailAlertsResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailAlertsResponse.getExample();
        response = (OASMailAlertsResponse) api.getMailAlerts(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailAlertsResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailAlertsResponse.getExample();
        response = (OASMailAlertsResponse) api.getMailAlerts(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailAlertsResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailAlertsResponse.getExample();
        response = (OASMailAlertsResponse) api.getMailAlerts(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailAlertsResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailAlertsResponse.getExample();
        response = (OASMailAlertsResponse) api.getMailAlerts(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailAlertsResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailAlertsResponse.getExample();
        response = (OASMailAlertsResponse) api.getMailAlerts(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Blocked Email Addresses
     *
     * Displays a listing of the blocked email addresses
     */
    @isTest
    private static void getMailBlocksTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASMailBlocks response;
        OASMailBlocks expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailBlocks.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailBlocks.getExample();
        response = (OASMailBlocks) api.getMailBlocks(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Delist Status
     *
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     */
    @isTest
    private static void getMailDelistTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASMailDelistResponse response;
        OASMailDelistResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailDelistResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDelistResponse.getExample();
        response = (OASMailDelistResponse) api.getMailDelist(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailDelistResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDelistResponse.getExample();
        response = (OASMailDelistResponse) api.getMailDelist(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailDelistResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDelistResponse.getExample();
        response = (OASMailDelistResponse) api.getMailDelist(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailDelistResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDelistResponse.getExample();
        response = (OASMailDelistResponse) api.getMailDelist(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailDelistResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDelistResponse.getExample();
        response = (OASMailDelistResponse) api.getMailDelist(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailDelistResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDelistResponse.getExample();
        response = (OASMailDelistResponse) api.getMailDelist(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Deliverability Metrics
     *
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     */
    @isTest
    private static void getMailDeliverabilityTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASMailDeliverabilityResponse response;
        OASMailDeliverabilityResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailDeliverabilityResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDeliverabilityResponse.getExample();
        response = (OASMailDeliverabilityResponse) api.getMailDeliverability(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailDeliverabilityResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDeliverabilityResponse.getExample();
        response = (OASMailDeliverabilityResponse) api.getMailDeliverability(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailDeliverabilityResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDeliverabilityResponse.getExample();
        response = (OASMailDeliverabilityResponse) api.getMailDeliverability(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailDeliverabilityResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDeliverabilityResponse.getExample();
        response = (OASMailDeliverabilityResponse) api.getMailDeliverability(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailDeliverabilityResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDeliverabilityResponse.getExample();
        response = (OASMailDeliverabilityResponse) api.getMailDeliverability(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailDeliverabilityResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailDeliverabilityResponse.getExample();
        response = (OASMailDeliverabilityResponse) api.getMailDeliverability(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Mail Order
     *
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     */
    @isTest
    private static void getMailInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASMailSchema response;
        OASMailSchema expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailSchema.getExample();
        response = (OASMailSchema) api.getMailInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailSchema.getExample();
        response = (OASMailSchema) api.getMailInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailSchema.getExample();
        response = (OASMailSchema) api.getMailInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailSchema.getExample();
        response = (OASMailSchema) api.getMailInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailSchema.getExample();
        response = (OASMailSchema) api.getMailInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailSchema.getExample();
        response = (OASMailSchema) api.getMailInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Mail Invoices
     *
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     */
    @isTest
    private static void getMailInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getMailInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getMailInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getMailInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getMailInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getMailInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getMailInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Mail Orders
     *
     * Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.
     */
    @isTest
    private static void getMailListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASMailApi api;
        List<OASMailRow> response;
        List<OASMailRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASMailRow>{OASMailRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASMailRow>{OASMailRow.getExample()};
        response = (List<OASMailRow>) api.getMailList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASMailRow>{OASMailRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASMailRow>{OASMailRow.getExample()};
        response = (List<OASMailRow>) api.getMailList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASMailRow>{OASMailRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASMailRow>{OASMailRow.getExample()};
        response = (List<OASMailRow>) api.getMailList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASMailRow>{OASMailRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASMailRow>{OASMailRow.getExample()};
        response = (List<OASMailRow>) api.getMailList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASMailRow>{OASMailRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASMailRow>{OASMailRow.getExample()};
        response = (List<OASMailRow>) api.getMailList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASMailRow>{OASMailRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASMailRow>{OASMailRow.getExample()};
        response = (List<OASMailRow>) api.getMailList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend Mail Welcome Email
     *
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     */
    @isTest
    private static void getMailWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getMailWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getMailWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getMailWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getMailWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getMailWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getMailWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Mail Ordering Information
     *
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     */
    @isTest
    private static void getNewMailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASMailApi api;
        OASMailOrder response;
        OASMailOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailOrder.getExample();
        response = (OASMailOrder) api.getNewMail();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailOrder.getExample();
        response = (OASMailOrder) api.getNewMail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailOrder.getExample();
        response = (OASMailOrder) api.getNewMail();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailOrder.getExample();
        response = (OASMailOrder) api.getNewMail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailOrder.getExample();
        response = (OASMailOrder) api.getNewMail();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailOrder.getExample();
        response = (OASMailOrder) api.getNewMail();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Deny Rules
     *
     * Returns a listing of all the deny block rules configured for this mail service.
     */
    @isTest
    private static void getRulesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        List<OASDenyRuleRecord> response;
        List<OASDenyRuleRecord> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDenyRuleRecord>{OASDenyRuleRecord.getExample()};
        response = (List<OASDenyRuleRecord>) api.getRules(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Mail Usage Statistics
     *
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     */
    @isTest
    private static void getStatsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'r_time' => all
        };

        OASClient client;
        OASMailApi api;
        OASMailStatsType response;
        OASMailStatsType expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailStatsType.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailStatsType.getExample();
        response = (OASMailStatsType) api.getStats(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel Mail
     *
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     */
    @isTest
    private static void mailCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASMailCancel200Response response;
        OASMailCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailCancel200Response.getExample();
        response = (OASMailCancel200Response) api.mailCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailCancel200Response.getExample();
        response = (OASMailCancel200Response) api.mailCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailCancel200Response.getExample();
        response = (OASMailCancel200Response) api.mailCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailCancel200Response.getExample();
        response = (OASMailCancel200Response) api.mailCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailCancel200Response.getExample();
        response = (OASMailCancel200Response) api.mailCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMailCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailCancel200Response.getExample();
        response = (OASMailCancel200Response) api.mailCancel(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delist a Blocked Sender
     *
     * Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.
     */
    @isTest
    private static void postMailDelistTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSMailDelistRequest' => ''
        };

        OASClient client;
        OASMailApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postMailDelist(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postMailDelist(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postMailDelist(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postMailDelist(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postMailDelist(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postMailDelist(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate Mail Order
     *
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     */
    @isTest
    private static void putMailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASMailApi api;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putMail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putMail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putMail();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reset Mail Password
     *
     * Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.
     */
    @isTest
    private static void resetMailPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASMailApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.resetMailPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.resetMailPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.resetMailPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.resetMailPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.resetMailPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.resetMailPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Send Email with Advanced Options
     *
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.
     */
    @isTest
    private static void sendAdvMailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSSendMailAdv' => {"subject":"Welcome","body":"Hello","from":{"email":"user@domain.com"},"to":[{"email":"someone@client.com","name":"Mr Client"}],"attachments":[{"filename":"message.txt","data":"base64_encoded_contents"}],"id":66}
        };

        OASClient client;
        OASMailApi api;
        OASGenericResponse response;
        OASGenericResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendAdvMail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Send Email
     *
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.
     */
    @isTest
    private static void sendMailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSSendMail' => ''
        };

        OASClient client;
        OASMailApi api;
        OASGenericResponse response;
        OASGenericResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGenericResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGenericResponse.getExample();
        response = (OASGenericResponse) api.sendMail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Mail Alert
     *
     * Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.
     */
    @isTest
    private static void updateMailAlertTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSMailAlertUpdateRequest' => ''
        };

        OASClient client;
        OASMailApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateMailAlert(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateMailAlert(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateMailAlert(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateMailAlert(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Mail Order
     *
     * Updates mail service metadata for the order, such as stored settings or account details.
     */
    @isTest
    private static void updateMailInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASMailApi api;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateMailInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateMailInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateMailInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * View Mail Log
     *
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
     */
    @isTest
    private static void viewMailLogTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'id2' => 2604,
            'origin' => 1.2.3.4,
            'mx' => mx.google.com,
            'r_from' => me@sender.com,
            'to' => you@receiver.com,
            'subject' => Support,
            'mailid' => 185997065c60008840,
            'skip' => 1000,
            'r_limit' => 1000,
            'startDate' => 1641781008,
            'endDate' => 1673317008,
            'delivered' => 0
        };

        OASClient client;
        OASMailApi api;
        OASMailLog response;
        OASMailLog expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailLog.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailLog.getExample();
        response = (OASMailLog) api.viewMailLog(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailLog.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailLog.getExample();
        response = (OASMailLog) api.viewMailLog(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASMailApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMailLog.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMailLog.getExample();
        response = (OASMailLog) api.viewMailLog(params);
        System.assertEquals(expectedResponse, response);
    }
}