@isTest
private class OASScrubIpsApiTest {
    /**
     * Cancel Scrub IP Service
     *
     * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
     */
    @isTest
    private static void cancelScrubIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASCancelScrubIp200Response response;
        OASCancelScrubIp200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelScrubIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelScrubIp200Response.getExample();
        response = (OASCancelScrubIp200Response) api.cancelScrubIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelScrubIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelScrubIp200Response.getExample();
        response = (OASCancelScrubIp200Response) api.cancelScrubIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelScrubIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelScrubIp200Response.getExample();
        response = (OASCancelScrubIp200Response) api.cancelScrubIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelScrubIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelScrubIp200Response.getExample();
        response = (OASCancelScrubIp200Response) api.cancelScrubIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelScrubIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelScrubIp200Response.getExample();
        response = (OASCancelScrubIp200Response) api.cancelScrubIp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelScrubIp200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelScrubIp200Response.getExample();
        response = (OASCancelScrubIp200Response) api.cancelScrubIp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Create Traffic Filter
     *
     * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
     */
    @isTest
    private static void createFilterTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSCreateFilter' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASCreateFilter201Response response;
        OASCreateFilter201Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateFilter201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateFilter201Response.getExample();
        response = (OASCreateFilter201Response) api.createFilter(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Create Geo Firewall Rule
     *
     * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
     */
    @isTest
    private static void createGeoRuleTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSCreateGeoFirewallRule' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASCreateRule201Response response;
        OASCreateRule201Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createGeoRule(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Create Firewall Rule
     *
     * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
     */
    @isTest
    private static void createRuleTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSCreateFirewallRule' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASCreateRule201Response response;
        OASCreateRule201Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCreateRule201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCreateRule201Response.getExample();
        response = (OASCreateRule201Response) api.createRule(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Traffic Filter
     *
     * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
     */
    @isTest
    private static void deleteFilterTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSCreateFilter' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASDeleteFilter200Response response;
        OASDeleteFilter200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDeleteFilter200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDeleteFilter200Response.getExample();
        response = (OASDeleteFilter200Response) api.deleteFilter(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Disable Scrub Protection
     *
     * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
     */
    @isTest
    private static void disableScrubTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASDisableScrub200Response response;
        OASDisableScrub200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDisableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDisableScrub200Response.getExample();
        response = (OASDisableScrub200Response) api.disableScrub(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Enable Scrub Protection
     *
     * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
     */
    @isTest
    private static void enableScrubTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASEnableScrub200Response response;
        OASEnableScrub200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASEnableScrub200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASEnableScrub200Response.getExample();
        response = (OASEnableScrub200Response) api.enableScrub(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Scrub IP Ordering Information
     *
     * Returns the available Scrub IP service plans and pricing information needed to build an order form.
     */
    @isTest
    private static void getOrderDetailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASScrubIpsApi api;
        OASGetOrderDetail200Response response;
        OASGetOrderDetail200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetOrderDetail200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOrderDetail200Response.getExample();
        response = (OASGetOrderDetail200Response) api.getOrderDetail();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetOrderDetail200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOrderDetail200Response.getExample();
        response = (OASGetOrderDetail200Response) api.getOrderDetail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetOrderDetail200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOrderDetail200Response.getExample();
        response = (OASGetOrderDetail200Response) api.getOrderDetail();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetOrderDetail200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOrderDetail200Response.getExample();
        response = (OASGetOrderDetail200Response) api.getOrderDetail();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetOrderDetail200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOrderDetail200Response.getExample();
        response = (OASGetOrderDetail200Response) api.getOrderDetail();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetOrderDetail200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOrderDetail200Response.getExample();
        response = (OASGetOrderDetail200Response) api.getOrderDetail();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Scrub IP Details
     *
     * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
     */
    @isTest
    private static void getScrubIpDetailsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASGetScrubIpDetails200Response response;
        OASGetScrubIpDetails200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetScrubIpDetails200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetScrubIpDetails200Response.getExample();
        response = (OASGetScrubIpDetails200Response) api.getScrubIpDetails(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetScrubIpDetails200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetScrubIpDetails200Response.getExample();
        response = (OASGetScrubIpDetails200Response) api.getScrubIpDetails(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetScrubIpDetails200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetScrubIpDetails200Response.getExample();
        response = (OASGetScrubIpDetails200Response) api.getScrubIpDetails(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetScrubIpDetails200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetScrubIpDetails200Response.getExample();
        response = (OASGetScrubIpDetails200Response) api.getScrubIpDetails(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetScrubIpDetails200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetScrubIpDetails200Response.getExample();
        response = (OASGetScrubIpDetails200Response) api.getScrubIpDetails(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetScrubIpDetails200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetScrubIpDetails200Response.getExample();
        response = (OASGetScrubIpDetails200Response) api.getScrubIpDetails(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Scrub Filter Types
     *
     * Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
     */
    @isTest
    private static void getScrubIpFilterTypesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASScrubIpsApi api;
        OASScrubIpFilterTypes response;
        OASScrubIpFilterTypes expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpFilterTypes.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpFilterTypes.getExample();
        response = (OASScrubIpFilterTypes) api.getScrubIpFilterTypes();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpFilterTypes.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpFilterTypes.getExample();
        response = (OASScrubIpFilterTypes) api.getScrubIpFilterTypes();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpFilterTypes.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpFilterTypes.getExample();
        response = (OASScrubIpFilterTypes) api.getScrubIpFilterTypes();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpFilterTypes.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpFilterTypes.getExample();
        response = (OASScrubIpFilterTypes) api.getScrubIpFilterTypes();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpFilterTypes.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpFilterTypes.getExample();
        response = (OASScrubIpFilterTypes) api.getScrubIpFilterTypes();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpFilterTypes.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpFilterTypes.getExample();
        response = (OASScrubIpFilterTypes) api.getScrubIpFilterTypes();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get ScrubIp Invoices
     *
     * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
     */
    @isTest
    private static void getScrubIpInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getScrubIpInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getScrubIpInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getScrubIpInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getScrubIpInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getScrubIpInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getScrubIpInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Scrub IP Logs
     *
     * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
     */
    @isTest
    private static void getScrubIpLogsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 413232  
        };

        OASClient client;
        OASScrubIpsApi api;
        List<OASScrubIpsLogRowSchema> response;
        List<OASScrubIpsLogRowSchema> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()};
        response = (List<OASScrubIpsLogRowSchema>) api.getScrubIpLogs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()};
        response = (List<OASScrubIpsLogRowSchema>) api.getScrubIpLogs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()};
        response = (List<OASScrubIpsLogRowSchema>) api.getScrubIpLogs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()};
        response = (List<OASScrubIpsLogRowSchema>) api.getScrubIpLogs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()};
        response = (List<OASScrubIpsLogRowSchema>) api.getScrubIpLogs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsLogRowSchema>{OASScrubIpsLogRowSchema.getExample()};
        response = (List<OASScrubIpsLogRowSchema>) api.getScrubIpLogs(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Scrub IP Services
     *
     * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
     */
    @isTest
    private static void getScrubIpsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASScrubIpsApi api;
        List<OASScrubIpsRowSchema> response;
        List<OASScrubIpsRowSchema> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()};
        response = (List<OASScrubIpsRowSchema>) api.getScrubIpsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()};
        response = (List<OASScrubIpsRowSchema>) api.getScrubIpsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()};
        response = (List<OASScrubIpsRowSchema>) api.getScrubIpsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()};
        response = (List<OASScrubIpsRowSchema>) api.getScrubIpsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()};
        response = (List<OASScrubIpsRowSchema>) api.getScrubIpsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASScrubIpsRowSchema>{OASScrubIpsRowSchema.getExample()};
        response = (List<OASScrubIpsRowSchema>) api.getScrubIpsList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Place Scrub IP Order
     *
     * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
     */
    @isTest
    private static void placeScrubOrderTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSScrubIpPlaceOrder' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASPlaceScrubOrder201Response response;
        OASPlaceScrubOrder201Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPlaceScrubOrder201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPlaceScrubOrder201Response.getExample();
        response = (OASPlaceScrubOrder201Response) api.placeScrubOrder(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPlaceScrubOrder201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPlaceScrubOrder201Response.getExample();
        response = (OASPlaceScrubOrder201Response) api.placeScrubOrder(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPlaceScrubOrder201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPlaceScrubOrder201Response.getExample();
        response = (OASPlaceScrubOrder201Response) api.placeScrubOrder(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPlaceScrubOrder201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPlaceScrubOrder201Response.getExample();
        response = (OASPlaceScrubOrder201Response) api.placeScrubOrder(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPlaceScrubOrder201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPlaceScrubOrder201Response.getExample();
        response = (OASPlaceScrubOrder201Response) api.placeScrubOrder(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPlaceScrubOrder201Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPlaceScrubOrder201Response.getExample();
        response = (OASPlaceScrubOrder201Response) api.placeScrubOrder(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Geo Firewall Rule
     *
     * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     */
    @isTest
    private static void scrubIpsDeleteGeoRuleTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDeleteGeoFirewallRule' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASScrubIpsDeleteRule200Response response;
        OASScrubIpsDeleteRule200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteGeoRule(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Firewall Rule
     *
     * Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
     */
    @isTest
    private static void scrubIpsDeleteRuleTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDeleteFirewallRule' => ''
        };

        OASClient client;
        OASScrubIpsApi api;
        OASScrubIpsDeleteRule200Response response;
        OASScrubIpsDeleteRule200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASScrubIpsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASScrubIpsDeleteRule200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASScrubIpsDeleteRule200Response.getExample();
        response = (OASScrubIpsDeleteRule200Response) api.scrubIpsDeleteRule(params);
        System.assertEquals(expectedResponse, response);
    }
}