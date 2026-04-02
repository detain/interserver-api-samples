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
    public interface IAccountApi
    {
        /// <summary>
        /// Change Account Username Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
        /// </summary>
        /// <returns>TextResponse</returns>
        TextResponse ChangeAccountUsername ();
        /// <summary>
        /// Unlink OAuth Account Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
        /// </summary>
        /// <param name="name"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteAccountOauthName (string name);
        /// <summary>
        /// Disable Two-Factor Authentication Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
        /// </summary>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteAccountTfa ();
        /// <summary>
        /// Remove IP Access Restriction Removes an IP address range from the account&#x27;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>GenericResponse</returns>
        GenericResponse DeleteIpLimit (IpLimitRange body);
        /// <summary>
        /// Retrieve Account Details Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
        /// </summary>
        /// <returns>AccountInfo</returns>
        AccountInfo GetAccountInfo ();
        /// <summary>
        /// Get Two-Factor Setup Data Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.
        /// </summary>
        /// <returns>InlineResponse200</returns>
        InlineResponse200 GetAccountTfaSetup ();
        /// <summary>
        /// Get Home Data Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
        /// </summary>
        /// <returns>Home</returns>
        Home GetHome ();
        /// <summary>
        /// Search Autocomplete Returns autocomplete results for the account&#x27;s services and records. Use this endpoint to power global search experiences in the client portal.
        /// </summary>
        /// <returns>SearchAutocompleteResponse</returns>
        SearchAutocompleteResponse GetSearch ();
        /// <summary>
        /// Log Out Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
        /// </summary>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse Logout ();
        /// <summary>
        /// Logout of OAuth Logs out of the specified OAuth provider session.
        /// </summary>
        /// <param name="name"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse LogoutAccountOauth (string name);
        /// <summary>
        /// Generate New API Key Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
        /// </summary>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountApiKey ();
        /// <summary>
        /// Update Account Feature Flags Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
        /// </summary>
        /// <param name="disableReset"></param>
        /// <param name="disableReinstall"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountFeatures (int? disableReset, int? disableReinstall);
        /// <summary>
        /// Update Account Feature Flags Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountFeatures (AccountFeatures body);
        /// <summary>
        /// Update Account Information Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="company"></param>
        /// <param name="address"></param>
        /// <param name="address2"></param>
        /// <param name="city"></param>
        /// <param name="state"></param>
        /// <param name="zip"></param>
        /// <param name="country"></param>
        /// <param name="phone"></param>
        /// <param name="locale"></param>
        /// <param name="emailInvoices"></param>
        /// <param name="emailAbuse"></param>
        /// <param name="disableReset"></param>
        /// <param name="disableReinstall"></param>
        /// <param name="disableServerNotifications"></param>
        /// <param name="disableEmailNotifications"></param>
        /// <param name="gstin"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountInfo (string name, string company, string address, string address2, string city, string state, string zip, string country, string phone, string locale, string emailInvoices, string emailAbuse, bool? disableReset, bool? disableReinstall, bool? disableServerNotifications, bool? disableEmailNotifications, string gstin);
        /// <summary>
        /// Update Account Information Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountInfo (AccountInfoPost body);
        /// <summary>
        /// Add IP Access Restriction Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
        /// </summary>
        /// <param name="start"></param>
        /// <param name="end"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountIpLimits (string start, string end);
        /// <summary>
        /// Add IP Access Restriction Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
        /// </summary>
        /// <param name="body">The lower and upper bounds of an ip range.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountIpLimits (IpLimitRange body);
        /// <summary>
        /// Change Account Password Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
        /// </summary>
        /// <param name="password"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAccountPassword (string password);
        /// <summary>
        /// Change Account Password Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAccountPassword (PasswordRequest body);
        /// <summary>
        /// Update SSH Keys Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
        /// </summary>
        /// <param name="sshKey"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountSshKey (string sshKey);
        /// <summary>
        /// Update SSH Keys Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountSshKey (AccountSshKey body);
        /// <summary>
        /// Enable Two-Factor Authentication Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
        /// </summary>
        /// <param name="_2faGoogleCode"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountTfa (string _2faGoogleCode);
        /// <summary>
        /// Enable Two-Factor Authentication Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateAccountTfa (Account2faBody1 body);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class AccountApi : IAccountApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AccountApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public AccountApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="AccountApi"/> class.
        /// </summary>
        /// <returns></returns>
        public AccountApi(String basePath)
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
        /// Change Account Username Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
        /// </summary>
        /// <returns>TextResponse</returns>
        public TextResponse ChangeAccountUsername ()
        {
    
            var path = "/account/username";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling ChangeAccountUsername: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ChangeAccountUsername: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Unlink OAuth Account Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
        /// </summary>
        /// <param name="name"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteAccountOauthName (string name)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling DeleteAccountOauthName");
    
            var path = "/account/oauth/{name}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "name" + "}", ApiClient.ParameterToString(name));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteAccountOauthName: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteAccountOauthName: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Disable Two-Factor Authentication Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
        /// </summary>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteAccountTfa ()
        {
    
            var path = "/account/2fa";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteAccountTfa: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteAccountTfa: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Remove IP Access Restriction Removes an IP address range from the account&#x27;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>GenericResponse</returns>
        public GenericResponse DeleteIpLimit (IpLimitRange body)
        {
    
            var path = "/account/iplimits";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteIpLimit: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteIpLimit: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Retrieve Account Details Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
        /// </summary>
        /// <returns>AccountInfo</returns>
        public AccountInfo GetAccountInfo ()
        {
    
            var path = "/account";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetAccountInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAccountInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (AccountInfo) ApiClient.Deserialize(response.Content, typeof(AccountInfo), response.Headers);
        }
    
        /// <summary>
        /// Get Two-Factor Setup Data Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.
        /// </summary>
        /// <returns>InlineResponse200</returns>
        public InlineResponse200 GetAccountTfaSetup ()
        {
    
            var path = "/account/2fa";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetAccountTfaSetup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAccountTfaSetup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse200) ApiClient.Deserialize(response.Content, typeof(InlineResponse200), response.Headers);
        }
    
        /// <summary>
        /// Get Home Data Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
        /// </summary>
        /// <returns>Home</returns>
        public Home GetHome ()
        {
    
            var path = "/home";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetHome: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetHome: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Home) ApiClient.Deserialize(response.Content, typeof(Home), response.Headers);
        }
    
        /// <summary>
        /// Search Autocomplete Returns autocomplete results for the account&#x27;s services and records. Use this endpoint to power global search experiences in the client portal.
        /// </summary>
        /// <returns>SearchAutocompleteResponse</returns>
        public SearchAutocompleteResponse GetSearch ()
        {
    
            var path = "/search";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetSearch: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetSearch: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SearchAutocompleteResponse) ApiClient.Deserialize(response.Content, typeof(SearchAutocompleteResponse), response.Headers);
        }
    
        /// <summary>
        /// Log Out Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
        /// </summary>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse Logout ()
        {
    
            var path = "/logout";
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
                throw new ApiException ((int)response.StatusCode, "Error calling Logout: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling Logout: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Logout of OAuth Logs out of the specified OAuth provider session.
        /// </summary>
        /// <param name="name"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse LogoutAccountOauth (string name)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling LogoutAccountOauth");
    
            var path = "/account/oauth/{name}/logout";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "name" + "}", ApiClient.ParameterToString(name));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling LogoutAccountOauth: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling LogoutAccountOauth: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Generate New API Key Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
        /// </summary>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountApiKey ()
        {
    
            var path = "/account/apikey";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountApiKey: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountApiKey: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Account Feature Flags Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
        /// </summary>
        /// <param name="disableReset"></param>
        /// <param name="disableReinstall"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountFeatures (int? disableReset, int? disableReinstall)
        {
            // verify the required parameter 'disableReset' is set
            if (disableReset == null) throw new ApiException(400, "Missing required parameter 'disableReset' when calling UpdateAccountFeatures");
            // verify the required parameter 'disableReinstall' is set
            if (disableReinstall == null) throw new ApiException(400, "Missing required parameter 'disableReinstall' when calling UpdateAccountFeatures");
    
            var path = "/account/features";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (disableReset != null) formParams.Add("disable_reset", ApiClient.ParameterToString(disableReset)); // form parameter
if (disableReinstall != null) formParams.Add("disable_reinstall", ApiClient.ParameterToString(disableReinstall)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountFeatures: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountFeatures: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Account Feature Flags Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountFeatures (AccountFeatures body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAccountFeatures");
    
            var path = "/account/features";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountFeatures: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountFeatures: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Account Information Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="company"></param>
        /// <param name="address"></param>
        /// <param name="address2"></param>
        /// <param name="city"></param>
        /// <param name="state"></param>
        /// <param name="zip"></param>
        /// <param name="country"></param>
        /// <param name="phone"></param>
        /// <param name="locale"></param>
        /// <param name="emailInvoices"></param>
        /// <param name="emailAbuse"></param>
        /// <param name="disableReset"></param>
        /// <param name="disableReinstall"></param>
        /// <param name="disableServerNotifications"></param>
        /// <param name="disableEmailNotifications"></param>
        /// <param name="gstin"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountInfo (string name, string company, string address, string address2, string city, string state, string zip, string country, string phone, string locale, string emailInvoices, string emailAbuse, bool? disableReset, bool? disableReinstall, bool? disableServerNotifications, bool? disableEmailNotifications, string gstin)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling UpdateAccountInfo");
            // verify the required parameter 'company' is set
            if (company == null) throw new ApiException(400, "Missing required parameter 'company' when calling UpdateAccountInfo");
            // verify the required parameter 'address' is set
            if (address == null) throw new ApiException(400, "Missing required parameter 'address' when calling UpdateAccountInfo");
            // verify the required parameter 'address2' is set
            if (address2 == null) throw new ApiException(400, "Missing required parameter 'address2' when calling UpdateAccountInfo");
            // verify the required parameter 'city' is set
            if (city == null) throw new ApiException(400, "Missing required parameter 'city' when calling UpdateAccountInfo");
            // verify the required parameter 'state' is set
            if (state == null) throw new ApiException(400, "Missing required parameter 'state' when calling UpdateAccountInfo");
            // verify the required parameter 'zip' is set
            if (zip == null) throw new ApiException(400, "Missing required parameter 'zip' when calling UpdateAccountInfo");
            // verify the required parameter 'country' is set
            if (country == null) throw new ApiException(400, "Missing required parameter 'country' when calling UpdateAccountInfo");
            // verify the required parameter 'phone' is set
            if (phone == null) throw new ApiException(400, "Missing required parameter 'phone' when calling UpdateAccountInfo");
            // verify the required parameter 'locale' is set
            if (locale == null) throw new ApiException(400, "Missing required parameter 'locale' when calling UpdateAccountInfo");
            // verify the required parameter 'emailInvoices' is set
            if (emailInvoices == null) throw new ApiException(400, "Missing required parameter 'emailInvoices' when calling UpdateAccountInfo");
            // verify the required parameter 'emailAbuse' is set
            if (emailAbuse == null) throw new ApiException(400, "Missing required parameter 'emailAbuse' when calling UpdateAccountInfo");
            // verify the required parameter 'disableReset' is set
            if (disableReset == null) throw new ApiException(400, "Missing required parameter 'disableReset' when calling UpdateAccountInfo");
            // verify the required parameter 'disableReinstall' is set
            if (disableReinstall == null) throw new ApiException(400, "Missing required parameter 'disableReinstall' when calling UpdateAccountInfo");
            // verify the required parameter 'disableServerNotifications' is set
            if (disableServerNotifications == null) throw new ApiException(400, "Missing required parameter 'disableServerNotifications' when calling UpdateAccountInfo");
            // verify the required parameter 'disableEmailNotifications' is set
            if (disableEmailNotifications == null) throw new ApiException(400, "Missing required parameter 'disableEmailNotifications' when calling UpdateAccountInfo");
            // verify the required parameter 'gstin' is set
            if (gstin == null) throw new ApiException(400, "Missing required parameter 'gstin' when calling UpdateAccountInfo");
    
            var path = "/account";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (name != null) formParams.Add("name", ApiClient.ParameterToString(name)); // form parameter
if (company != null) formParams.Add("company", ApiClient.ParameterToString(company)); // form parameter
if (address != null) formParams.Add("address", ApiClient.ParameterToString(address)); // form parameter
if (address2 != null) formParams.Add("address2", ApiClient.ParameterToString(address2)); // form parameter
if (city != null) formParams.Add("city", ApiClient.ParameterToString(city)); // form parameter
if (state != null) formParams.Add("state", ApiClient.ParameterToString(state)); // form parameter
if (zip != null) formParams.Add("zip", ApiClient.ParameterToString(zip)); // form parameter
if (country != null) formParams.Add("country", ApiClient.ParameterToString(country)); // form parameter
if (phone != null) formParams.Add("phone", ApiClient.ParameterToString(phone)); // form parameter
if (locale != null) formParams.Add("locale", ApiClient.ParameterToString(locale)); // form parameter
if (emailInvoices != null) formParams.Add("email_invoices", ApiClient.ParameterToString(emailInvoices)); // form parameter
if (emailAbuse != null) formParams.Add("email_abuse", ApiClient.ParameterToString(emailAbuse)); // form parameter
if (disableReset != null) formParams.Add("disable_reset", ApiClient.ParameterToString(disableReset)); // form parameter
if (disableReinstall != null) formParams.Add("disable_reinstall", ApiClient.ParameterToString(disableReinstall)); // form parameter
if (disableServerNotifications != null) formParams.Add("disable_server_notifications", ApiClient.ParameterToString(disableServerNotifications)); // form parameter
if (disableEmailNotifications != null) formParams.Add("disable_email_notifications", ApiClient.ParameterToString(disableEmailNotifications)); // form parameter
if (gstin != null) formParams.Add("gstin", ApiClient.ParameterToString(gstin)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Account Information Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountInfo (AccountInfoPost body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAccountInfo");
    
            var path = "/account";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add IP Access Restriction Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
        /// </summary>
        /// <param name="start"></param>
        /// <param name="end"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountIpLimits (string start, string end)
        {
            // verify the required parameter 'start' is set
            if (start == null) throw new ApiException(400, "Missing required parameter 'start' when calling UpdateAccountIpLimits");
            // verify the required parameter 'end' is set
            if (end == null) throw new ApiException(400, "Missing required parameter 'end' when calling UpdateAccountIpLimits");
    
            var path = "/account/iplimits";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (start != null) formParams.Add("start", ApiClient.ParameterToString(start)); // form parameter
if (end != null) formParams.Add("end", ApiClient.ParameterToString(end)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountIpLimits: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountIpLimits: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add IP Access Restriction Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
        /// </summary>
        /// <param name="body">The lower and upper bounds of an ip range.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountIpLimits (IpLimitRange body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAccountIpLimits");
    
            var path = "/account/iplimits";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountIpLimits: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountIpLimits: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Change Account Password Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
        /// </summary>
        /// <param name="password"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAccountPassword (string password)
        {
            // verify the required parameter 'password' is set
            if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling UpdateAccountPassword");
    
            var path = "/account/password";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (password != null) formParams.Add("password", ApiClient.ParameterToString(password)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Change Account Password Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAccountPassword (PasswordRequest body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAccountPassword");
    
            var path = "/account/password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update SSH Keys Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
        /// </summary>
        /// <param name="sshKey"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountSshKey (string sshKey)
        {
            // verify the required parameter 'sshKey' is set
            if (sshKey == null) throw new ApiException(400, "Missing required parameter 'sshKey' when calling UpdateAccountSshKey");
    
            var path = "/account/sshkey";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (sshKey != null) formParams.Add("ssh_key", ApiClient.ParameterToString(sshKey)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountSshKey: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountSshKey: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update SSH Keys Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountSshKey (AccountSshKey body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAccountSshKey");
    
            var path = "/account/sshkey";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountSshKey: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountSshKey: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Enable Two-Factor Authentication Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
        /// </summary>
        /// <param name="_2faGoogleCode"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountTfa (string _2faGoogleCode)
        {
            // verify the required parameter '_2faGoogleCode' is set
            if (_2faGoogleCode == null) throw new ApiException(400, "Missing required parameter '_2faGoogleCode' when calling UpdateAccountTfa");
    
            var path = "/account/2fa";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (_2faGoogleCode != null) formParams.Add("2fa_google_code", ApiClient.ParameterToString(_2faGoogleCode)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountTfa: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountTfa: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Enable Two-Factor Authentication Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateAccountTfa (Account2faBody1 body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAccountTfa");
    
            var path = "/account/2fa";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountTfa: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountTfa: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
    }
}
