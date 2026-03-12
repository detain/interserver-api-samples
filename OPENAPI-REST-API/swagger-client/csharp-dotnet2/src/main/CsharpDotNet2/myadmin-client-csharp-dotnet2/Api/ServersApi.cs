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
    public interface IServersApi
    {
        /// <summary>
        /// Place Server Order Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.
        /// </summary>
        /// <returns></returns>
        void AddServer ();
        /// <summary>
        /// Get Buy Now Server Options Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.
        /// </summary>
        /// <returns>InlineResponse20026</returns>
        InlineResponse20026 BuyItNowServerOrder ();
        /// <summary>
        /// List Marketplace Servers Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
        /// </summary>
        /// <returns>BuyItNowList</returns>
        BuyItNowList GetMPServers ();
        /// <summary>
        /// Server Ordering Information Retrieves available server configurations and pricing for ordering a new dedicated server.
        /// </summary>
        /// <returns>ServerOrder</returns>
        ServerOrder GetNewServer ();
        /// <summary>
        /// Get Server Order Returns detailed information about a specific server including its hardware configuration, IPs, and status.
        /// </summary>
        /// <param name="id">Server ID number.</param>
        /// <returns>Server</returns>
        Server GetServerInfo (int? id);
        /// <summary>
        /// Get Server Invoices Returns the billing invoices associated with this dedicated server.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetServerInvoices (int? id);
        /// <summary>
        /// List Servers Returns all dedicated server services on the account with their current status and configuration.
        /// </summary>
        /// <returns>List&lt;ServerRow&gt;</returns>
        List<ServerRow> GetServerList ();
        /// <summary>
        /// Reverse DNS Info Returns the current reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>ReverseDnsEntries</returns>
        ReverseDnsEntries GetServerReverseDns (int? id);
        /// <summary>
        /// Resend Server Welcome Email Resends the welcome email for the order.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetServersWelcomeEmail (int? id);
        /// <summary>
        /// Place Buy Now Server Order Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>ServersBuyNowResponse</returns>
        ServersBuyNowResponse PlaceBuyNowServer (OrderBuyNowServerBody body);
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse PostServerReverseDns (ReverseDnsEntries body, int? id);
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse PostServerReverseDns (Dictionary<string, Object> ips, int? id);
        /// <summary>
        /// Validate Server Order Validates a server order before placing it. Use this to check for errors before committing to a purchase.
        /// </summary>
        /// <returns></returns>
        void PutServers ();
        /// <summary>
        /// Server IPMI Live Information Returns the current IPMI live connection information for the server.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>ServerIpmiLiveInfo</returns>
        ServerIpmiLiveInfo ServerIpmiLiveGet (int? id);
        /// <summary>
        /// Server IPMI Live Setup Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
        /// </summary>
        /// <param name="asset"></param>
        /// <param name="ip"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>ServerIpmiLiveInfo</returns>
        ServerIpmiLiveInfo ServerIpmiLivePost (int? asset, string ip, int? id);
        /// <summary>
        /// Server IPMI Live Setup Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>ServerIpmiLiveInfo</returns>
        ServerIpmiLiveInfo ServerIpmiLivePost (ServerIpmiLiveRequest body, int? id);
        /// <summary>
        /// Get IPMI Power Status Returns the chassis power status from ipmi.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse ServerIpmiPowerGet (int? id);
        /// <summary>
        /// Server IPMI Power Uses the IPMI interface to set the Power status on the server.
        /// </summary>
        /// <param name="asset"></param>
        /// <param name="action"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse ServerIpmiPowerPost (int? asset, string action, int? id);
        /// <summary>
        /// Server IPMI Power Uses the IPMI interface to set the Power status on the server.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse ServerIpmiPowerPost (ServerIpmiPowerRequest body, int? id);
        /// <summary>
        /// Cancel Server Service Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>InlineResponse20019</returns>
        InlineResponse20019 ServersCancel (int? id);
        /// <summary>
        /// Update Server Order Updates settings on a dedicated server order.
        /// </summary>
        /// <param name="id">Server ID number.</param>
        /// <returns></returns>
        void UpdateServerInfo (string id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class ServersApi : IServersApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ServersApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public ServersApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="ServersApi"/> class.
        /// </summary>
        /// <returns></returns>
        public ServersApi(String basePath)
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
        /// Place Server Order Places an order for a new dedicated server. Use &#x60;PUT /servers/order&#x60; to validate the order first.
        /// </summary>
        /// <returns></returns>
        public void AddServer ()
        {
    
            var path = "/servers/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddServer: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddServer: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Buy Now Server Options Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via &#x60;POST /servers/order/buy_now_server&#x60;.
        /// </summary>
        /// <returns>InlineResponse20026</returns>
        public InlineResponse20026 BuyItNowServerOrder ()
        {
    
            var path = "/servers/order/buy_now_server";
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
                throw new ApiException ((int)response.StatusCode, "Error calling BuyItNowServerOrder: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling BuyItNowServerOrder: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20026) ApiClient.Deserialize(response.Content, typeof(InlineResponse20026), response.Headers);
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
        /// Server Ordering Information Retrieves available server configurations and pricing for ordering a new dedicated server.
        /// </summary>
        /// <returns>ServerOrder</returns>
        public ServerOrder GetNewServer ()
        {
    
            var path = "/servers/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewServer: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewServer: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServerOrder) ApiClient.Deserialize(response.Content, typeof(ServerOrder), response.Headers);
        }
    
        /// <summary>
        /// Get Server Order Returns detailed information about a specific server including its hardware configuration, IPs, and status.
        /// </summary>
        /// <param name="id">Server ID number.</param>
        /// <returns>Server</returns>
        public Server GetServerInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetServerInfo");
    
            var path = "/servers/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Server) ApiClient.Deserialize(response.Content, typeof(Server), response.Headers);
        }
    
        /// <summary>
        /// Get Server Invoices Returns the billing invoices associated with this dedicated server.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetServerInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetServerInvoices");
    
            var path = "/servers/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// List Servers Returns all dedicated server services on the account with their current status and configuration.
        /// </summary>
        /// <returns>List&lt;ServerRow&gt;</returns>
        public List<ServerRow> GetServerList ()
        {
    
            var path = "/servers";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<ServerRow>) ApiClient.Deserialize(response.Content, typeof(List<ServerRow>), response.Headers);
        }
    
        /// <summary>
        /// Reverse DNS Info Returns the current reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>ReverseDnsEntries</returns>
        public ReverseDnsEntries GetServerReverseDns (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetServerReverseDns");
    
            var path = "/servers/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetServerReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ReverseDnsEntries) ApiClient.Deserialize(response.Content, typeof(ReverseDnsEntries), response.Headers);
        }
    
        /// <summary>
        /// Resend Server Welcome Email Resends the welcome email for the order.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetServersWelcomeEmail (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetServersWelcomeEmail");
    
            var path = "/servers/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetServersWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetServersWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Place Buy Now Server Order Places an order for a buy-it-now dedicated server. Use &#x60;GET /servers/order/buy_now_server&#x60; to retrieve available server configurations and their IDs before ordering.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>ServersBuyNowResponse</returns>
        public ServersBuyNowResponse PlaceBuyNowServer (OrderBuyNowServerBody body)
        {
    
            var path = "/servers/order/buy_now_server";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PlaceBuyNowServer: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PlaceBuyNowServer: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServersBuyNowResponse) ApiClient.Deserialize(response.Content, typeof(ServersBuyNowResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostServerReverseDns (ReverseDnsEntries body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostServerReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostServerReverseDns");
    
            var path = "/servers/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostServerReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostServerReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the server&#x27;s IP addresses.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostServerReverseDns (Dictionary<string, Object> ips, int? id)
        {
            // verify the required parameter 'ips' is set
            if (ips == null) throw new ApiException(400, "Missing required parameter 'ips' when calling PostServerReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostServerReverseDns");
    
            var path = "/servers/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostServerReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostServerReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate Server Order Validates a server order before placing it. Use this to check for errors before committing to a purchase.
        /// </summary>
        /// <returns></returns>
        public void PutServers ()
        {
    
            var path = "/servers/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PutServers: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutServers: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Server IPMI Live Information Returns the current IPMI live connection information for the server.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>ServerIpmiLiveInfo</returns>
        public ServerIpmiLiveInfo ServerIpmiLiveGet (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ServerIpmiLiveGet");
    
            var path = "/servers/{id}/ipmi_live";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiLiveGet: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiLiveGet: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServerIpmiLiveInfo) ApiClient.Deserialize(response.Content, typeof(ServerIpmiLiveInfo), response.Headers);
        }
    
        /// <summary>
        /// Server IPMI Live Setup Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
        /// </summary>
        /// <param name="asset"></param>
        /// <param name="ip"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>ServerIpmiLiveInfo</returns>
        public ServerIpmiLiveInfo ServerIpmiLivePost (int? asset, string ip, int? id)
        {
            // verify the required parameter 'asset' is set
            if (asset == null) throw new ApiException(400, "Missing required parameter 'asset' when calling ServerIpmiLivePost");
            // verify the required parameter 'ip' is set
            if (ip == null) throw new ApiException(400, "Missing required parameter 'ip' when calling ServerIpmiLivePost");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ServerIpmiLivePost");
    
            var path = "/servers/{id}/ipmi_live";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (asset != null) formParams.Add("asset", ApiClient.ParameterToString(asset)); // form parameter
if (ip != null) formParams.Add("ip", ApiClient.ParameterToString(ip)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiLivePost: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiLivePost: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServerIpmiLiveInfo) ApiClient.Deserialize(response.Content, typeof(ServerIpmiLiveInfo), response.Headers);
        }
    
        /// <summary>
        /// Server IPMI Live Setup Configures IPMI live access by whitelisting your current IP address for connections to the server&#x27;s IPMI management interface.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>ServerIpmiLiveInfo</returns>
        public ServerIpmiLiveInfo ServerIpmiLivePost (ServerIpmiLiveRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling ServerIpmiLivePost");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ServerIpmiLivePost");
    
            var path = "/servers/{id}/ipmi_live";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiLivePost: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiLivePost: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServerIpmiLiveInfo) ApiClient.Deserialize(response.Content, typeof(ServerIpmiLiveInfo), response.Headers);
        }
    
        /// <summary>
        /// Get IPMI Power Status Returns the chassis power status from ipmi.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse ServerIpmiPowerGet (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ServerIpmiPowerGet");
    
            var path = "/servers/{id}/ipmi_power";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiPowerGet: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiPowerGet: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Server IPMI Power Uses the IPMI interface to set the Power status on the server.
        /// </summary>
        /// <param name="asset"></param>
        /// <param name="action"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse ServerIpmiPowerPost (int? asset, string action, int? id)
        {
            // verify the required parameter 'asset' is set
            if (asset == null) throw new ApiException(400, "Missing required parameter 'asset' when calling ServerIpmiPowerPost");
            // verify the required parameter 'action' is set
            if (action == null) throw new ApiException(400, "Missing required parameter 'action' when calling ServerIpmiPowerPost");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ServerIpmiPowerPost");
    
            var path = "/servers/{id}/ipmi_power";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (asset != null) formParams.Add("asset", ApiClient.ParameterToString(asset)); // form parameter
if (action != null) formParams.Add("action", ApiClient.ParameterToString(action)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiPowerPost: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiPowerPost: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Server IPMI Power Uses the IPMI interface to set the Power status on the server.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">Server ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse ServerIpmiPowerPost (ServerIpmiPowerRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling ServerIpmiPowerPost");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ServerIpmiPowerPost");
    
            var path = "/servers/{id}/ipmi_power";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiPowerPost: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ServerIpmiPowerPost: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Cancel Server Service Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">Server ID number</param>
        /// <returns>InlineResponse20019</returns>
        public InlineResponse20019 ServersCancel (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ServersCancel");
    
            var path = "/servers/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ServersCancel: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ServersCancel: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20019) ApiClient.Deserialize(response.Content, typeof(InlineResponse20019), response.Headers);
        }
    
        /// <summary>
        /// Update Server Order Updates settings on a dedicated server order.
        /// </summary>
        /// <param name="id">Server ID number.</param>
        /// <returns></returns>
        public void UpdateServerInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateServerInfo");
    
            var path = "/servers/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateServerInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateServerInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
    }
}
