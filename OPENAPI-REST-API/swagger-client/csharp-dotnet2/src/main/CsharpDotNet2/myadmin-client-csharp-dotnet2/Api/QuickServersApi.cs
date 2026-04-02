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
    public interface IQuickServersApi
    {
        /// <summary>
        /// Place QuickServer Order Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
        /// </summary>
        /// <returns>ServiceOrderPostResponse</returns>
        ServiceOrderPostResponse AddQs ();
        /// <summary>
        /// Delete QuickServer Backup Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="file">The backup filename to delete.</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteQsBackup (int? id, string file, string all);
        /// <summary>
        /// Block QuickServer SMTP Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsBlockSmtp (int? id);
        /// <summary>
        /// Disable CD Drive Disables the virtual CD drive for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsDisableCd (int? id);
        /// <summary>
        /// Disable Quotas Disables disk quota enforcement for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsDisableQuota (int? id);
        /// <summary>
        /// Eject CD Drive Ejects the virtual CD from the QuickServer&#x27;s CD drive.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsEjectCd (int? id);
        /// <summary>
        /// Enable Quotas Enables disk quota enforcement for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsEnableQuota (int? id);
        /// <summary>
        /// Restart QuickServer Restarts the QuickServer. The server will be shut down and started again.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsRestart (int? id);
        /// <summary>
        /// Start QuickServer Powers on the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsStart (int? id);
        /// <summary>
        /// Stop QuickServer Powers off the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoQsStop (int? id);
        /// <summary>
        /// Download QuickServer Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>InlineResponse20011</returns>
        InlineResponse20011 DownloadQsBackup (IdBackupsBody body, int? id, string all);
        /// <summary>
        /// Download QuickServer Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="file"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>InlineResponse20011</returns>
        InlineResponse20011 DownloadQsBackup (string file, int? id, string all);
        /// <summary>
        /// Get QuickServer Ordering Information Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
        /// </summary>
        /// <returns>QuickserverOrder</returns>
        QuickserverOrder GetNewQs ();
        /// <summary>
        /// List QuickServer Backups Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>VpsBackupRows</returns>
        VpsBackupRows GetQsBackups (int? id, string all);
        /// <summary>
        /// Get QuickServer Hostname Retrieves the current hostname and any validation requirements for changing it.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsChangeHostname (int? id);
        /// <summary>
        /// Get Change Root Password Info Retrieves instructions or metadata needed to reset the root password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsChangeRootPassword (int? id);
        /// <summary>
        /// Get Timezone Info Returns the list of available timezones that can be set on the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>List&lt;string&gt;</returns>
        List<string> GetQsChangeTimezone (int? id);
        /// <summary>
        /// Webuzo Change Pass Info Retrieves instructions or metadata for changing the Webuzo control panel password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsChangeWebuzoPassword (int? id);
        /// <summary>
        /// Get QuickServer Order Returns detailed QuickServer information, including credentials, IPs, and available client actions.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>Quickserver</returns>
        Quickserver GetQsInfo (int? id);
        /// <summary>
        /// Insert CD Information Returns available ISO images that can be mounted in the QuickServer&#x27;s virtual CD drive.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsInsertCd (int? id);
        /// <summary>
        /// Get QuickServer Invoices Returns the billing invoices associated with this QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetQsInvoices (int? id);
        /// <summary>
        /// List QuickServers Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
        /// </summary>
        /// <returns>List&lt;QuickserverRow&gt;</returns>
        List<QuickserverRow> GetQsList ();
        /// <summary>
        /// QuickServer Reinstall OS Options Returns the list of available operating system templates for reinstalling the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>VpsTemplatesList</returns>
        VpsTemplatesList GetQsReinstallOs (int? id);
        /// <summary>
        /// Reset QuickServer Password Info Returns information needed before resetting the QuickServer&#x27;s root password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsResetPassword (int? id);
        /// <summary>
        /// Reverse DNS Info Returns the current reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>ReverseDnsEntries</returns>
        ReverseDnsEntries GetQsReverseDns (int? id);
        /// <summary>
        /// VNC Setup Info Returns the current VNC connection information for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsSetupVnc (int? id);
        /// <summary>
        /// Get Traffic Usage Returns bandwidth traffic usage data for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsTrafficUsage (int? id);
        /// <summary>
        /// Get View Desktop Info Returns remote desktop connection information for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void GetQsViewDesktop (int? id);
        /// <summary>
        /// Resend QuickServer Welcome Email Resends the welcome email containing connection details and credentials for the QuickServer order.
        /// </summary>
        /// <param name="id">Quickserver ID</param>
        /// <returns>TextResponse</returns>
        TextResponse GetQsWelcomeEmail (string id);
        /// <summary>
        /// Create QuickServer Backup Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsBackup (int? id);
        /// <summary>
        /// Update QuickServer Hostname Submits a hostname change request for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsChangeHostname (int? id);
        /// <summary>
        /// Change Root Password Triggers a root password reset for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsChangeRootPassword (int? id);
        /// <summary>
        /// Change QuickServer Timezone Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
        /// </summary>
        /// <param name="timezone"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsChangeTimezone (string timezone, int? id);
        /// <summary>
        /// Change QuickServer Timezone Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsChangeTimezone (TimezoneUpdate body, int? id);
        /// <summary>
        /// Change Webuzo Password Resets the Webuzo control panel password for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsChangeWebuzoPassword (int? id);
        /// <summary>
        /// Insert CD in QuickServer Mounts an ISO image in the QuickServer&#x27;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsInsertCd (int? id);
        /// <summary>
        /// Reinstall QuickServer OS Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsReinstallOs (int? id);
        /// <summary>
        /// Reset QuickServer Password Resets the root password on the QuickServer to a new randomly generated password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsResetPassword (int? id);
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse PostQsReverseDns (ReverseDnsEntries body, int? id);
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse PostQsReverseDns (Dictionary<string, Object> ips, int? id);
        /// <summary>
        /// Setup VNC Sets up or refreshes the VNC console connection for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQsSetupVnc (int? id);
        /// <summary>
        /// Search Traffic Usage Searches and filters the QuickServer&#x27;s bandwidth traffic usage data by date range.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void PostQsTrafficUsage (int? id);
        /// <summary>
        /// Update View Desktop Updates or refreshes the remote desktop session for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        void PostQsViewDesktop (int? id);
        /// <summary>
        /// Restore QuickServer from Backup Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="body">QuickServer Restore request</param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQuickServerRestore (RestoreRequest body, int? id);
        /// <summary>
        /// Restore QuickServer from Backup Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="backup"></param>
        /// <param name="password"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostQuickServerRestore (string backup, string password, int? id);
        /// <summary>
        /// Validate QuickServer Order Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
        /// </summary>
        /// <returns></returns>
        void PutQs ();
        /// <summary>
        /// Cancel QuickServer Order Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>InlineResponse20010</returns>
        InlineResponse20010 QuickserversCancel (int? id);
        /// <summary>
        /// Update QuickServer Order Updates QuickServer metadata or stored settings associated with the order.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateQsInfo (string id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class QuickServersApi : IQuickServersApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="QuickServersApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public QuickServersApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="QuickServersApi"/> class.
        /// </summary>
        /// <returns></returns>
        public QuickServersApi(String basePath)
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
        /// Place QuickServer Order Places a QuickServer order. On success, invoices are generated for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
        /// </summary>
        /// <returns>ServiceOrderPostResponse</returns>
        public ServiceOrderPostResponse AddQs ()
        {
    
            var path = "/qs/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddQs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddQs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServiceOrderPostResponse) ApiClient.Deserialize(response.Content, typeof(ServiceOrderPostResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete QuickServer Backup Permanently removes the specified backup file from storage. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames before deleting.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="file">The backup filename to delete.</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteQsBackup (int? id, string file, string all)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteQsBackup");
            // verify the required parameter 'file' is set
            if (file == null) throw new ApiException(400, "Missing required parameter 'file' when calling DeleteQsBackup");
    
            var path = "/qs/{id}/backups";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (all != null) queryParams.Add("all", ApiClient.ParameterToString(all)); // query parameter
 if (file != null) queryParams.Add("file", ApiClient.ParameterToString(file)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteQsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteQsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Block QuickServer SMTP Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsBlockSmtp (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsBlockSmtp");
    
            var path = "/qs/{id}/block_smtp";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsBlockSmtp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsBlockSmtp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Disable CD Drive Disables the virtual CD drive for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsDisableCd (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsDisableCd");
    
            var path = "/qs/{id}/disable_cd";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsDisableCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsDisableCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Disable Quotas Disables disk quota enforcement for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsDisableQuota (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsDisableQuota");
    
            var path = "/qs/{id}/disable_quota";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsDisableQuota: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsDisableQuota: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Eject CD Drive Ejects the virtual CD from the QuickServer&#x27;s CD drive.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsEjectCd (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsEjectCd");
    
            var path = "/qs/{id}/eject_cd";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsEjectCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsEjectCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Enable Quotas Enables disk quota enforcement for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsEnableQuota (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsEnableQuota");
    
            var path = "/qs/{id}/enable_quota";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsEnableQuota: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsEnableQuota: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Restart QuickServer Restarts the QuickServer. The server will be shut down and started again.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsRestart (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsRestart");
    
            var path = "/qs/{id}/restart";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsRestart: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsRestart: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Start QuickServer Powers on the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsStart (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsStart");
    
            var path = "/qs/{id}/start";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsStart: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsStart: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Stop QuickServer Powers off the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoQsStop (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoQsStop");
    
            var path = "/qs/{id}/stop";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsStop: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoQsStop: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Download QuickServer Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>InlineResponse20011</returns>
        public InlineResponse20011 DownloadQsBackup (IdBackupsBody body, int? id, string all)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DownloadQsBackup");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DownloadQsBackup");
    
            var path = "/qs/{id}/backups";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (all != null) queryParams.Add("all", ApiClient.ParameterToString(all)); // query parameter
                        postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PATCH, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadQsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadQsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20011) ApiClient.Deserialize(response.Content, typeof(InlineResponse20011), response.Headers);
        }
    
        /// <summary>
        /// Download QuickServer Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /qs/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="file"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>InlineResponse20011</returns>
        public InlineResponse20011 DownloadQsBackup (string file, int? id, string all)
        {
            // verify the required parameter 'file' is set
            if (file == null) throw new ApiException(400, "Missing required parameter 'file' when calling DownloadQsBackup");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DownloadQsBackup");
    
            var path = "/qs/{id}/backups";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (all != null) queryParams.Add("all", ApiClient.ParameterToString(all)); // query parameter
                        if (file != null) formParams.Add("file", ApiClient.ParameterToString(file)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PATCH, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadQsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadQsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20011) ApiClient.Deserialize(response.Content, typeof(InlineResponse20011), response.Headers);
        }
    
        /// <summary>
        /// Get QuickServer Ordering Information Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
        /// </summary>
        /// <returns>QuickserverOrder</returns>
        public QuickserverOrder GetNewQs ()
        {
    
            var path = "/qs/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewQs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewQs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QuickserverOrder) ApiClient.Deserialize(response.Content, typeof(QuickserverOrder), response.Headers);
        }
    
        /// <summary>
        /// List QuickServer Backups Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /qs/{id}/backups&#x60; to download or &#x60;DELETE /qs/{id}/backups&#x60; to remove a backup. Use &#x60;POST /qs/{id}/restore&#x60; to restore from a backup.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given QuickServer.</param>
        /// <returns>VpsBackupRows</returns>
        public VpsBackupRows GetQsBackups (int? id, string all)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsBackups");
    
            var path = "/qs/{id}/backups";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (all != null) queryParams.Add("all", ApiClient.ParameterToString(all)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsBackups: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsBackups: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsBackupRows) ApiClient.Deserialize(response.Content, typeof(VpsBackupRows), response.Headers);
        }
    
        /// <summary>
        /// Get QuickServer Hostname Retrieves the current hostname and any validation requirements for changing it.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsChangeHostname (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsChangeHostname");
    
            var path = "/qs/{id}/change_hostname";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeHostname: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeHostname: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Change Root Password Info Retrieves instructions or metadata needed to reset the root password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsChangeRootPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsChangeRootPassword");
    
            var path = "/qs/{id}/change_root_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeRootPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeRootPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Timezone Info Returns the list of available timezones that can be set on the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>List&lt;string&gt;</returns>
        public List<string> GetQsChangeTimezone (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsChangeTimezone");
    
            var path = "/qs/{id}/change_timezone";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeTimezone: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeTimezone: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<string>) ApiClient.Deserialize(response.Content, typeof(List<string>), response.Headers);
        }
    
        /// <summary>
        /// Webuzo Change Pass Info Retrieves instructions or metadata for changing the Webuzo control panel password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsChangeWebuzoPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsChangeWebuzoPassword");
    
            var path = "/qs/{id}/change_webuzo_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeWebuzoPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsChangeWebuzoPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get QuickServer Order Returns detailed QuickServer information, including credentials, IPs, and available client actions.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>Quickserver</returns>
        public Quickserver GetQsInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsInfo");
    
            var path = "/qs/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Quickserver) ApiClient.Deserialize(response.Content, typeof(Quickserver), response.Headers);
        }
    
        /// <summary>
        /// Insert CD Information Returns available ISO images that can be mounted in the QuickServer&#x27;s virtual CD drive.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsInsertCd (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsInsertCd");
    
            var path = "/qs/{id}/insert_cd";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsInsertCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsInsertCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get QuickServer Invoices Returns the billing invoices associated with this QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetQsInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsInvoices");
    
            var path = "/qs/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// List QuickServers Returns the QuickServer services on your account. Use the &#x60;qs_id&#x60; values with &#x60;/qs/{id}&#x60; for details or with the action endpoints (restart, backup, etc.) to manage each server.
        /// </summary>
        /// <returns>List&lt;QuickserverRow&gt;</returns>
        public List<QuickserverRow> GetQsList ()
        {
    
            var path = "/qs";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<QuickserverRow>) ApiClient.Deserialize(response.Content, typeof(List<QuickserverRow>), response.Headers);
        }
    
        /// <summary>
        /// QuickServer Reinstall OS Options Returns the list of available operating system templates for reinstalling the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>VpsTemplatesList</returns>
        public VpsTemplatesList GetQsReinstallOs (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsReinstallOs");
    
            var path = "/qs/{id}/reinstall_os";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsReinstallOs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsReinstallOs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsTemplatesList) ApiClient.Deserialize(response.Content, typeof(VpsTemplatesList), response.Headers);
        }
    
        /// <summary>
        /// Reset QuickServer Password Info Returns information needed before resetting the QuickServer&#x27;s root password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsResetPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsResetPassword");
    
            var path = "/qs/{id}/reset_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsResetPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsResetPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Reverse DNS Info Returns the current reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>ReverseDnsEntries</returns>
        public ReverseDnsEntries GetQsReverseDns (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsReverseDns");
    
            var path = "/qs/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ReverseDnsEntries) ApiClient.Deserialize(response.Content, typeof(ReverseDnsEntries), response.Headers);
        }
    
        /// <summary>
        /// VNC Setup Info Returns the current VNC connection information for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsSetupVnc (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsSetupVnc");
    
            var path = "/qs/{id}/setup_vnc";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsSetupVnc: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsSetupVnc: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Traffic Usage Returns bandwidth traffic usage data for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsTrafficUsage (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsTrafficUsage");
    
            var path = "/qs/{id}/traffic_usage";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsTrafficUsage: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsTrafficUsage: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get View Desktop Info Returns remote desktop connection information for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void GetQsViewDesktop (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsViewDesktop");
    
            var path = "/qs/{id}/view_desktop";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsViewDesktop: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsViewDesktop: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Resend QuickServer Welcome Email Resends the welcome email containing connection details and credentials for the QuickServer order.
        /// </summary>
        /// <param name="id">Quickserver ID</param>
        /// <returns>TextResponse</returns>
        public TextResponse GetQsWelcomeEmail (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetQsWelcomeEmail");
    
            var path = "/qs/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetQsWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Create QuickServer Backup Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsBackup (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsBackup");
    
            var path = "/qs/{id}/backup";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Update QuickServer Hostname Submits a hostname change request for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsChangeHostname (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsChangeHostname");
    
            var path = "/qs/{id}/change_hostname";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeHostname: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeHostname: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change Root Password Triggers a root password reset for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsChangeRootPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsChangeRootPassword");
    
            var path = "/qs/{id}/change_root_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeRootPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeRootPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change QuickServer Timezone Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
        /// </summary>
        /// <param name="timezone"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsChangeTimezone (string timezone, int? id)
        {
            // verify the required parameter 'timezone' is set
            if (timezone == null) throw new ApiException(400, "Missing required parameter 'timezone' when calling PostQsChangeTimezone");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsChangeTimezone");
    
            var path = "/qs/{id}/change_timezone";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (timezone != null) formParams.Add("timezone", ApiClient.ParameterToString(timezone)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeTimezone: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeTimezone: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change QuickServer Timezone Changes the system timezone on the QuickServer. Use &#x60;GET /qs/{id}/change_timezone&#x60; to list available options first.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsChangeTimezone (TimezoneUpdate body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostQsChangeTimezone");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsChangeTimezone");
    
            var path = "/qs/{id}/change_timezone";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeTimezone: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeTimezone: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change Webuzo Password Resets the Webuzo control panel password for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsChangeWebuzoPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsChangeWebuzoPassword");
    
            var path = "/qs/{id}/change_webuzo_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeWebuzoPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsChangeWebuzoPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Insert CD in QuickServer Mounts an ISO image in the QuickServer&#x27;s virtual CD drive. Use &#x60;GET /qs/{id}/insert_cd&#x60; to list available images.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsInsertCd (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsInsertCd");
    
            var path = "/qs/{id}/insert_cd";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsInsertCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsInsertCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Reinstall QuickServer OS Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsReinstallOs (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsReinstallOs");
    
            var path = "/qs/{id}/reinstall_os";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsReinstallOs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsReinstallOs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Reset QuickServer Password Resets the root password on the QuickServer to a new randomly generated password.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsResetPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsResetPassword");
    
            var path = "/qs/{id}/reset_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsResetPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsResetPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostQsReverseDns (ReverseDnsEntries body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostQsReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsReverseDns");
    
            var path = "/qs/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the QuickServer&#x27;s IP addresses.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostQsReverseDns (Dictionary<string, Object> ips, int? id)
        {
            // verify the required parameter 'ips' is set
            if (ips == null) throw new ApiException(400, "Missing required parameter 'ips' when calling PostQsReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsReverseDns");
    
            var path = "/qs/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Setup VNC Sets up or refreshes the VNC console connection for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQsSetupVnc (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsSetupVnc");
    
            var path = "/qs/{id}/setup_vnc";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsSetupVnc: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsSetupVnc: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Search Traffic Usage Searches and filters the QuickServer&#x27;s bandwidth traffic usage data by date range.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void PostQsTrafficUsage (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsTrafficUsage");
    
            var path = "/qs/{id}/traffic_usage";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsTrafficUsage: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsTrafficUsage: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Update View Desktop Updates or refreshes the remote desktop session for the QuickServer.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns></returns>
        public void PostQsViewDesktop (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQsViewDesktop");
    
            var path = "/qs/{id}/view_desktop";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsViewDesktop: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQsViewDesktop: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Restore QuickServer from Backup Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="body">QuickServer Restore request</param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQuickServerRestore (RestoreRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostQuickServerRestore");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQuickServerRestore");
    
            var path = "/qs/{id}/restore";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostQuickServerRestore: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQuickServerRestore: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Restore QuickServer from Backup Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /qs/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="backup"></param>
        /// <param name="password"></param>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostQuickServerRestore (string backup, string password, int? id)
        {
            // verify the required parameter 'backup' is set
            if (backup == null) throw new ApiException(400, "Missing required parameter 'backup' when calling PostQuickServerRestore");
            // verify the required parameter 'password' is set
            if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling PostQuickServerRestore");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostQuickServerRestore");
    
            var path = "/qs/{id}/restore";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (backup != null) formParams.Add("backup", ApiClient.ParameterToString(backup)); // form parameter
if (password != null) formParams.Add("password", ApiClient.ParameterToString(password)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQuickServerRestore: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostQuickServerRestore: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate QuickServer Order Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
        /// </summary>
        /// <returns></returns>
        public void PutQs ()
        {
    
            var path = "/qs/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PutQs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutQs: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Cancel QuickServer Order Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">QuickServer ID number</param>
        /// <returns>InlineResponse20010</returns>
        public InlineResponse20010 QuickserversCancel (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling QuickserversCancel");
    
            var path = "/qs/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling QuickserversCancel: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling QuickserversCancel: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20010) ApiClient.Deserialize(response.Content, typeof(InlineResponse20010), response.Headers);
        }
    
        /// <summary>
        /// Update QuickServer Order Updates QuickServer metadata or stored settings associated with the order.
        /// </summary>
        /// <param name="id">QuickServer ID number.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateQsInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateQsInfo");
    
            var path = "/qs/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateQsInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateQsInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
    }
}
