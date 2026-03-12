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
    public interface ITicketsApi
    {
        /// <summary>
        /// Create New Ticket Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TicketNewResponse</returns>
        TicketNewResponse AddNewTicket (TicketNew body);
        /// <summary>
        /// Create New Ticket Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
        /// </summary>
        /// <param name="subject"></param>
        /// <param name="body"></param>
        /// <param name="serviceId"></param>
        /// <param name="serviceModule"></param>
        /// <returns>TicketNewResponse</returns>
        TicketNewResponse AddNewTicket (string subject, string body, int? serviceId, string serviceModule);
        /// <summary>
        /// Close Ticket Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
        /// </summary>
        /// <param name="id">Ticket ID</param>
        /// <returns>CloseTicketResponseSchema</returns>
        CloseTicketResponseSchema CloseTicket (string id);
        /// <summary>
        /// Close Ticket Closes the support ticket.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        ViewTicketResponse DeleteTicketInfo (decimal? id);
        /// <summary>
        /// Gets Information for creating a new ticket. Returns the form data needed to create a new support ticket, such as available departments and service categories.
        /// </summary>
        /// <returns></returns>
        void GetNewTicket ();
        /// <summary>
        /// Get Ticket Information Returns the full details of a support ticket including its history of replies.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        ViewTicketResponse GetTicketInfo (decimal? id);
        /// <summary>
        /// List Support Tickets Returns a paginated list of support tickets on the account. Filter by status and time period.
        /// </summary>
        /// <param name="page">Page number for paginated results.</param>
        /// <param name="period">How far back to show tickets from. Value is in days.</param>
        /// <param name="view">The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.</param>
        /// <returns>Tickets</returns>
        Tickets GetTicketsList (int? page, string period, string view);
        /// <summary>
        /// Reply To Ticket Adds a reply to an existing support ticket.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        ViewTicketResponse PostTicketInfo (decimal? id);
        /// <summary>
        /// Search Support Tickets Searches support tickets by email, subject, or ticket mask ID.
        /// </summary>
        /// <returns>Tickets</returns>
        Tickets PostTicketsList ();
        /// <summary>
        /// Update Ticket Updates a support ticket&#x27;s properties such as subject or status.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        ViewTicketResponse PutTicketInfo (decimal? id);
        /// <summary>
        /// Reply Ticket Posts a reply to an existing support ticket thread.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="body"></param>
        /// <returns>ReplyTicketResponseSchema</returns>
        ReplyTicketResponseSchema ReplyTicket (decimal? id, ReplyTicketRequest body);
        /// <summary>
        /// Reply Ticket Posts a reply to an existing support ticket thread.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="content"></param>
        /// <returns>ReplyTicketResponseSchema</returns>
        ReplyTicketResponseSchema ReplyTicket (decimal? id, string content);
        /// <summary>
        /// Update Ticket Updates a support ticket&#x27;s subject or body content.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="body"></param>
        /// <returns>UpdateTicketResponseSchema</returns>
        UpdateTicketResponseSchema UpdateTicketInfo (decimal? id, UpdateTicket body);
        /// <summary>
        /// Update Ticket Updates a support ticket&#x27;s subject or body content.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="ip"></param>
        /// <param name="ipAddress"></param>
        /// <param name="customerServerAccess"></param>
        /// <param name="rootPassword"></param>
        /// <param name="sudoUsername"></param>
        /// <param name="sudoPassword"></param>
        /// <param name="port"></param>
        /// <returns>UpdateTicketResponseSchema</returns>
        UpdateTicketResponseSchema UpdateTicketInfo (decimal? id, string ip, string ipAddress, string customerServerAccess, string rootPassword, string sudoUsername, string sudoPassword, int? port);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class TicketsApi : ITicketsApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TicketsApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public TicketsApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="TicketsApi"/> class.
        /// </summary>
        /// <returns></returns>
        public TicketsApi(String basePath)
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
        /// Create New Ticket Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TicketNewResponse</returns>
        public TicketNewResponse AddNewTicket (TicketNew body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddNewTicket");
    
            var path = "/tickets/new";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddNewTicket: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddNewTicket: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TicketNewResponse) ApiClient.Deserialize(response.Content, typeof(TicketNewResponse), response.Headers);
        }
    
        /// <summary>
        /// Create New Ticket Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
        /// </summary>
        /// <param name="subject"></param>
        /// <param name="body"></param>
        /// <param name="serviceId"></param>
        /// <param name="serviceModule"></param>
        /// <returns>TicketNewResponse</returns>
        public TicketNewResponse AddNewTicket (string subject, string body, int? serviceId, string serviceModule)
        {
            // verify the required parameter 'subject' is set
            if (subject == null) throw new ApiException(400, "Missing required parameter 'subject' when calling AddNewTicket");
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddNewTicket");
            // verify the required parameter 'serviceId' is set
            if (serviceId == null) throw new ApiException(400, "Missing required parameter 'serviceId' when calling AddNewTicket");
            // verify the required parameter 'serviceModule' is set
            if (serviceModule == null) throw new ApiException(400, "Missing required parameter 'serviceModule' when calling AddNewTicket");
    
            var path = "/tickets/new";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (subject != null) formParams.Add("subject", ApiClient.ParameterToString(subject)); // form parameter
if (body != null) formParams.Add("body", ApiClient.ParameterToString(body)); // form parameter
if (serviceId != null) formParams.Add("service_id", ApiClient.ParameterToString(serviceId)); // form parameter
if (serviceModule != null) formParams.Add("service_module", ApiClient.ParameterToString(serviceModule)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddNewTicket: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddNewTicket: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TicketNewResponse) ApiClient.Deserialize(response.Content, typeof(TicketNewResponse), response.Headers);
        }
    
        /// <summary>
        /// Close Ticket Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
        /// </summary>
        /// <param name="id">Ticket ID</param>
        /// <returns>CloseTicketResponseSchema</returns>
        public CloseTicketResponseSchema CloseTicket (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CloseTicket");
    
            var path = "/tickets/{id}/close";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CloseTicket: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CloseTicket: " + response.ErrorMessage, response.ErrorMessage);
    
            return (CloseTicketResponseSchema) ApiClient.Deserialize(response.Content, typeof(CloseTicketResponseSchema), response.Headers);
        }
    
        /// <summary>
        /// Close Ticket Closes the support ticket.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        public ViewTicketResponse DeleteTicketInfo (decimal? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteTicketInfo");
    
            var path = "/tickets/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteTicketInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteTicketInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ViewTicketResponse) ApiClient.Deserialize(response.Content, typeof(ViewTicketResponse), response.Headers);
        }
    
        /// <summary>
        /// Gets Information for creating a new ticket. Returns the form data needed to create a new support ticket, such as available departments and service categories.
        /// </summary>
        /// <returns></returns>
        public void GetNewTicket ()
        {
    
            var path = "/tickets/new";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewTicket: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewTicket: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Ticket Information Returns the full details of a support ticket including its history of replies.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        public ViewTicketResponse GetTicketInfo (decimal? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetTicketInfo");
    
            var path = "/tickets/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetTicketInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetTicketInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ViewTicketResponse) ApiClient.Deserialize(response.Content, typeof(ViewTicketResponse), response.Headers);
        }
    
        /// <summary>
        /// List Support Tickets Returns a paginated list of support tickets on the account. Filter by status and time period.
        /// </summary>
        /// <param name="page">Page number for paginated results.</param>
        /// <param name="period">How far back to show tickets from. Value is in days.</param>
        /// <param name="view">The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.</param>
        /// <returns>Tickets</returns>
        public Tickets GetTicketsList (int? page, string period, string view)
        {
    
            var path = "/tickets";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (page != null) queryParams.Add("page", ApiClient.ParameterToString(page)); // query parameter
 if (period != null) queryParams.Add("period", ApiClient.ParameterToString(period)); // query parameter
 if (view != null) queryParams.Add("view", ApiClient.ParameterToString(view)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetTicketsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetTicketsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Tickets) ApiClient.Deserialize(response.Content, typeof(Tickets), response.Headers);
        }
    
        /// <summary>
        /// Reply To Ticket Adds a reply to an existing support ticket.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        public ViewTicketResponse PostTicketInfo (decimal? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostTicketInfo");
    
            var path = "/tickets/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostTicketInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostTicketInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ViewTicketResponse) ApiClient.Deserialize(response.Content, typeof(ViewTicketResponse), response.Headers);
        }
    
        /// <summary>
        /// Search Support Tickets Searches support tickets by email, subject, or ticket mask ID.
        /// </summary>
        /// <returns>Tickets</returns>
        public Tickets PostTicketsList ()
        {
    
            var path = "/tickets";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostTicketsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostTicketsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Tickets) ApiClient.Deserialize(response.Content, typeof(Tickets), response.Headers);
        }
    
        /// <summary>
        /// Update Ticket Updates a support ticket&#x27;s properties such as subject or status.
        /// </summary>
        /// <param name="id">Ticket ID number.</param>
        /// <returns>ViewTicketResponse</returns>
        public ViewTicketResponse PutTicketInfo (decimal? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PutTicketInfo");
    
            var path = "/tickets/{id}";
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
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PutTicketInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutTicketInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ViewTicketResponse) ApiClient.Deserialize(response.Content, typeof(ViewTicketResponse), response.Headers);
        }
    
        /// <summary>
        /// Reply Ticket Posts a reply to an existing support ticket thread.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="body"></param>
        /// <returns>ReplyTicketResponseSchema</returns>
        public ReplyTicketResponseSchema ReplyTicket (decimal? id, ReplyTicketRequest body)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ReplyTicket");
    
            var path = "/tickets/{id}/reply";
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
                throw new ApiException ((int)response.StatusCode, "Error calling ReplyTicket: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ReplyTicket: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ReplyTicketResponseSchema) ApiClient.Deserialize(response.Content, typeof(ReplyTicketResponseSchema), response.Headers);
        }
    
        /// <summary>
        /// Reply Ticket Posts a reply to an existing support ticket thread.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="content"></param>
        /// <returns>ReplyTicketResponseSchema</returns>
        public ReplyTicketResponseSchema ReplyTicket (decimal? id, string content)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling ReplyTicket");
    
            var path = "/tickets/{id}/reply";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (content != null) formParams.Add("content", ApiClient.ParameterToString(content)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling ReplyTicket: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling ReplyTicket: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ReplyTicketResponseSchema) ApiClient.Deserialize(response.Content, typeof(ReplyTicketResponseSchema), response.Headers);
        }
    
        /// <summary>
        /// Update Ticket Updates a support ticket&#x27;s subject or body content.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="body"></param>
        /// <returns>UpdateTicketResponseSchema</returns>
        public UpdateTicketResponseSchema UpdateTicketInfo (decimal? id, UpdateTicket body)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateTicketInfo");
    
            var path = "/tickets/{id}/update";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateTicketInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateTicketInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (UpdateTicketResponseSchema) ApiClient.Deserialize(response.Content, typeof(UpdateTicketResponseSchema), response.Headers);
        }
    
        /// <summary>
        /// Update Ticket Updates a support ticket&#x27;s subject or body content.
        /// </summary>
        /// <param name="id">The ticket ID number.</param>
        /// <param name="ip"></param>
        /// <param name="ipAddress"></param>
        /// <param name="customerServerAccess"></param>
        /// <param name="rootPassword"></param>
        /// <param name="sudoUsername"></param>
        /// <param name="sudoPassword"></param>
        /// <param name="port"></param>
        /// <returns>UpdateTicketResponseSchema</returns>
        public UpdateTicketResponseSchema UpdateTicketInfo (decimal? id, string ip, string ipAddress, string customerServerAccess, string rootPassword, string sudoUsername, string sudoPassword, int? port)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateTicketInfo");
    
            var path = "/tickets/{id}/update";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (ip != null) formParams.Add("ip", ApiClient.ParameterToString(ip)); // form parameter
if (ipAddress != null) formParams.Add("ip_address", ApiClient.ParameterToString(ipAddress)); // form parameter
if (customerServerAccess != null) formParams.Add("customer_server_access", ApiClient.ParameterToString(customerServerAccess)); // form parameter
if (rootPassword != null) formParams.Add("root_password", ApiClient.ParameterToString(rootPassword)); // form parameter
if (sudoUsername != null) formParams.Add("sudo_username", ApiClient.ParameterToString(sudoUsername)); // form parameter
if (sudoPassword != null) formParams.Add("sudo_password", ApiClient.ParameterToString(sudoPassword)); // form parameter
if (port != null) formParams.Add("port", ApiClient.ParameterToString(port)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateTicketInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateTicketInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (UpdateTicketResponseSchema) ApiClient.Deserialize(response.Content, typeof(UpdateTicketResponseSchema), response.Headers);
        }
    
    }
}
