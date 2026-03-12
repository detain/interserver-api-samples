part of swagger.api;



class BackupsApi {
  final ApiClient apiClient;

  BackupsApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Place Backup Order
  ///
  /// Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with &#x60;/billing/invoices/{id}&#x60; to view the invoice or &#x60;/pay/{method}/{invoices}&#x60; to complete payment. The service is provisioned after payment is confirmed.
  Future<BackupOrderPostResponse> addBackup(bool validateOnly, int serviceType, String coupon) async {
    Object postBody = body;

    // verify required params are set
    if(validateOnly == null) {
     throw new ApiException(400, "Missing required param: validateOnly");
    }
    if(serviceType == null) {
     throw new ApiException(400, "Missing required param: serviceType");
    }
    if(coupon == null) {
     throw new ApiException(400, "Missing required param: coupon");
    }

    // create path and map variables
    String path = "/backups/order".replaceAll("{format}","json");

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
      if (validateOnly != null) {
        hasFields = true;
        mp.fields['validateOnly'] = parameterToString(validateOnly);
      }
      if (serviceType != null) {
        hasFields = true;
        mp.fields['serviceType'] = parameterToString(serviceType);
      }
      if (coupon != null) {
        hasFields = true;
        mp.fields['coupon'] = parameterToString(coupon);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (validateOnly != null)
        formParams['validateOnly'] = parameterToString(validateOnly);
if (serviceType != null)
        formParams['serviceType'] = parameterToString(serviceType);
if (coupon != null)
        formParams['coupon'] = parameterToString(coupon);
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
          apiClient.deserialize(response.body, 'BackupOrderPostResponse') as BackupOrderPostResponse ;
    } else {
      return null;
    }
  }
  /// Cancel Backup Service
  ///
  /// Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
  Future<InlineResponse2001> cancelBackup(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/backups/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'InlineResponse2001') as InlineResponse2001 ;
    } else {
      return null;
    }
  }
  /// Get Backup Service Details
  ///
  /// Returns detailed service information for the specified backup storage order, including &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60; in &#x60;serviceInfo&#x60;. Also returns &#x60;client_links&#x60;, &#x60;billingDetails&#x60;, &#x60;extraInfoTables&#x60;, &#x60;package&#x60;, and &#x60;custCurrency&#x60;.
  Future<Backup> getBackupInfo(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/backups/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'Backup') as Backup ;
    } else {
      return null;
    }
  }
  /// Get Backup Order Invoices
  ///
  /// Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
  Future<ChargeInvoiceRows> getBackupInvoices(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/backups/{id}/invoices".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
  /// Get Backup Storage Panel Login
  ///
  /// Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
  Future<BackupLoginResponse> getBackupLogin(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/backups/{id}/login".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
          apiClient.deserialize(response.body, 'BackupLoginResponse') as BackupLoginResponse ;
    } else {
      return null;
    }
  }
  /// List Backup Services
  ///
  /// Returns all backup storage services on your account. Each entry includes the &#x60;backup_id&#x60;, &#x60;backup_username&#x60;, &#x60;backup_ip&#x60;, &#x60;backup_status&#x60;, and &#x60;backup_quota&#x60;. Use the &#x60;backup_id&#x60; with &#x60;/backups/{id}&#x60; to retrieve full service details or &#x60;/backups/{id}/login&#x60; to obtain a storage panel session.
  Future<List<BackupRow>> getBackupsList() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/backups".replaceAll("{format}","json");

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
        (apiClient.deserialize(response.body, 'List<BackupRow>') as List).map((item) => item as BackupRow).toList();
    } else {
      return null;
    }
  }
  /// Resend Backup Welcome Email
  ///
  /// Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
  Future<SuccessTextResponse> getBackupsWelcomeEmail(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/backups/{id}/welcome_email".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
  /// Get Backup Order Form Data
  ///
  /// Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via &#x60;PUT /backups/order&#x60; or placing an order via &#x60;POST /backups/order&#x60;.
  Future<BackupsOrder> getNewBackup() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/backups/order".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'BackupsOrder') as BackupsOrder ;
    } else {
      return null;
    }
  }
  /// Update Backup Information
  ///
  /// Updates backup storage service metadata, such as stored credentials or settings for the order.
  Future updateBackupInfo(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/backups/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

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
  /// Validate Backup Order
  ///
  /// Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via &#x60;POST /backups/order&#x60;.
  Future<BackupOrderPutResponse> validateBackupOrder(bool validateOnly, int serviceType, String coupon) async {
    Object postBody = body;

    // verify required params are set
    if(validateOnly == null) {
     throw new ApiException(400, "Missing required param: validateOnly");
    }
    if(serviceType == null) {
     throw new ApiException(400, "Missing required param: serviceType");
    }
    if(coupon == null) {
     throw new ApiException(400, "Missing required param: coupon");
    }

    // create path and map variables
    String path = "/backups/order".replaceAll("{format}","json");

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
      if (validateOnly != null) {
        hasFields = true;
        mp.fields['validateOnly'] = parameterToString(validateOnly);
      }
      if (serviceType != null) {
        hasFields = true;
        mp.fields['serviceType'] = parameterToString(serviceType);
      }
      if (coupon != null) {
        hasFields = true;
        mp.fields['coupon'] = parameterToString(coupon);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (validateOnly != null)
        formParams['validateOnly'] = parameterToString(validateOnly);
if (serviceType != null)
        formParams['serviceType'] = parameterToString(serviceType);
if (coupon != null)
        formParams['coupon'] = parameterToString(coupon);
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
          apiClient.deserialize(response.body, 'BackupOrderPutResponse') as BackupOrderPutResponse ;
    } else {
      return null;
    }
  }
}
