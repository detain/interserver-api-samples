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
    public interface IVPSApi
    {
        /// <summary>
        /// Place VPS Order Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>ServiceOrderPostResponse</returns>
        ServiceOrderPostResponse AddVps (VpsOrderPostRequest body);
        /// <summary>
        /// Place VPS Order Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
        /// </summary>
        /// <param name="osDistro"></param>
        /// <param name="slices"></param>
        /// <param name="vpsPlatform"></param>
        /// <param name="controlpanel"></param>
        /// <param name="period"></param>
        /// <param name="location"></param>
        /// <param name="osVersion"></param>
        /// <param name="hostname"></param>
        /// <param name="coupon"></param>
        /// <param name="rootpass"></param>
        /// <param name="comment"></param>
        /// <returns>ServiceOrderPostResponse</returns>
        ServiceOrderPostResponse AddVps (string osDistro, int? slices, string vpsPlatform, string controlpanel, int? period, int? location, string osVersion, string hostname, string coupon, string rootpass, string comment);
        /// <summary>
        /// Delete VPS Backup Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <param name="file">The backup filename to delete.</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteVpsBackup (int? id, string file, string all);
        /// <summary>
        /// Blocks SMTP Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsBlockSmtp (int? id);
        /// <summary>
        /// Disable CD Drive Disables the virtual CD drive on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsDisableCd (int? id);
        /// <summary>
        /// Disable Quotas Disables disk quota enforcement on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsDisableQuota (int? id);
        /// <summary>
        /// Eject CD Drive Ejects the virtual CD from the VPS CD drive.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsEjectCd (int? id);
        /// <summary>
        /// Enable Quotas Enables disk quota enforcement on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsEnableQuota (int? id);
        /// <summary>
        /// Restart VPS Restarts the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsRestart (int? id);
        /// <summary>
        /// Start VPS Powers on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsStart (int? id);
        /// <summary>
        /// Stop VPS Powers off the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        QueueResponse DoVpsStop (int? id);
        /// <summary>
        /// Download VPS Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>InlineResponse20011</returns>
        InlineResponse20011 DownloadVpsBackup (IdBackupsBody2 body, int? id, string all);
        /// <summary>
        /// Download VPS Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="file"></param>
        /// <param name="id">VPS ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>InlineResponse20011</returns>
        InlineResponse20011 DownloadVpsBackup (string file, int? id, string all);
        /// <summary>
        /// VPS Ordering Information Retrieves available VPS configurations, OS templates, and pricing for ordering.
        /// </summary>
        /// <returns>VpsOrder</returns>
        VpsOrder GetNewVps ();
        /// <summary>
        /// Get VPS Backups List Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>VpsBackupRows</returns>
        VpsBackupRows GetVpsBackups (int? id, string all);
        /// <summary>
        /// HD Space Addon Info Returns available hard drive space addon options and pricing for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void GetVpsBuyHdSpace (int? id);
        /// <summary>
        /// Additional IP Addon Info Returns available additional IP address options and pricing for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void GetVpsBuyIp (int? id);
        /// <summary>
        /// Get Timezone Info Returns the list of available timezones that can be set on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>List&lt;string&gt;</returns>
        List<string> GetVpsChangeTimezone (int? id);
        /// <summary>
        /// Get VPS Order Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>Vps</returns>
        Vps GetVpsInfo (int? id);
        /// <summary>
        /// Get VPS Invoices Returns the billing invoices associated with this VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetVpsInvoices (int? id);
        /// <summary>
        /// List VPS Orders Returns all VPS services on the account with their current status and configuration.
        /// </summary>
        /// <returns>List&lt;VpsRow&gt;</returns>
        List<VpsRow> GetVpsList ();
        /// <summary>
        /// VPS Reinstall OS Options Returns the list of available OS templates for reinstalling the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>VpsTemplatesList</returns>
        VpsTemplatesList GetVpsReinstallOs (int? id);
        /// <summary>
        /// Reverse DNS Info Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>ReverseDnsEntries</returns>
        ReverseDnsEntries GetVpsReverseDns (int? id);
        /// <summary>
        /// VNC Setup Info Returns the current VNC connection information for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void GetVpsSetupVnc (int? id);
        /// <summary>
        /// Slice Upgrade Info Returns available slice upgrade options and pricing for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void GetVpsSlices (int? id);
        /// <summary>
        /// Get Traffic Usage Returns bandwidth traffic usage data for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>VpsTrafficResponse</returns>
        VpsTrafficResponse GetVpsTrafficUsage (int? id);
        /// <summary>
        /// Get View Desktop Info Returns remote desktop connection information for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void GetVpsViewDesktop (int? id);
        /// <summary>
        /// Resend VPS Welcome Email Resends the welcome email containing connection details and credentials for the VPS order.
        /// </summary>
        /// <param name="id">VPS ID</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetVpsWelcomeEmail (string id);
        /// <summary>
        /// Start a VPS Backup Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsBackup (int? id);
        /// <summary>
        /// Purchase HD Space Addon Purchases additional hard drive space for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void PostVpsBuyHdSpace (int? id);
        /// <summary>
        /// Purchase Additional IP Purchases an additional IP address for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void PostVpsBuyIp (int? id);
        /// <summary>
        /// Update VPS Hostname Changes the hostname of the VPS. This queues a background task to update the server.
        /// </summary>
        /// <param name="hostname"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeHostname (string hostname, int? id);
        /// <summary>
        /// Update VPS Hostname Changes the hostname of the VPS. This queues a background task to update the server.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeHostname (HostnameObject body, int? id);
        /// <summary>
        /// Change VPS Root Password Changes the root password of the VPS.
        /// </summary>
        /// <param name="password"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeRootPassword (string password, int? id);
        /// <summary>
        /// Change VPS Root Password Changes the root password of the VPS.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeRootPassword (PasswordRequest body, int? id);
        /// <summary>
        /// Change VPS Timezone Changes the system timezone on the VPS.
        /// </summary>
        /// <param name="timezone"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeTimezone (string timezone, int? id);
        /// <summary>
        /// Change VPS Timezone Changes the system timezone on the VPS.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeTimezone (TimezoneUpdate body, int? id);
        /// <summary>
        /// Change Webuzo Password Changes the Webuzo control panel password on the VPS.
        /// </summary>
        /// <param name="password"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeWebuzoPassword (string password, int? id);
        /// <summary>
        /// Change Webuzo Password Changes the Webuzo control panel password on the VPS.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsChangeWebuzoPassword (PasswordRequest body, int? id);
        /// <summary>
        /// Insert CD in VPS Mounts an ISO image in the VPS virtual CD drive from the given URL.
        /// </summary>
        /// <param name="url"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsInsertCd (string url, int? id);
        /// <summary>
        /// Insert CD in VPS Mounts an ISO image in the VPS virtual CD drive from the given URL.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsInsertCd (UrlRequest body, int? id);
        /// <summary>
        /// Reinstall VPS OS Reinstalls the operating system on the VPS. Warning - all data will be erased.
        /// </summary>
        /// <param name="template"></param>
        /// <param name="password"></param>
        /// <param name="localPassword"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsReinstallOs (string template, string password, string localPassword, int? id);
        /// <summary>
        /// Reinstall VPS OS Reinstalls the operating system on the VPS. Warning - all data will be erased.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsReinstallOs (TemplateRequest body, int? id);
        /// <summary>
        /// Reset VPS Password Resets the root password on the VPS to a new randomly generated password.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsResetPassword (int? id);
        /// <summary>
        /// Restore VPS from Backup Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="body">VPS Restore request</param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsRestore (RestoreRequest body, int? id);
        /// <summary>
        /// Restore VPS from Backup Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="backup"></param>
        /// <param name="password"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsRestore (string backup, string password, int? id);
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse PostVpsReverseDns (ReverseDnsEntries body, int? id);
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>TextResponse</returns>
        TextResponse PostVpsReverseDns (Dictionary<string, Object> ips, int? id);
        /// <summary>
        /// Setup VNC Sets up or refreshes the VNC console connection for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        QueueResponse PostVpsSetupVnc (int? id);
        /// <summary>
        /// Purchase Slice Upgrade Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void PostVpsSlices (int? id);
        /// <summary>
        /// Update View Desktop Updates or refreshes the remote desktop session for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        void PostVpsViewDesktop (int? id);
        /// <summary>
        /// Validate VPS Order Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>VpsOrderPutResponse</returns>
        VpsOrderPutResponse PutVps (VpsOrderPutRequest body);
        /// <summary>
        /// Validate VPS Order Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
        /// </summary>
        /// <param name="osDistro"></param>
        /// <param name="slices"></param>
        /// <param name="vpsPlatform"></param>
        /// <param name="controlpanel"></param>
        /// <param name="period"></param>
        /// <param name="location"></param>
        /// <param name="osVersion"></param>
        /// <param name="hostname"></param>
        /// <param name="coupon"></param>
        /// <param name="rootpass"></param>
        /// <param name="comment"></param>
        /// <returns>VpsOrderPutResponse</returns>
        VpsOrderPutResponse PutVps (string osDistro, int? slices, string vpsPlatform, string controlpanel, int? period, int? location, string osVersion, string hostname, string coupon, string rootpass, string comment);
        /// <summary>
        /// Update VPS Order Updates settings on a VPS order.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateVpsInfo (string id);
        /// <summary>
        /// Cancel VPS Service Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>InlineResponse20022</returns>
        InlineResponse20022 VPSCancel (int? id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class VPSApi : IVPSApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="VPSApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public VPSApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="VPSApi"/> class.
        /// </summary>
        /// <returns></returns>
        public VPSApi(String basePath)
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
        /// Place VPS Order Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>ServiceOrderPostResponse</returns>
        public ServiceOrderPostResponse AddVps (VpsOrderPostRequest body)
        {
    
            var path = "/vps/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddVps: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddVps: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServiceOrderPostResponse) ApiClient.Deserialize(response.Content, typeof(ServiceOrderPostResponse), response.Headers);
        }
    
        /// <summary>
        /// Place VPS Order Places an order for a new VPS. Use &#x60;PUT /vps/order&#x60; to validate the order first.
        /// </summary>
        /// <param name="osDistro"></param>
        /// <param name="slices"></param>
        /// <param name="vpsPlatform"></param>
        /// <param name="controlpanel"></param>
        /// <param name="period"></param>
        /// <param name="location"></param>
        /// <param name="osVersion"></param>
        /// <param name="hostname"></param>
        /// <param name="coupon"></param>
        /// <param name="rootpass"></param>
        /// <param name="comment"></param>
        /// <returns>ServiceOrderPostResponse</returns>
        public ServiceOrderPostResponse AddVps (string osDistro, int? slices, string vpsPlatform, string controlpanel, int? period, int? location, string osVersion, string hostname, string coupon, string rootpass, string comment)
        {
    
            var path = "/vps/order";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (osDistro != null) formParams.Add("osDistro", ApiClient.ParameterToString(osDistro)); // form parameter
if (slices != null) formParams.Add("slices", ApiClient.ParameterToString(slices)); // form parameter
if (vpsPlatform != null) formParams.Add("vpsPlatform", ApiClient.ParameterToString(vpsPlatform)); // form parameter
if (controlpanel != null) formParams.Add("controlpanel", ApiClient.ParameterToString(controlpanel)); // form parameter
if (period != null) formParams.Add("period", ApiClient.ParameterToString(period)); // form parameter
if (location != null) formParams.Add("location", ApiClient.ParameterToString(location)); // form parameter
if (osVersion != null) formParams.Add("osVersion", ApiClient.ParameterToString(osVersion)); // form parameter
if (hostname != null) formParams.Add("hostname", ApiClient.ParameterToString(hostname)); // form parameter
if (coupon != null) formParams.Add("coupon", ApiClient.ParameterToString(coupon)); // form parameter
if (rootpass != null) formParams.Add("rootpass", ApiClient.ParameterToString(rootpass)); // form parameter
if (comment != null) formParams.Add("comment", ApiClient.ParameterToString(comment)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddVps: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddVps: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ServiceOrderPostResponse) ApiClient.Deserialize(response.Content, typeof(ServiceOrderPostResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete VPS Backup Permanently removes the specified backup file from storage. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames before deleting.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <param name="file">The backup filename to delete.</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteVpsBackup (int? id, string file, string all)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteVpsBackup");
            // verify the required parameter 'file' is set
            if (file == null) throw new ApiException(400, "Missing required parameter 'file' when calling DeleteVpsBackup");
    
            var path = "/vps/{id}/backups";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteVpsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteVpsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Blocks SMTP Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsBlockSmtp (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsBlockSmtp");
    
            var path = "/vps/{id}/block_smtp";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsBlockSmtp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsBlockSmtp: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Disable CD Drive Disables the virtual CD drive on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsDisableCd (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsDisableCd");
    
            var path = "/vps/{id}/disable_cd";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsDisableCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsDisableCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Disable Quotas Disables disk quota enforcement on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsDisableQuota (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsDisableQuota");
    
            var path = "/vps/{id}/disable_quota";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsDisableQuota: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsDisableQuota: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Eject CD Drive Ejects the virtual CD from the VPS CD drive.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsEjectCd (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsEjectCd");
    
            var path = "/vps/{id}/eject_cd";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsEjectCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsEjectCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Enable Quotas Enables disk quota enforcement on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsEnableQuota (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsEnableQuota");
    
            var path = "/vps/{id}/enable_quota";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsEnableQuota: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsEnableQuota: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Restart VPS Restarts the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsRestart (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsRestart");
    
            var path = "/vps/{id}/restart";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsRestart: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsRestart: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Start VPS Powers on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsStart (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsStart");
    
            var path = "/vps/{id}/start";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsStart: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsStart: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Stop VPS Powers off the VPS.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse DoVpsStop (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DoVpsStop");
    
            var path = "/vps/{id}/stop";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsStop: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DoVpsStop: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Download VPS Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>InlineResponse20011</returns>
        public InlineResponse20011 DownloadVpsBackup (IdBackupsBody2 body, int? id, string all)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DownloadVpsBackup");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DownloadVpsBackup");
    
            var path = "/vps/{id}/backups";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadVpsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadVpsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20011) ApiClient.Deserialize(response.Content, typeof(InlineResponse20011), response.Headers);
        }
    
        /// <summary>
        /// Download VPS Backup Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use &#x60;GET /vps/{id}/backups&#x60; to list available backup filenames.
        /// </summary>
        /// <param name="file"></param>
        /// <param name="id">VPS ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>InlineResponse20011</returns>
        public InlineResponse20011 DownloadVpsBackup (string file, int? id, string all)
        {
            // verify the required parameter 'file' is set
            if (file == null) throw new ApiException(400, "Missing required parameter 'file' when calling DownloadVpsBackup");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DownloadVpsBackup");
    
            var path = "/vps/{id}/backups";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadVpsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DownloadVpsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20011) ApiClient.Deserialize(response.Content, typeof(InlineResponse20011), response.Headers);
        }
    
        /// <summary>
        /// VPS Ordering Information Retrieves available VPS configurations, OS templates, and pricing for ordering.
        /// </summary>
        /// <returns>VpsOrder</returns>
        public VpsOrder GetNewVps ()
        {
    
            var path = "/vps/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewVps: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewVps: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsOrder) ApiClient.Deserialize(response.Content, typeof(VpsOrder), response.Headers);
        }
    
        /// <summary>
        /// Get VPS Backups List Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup &#x60;name&#x60; value with &#x60;PATCH /vps/{id}/backups&#x60; to download or &#x60;DELETE /vps/{id}/backups&#x60; to remove a backup. Use &#x60;POST /vps/{id}/restore&#x60; to restore from a backup.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <param name="all">Set to &#x60;1&#x60; to list all backups across all services, not just the ones for the given VPS.</param>
        /// <returns>VpsBackupRows</returns>
        public VpsBackupRows GetVpsBackups (int? id, string all)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsBackups");
    
            var path = "/vps/{id}/backups";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsBackups: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsBackups: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsBackupRows) ApiClient.Deserialize(response.Content, typeof(VpsBackupRows), response.Headers);
        }
    
        /// <summary>
        /// HD Space Addon Info Returns available hard drive space addon options and pricing for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void GetVpsBuyHdSpace (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsBuyHdSpace");
    
            var path = "/vps/{id}/buy_hd_space";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsBuyHdSpace: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsBuyHdSpace: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Additional IP Addon Info Returns available additional IP address options and pricing for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void GetVpsBuyIp (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsBuyIp");
    
            var path = "/vps/{id}/buy_ip";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsBuyIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsBuyIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Timezone Info Returns the list of available timezones that can be set on the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>List&lt;string&gt;</returns>
        public List<string> GetVpsChangeTimezone (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsChangeTimezone");
    
            var path = "/vps/{id}/change_timezone";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsChangeTimezone: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsChangeTimezone: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<string>) ApiClient.Deserialize(response.Content, typeof(List<string>), response.Headers);
        }
    
        /// <summary>
        /// Get VPS Order Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>Vps</returns>
        public Vps GetVpsInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsInfo");
    
            var path = "/vps/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Vps) ApiClient.Deserialize(response.Content, typeof(Vps), response.Headers);
        }
    
        /// <summary>
        /// Get VPS Invoices Returns the billing invoices associated with this VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetVpsInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsInvoices");
    
            var path = "/vps/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// List VPS Orders Returns all VPS services on the account with their current status and configuration.
        /// </summary>
        /// <returns>List&lt;VpsRow&gt;</returns>
        public List<VpsRow> GetVpsList ()
        {
    
            var path = "/vps";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<VpsRow>) ApiClient.Deserialize(response.Content, typeof(List<VpsRow>), response.Headers);
        }
    
        /// <summary>
        /// VPS Reinstall OS Options Returns the list of available OS templates for reinstalling the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>VpsTemplatesList</returns>
        public VpsTemplatesList GetVpsReinstallOs (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsReinstallOs");
    
            var path = "/vps/{id}/reinstall_os";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsReinstallOs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsReinstallOs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsTemplatesList) ApiClient.Deserialize(response.Content, typeof(VpsTemplatesList), response.Headers);
        }
    
        /// <summary>
        /// Reverse DNS Info Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>ReverseDnsEntries</returns>
        public ReverseDnsEntries GetVpsReverseDns (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsReverseDns");
    
            var path = "/vps/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ReverseDnsEntries) ApiClient.Deserialize(response.Content, typeof(ReverseDnsEntries), response.Headers);
        }
    
        /// <summary>
        /// VNC Setup Info Returns the current VNC connection information for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void GetVpsSetupVnc (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsSetupVnc");
    
            var path = "/vps/{id}/setup_vnc";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsSetupVnc: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsSetupVnc: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Slice Upgrade Info Returns available slice upgrade options and pricing for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void GetVpsSlices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsSlices");
    
            var path = "/vps/{id}/slices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsSlices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsSlices: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Traffic Usage Returns bandwidth traffic usage data for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>VpsTrafficResponse</returns>
        public VpsTrafficResponse GetVpsTrafficUsage (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsTrafficUsage");
    
            var path = "/vps/{id}/traffic_usage";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsTrafficUsage: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsTrafficUsage: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsTrafficResponse) ApiClient.Deserialize(response.Content, typeof(VpsTrafficResponse), response.Headers);
        }
    
        /// <summary>
        /// Get View Desktop Info Returns remote desktop connection information for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void GetVpsViewDesktop (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsViewDesktop");
    
            var path = "/vps/{id}/view_desktop";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsViewDesktop: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsViewDesktop: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Resend VPS Welcome Email Resends the welcome email containing connection details and credentials for the VPS order.
        /// </summary>
        /// <param name="id">VPS ID</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetVpsWelcomeEmail (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetVpsWelcomeEmail");
    
            var path = "/vps/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetVpsWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Start a VPS Backup Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsBackup (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsBackup");
    
            var path = "/vps/{id}/backup";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsBackup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsBackup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Purchase HD Space Addon Purchases additional hard drive space for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void PostVpsBuyHdSpace (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsBuyHdSpace");
    
            var path = "/vps/{id}/buy_hd_space";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsBuyHdSpace: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsBuyHdSpace: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Purchase Additional IP Purchases an additional IP address for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void PostVpsBuyIp (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsBuyIp");
    
            var path = "/vps/{id}/buy_ip";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsBuyIp: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsBuyIp: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Update VPS Hostname Changes the hostname of the VPS. This queues a background task to update the server.
        /// </summary>
        /// <param name="hostname"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeHostname (string hostname, int? id)
        {
            // verify the required parameter 'hostname' is set
            if (hostname == null) throw new ApiException(400, "Missing required parameter 'hostname' when calling PostVpsChangeHostname");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeHostname");
    
            var path = "/vps/{id}/change_hostname";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (hostname != null) formParams.Add("hostname", ApiClient.ParameterToString(hostname)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeHostname: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeHostname: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Update VPS Hostname Changes the hostname of the VPS. This queues a background task to update the server.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeHostname (HostnameObject body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsChangeHostname");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeHostname");
    
            var path = "/vps/{id}/change_hostname";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeHostname: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeHostname: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change VPS Root Password Changes the root password of the VPS.
        /// </summary>
        /// <param name="password"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeRootPassword (string password, int? id)
        {
            // verify the required parameter 'password' is set
            if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling PostVpsChangeRootPassword");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeRootPassword");
    
            var path = "/vps/{id}/change_root_password";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeRootPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeRootPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change VPS Root Password Changes the root password of the VPS.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeRootPassword (PasswordRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsChangeRootPassword");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeRootPassword");
    
            var path = "/vps/{id}/change_root_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeRootPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeRootPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change VPS Timezone Changes the system timezone on the VPS.
        /// </summary>
        /// <param name="timezone"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeTimezone (string timezone, int? id)
        {
            // verify the required parameter 'timezone' is set
            if (timezone == null) throw new ApiException(400, "Missing required parameter 'timezone' when calling PostVpsChangeTimezone");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeTimezone");
    
            var path = "/vps/{id}/change_timezone";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeTimezone: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeTimezone: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change VPS Timezone Changes the system timezone on the VPS.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeTimezone (TimezoneUpdate body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsChangeTimezone");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeTimezone");
    
            var path = "/vps/{id}/change_timezone";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeTimezone: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeTimezone: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change Webuzo Password Changes the Webuzo control panel password on the VPS.
        /// </summary>
        /// <param name="password"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeWebuzoPassword (string password, int? id)
        {
            // verify the required parameter 'password' is set
            if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling PostVpsChangeWebuzoPassword");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeWebuzoPassword");
    
            var path = "/vps/{id}/change_webuzo_password";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeWebuzoPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeWebuzoPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Change Webuzo Password Changes the Webuzo control panel password on the VPS.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsChangeWebuzoPassword (PasswordRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsChangeWebuzoPassword");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsChangeWebuzoPassword");
    
            var path = "/vps/{id}/change_webuzo_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeWebuzoPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsChangeWebuzoPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Insert CD in VPS Mounts an ISO image in the VPS virtual CD drive from the given URL.
        /// </summary>
        /// <param name="url"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsInsertCd (string url, int? id)
        {
            // verify the required parameter 'url' is set
            if (url == null) throw new ApiException(400, "Missing required parameter 'url' when calling PostVpsInsertCd");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsInsertCd");
    
            var path = "/vps/{id}/insert_cd";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (url != null) formParams.Add("url", ApiClient.ParameterToString(url)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsInsertCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsInsertCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Insert CD in VPS Mounts an ISO image in the VPS virtual CD drive from the given URL.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsInsertCd (UrlRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsInsertCd");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsInsertCd");
    
            var path = "/vps/{id}/insert_cd";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsInsertCd: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsInsertCd: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Reinstall VPS OS Reinstalls the operating system on the VPS. Warning - all data will be erased.
        /// </summary>
        /// <param name="template"></param>
        /// <param name="password"></param>
        /// <param name="localPassword"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsReinstallOs (string template, string password, string localPassword, int? id)
        {
            // verify the required parameter 'template' is set
            if (template == null) throw new ApiException(400, "Missing required parameter 'template' when calling PostVpsReinstallOs");
            // verify the required parameter 'password' is set
            if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling PostVpsReinstallOs");
            // verify the required parameter 'localPassword' is set
            if (localPassword == null) throw new ApiException(400, "Missing required parameter 'localPassword' when calling PostVpsReinstallOs");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsReinstallOs");
    
            var path = "/vps/{id}/reinstall_os";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (template != null) formParams.Add("template", ApiClient.ParameterToString(template)); // form parameter
if (password != null) formParams.Add("password", ApiClient.ParameterToString(password)); // form parameter
if (localPassword != null) formParams.Add("localPassword", ApiClient.ParameterToString(localPassword)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReinstallOs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReinstallOs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Reinstall VPS OS Reinstalls the operating system on the VPS. Warning - all data will be erased.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsReinstallOs (TemplateRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsReinstallOs");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsReinstallOs");
    
            var path = "/vps/{id}/reinstall_os";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReinstallOs: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReinstallOs: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Reset VPS Password Resets the root password on the VPS to a new randomly generated password.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsResetPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsResetPassword");
    
            var path = "/vps/{id}/reset_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsResetPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsResetPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Restore VPS from Backup Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="body">VPS Restore request</param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsRestore (RestoreRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsRestore");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsRestore");
    
            var path = "/vps/{id}/restore";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsRestore: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsRestore: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Restore VPS from Backup Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use &#x60;GET /vps/{id}/backups&#x60; to retrieve available backup names.
        /// </summary>
        /// <param name="backup"></param>
        /// <param name="password"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsRestore (string backup, string password, int? id)
        {
            // verify the required parameter 'backup' is set
            if (backup == null) throw new ApiException(400, "Missing required parameter 'backup' when calling PostVpsRestore");
            // verify the required parameter 'password' is set
            if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling PostVpsRestore");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsRestore");
    
            var path = "/vps/{id}/restore";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsRestore: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsRestore: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostVpsReverseDns (ReverseDnsEntries body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostVpsReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsReverseDns");
    
            var path = "/vps/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Reverse DNS Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
        /// </summary>
        /// <param name="ips"></param>
        /// <param name="id">VPS ID number</param>
        /// <returns>TextResponse</returns>
        public TextResponse PostVpsReverseDns (Dictionary<string, Object> ips, int? id)
        {
            // verify the required parameter 'ips' is set
            if (ips == null) throw new ApiException(400, "Missing required parameter 'ips' when calling PostVpsReverseDns");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsReverseDns");
    
            var path = "/vps/{id}/reverse_dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReverseDns: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsReverseDns: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Setup VNC Sets up or refreshes the VNC console connection for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>QueueResponse</returns>
        public QueueResponse PostVpsSetupVnc (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsSetupVnc");
    
            var path = "/vps/{id}/setup_vnc";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsSetupVnc: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsSetupVnc: " + response.ErrorMessage, response.ErrorMessage);
    
            return (QueueResponse) ApiClient.Deserialize(response.Content, typeof(QueueResponse), response.Headers);
        }
    
        /// <summary>
        /// Purchase Slice Upgrade Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void PostVpsSlices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsSlices");
    
            var path = "/vps/{id}/slices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsSlices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsSlices: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Update View Desktop Updates or refreshes the remote desktop session for the VPS.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns></returns>
        public void PostVpsViewDesktop (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostVpsViewDesktop");
    
            var path = "/vps/{id}/view_desktop";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsViewDesktop: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostVpsViewDesktop: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Validate VPS Order Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>VpsOrderPutResponse</returns>
        public VpsOrderPutResponse PutVps (VpsOrderPutRequest body)
        {
    
            var path = "/vps/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PutVps: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutVps: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsOrderPutResponse) ApiClient.Deserialize(response.Content, typeof(VpsOrderPutResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate VPS Order Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
        /// </summary>
        /// <param name="osDistro"></param>
        /// <param name="slices"></param>
        /// <param name="vpsPlatform"></param>
        /// <param name="controlpanel"></param>
        /// <param name="period"></param>
        /// <param name="location"></param>
        /// <param name="osVersion"></param>
        /// <param name="hostname"></param>
        /// <param name="coupon"></param>
        /// <param name="rootpass"></param>
        /// <param name="comment"></param>
        /// <returns>VpsOrderPutResponse</returns>
        public VpsOrderPutResponse PutVps (string osDistro, int? slices, string vpsPlatform, string controlpanel, int? period, int? location, string osVersion, string hostname, string coupon, string rootpass, string comment)
        {
    
            var path = "/vps/order";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (osDistro != null) formParams.Add("osDistro", ApiClient.ParameterToString(osDistro)); // form parameter
if (slices != null) formParams.Add("slices", ApiClient.ParameterToString(slices)); // form parameter
if (vpsPlatform != null) formParams.Add("vpsPlatform", ApiClient.ParameterToString(vpsPlatform)); // form parameter
if (controlpanel != null) formParams.Add("controlpanel", ApiClient.ParameterToString(controlpanel)); // form parameter
if (period != null) formParams.Add("period", ApiClient.ParameterToString(period)); // form parameter
if (location != null) formParams.Add("location", ApiClient.ParameterToString(location)); // form parameter
if (osVersion != null) formParams.Add("osVersion", ApiClient.ParameterToString(osVersion)); // form parameter
if (hostname != null) formParams.Add("hostname", ApiClient.ParameterToString(hostname)); // form parameter
if (coupon != null) formParams.Add("coupon", ApiClient.ParameterToString(coupon)); // form parameter
if (rootpass != null) formParams.Add("rootpass", ApiClient.ParameterToString(rootpass)); // form parameter
if (comment != null) formParams.Add("comment", ApiClient.ParameterToString(comment)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PutVps: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutVps: " + response.ErrorMessage, response.ErrorMessage);
    
            return (VpsOrderPutResponse) ApiClient.Deserialize(response.Content, typeof(VpsOrderPutResponse), response.Headers);
        }
    
        /// <summary>
        /// Update VPS Order Updates settings on a VPS order.
        /// </summary>
        /// <param name="id">VPS ID number.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateVpsInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateVpsInfo");
    
            var path = "/vps/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateVpsInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateVpsInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Cancel VPS Service Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
        /// </summary>
        /// <param name="id">VPS ID number</param>
        /// <returns>InlineResponse20022</returns>
        public InlineResponse20022 VPSCancel (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling VPSCancel");
    
            var path = "/vps/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling VPSCancel: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling VPSCancel: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse20022) ApiClient.Deserialize(response.Content, typeof(InlineResponse20022), response.Headers);
        }
    
    }
}
