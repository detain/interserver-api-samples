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
    public interface IWebhostingApi
    {
        /// <summary>
        /// Place Website Order Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.
        /// </summary>
        /// <returns></returns>
        void AddWebsite ();
        /// <summary>
        /// Website Ordering Information Retrieves available webhosting plans and pricing for ordering.
        /// </summary>
        /// <returns>WebsitesOrder</returns>
        WebsitesOrder GetNewWebsite ();
        /// <summary>
        /// Get Website IP Information Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20023</returns>
        InlineResponse20023 GetWebsiteBuyIp (int? id);
        /// <summary>
        /// Get Website Order Returns detailed information about a specific webhosting order including its domain, plan, and status.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>Website</returns>
        Website GetWebsiteInfo (int? id);
        /// <summary>
        /// Get Website Invoices Returns the billing invoices associated with this webhosting service.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetWebsiteInvoices (int? id);
        /// <summary>
        /// Get Website Listing Gets a listing of your webhosting orders and service details.
        /// </summary>
        /// <returns>List&lt;WebsiteRow&gt;</returns>
        List<WebsiteRow> GetWebsiteList ();
        /// <summary>
        /// Get Website Backups Gets a list of the backups that exist for a website and their sizes.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>WebsiteBackups</returns>
        WebsiteBackups GetWebsitesBackups (int? id);
        /// <summary>
        /// Hosting Panel Auto Login Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>WebsiteLoginResponse</returns>
        WebsiteLoginResponse GetWebsitesLogin (int? id);
        /// <summary>
        /// Resend Website Welcome Email Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetWebsitesWelcomeEmail (int? id);
        /// <summary>
        /// Get Website Reverse DNS Returns the current reverse DNS (PTR record) entries for the website&#x27;s IP addresses.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>ReverseDnsEntries</returns>
        ReverseDnsEntries GettWebsiteReverseDns (int? id);
        /// <summary>
        /// Update Website IP DNS Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20024</returns>
        InlineResponse20024 PostWebsiteBuyIp (IdBuyIpBody body, int? id);
        /// <summary>
        /// Update Website IP DNS Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20024</returns>
        InlineResponse20024 PostWebsiteBuyIp (Dictionary<string, string> ips, int? id);
        /// <summary>
        /// Request Website Migration Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20025</returns>
        InlineResponse20025 PostWebsiteMigration (IdMigrationBody body, int? id);
        /// <summary>
        /// Request Website Migration Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
        /// </summary>
        /// <param name="custPortal"></param>
        /// <param name="regEmail"></param>
        /// <param name="password"></param>
        /// <param name="ctrlPanel"></param>
        /// <param name="ftpUsername"></param>
        /// <param name="ftpPassword"></param>
        /// <param name="siteBusyMig"></param>
        /// <param name="splReqMig"></param>
        /// <param name="domainReg"></param>
        /// <param name="dataMig"></param>
        /// <param name="domainRegPortal"></param>
        /// <param name="domainRegEmail"></param>
        /// <param name="domainRegPassword"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20025</returns>
        InlineResponse20025 PostWebsiteMigration (string custPortal, string regEmail, string password, string ctrlPanel, string ftpUsername, string ftpPassword, string siteBusyMig, string splReqMig, string domainReg, string dataMig, string domainRegPortal, string domainRegEmail, string domainRegPassword, int? id);
        /// <summary>
        /// Update Website Reverse DNS Updates the reverse DNS entries for each of the IP addresses for the website.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>TextResponse</returns>
        TextResponse PostWebsitesReverseDns (ReverseDnsEntries body, int? id);
        /// <summary>
        /// Update Website Reverse DNS Updates the reverse DNS entries for each of the IP addresses for the website.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>TextResponse</returns>
        TextResponse PostWebsitesReverseDns (Dictionary<string, Object> ips, int? id);
        /// <summary>
        /// Validate Webhosting Order Validates a webhosting order before placing it.
        /// </summary>
        /// <returns></returns>
        void PutWebsites ();
        /// <summary>
        /// Update Website Order Updates settings on a webhosting order.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns></returns>
        void UpdateWebsiteInfo (string id);
        /// <summary>
        /// Cancel Website Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20022</returns>
        InlineResponse20022 WebhostingCancel (string id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class WebhostingApi : IWebhostingApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="WebhostingApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public WebhostingApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="WebhostingApi"/> class.
        /// </summary>
        /// <returns></returns>
        public WebhostingApi(String basePath)
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
        /// Place Website Order Places an order for a new webhosting package. Use &#x60;PUT /websites/order&#x60; to validate the order first.
        /// </summary>
        /// <returns></returns>
        public void AddWebsite ()
        {
    
            var path = "/websites/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddWebsite: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddWebsite: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Website Ordering Information Retrieves available webhosting plans and pricing for ordering.
        /// </summary>
        /// <returns>WebsitesOrder</returns>
        public WebsitesOrder GetNewWebsite ()
        {
    
            var path = "/websites/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewWebsite: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewWebsite: " + response.ErrorMessage, response.ErrorMessage);
    
            return (WebsitesOrder) ApiClient.Deserialize(response.Content, typeof(WebsitesOrder), response.Headers);
        }
    
        /// <summary>
        /// Get Website IP Information Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via &#x60;POST /websites/{id}/buy_ip&#x60;.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20023</returns>
        public InlineResponse20023 GetWebsiteBuyIp (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetWebsiteBuyIp");
    
            var path = "/websites/{id}/buy_ip";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteBuyIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteBuyIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20023) ApiClient.Deserialize(response.Content, typeof(InlineResponse20023), response.Headers);
        }
    
        /// <summary>
        /// Get Website Order Returns detailed information about a specific webhosting order including its domain, plan, and status.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>Website</returns>
        public Website GetWebsiteInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetWebsiteInfo");
    
            var path = "/websites/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Website) ApiClient.Deserialize(response.Content, typeof(Website), response.Headers);
        }
    
        /// <summary>
        /// Get Website Invoices Returns the billing invoices associated with this webhosting service.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetWebsiteInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetWebsiteInvoices");
    
            var path = "/websites/{id}/invoices";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// Get Website Listing Gets a listing of your webhosting orders and service details.
        /// </summary>
        /// <returns>List&lt;WebsiteRow&gt;</returns>
        public List<WebsiteRow> GetWebsiteList ()
        {
    
            var path = "/websites";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsiteList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<WebsiteRow>) ApiClient.Deserialize(response.Content, typeof(List<WebsiteRow>), response.Headers);
        }
    
        /// <summary>
        /// Get Website Backups Gets a list of the backups that exist for a website and their sizes.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>WebsiteBackups</returns>
        public WebsiteBackups GetWebsitesBackups (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetWebsitesBackups");
    
            var path = "/websites/{id}/backups";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsitesBackups: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsitesBackups: " + response.ErrorMessage, response.ErrorMessage);
    
            return (WebsiteBackups) ApiClient.Deserialize(response.Content, typeof(WebsiteBackups), response.Headers);
        }
    
        /// <summary>
        /// Hosting Panel Auto Login Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>WebsiteLoginResponse</returns>
        public WebsiteLoginResponse GetWebsitesLogin (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetWebsitesLogin");
    
            var path = "/websites/{id}/login";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsitesLogin: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsitesLogin: " + response.ErrorMessage, response.ErrorMessage);
    
            return (WebsiteLoginResponse) ApiClient.Deserialize(response.Content, typeof(WebsiteLoginResponse), response.Headers);
        }
    
        /// <summary>
        /// Resend Website Welcome Email Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetWebsitesWelcomeEmail (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetWebsitesWelcomeEmail");
    
            var path = "/websites/{id}/welcome_email";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsitesWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetWebsitesWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Website Reverse DNS Returns the current reverse DNS (PTR record) entries for the website&#x27;s IP addresses.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>ReverseDnsEntries</returns>
        public ReverseDnsEntries GettWebsiteReverseDns (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GettWebsiteReverseDns");
    
            var path = "/websites/{id}/reverse_dns";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GettWebsiteReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GettWebsiteReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ReverseDnsEntries) ApiClient.Deserialize(response.Content, typeof(ReverseDnsEntries), response.Headers);
        }
    
        /// <summary>
        /// Update Website IP DNS Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20024</returns>
        public InlineResponse20024 PostWebsiteBuyIp (IdBuyIpBody body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostWebsiteBuyIp");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostWebsiteBuyIp");
    
            var path = "/websites/{id}/buy_ip";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteBuyIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteBuyIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20024) ApiClient.Deserialize(response.Content, typeof(InlineResponse20024), response.Headers);
        }
    
        /// <summary>
        /// Update Website IP DNS Updates the reverse DNS hostnames for the website&#x27;s IP addresses. Provide an &#x60;ips&#x60; object mapping each IP address to its desired hostname.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20024</returns>
        public InlineResponse20024 PostWebsiteBuyIp (Dictionary<string, string> ips, int? id)
        {
            // verify the required parameter 'ips' is set
            if (ips == null) throw new ApiException(400, "Missing required parameter 'ips' when calling PostWebsiteBuyIp");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostWebsiteBuyIp");
    
            var path = "/websites/{id}/buy_ip";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (ips != null) formParams.Add("ips", ApiClient.ParameterToString(ips)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteBuyIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteBuyIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20024) ApiClient.Deserialize(response.Content, typeof(InlineResponse20024), response.Headers);
        }
    
        /// <summary>
        /// Request Website Migration Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20025</returns>
        public InlineResponse20025 PostWebsiteMigration (IdMigrationBody body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostWebsiteMigration");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostWebsiteMigration");
    
            var path = "/websites/{id}/migration";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteMigration: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteMigration: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20025) ApiClient.Deserialize(response.Content, typeof(InlineResponse20025), response.Headers);
        }
    
        /// <summary>
        /// Request Website Migration Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned &#x60;ticket&#x60; ID with &#x60;/tickets/{id}&#x60; to monitor status.
        /// </summary>
        /// <param name="custPortal"></param>
        /// <param name="regEmail"></param>
        /// <param name="password"></param>
        /// <param name="ctrlPanel"></param>
        /// <param name="ftpUsername"></param>
        /// <param name="ftpPassword"></param>
        /// <param name="siteBusyMig"></param>
        /// <param name="splReqMig"></param>
        /// <param name="domainReg"></param>
        /// <param name="dataMig"></param>
        /// <param name="domainRegPortal"></param>
        /// <param name="domainRegEmail"></param>
        /// <param name="domainRegPassword"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20025</returns>
        public InlineResponse20025 PostWebsiteMigration (string custPortal, string regEmail, string password, string ctrlPanel, string ftpUsername, string ftpPassword, string siteBusyMig, string splReqMig, string domainReg, string dataMig, string domainRegPortal, string domainRegEmail, string domainRegPassword, int? id)
        {
            // verify the required parameter 'custPortal' is set
            if (custPortal == null) throw new ApiException(400, "Missing required parameter 'custPortal' when calling PostWebsiteMigration");
            // verify the required parameter 'regEmail' is set
            if (regEmail == null) throw new ApiException(400, "Missing required parameter 'regEmail' when calling PostWebsiteMigration");
            // verify the required parameter 'password' is set
            if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling PostWebsiteMigration");
            // verify the required parameter 'ctrlPanel' is set
            if (ctrlPanel == null) throw new ApiException(400, "Missing required parameter 'ctrlPanel' when calling PostWebsiteMigration");
            // verify the required parameter 'ftpUsername' is set
            if (ftpUsername == null) throw new ApiException(400, "Missing required parameter 'ftpUsername' when calling PostWebsiteMigration");
            // verify the required parameter 'ftpPassword' is set
            if (ftpPassword == null) throw new ApiException(400, "Missing required parameter 'ftpPassword' when calling PostWebsiteMigration");
            // verify the required parameter 'siteBusyMig' is set
            if (siteBusyMig == null) throw new ApiException(400, "Missing required parameter 'siteBusyMig' when calling PostWebsiteMigration");
            // verify the required parameter 'splReqMig' is set
            if (splReqMig == null) throw new ApiException(400, "Missing required parameter 'splReqMig' when calling PostWebsiteMigration");
            // verify the required parameter 'domainReg' is set
            if (domainReg == null) throw new ApiException(400, "Missing required parameter 'domainReg' when calling PostWebsiteMigration");
            // verify the required parameter 'dataMig' is set
            if (dataMig == null) throw new ApiException(400, "Missing required parameter 'dataMig' when calling PostWebsiteMigration");
            // verify the required parameter 'domainRegPortal' is set
            if (domainRegPortal == null) throw new ApiException(400, "Missing required parameter 'domainRegPortal' when calling PostWebsiteMigration");
            // verify the required parameter 'domainRegEmail' is set
            if (domainRegEmail == null) throw new ApiException(400, "Missing required parameter 'domainRegEmail' when calling PostWebsiteMigration");
            // verify the required parameter 'domainRegPassword' is set
            if (domainRegPassword == null) throw new ApiException(400, "Missing required parameter 'domainRegPassword' when calling PostWebsiteMigration");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostWebsiteMigration");
    
            var path = "/websites/{id}/migration";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (custPortal != null) formParams.Add("custPortal", ApiClient.ParameterToString(custPortal)); // form parameter
if (regEmail != null) formParams.Add("regEmail", ApiClient.ParameterToString(regEmail)); // form parameter
if (password != null) formParams.Add("password", ApiClient.ParameterToString(password)); // form parameter
if (ctrlPanel != null) formParams.Add("ctrlPanel", ApiClient.ParameterToString(ctrlPanel)); // form parameter
if (ftpUsername != null) formParams.Add("ftpUsername", ApiClient.ParameterToString(ftpUsername)); // form parameter
if (ftpPassword != null) formParams.Add("ftpPassword", ApiClient.ParameterToString(ftpPassword)); // form parameter
if (siteBusyMig != null) formParams.Add("siteBusyMig", ApiClient.ParameterToString(siteBusyMig)); // form parameter
if (splReqMig != null) formParams.Add("splReqMig", ApiClient.ParameterToString(splReqMig)); // form parameter
if (domainReg != null) formParams.Add("domainReg", ApiClient.ParameterToString(domainReg)); // form parameter
if (dataMig != null) formParams.Add("dataMig", ApiClient.ParameterToString(dataMig)); // form parameter
if (domainRegPortal != null) formParams.Add("domainRegPortal", ApiClient.ParameterToString(domainRegPortal)); // form parameter
if (domainRegEmail != null) formParams.Add("domainRegEmail", ApiClient.ParameterToString(domainRegEmail)); // form parameter
if (domainRegPassword != null) formParams.Add("domainRegPassword", ApiClient.ParameterToString(domainRegPassword)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteMigration: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsiteMigration: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20025) ApiClient.Deserialize(response.Content, typeof(InlineResponse20025), response.Headers);
        }
    
        /// <summary>
        /// Update Website Reverse DNS Updates the reverse DNS entries for each of the IP addresses for the website.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostWebsitesReverseDns (ReverseDnsEntries body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostWebsitesReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostWebsitesReverseDns");
    
            var path = "/websites/{id}/reverse_dns";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsitesReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsitesReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Website Reverse DNS Updates the reverse DNS entries for each of the IP addresses for the website.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostWebsitesReverseDns (Dictionary<string, Object> ips, int? id)
        {
            // verify the required parameter 'ips' is set
            if (ips == null) throw new ApiException(400, "Missing required parameter 'ips' when calling PostWebsitesReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostWebsitesReverseDns");
    
            var path = "/websites/{id}/reverse_dns";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (ips != null) formParams.Add("ips", ApiClient.ParameterToString(ips)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsitesReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostWebsitesReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate Webhosting Order Validates a webhosting order before placing it.
        /// </summary>
        /// <returns></returns>
        public void PutWebsites ()
        {
    
            var path = "/websites/order";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PutWebsites: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutWebsites: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Update Website Order Updates settings on a webhosting order.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns></returns>
        public void UpdateWebsiteInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateWebsiteInfo");
    
            var path = "/websites/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateWebsiteInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateWebsiteInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Cancel Website Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
        /// </summary>
        /// <param name="id">The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.</param>
        /// <returns>InlineResponse20022</returns>
        public InlineResponse20022 WebhostingCancel (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling WebhostingCancel");
    
            var path = "/websites/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling WebhostingCancel: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling WebhostingCancel: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20022) ApiClient.Deserialize(response.Content, typeof(InlineResponse20022), response.Headers);
        }
    
    }
}
