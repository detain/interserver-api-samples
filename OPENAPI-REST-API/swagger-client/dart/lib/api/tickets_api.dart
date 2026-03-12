part of swagger.api;



class TicketsApi {
  final ApiClient apiClient;

  TicketsApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Create New Ticket
  ///
  /// Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
  Future<TicketNewResponse> addNewTicket(TicketNew body) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }

    // create path and map variables
    String path = "/tickets/new".replaceAll("{format}","json");

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
      if (subject != null) {
        hasFields = true;
        mp.fields['subject'] = parameterToString(subject);
      }
      if (body != null) {
        hasFields = true;
        mp.fields['body'] = parameterToString(body);
      }
      if (serviceId != null) {
        hasFields = true;
        mp.fields['service_id'] = parameterToString(serviceId);
      }
      if (serviceModule != null) {
        hasFields = true;
        mp.fields['service_module'] = parameterToString(serviceModule);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (subject != null)
        formParams['subject'] = parameterToString(subject);
if (body != null)
        formParams['body'] = parameterToString(body);
if (serviceId != null)
        formParams['service_id'] = parameterToString(serviceId);
if (serviceModule != null)
        formParams['service_module'] = parameterToString(serviceModule);
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
          apiClient.deserialize(response.body, 'TicketNewResponse') as TicketNewResponse ;
    } else {
      return null;
    }
  }
  /// Close Ticket
  ///
  /// Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
  Future<CloseTicketResponseSchema> closeTicket(String id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/tickets/{id}/close".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'CloseTicketResponseSchema') as CloseTicketResponseSchema ;
    } else {
      return null;
    }
  }
  /// Close Ticket
  ///
  /// Closes the support ticket.
  Future<ViewTicketResponse> deleteTicketInfo(double id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/tickets/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'ViewTicketResponse') as ViewTicketResponse ;
    } else {
      return null;
    }
  }
  /// Gets Information for creating a new ticket.
  ///
  /// Returns the form data needed to create a new support ticket, such as available departments and service categories.
  Future getNewTicket() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/tickets/new".replaceAll("{format}","json");

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
  /// Get Ticket Information
  ///
  /// Returns the full details of a support ticket including its history of replies.
  Future<ViewTicketResponse> getTicketInfo(double id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/tickets/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'ViewTicketResponse') as ViewTicketResponse ;
    } else {
      return null;
    }
  }
  /// List Support Tickets
  ///
  /// Returns a paginated list of support tickets on the account. Filter by status and time period.
  Future<Tickets> getTicketsList({ int page, String period, String view }) async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/tickets".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if(page != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "page", page));
    }
    if(period != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "period", period));
    }
    if(view != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "view", view));
    }
    
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
          apiClient.deserialize(response.body, 'Tickets') as Tickets ;
    } else {
      return null;
    }
  }
  /// Reply To Ticket
  ///
  /// Adds a reply to an existing support ticket.
  Future<ViewTicketResponse> postTicketInfo(double id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/tickets/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'ViewTicketResponse') as ViewTicketResponse ;
    } else {
      return null;
    }
  }
  /// Search Support Tickets
  ///
  /// Searches support tickets by email, subject, or ticket mask ID.
  Future<Tickets> postTicketsList() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/tickets".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'Tickets') as Tickets ;
    } else {
      return null;
    }
  }
  /// Update Ticket
  ///
  /// Updates a support ticket&#x27;s properties such as subject or status.
  Future<ViewTicketResponse> putTicketInfo(double id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/tickets/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'ViewTicketResponse') as ViewTicketResponse ;
    } else {
      return null;
    }
  }
  /// Reply Ticket
  ///
  /// Posts a reply to an existing support ticket thread.
  Future<ReplyTicketResponseSchema> replyTicket(double id, { ReplyTicketRequest body }) async {
    Object postBody = body;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/tickets/{id}/reply".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
      if (content != null) {
        hasFields = true;
        mp.fields['content'] = parameterToString(content);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (content != null)
        formParams['content'] = parameterToString(content);
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
          apiClient.deserialize(response.body, 'ReplyTicketResponseSchema') as ReplyTicketResponseSchema ;
    } else {
      return null;
    }
  }
  /// Update Ticket
  ///
  /// Updates a support ticket&#x27;s subject or body content.
  Future<UpdateTicketResponseSchema> updateTicketInfo(double id, { UpdateTicket body }) async {
    Object postBody = body;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/tickets/{id}/update".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
      if (ip != null) {
        hasFields = true;
        mp.fields['ip'] = parameterToString(ip);
      }
      if (ipAddress != null) {
        hasFields = true;
        mp.fields['ip_address'] = parameterToString(ipAddress);
      }
      if (customerServerAccess != null) {
        hasFields = true;
        mp.fields['customer_server_access'] = parameterToString(customerServerAccess);
      }
      if (rootPassword != null) {
        hasFields = true;
        mp.fields['root_password'] = parameterToString(rootPassword);
      }
      if (sudoUsername != null) {
        hasFields = true;
        mp.fields['sudo_username'] = parameterToString(sudoUsername);
      }
      if (sudoPassword != null) {
        hasFields = true;
        mp.fields['sudo_password'] = parameterToString(sudoPassword);
      }
      if (port != null) {
        hasFields = true;
        mp.fields['port'] = parameterToString(port);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (ip != null)
        formParams['ip'] = parameterToString(ip);
if (ipAddress != null)
        formParams['ip_address'] = parameterToString(ipAddress);
if (customerServerAccess != null)
        formParams['customer_server_access'] = parameterToString(customerServerAccess);
if (rootPassword != null)
        formParams['root_password'] = parameterToString(rootPassword);
if (sudoUsername != null)
        formParams['sudo_username'] = parameterToString(sudoUsername);
if (sudoPassword != null)
        formParams['sudo_password'] = parameterToString(sudoPassword);
if (port != null)
        formParams['port'] = parameterToString(port);
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
          apiClient.deserialize(response.body, 'UpdateTicketResponseSchema') as UpdateTicketResponseSchema ;
    } else {
      return null;
    }
  }
}
