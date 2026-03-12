@isTest
private class OASDomainsApiTest {
    /**
     * Place Domain Order
     *
     * Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
     */
    @isTest
    private static void addDomainTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASDomainsApi api;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addDomain();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addDomain();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addDomain();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Add Domain DNSSEC Records
     *
     * Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
     */
    @isTest
    private static void addDomainDnssecTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDomainDnssecRequest' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Add Registered Nameserver
     *
     * Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
     */
    @isTest
    private static void addDomainNameserverTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDomainNameserverPostRequest' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.addDomainNameserver(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.addDomainNameserver(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.addDomainNameserver(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.addDomainNameserver(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.addDomainNameserver(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.addDomainNameserver(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel Domain Order
     *
     * Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
     */
    @isTest
    private static void cancelDomainTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASCancelDomain200Response response;
        OASCancelDomain200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelDomain200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelDomain200Response.getExample();
        response = (OASCancelDomain200Response) api.cancelDomain(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelDomain200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelDomain200Response.getExample();
        response = (OASCancelDomain200Response) api.cancelDomain(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelDomain200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelDomain200Response.getExample();
        response = (OASCancelDomain200Response) api.cancelDomain(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelDomain200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelDomain200Response.getExample();
        response = (OASCancelDomain200Response) api.cancelDomain(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelDomain200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelDomain200Response.getExample();
        response = (OASCancelDomain200Response) api.cancelDomain(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelDomain200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelDomain200Response.getExample();
        response = (OASCancelDomain200Response) api.cancelDomain(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Remove Domain DNSSEC Records
     *
     * Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
     */
    @isTest
    private static void deleteDomainDnssecTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'action' => 'null'
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Registered Nameserver
     *
     * Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
     */
    @isTest
    private static void deleteDomainNameserverTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'index' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.deleteDomainNameserver(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.deleteDomainNameserver(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.deleteDomainNameserver(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.deleteDomainNameserver(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.deleteDomainNameserver(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.deleteDomainNameserver(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Domain Contact Details
     *
     * Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
     */
    @isTest
    private static void getDomainContactTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASDomainContactDetails response;
        OASDomainContactDetails expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainContactDetails.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainContactDetails.getExample();
        response = (OASDomainContactDetails) api.getDomainContact(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainContactDetails.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainContactDetails.getExample();
        response = (OASDomainContactDetails) api.getDomainContact(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainContactDetails.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainContactDetails.getExample();
        response = (OASDomainContactDetails) api.getDomainContact(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainContactDetails.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainContactDetails.getExample();
        response = (OASDomainContactDetails) api.getDomainContact(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainContactDetails.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainContactDetails.getExample();
        response = (OASDomainContactDetails) api.getDomainContact(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainContactDetails.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainContactDetails.getExample();
        response = (OASDomainContactDetails) api.getDomainContact(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Domain DNSSEC Records
     *
     * Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
     */
    @isTest
    private static void getDomainDnssecTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASDomainDnssecRecords response;
        OASDomainDnssecRecords expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainDnssecRecords.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainDnssecRecords.getExample();
        response = (OASDomainDnssecRecords) api.getDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainDnssecRecords.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainDnssecRecords.getExample();
        response = (OASDomainDnssecRecords) api.getDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainDnssecRecords.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainDnssecRecords.getExample();
        response = (OASDomainDnssecRecords) api.getDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainDnssecRecords.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainDnssecRecords.getExample();
        response = (OASDomainDnssecRecords) api.getDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainDnssecRecords.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainDnssecRecords.getExample();
        response = (OASDomainDnssecRecords) api.getDomainDnssec(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainDnssecRecords.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainDnssecRecords.getExample();
        response = (OASDomainDnssecRecords) api.getDomainDnssec(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Domain Order
     *
     * Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
     */
    @isTest
    private static void getDomainInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASDomain response;
        OASDomain expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomain.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomain.getExample();
        response = (OASDomain) api.getDomainInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomain.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomain.getExample();
        response = (OASDomain) api.getDomainInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomain.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomain.getExample();
        response = (OASDomain) api.getDomainInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomain.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomain.getExample();
        response = (OASDomain) api.getDomainInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomain.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomain.getExample();
        response = (OASDomain) api.getDomainInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomain.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomain.getExample();
        response = (OASDomain) api.getDomainInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Domain Invoices
     *
     * Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
     */
    @isTest
    private static void getDomainInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getDomainInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getDomainInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getDomainInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getDomainInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getDomainInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getDomainInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Lookup Domain Availability and Pricing
     *
     * Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
     */
    @isTest
    private static void getDomainLookupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'name' => 'null'
        };

        OASClient client;
        OASDomainsApi api;
        OASDomainLookupResponse response;
        OASDomainLookupResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainLookupResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainLookupResponse.getExample();
        response = (OASDomainLookupResponse) api.getDomainLookup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Registered Nameservers
     *
     * Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
     */
    @isTest
    private static void getDomainNameserversTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASDomainNameserverGetResponse response;
        OASDomainNameserverGetResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainNameserverGetResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainNameserverGetResponse.getExample();
        response = (OASDomainNameserverGetResponse) api.getDomainNameservers(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainNameserverGetResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainNameserverGetResponse.getExample();
        response = (OASDomainNameserverGetResponse) api.getDomainNameservers(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainNameserverGetResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainNameserverGetResponse.getExample();
        response = (OASDomainNameserverGetResponse) api.getDomainNameservers(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainNameserverGetResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainNameserverGetResponse.getExample();
        response = (OASDomainNameserverGetResponse) api.getDomainNameservers(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainNameserverGetResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainNameserverGetResponse.getExample();
        response = (OASDomainNameserverGetResponse) api.getDomainNameservers(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainNameserverGetResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainNameserverGetResponse.getExample();
        response = (OASDomainNameserverGetResponse) api.getDomainNameservers(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Domain Order Fields
     *
     * Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
     */
    @isTest
    private static void getDomainOrderFieldsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'domain' => 'null',
            'regType' => 'null'
        };

        OASClient client;
        OASDomainsApi api;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getDomainOrderFields(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getDomainOrderFields(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getDomainOrderFields(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Domain Order Search Results
     *
     * Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
     */
    @isTest
    private static void getDomainOrderSearchResultsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'domain' => 'null'
        };

        OASClient client;
        OASDomainsApi api;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getDomainOrderSearchResults(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getDomainOrderSearchResults(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getDomainOrderSearchResults(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Start Domain Renewal Flow
     *
     * Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
     */
    @isTest
    private static void getDomainRenewalTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainRenewal(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainRenewal(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainRenewal(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainRenewal(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainRenewal(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainRenewal(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Search Domain Suggestions
     *
     * Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
     */
    @isTest
    private static void getDomainSearchTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'name' => 'null'
        };

        OASClient client;
        OASDomainsApi api;
        OASDomainSearchResponse response;
        OASDomainSearchResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainSearchResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainSearchResponse.getExample();
        response = (OASDomainSearchResponse) api.getDomainSearch(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Start Domain Transfer Flow
     *
     * Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
     */
    @isTest
    private static void getDomainTransferTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainTransfer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainTransfer(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainTransfer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainTransfer(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainTransfer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainTransfer(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Whois Privacy Status
     *
     * Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
     */
    @isTest
    private static void getDomainWhoisPrivacyTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Domain Orders
     *
     * Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
     */
    @isTest
    private static void getDomainsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASDomainsApi api;
        List<OASDomainRow> response;
        List<OASDomainRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASDomainRow>{OASDomainRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDomainRow>{OASDomainRow.getExample()};
        response = (List<OASDomainRow>) api.getDomainsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDomainRow>{OASDomainRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDomainRow>{OASDomainRow.getExample()};
        response = (List<OASDomainRow>) api.getDomainsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASDomainRow>{OASDomainRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDomainRow>{OASDomainRow.getExample()};
        response = (List<OASDomainRow>) api.getDomainsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDomainRow>{OASDomainRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDomainRow>{OASDomainRow.getExample()};
        response = (List<OASDomainRow>) api.getDomainsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASDomainRow>{OASDomainRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDomainRow>{OASDomainRow.getExample()};
        response = (List<OASDomainRow>) api.getDomainsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASDomainRow>{OASDomainRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASDomainRow>{OASDomainRow.getExample()};
        response = (List<OASDomainRow>) api.getDomainsList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend Domain Welcome Email
     *
     * Resends the welcome email for the domain service. The email contains registration details and management instructions.
     */
    @isTest
    private static void getDomainsWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getDomainsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Domain Ordering Information
     *
     * Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
     */
    @isTest
    private static void getNewDomainTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASDomainsApi api;
        OASDomainOrder response;
        OASDomainOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainOrder.getExample();
        response = (OASDomainOrder) api.getNewDomain();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainOrder.getExample();
        response = (OASDomainOrder) api.getNewDomain();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainOrder.getExample();
        response = (OASDomainOrder) api.getNewDomain();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainOrder.getExample();
        response = (OASDomainOrder) api.getNewDomain();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDomainOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainOrder.getExample();
        response = (OASDomainOrder) api.getNewDomain();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDomainOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDomainOrder.getExample();
        response = (OASDomainOrder) api.getNewDomain();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate Domain Order
     *
     * Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
     */
    @isTest
    private static void patchDomainsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASDomainsApi api;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.patchDomains();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.patchDomains();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.patchDomains();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Request Domain Renewal
     *
     * Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
     */
    @isTest
    private static void postDomainRenewalTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainRenewal(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainRenewal(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainRenewal(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainRenewal(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainRenewal(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainRenewal(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Request Domain Transfer
     *
     * Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
     */
    @isTest
    private static void postDomainTransferTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainTransfer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainTransfer(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainTransfer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainTransfer(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainTransfer(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postDomainTransfer(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Domain Order Search
     *
     * Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
     */
    @isTest
    private static void putDomainsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASDomainsApi api;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putDomains();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putDomains();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putDomains();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Domain Contact Details
     *
     * Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
     */
    @isTest
    private static void updateDomainContactTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDomainContactDetails' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainContact(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainContact(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainContact(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainContact(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainContact(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainContact(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Domain Order
     *
     * Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
     */
    @isTest
    private static void updateDomainInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASDomainsApi api;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateDomainInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateDomainInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateDomainInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Replace Nameserver Set
     *
     * Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
     */
    @isTest
    private static void updateDomainNameserversTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDomainNameserverPutRequest' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateDomainNameservers(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateDomainNameservers(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateDomainNameservers(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateDomainNameservers(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateDomainNameservers(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateDomainNameservers(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Whois Privacy
     *
     * Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
     */
    @isTest
    private static void updateDomainWhoisPrivacyTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDomainWhoisPrivacyRequest' => ''
        };

        OASClient client;
        OASDomainsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASDomainsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateDomainWhoisPrivacy(params);
        System.assertEquals(expectedResponse, response);
    }
}