part of swagger.api;



class DNSApi {
  final ApiClient apiClient;

  DNSApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Create DNS Domain
  ///
  /// Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer&#x27;s DNS servers. Use &#x60;/dns/{id}&#x60; to manage records after creation.
  Future addDnsDomain(String domain, String ip) async {
    Object postBody = body;

    // verify required params are set
    if(domain == null) {
     throw new ApiException(400, "Missing required param: domain");
    }
    if(ip == null) {
     throw new ApiException(400, "Missing required param: ip");
    }

    // create path and map variables
    String path = "/dns".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["multipart/form-data","application/json"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (domain != null) {
        hasFields = true;
        mp.fields['domain'] = parameterToString(domain);
      }
      if (ip != null) {
        hasFields = true;
        mp.fields['ip'] = parameterToString(ip);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (domain != null)
        formParams['domain'] = parameterToString(domain);
if (ip != null)
        formParams['ip'] = parameterToString(ip);
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
  /// Add DNS Record to Domain
  ///
  /// Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; afterward to confirm the record was created.
  Future addDnsRecord(String name, DnsRecordType type, String content, int ttl, int prio, String id) async {
    Object postBody = body;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }
    if(type == null) {
     throw new ApiException(400, "Missing required param: type");
    }
    if(content == null) {
     throw new ApiException(400, "Missing required param: content");
    }
    if(ttl == null) {
     throw new ApiException(400, "Missing required param: ttl");
    }
    if(prio == null) {
     throw new ApiException(400, "Missing required param: prio");
    }
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/dns/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["multipart/form-data","application/json"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (name != null) {
        hasFields = true;
        mp.fields['name'] = parameterToString(name);
      }
      if (type != null) {
        hasFields = true;
        mp.fields['type'] = parameterToString(type);
      }
      if (content != null) {
        hasFields = true;
        mp.fields['content'] = parameterToString(content);
      }
      if (ttl != null) {
        hasFields = true;
        mp.fields['ttl'] = parameterToString(ttl);
      }
      if (prio != null) {
        hasFields = true;
        mp.fields['prio'] = parameterToString(prio);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (name != null)
        formParams['name'] = parameterToString(name);
if (type != null)
        formParams['type'] = parameterToString(type);
if (content != null)
        formParams['content'] = parameterToString(content);
if (ttl != null)
        formParams['ttl'] = parameterToString(ttl);
if (prio != null)
        formParams['prio'] = parameterToString(prio);
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
  /// Delete DNS Domain
  ///
  /// Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
  Future deleteDnsDomain(String id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/dns/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          ;
    } else {
      return ;
    }
  }
  /// Delete DNS Record
  ///
  /// Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use &#x60;GET /dns/{id}&#x60; to verify the record has been removed.
  Future deleteDnsRecord(int domainId, int recordId) async {
    Object postBody = null;

    // verify required params are set
    if(domainId == null) {
     throw new ApiException(400, "Missing required param: domainId");
    }
    if(recordId == null) {
     throw new ApiException(400, "Missing required param: recordId");
    }

    // create path and map variables
    String path = "/dns/{domainId}/{recordId}".replaceAll("{format}","json").replaceAll("{" + "domainId" + "}", domainId.toString()).replaceAll("{" + "recordId" + "}", recordId.toString());

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
          ;
    } else {
      return ;
    }
  }
  /// List Domain DNS Records
  ///
  /// Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record &#x60;id&#x60; values with &#x60;/dns/{domainId}/{recordId}&#x60; to update or delete individual records.
  Future<List<DnsRecord>> getDnsDomain(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/dns/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
        (apiClient.deserialize(response.body, 'List<DnsRecord>') as List).map((item) => item as DnsRecord).toList();
    } else {
      return null;
    }
  }
  /// List DNS Domains
  ///
  /// Returns the DNS domains on your account along with their primary A record content. Use the &#x60;id&#x60; from each entry with &#x60;/dns/{id}&#x60; to retrieve the full record set, or to add, update, and delete individual records.
  Future<List<DnsListItem>> getDnsList() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/dns".replaceAll("{format}","json");

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
        (apiClient.deserialize(response.body, 'List<DnsListItem>') as List).map((item) => item as DnsListItem).toList();
    } else {
      return null;
    }
  }
  /// Update DNS Record
  ///
  /// Updates an existing DNS record with new values. Use &#x60;GET /dns/{id}&#x60; to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
  Future updateDnsRecord(String name, DnsRecordType type, String content, String ttl, String prio, String disabled, String ordername, String auth, int domainId, int recordId) async {
    Object postBody = body;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }
    if(type == null) {
     throw new ApiException(400, "Missing required param: type");
    }
    if(content == null) {
     throw new ApiException(400, "Missing required param: content");
    }
    if(ttl == null) {
     throw new ApiException(400, "Missing required param: ttl");
    }
    if(prio == null) {
     throw new ApiException(400, "Missing required param: prio");
    }
    if(disabled == null) {
     throw new ApiException(400, "Missing required param: disabled");
    }
    if(ordername == null) {
     throw new ApiException(400, "Missing required param: ordername");
    }
    if(auth == null) {
     throw new ApiException(400, "Missing required param: auth");
    }
    if(domainId == null) {
     throw new ApiException(400, "Missing required param: domainId");
    }
    if(recordId == null) {
     throw new ApiException(400, "Missing required param: recordId");
    }

    // create path and map variables
    String path = "/dns/{domainId}/{recordId}".replaceAll("{format}","json").replaceAll("{" + "domainId" + "}", domainId.toString()).replaceAll("{" + "recordId" + "}", recordId.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["multipart/form-data","application/json"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (name != null) {
        hasFields = true;
        mp.fields['name'] = parameterToString(name);
      }
      if (type != null) {
        hasFields = true;
        mp.fields['type'] = parameterToString(type);
      }
      if (content != null) {
        hasFields = true;
        mp.fields['content'] = parameterToString(content);
      }
      if (ttl != null) {
        hasFields = true;
        mp.fields['ttl'] = parameterToString(ttl);
      }
      if (prio != null) {
        hasFields = true;
        mp.fields['prio'] = parameterToString(prio);
      }
      if (disabled != null) {
        hasFields = true;
        mp.fields['disabled'] = parameterToString(disabled);
      }
      if (ordername != null) {
        hasFields = true;
        mp.fields['ordername'] = parameterToString(ordername);
      }
      if (auth != null) {
        hasFields = true;
        mp.fields['auth'] = parameterToString(auth);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (name != null)
        formParams['name'] = parameterToString(name);
if (type != null)
        formParams['type'] = parameterToString(type);
if (content != null)
        formParams['content'] = parameterToString(content);
if (ttl != null)
        formParams['ttl'] = parameterToString(ttl);
if (prio != null)
        formParams['prio'] = parameterToString(prio);
if (disabled != null)
        formParams['disabled'] = parameterToString(disabled);
if (ordername != null)
        formParams['ordername'] = parameterToString(ordername);
if (auth != null)
        formParams['auth'] = parameterToString(auth);
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
}
