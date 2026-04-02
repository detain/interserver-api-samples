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
    public interface IDNSApi
    {
        /// <summary>
        /// Create DNS Domain Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
        /// </summary>
        /// <param name="domain"></param>
        /// <param name="ip"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddDnsDomain (string domain, string ip);
        /// <summary>
        /// Create DNS Domain Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddDnsDomain (DnsNewDomain body);
        /// <summary>
        /// Add DNS Record to Domain Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="type"></param>
        /// <param name="content"></param>
        /// <param name="ttl"></param>
        /// <param name="prio"></param>
        /// <param name="id">The DNS Domain ID.</param>
        /// <returns></returns>
        void AddDnsRecord (string name, DnsRecordType type, string content, int? ttl, int? prio, string id);
        /// <summary>
        /// Add DNS Record to Domain Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The DNS Domain ID.</param>
        /// <returns></returns>
        void AddDnsRecord (DnsNewRecord body, string id);
        /// <summary>
        /// Delete DNS Domain Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
        /// </summary>
        /// <param name="id">The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteDnsDomain (string id);
        /// <summary>
        /// Delete DNS Record Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.
        /// </summary>
        /// <param name="domainId">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <param name="recordId">The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteDnsRecord (int? domainId, int? recordId);
        /// <summary>
        /// List Domain DNS Records Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.
        /// </summary>
        /// <param name="id">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <returns>List&lt;DnsRecord&gt;</returns>
        List<DnsRecord> GetDnsDomain (int? id);
        /// <summary>
        /// List DNS Domains Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.
        /// </summary>
        /// <returns>List&lt;DnsListItem&gt;</returns>
        List<DnsListItem> GetDnsList ();
        /// <summary>
        /// Update DNS Record Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="type"></param>
        /// <param name="content"></param>
        /// <param name="ttl"></param>
        /// <param name="prio"></param>
        /// <param name="disabled"></param>
        /// <param name="ordername"></param>
        /// <param name="auth"></param>
        /// <param name="domainId">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <param name="recordId">The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateDnsRecord (string name, DnsRecordType type, string content, string ttl, string prio, string disabled, string ordername, string auth, int? domainId, int? recordId);
        /// <summary>
        /// Update DNS Record Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
        /// </summary>
        /// <param name="body">The request data to update a dns record.</param>
        /// <param name="domainId">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <param name="recordId">The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateDnsRecord (DnsUpdateRecord body, int? domainId, int? recordId);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class DNSApi : IDNSApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="DNSApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public DNSApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="DNSApi"/> class.
        /// </summary>
        /// <returns></returns>
        public DNSApi(String basePath)
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
        /// Create DNS Domain Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
        /// </summary>
        /// <param name="domain"></param>
        /// <param name="ip"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddDnsDomain (string domain, string ip)
        {
            // verify the required parameter 'domain' is set
            if (domain == null) throw new ApiException(400, "Missing required parameter 'domain' when calling AddDnsDomain");
            // verify the required parameter 'ip' is set
            if (ip == null) throw new ApiException(400, "Missing required parameter 'ip' when calling AddDnsDomain");
    
            var path = "/dns";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (domain != null) formParams.Add("domain", ApiClient.ParameterToString(domain)); // form parameter
if (ip != null) formParams.Add("ip", ApiClient.ParameterToString(ip)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsDomain: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsDomain: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Create DNS Domain Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddDnsDomain (DnsNewDomain body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddDnsDomain");
    
            var path = "/dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsDomain: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsDomain: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add DNS Record to Domain Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="type"></param>
        /// <param name="content"></param>
        /// <param name="ttl"></param>
        /// <param name="prio"></param>
        /// <param name="id">The DNS Domain ID.</param>
        /// <returns></returns>
        public void AddDnsRecord (string name, DnsRecordType type, string content, int? ttl, int? prio, string id)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling AddDnsRecord");
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling AddDnsRecord");
            // verify the required parameter 'content' is set
            if (content == null) throw new ApiException(400, "Missing required parameter 'content' when calling AddDnsRecord");
            // verify the required parameter 'ttl' is set
            if (ttl == null) throw new ApiException(400, "Missing required parameter 'ttl' when calling AddDnsRecord");
            // verify the required parameter 'prio' is set
            if (prio == null) throw new ApiException(400, "Missing required parameter 'prio' when calling AddDnsRecord");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddDnsRecord");
    
            var path = "/dns/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (name != null) formParams.Add("name", ApiClient.ParameterToString(name)); // form parameter
if (type != null) formParams.Add("type", ApiClient.ParameterToString(type)); // form parameter
if (content != null) formParams.Add("content", ApiClient.ParameterToString(content)); // form parameter
if (ttl != null) formParams.Add("ttl", ApiClient.ParameterToString(ttl)); // form parameter
if (prio != null) formParams.Add("prio", ApiClient.ParameterToString(prio)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsRecord: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsRecord: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Add DNS Record to Domain Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The DNS Domain ID.</param>
        /// <returns></returns>
        public void AddDnsRecord (DnsNewRecord body, string id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddDnsRecord");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddDnsRecord");
    
            var path = "/dns/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsRecord: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDnsRecord: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Delete DNS Domain Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
        /// </summary>
        /// <param name="id">The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteDnsDomain (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteDnsDomain");
    
            var path = "/dns/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDnsDomain: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDnsDomain: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete DNS Record Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.
        /// </summary>
        /// <param name="domainId">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <param name="recordId">The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteDnsRecord (int? domainId, int? recordId)
        {
            // verify the required parameter 'domainId' is set
            if (domainId == null) throw new ApiException(400, "Missing required parameter 'domainId' when calling DeleteDnsRecord");
            // verify the required parameter 'recordId' is set
            if (recordId == null) throw new ApiException(400, "Missing required parameter 'recordId' when calling DeleteDnsRecord");
    
            var path = "/dns/{domainId}/{recordId}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "domainId" + "}", ApiClient.ParameterToString(domainId));
path = path.Replace("{" + "recordId" + "}", ApiClient.ParameterToString(recordId));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDnsRecord: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDnsRecord: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// List Domain DNS Records Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.
        /// </summary>
        /// <param name="id">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <returns>List&lt;DnsRecord&gt;</returns>
        public List<DnsRecord> GetDnsDomain (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDnsDomain");
    
            var path = "/dns/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDnsDomain: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDnsDomain: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<DnsRecord>) ApiClient.Deserialize(response.Content, typeof(List<DnsRecord>), response.Headers);
        }
    
        /// <summary>
        /// List DNS Domains Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.
        /// </summary>
        /// <returns>List&lt;DnsListItem&gt;</returns>
        public List<DnsListItem> GetDnsList ()
        {
    
            var path = "/dns";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDnsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDnsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<DnsListItem>) ApiClient.Deserialize(response.Content, typeof(List<DnsListItem>), response.Headers);
        }
    
        /// <summary>
        /// Update DNS Record Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="type"></param>
        /// <param name="content"></param>
        /// <param name="ttl"></param>
        /// <param name="prio"></param>
        /// <param name="disabled"></param>
        /// <param name="ordername"></param>
        /// <param name="auth"></param>
        /// <param name="domainId">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <param name="recordId">The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateDnsRecord (string name, DnsRecordType type, string content, string ttl, string prio, string disabled, string ordername, string auth, int? domainId, int? recordId)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling UpdateDnsRecord");
            // verify the required parameter 'type' is set
            if (type == null) throw new ApiException(400, "Missing required parameter 'type' when calling UpdateDnsRecord");
            // verify the required parameter 'content' is set
            if (content == null) throw new ApiException(400, "Missing required parameter 'content' when calling UpdateDnsRecord");
            // verify the required parameter 'ttl' is set
            if (ttl == null) throw new ApiException(400, "Missing required parameter 'ttl' when calling UpdateDnsRecord");
            // verify the required parameter 'prio' is set
            if (prio == null) throw new ApiException(400, "Missing required parameter 'prio' when calling UpdateDnsRecord");
            // verify the required parameter 'disabled' is set
            if (disabled == null) throw new ApiException(400, "Missing required parameter 'disabled' when calling UpdateDnsRecord");
            // verify the required parameter 'ordername' is set
            if (ordername == null) throw new ApiException(400, "Missing required parameter 'ordername' when calling UpdateDnsRecord");
            // verify the required parameter 'auth' is set
            if (auth == null) throw new ApiException(400, "Missing required parameter 'auth' when calling UpdateDnsRecord");
            // verify the required parameter 'domainId' is set
            if (domainId == null) throw new ApiException(400, "Missing required parameter 'domainId' when calling UpdateDnsRecord");
            // verify the required parameter 'recordId' is set
            if (recordId == null) throw new ApiException(400, "Missing required parameter 'recordId' when calling UpdateDnsRecord");
    
            var path = "/dns/{domainId}/{recordId}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "domainId" + "}", ApiClient.ParameterToString(domainId));
path = path.Replace("{" + "recordId" + "}", ApiClient.ParameterToString(recordId));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (name != null) formParams.Add("name", ApiClient.ParameterToString(name)); // form parameter
if (type != null) formParams.Add("type", ApiClient.ParameterToString(type)); // form parameter
if (content != null) formParams.Add("content", ApiClient.ParameterToString(content)); // form parameter
if (ttl != null) formParams.Add("ttl", ApiClient.ParameterToString(ttl)); // form parameter
if (prio != null) formParams.Add("prio", ApiClient.ParameterToString(prio)); // form parameter
if (disabled != null) formParams.Add("disabled", ApiClient.ParameterToString(disabled)); // form parameter
if (ordername != null) formParams.Add("ordername", ApiClient.ParameterToString(ordername)); // form parameter
if (auth != null) formParams.Add("auth", ApiClient.ParameterToString(auth)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDnsRecord: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDnsRecord: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update DNS Record Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
        /// </summary>
        /// <param name="body">The request data to update a dns record.</param>
        /// <param name="domainId">The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain.</param>
        /// <param name="recordId">The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateDnsRecord (DnsUpdateRecord body, int? domainId, int? recordId)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateDnsRecord");
            // verify the required parameter 'domainId' is set
            if (domainId == null) throw new ApiException(400, "Missing required parameter 'domainId' when calling UpdateDnsRecord");
            // verify the required parameter 'recordId' is set
            if (recordId == null) throw new ApiException(400, "Missing required parameter 'recordId' when calling UpdateDnsRecord");
    
            var path = "/dns/{domainId}/{recordId}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "domainId" + "}", ApiClient.ParameterToString(domainId));
path = path.Replace("{" + "recordId" + "}", ApiClient.ParameterToString(recordId));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDnsRecord: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDnsRecord: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
    }
}
