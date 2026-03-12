@isTest
private class OASPublicApiTest {
    /**
     * Get Captcha Challenge
     *
     * Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
     */
    @isTest
    private static void getCaptchaTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASPublicApi api;
        OASCaptchaResponse response;
        OASCaptchaResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCaptchaResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCaptchaResponse.getExample();
        response = (OASCaptchaResponse) api.getCaptcha();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCaptchaResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCaptchaResponse.getExample();
        response = (OASCaptchaResponse) api.getCaptcha();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCaptchaResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCaptchaResponse.getExample();
        response = (OASCaptchaResponse) api.getCaptcha();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCaptchaResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCaptchaResponse.getExample();
        response = (OASCaptchaResponse) api.getCaptcha();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASCaptchaResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCaptchaResponse.getExample();
        response = (OASCaptchaResponse) api.getCaptcha();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASCaptchaResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASCaptchaResponse.getExample();
        response = (OASCaptchaResponse) api.getCaptcha();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Countries
     *
     * Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
     */
    @isTest
    private static void getCountriesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'fetchBy' => iso2
        };

        OASClient client;
        OASPublicApi api;
        Object response;
        Object expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getCountries(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getCountries(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(null);
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = null;
        response = (Object) api.getCountries(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Server Info
     *
     * Returns metadata about the API server\&#39;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
     */
    @isTest
    private static void getInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASPublicApi api;
        OASServicesInfo response;
        OASServicesInfo expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServicesInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServicesInfo.getExample();
        response = (OASServicesInfo) api.getInfo();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServicesInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServicesInfo.getExample();
        response = (OASServicesInfo) api.getInfo();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServicesInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServicesInfo.getExample();
        response = (OASServicesInfo) api.getInfo();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServicesInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServicesInfo.getExample();
        response = (OASServicesInfo) api.getInfo();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASServicesInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServicesInfo.getExample();
        response = (OASServicesInfo) api.getInfo();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASServicesInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASServicesInfo.getExample();
        response = (OASServicesInfo) api.getInfo();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Login Info
     *
     * Gets the various pieces of information useful for generating a login page.
     */
    @isTest
    private static void getLoginInfoTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASPublicApi api;
        OASLoginInfo response;
        OASLoginInfo expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLoginInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginInfo.getExample();
        response = (OASLoginInfo) api.getLoginInfo();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLoginInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginInfo.getExample();
        response = (OASLoginInfo) api.getLoginInfo();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLoginInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginInfo.getExample();
        response = (OASLoginInfo) api.getLoginInfo();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLoginInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginInfo.getExample();
        response = (OASLoginInfo) api.getLoginInfo();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLoginInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginInfo.getExample();
        response = (OASLoginInfo) api.getLoginInfo();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLoginInfo.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginInfo.getExample();
        response = (OASLoginInfo) api.getLoginInfo();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * List Marketplace Servers
     *
     * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
     */
    @isTest
    private static void getMPServersTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASPublicApi api;
        OASBuyItNowList response;
        OASBuyItNowList expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASBuyItNowList.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASBuyItNowList.getExample();
        response = (OASBuyItNowList) api.getMPServers();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get OAuth Redirect URL
     *
     * Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
     */
    @isTest
    private static void getOauthRedirectTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'provider' => 'null'
        };

        OASClient client;
        OASPublicApi api;
        OASGetOauthRedirect200Response response;
        OASGetOauthRedirect200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetOauthRedirect200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOauthRedirect200Response.getExample();
        response = (OASGetOauthRedirect200Response) api.getOauthRedirect(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetOauthRedirect200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOauthRedirect200Response.getExample();
        response = (OASGetOauthRedirect200Response) api.getOauthRedirect(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetOauthRedirect200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOauthRedirect200Response.getExample();
        response = (OASGetOauthRedirect200Response) api.getOauthRedirect(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetOauthRedirect200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOauthRedirect200Response.getExample();
        response = (OASGetOauthRedirect200Response) api.getOauthRedirect(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASGetOauthRedirect200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOauthRedirect200Response.getExample();
        response = (OASGetOauthRedirect200Response) api.getOauthRedirect(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASGetOauthRedirect200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASGetOauthRedirect200Response.getExample();
        response = (OASGetOauthRedirect200Response) api.getOauthRedirect(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Get Available Timezones
     *
     * Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
     */
    @isTest
    private static void getTimezonesTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASPublicApi api;
        List<String> response;
        List<String> expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getTimezones();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getTimezones();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(new List<String>{''});
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = new List<String>{''};
        response = (List<String>) api.getTimezones();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Complete OAuth Two-Factor Verification
     *
     * Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: &quot;2fa_required&quot;&#x60;.
     */
    @isTest
    private static void patchOauthTwoFactorTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSPatchOauthTwoFactorRequest' => ''
        };

        OASClient client;
        OASPublicApi api;
        OASPatchOauthTwoFactor200Response response;
        OASPatchOauthTwoFactor200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPatchOauthTwoFactor200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPatchOauthTwoFactor200Response.getExample();
        response = (OASPatchOauthTwoFactor200Response) api.patchOauthTwoFactor(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPatchOauthTwoFactor200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPatchOauthTwoFactor200Response.getExample();
        response = (OASPatchOauthTwoFactor200Response) api.patchOauthTwoFactor(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPatchOauthTwoFactor200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPatchOauthTwoFactor200Response.getExample();
        response = (OASPatchOauthTwoFactor200Response) api.patchOauthTwoFactor(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPatchOauthTwoFactor200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPatchOauthTwoFactor200Response.getExample();
        response = (OASPatchOauthTwoFactor200Response) api.patchOauthTwoFactor(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPatchOauthTwoFactor200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPatchOauthTwoFactor200Response.getExample();
        response = (OASPatchOauthTwoFactor200Response) api.patchOauthTwoFactor(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPatchOauthTwoFactor200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPatchOauthTwoFactor200Response.getExample();
        response = (OASPatchOauthTwoFactor200Response) api.patchOauthTwoFactor(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Ping Server
     *
     * Performs a single ping/pong request to let you know if the server is up.
     */
    @isTest
    private static void pingServerTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        OASClient client;
        OASPublicApi api;
        String response;
        String expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.pingServer();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.pingServer();
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize('');
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = '';
        response = (String) api.pingServer();
        System.assertEquals(expectedResponse, response);
    }

    /**
     * OAuth Callback
     *
     * Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: &quot;2fa_required&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
     */
    @isTest
    private static void postOauthCallbackTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'provider' => 'null',
            'oaSPostOauthCallbackRequest' => ''
        };

        OASClient client;
        OASPublicApi api;
        OASPostOauthCallback200Response response;
        OASPostOauthCallback200Response expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostOauthCallback200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostOauthCallback200Response.getExample();
        response = (OASPostOauthCallback200Response) api.postOauthCallback(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostOauthCallback200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostOauthCallback200Response.getExample();
        response = (OASPostOauthCallback200Response) api.postOauthCallback(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostOauthCallback200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostOauthCallback200Response.getExample();
        response = (OASPostOauthCallback200Response) api.postOauthCallback(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostOauthCallback200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostOauthCallback200Response.getExample();
        response = (OASPostOauthCallback200Response) api.postOauthCallback(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASPostOauthCallback200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostOauthCallback200Response.getExample();
        response = (OASPostOauthCallback200Response) api.postOauthCallback(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASPostOauthCallback200Response.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASPostOauthCallback200Response.getExample();
        response = (OASPostOauthCallback200Response) api.postOauthCallback(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Submit Login Information
     *
     * Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
     */
    @isTest
    private static void submitLoginTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'login' => 'null',
            'passwd' => 'null',
            'remember' => 'null',
            'gRecaptchaResponse' => '',
            'tfa' => 'null'
        };

        OASClient client;
        OASPublicApi api;
        OASLoginSuccessResponse response;
        OASLoginSuccessResponse expectedResponse;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLoginSuccessResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginSuccessResponse.getExample();
        response = (OASLoginSuccessResponse) api.submitLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLoginSuccessResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginSuccessResponse.getExample();
        response = (OASLoginSuccessResponse) api.submitLogin(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLoginSuccessResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginSuccessResponse.getExample();
        response = (OASLoginSuccessResponse) api.submitLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLoginSuccessResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginSuccessResponse.getExample();
        response = (OASLoginSuccessResponse) api.submitLogin(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize(OASLoginSuccessResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginSuccessResponse.getExample();
        response = (OASLoginSuccessResponse) api.submitLogin(params);
        System.assertEquals(expectedResponse, response);


        js = JSON.serialize(OASLoginSuccessResponse.getExample());
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = OASLoginSuccessResponse.getExample();
        response = (OASLoginSuccessResponse) api.submitLogin(params);
        System.assertEquals(expectedResponse, response);
    }

    /**
     * Submit Signup Information
     *
     * Creates a new account in our system using the provided information.
     */
    @isTest
    private static void submitSignupTest() {
        HttpResponse res = new HttpResponse();
        res.setStatusCode(200);
        res.setStatus('OK');
        Test.setMock(HttpCalloutMock.class, new OASResponseMock(res));

        Map<String, Object> params = new Map<String, Object>{
            'oaSLoginSubmissionExample' => {"login":"user@domain.com","passwd":"mypassword","remember":"true","g-recaptcha-response":{"__v_isShallow":false,"dep":{"w":0,"n":0},"__v_isRef":true,"_rawValue":"zzzzz","_value":"zzzzz"}}
        };

        OASClient client;
        OASPublicApi api;
        String js = '';

        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdCookieAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.submitSignup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('apiKeyAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.submitSignup(params);
        System.assertEquals(expectedResponse, response);
        client = new OASClient();
        api = new OASPublicApi(client);
        ((OAS.ApiKeyAuth)client.getAuthentication('sessionIdHeaderAuth')).setApiKey('foo-bar-api-key');


        js = JSON.serialize();
        res.setHeader('Content-Type', 'application/json');
        res.setBody(js);
        expectedResponse = ;
        response = () api.submitSignup(params);
        System.assertEquals(expectedResponse, response);
    }
}