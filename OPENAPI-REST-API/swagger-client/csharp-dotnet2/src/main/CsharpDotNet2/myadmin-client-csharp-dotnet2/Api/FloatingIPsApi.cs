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
    public interface IFloatingIPsApi
    {
        /// <summary>
        /// Place Floating IP Order Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.
        /// </summary>
        /// <returns>ServiceOrderPostResponse</returns>
        ServiceOrderPostResponse AddFloatingIp ();
        /// <summary>
        /// Cancel Floating IP Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>InlineResponse2003</returns>
        InlineResponse2003 FloatingIpsCancel (int? id);
        /// <summary>
        /// View Floating IP Returns detailed information about a specific Floating IP service including its current target IP assignment.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>Object</returns>
        Object GetFloatingIpInfo (int? id);
        /// <summary>
        /// Get Floating IP Invoices Returns the billing invoices associated with this Floating IP service.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetFloatingIpInvoices (int? id);
        /// <summary>
        /// List Floating IPs Returns all Floating IP services on the account with their current status and assignment details.
        /// </summary>
        /// <returns></returns>
        void GetFloatingIpsList ();
        /// <summary>
        /// Resend Floating IPs Welcome Email Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetFloatingIpsWelcomeEmail (int? id);
        /// <summary>
        /// Get Floating IP Ordering Information Retrieves available options and pricing for ordering a new Floating IP.
        /// </summary>
        /// <returns>Object</returns>
        Object GetNewFloatingIp ();
        /// <summary>
        /// Change Floating IP Target Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
        /// </summary>
        /// <param name="ip"></param>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostFloatingIpsChangeIp (string ip, int? id);
        /// <summary>
        /// Change Floating IP Target Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostFloatingIpsChangeIp (IpObject body, int? id);
        /// <summary>
        /// Validate Floating IP Order Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
        /// </summary>
        /// <returns></returns>
        void PutFloatingIps ();
        /// <summary>
        /// Update Floating IP Updates settings on a Floating IP service, such as its label or configuration metadata.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateFloatingIpInfo (string id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class FloatingIPsApi : IFloatingIPsApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="FloatingIPsApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public FloatingIPsApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="FloatingIPsApi"/> class.
        /// </summary>
        /// <returns></returns>
        public FloatingIPsApi(String basePath)
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
        /// Place Floating IP Order Places an order for a new Floating IP service. Use &#x60;PUT /floating_ips/order&#x60; to validate the order first.
        /// </summary>
        /// <returns>ServiceOrderPostResponse</returns>
        public ServiceOrderPostResponse AddFloatingIp ()
        {
    
            var path = "/floating_ips/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddFloatingIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddFloatingIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServiceOrderPostResponse) ApiClient.Deserialize(response.Content, typeof(ServiceOrderPostResponse), response.Headers);
        }
    
        /// <summary>
        /// Cancel Floating IP Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>InlineResponse2003</returns>
        public InlineResponse2003 FloatingIpsCancel (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling FloatingIpsCancel");
    
            var path = "/floating_ips/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling FloatingIpsCancel: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling FloatingIpsCancel: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2003) ApiClient.Deserialize(response.Content, typeof(InlineResponse2003), response.Headers);
        }
    
        /// <summary>
        /// View Floating IP Returns detailed information about a specific Floating IP service including its current target IP assignment.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>Object</returns>
        public Object GetFloatingIpInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetFloatingIpInfo");
    
            var path = "/floating_ips/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Object) ApiClient.Deserialize(response.Content, typeof(Object), response.Headers);
        }
    
        /// <summary>
        /// Get Floating IP Invoices Returns the billing invoices associated with this Floating IP service.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetFloatingIpInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetFloatingIpInvoices");
    
            var path = "/floating_ips/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// List Floating IPs Returns all Floating IP services on the account with their current status and assignment details.
        /// </summary>
        /// <returns></returns>
        public void GetFloatingIpsList ()
        {
    
            var path = "/floating_ips";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Resend Floating IPs Welcome Email Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetFloatingIpsWelcomeEmail (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetFloatingIpsWelcomeEmail");
    
            var path = "/floating_ips/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpsWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetFloatingIpsWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Floating IP Ordering Information Retrieves available options and pricing for ordering a new Floating IP.
        /// </summary>
        /// <returns>Object</returns>
        public Object GetNewFloatingIp ()
        {
    
            var path = "/floating_ips/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewFloatingIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewFloatingIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Object) ApiClient.Deserialize(response.Content, typeof(Object), response.Headers);
        }
    
        /// <summary>
        /// Change Floating IP Target Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
        /// </summary>
        /// <param name="ip"></param>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostFloatingIpsChangeIp (string ip, int? id)
        {
            // verify the required parameter 'ip' is set
            if (ip == null) throw new ApiException(400, "Missing required parameter 'ip' when calling PostFloatingIpsChangeIp");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostFloatingIpsChangeIp");
    
            var path = "/floating_ips/{id}/change_ip";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (ip != null) formParams.Add("ip", ApiClient.ParameterToString(ip)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostFloatingIpsChangeIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostFloatingIpsChangeIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Change Floating IP Target Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use &#x60;GET /floating_ips/{id}&#x60; to view the current target before making changes.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostFloatingIpsChangeIp (IpObject body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostFloatingIpsChangeIp");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostFloatingIpsChangeIp");
    
            var path = "/floating_ips/{id}/change_ip";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostFloatingIpsChangeIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostFloatingIpsChangeIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate Floating IP Order Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
        /// </summary>
        /// <returns></returns>
        public void PutFloatingIps ()
        {
    
            var path = "/floating_ips/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PutFloatingIps: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutFloatingIps: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Update Floating IP Updates settings on a Floating IP service, such as its label or configuration metadata.
        /// </summary>
        /// <param name="id">The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateFloatingIpInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateFloatingIpInfo");
    
            var path = "/floating_ips/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateFloatingIpInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateFloatingIpInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
    }
}
