@isTest
private class OASQuickServersApiTest {
    /**
     * Place QuickServer Order
     *
     * Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     */
    @isTest
    private static void addQsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASQuickServersApi api;
        OASServiceOrderPostResponse response;
        OASServiceOrderPostResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addQs();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addQs();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addQs();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addQs();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addQs();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServiceOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServiceOrderPostResponse.getExample();
        response = (OASServiceOrderPostResponse) api.addQs();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete QuickServer Backup
     *
     * Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
     */
    @isTest
    private static void deleteQsBackupTest() {
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
        OASQuickServersApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteQsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteQsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteQsBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Block QuickServer SMTP
     *
     * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
     */
    @isTest
    private static void doQsBlockSmtpTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsBlockSmtp(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Disable CD Drive
     *
     * Disables the virtual CD drive for the QuickServer.
     */
    @isTest
    private static void doQsDisableCdTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableCd(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Disable Quotas
     *
     * Disables disk quota enforcement for the QuickServer.
     */
    @isTest
    private static void doQsDisableQuotaTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsDisableQuota(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Eject CD Drive
     *
     * Ejects the virtual CD from the QuickServer\&#39;s CD drive.
     */
    @isTest
    private static void doQsEjectCdTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEjectCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEjectCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEjectCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEjectCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEjectCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEjectCd(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Enable Quotas
     *
     * Enables disk quota enforcement for the QuickServer.
     */
    @isTest
    private static void doQsEnableQuotaTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEnableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEnableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEnableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEnableQuota(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEnableQuota(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsEnableQuota(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Restart QuickServer
     *
     * Restarts the QuickServer. The server will be shut down and started again.
     */
    @isTest
    private static void doQsRestartTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsRestart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsRestart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsRestart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsRestart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsRestart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsRestart(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Start QuickServer
     *
     * Powers on the QuickServer.
     */
    @isTest
    private static void doQsStartTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStart(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStart(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStart(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Stop QuickServer
     *
     * Powers off the QuickServer.
     */
    @isTest
    private static void doQsStopTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStop(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStop(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStop(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.doQsStop(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Download QuickServer Backup
     *
     * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
     */
    @isTest
    private static void downloadQsBackupTest() {
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
        OASQuickServersApi api;
        OASDownloadQsBackup200Response response;
        OASDownloadQsBackup200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadQsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadQsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASDownloadQsBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASDownloadQsBackup200Response.getExample();
        response = (OASDownloadQsBackup200Response) api.downloadQsBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get QuickServer Ordering Information
     *
     * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
     */
    @isTest
    private static void getNewQsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASQuickServersApi api;
        OASQuickserverOrder response;
        OASQuickserverOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserverOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserverOrder.getExample();
        response = (OASQuickserverOrder) api.getNewQs();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserverOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserverOrder.getExample();
        response = (OASQuickserverOrder) api.getNewQs();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserverOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserverOrder.getExample();
        response = (OASQuickserverOrder) api.getNewQs();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserverOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserverOrder.getExample();
        response = (OASQuickserverOrder) api.getNewQs();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserverOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserverOrder.getExample();
        response = (OASQuickserverOrder) api.getNewQs();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserverOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserverOrder.getExample();
        response = (OASQuickserverOrder) api.getNewQs();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List QuickServer Backups
     *
     * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
     */
    @isTest
    private static void getQsBackupsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'all' => 0
        };

        OASClient client;
        OASQuickServersApi api;
        OASVpsBackupRows response;
        OASVpsBackupRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getQsBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getQsBackups(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getQsBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getQsBackups(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getQsBackups(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsBackupRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsBackupRows.getExample();
        response = (OASVpsBackupRows) api.getQsBackups(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get QuickServer Hostname
     *
     * Retrieves the current hostname and any validation requirements for changing it.
     */
    @isTest
    private static void getQsChangeHostnameTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Change Root Password Info
     *
     * Retrieves instructions or metadata needed to reset the root password.
     */
    @isTest
    private static void getQsChangeRootPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Timezone Info
     *
     * Returns the list of available timezones that can be set on the QuickServer.
     */
    @isTest
    private static void getQsChangeTimezoneTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        List<String> response;
        List<String> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Webuzo Change Pass Info
     *
     * Retrieves instructions or metadata for changing the Webuzo control panel password.
     */
    @isTest
    private static void getQsChangeWebuzoPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get QuickServer Order
     *
     * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
     */
    @isTest
    private static void getQsInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQuickserver response;
        OASQuickserver expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserver.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserver.getExample();
        response = (OASQuickserver) api.getQsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserver.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserver.getExample();
        response = (OASQuickserver) api.getQsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserver.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserver.getExample();
        response = (OASQuickserver) api.getQsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserver.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserver.getExample();
        response = (OASQuickserver) api.getQsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserver.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserver.getExample();
        response = (OASQuickserver) api.getQsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserver.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserver.getExample();
        response = (OASQuickserver) api.getQsInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Insert CD Information
     *
     * Returns available ISO images that can be mounted in the QuickServer\&#39;s virtual CD drive.
     */
    @isTest
    private static void getQsInsertCdTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsInsertCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsInsertCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsInsertCd(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get QuickServer Invoices
     *
     * Returns the billing invoices associated with this QuickServer.
     */
    @isTest
    private static void getQsInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getQsInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getQsInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getQsInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getQsInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getQsInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getQsInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List QuickServers
     *
     * Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
     */
    @isTest
    private static void getQsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASQuickServersApi api;
        List<OASQuickserverRow> response;
        List<OASQuickserverRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASQuickserverRow>{OASQuickserverRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASQuickserverRow>{OASQuickserverRow.getExample()};
        response = (List<OASQuickserverRow>) api.getQsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASQuickserverRow>{OASQuickserverRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASQuickserverRow>{OASQuickserverRow.getExample()};
        response = (List<OASQuickserverRow>) api.getQsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASQuickserverRow>{OASQuickserverRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASQuickserverRow>{OASQuickserverRow.getExample()};
        response = (List<OASQuickserverRow>) api.getQsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASQuickserverRow>{OASQuickserverRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASQuickserverRow>{OASQuickserverRow.getExample()};
        response = (List<OASQuickserverRow>) api.getQsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASQuickserverRow>{OASQuickserverRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASQuickserverRow>{OASQuickserverRow.getExample()};
        response = (List<OASQuickserverRow>) api.getQsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASQuickserverRow>{OASQuickserverRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASQuickserverRow>{OASQuickserverRow.getExample()};
        response = (List<OASQuickserverRow>) api.getQsList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * QuickServer Reinstall OS Options
     *
     * Returns the list of available operating system templates for reinstalling the QuickServer.
     */
    @isTest
    private static void getQsReinstallOsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASVpsTemplatesList response;
        OASVpsTemplatesList expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASVpsTemplatesList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASVpsTemplatesList.getExample();
        response = (OASVpsTemplatesList) api.getQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reset QuickServer Password Info
     *
     * Returns information needed before resetting the QuickServer\&#39;s root password.
     */
    @isTest
    private static void getQsResetPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsResetPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsResetPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsResetPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reverse DNS Info
     *
     * Returns the current reverse DNS (PTR record) entries for the QuickServer\&#39;s IP addresses.
     */
    @isTest
    private static void getQsReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASReverseDnsEntries response;
        OASReverseDnsEntries expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getQsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getQsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getQsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getQsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getQsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReverseDnsEntries.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReverseDnsEntries.getExample();
        response = (OASReverseDnsEntries) api.getQsReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * VNC Setup Info
     *
     * Returns the current VNC connection information for the QuickServer.
     */
    @isTest
    private static void getQsSetupVncTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Traffic Usage
     *
     * Returns bandwidth traffic usage data for the QuickServer.
     */
    @isTest
    private static void getQsTrafficUsageTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get View Desktop Info
     *
     * Returns remote desktop connection information for the QuickServer.
     */
    @isTest
    private static void getQsViewDesktopTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getQsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend QuickServer Welcome Email
     *
     * Resends the welcome email containing connection details and credentials for the QuickServer order.
     */
    @isTest
    private static void getQsWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 133123
        };

        OASClient client;
        OASQuickServersApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getQsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getQsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getQsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getQsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getQsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getQsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Create QuickServer Backup
     *
     * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
     */
    @isTest
    private static void postQsBackupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update QuickServer Hostname
     *
     * Submits a hostname change request for the QuickServer.
     */
    @isTest
    private static void postQsChangeHostnameTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeHostname(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change Root Password
     *
     * Triggers a root password reset for the QuickServer.
     */
    @isTest
    private static void postQsChangeRootPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeRootPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change QuickServer Timezone
     *
     * Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
     */
    @isTest
    private static void postQsChangeTimezoneTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'timezone' => 'null'
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeTimezone(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Change Webuzo Password
     *
     * Resets the Webuzo control panel password for the QuickServer.
     */
    @isTest
    private static void postQsChangeWebuzoPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsChangeWebuzoPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Insert CD in QuickServer
     *
     * Mounts an ISO image in the QuickServer\&#39;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
     */
    @isTest
    private static void postQsInsertCdTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsInsertCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsInsertCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsInsertCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsInsertCd(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsInsertCd(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsInsertCd(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reinstall QuickServer OS
     *
     * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
     */
    @isTest
    private static void postQsReinstallOsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsReinstallOs(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reset QuickServer Password
     *
     * Resets the root password on the QuickServer to a new randomly generated password.
     */
    @isTest
    private static void postQsResetPasswordTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsResetPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsResetPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsResetPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsResetPassword(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsResetPassword(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsResetPassword(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Reverse DNS
     *
     * Updates the reverse DNS (PTR record) entries for the QuickServer\&#39;s IP addresses.
     */
    @isTest
    private static void postQsReverseDnsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSReverseDnsEntries' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postQsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postQsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postQsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postQsReverseDns(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postQsReverseDns(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.postQsReverseDns(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Setup VNC
     *
     * Sets up or refreshes the VNC console connection for the QuickServer.
     */
    @isTest
    private static void postQsSetupVncTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQsSetupVnc(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Search Traffic Usage
     *
     * Searches and filters the QuickServer\&#39;s bandwidth traffic usage data by date range.
     */
    @isTest
    private static void postQsTrafficUsageTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postQsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postQsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postQsTrafficUsage(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update View Desktop
     *
     * Updates or refreshes the remote desktop session for the QuickServer.
     */
    @isTest
    private static void postQsViewDesktopTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postQsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postQsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.postQsViewDesktop(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Restore QuickServer from Backup
     *
     * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
     */
    @isTest
    private static void postQuickServerRestoreTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSRestoreRequest' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQueueResponse response;
        OASQueueResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQueueResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQueueResponse.getExample();
        response = (OASQueueResponse) api.postQuickServerRestore(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate QuickServer Order
     *
     * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
     */
    @isTest
    private static void putQsTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASQuickServersApi api;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putQs();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putQs();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.putQs();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel QuickServer Order
     *
     * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
     */
    @isTest
    private static void quickserversCancelTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASQuickServersApi api;
        OASQuickserversCancel200Response response;
        OASQuickserversCancel200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserversCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserversCancel200Response.getExample();
        response = (OASQuickserversCancel200Response) api.quickserversCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserversCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserversCancel200Response.getExample();
        response = (OASQuickserversCancel200Response) api.quickserversCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserversCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserversCancel200Response.getExample();
        response = (OASQuickserversCancel200Response) api.quickserversCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserversCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserversCancel200Response.getExample();
        response = (OASQuickserversCancel200Response) api.quickserversCancel(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASQuickserversCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserversCancel200Response.getExample();
        response = (OASQuickserversCancel200Response) api.quickserversCancel(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASQuickserversCancel200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASQuickserversCancel200Response.getExample();
        response = (OASQuickserversCancel200Response) api.quickserversCancel(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update QuickServer Order
     *
     * Updates QuickServer metadata or stored settings associated with the order.
     */
    @isTest
    private static void updateQsInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASQuickServersApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateQsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateQsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateQsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateQsInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASQuickServersApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateQsInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateQsInfo(params);
        System.assertEquals(expectedResponse, response);
    }
}