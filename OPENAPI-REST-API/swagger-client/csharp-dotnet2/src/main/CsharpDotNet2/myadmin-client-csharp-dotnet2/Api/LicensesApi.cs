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
    public interface ILicensesApi
    {
        /// <summary>
        /// Place License Order Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.
        /// </summary>
        /// <returns></returns>
        void AddLicense ();
        /// <summary>
        /// Get License Returns detailed information about a specific license including its type, IP assignment, and status.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>License</returns>
        License GetLicenseInfo (int? id);
        /// <summary>
        /// Get License Invoices Returns the billing invoices associated with this license service.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetLicenseInvoices (int? id);
        /// <summary>
        /// List Licenses Returns all software license services on the account with their current status and IP assignments.
        /// </summary>
        /// <returns>List&lt;LicenseRow&gt;</returns>
        List<LicenseRow> GetLicenseList ();
        /// <summary>
        /// Get License Order Information for Category Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.
        /// </summary>
        /// <param name="catTag">The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.</param>
        /// <returns></returns>
        void GetLicenseOrderCatTagInfo (string catTag);
        /// <summary>
        /// Resend License Welcome Email Resends the welcome email for the license service. The email contains the license key and activation instructions.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetLicensesWelcomeEmail (int? id);
        /// <summary>
        /// Get License Order Information Retrieves available license types, categories, and pricing for ordering a new license.
        /// </summary>
        /// <returns>LicensesOrder</returns>
        LicensesOrder GetNewLicense ();
        /// <summary>
        /// Cancel License Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>InlineResponse2004</returns>
        InlineResponse2004 LicensesCancel (int? id);
        /// <summary>
        /// Change License IP Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostLicenseChangeIp (IpObject body, int? id);
        /// <summary>
        /// Change License IP Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
        /// </summary>
        /// <param name="ip"></param>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostLicenseChangeIp (string ip, int? id);
        /// <summary>
        /// Validate License Order Validates a license order before placing it. Use this to check for errors before committing to a purchase.
        /// </summary>
        /// <returns></returns>
        void PutLicenses ();
        /// <summary>
        /// Update License Updates settings on a license service such as its assigned IP.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns></returns>
        void UpdateLicenseInfo (string id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class LicensesApi : ILicensesApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="LicensesApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public LicensesApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="LicensesApi"/> class.
        /// </summary>
        /// <returns></returns>
        public LicensesApi(String basePath)
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
        /// Place License Order Places an order for a new software license. Use &#x60;PUT /licenses/order&#x60; to validate the order first.
        /// </summary>
        /// <returns></returns>
        public void AddLicense ()
        {
    
            var path = "/licenses/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddLicense: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddLicense: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get License Returns detailed information about a specific license including its type, IP assignment, and status.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>License</returns>
        public License GetLicenseInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetLicenseInfo");
    
            var path = "/licenses/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (License) ApiClient.Deserialize(response.Content, typeof(License), response.Headers);
        }
    
        /// <summary>
        /// Get License Invoices Returns the billing invoices associated with this license service.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetLicenseInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetLicenseInvoices");
    
            var path = "/licenses/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// List Licenses Returns all software license services on the account with their current status and IP assignments.
        /// </summary>
        /// <returns>List&lt;LicenseRow&gt;</returns>
        public List<LicenseRow> GetLicenseList ()
        {
    
            var path = "/licenses";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<LicenseRow>) ApiClient.Deserialize(response.Content, typeof(List<LicenseRow>), response.Headers);
        }
    
        /// <summary>
        /// Get License Order Information for Category Returns the available license types and pricing for a specific license category. Use the category tags from &#x60;GET /licenses/order&#x60; to identify valid values.
        /// </summary>
        /// <param name="catTag">The license category tag (e.g. &#x60;cpanel&#x60;, &#x60;plesk&#x60;). Obtain valid values from the &#x60;GET /licenses/order&#x60; response.</param>
        /// <returns></returns>
        public void GetLicenseOrderCatTagInfo (string catTag)
        {
            // verify the required parameter 'catTag' is set
            if (catTag == null) throw new ApiException(400, "Missing required parameter 'catTag' when calling GetLicenseOrderCatTagInfo");
    
            var path = "/licenses/order/{catTag}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "catTag" + "}", ApiClient.ParameterToString(catTag));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseOrderCatTagInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicenseOrderCatTagInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Resend License Welcome Email Resends the welcome email for the license service. The email contains the license key and activation instructions.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetLicensesWelcomeEmail (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetLicensesWelcomeEmail");
    
            var path = "/licenses/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicensesWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetLicensesWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get License Order Information Retrieves available license types, categories, and pricing for ordering a new license.
        /// </summary>
        /// <returns>LicensesOrder</returns>
        public LicensesOrder GetNewLicense ()
        {
    
            var path = "/licenses/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewLicense: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewLicense: " + response.ErrorMessage, response.ErrorMessage);
    
            return (LicensesOrder) ApiClient.Deserialize(response.Content, typeof(LicensesOrder), response.Headers);
        }
    
        /// <summary>
        /// Cancel License Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>InlineResponse2004</returns>
        public InlineResponse2004 LicensesCancel (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling LicensesCancel");
    
            var path = "/licenses/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling LicensesCancel: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling LicensesCancel: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2004) ApiClient.Deserialize(response.Content, typeof(InlineResponse2004), response.Headers);
        }
    
        /// <summary>
        /// Change License IP Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostLicenseChangeIp (IpObject body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostLicenseChangeIp");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostLicenseChangeIp");
    
            var path = "/licenses/{id}/change_ip";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostLicenseChangeIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostLicenseChangeIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Change License IP Changes the IP address associated with the license. The service must be active. Use &#x60;GET /licenses/{id}&#x60; to view the current IP assignment before making changes.
        /// </summary>
        /// <param name="ip"></param>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostLicenseChangeIp (string ip, int? id)
        {
            // verify the required parameter 'ip' is set
            if (ip == null) throw new ApiException(400, "Missing required parameter 'ip' when calling PostLicenseChangeIp");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostLicenseChangeIp");
    
            var path = "/licenses/{id}/change_ip";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostLicenseChangeIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostLicenseChangeIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate License Order Validates a license order before placing it. Use this to check for errors before committing to a purchase.
        /// </summary>
        /// <returns></returns>
        public void PutLicenses ()
        {
    
            var path = "/licenses/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PutLicenses: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutLicenses: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Update License Updates settings on a license service such as its assigned IP.
        /// </summary>
        /// <param name="id">The license service ID. Use &#x60;license_id&#x60; from &#x60;GET /licenses&#x60;.</param>
        /// <returns></returns>
        public void UpdateLicenseInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateLicenseInfo");
    
            var path = "/licenses/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateLicenseInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateLicenseInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
    }
}
