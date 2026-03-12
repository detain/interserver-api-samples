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
    public interface IMailApi
    {
        /// <summary>
        /// Place Mail Order Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
        /// </summary>
        /// <returns></returns>
        void AddMail ();
        /// <summary>
        /// Create Deny Rule Adds a new deny rule to automatically block emails that match the specified criteria.
        /// </summary>
        /// <param name="body">These are the fields needed to create a new email deny rule.</param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse AddRule (DenyRuleNew body, int? id);
        /// <summary>
        /// Create Deny Rule Adds a new deny rule to automatically block emails that match the specified criteria.
        /// </summary>
        /// <param name="user"></param>
        /// <param name="type"></param>
        /// <param name="data"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse AddRule (string user, string type, string data, int? id);
        /// <summary>
        /// Create Mail Alert Creates a new alert for the mail service, such as delivery or quota notifications.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse CreateMailAlert (MailAlertRequest body, int? id);
        /// <summary>
        /// Create Mail Alert Creates a new alert for the mail service, such as delivery or quota notifications.
        /// </summary>
        /// <param name="type"></param>
        /// <param name="value"></param>
        /// <param name="to"></param>
        /// <param name="enabled"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse CreateMailAlert (string type, string value, string to, string enabled, int? id);
        /// <summary>
        /// Delete Mail Alert Deletes an existing alert definition for the mail service.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="alertId">Alert ID to delete.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteMailAlert (int? id, int? alertId);
        /// <summary>
        /// Delete Deny Rule Removes a deny rule from the mail service.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="rule">The ID of the Rules entry.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse DeleteRule (int? id, string rule);
        /// <summary>
        /// Remove Email Address from Block List Removes an email address from the mail service&#x27;s block lists.
        /// </summary>
        /// <param name="email"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse DelistBlock (string email, int? id);
        /// <summary>
        /// Remove Email Address from Block List Removes an email address from the mail service&#x27;s block lists.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse DelistBlock (EmailAddress body, int? id);
        /// <summary>
        /// List Mail Alerts Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailAlertsResponse</returns>
        MailAlertsResponse GetMailAlerts (int? id);
        /// <summary>
        /// List Blocked Email Addresses Displays a listing of the blocked email addresses
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailBlocks</returns>
        MailBlocks GetMailBlocks (int? id);
        /// <summary>
        /// Get Delist Status Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailDelistResponse</returns>
        MailDelistResponse GetMailDelist (int? id);
        /// <summary>
        /// Get Deliverability Metrics Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailDeliverabilityResponse</returns>
        MailDeliverabilityResponse GetMailDeliverability (int? id);
        /// <summary>
        /// Get Mail Order Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailSchema</returns>
        MailSchema GetMailInfo (int? id);
        /// <summary>
        /// Get Mail Invoices Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetMailInvoices (int? id);
        /// <summary>
        /// List Mail Orders Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.
        /// </summary>
        /// <returns>List&lt;MailRow&gt;</returns>
        List<MailRow> GetMailList ();
        /// <summary>
        /// Resend Mail Welcome Email Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetMailWelcomeEmail (int? id);
        /// <summary>
        /// Get Mail Ordering Information Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
        /// </summary>
        /// <returns>MailOrder</returns>
        MailOrder GetNewMail ();
        /// <summary>
        /// List Deny Rules Returns a listing of all the deny block rules configured for this mail service.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>List&lt;DenyRuleRecord&gt;</returns>
        List<DenyRuleRecord> GetRules (int? id);
        /// <summary>
        /// Get Mail Usage Statistics Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="time">The timeframe for the statistics.</param>
        /// <returns>MailStatsType</returns>
        MailStatsType GetStats (int? id, string time);
        /// <summary>
        /// Cancel Mail Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>InlineResponse2008</returns>
        InlineResponse2008 MailCancel (int? id);
        /// <summary>
        /// Delist a Blocked Sender Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostMailDelist (MailDelistRequest body, int? id);
        /// <summary>
        /// Delist a Blocked Sender Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.
        /// </summary>
        /// <param name="unblock"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostMailDelist (string unblock, int? id);
        /// <summary>
        /// Validate Mail Order Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
        /// </summary>
        /// <returns></returns>
        void PutMail ();
        /// <summary>
        /// Reset Mail Password Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse ResetMailPassword (int? id);
        /// <summary>
        /// Send Email with Advanced Options Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse SendAdvMail (SendMailAdv body, int? id);
        /// <summary>
        /// Send Email with Advanced Options Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.
        /// </summary>
        /// <param name="subject"></param>
        /// <param name="body"></param>
        /// <param name="from"></param>
        /// <param name="to"></param>
        /// <param name="replyto"></param>
        /// <param name="cc"></param>
        /// <param name="bcc"></param>
        /// <param name="attachments"></param>
        /// <param name="id2"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse SendAdvMail (string subject, string body, EmailAddressName from, List<EmailAddressName> to, List<EmailAddressName> replyto, List<EmailAddressName> cc, List<EmailAddressName> bcc, List<MailAttachment> attachments, long? id2, int? id);
        /// <summary>
        /// Send Email Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse SendMail (SendMail body, int? id);
        /// <summary>
        /// Send Email Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.
        /// </summary>
        /// <param name="to"></param>
        /// <param name="from"></param>
        /// <param name="subject"></param>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        GenericResponse SendMail (string to, string from, string subject, string body, int? id);
        /// <summary>
        /// Update Mail Alert Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateMailAlert (MailAlertUpdateRequest body, int? id);
        /// <summary>
        /// Update Mail Alert Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.
        /// </summary>
        /// <param name="alertId"></param>
        /// <param name="type"></param>
        /// <param name="value"></param>
        /// <param name="to"></param>
        /// <param name="enabled"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateMailAlert (int? alertId, string type, string value, string to, string enabled, int? id);
        /// <summary>
        /// Update Mail Order Updates mail service metadata for the order, such as stored settings or account details.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns></returns>
        void UpdateMailInfo (string id);
        /// <summary>
        /// View Mail Log Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="id">The ID of your mail order this will be sent through.</param>
        /// <param name="origin">originating ip address sending mail</param>
        /// <param name="mx">mx record mail was sent to</param>
        /// <param name="from">from email address</param>
        /// <param name="to">to/destination email address</param>
        /// <param name="subject">subject containing this string</param>
        /// <param name="mailid">mail id</param>
        /// <param name="skip">number of records to skip for pagination</param>
        /// <param name="limit">maximum number of records to return</param>
        /// <param name="startDate">earliest date to get emails in unix timestamp format</param>
        /// <param name="endDate">Latest date to get emails in unix timestamp format.</param>
        /// <param name="delivered">Filter emails by whether or not they were delivered.</param>
        /// <returns>MailLog</returns>
        MailLog ViewMailLog (int? id, long? id, string origin, string mx, string from, string to, string subject, string mailid, int? skip, int? limit, long? startDate, long? endDate, string delivered);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class MailApi : IMailApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="MailApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public MailApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="MailApi"/> class.
        /// </summary>
        /// <returns></returns>
        public MailApi(String basePath)
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
        /// Place Mail Order Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
        /// </summary>
        /// <returns></returns>
        public void AddMail ()
        {
    
            var path = "/mail/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddMail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddMail: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Create Deny Rule Adds a new deny rule to automatically block emails that match the specified criteria.
        /// </summary>
        /// <param name="body">These are the fields needed to create a new email deny rule.</param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse AddRule (DenyRuleNew body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddRule");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddRule");
    
            var path = "/mail/{id}/rules";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddRule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddRule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Create Deny Rule Adds a new deny rule to automatically block emails that match the specified criteria.
        /// </summary>
        /// <param name="user"></param>
        /// <param name="type"></param>
        /// <param name="data"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse AddRule (string user, string type, string data, int? id)
        {
            // verify the required parameter 'user' is set
            if (user == null) throw new ApiException(400, "Missing required parameter 'user' when calling AddRule");
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling AddRule");
            // verify the required parameter 'data' is set
            if (data == null) throw new ApiException(400, "Missing required parameter 'data' when calling AddRule");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddRule");
    
            var path = "/mail/{id}/rules";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (user != null) formParams.Add("user", ApiClient.ParameterToString(user)); // form parameter
if (type != null) formParams.Add("type", ApiClient.ParameterToString(type)); // form parameter
if (data != null) formParams.Add("data", ApiClient.ParameterToString(data)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddRule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddRule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Create Mail Alert Creates a new alert for the mail service, such as delivery or quota notifications.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse CreateMailAlert (MailAlertRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling CreateMailAlert");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CreateMailAlert");
    
            var path = "/mail/{id}/alerts";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CreateMailAlert: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CreateMailAlert: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Create Mail Alert Creates a new alert for the mail service, such as delivery or quota notifications.
        /// </summary>
        /// <param name="type"></param>
        /// <param name="value"></param>
        /// <param name="to"></param>
        /// <param name="enabled"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse CreateMailAlert (string type, string value, string to, string enabled, int? id)
        {
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling CreateMailAlert");
            // verify the required parameter 'value' is set
            if (value == null) throw new ApiException(400, "Missing required parameter 'value' when calling CreateMailAlert");
            // verify the required parameter 'to' is set
            if (to == null) throw new ApiException(400, "Missing required parameter 'to' when calling CreateMailAlert");
            // verify the required parameter 'enabled' is set
            if (enabled == null) throw new ApiException(400, "Missing required parameter 'enabled' when calling CreateMailAlert");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CreateMailAlert");
    
            var path = "/mail/{id}/alerts";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (type != null) formParams.Add("type", ApiClient.ParameterToString(type)); // form parameter
if (value != null) formParams.Add("value", ApiClient.ParameterToString(value)); // form parameter
if (to != null) formParams.Add("to", ApiClient.ParameterToString(to)); // form parameter
if (enabled != null) formParams.Add("enabled", ApiClient.ParameterToString(enabled)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling CreateMailAlert: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CreateMailAlert: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete Mail Alert Deletes an existing alert definition for the mail service.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="alertId">Alert ID to delete.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteMailAlert (int? id, int? alertId)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteMailAlert");
            // verify the required parameter 'alertId' is set
            if (alertId == null) throw new ApiException(400, "Missing required parameter 'alertId' when calling DeleteMailAlert");
    
            var path = "/mail/{id}/alerts";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (alertId != null) queryParams.Add("alert_id", ApiClient.ParameterToString(alertId)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteMailAlert: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteMailAlert: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete Deny Rule Removes a deny rule from the mail service.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="rule">The ID of the Rules entry.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse DeleteRule (int? id, string rule)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteRule");
            // verify the required parameter 'rule' is set
            if (rule == null) throw new ApiException(400, "Missing required parameter 'rule' when calling DeleteRule");
    
            var path = "/mail/{id}/rules/{rule}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
path = path.Replace("{" + "rule" + "}", ApiClient.ParameterToString(rule));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteRule: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteRule: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Remove Email Address from Block List Removes an email address from the mail service&#x27;s block lists.
        /// </summary>
        /// <param name="email"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse DelistBlock (string email, int? id)
        {
            // verify the required parameter 'email' is set
            if (email == null) throw new ApiException(400, "Missing required parameter 'email' when calling DelistBlock");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DelistBlock");
    
            var path = "/mail/{id}/blocks/delete";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (email != null) formParams.Add("email", ApiClient.ParameterToString(email)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DelistBlock: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DelistBlock: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Remove Email Address from Block List Removes an email address from the mail service&#x27;s block lists.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse DelistBlock (EmailAddress body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling DelistBlock");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DelistBlock");
    
            var path = "/mail/{id}/blocks/delete";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DelistBlock: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DelistBlock: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// List Mail Alerts Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailAlertsResponse</returns>
        public MailAlertsResponse GetMailAlerts (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetMailAlerts");
    
            var path = "/mail/{id}/alerts";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailAlerts: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailAlerts: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailAlertsResponse) ApiClient.Deserialize(response.Content, typeof(MailAlertsResponse), response.Headers);
        }
    
        /// <summary>
        /// List Blocked Email Addresses Displays a listing of the blocked email addresses
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailBlocks</returns>
        public MailBlocks GetMailBlocks (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetMailBlocks");
    
            var path = "/mail/{id}/blocks";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailBlocks: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailBlocks: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailBlocks) ApiClient.Deserialize(response.Content, typeof(MailBlocks), response.Headers);
        }
    
        /// <summary>
        /// Get Delist Status Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailDelistResponse</returns>
        public MailDelistResponse GetMailDelist (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetMailDelist");
    
            var path = "/mail/{id}/delist";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailDelist: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailDelist: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailDelistResponse) ApiClient.Deserialize(response.Content, typeof(MailDelistResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Deliverability Metrics Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailDeliverabilityResponse</returns>
        public MailDeliverabilityResponse GetMailDeliverability (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetMailDeliverability");
    
            var path = "/mail/{id}/deliverability";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailDeliverability: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailDeliverability: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailDeliverabilityResponse) ApiClient.Deserialize(response.Content, typeof(MailDeliverabilityResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Mail Order Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>MailSchema</returns>
        public MailSchema GetMailInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetMailInfo");
    
            var path = "/mail/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailSchema) ApiClient.Deserialize(response.Content, typeof(MailSchema), response.Headers);
        }
    
        /// <summary>
        /// Get Mail Invoices Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetMailInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetMailInvoices");
    
            var path = "/mail/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// List Mail Orders Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.
        /// </summary>
        /// <returns>List&lt;MailRow&gt;</returns>
        public List<MailRow> GetMailList ()
        {
    
            var path = "/mail";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<MailRow>) ApiClient.Deserialize(response.Content, typeof(List<MailRow>), response.Headers);
        }
    
        /// <summary>
        /// Resend Mail Welcome Email Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetMailWelcomeEmail (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetMailWelcomeEmail");
    
            var path = "/mail/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetMailWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Mail Ordering Information Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
        /// </summary>
        /// <returns>MailOrder</returns>
        public MailOrder GetNewMail ()
        {
    
            var path = "/mail/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewMail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewMail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailOrder) ApiClient.Deserialize(response.Content, typeof(MailOrder), response.Headers);
        }
    
        /// <summary>
        /// List Deny Rules Returns a listing of all the deny block rules configured for this mail service.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>List&lt;DenyRuleRecord&gt;</returns>
        public List<DenyRuleRecord> GetRules (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetRules");
    
            var path = "/mail/{id}/rules";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetRules: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetRules: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<DenyRuleRecord>) ApiClient.Deserialize(response.Content, typeof(List<DenyRuleRecord>), response.Headers);
        }
    
        /// <summary>
        /// Get Mail Usage Statistics Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="time">The timeframe for the statistics.</param>
        /// <returns>MailStatsType</returns>
        public MailStatsType GetStats (int? id, string time)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetStats");
    
            var path = "/mail/{id}/stats";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (time != null) queryParams.Add("time", ApiClient.ParameterToString(time)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetStats: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetStats: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailStatsType) ApiClient.Deserialize(response.Content, typeof(MailStatsType), response.Headers);
        }
    
        /// <summary>
        /// Cancel Mail Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>InlineResponse2008</returns>
        public InlineResponse2008 MailCancel (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling MailCancel");
    
            var path = "/mail/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling MailCancel: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling MailCancel: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2008) ApiClient.Deserialize(response.Content, typeof(InlineResponse2008), response.Headers);
        }
    
        /// <summary>
        /// Delist a Blocked Sender Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostMailDelist (MailDelistRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostMailDelist");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostMailDelist");
    
            var path = "/mail/{id}/delist";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostMailDelist: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostMailDelist: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Delist a Blocked Sender Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.
        /// </summary>
        /// <param name="unblock"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostMailDelist (string unblock, int? id)
        {
            // verify the required parameter 'unblock' is set
            if (unblock == null) throw new ApiException(400, "Missing required parameter 'unblock' when calling PostMailDelist");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostMailDelist");
    
            var path = "/mail/{id}/delist";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (unblock != null) formParams.Add("unblock", ApiClient.ParameterToString(unblock)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostMailDelist: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostMailDelist: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Validate Mail Order Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
        /// </summary>
        /// <returns></returns>
        public void PutMail ()
        {
    
            var path = "/mail/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PutMail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutMail: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Reset Mail Password Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse ResetMailPassword (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ResetMailPassword");
    
            var path = "/mail/{id}/reset_password";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ResetMailPassword: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ResetMailPassword: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Send Email with Advanced Options Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse SendAdvMail (SendMailAdv body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling SendAdvMail");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling SendAdvMail");
    
            var path = "/mail/{id}/advsend";
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
                throw new ApiException ((int)response.StatusCode, "Error calling SendAdvMail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling SendAdvMail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Send Email with Advanced Options Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.
        /// </summary>
        /// <param name="subject"></param>
        /// <param name="body"></param>
        /// <param name="from"></param>
        /// <param name="to"></param>
        /// <param name="replyto"></param>
        /// <param name="cc"></param>
        /// <param name="bcc"></param>
        /// <param name="attachments"></param>
        /// <param name="id2"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse SendAdvMail (string subject, string body, EmailAddressName from, List<EmailAddressName> to, List<EmailAddressName> replyto, List<EmailAddressName> cc, List<EmailAddressName> bcc, List<MailAttachment> attachments, long? id2, int? id)
        {
            // verify the required parameter 'subject' is set
            if (subject == null) throw new ApiException(400, "Missing required parameter 'subject' when calling SendAdvMail");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling SendAdvMail");
            // verify the required parameter 'from' is set
            if (from == null) throw new ApiException(400, "Missing required parameter 'from' when calling SendAdvMail");
            // verify the required parameter 'to' is set
            if (to == null) throw new ApiException(400, "Missing required parameter 'to' when calling SendAdvMail");
            // verify the required parameter 'replyto' is set
            if (replyto == null) throw new ApiException(400, "Missing required parameter 'replyto' when calling SendAdvMail");
            // verify the required parameter 'cc' is set
            if (cc == null) throw new ApiException(400, "Missing required parameter 'cc' when calling SendAdvMail");
            // verify the required parameter 'bcc' is set
            if (bcc == null) throw new ApiException(400, "Missing required parameter 'bcc' when calling SendAdvMail");
            // verify the required parameter 'attachments' is set
            if (attachments == null) throw new ApiException(400, "Missing required parameter 'attachments' when calling SendAdvMail");
            // verify the required parameter 'id2' is set
            if (id2 == null) throw new ApiException(400, "Missing required parameter 'id2' when calling SendAdvMail");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling SendAdvMail");
    
            var path = "/mail/{id}/advsend";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (subject != null) formParams.Add("subject", ApiClient.ParameterToString(subject)); // form parameter
if (body != null) formParams.Add("body", ApiClient.ParameterToString(body)); // form parameter
if (from != null) formParams.Add("from", ApiClient.ParameterToString(from)); // form parameter
if (to != null) formParams.Add("to", ApiClient.ParameterToString(to)); // form parameter
if (replyto != null) formParams.Add("replyto", ApiClient.ParameterToString(replyto)); // form parameter
if (cc != null) formParams.Add("cc", ApiClient.ParameterToString(cc)); // form parameter
if (bcc != null) formParams.Add("bcc", ApiClient.ParameterToString(bcc)); // form parameter
if (attachments != null) formParams.Add("attachments", ApiClient.ParameterToString(attachments)); // form parameter
if (id != null) formParams.Add("id", ApiClient.ParameterToString(id)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling SendAdvMail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling SendAdvMail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Send Email Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse SendMail (SendMail body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling SendMail");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling SendMail");
    
            var path = "/mail/{id}/send";
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
                throw new ApiException ((int)response.StatusCode, "Error calling SendMail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling SendMail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Send Email Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.
        /// </summary>
        /// <param name="to"></param>
        /// <param name="from"></param>
        /// <param name="subject"></param>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>GenericResponse</returns>
        public GenericResponse SendMail (string to, string from, string subject, string body, int? id)
        {
            // verify the required parameter 'to' is set
            if (to == null) throw new ApiException(400, "Missing required parameter 'to' when calling SendMail");
            // verify the required parameter 'from' is set
            if (from == null) throw new ApiException(400, "Missing required parameter 'from' when calling SendMail");
            // verify the required parameter 'subject' is set
            if (subject == null) throw new ApiException(400, "Missing required parameter 'subject' when calling SendMail");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling SendMail");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling SendMail");
    
            var path = "/mail/{id}/send";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (to != null) formParams.Add("to", ApiClient.ParameterToString(to)); // form parameter
if (from != null) formParams.Add("from", ApiClient.ParameterToString(from)); // form parameter
if (subject != null) formParams.Add("subject", ApiClient.ParameterToString(subject)); // form parameter
if (body != null) formParams.Add("body", ApiClient.ParameterToString(body)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling SendMail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling SendMail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (GenericResponse) ApiClient.Deserialize(response.Content, typeof(GenericResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Mail Alert Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateMailAlert (MailAlertUpdateRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateMailAlert");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateMailAlert");
    
            var path = "/mail/{id}/alerts";
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
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateMailAlert: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateMailAlert: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Mail Alert Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.
        /// </summary>
        /// <param name="alertId"></param>
        /// <param name="type"></param>
        /// <param name="value"></param>
        /// <param name="to"></param>
        /// <param name="enabled"></param>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateMailAlert (int? alertId, string type, string value, string to, string enabled, int? id)
        {
            // verify the required parameter 'alertId' is set
            if (alertId == null) throw new ApiException(400, "Missing required parameter 'alertId' when calling UpdateMailAlert");
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling UpdateMailAlert");
            // verify the required parameter 'value' is set
            if (value == null) throw new ApiException(400, "Missing required parameter 'value' when calling UpdateMailAlert");
            // verify the required parameter 'to' is set
            if (to == null) throw new ApiException(400, "Missing required parameter 'to' when calling UpdateMailAlert");
            // verify the required parameter 'enabled' is set
            if (enabled == null) throw new ApiException(400, "Missing required parameter 'enabled' when calling UpdateMailAlert");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateMailAlert");
    
            var path = "/mail/{id}/alerts";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (alertId != null) formParams.Add("alert_id", ApiClient.ParameterToString(alertId)); // form parameter
if (type != null) formParams.Add("type", ApiClient.ParameterToString(type)); // form parameter
if (value != null) formParams.Add("value", ApiClient.ParameterToString(value)); // form parameter
if (to != null) formParams.Add("to", ApiClient.ParameterToString(to)); // form parameter
if (enabled != null) formParams.Add("enabled", ApiClient.ParameterToString(enabled)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateMailAlert: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateMailAlert: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Mail Order Updates mail service metadata for the order, such as stored settings or account details.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <returns></returns>
        public void UpdateMailInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateMailInfo");
    
            var path = "/mail/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateMailInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateMailInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// View Mail Log Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
        /// </summary>
        /// <param name="id">The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.</param>
        /// <param name="id">The ID of your mail order this will be sent through.</param>
        /// <param name="origin">originating ip address sending mail</param>
        /// <param name="mx">mx record mail was sent to</param>
        /// <param name="from">from email address</param>
        /// <param name="to">to/destination email address</param>
        /// <param name="subject">subject containing this string</param>
        /// <param name="mailid">mail id</param>
        /// <param name="skip">number of records to skip for pagination</param>
        /// <param name="limit">maximum number of records to return</param>
        /// <param name="startDate">earliest date to get emails in unix timestamp format</param>
        /// <param name="endDate">Latest date to get emails in unix timestamp format.</param>
        /// <param name="delivered">Filter emails by whether or not they were delivered.</param>
        /// <returns>MailLog</returns>
        public MailLog ViewMailLog (int? id, long? id, string origin, string mx, string from, string to, string subject, string mailid, int? skip, int? limit, long? startDate, long? endDate, string delivered)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ViewMailLog");
    
            var path = "/mail/{id}/log";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (id != null) queryParams.Add("id", ApiClient.ParameterToString(id)); // query parameter
 if (origin != null) queryParams.Add("origin", ApiClient.ParameterToString(origin)); // query parameter
 if (mx != null) queryParams.Add("mx", ApiClient.ParameterToString(mx)); // query parameter
 if (from != null) queryParams.Add("from", ApiClient.ParameterToString(from)); // query parameter
 if (to != null) queryParams.Add("to", ApiClient.ParameterToString(to)); // query parameter
 if (subject != null) queryParams.Add("subject", ApiClient.ParameterToString(subject)); // query parameter
 if (mailid != null) queryParams.Add("mailid", ApiClient.ParameterToString(mailid)); // query parameter
 if (skip != null) queryParams.Add("skip", ApiClient.ParameterToString(skip)); // query parameter
 if (limit != null) queryParams.Add("limit", ApiClient.ParameterToString(limit)); // query parameter
 if (startDate != null) queryParams.Add("startDate", ApiClient.ParameterToString(startDate)); // query parameter
 if (endDate != null) queryParams.Add("endDate", ApiClient.ParameterToString(endDate)); // query parameter
 if (delivered != null) queryParams.Add("delivered", ApiClient.ParameterToString(delivered)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling ViewMailLog: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ViewMailLog: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MailLog) ApiClient.Deserialize(response.Content, typeof(MailLog), response.Headers);
        }
    
    }
}
