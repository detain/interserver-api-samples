@isTest
private class OASVPSApiTest {
    /**
     * Place VPS Order
     *
     * Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
     */
    @isTest
    private static void addVpsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSVpsOrderPostRequest' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addVps(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addVps(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.addVps(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete VPS Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
     */
    @isTest
    private static void deleteVpsBackupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'file' => 'null',
            'all' => 0
        };

        OASClient client;
        OASVPSApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteVpsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteVpsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteVpsBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Blocks SMTP
     *
     * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
     */
    @isTest
    private static void doVpsBlockSmtpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive on the VPS.
     */
    @isTest
    private static void doVpsDisableCdTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableCd(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement on the VPS.
     */
    @isTest
    private static void doVpsDisableQuotaTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsDisableQuota(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the VPS CD drive.
     */
    @isTest
    private static void doVpsEjectCdTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEjectCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEjectCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEjectCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEjectCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEjectCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEjectCd(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement on the VPS.
     */
    @isTest
    private static void doVpsEnableQuotaTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEnableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEnableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEnableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEnableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEnableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsEnableQuota(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Restart VPS
     *
     * Restarts the VPS.
     */
    @isTest
    private static void doVpsRestartTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsRestart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsRestart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsRestart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsRestart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsRestart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsRestart(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Start VPS
     *
     * Powers on the VPS.
     */
    @isTest
    private static void doVpsStartTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStart(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Stop VPS
     *
     * Powers off the VPS.
     */
    @isTest
    private static void doVpsStopTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStop(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStop(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStop(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doVpsStop(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Download VPS Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
     */
    @isTest
    private static void downloadVpsBackupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSDownloadQsBackupRequest' => '',
            'all' => 0
        };

        OASClient client;
        OASVPSApi api;
        OASDownloadQsBackup200Response response;
        OASDownloadQsBackup200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadVpsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadVpsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadVpsBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * VPS Ordering Information
     *
     * Retrieves available VPS configurations, OS templates, and pricing for ordering.
     */
    @isTest
    private static void getNewVpsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASVPSApi api;
        OASVpsOrder response;
        OASVpsOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrder.getExample();
        response = (OASVpsOrder) api.getNewVps();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrder.getExample();
        response = (OASVpsOrder) api.getNewVps();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrder.getExample();
        response = (OASVpsOrder) api.getNewVps();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrder.getExample();
        response = (OASVpsOrder) api.getNewVps();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrder.getExample();
        response = (OASVpsOrder) api.getNewVps();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrder.getExample();
        response = (OASVpsOrder) api.getNewVps();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get VPS Backups List
     *
     * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
     */
    @isTest
    private static void getVpsBackupsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'all' => 0
        };

        OASClient client;
        OASVPSApi api;
        OASVpsBackupRows response;
        OASVpsBackupRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getVpsBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getVpsBackups(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getVpsBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getVpsBackups(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getVpsBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getVpsBackups(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * HD Space Addon Info
     *
     * Returns available hard drive space addon options and pricing for the VPS.
     */
    @isTest
    private static void getVpsBuyHdSpaceTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsBuyHdSpace(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsBuyHdSpace(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsBuyHdSpace(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Additional IP Addon Info
     *
     * Returns available additional IP address options and pricing for the VPS.
     */
    @isTest
    private static void getVpsBuyIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsBuyIp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the VPS.
     */
    @isTest
    private static void getVpsChangeTimezoneTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        List<String> response;
        List<String> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get VPS Order
     *
     * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
     */
    @isTest
    private static void getVpsInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASVps response;
        OASVps expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVps.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVps.getExample();
        response = (OASVps) api.getVpsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVps.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVps.getExample();
        response = (OASVps) api.getVpsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVps.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVps.getExample();
        response = (OASVps) api.getVpsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVps.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVps.getExample();
        response = (OASVps) api.getVpsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVps.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVps.getExample();
        response = (OASVps) api.getVpsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVps.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVps.getExample();
        response = (OASVps) api.getVpsInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get VPS Invoices
     *
     * Returns the billing invoices associated with this VPS.
     */
    @isTest
    private static void getVpsInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getVpsInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getVpsInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getVpsInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getVpsInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getVpsInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getVpsInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List VPS Orders
     *
     * Returns all VPS services on the account with their current status and configuration.
     */
    @isTest
    private static void getVpsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASVPSApi api;
        List<OASVpsRow> response;
        List<OASVpsRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASVpsRow>{OASVpsRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASVpsRow>{OASVpsRow.getExample()};
        response = (List<OASVpsRow>) api.getVpsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASVpsRow>{OASVpsRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASVpsRow>{OASVpsRow.getExample()};
        response = (List<OASVpsRow>) api.getVpsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASVpsRow>{OASVpsRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASVpsRow>{OASVpsRow.getExample()};
        response = (List<OASVpsRow>) api.getVpsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASVpsRow>{OASVpsRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASVpsRow>{OASVpsRow.getExample()};
        response = (List<OASVpsRow>) api.getVpsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASVpsRow>{OASVpsRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASVpsRow>{OASVpsRow.getExample()};
        response = (List<OASVpsRow>) api.getVpsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASVpsRow>{OASVpsRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASVpsRow>{OASVpsRow.getExample()};
        response = (List<OASVpsRow>) api.getVpsList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * VPS Reinstall OS Options
     *
     * Returns the list of available OS templates for reinstalling the VPS.
     */
    @isTest
    private static void getVpsReinstallOsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASVpsTemplatesList response;
        OASVpsTemplatesList expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
     */
    @isTest
    private static void getVpsReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASReverseDnsEntries response;
        OASReverseDnsEntries expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the VPS.
     */
    @isTest
    private static void getVpsSetupVncTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Slice Upgrade Info
     *
     * Returns available slice upgrade options and pricing for the VPS.
     */
    @isTest
    private static void getVpsSlicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsSlices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsSlices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsSlices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the VPS.
     */
    @isTest
    private static void getVpsTrafficUsageTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASVpsTrafficResponse response;
        OASVpsTrafficResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTrafficResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTrafficResponse.getExample();
        response = (OASVpsTrafficResponse) api.getVpsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTrafficResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTrafficResponse.getExample();
        response = (OASVpsTrafficResponse) api.getVpsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTrafficResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTrafficResponse.getExample();
        response = (OASVpsTrafficResponse) api.getVpsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTrafficResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTrafficResponse.getExample();
        response = (OASVpsTrafficResponse) api.getVpsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTrafficResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTrafficResponse.getExample();
        response = (OASVpsTrafficResponse) api.getVpsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTrafficResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTrafficResponse.getExample();
        response = (OASVpsTrafficResponse) api.getVpsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the VPS.
     */
    @isTest
    private static void getVpsViewDesktopTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getVpsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend VPS Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the VPS order.
     */
    @isTest
    private static void getVpsWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 4813
        };

        OASClient client;
        OASVPSApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getVpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getVpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getVpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getVpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getVpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getVpsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Start a VPS Backup
     *
     * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
     */
    @isTest
    private static void postVpsBackupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Purchase HD Space Addon
     *
     * Purchases additional hard drive space for the VPS.
     */
    @isTest
    private static void postVpsBuyHdSpaceTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsBuyHdSpace(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsBuyHdSpace(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsBuyHdSpace(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Purchase Additional IP
     *
     * Purchases an additional IP address for the VPS.
     */
    @isTest
    private static void postVpsBuyIpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsBuyIp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsBuyIp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update VPS Hostname
     *
     * Changes the hostname of the VPS. This queues a background task to update the server.
     */
    @isTest
    private static void postVpsChangeHostnameTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'hostname' => 'null'
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeHostname(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeHostname(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeHostname(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change VPS Root Password
     *
     * Changes the root password of the VPS.
     */
    @isTest
    private static void postVpsChangeRootPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'password' => 'null'
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change VPS Timezone
     *
     * Changes the system timezone on the VPS.
     */
    @isTest
    private static void postVpsChangeTimezoneTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'timezone' => 'null'
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change Webuzo Password
     *
     * Changes the Webuzo control panel password on the VPS.
     */
    @isTest
    private static void postVpsChangeWebuzoPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'password' => 'null'
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Insert CD in VPS
     *
     * Mounts an ISO image in the VPS virtual CD drive from the given URL.
     */
    @isTest
    private static void postVpsInsertCdTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'url' => 'null'
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsInsertCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsInsertCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsInsertCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsInsertCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsInsertCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsInsertCd(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reinstall VPS OS
     *
     * Reinstalls the operating system on the VPS. Warning - all data will be erased.
     */
    @isTest
    private static void postVpsReinstallOsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'template' => 'null',
            'localPassword' => 'null',
            'password' => 'null'
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reset VPS Password
     *
     * Resets the root password on the VPS to a new randomly generated password.
     */
    @isTest
    private static void postVpsResetPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsResetPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsResetPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsResetPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsResetPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsResetPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsResetPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Restore VPS from Backup
     *
     * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
     */
    @isTest
    private static void postVpsRestoreTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSRestoreRequest' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsRestore(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
     */
    @isTest
    private static void postVpsReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSReverseDnsEntries' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postVpsReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the VPS.
     */
    @isTest
    private static void postVpsSetupVncTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postVpsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Purchase Slice Upgrade
     *
     * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
     */
    @isTest
    private static void postVpsSlicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsSlices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsSlices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsSlices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the VPS.
     */
    @isTest
    private static void postVpsViewDesktopTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postVpsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate VPS Order
     *
     * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
     */
    @isTest
    private static void putVpsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSVpsOrderPutRequest' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASVpsOrderPutResponse response;
        OASVpsOrderPutResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrderPutResponse.getExample();
        response = (OASVpsOrderPutResponse) api.putVps(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrderPutResponse.getExample();
        response = (OASVpsOrderPutResponse) api.putVps(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrderPutResponse.getExample();
        response = (OASVpsOrderPutResponse) api.putVps(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrderPutResponse.getExample();
        response = (OASVpsOrderPutResponse) api.putVps(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrderPutResponse.getExample();
        response = (OASVpsOrderPutResponse) api.putVps(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsOrderPutResponse.getExample();
        response = (OASVpsOrderPutResponse) api.putVps(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update VPS Order
     *
     * Updates settings on a VPS order.
     */
    @isTest
    private static void updateVpsInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASVPSApi api;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateVpsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateVpsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.updateVpsInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel VPS Service
     *
     * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     */
    @isTest
    private static void vPSCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASVPSApi api;
        OASVPSCancel200Response response;
        OASVPSCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVPSCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVPSCancel200Response.getExample();
        response = (OASVPSCancel200Response) api.vPSCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVPSCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVPSCancel200Response.getExample();
        response = (OASVPSCancel200Response) api.vPSCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVPSCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVPSCancel200Response.getExample();
        response = (OASVPSCancel200Response) api.vPSCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVPSCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVPSCancel200Response.getExample();
        response = (OASVPSCancel200Response) api.vPSCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASVPSApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVPSCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVPSCancel200Response.getExample();
        response = (OASVPSCancel200Response) api.vPSCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVPSCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVPSCancel200Response.getExample();
        response = (OASVPSCancel200Response) api.vPSCancel(params);
        System.assertEquals(expectedResponse, response);
    }
}