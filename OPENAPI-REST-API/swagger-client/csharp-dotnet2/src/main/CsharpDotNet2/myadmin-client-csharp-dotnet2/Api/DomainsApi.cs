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
    public interface IDomainsApi
    {
        /// <summary>
        /// Place Domain Order Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
        /// </summary>
        /// <returns></returns>
        void AddDomain ();
        /// <summary>
        /// Add Domain DNSSEC Records Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddDomainDnssec (DomainDnssecRequest body, int? id);
        /// <summary>
        /// Add Domain DNSSEC Records Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
        /// </summary>
        /// <param name="algorithm"></param>
        /// <param name="digestType"></param>
        /// <param name="digest"></param>
        /// <param name="keyTag"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddDomainDnssec (List<int?> algorithm, List<int?> digestType, List<string> digest, List<int?> keyTag, int? id);
        /// <summary>
        /// Add Registered Nameserver Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        TextResponse AddDomainNameserver (DomainNameserverPostRequest body, int? id);
        /// <summary>
        /// Add Registered Nameserver Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="ipAddress"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        TextResponse AddDomainNameserver (string name, string ipAddress, int? id);
        /// <summary>
        /// Cancel Domain Order Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>InlineResponse2002</returns>
        InlineResponse2002 CancelDomain (int? id);
        /// <summary>
        /// Remove Domain DNSSEC Records Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <param name="action">Set to &#x60;delete&#x60; to remove all DNSSEC records.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteDomainDnssec (int? id, string action);
        /// <summary>
        /// Delete Registered Nameserver Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <param name="index">The index of the registered nameserver from the registered nameservers list to delete.  </param>
        /// <returns>TextResponse</returns>
        TextResponse DeleteDomainNameserver (int? id, int? index);
        /// <summary>
        /// Get Domain Contact Details Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>DomainContactDetails</returns>
        DomainContactDetails GetDomainContact (int? id);
        /// <summary>
        /// Get Domain DNSSEC Records Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>DomainDnssecRecords</returns>
        DomainDnssecRecords GetDomainDnssec (int? id);
        /// <summary>
        /// Get Domain Order Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>Domain</returns>
        Domain GetDomainInfo (int? id);
        /// <summary>
        /// Get Domain Invoices Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        ChargeInvoiceRows GetDomainInvoices (int? id);
        /// <summary>
        /// Lookup Domain Availability and Pricing Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
        /// </summary>
        /// <param name="name">The full domain name to look up (for example &#x60;example.com&#x60;).</param>
        /// <returns>DomainLookupResponse</returns>
        DomainLookupResponse GetDomainLookup (string name);
        /// <summary>
        /// List Registered Nameservers Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>DomainNameserverGetResponse</returns>
        DomainNameserverGetResponse GetDomainNameservers (int? id);
        /// <summary>
        /// Get Domain Order Fields Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
        /// </summary>
        /// <param name="domain">The fully qualified domain name (e.g. &#x60;example.com&#x60;).</param>
        /// <param name="regType">The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.</param>
        /// <returns></returns>
        void GetDomainOrderFields (string domain, string regType);
        /// <summary>
        /// Get Domain Order Search Results Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
        /// </summary>
        /// <param name="domain">The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).</param>
        /// <returns></returns>
        void GetDomainOrderSearchResults (string domain);
        /// <summary>
        /// Start Domain Renewal Flow Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetDomainRenewal (int? id);
        /// <summary>
        /// Search Domain Suggestions Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
        /// </summary>
        /// <param name="name">The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).</param>
        /// <returns>DomainSearchResponse</returns>
        DomainSearchResponse GetDomainSearch (string name);
        /// <summary>
        /// Start Domain Transfer Flow Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetDomainTransfer (int? id);
        /// <summary>
        /// Get Whois Privacy Status Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetDomainWhoisPrivacy (int? id);
        /// <summary>
        /// List Domain Orders Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
        /// </summary>
        /// <returns>List&lt;DomainRow&gt;</returns>
        List<DomainRow> GetDomainsList ();
        /// <summary>
        /// Resend Domain Welcome Email Resends the welcome email for the domain service. The email contains registration details and management instructions.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetDomainsWelcomeEmail (int? id);
        /// <summary>
        /// Get Domain Ordering Information Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
        /// </summary>
        /// <returns>DomainOrder</returns>
        DomainOrder GetNewDomain ();
        /// <summary>
        /// Validate Domain Order Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
        /// </summary>
        /// <returns></returns>
        void PatchDomains ();
        /// <summary>
        /// Request Domain Renewal Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostDomainRenewal (int? id);
        /// <summary>
        /// Request Domain Transfer Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostDomainTransfer (int? id);
        /// <summary>
        /// Domain Order Search Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
        /// </summary>
        /// <returns></returns>
        void PutDomains ();
        /// <summary>
        /// Update Domain Contact Details Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateDomainContact (DomainContactDetails body, int? id);
        /// <summary>
        /// Update Domain Contact Details Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
        /// </summary>
        /// <param name="status"></param>
        /// <param name="state"></param>
        /// <param name="orgName"></param>
        /// <param name="country"></param>
        /// <param name="postalCode"></param>
        /// <param name="email"></param>
        /// <param name="fax"></param>
        /// <param name="address2"></param>
        /// <param name="address3"></param>
        /// <param name="address1"></param>
        /// <param name="city"></param>
        /// <param name="phone"></param>
        /// <param name="firstName"></param>
        /// <param name="lastName"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateDomainContact (string status, string state, string orgName, string country, string postalCode, string email, string fax, string address2, string address3, string address1, string city, string phone, string firstName, string lastName, int? id);
        /// <summary>
        /// Update Domain Order Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns></returns>
        void UpdateDomainInfo (string id);
        /// <summary>
        /// Replace Nameserver Set Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateDomainNameservers (DomainNameserverPutRequest body, int? id);
        /// <summary>
        /// Replace Nameserver Set Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
        /// </summary>
        /// <param name="nameserver"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateDomainNameservers (List<string> nameserver, int? id);
        /// <summary>
        /// Update Whois Privacy Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateDomainWhoisPrivacy (DomainWhoisPrivacyRequest body, int? id);
        /// <summary>
        /// Update Whois Privacy Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
        /// </summary>
        /// <param name="func"></param>
        /// <param name="csrfToken"></param>
        /// <param name="domainFirstname"></param>
        /// <param name="domainLastname"></param>
        /// <param name="domainEmail"></param>
        /// <param name="domainAddress"></param>
        /// <param name="domainAddress2"></param>
        /// <param name="domainAddress3"></param>
        /// <param name="domainCity"></param>
        /// <param name="domainState"></param>
        /// <param name="domainZip"></param>
        /// <param name="domainCountry"></param>
        /// <param name="domainPhone"></param>
        /// <param name="domainFax"></param>
        /// <param name="domainCompany"></param>
        /// <param name="domainExtra"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateDomainWhoisPrivacy (string func, string csrfToken, string domainFirstname, string domainLastname, string domainEmail, string domainAddress, string domainAddress2, string domainAddress3, string domainCity, string domainState, string domainZip, string domainCountry, string domainPhone, string domainFax, string domainCompany, string domainExtra, int? id);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class DomainsApi : IDomainsApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="DomainsApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public DomainsApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="DomainsApi"/> class.
        /// </summary>
        /// <returns></returns>
        public DomainsApi(String basePath)
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
        /// Place Domain Order Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
        /// </summary>
        /// <returns></returns>
        public void AddDomain ()
        {
    
            var path = "/domains/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomain: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomain: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Add Domain DNSSEC Records Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddDomainDnssec (DomainDnssecRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddDomainDnssec");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddDomainDnssec");
    
            var path = "/domains/{id}/dnssec";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainDnssec: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainDnssec: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add Domain DNSSEC Records Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
        /// </summary>
        /// <param name="algorithm"></param>
        /// <param name="digestType"></param>
        /// <param name="digest"></param>
        /// <param name="keyTag"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddDomainDnssec (List<int?> algorithm, List<int?> digestType, List<string> digest, List<int?> keyTag, int? id)
        {
            // verify the required parameter 'algorithm' is set
            if (algorithm == null) throw new ApiException(400, "Missing required parameter 'algorithm' when calling AddDomainDnssec");
            // verify the required parameter 'digestType' is set
            if (digestType == null) throw new ApiException(400, "Missing required parameter 'digestType' when calling AddDomainDnssec");
            // verify the required parameter 'digest' is set
            if (digest == null) throw new ApiException(400, "Missing required parameter 'digest' when calling AddDomainDnssec");
            // verify the required parameter 'keyTag' is set
            if (keyTag == null) throw new ApiException(400, "Missing required parameter 'keyTag' when calling AddDomainDnssec");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddDomainDnssec");
    
            var path = "/domains/{id}/dnssec";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (algorithm != null) formParams.Add("algorithm", ApiClient.ParameterToString(algorithm)); // form parameter
if (digestType != null) formParams.Add("digest_type", ApiClient.ParameterToString(digestType)); // form parameter
if (digest != null) formParams.Add("digest", ApiClient.ParameterToString(digest)); // form parameter
if (keyTag != null) formParams.Add("key_tag", ApiClient.ParameterToString(keyTag)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainDnssec: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainDnssec: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add Registered Nameserver Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        public TextResponse AddDomainNameserver (DomainNameserverPostRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddDomainNameserver");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddDomainNameserver");
    
            var path = "/domains/{id}/nameservers";
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
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainNameserver: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainNameserver: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add Registered Nameserver Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="ipAddress"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        public TextResponse AddDomainNameserver (string name, string ipAddress, int? id)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling AddDomainNameserver");
            // verify the required parameter 'ipAddress' is set
            if (ipAddress == null) throw new ApiException(400, "Missing required parameter 'ipAddress' when calling AddDomainNameserver");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling AddDomainNameserver");
    
            var path = "/domains/{id}/nameservers";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (name != null) formParams.Add("name", ApiClient.ParameterToString(name)); // form parameter
if (ipAddress != null) formParams.Add("ipAddress", ApiClient.ParameterToString(ipAddress)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainNameserver: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddDomainNameserver: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Cancel Domain Order Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>InlineResponse2002</returns>
        public InlineResponse2002 CancelDomain (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling CancelDomain");
    
            var path = "/domains/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling CancelDomain: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling CancelDomain: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2002) ApiClient.Deserialize(response.Content, typeof(InlineResponse2002), response.Headers);
        }
    
        /// <summary>
        /// Remove Domain DNSSEC Records Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <param name="action">Set to &#x60;delete&#x60; to remove all DNSSEC records.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteDomainDnssec (int? id, string action)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteDomainDnssec");
            // verify the required parameter 'action' is set
            if (action == null) throw new ApiException(400, "Missing required parameter 'action' when calling DeleteDomainDnssec");
    
            var path = "/domains/{id}/dnssec";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (action != null) queryParams.Add("action", ApiClient.ParameterToString(action)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDomainDnssec: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDomainDnssec: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete Registered Nameserver Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <param name="index">The index of the registered nameserver from the registered nameservers list to delete.  </param>
        /// <returns>TextResponse</returns>
        public TextResponse DeleteDomainNameserver (int? id, int? index)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteDomainNameserver");
            // verify the required parameter 'index' is set
            if (index == null) throw new ApiException(400, "Missing required parameter 'index' when calling DeleteDomainNameserver");
    
            var path = "/domains/{id}/nameservers";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (index != null) queryParams.Add("index", ApiClient.ParameterToString(index)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDomainNameserver: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteDomainNameserver: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Domain Contact Details Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>DomainContactDetails</returns>
        public DomainContactDetails GetDomainContact (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainContact");
    
            var path = "/domains/{id}/contact";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainContact: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainContact: " + response.ErrorMessage, response.ErrorMessage);
    
            return (DomainContactDetails) ApiClient.Deserialize(response.Content, typeof(DomainContactDetails), response.Headers);
        }
    
        /// <summary>
        /// Get Domain DNSSEC Records Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>DomainDnssecRecords</returns>
        public DomainDnssecRecords GetDomainDnssec (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainDnssec");
    
            var path = "/domains/{id}/dnssec";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainDnssec: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainDnssec: " + response.ErrorMessage, response.ErrorMessage);
    
            return (DomainDnssecRecords) ApiClient.Deserialize(response.Content, typeof(DomainDnssecRecords), response.Headers);
        }
    
        /// <summary>
        /// Get Domain Order Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>Domain</returns>
        public Domain GetDomainInfo (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainInfo");
    
            var path = "/domains/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return (Domain) ApiClient.Deserialize(response.Content, typeof(Domain), response.Headers);
        }
    
        /// <summary>
        /// Get Domain Invoices Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>ChargeInvoiceRows</returns>
        public ChargeInvoiceRows GetDomainInvoices (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainInvoices");
    
            var path = "/domains/{id}/invoices";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (ChargeInvoiceRows) ApiClient.Deserialize(response.Content, typeof(ChargeInvoiceRows), response.Headers);
        }
    
        /// <summary>
        /// Lookup Domain Availability and Pricing Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
        /// </summary>
        /// <param name="name">The full domain name to look up (for example &#x60;example.com&#x60;).</param>
        /// <returns>DomainLookupResponse</returns>
        public DomainLookupResponse GetDomainLookup (string name)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling GetDomainLookup");
    
            var path = "/domains/lookup/{name}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "name" + "}", ApiClient.ParameterToString(name));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainLookup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainLookup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (DomainLookupResponse) ApiClient.Deserialize(response.Content, typeof(DomainLookupResponse), response.Headers);
        }
    
        /// <summary>
        /// List Registered Nameservers Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>DomainNameserverGetResponse</returns>
        public DomainNameserverGetResponse GetDomainNameservers (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainNameservers");
    
            var path = "/domains/{id}/nameservers";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainNameservers: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainNameservers: " + response.ErrorMessage, response.ErrorMessage);
    
            return (DomainNameserverGetResponse) ApiClient.Deserialize(response.Content, typeof(DomainNameserverGetResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Domain Order Fields Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
        /// </summary>
        /// <param name="domain">The fully qualified domain name (e.g. &#x60;example.com&#x60;).</param>
        /// <param name="regType">The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.</param>
        /// <returns></returns>
        public void GetDomainOrderFields (string domain, string regType)
        {
            // verify the required parameter 'domain' is set
            if (domain == null) throw new ApiException(400, "Missing required parameter 'domain' when calling GetDomainOrderFields");
            // verify the required parameter 'regType' is set
            if (regType == null) throw new ApiException(400, "Missing required parameter 'regType' when calling GetDomainOrderFields");
    
            var path = "/domains/order/{domain}/{regType}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "domain" + "}", ApiClient.ParameterToString(domain));
path = path.Replace("{" + "regType" + "}", ApiClient.ParameterToString(regType));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainOrderFields: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainOrderFields: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Domain Order Search Results Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
        /// </summary>
        /// <param name="domain">The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).</param>
        /// <returns></returns>
        public void GetDomainOrderSearchResults (string domain)
        {
            // verify the required parameter 'domain' is set
            if (domain == null) throw new ApiException(400, "Missing required parameter 'domain' when calling GetDomainOrderSearchResults");
    
            var path = "/domains/order/{domain}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "domain" + "}", ApiClient.ParameterToString(domain));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainOrderSearchResults: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainOrderSearchResults: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Start Domain Renewal Flow Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetDomainRenewal (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainRenewal");
    
            var path = "/domains/{id}/renew";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainRenewal: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainRenewal: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Search Domain Suggestions Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
        /// </summary>
        /// <param name="name">The base domain name to search (for example &#x60;example&#x60; or &#x60;example.com&#x60;).</param>
        /// <returns>DomainSearchResponse</returns>
        public DomainSearchResponse GetDomainSearch (string name)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling GetDomainSearch");
    
            var path = "/domains/search/{name}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "name" + "}", ApiClient.ParameterToString(name));
    
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainSearch: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainSearch: " + response.ErrorMessage, response.ErrorMessage);
    
            return (DomainSearchResponse) ApiClient.Deserialize(response.Content, typeof(DomainSearchResponse), response.Headers);
        }
    
        /// <summary>
        /// Start Domain Transfer Flow Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetDomainTransfer (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainTransfer");
    
            var path = "/domains/{id}/transfer";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainTransfer: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainTransfer: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Whois Privacy Status Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetDomainWhoisPrivacy (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainWhoisPrivacy");
    
            var path = "/domains/{id}/whois";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainWhoisPrivacy: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainWhoisPrivacy: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// List Domain Orders Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
        /// </summary>
        /// <returns>List&lt;DomainRow&gt;</returns>
        public List<DomainRow> GetDomainsList ()
        {
    
            var path = "/domains";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainsList: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainsList: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<DomainRow>) ApiClient.Deserialize(response.Content, typeof(List<DomainRow>), response.Headers);
        }
    
        /// <summary>
        /// Resend Domain Welcome Email Resends the welcome email for the domain service. The email contains registration details and management instructions.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetDomainsWelcomeEmail (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetDomainsWelcomeEmail");
    
            var path = "/domains/{id}/welcome_email";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainsWelcomeEmail: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetDomainsWelcomeEmail: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Domain Ordering Information Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
        /// </summary>
        /// <returns>DomainOrder</returns>
        public DomainOrder GetNewDomain ()
        {
    
            var path = "/domains/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewDomain: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetNewDomain: " + response.ErrorMessage, response.ErrorMessage);
    
            return (DomainOrder) ApiClient.Deserialize(response.Content, typeof(DomainOrder), response.Headers);
        }
    
        /// <summary>
        /// Validate Domain Order Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
        /// </summary>
        /// <returns></returns>
        public void PatchDomains ()
        {
    
            var path = "/domains/order";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PATCH, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PatchDomains: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PatchDomains: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Request Domain Renewal Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostDomainRenewal (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostDomainRenewal");
    
            var path = "/domains/{id}/renew";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostDomainRenewal: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostDomainRenewal: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Request Domain Transfer Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostDomainTransfer (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostDomainTransfer");
    
            var path = "/domains/{id}/transfer";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PostDomainTransfer: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostDomainTransfer: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Domain Order Search Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
        /// </summary>
        /// <returns></returns>
        public void PutDomains ()
        {
    
            var path = "/domains/order";
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
                throw new ApiException ((int)response.StatusCode, "Error calling PutDomains: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PutDomains: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Update Domain Contact Details Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateDomainContact (DomainContactDetails body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateDomainContact");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateDomainContact");
    
            var path = "/domains/{id}/contact";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainContact: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainContact: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Domain Contact Details Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
        /// </summary>
        /// <param name="status"></param>
        /// <param name="state"></param>
        /// <param name="orgName"></param>
        /// <param name="country"></param>
        /// <param name="postalCode"></param>
        /// <param name="email"></param>
        /// <param name="fax"></param>
        /// <param name="address2"></param>
        /// <param name="address3"></param>
        /// <param name="address1"></param>
        /// <param name="city"></param>
        /// <param name="phone"></param>
        /// <param name="firstName"></param>
        /// <param name="lastName"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateDomainContact (string status, string state, string orgName, string country, string postalCode, string email, string fax, string address2, string address3, string address1, string city, string phone, string firstName, string lastName, int? id)
        {
            // verify the required parameter 'status' is set
            if (status == null) throw new ApiException(400, "Missing required parameter 'status' when calling UpdateDomainContact");
            // verify the required parameter 'state' is set
            if (state == null) throw new ApiException(400, "Missing required parameter 'state' when calling UpdateDomainContact");
            // verify the required parameter 'orgName' is set
            if (orgName == null) throw new ApiException(400, "Missing required parameter 'orgName' when calling UpdateDomainContact");
            // verify the required parameter 'country' is set
            if (country == null) throw new ApiException(400, "Missing required parameter 'country' when calling UpdateDomainContact");
            // verify the required parameter 'postalCode' is set
            if (postalCode == null) throw new ApiException(400, "Missing required parameter 'postalCode' when calling UpdateDomainContact");
            // verify the required parameter 'email' is set
            if (email == null) throw new ApiException(400, "Missing required parameter 'email' when calling UpdateDomainContact");
            // verify the required parameter 'fax' is set
            if (fax == null) throw new ApiException(400, "Missing required parameter 'fax' when calling UpdateDomainContact");
            // verify the required parameter 'address2' is set
            if (address2 == null) throw new ApiException(400, "Missing required parameter 'address2' when calling UpdateDomainContact");
            // verify the required parameter 'address3' is set
            if (address3 == null) throw new ApiException(400, "Missing required parameter 'address3' when calling UpdateDomainContact");
            // verify the required parameter 'address1' is set
            if (address1 == null) throw new ApiException(400, "Missing required parameter 'address1' when calling UpdateDomainContact");
            // verify the required parameter 'city' is set
            if (city == null) throw new ApiException(400, "Missing required parameter 'city' when calling UpdateDomainContact");
            // verify the required parameter 'phone' is set
            if (phone == null) throw new ApiException(400, "Missing required parameter 'phone' when calling UpdateDomainContact");
            // verify the required parameter 'firstName' is set
            if (firstName == null) throw new ApiException(400, "Missing required parameter 'firstName' when calling UpdateDomainContact");
            // verify the required parameter 'lastName' is set
            if (lastName == null) throw new ApiException(400, "Missing required parameter 'lastName' when calling UpdateDomainContact");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateDomainContact");
    
            var path = "/domains/{id}/contact";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (status != null) formParams.Add("status", ApiClient.ParameterToString(status)); // form parameter
if (state != null) formParams.Add("state", ApiClient.ParameterToString(state)); // form parameter
if (orgName != null) formParams.Add("org_name", ApiClient.ParameterToString(orgName)); // form parameter
if (country != null) formParams.Add("country", ApiClient.ParameterToString(country)); // form parameter
if (postalCode != null) formParams.Add("postal_code", ApiClient.ParameterToString(postalCode)); // form parameter
if (email != null) formParams.Add("email", ApiClient.ParameterToString(email)); // form parameter
if (fax != null) formParams.Add("fax", ApiClient.ParameterToString(fax)); // form parameter
if (address2 != null) formParams.Add("address2", ApiClient.ParameterToString(address2)); // form parameter
if (address3 != null) formParams.Add("address3", ApiClient.ParameterToString(address3)); // form parameter
if (address1 != null) formParams.Add("address1", ApiClient.ParameterToString(address1)); // form parameter
if (city != null) formParams.Add("city", ApiClient.ParameterToString(city)); // form parameter
if (phone != null) formParams.Add("phone", ApiClient.ParameterToString(phone)); // form parameter
if (firstName != null) formParams.Add("first_name", ApiClient.ParameterToString(firstName)); // form parameter
if (lastName != null) formParams.Add("last_name", ApiClient.ParameterToString(lastName)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainContact: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainContact: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Domain Order Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
        /// </summary>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns></returns>
        public void UpdateDomainInfo (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateDomainInfo");
    
            var path = "/domains/{id}";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainInfo: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainInfo: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Replace Nameserver Set Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateDomainNameservers (DomainNameserverPutRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateDomainNameservers");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateDomainNameservers");
    
            var path = "/domains/{id}/nameservers";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainNameservers: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainNameservers: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Replace Nameserver Set Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
        /// </summary>
        /// <param name="nameserver"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateDomainNameservers (List<string> nameserver, int? id)
        {
            // verify the required parameter 'nameserver' is set
            if (nameserver == null) throw new ApiException(400, "Missing required parameter 'nameserver' when calling UpdateDomainNameservers");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateDomainNameservers");
    
            var path = "/domains/{id}/nameservers";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (nameserver != null) formParams.Add("nameserver", ApiClient.ParameterToString(nameserver)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.PUT, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainNameservers: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainNameservers: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Whois Privacy Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateDomainWhoisPrivacy (DomainWhoisPrivacyRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateDomainWhoisPrivacy");
    
            var path = "/domains/{id}/whois";
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
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainWhoisPrivacy: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainWhoisPrivacy: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Whois Privacy Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
        /// </summary>
        /// <param name="func"></param>
        /// <param name="csrfToken"></param>
        /// <param name="domainFirstname"></param>
        /// <param name="domainLastname"></param>
        /// <param name="domainEmail"></param>
        /// <param name="domainAddress"></param>
        /// <param name="domainAddress2"></param>
        /// <param name="domainAddress3"></param>
        /// <param name="domainCity"></param>
        /// <param name="domainState"></param>
        /// <param name="domainZip"></param>
        /// <param name="domainCountry"></param>
        /// <param name="domainPhone"></param>
        /// <param name="domainFax"></param>
        /// <param name="domainCompany"></param>
        /// <param name="domainExtra"></param>
        /// <param name="id">The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateDomainWhoisPrivacy (string func, string csrfToken, string domainFirstname, string domainLastname, string domainEmail, string domainAddress, string domainAddress2, string domainAddress3, string domainCity, string domainState, string domainZip, string domainCountry, string domainPhone, string domainFax, string domainCompany, string domainExtra, int? id)
        {
            // verify the required parameter 'func' is set
            if (func == null) throw new ApiException(400, "Missing required parameter 'func' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'csrfToken' is set
            if (csrfToken == null) throw new ApiException(400, "Missing required parameter 'csrfToken' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainFirstname' is set
            if (domainFirstname == null) throw new ApiException(400, "Missing required parameter 'domainFirstname' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainLastname' is set
            if (domainLastname == null) throw new ApiException(400, "Missing required parameter 'domainLastname' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainEmail' is set
            if (domainEmail == null) throw new ApiException(400, "Missing required parameter 'domainEmail' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainAddress' is set
            if (domainAddress == null) throw new ApiException(400, "Missing required parameter 'domainAddress' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainAddress2' is set
            if (domainAddress2 == null) throw new ApiException(400, "Missing required parameter 'domainAddress2' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainAddress3' is set
            if (domainAddress3 == null) throw new ApiException(400, "Missing required parameter 'domainAddress3' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainCity' is set
            if (domainCity == null) throw new ApiException(400, "Missing required parameter 'domainCity' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainState' is set
            if (domainState == null) throw new ApiException(400, "Missing required parameter 'domainState' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainZip' is set
            if (domainZip == null) throw new ApiException(400, "Missing required parameter 'domainZip' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainCountry' is set
            if (domainCountry == null) throw new ApiException(400, "Missing required parameter 'domainCountry' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainPhone' is set
            if (domainPhone == null) throw new ApiException(400, "Missing required parameter 'domainPhone' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainFax' is set
            if (domainFax == null) throw new ApiException(400, "Missing required parameter 'domainFax' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainCompany' is set
            if (domainCompany == null) throw new ApiException(400, "Missing required parameter 'domainCompany' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'domainExtra' is set
            if (domainExtra == null) throw new ApiException(400, "Missing required parameter 'domainExtra' when calling UpdateDomainWhoisPrivacy");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateDomainWhoisPrivacy");
    
            var path = "/domains/{id}/whois";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (func != null) formParams.Add("func", ApiClient.ParameterToString(func)); // form parameter
if (csrfToken != null) formParams.Add("csrf_token", ApiClient.ParameterToString(csrfToken)); // form parameter
if (domainFirstname != null) formParams.Add("domain_firstname", ApiClient.ParameterToString(domainFirstname)); // form parameter
if (domainLastname != null) formParams.Add("domain_lastname", ApiClient.ParameterToString(domainLastname)); // form parameter
if (domainEmail != null) formParams.Add("domain_email", ApiClient.ParameterToString(domainEmail)); // form parameter
if (domainAddress != null) formParams.Add("domain_address", ApiClient.ParameterToString(domainAddress)); // form parameter
if (domainAddress2 != null) formParams.Add("domain_address2", ApiClient.ParameterToString(domainAddress2)); // form parameter
if (domainAddress3 != null) formParams.Add("domain_address3", ApiClient.ParameterToString(domainAddress3)); // form parameter
if (domainCity != null) formParams.Add("domain_city", ApiClient.ParameterToString(domainCity)); // form parameter
if (domainState != null) formParams.Add("domain_state", ApiClient.ParameterToString(domainState)); // form parameter
if (domainZip != null) formParams.Add("domain_zip", ApiClient.ParameterToString(domainZip)); // form parameter
if (domainCountry != null) formParams.Add("domain_country", ApiClient.ParameterToString(domainCountry)); // form parameter
if (domainPhone != null) formParams.Add("domain_phone", ApiClient.ParameterToString(domainPhone)); // form parameter
if (domainFax != null) formParams.Add("domain_fax", ApiClient.ParameterToString(domainFax)); // form parameter
if (domainCompany != null) formParams.Add("domain_company", ApiClient.ParameterToString(domainCompany)); // form parameter
if (domainExtra != null) formParams.Add("domain_extra", ApiClient.ParameterToString(domainExtra)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainWhoisPrivacy: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateDomainWhoisPrivacy: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
    }
}
