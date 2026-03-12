part of swagger.api;



class DomainsApi {
  final ApiClient apiClient;

  DomainsApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Place Domain Order
  ///
  /// Places a new domain registration or transfer order. Use the results from &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order/{domain}/{regType}&#x60; to populate the required domain fields before submitting the order.
  Future addDomain() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/domains/order".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          ;
    } else {
      return ;
    }
  }
  /// Add Domain DNSSEC Records
  ///
  /// Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
  Future<SuccessTextResponse> addDomainDnssec(DomainDnssecRequest body, int id) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/dnssec".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (algorithm != null) {
        hasFields = true;
        mp.fields['algorithm'] = parameterToString(algorithm);
      }
      if (digestType != null) {
        hasFields = true;
        mp.fields['digest_type'] = parameterToString(digestType);
      }
      if (digest != null) {
        hasFields = true;
        mp.fields['digest'] = parameterToString(digest);
      }
      if (keyTag != null) {
        hasFields = true;
        mp.fields['key_tag'] = parameterToString(keyTag);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (algorithm != null)
        formParams['algorithm'] = parameterToString(algorithm);
if (digestType != null)
        formParams['digest_type'] = parameterToString(digestType);
if (digest != null)
        formParams['digest'] = parameterToString(digest);
if (keyTag != null)
        formParams['key_tag'] = parameterToString(keyTag);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Add Registered Nameserver
  ///
  /// Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use &#x60;GET /domains/{id}/nameservers&#x60; to confirm that the new entry exists.
  Future<TextResponse> addDomainNameserver(DomainNameserverPostRequest body, int id) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/nameservers".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (name != null) {
        hasFields = true;
        mp.fields['name'] = parameterToString(name);
      }
      if (ipAddress != null) {
        hasFields = true;
        mp.fields['ipAddress'] = parameterToString(ipAddress);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (name != null)
        formParams['name'] = parameterToString(name);
if (ipAddress != null)
        formParams['ipAddress'] = parameterToString(ipAddress);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Cancel Domain Order
  ///
  /// Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a &#x60;canceled&#x60; status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
  Future<InlineResponse2002> cancelDomain(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'InlineResponse2002') as InlineResponse2002 ;
    } else {
      return null;
    }
  }
  /// Remove Domain DNSSEC Records
  ///
  /// Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
  Future<SuccessTextResponse> deleteDomainDnssec(int id, String action) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }
    if(action == null) {
     throw new ApiException(400, "Missing required param: action");
    }

    // create path and map variables
    String path = "/domains/{id}/dnssec".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
      queryParams.addAll(_convertParametersForCollectionFormat("", "action", action));
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Delete Registered Nameserver
  ///
  /// Removes a registered nameserver (glue record) from the domain. Specify the zero-based &#x60;index&#x60; of the nameserver to remove as returned by &#x60;GET /domains/{id}/nameservers&#x60;.
  Future<TextResponse> deleteDomainNameserver(int id, int index) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }
    if(index == null) {
     throw new ApiException(400, "Missing required param: index");
    }

    // create path and map variables
    String path = "/domains/{id}/nameservers".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
      queryParams.addAll(_convertParametersForCollectionFormat("", "index", index));
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Get Domain Contact Details
  ///
  /// Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
  Future<DomainContactDetails> getDomainContact(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/contact".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'DomainContactDetails') as DomainContactDetails ;
    } else {
      return null;
    }
  }
  /// Get Domain DNSSEC Records
  ///
  /// Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
  Future<DomainDnssecRecords> getDomainDnssec(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/dnssec".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'DomainDnssecRecords') as DomainDnssecRecords ;
    } else {
      return null;
    }
  }
  /// Get Domain Order
  ///
  /// Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the &#x60;domain_hostname&#x60; from this response when calling &#x60;/domains/lookup/{name}&#x60; or when interacting with nameserver and DNSSEC management endpoints.
  Future<Domain> getDomainInfo(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'Domain') as Domain ;
    } else {
      return null;
    }
  }
  /// Get Domain Invoices
  ///
  /// Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
  Future<ChargeInvoiceRows> getDomainInvoices(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/invoices".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'ChargeInvoiceRows') as ChargeInvoiceRows ;
    } else {
      return null;
    }
  }
  /// Lookup Domain Availability and Pricing
  ///
  /// Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to &#x60;/domains/order&#x60; when placing a registration or transfer.
  Future<DomainLookupResponse> getDomainLookup(String name) async {
    Object postBody = null;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }

    // create path and map variables
    String path = "/domains/lookup/{name}".replaceAll("{format}","json").replaceAll("{" + "name" + "}", name.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'DomainLookupResponse') as DomainLookupResponse ;
    } else {
      return null;
    }
  }
  /// List Registered Nameservers
  ///
  /// Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
  Future<DomainNameserverGetResponse> getDomainNameservers(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/nameservers".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'DomainNameserverGetResponse') as DomainNameserverGetResponse ;
    } else {
      return null;
    }
  }
  /// Get Domain Order Fields
  ///
  /// Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for &#x60;POST /domains/order&#x60;.
  Future getDomainOrderFields(String domain, String regType) async {
    Object postBody = null;

    // verify required params are set
    if(domain == null) {
     throw new ApiException(400, "Missing required param: domain");
    }
    if(regType == null) {
     throw new ApiException(400, "Missing required param: regType");
    }

    // create path and map variables
    String path = "/domains/order/{domain}/{regType}".replaceAll("{format}","json").replaceAll("{" + "domain" + "}", domain.toString()).replaceAll("{" + "regType" + "}", regType.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          ;
    } else {
      return ;
    }
  }
  /// Get Domain Order Search Results
  ///
  /// Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
  Future getDomainOrderSearchResults(String domain) async {
    Object postBody = null;

    // verify required params are set
    if(domain == null) {
     throw new ApiException(400, "Missing required param: domain");
    }

    // create path and map variables
    String path = "/domains/order/{domain}".replaceAll("{format}","json").replaceAll("{" + "domain" + "}", domain.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          ;
    } else {
      return ;
    }
  }
  /// Start Domain Renewal Flow
  ///
  /// Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
  Future<SuccessTextResponse> getDomainRenewal(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/renew".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Search Domain Suggestions
  ///
  /// Queries the registrar for suggested domains and availability data. Use the returned &#x60;lookup&#x60; results to identify availability and then call &#x60;/domains/lookup/{name}&#x60; or &#x60;/domains/order&#x60; to obtain pricing and order fields for the chosen domain.
  Future<DomainSearchResponse> getDomainSearch(String name) async {
    Object postBody = null;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }

    // create path and map variables
    String path = "/domains/search/{name}".replaceAll("{format}","json").replaceAll("{" + "name" + "}", name.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'DomainSearchResponse') as DomainSearchResponse ;
    } else {
      return null;
    }
  }
  /// Start Domain Transfer Flow
  ///
  /// Initiates the transfer workflow for a domain already in your account. Use this in coordination with &#x60;/domains/{id}/contact&#x60; to ensure registrant details are ready for the transfer request.
  Future<SuccessTextResponse> getDomainTransfer(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/transfer".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Get Whois Privacy Status
  ///
  /// Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
  Future<SuccessTextResponse> getDomainWhoisPrivacy(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/whois".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// List Domain Orders
  ///
  /// Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the &#x60;domain_id&#x60; from this response with &#x60;GET /domains/{id}&#x60; to fetch full service details, or with &#x60;/domains/{id}/nameservers&#x60;, &#x60;/domains/{id}/contact&#x60;, and &#x60;/domains/{id}/whois&#x60; to manage registration settings.
  Future<List<DomainRow>> getDomainsList() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/domains".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
        (apiClient.deserialize(response.body, 'List<DomainRow>') as List).map((item) => item as DomainRow).toList();
    } else {
      return null;
    }
  }
  /// Resend Domain Welcome Email
  ///
  /// Resends the welcome email for the domain service. The email contains registration details and management instructions.
  Future<SuccessTextResponse> getDomainsWelcomeEmail(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/welcome_email".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Get Domain Ordering Information
  ///
  /// Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the &#x60;tldServices&#x60; map to resolve a TLD into a service ID when you build an order request for &#x60;/domains/order&#x60; (POST) or the domain-field lookup endpoints.
  Future<DomainOrder> getNewDomain() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/domains/order".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'DomainOrder') as DomainOrder ;
    } else {
      return null;
    }
  }
  /// Validate Domain Order
  ///
  /// Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for &#x60;/domains/order&#x60; (POST).
  Future patchDomains() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/domains/order".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'PATCH',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          ;
    } else {
      return ;
    }
  }
  /// Request Domain Renewal
  ///
  /// Submits a domain renewal request for the order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices created as part of the renewal flow.
  Future<SuccessTextResponse> postDomainRenewal(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/renew".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Request Domain Transfer
  ///
  /// Submits a transfer request for the domain order. Use &#x60;/domains/{id}/invoices&#x60; to identify any invoices generated as part of the transfer process.
  Future<SuccessTextResponse> postDomainTransfer(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/transfer".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Domain Order Search
  ///
  /// Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
  Future putDomains() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/domains/order".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'PUT',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          ;
    } else {
      return ;
    }
  }
  /// Update Domain Contact Details
  ///
  /// Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
  Future<SuccessTextResponse> updateDomainContact(DomainContactDetails body, int id) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/contact".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (status != null) {
        hasFields = true;
        mp.fields['status'] = parameterToString(status);
      }
      if (state != null) {
        hasFields = true;
        mp.fields['state'] = parameterToString(state);
      }
      if (orgName != null) {
        hasFields = true;
        mp.fields['org_name'] = parameterToString(orgName);
      }
      if (country != null) {
        hasFields = true;
        mp.fields['country'] = parameterToString(country);
      }
      if (postalCode != null) {
        hasFields = true;
        mp.fields['postal_code'] = parameterToString(postalCode);
      }
      if (email != null) {
        hasFields = true;
        mp.fields['email'] = parameterToString(email);
      }
      if (fax != null) {
        hasFields = true;
        mp.fields['fax'] = parameterToString(fax);
      }
      if (address2 != null) {
        hasFields = true;
        mp.fields['address2'] = parameterToString(address2);
      }
      if (address3 != null) {
        hasFields = true;
        mp.fields['address3'] = parameterToString(address3);
      }
      if (address1 != null) {
        hasFields = true;
        mp.fields['address1'] = parameterToString(address1);
      }
      if (city != null) {
        hasFields = true;
        mp.fields['city'] = parameterToString(city);
      }
      if (phone != null) {
        hasFields = true;
        mp.fields['phone'] = parameterToString(phone);
      }
      if (firstName != null) {
        hasFields = true;
        mp.fields['first_name'] = parameterToString(firstName);
      }
      if (lastName != null) {
        hasFields = true;
        mp.fields['last_name'] = parameterToString(lastName);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (status != null)
        formParams['status'] = parameterToString(status);
if (state != null)
        formParams['state'] = parameterToString(state);
if (orgName != null)
        formParams['org_name'] = parameterToString(orgName);
if (country != null)
        formParams['country'] = parameterToString(country);
if (postalCode != null)
        formParams['postal_code'] = parameterToString(postalCode);
if (email != null)
        formParams['email'] = parameterToString(email);
if (fax != null)
        formParams['fax'] = parameterToString(fax);
if (address2 != null)
        formParams['address2'] = parameterToString(address2);
if (address3 != null)
        formParams['address3'] = parameterToString(address3);
if (address1 != null)
        formParams['address1'] = parameterToString(address1);
if (city != null)
        formParams['city'] = parameterToString(city);
if (phone != null)
        formParams['phone'] = parameterToString(phone);
if (firstName != null)
        formParams['first_name'] = parameterToString(firstName);
if (lastName != null)
        formParams['last_name'] = parameterToString(lastName);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Update Domain Order
  ///
  /// Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
  Future updateDomainInfo(String id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          ;
    } else {
      return ;
    }
  }
  /// Replace Nameserver Set
  ///
  /// Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
  Future<TextResponse> updateDomainNameservers(DomainNameserverPutRequest body, int id) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/nameservers".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (nameserver != null) {
        hasFields = true;
        mp.fields['nameserver'] = parameterToString(nameserver);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (nameserver != null)
        formParams['nameserver'] = parameterToString(nameserver);
    }

    var response = await apiClient.invokeAPI(path,
                                             'PUT',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Update Whois Privacy
  ///
  /// Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use &#x60;/domains/{id}/invoices&#x60; to track billing events.
  Future<SuccessTextResponse> updateDomainWhoisPrivacy(DomainWhoisPrivacyRequest body, int id) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/domains/{id}/whois".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (func != null) {
        hasFields = true;
        mp.fields['func'] = parameterToString(func);
      }
      if (csrfToken != null) {
        hasFields = true;
        mp.fields['csrf_token'] = parameterToString(csrfToken);
      }
      if (domainFirstname != null) {
        hasFields = true;
        mp.fields['domain_firstname'] = parameterToString(domainFirstname);
      }
      if (domainLastname != null) {
        hasFields = true;
        mp.fields['domain_lastname'] = parameterToString(domainLastname);
      }
      if (domainEmail != null) {
        hasFields = true;
        mp.fields['domain_email'] = parameterToString(domainEmail);
      }
      if (domainAddress != null) {
        hasFields = true;
        mp.fields['domain_address'] = parameterToString(domainAddress);
      }
      if (domainAddress2 != null) {
        hasFields = true;
        mp.fields['domain_address2'] = parameterToString(domainAddress2);
      }
      if (domainAddress3 != null) {
        hasFields = true;
        mp.fields['domain_address3'] = parameterToString(domainAddress3);
      }
      if (domainCity != null) {
        hasFields = true;
        mp.fields['domain_city'] = parameterToString(domainCity);
      }
      if (domainState != null) {
        hasFields = true;
        mp.fields['domain_state'] = parameterToString(domainState);
      }
      if (domainZip != null) {
        hasFields = true;
        mp.fields['domain_zip'] = parameterToString(domainZip);
      }
      if (domainCountry != null) {
        hasFields = true;
        mp.fields['domain_country'] = parameterToString(domainCountry);
      }
      if (domainPhone != null) {
        hasFields = true;
        mp.fields['domain_phone'] = parameterToString(domainPhone);
      }
      if (domainFax != null) {
        hasFields = true;
        mp.fields['domain_fax'] = parameterToString(domainFax);
      }
      if (domainCompany != null) {
        hasFields = true;
        mp.fields['domain_company'] = parameterToString(domainCompany);
      }
      if (domainExtra != null) {
        hasFields = true;
        mp.fields['domain_extra'] = parameterToString(domainExtra);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (func != null)
        formParams['func'] = parameterToString(func);
if (csrfToken != null)
        formParams['csrf_token'] = parameterToString(csrfToken);
if (domainFirstname != null)
        formParams['domain_firstname'] = parameterToString(domainFirstname);
if (domainLastname != null)
        formParams['domain_lastname'] = parameterToString(domainLastname);
if (domainEmail != null)
        formParams['domain_email'] = parameterToString(domainEmail);
if (domainAddress != null)
        formParams['domain_address'] = parameterToString(domainAddress);
if (domainAddress2 != null)
        formParams['domain_address2'] = parameterToString(domainAddress2);
if (domainAddress3 != null)
        formParams['domain_address3'] = parameterToString(domainAddress3);
if (domainCity != null)
        formParams['domain_city'] = parameterToString(domainCity);
if (domainState != null)
        formParams['domain_state'] = parameterToString(domainState);
if (domainZip != null)
        formParams['domain_zip'] = parameterToString(domainZip);
if (domainCountry != null)
        formParams['domain_country'] = parameterToString(domainCountry);
if (domainPhone != null)
        formParams['domain_phone'] = parameterToString(domainPhone);
if (domainFax != null)
        formParams['domain_fax'] = parameterToString(domainFax);
if (domainCompany != null)
        formParams['domain_company'] = parameterToString(domainCompany);
if (domainExtra != null)
        formParams['domain_extra'] = parameterToString(domainExtra);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
}
