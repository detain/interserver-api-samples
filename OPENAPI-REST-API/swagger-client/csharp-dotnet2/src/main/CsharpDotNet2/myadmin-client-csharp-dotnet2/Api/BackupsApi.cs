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
    public interface IBackupsApi
    {
        /// <summary>
        /// Place Backup Order Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
        /// </summary>
        /// <param name="validateOnly"></param>
        /// <param name="serviceType"></param>
        /// <param name="coupon"></param>
        /// <returns>BackupOrderPostResponse</returns>
        BackupOrderPostResponse AddBackup (bool? validateOnly, int? serviceType, string coupon);
        /// <summary>
        /// Place Backup Order Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>BackupOrderPostResponse</returns>
        BackupOrderPostResponse AddBackup (BackupOrderPutRequest body);
        /// <summary>
        /// Cancel Backup Service Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>InlineResponse2001</returns>
        InlineResponse2001 CancelBackup (int? id);
        /// <summary>
        /// Get Backup Service Details Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>Backup</returns>
        Backup GetBackupInfo (int? id);
        /// <summary>
        /// Get Backup Order Invoices Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetBackupInvoices (int? id);
        /// <summary>
        /// Get Backup Storage Panel Login Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>BackupLoginResponse</returns>
        BackupLoginResponse GetBackupLogin (int? id);
        /// <summary>
        /// List Backup Services Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.
        /// </summary>
        /// <returns>List&lt;BackupRow&gt;</returns>
        List<BackupRow> GetBackupsList ();
        /// <summary>
        /// Resend Backup Welcome Email Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetBackupsWelcomeEmail (int? id);
        /// <summary>
        /// Get Backup Order Form Data Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.
        /// </summary>
        /// <returns>BackupsOrder</returns>
        BackupsOrder GetNewBackup ();
        /// <summary>
        /// Update Backup Information Updates backup storage service metadata, such as stored credentials or settings for the order.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateBackupInfo (int? id);
        /// <summary>
        /// Validate Backup Order Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
        /// </summary>
        /// <param name="validateOnly"></param>
        /// <param name="serviceType"></param>
        /// <param name="coupon"></param>
        /// <returns>BackupOrderPutResponse</returns>
        BackupOrderPutResponse ValidateBackupOrder (bool? validateOnly, int? serviceType, string coupon);
        /// <summary>
        /// Validate Backup Order Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>BackupOrderPutResponse</returns>
        BackupOrderPutResponse ValidateBackupOrder (BackupOrderPutRequest body);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class BackupsApi : IBackupsApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BackupsApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public BackupsApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="BackupsApi"/> class.
        /// </summary>
        /// <returns></returns>
        public BackupsApi(String basePath)
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
        /// Place Backup Order Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
        /// </summary>
        /// <param name="validateOnly"></param>
        /// <param name="serviceType"></param>
        /// <param name="coupon"></param>
        /// <returns>BackupOrderPostResponse</returns>
        public BackupOrderPostResponse AddBackup (bool? validateOnly, int? serviceType, string coupon)
        {
            // verify the required parameter 'validateOnly' is set
            if (validateOnly == null) throw new ApiException(400, "Missing required parameter 'validateOnly' when calling AddBackup");
            // verify the required parameter 'serviceType' is set
            if (serviceType == null) throw new ApiException(400, "Missing required parameter 'serviceType' when calling AddBackup");
            // verify the required parameter 'coupon' is set
            if (coupon == null) throw new ApiException(400, "Missing required parameter 'coupon' when calling AddBackup");
    
            var path = "/backups/order";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (validateOnly != null) formParams.Add("validateOnly", ApiClient.ParameterToString(validateOnly)); // form parameter
if (serviceType != null) formParams.Add("serviceType", ApiClient.ParameterToString(serviceType)); // form parameter
if (coupon != null) formParams.Add("coupon", ApiClient.ParameterToString(coupon)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BackupOrderPostResponse) ApiClient.Deserialize(response.Content, typeof(BackupOrderPostResponse), response.Headers);
        }
    
        /// <summary>
        /// Place Backup Order Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>BackupOrderPostResponse</returns>
        public BackupOrderPostResponse AddBackup (BackupOrderPutRequest body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddBackup");
    
            var path = "/backups/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BackupOrderPostResponse) ApiClient.Deserialize(response.Content, typeof(BackupOrderPostResponse), response.Headers);
        }
    
        /// <summary>
        /// Cancel Backup Service Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>InlineResponse2001</returns>
        public InlineResponse2001 CancelBackup (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CancelBackup");
    
            var path = "/backups/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CancelBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CancelBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2001) ApiClient.Deserialize(response.Content, typeof(InlineResponse2001), response.Headers);
        }
    
        /// <summary>
        /// Get Backup Service Details Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>Backup</returns>
        public Backup GetBackupInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetBackupInfo");
    
            var path = "/backups/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Backup) ApiClient.Deserialize(response.Content, typeof(Backup), response.Headers);
        }
    
        /// <summary>
        /// Get Backup Order Invoices Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetBackupInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetBackupInvoices");
    
            var path = "/backups/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// Get Backup Storage Panel Login Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>BackupLoginResponse</returns>
        public BackupLoginResponse GetBackupLogin (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetBackupLogin");
    
            var path = "/backups/{id}/login";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupLogin: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupLogin: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BackupLoginResponse) ApiClient.Deserialize(response.Content, typeof(BackupLoginResponse), response.Headers);
        }
    
        /// <summary>
        /// List Backup Services Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.
        /// </summary>
        /// <returns>List&lt;BackupRow&gt;</returns>
        public List<BackupRow> GetBackupsList ()
        {
    
            var path = "/backups";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<BackupRow>) ApiClient.Deserialize(response.Content, typeof(List<BackupRow>), response.Headers);
        }
    
        /// <summary>
        /// Resend Backup Welcome Email Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetBackupsWelcomeEmail (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetBackupsWelcomeEmail");
    
            var path = "/backups/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupsWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBackupsWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Backup Order Form Data Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.
        /// </summary>
        /// <returns>BackupsOrder</returns>
        public BackupsOrder GetNewBackup ()
        {
    
            var path = "/backups/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BackupsOrder) ApiClient.Deserialize(response.Content, typeof(BackupsOrder), response.Headers);
        }
    
        /// <summary>
        /// Update Backup Information Updates backup storage service metadata, such as stored credentials or settings for the order.
        /// </summary>
        /// <param name="id">The backup service ID. Use the &#x60;backup_id&#x60; from &#x60;GET /backups&#x60; to identify the service.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateBackupInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateBackupInfo");
    
            var path = "/backups/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBackupInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBackupInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate Backup Order Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
        /// </summary>
        /// <param name="validateOnly"></param>
        /// <param name="serviceType"></param>
        /// <param name="coupon"></param>
        /// <returns>BackupOrderPutResponse</returns>
        public BackupOrderPutResponse ValidateBackupOrder (bool? validateOnly, int? serviceType, string coupon)
        {
            // verify the required parameter 'validateOnly' is set
            if (validateOnly == null) throw new ApiException(400, "Missing required parameter 'validateOnly' when calling ValidateBackupOrder");
            // verify the required parameter 'serviceType' is set
            if (serviceType == null) throw new ApiException(400, "Missing required parameter 'serviceType' when calling ValidateBackupOrder");
            // verify the required parameter 'coupon' is set
            if (coupon == null) throw new ApiException(400, "Missing required parameter 'coupon' when calling ValidateBackupOrder");
    
            var path = "/backups/order";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (validateOnly != null) formParams.Add("validateOnly", ApiClient.ParameterToString(validateOnly)); // form parameter
if (serviceType != null) formParams.Add("serviceType", ApiClient.ParameterToString(serviceType)); // form parameter
if (coupon != null) formParams.Add("coupon", ApiClient.ParameterToString(coupon)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling ValidateBackupOrder: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ValidateBackupOrder: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BackupOrderPutResponse) ApiClient.Deserialize(response.Content, typeof(BackupOrderPutResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate Backup Order Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>BackupOrderPutResponse</returns>
        public BackupOrderPutResponse ValidateBackupOrder (BackupOrderPutRequest body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling ValidateBackupOrder");
    
            var path = "/backups/order";
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
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling ValidateBackupOrder: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ValidateBackupOrder: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BackupOrderPutResponse) ApiClient.Deserialize(response.Content, typeof(BackupOrderPutResponse), response.Headers);
        }
    
    }
}
