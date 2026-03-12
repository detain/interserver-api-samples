@isTest
private class OASTicketsApiTest {
    /**
     * Create New Ticket
     *
     * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
     */
    @isTest
    private static void addNewTicketTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSTicketNew' => ''
        };

        OASClient client;
        OASTicketsApi api;
        OASTicketNewResponse response;
        OASTicketNewResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTicketNewResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTicketNewResponse.getExample();
        response = (OASTicketNewResponse) api.addNewTicket(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Close Ticket
     *
     * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
     */
    @isTest
    private static void closeTicketTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => 1511222
        };

        OASClient client;
        OASTicketsApi api;
        OASCloseTicketResponseSchema response;
        OASCloseTicketResponseSchema expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCloseTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCloseTicketResponseSchema.getExample();
        response = (OASCloseTicketResponseSchema) api.closeTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCloseTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCloseTicketResponseSchema.getExample();
        response = (OASCloseTicketResponseSchema) api.closeTicket(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCloseTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCloseTicketResponseSchema.getExample();
        response = (OASCloseTicketResponseSchema) api.closeTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCloseTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCloseTicketResponseSchema.getExample();
        response = (OASCloseTicketResponseSchema) api.closeTicket(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCloseTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCloseTicketResponseSchema.getExample();
        response = (OASCloseTicketResponseSchema) api.closeTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCloseTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCloseTicketResponseSchema.getExample();
        response = (OASCloseTicketResponseSchema) api.closeTicket(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Close Ticket
     *
     * Closes the support ticket.
     */
    @isTest
    private static void deleteTicketInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASTicketsApi api;
        OASViewTicketResponse response;
        OASViewTicketResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.deleteTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.deleteTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.deleteTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.deleteTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.deleteTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.deleteTicketInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Gets Information for creating a new ticket.
     *
     * Returns the form data needed to create a new support ticket, such as available departments and service categories.
     */
    @isTest
    private static void getNewTicketTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASTicketsApi api;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getNewTicket();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getNewTicket();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.getNewTicket();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Ticket Information
     *
     * Returns the full details of a support ticket including its history of replies.
     */
    @isTest
    private static void getTicketInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASTicketsApi api;
        OASViewTicketResponse response;
        OASViewTicketResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.getTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.getTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.getTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.getTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.getTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.getTicketInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Support Tickets
     *
     * Returns a paginated list of support tickets on the account. Filter by status and time period.
     */
    @isTest
    private static void getTicketsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'page' => '',
            'period' => 30,
            'view' => Open
        };

        OASClient client;
        OASTicketsApi api;
        OASTickets response;
        OASTickets expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.getTicketsList(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.getTicketsList(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.getTicketsList(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.getTicketsList(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.getTicketsList(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.getTicketsList(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reply To Ticket
     *
     * Adds a reply to an existing support ticket.
     */
    @isTest
    private static void postTicketInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASTicketsApi api;
        OASViewTicketResponse response;
        OASViewTicketResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.postTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.postTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.postTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.postTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.postTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.postTicketInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Search Support Tickets
     *
     * Searches support tickets by email, subject, or ticket mask ID.
     */
    @isTest
    private static void postTicketsListTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(201);
        res.setStatus('Created');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASTicketsApi api;
        OASTickets response;
        OASTickets expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.postTicketsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.postTicketsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.postTicketsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.postTicketsList();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.postTicketsList();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASTickets.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASTickets.getExample();
        response = (OASTickets) api.postTicketsList();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Ticket
     *
     * Updates a support ticket\&#39;s properties such as subject or status.
     */
    @isTest
    private static void putTicketInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => ''
        };

        OASClient client;
        OASTicketsApi api;
        OASViewTicketResponse response;
        OASViewTicketResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.putTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.putTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.putTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.putTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.putTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASViewTicketResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASViewTicketResponse.getExample();
        response = (OASViewTicketResponse) api.putTicketInfo(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Reply Ticket
     *
     * Posts a reply to an existing support ticket thread.
     */
    @isTest
    private static void replyTicketTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSReplyTicketRequest' => ''
        };

        OASClient client;
        OASTicketsApi api;
        OASReplyTicketResponseSchema response;
        OASReplyTicketResponseSchema expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReplyTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReplyTicketResponseSchema.getExample();
        response = (OASReplyTicketResponseSchema) api.replyTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReplyTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReplyTicketResponseSchema.getExample();
        response = (OASReplyTicketResponseSchema) api.replyTicket(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReplyTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReplyTicketResponseSchema.getExample();
        response = (OASReplyTicketResponseSchema) api.replyTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReplyTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReplyTicketResponseSchema.getExample();
        response = (OASReplyTicketResponseSchema) api.replyTicket(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASReplyTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReplyTicketResponseSchema.getExample();
        response = (OASReplyTicketResponseSchema) api.replyTicket(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASReplyTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASReplyTicketResponseSchema.getExample();
        response = (OASReplyTicketResponseSchema) api.replyTicket(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Update Ticket
     *
     * Updates a support ticket\&#39;s subject or body content.
     */
    @isTest
    private static void updateTicketInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'id' => '',
            'oaSUpdateTicket' => ''
        };

        OASClient client;
        OASTicketsApi api;
        OASUpdateTicketResponseSchema response;
        OASUpdateTicketResponseSchema expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASUpdateTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASUpdateTicketResponseSchema.getExample();
        response = (OASUpdateTicketResponseSchema) api.updateTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASUpdateTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASUpdateTicketResponseSchema.getExample();
        response = (OASUpdateTicketResponseSchema) api.updateTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASUpdateTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASUpdateTicketResponseSchema.getExample();
        response = (OASUpdateTicketResponseSchema) api.updateTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASUpdateTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASUpdateTicketResponseSchema.getExample();
        response = (OASUpdateTicketResponseSchema) api.updateTicketInfo(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASTicketsApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASUpdateTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASUpdateTicketResponseSchema.getExample();
        response = (OASUpdateTicketResponseSchema) api.updateTicketInfo(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASUpdateTicketResponseSchema.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASUpdateTicketResponseSchema.getExample();
        response = (OASUpdateTicketResponseSchema) api.updateTicketInfo(params);
        System.assertEquals(expectedResponse, response);
    }
}