using System;
using System.Collections.Generic;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IPublicApi
    {
        /// <summary>
        /// Get Captcha Challenge Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
        /// </summary>
        /// <returns>CaptchaResponse</returns>
        CaptchaResponse GetCaptcha ();
        /// <summary>
        /// Get Countries Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
        /// </summary>
        /// <param name="fetchBy">Get countries by iso2 or iso3 or numcode</param>
        /// <returns>Object</returns>
        Object GetCountries (string fetchBy);
        /// <summary>
        /// Get Server Info Returns metadata about the API server&#x27;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
        /// </summary>
        /// <returns>ServicesInfo</returns>
        ServicesInfo GetInfo ();
        /// <summary>
        /// Get Login Info Gets the various pieces of information useful for generating a login page.
        /// </summary>
        /// <returns>LoginInfo</returns>
        LoginInfo GetLoginInfo ();
        /// <summary>
        /// List Marketplace Servers Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
        /// </summary>
        /// <returns>BuyItNowList</returns>
        BuyItNowList GetMPServers ();
        /// <summary>
        /// Get OAuth Redirect URL Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
        /// </summary>
        /// <param name="provider">The OAuth provider name (e.g. &#x60;Google&#x60;).</param>
        /// <returns>InlineResponse2005</returns>
        InlineResponse2005 GetOauthRedirect (string provider);
        /// <summary>
        /// Get Available Timezones Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
        /// </summary>
        /// <returns>List&lt;string&gt;</returns>
        List<string> GetTimezones ();
        /// <summary>
        /// Complete OAuth Two-Factor Verification Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>InlineResponse2007</returns>
        InlineResponse2007 PatchOauthTwoFactor (OauthBody2 body);
        /// <summary>
        /// Complete OAuth Two-Factor Verification Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
        /// </summary>
        /// <param name="accountId"></param>
        /// <param name="code"></param>
        /// <returns>InlineResponse2007</returns>
        InlineResponse2007 PatchOauthTwoFactor (int? accountId, string code);
        /// <summary>
        /// Ping Server Performs a single ping/pong request to let you know if the server is up.
        /// </summary>
        /// <returns>string</returns>
        string PingServer ();
        /// <summary>
        /// OAuth Callback Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
        /// </summary>
        /// <param name="provider">The OAuth provider name (e.g. &#x60;Google&#x60;).</param>
        /// <param name="body"></param>
        /// <returns>InlineResponse2006</returns>
        InlineResponse2006 PostOauthCallback (string provider, OauthBody body);
        /// <summary>
        /// OAuth Callback Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
        /// </summary>
        /// <param name="provider">The OAuth provider name (e.g. &#x60;Google&#x60;).</param>
        /// <param name="provider2"></param>
        /// <returns>InlineResponse2006</returns>
        InlineResponse2006 PostOauthCallback (string provider, string provider2);
        /// <summary>
        /// Submit Login Information Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
        /// </summary>
        /// <param name="login"></param>
        /// <param name="passwd"></param>
        /// <param name="remember"></param>
        /// <param name="gRecaptchaResponse"></param>
        /// <param name="tfa"></param>
        /// <returns>LoginSuccessResponse</returns>
        LoginSuccessResponse SubmitLogin (string login, string passwd, string remember, LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, string tfa);
        /// <summary>
        /// Submit Login Information Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>LoginSuccessResponse</returns>
        LoginSuccessResponse SubmitLogin (LoginSubmissionExample body);
        /// <summary>
        /// Submit Signup Information Creates a new account in our system using the provided information.
        /// </summary>
        /// <param name="body"></param>
        /// <returns></returns>
        void SubmitSignup (LoginSubmissionExample body);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class PublicApi : IPublicApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PublicApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public PublicApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="PublicApi"/> class.
        /// </summary>
        /// <returns></returns>
        public PublicApi(String basePath)
        {
            this.ApiClient = new ApiClient(basePath);
        }
    
        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <param name="basePath">The base path</param>
        /// <value>The base path</value>
        public void SetBasePath(String basePath)
        {
            this.ApiClient.BasePath = basePath;
        }
    
        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <param name="basePath">The base path</param>
        /// <value>The base path</value>
        public String GetBasePath(String basePath)
        {
            return this.ApiClient.BasePath;
        }
    
        /// <summary>
        /// Gets or sets the API client.
        /// </summary>
        /// <value>An instance of the ApiClient</value>
        public ApiClient ApiClient {get; set;}
    
        /// <summary>
        /// Get Captcha Challenge Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
        /// </summary>
        /// <returns>CaptchaResponse</returns>
        public CaptchaResponse GetCaptcha ()
        {
    
            var path = "/captcha";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetCaptcha: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetCaptcha: " + response.ErrorMessage, response.ErrorMessage);
    
            return (CaptchaResponse) ApiClient.Deserialize(response.Content, typeof(CaptchaResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Countries Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
        /// </summary>
        /// <param name="fetchBy">Get countries by iso2 or iso3 or numcode</param>
        /// <returns>Object</returns>
        public Object GetCountries (string fetchBy)
        {
    
            var path = "/account/countries";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (fetchBy != null) queryParams.Add("fetch_by", ApiClient.ParameterToString(fetchBy)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetCountries: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetCountries: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Object) ApiClient.Deserialize(response.Content, typeof(Object), response.Headers);
        }
    
        /// <summary>
        /// Get Server Info Returns metadata about the API server&#x27;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
        /// </summary>
        /// <returns>ServicesInfo</returns>
        public ServicesInfo GetInfo ()
        {
    
            var path = "/info";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServicesInfo) ApiClient.Deserialize(response.Content, typeof(ServicesInfo), response.Headers);
        }
    
        /// <summary>
        /// Get Login Info Gets the various pieces of information useful for generating a login page.
        /// </summary>
        /// <returns>LoginInfo</returns>
        public LoginInfo GetLoginInfo ()
        {
    
            var path = "/login";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetLoginInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetLoginInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (LoginInfo) ApiClient.Deserialize(response.Content, typeof(LoginInfo), response.Headers);
        }
    
        /// <summary>
        /// List Marketplace Servers Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
        /// </summary>
        /// <returns>BuyItNowList</returns>
        public BuyItNowList GetMPServers ()
        {
    
            var path = "/buy_now_servers_list";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMPServers: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMPServers: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BuyItNowList) ApiClient.Deserialize(response.Content, typeof(BuyItNowList), response.Headers);
        }
    
        /// <summary>
        /// Get OAuth Redirect URL Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
        /// </summary>
        /// <param name="provider">The OAuth provider name (e.g. &#x60;Google&#x60;).</param>
        /// <returns>InlineResponse2005</returns>
        public InlineResponse2005 GetOauthRedirect (string provider)
        {
            // verify the required parameter 'provider' is set
            if (provider == null) throw new ApiException(400, "Missing required parameter 'provider' when calling GetOauthRedirect");
    
            var path = "/oauth";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (provider != null) queryParams.Add("provider", ApiClient.ParameterToString(provider)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetOauthRedirect: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetOauthRedirect: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2005) ApiClient.Deserialize(response.Content, typeof(InlineResponse2005), response.Headers);
        }
    
        /// <summary>
        /// Get Available Timezones Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
        /// </summary>
        /// <returns>List&lt;string&gt;</returns>
        public List<string> GetTimezones ()
        {
    
            var path = "/account/timezones";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetTimezones: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetTimezones: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<string>) ApiClient.Deserialize(response.Content, typeof(List<string>), response.Headers);
        }
    
        /// <summary>
        /// Complete OAuth Two-Factor Verification Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>InlineResponse2007</returns>
        public InlineResponse2007 PatchOauthTwoFactor (OauthBody2 body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PatchOauthTwoFactor");
    
            var path = "/oauth";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PATCH, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PatchOauthTwoFactor: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PatchOauthTwoFactor: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2007) ApiClient.Deserialize(response.Content, typeof(InlineResponse2007), response.Headers);
        }
    
        /// <summary>
        /// Complete OAuth Two-Factor Verification Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
        /// </summary>
        /// <param name="accountId"></param>
        /// <param name="code"></param>
        /// <returns>InlineResponse2007</returns>
        public InlineResponse2007 PatchOauthTwoFactor (int? accountId, string code)
        {
            // verify the required parameter 'accountId' is set
            if (accountId == null) throw new ApiException(400, "Missing required parameter 'accountId' when calling PatchOauthTwoFactor");
            // verify the required parameter 'code' is set
            if (code == null) throw new ApiException(400, "Missing required parameter 'code' when calling PatchOauthTwoFactor");
    
            var path = "/oauth";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (accountId != null) formParams.Add("account_id", ApiClient.ParameterToString(accountId)); // form parameter
if (code != null) formParams.Add("code", ApiClient.ParameterToString(code)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PATCH, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PatchOauthTwoFactor: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PatchOauthTwoFactor: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2007) ApiClient.Deserialize(response.Content, typeof(InlineResponse2007), response.Headers);
        }
    
        /// <summary>
        /// Ping Server Performs a single ping/pong request to let you know if the server is up.
        /// </summary>
        /// <returns>string</returns>
        public string PingServer ()
        {
    
            var path = "/ping";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PingServer: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PingServer: " + response.ErrorMessage, response.ErrorMessage);
    
            return (string) ApiClient.Deserialize(response.Content, typeof(string), response.Headers);
        }
    
        /// <summary>
        /// OAuth Callback Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
        /// </summary>
        /// <param name="provider">The OAuth provider name (e.g. &#x60;Google&#x60;).</param>
        /// <param name="body"></param>
        /// <returns>InlineResponse2006</returns>
        public InlineResponse2006 PostOauthCallback (string provider, OauthBody body)
        {
            // verify the required parameter 'provider' is set
            if (provider == null) throw new ApiException(400, "Missing required parameter 'provider' when calling PostOauthCallback");
    
            var path = "/oauth";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (provider != null) queryParams.Add("provider", ApiClient.ParameterToString(provider)); // query parameter
                        postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostOauthCallback: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostOauthCallback: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2006) ApiClient.Deserialize(response.Content, typeof(InlineResponse2006), response.Headers);
        }
    
        /// <summary>
        /// OAuth Callback Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
        /// </summary>
        /// <param name="provider">The OAuth provider name (e.g. &#x60;Google&#x60;).</param>
        /// <param name="provider2"></param>
        /// <returns>InlineResponse2006</returns>
        public InlineResponse2006 PostOauthCallback (string provider, string provider2)
        {
            // verify the required parameter 'provider' is set
            if (provider == null) throw new ApiException(400, "Missing required parameter 'provider' when calling PostOauthCallback");
    
            var path = "/oauth";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (provider != null) queryParams.Add("provider", ApiClient.ParameterToString(provider)); // query parameter
                        if (provider != null) formParams.Add("provider", ApiClient.ParameterToString(provider)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostOauthCallback: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostOauthCallback: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2006) ApiClient.Deserialize(response.Content, typeof(InlineResponse2006), response.Headers);
        }
    
        /// <summary>
        /// Submit Login Information Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
        /// </summary>
        /// <param name="login"></param>
        /// <param name="passwd"></param>
        /// <param name="remember"></param>
        /// <param name="gRecaptchaResponse"></param>
        /// <param name="tfa"></param>
        /// <returns>LoginSuccessResponse</returns>
        public LoginSuccessResponse SubmitLogin (string login, string passwd, string remember, LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, string tfa)
        {
            // verify the required parameter 'login' is set
            if (login == null) throw new ApiException(400, "Missing required parameter 'login' when calling SubmitLogin");
            // verify the required parameter 'passwd' is set
            if (passwd == null) throw new ApiException(400, "Missing required parameter 'passwd' when calling SubmitLogin");
            // verify the required parameter 'remember' is set
            if (remember == null) throw new ApiException(400, "Missing required parameter 'remember' when calling SubmitLogin");
            // verify the required parameter 'gRecaptchaResponse' is set
            if (gRecaptchaResponse == null) throw new ApiException(400, "Missing required parameter 'gRecaptchaResponse' when calling SubmitLogin");
            // verify the required parameter 'tfa' is set
            if (tfa == null) throw new ApiException(400, "Missing required parameter 'tfa' when calling SubmitLogin");
    
            var path = "/login";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (login != null) formParams.Add("login", ApiClient.ParameterToString(login)); // form parameter
if (passwd != null) formParams.Add("passwd", ApiClient.ParameterToString(passwd)); // form parameter
if (remember != null) formParams.Add("remember", ApiClient.ParameterToString(remember)); // form parameter
if (gRecaptchaResponse != null) formParams.Add("g-recaptcha-response", ApiClient.ParameterToString(gRecaptchaResponse)); // form parameter
if (tfa != null) formParams.Add("tfa", ApiClient.ParameterToString(tfa)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling SubmitLogin: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling SubmitLogin: " + response.ErrorMessage, response.ErrorMessage);
    
            return (LoginSuccessResponse) ApiClient.Deserialize(response.Content, typeof(LoginSuccessResponse), response.Headers);
        }
    
        /// <summary>
        /// Submit Login Information Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>LoginSuccessResponse</returns>
        public LoginSuccessResponse SubmitLogin (LoginSubmissionExample body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling SubmitLogin");
    
            var path = "/login";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling SubmitLogin: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling SubmitLogin: " + response.ErrorMessage, response.ErrorMessage);
    
            return (LoginSuccessResponse) ApiClient.Deserialize(response.Content, typeof(LoginSuccessResponse), response.Headers);
        }
    
        /// <summary>
        /// Submit Signup Information Creates a new account in our system using the provided information.
        /// </summary>
        /// <param name="body"></param>
        /// <returns></returns>
        public void SubmitSignup (LoginSubmissionExample body)
        {
    
            var path = "/signup";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling SubmitSignup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling SubmitSignup: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
    }
}
