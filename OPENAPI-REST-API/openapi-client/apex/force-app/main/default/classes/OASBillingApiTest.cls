@isTest
private class OASBillingApiTest {
    /**
     * Add Credit Card to Account
     *
     * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
     */
    @isTest
    private static void addAccountCreditCardTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'name' => 'null',
            'address' => 'null',
            'city' => 'null',
            'state' => 'null',
            'country' => 'null',
            'zip' => 'null',
            'cc' => 'null',
            'ccExp' => 'null',
            'ccCcv2' => 'null'
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Add Credit Card for Billing
     *
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
     */
    @isTest
    private static void addBillingCreditCardTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSBillingAddCcRequest' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Create Prepay Deposit
     *
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
     */
    @isTest
    private static void addBillingPrepayTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSBillingPrepayRequest' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingPrepay(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingPrepay(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingPrepay(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingPrepay(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingPrepay(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.addBillingPrepay(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Remove Credit Card
     *
     * Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.
     */
    @isTest
    private static void deleteAccountCreditCardTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 'null'
        };

        OASClient client;
        OASBillingApi api;
        String response;
        String expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.deleteAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.deleteAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.deleteAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Credit Card
     *
     * Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.
     */
    @isTest
    private static void deleteBillingCreditCardTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Invoice
     *
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     */
    @isTest
    private static void deleteBillingInvoiceTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingInvoice(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingInvoice(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingInvoice(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingInvoice(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingInvoice(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingInvoice(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Delete Prepay Balance
     *
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.
     */
    @isTest
    private static void deleteBillingPrepayTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingPrepay(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingPrepay(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingPrepay(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingPrepay(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingPrepay(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.deleteBillingPrepay(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Affiliate Banner Assets
     *
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     */
    @isTest
    private static void getAffiliateBannersTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBillingApi api;
        List<OASAffiliateBannerRow> response;
        List<OASAffiliateBannerRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()};
        response = (List<OASAffiliateBannerRow>) api.getAffiliateBanners();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()};
        response = (List<OASAffiliateBannerRow>) api.getAffiliateBanners();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()};
        response = (List<OASAffiliateBannerRow>) api.getAffiliateBanners();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()};
        response = (List<OASAffiliateBannerRow>) api.getAffiliateBanners();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()};
        response = (List<OASAffiliateBannerRow>) api.getAffiliateBanners();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateBannerRow>{OASAffiliateBannerRow.getExample()};
        response = (List<OASAffiliateBannerRow>) api.getAffiliateBanners();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Affiliate Performance Report
     *
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     */
    @isTest
    private static void getAffiliateRichReportTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBillingApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateRichReport();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateRichReport();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateRichReport();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateRichReport();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateRichReport();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateRichReport();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Affiliate Sales Graph Data
     *
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     */
    @isTest
    private static void getAffiliateSalesGraphTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'days' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASStatusMonthlyBreakdown response;
        OASStatusMonthlyBreakdown expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASStatusMonthlyBreakdown.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASStatusMonthlyBreakdown.getExample();
        response = (OASStatusMonthlyBreakdown) api.getAffiliateSalesGraph(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASStatusMonthlyBreakdown.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASStatusMonthlyBreakdown.getExample();
        response = (OASStatusMonthlyBreakdown) api.getAffiliateSalesGraph(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASStatusMonthlyBreakdown.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASStatusMonthlyBreakdown.getExample();
        response = (OASStatusMonthlyBreakdown) api.getAffiliateSalesGraph(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASStatusMonthlyBreakdown.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASStatusMonthlyBreakdown.getExample();
        response = (OASStatusMonthlyBreakdown) api.getAffiliateSalesGraph(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASStatusMonthlyBreakdown.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASStatusMonthlyBreakdown.getExample();
        response = (OASStatusMonthlyBreakdown) api.getAffiliateSalesGraph(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASStatusMonthlyBreakdown.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASStatusMonthlyBreakdown.getExample();
        response = (OASStatusMonthlyBreakdown) api.getAffiliateSalesGraph(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Affiliate Sales Report
     *
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     */
    @isTest
    private static void getAffiliateSalesReportTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBillingApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateSalesReport();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateSalesReport();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateSalesReport();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateSalesReport();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateSalesReport();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.getAffiliateSalesReport();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Affiliate Traffic Graph Data
     *
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     */
    @isTest
    private static void getAffiliateTrafficGraphTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'days' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASMonthlyCounts response;
        OASMonthlyCounts expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMonthlyCounts.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMonthlyCounts.getExample();
        response = (OASMonthlyCounts) api.getAffiliateTrafficGraph(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMonthlyCounts.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMonthlyCounts.getExample();
        response = (OASMonthlyCounts) api.getAffiliateTrafficGraph(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMonthlyCounts.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMonthlyCounts.getExample();
        response = (OASMonthlyCounts) api.getAffiliateTrafficGraph(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMonthlyCounts.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMonthlyCounts.getExample();
        response = (OASMonthlyCounts) api.getAffiliateTrafficGraph(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASMonthlyCounts.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMonthlyCounts.getExample();
        response = (OASMonthlyCounts) api.getAffiliateTrafficGraph(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASMonthlyCounts.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASMonthlyCounts.getExample();
        response = (OASMonthlyCounts) api.getAffiliateTrafficGraph(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Affiliate Web Traffic Entries
     *
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     */
    @isTest
    private static void getAffiliateWebTrafficTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBillingApi api;
        List<OASAffiliateTrafficRow> response;
        List<OASAffiliateTrafficRow> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()};
        response = (List<OASAffiliateTrafficRow>) api.getAffiliateWebTraffic();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()};
        response = (List<OASAffiliateTrafficRow>) api.getAffiliateWebTraffic();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()};
        response = (List<OASAffiliateTrafficRow>) api.getAffiliateWebTraffic();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()};
        response = (List<OASAffiliateTrafficRow>) api.getAffiliateWebTraffic();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()};
        response = (List<OASAffiliateTrafficRow>) api.getAffiliateWebTraffic();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASAffiliateTrafficRow>{OASAffiliateTrafficRow.getExample()};
        response = (List<OASAffiliateTrafficRow>) api.getAffiliateWebTraffic();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Shopping Cart Contents
     *
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.
     */
    @isTest
    private static void getBillingCartTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBillingApi api;
        Object response;
        Object expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getBillingCart();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getBillingCart();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getBillingCart();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Credit Card Verification Requirements
     *
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     */
    @isTest
    private static void getBillingCreditCardVerifyTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.getBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Invoice Details
     *
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.
     */
    @isTest
    private static void getBillingInvoiceTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASBillingInvoiceDetail response;
        OASBillingInvoiceDetail expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBillingInvoiceDetail.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceDetail.getExample();
        response = (OASBillingInvoiceDetail) api.getBillingInvoice(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBillingInvoiceDetail.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceDetail.getExample();
        response = (OASBillingInvoiceDetail) api.getBillingInvoice(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBillingInvoiceDetail.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceDetail.getExample();
        response = (OASBillingInvoiceDetail) api.getBillingInvoice(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBillingInvoiceDetail.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceDetail.getExample();
        response = (OASBillingInvoiceDetail) api.getBillingInvoice(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBillingInvoiceDetail.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceDetail.getExample();
        response = (OASBillingInvoiceDetail) api.getBillingInvoice(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBillingInvoiceDetail.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceDetail.getExample();
        response = (OASBillingInvoiceDetail) api.getBillingInvoice(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Account Invoices
     *
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.
     */
    @isTest
    private static void getBillingInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBillingApi api;
        OASBillingInvoiceList response;
        OASBillingInvoiceList expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBillingInvoiceList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceList.getExample();
        response = (OASBillingInvoiceList) api.getBillingInvoices();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBillingInvoiceList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceList.getExample();
        response = (OASBillingInvoiceList) api.getBillingInvoices();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBillingInvoiceList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceList.getExample();
        response = (OASBillingInvoiceList) api.getBillingInvoices();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBillingInvoiceList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceList.getExample();
        response = (OASBillingInvoiceList) api.getBillingInvoices();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBillingInvoiceList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceList.getExample();
        response = (OASBillingInvoiceList) api.getBillingInvoices();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBillingInvoiceList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBillingInvoiceList.getExample();
        response = (OASBillingInvoiceList) api.getBillingInvoices();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Prepay Balances
     *
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.
     */
    @isTest
    private static void getBillingPrePaysTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASBillingApi api;
        Object response;
        Object expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getBillingPrePays();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getBillingPrePays();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getBillingPrePays();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Invoices
     *
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.
     */
    @isTest
    private static void getInvoicesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'searchString' => 'null',
            'skip' => '',
            'r_limit' => ''
        };

        OASClient client;
        OASBillingApi api;
        List<OASInvoice> response;
        List<OASInvoice> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(new List<OASInvoice>{OASInvoice.getExample()});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<OASInvoice>{OASInvoice.getExample()};
        response = (List<OASInvoice>) api.getInvoices(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Initiate Payment
     *
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.
     */
    @isTest
    private static void initiatePaymentTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'method' => cc,
            'invoices' => 'null'
        };

        OASClient client;
        OASBillingApi api;
        OASInitiatePayment200Response response;
        OASInitiatePayment200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASInitiatePayment200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASInitiatePayment200Response.getExample();
        response = (OASInitiatePayment200Response) api.initiatePayment(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASInitiatePayment200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASInitiatePayment200Response.getExample();
        response = (OASInitiatePayment200Response) api.initiatePayment(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASInitiatePayment200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASInitiatePayment200Response.getExample();
        response = (OASInitiatePayment200Response) api.initiatePayment(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASInitiatePayment200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASInitiatePayment200Response.getExample();
        response = (OASInitiatePayment200Response) api.initiatePayment(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASInitiatePayment200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASInitiatePayment200Response.getExample();
        response = (OASInitiatePayment200Response) api.initiatePayment(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASInitiatePayment200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASInitiatePayment200Response.getExample();
        response = (OASInitiatePayment200Response) api.initiatePayment(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Submit Credit Card Verification
     *
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
     */
    @isTest
    private static void postBillingCreditCardVerifyTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSBillingVerifyCcRequest' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.postBillingCreditCardVerify(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Credit Card
     *
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     */
    @isTest
    private static void updateAccountCreditCardTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBillingApi api;
        String response;
        String expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.updateAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.updateAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.updateAccountCreditCard(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Configure Affiliate Dock Settings
     *
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     */
    @isTest
    private static void updateAffiliateDockSetupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'affiliateDockTitle' => 'null',
            'affiliateDockDescription' => 'null',
            'referrerCoupon' => 'null'
        };

        OASClient client;
        OASBillingApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateDockSetup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateDockSetup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateDockSetup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateDockSetup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateDockSetup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateDockSetup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Configure Affiliate Landing Page
     *
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     */
    @isTest
    private static void updateAffiliateLandingPageTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'affiliateDockTitle' => 'null',
            'affiliateDockDescription' => 'null',
            'referrerCoupon' => 'null'
        };

        OASClient client;
        OASBillingApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateLandingPage(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateLandingPage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateLandingPage(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateLandingPage(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateLandingPage(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliateLandingPage(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Configure Affiliate Payout Preferences
     *
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     */
    @isTest
    private static void updateAffiliatePaymentSetupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'affiliatePaypal' => 'null',
            'affiliatePaymentMethod' => 'null'
        };

        OASClient client;
        OASBillingApi api;
        OASTextResponse response;
        OASTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliatePaymentSetup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliatePaymentSetup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliatePaymentSetup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliatePaymentSetup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliatePaymentSetup(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTextResponse.getExample();
        response = (OASTextResponse) api.updateAffiliatePaymentSetup(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Credit Card Details
     *
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     */
    @isTest
    private static void updateBillingCreditCardTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingCreditCard(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Default Payment Method
     *
     * Updates the account\&#39;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     */
    @isTest
    private static void updateBillingPaymentMethodTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSBillingPaymentMethodRequest' => ''
        };

        OASClient client;
        OASBillingApi api;
        OASSuccessTextResponse response;
        OASSuccessTextResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingPaymentMethod(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingPaymentMethod(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingPaymentMethod(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingPaymentMethod(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASBillingApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingPaymentMethod(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASSuccessTextResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASSuccessTextResponse.getExample();
        response = (OASSuccessTextResponse) api.updateBillingPaymentMethod(params);
        System.assertEquals(expectedResponse, response);
    }
}