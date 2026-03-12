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
    public interface IScrubIpsApi
    {
        /// <summary>
        /// Cancel Scrub IP Service Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20013</returns>
        InlineResponse20013 CancelScrubIp (int? id);
        /// <summary>
        /// Create Traffic Filter Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse2011</returns>
        InlineResponse2011 CreateFilter (CreateFilter body, int? id);
        /// <summary>
        /// Create Geo Firewall Rule Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse201</returns>
        InlineResponse201 CreateGeoRule (CreateGeoFirewallRule body, int? id);
        /// <summary>
        /// Create Firewall Rule Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse201</returns>
        InlineResponse201 CreateRule (CreateFirewallRule body, int? id);
        /// <summary>
        /// Delete Traffic Filter Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20017</returns>
        InlineResponse20017 DeleteFilter (CreateFilter body, int? id);
        /// <summary>
        /// Disable Scrub Protection Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20015</returns>
        InlineResponse20015 DisableScrub (int? id);
        /// <summary>
        /// Enable Scrub Protection Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20014</returns>
        InlineResponse20014 EnableScrub (int? id);
        /// <summary>
        /// Get Scrub IP Ordering Information Returns the available Scrub IP service plans and pricing information needed to build an order form.
        /// </summary>
        /// <returns>InlineResponse20018</returns>
        InlineResponse20018 GetOrderDetail ();
        /// <summary>
        /// Get Scrub IP Details Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20012</returns>
        InlineResponse20012 GetScrubIpDetails (int? id);
        /// <summary>
        /// List Scrub Filter Types Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
        /// </summary>
        /// <returns>ScrubIpFilterTypes</returns>
        ScrubIpFilterTypes GetScrubIpFilterTypes ();
        /// <summary>
        /// Get ScrubIp Invoices Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetScrubIpInvoices (int? id);
        /// <summary>
        /// Get Scrub IP Logs Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
        /// </summary>
        /// <param name="id">Scrub Order ID</param>
        /// <returns>List&lt;ScrubIpsLogRowSchema&gt;</returns>
        List<ScrubIpsLogRowSchema> GetScrubIpLogs (string id);
        /// <summary>
        /// List Scrub IP Services Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
        /// </summary>
        /// <returns>List&lt;ScrubIpsRowSchema&gt;</returns>
        List<ScrubIpsRowSchema> GetScrubIpsList ();
        /// <summary>
        /// Place Scrub IP Order Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>InlineResponse2012</returns>
        InlineResponse2012 PlaceScrubOrder (ScrubIpPlaceOrder body);
        /// <summary>
        /// Delete Geo Firewall Rule Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20016</returns>
        InlineResponse20016 ScrubIpsDeleteGeoRule (DeleteGeoFirewallRule body, int? id);
        /// <summary>
        /// Delete Firewall Rule Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20016</returns>
        InlineResponse20016 ScrubIpsDeleteRule (DeleteFirewallRule body, int? id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class ScrubIpsApi : IScrubIpsApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ScrubIpsApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public ScrubIpsApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="ScrubIpsApi"/> class.
        /// </summary>
        /// <returns></returns>
        public ScrubIpsApi(String basePath)
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
        /// Cancel Scrub IP Service Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20013</returns>
        public InlineResponse20013 CancelScrubIp (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CancelScrubIp");
    
            var path = "/scrub_ips/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CancelScrubIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CancelScrubIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20013) ApiClient.Deserialize(response.Content, typeof(InlineResponse20013), response.Headers);
        }
    
        /// <summary>
        /// Create Traffic Filter Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use &#x60;GET /scrub_ips/filter_types&#x60; to list available filter types.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse2011</returns>
        public InlineResponse2011 CreateFilter (CreateFilter body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling CreateFilter");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CreateFilter");
    
            var path = "/scrub_ips/{id}/create_filter";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CreateFilter: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CreateFilter: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2011) ApiClient.Deserialize(response.Content, typeof(InlineResponse2011), response.Headers);
        }
    
        /// <summary>
        /// Create Geo Firewall Rule Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse201</returns>
        public InlineResponse201 CreateGeoRule (CreateGeoFirewallRule body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling CreateGeoRule");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CreateGeoRule");
    
            var path = "/scrub_ips/{id}/create_geo_rule";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CreateGeoRule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CreateGeoRule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse201) ApiClient.Deserialize(response.Content, typeof(InlineResponse201), response.Headers);
        }
    
        /// <summary>
        /// Create Firewall Rule Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse201</returns>
        public InlineResponse201 CreateRule (CreateFirewallRule body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling CreateRule");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CreateRule");
    
            var path = "/scrub_ips/{id}/create_rule";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CreateRule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CreateRule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse201) ApiClient.Deserialize(response.Content, typeof(InlineResponse201), response.Headers);
        }
    
        /// <summary>
        /// Delete Traffic Filter Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20017</returns>
        public InlineResponse20017 DeleteFilter (CreateFilter body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DeleteFilter");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteFilter");
    
            var path = "/scrub_ips/{id}/delete_filter";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteFilter: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteFilter: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20017) ApiClient.Deserialize(response.Content, typeof(InlineResponse20017), response.Headers);
        }
    
        /// <summary>
        /// Disable Scrub Protection Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20015</returns>
        public InlineResponse20015 DisableScrub (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DisableScrub");
    
            var path = "/scrub_ips/{id}/disable";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DisableScrub: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DisableScrub: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20015) ApiClient.Deserialize(response.Content, typeof(InlineResponse20015), response.Headers);
        }
    
        /// <summary>
        /// Enable Scrub Protection Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20014</returns>
        public InlineResponse20014 EnableScrub (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling EnableScrub");
    
            var path = "/scrub_ips/{id}/enable";
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
                throw new ApiException ((int)response.StatusCode, "Error calling EnableScrub: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling EnableScrub: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20014) ApiClient.Deserialize(response.Content, typeof(InlineResponse20014), response.Headers);
        }
    
        /// <summary>
        /// Get Scrub IP Ordering Information Returns the available Scrub IP service plans and pricing information needed to build an order form.
        /// </summary>
        /// <returns>InlineResponse20018</returns>
        public InlineResponse20018 GetOrderDetail ()
        {
    
            var path = "/scrub_ips/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetOrderDetail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetOrderDetail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20018) ApiClient.Deserialize(response.Content, typeof(InlineResponse20018), response.Headers);
        }
    
        /// <summary>
        /// Get Scrub IP Details Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20012</returns>
        public InlineResponse20012 GetScrubIpDetails (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetScrubIpDetails");
    
            var path = "/scrub_ips/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpDetails: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpDetails: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20012) ApiClient.Deserialize(response.Content, typeof(InlineResponse20012), response.Headers);
        }
    
        /// <summary>
        /// List Scrub Filter Types Returns the list of scrub filter types that can be used when creating filter rules via &#x60;/scrub_ips/{id}/create_filter&#x60;.
        /// </summary>
        /// <returns>ScrubIpFilterTypes</returns>
        public ScrubIpFilterTypes GetScrubIpFilterTypes ()
        {
    
            var path = "/scrub_ips/filter_types";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpFilterTypes: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpFilterTypes: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ScrubIpFilterTypes) ApiClient.Deserialize(response.Content, typeof(ScrubIpFilterTypes), response.Headers);
        }
    
        /// <summary>
        /// Get ScrubIp Invoices Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
        /// </summary>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetScrubIpInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetScrubIpInvoices");
    
            var path = "/scrub_ips/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// Get Scrub IP Logs Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
        /// </summary>
        /// <param name="id">Scrub Order ID</param>
        /// <returns>List&lt;ScrubIpsLogRowSchema&gt;</returns>
        public List<ScrubIpsLogRowSchema> GetScrubIpLogs (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetScrubIpLogs");
    
            var path = "/scrub_ips/{id}/logs";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpLogs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpLogs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<ScrubIpsLogRowSchema>) ApiClient.Deserialize(response.Content, typeof(List<ScrubIpsLogRowSchema>), response.Headers);
        }
    
        /// <summary>
        /// List Scrub IP Services Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
        /// </summary>
        /// <returns>List&lt;ScrubIpsRowSchema&gt;</returns>
        public List<ScrubIpsRowSchema> GetScrubIpsList ()
        {
    
            var path = "/scrub_ips";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetScrubIpsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<ScrubIpsRowSchema>) ApiClient.Deserialize(response.Content, typeof(List<ScrubIpsRowSchema>), response.Headers);
        }
    
        /// <summary>
        /// Place Scrub IP Order Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>InlineResponse2012</returns>
        public InlineResponse2012 PlaceScrubOrder (ScrubIpPlaceOrder body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PlaceScrubOrder");
    
            var path = "/scrub_ips/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PlaceScrubOrder: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PlaceScrubOrder: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2012) ApiClient.Deserialize(response.Content, typeof(InlineResponse2012), response.Headers);
        }
    
        /// <summary>
        /// Delete Geo Firewall Rule Removes an existing geographic-based firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20016</returns>
        public InlineResponse20016 ScrubIpsDeleteGeoRule (DeleteGeoFirewallRule body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling ScrubIpsDeleteGeoRule");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ScrubIpsDeleteGeoRule");
    
            var path = "/scrub_ips/{id}/delete_geo_rule";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ScrubIpsDeleteGeoRule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ScrubIpsDeleteGeoRule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20016) ApiClient.Deserialize(response.Content, typeof(InlineResponse20016), response.Headers);
        }
    
        /// <summary>
        /// Delete Firewall Rule Removes an existing firewall rule from the Scrub IP service. Use the &#x60;rule_id&#x60; from the service details response to identify the rule to delete.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">ScrubIp ID number</param>
        /// <returns>InlineResponse20016</returns>
        public InlineResponse20016 ScrubIpsDeleteRule (DeleteFirewallRule body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling ScrubIpsDeleteRule");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ScrubIpsDeleteRule");
    
            var path = "/scrub_ips/{id}/delete_rule";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ScrubIpsDeleteRule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ScrubIpsDeleteRule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20016) ApiClient.Deserialize(response.Content, typeof(InlineResponse20016), response.Headers);
        }
    
    }
}
