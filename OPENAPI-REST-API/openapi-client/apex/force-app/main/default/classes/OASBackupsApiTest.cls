@isTest
private class OASBackupsApiTest {
    /**
     * Place Backup Order
     *
     * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
     */
    @isTest
    private static void addBackupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'validateOnly' => '',
            'serviceType' => '',
            'coupon' => 'null'
        };

        OASClient client;
        OASBackupsApi api;
        OASBackupOrderPostResponse response;
        OASBackupOrderPostResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPostResponse.getExample();
        response = (OASBackupOrderPostResponse) api.addBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPostResponse.getExample();
        response = (OASBackupOrderPostResponse) api.addBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPostResponse.getExample();
        response = (OASBackupOrderPostResponse) api.addBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPostResponse.getExample();
        response = (OASBackupOrderPostResponse) api.addBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPostResponse.getExample();
        response = (OASBackupOrderPostResponse) api.addBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupOrderPostResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPostResponse.getExample();
        response = (OASBackupOrderPostResponse) api.addBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Cancel Backup Service
     *
     * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
     */
    @isTest
    private static void cancelBackupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBackupsApi api;
        OASCancelBackup200Response response;
        OASCancelBackup200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelBackup200Response.getExample();
        response = (OASCancelBackup200Response) api.cancelBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelBackup200Response.getExample();
        response = (OASCancelBackup200Response) api.cancelBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelBackup200Response.getExample();
        response = (OASCancelBackup200Response) api.cancelBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelBackup200Response.getExample();
        response = (OASCancelBackup200Response) api.cancelBackup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCancelBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelBackup200Response.getExample();
        response = (OASCancelBackup200Response) api.cancelBackup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCancelBackup200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCancelBackup200Response.getExample();
        response = (OASCancelBackup200Response) api.cancelBackup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Backup Service Details
     *
     * Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.
     */
    @isTest
    private static void getBackupInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBackupsApi api;
        OASBackup response;
        OASBackup expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackup.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackup.getExample();
        response = (OASBackup) api.getBackupInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackup.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackup.getExample();
        response = (OASBackup) api.getBackupInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackup.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackup.getExample();
        response = (OASBackup) api.getBackupInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackup.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackup.getExample();
        response = (OASBackup) api.getBackupInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackup.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackup.getExample();
        response = (OASBackup) api.getBackupInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackup.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackup.getExample();
        response = (OASBackup) api.getBackupInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Backup Order Invoices
     *
     * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
     */
    @isTest
    private static void getBackupInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBackupsApi api;
        OASChargeInvoiceRows response;
        OASChargeInvoiceRows expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getBackupInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getBackupInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getBackupInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getBackupInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getBackupInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASChargeInvoiceRows.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASChargeInvoiceRows.getExample();
        response = (OASChargeInvoiceRows) api.getBackupInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Backup Storage Panel Login
     *
     * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
     */
    @isTest
    private static void getBackupLoginTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBackupsApi api;
        OASBackupLoginResponse response;
        OASBackupLoginResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupLoginResponse.getExample();
        response = (OASBackupLoginResponse) api.getBackupLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupLoginResponse.getExample();
        response = (OASBackupLoginResponse) api.getBackupLogin(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupLoginResponse.getExample();
        response = (OASBackupLoginResponse) api.getBackupLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupLoginResponse.getExample();
        response = (OASBackupLoginResponse) api.getBackupLogin(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupLoginResponse.getExample();
        response = (OASBackupLoginResponse) api.getBackupLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupLoginResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupLoginResponse.getExample();
        response = (OASBackupLoginResponse) api.getBackupLogin(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Backup Services
     *
     * Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.
     */
    @isTest
    private static void getBackupsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBackupsApi api;
        List<OASBackupRow> response;
        List<OASBackupRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASBackupRow>{OASBackupRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASBackupRow>{OASBackupRow.getExample()};
        response = (List<OASBackupRow>) api.getBackupsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASBackupRow>{OASBackupRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASBackupRow>{OASBackupRow.getExample()};
        response = (List<OASBackupRow>) api.getBackupsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASBackupRow>{OASBackupRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASBackupRow>{OASBackupRow.getExample()};
        response = (List<OASBackupRow>) api.getBackupsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASBackupRow>{OASBackupRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASBackupRow>{OASBackupRow.getExample()};
        response = (List<OASBackupRow>) api.getBackupsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASBackupRow>{OASBackupRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASBackupRow>{OASBackupRow.getExample()};
        response = (List<OASBackupRow>) api.getBackupsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASBackupRow>{OASBackupRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASBackupRow>{OASBackupRow.getExample()};
        response = (List<OASBackupRow>) api.getBackupsList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Resend Backup Welcome Email
     *
     * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
     */
    @isTest
    private static void getBackupsWelcomeEmailTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBackupsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBackupsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBackupsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBackupsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBackupsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBackupsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBackupsWelcomeEmail(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Backup Order Form Data
     *
     * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.
     */
    @isTest
    private static void getNewBackupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBackupsApi api;
        OASBackupsOrder response;
        OASBackupsOrder expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupsOrder.getExample();
        response = (OASBackupsOrder) api.getNewBackup();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupsOrder.getExample();
        response = (OASBackupsOrder) api.getNewBackup();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupsOrder.getExample();
        response = (OASBackupsOrder) api.getNewBackup();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupsOrder.getExample();
        response = (OASBackupsOrder) api.getNewBackup();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupsOrder.getExample();
        response = (OASBackupsOrder) api.getNewBackup();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupsOrder.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupsOrder.getExample();
        response = (OASBackupsOrder) api.getNewBackup();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Backup Information
     *
     * Updates backup storage service metadata, such as stored credentials or settings for the order.
     */
    @isTest
    private static void updateBackupInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBackupsApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBackupInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBackupInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBackupInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBackupInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBackupInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBackupInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Validate Backup Order
     *
     * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
     */
    @isTest
    private static void validateBackupOrderTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'validateOnly' => '',
            'serviceType' => '',
            'coupon' => 'null'
        };

        OASClient client;
        OASBackupsApi api;
        OASBackupOrderPutResponse response;
        OASBackupOrderPutResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPutResponse.getExample();
        response = (OASBackupOrderPutResponse) api.validateBackupOrder(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPutResponse.getExample();
        response = (OASBackupOrderPutResponse) api.validateBackupOrder(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPutResponse.getExample();
        response = (OASBackupOrderPutResponse) api.validateBackupOrder(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPutResponse.getExample();
        response = (OASBackupOrderPutResponse) api.validateBackupOrder(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBackupsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBackupOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPutResponse.getExample();
        response = (OASBackupOrderPutResponse) api.validateBackupOrder(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBackupOrderPutResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBackupOrderPutResponse.getExample();
        response = (OASBackupOrderPutResponse) api.validateBackupOrder(params);
        System.assertEquals(expectedResponse, response);
    }
}