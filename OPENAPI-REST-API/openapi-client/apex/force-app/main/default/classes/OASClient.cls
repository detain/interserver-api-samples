public class OASClient extends OAS.ApiClient {
    public OASClient() {
        basePath = 'https://my.interserver.net/apiv2';
        calloutName = 'InterServer_Management_API';
        authentications.put('apiKeyAuth', new OAS.ApiKeyHeaderAuth('X-API-KEY'));
        authentications.put('sessionIdHeaderAuth', new OAS.ApiKeyHeaderAuth('sessionid'));
        authentications.put('sessionIdCookieAuth', new OAS.ApiKeyHeaderAuth('sessionid'));
    }
}
