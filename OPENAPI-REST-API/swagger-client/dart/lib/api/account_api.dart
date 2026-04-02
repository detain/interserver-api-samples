part of swagger.api;



class AccountApi {
  final ApiClient apiClient;

  AccountApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Change Account Username
  ///
  /// Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
  Future<TextResponse> changeAccountUsername() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/account/username".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Unlink OAuth Account
  ///
  /// Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
  Future<SuccessTextResponse> deleteAccountOauthName(String name) async {
    Object postBody = null;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }

    // create path and map variables
    String path = "/account/oauth/{name}".replaceAll("{format}","json").replaceAll("{" + "name" + "}", name.toString());

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
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Disable Two-Factor Authentication
  ///
  /// Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
  Future<SuccessTextResponse> deleteAccountTfa() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/account/2fa".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Remove IP Access Restriction
  ///
  /// Removes an IP address range from the account&#x27;s access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
  Future<GenericResponse> deleteIpLimit({ IpLimitRange body }) async {
    Object postBody = body;

    // verify required params are set

    // create path and map variables
    String path = "/account/iplimits".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json"];

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
          apiClient.deserialize(response.body, 'GenericResponse') as GenericResponse ;
    } else {
      return null;
    }
  }
  /// Retrieve Account Details
  ///
  /// Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with &#x60;POST /account&#x60;.
  Future<AccountInfo> getAccountInfo() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/account".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'AccountInfo') as AccountInfo ;
    } else {
      return null;
    }
  }
  /// Get Two-Factor Setup Data
  ///
  /// Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the &#x60;2fa_google_key&#x60; as a QR code or display the &#x60;2fa_google_split&#x60; value for manual entry. After setup, verify with &#x60;POST /account/2fa&#x60;.
  Future<InlineResponse200> getAccountTfaSetup() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/account/2fa".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'InlineResponse200') as InlineResponse200 ;
    } else {
      return null;
    }
  }
  /// Get Home Data
  ///
  /// Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
  Future<Home> getHome() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/home".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'Home') as Home ;
    } else {
      return null;
    }
  }
  /// Search Autocomplete
  ///
  /// Returns autocomplete results for the account&#x27;s services and records. Use this endpoint to power global search experiences in the client portal.
  Future<SearchAutocompleteResponse> getSearch() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/search".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'SearchAutocompleteResponse') as SearchAutocompleteResponse ;
    } else {
      return null;
    }
  }
  /// Log Out
  ///
  /// Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
  Future<SuccessTextResponse> logout() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/logout".replaceAll("{format}","json");

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
  /// Logout of OAuth
  ///
  /// Logs out of the specified OAuth provider session.
  Future<SuccessTextResponse> logoutAccountOauth(String name) async {
    Object postBody = null;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }

    // create path and map variables
    String path = "/account/oauth/{name}/logout".replaceAll("{format}","json").replaceAll("{" + "name" + "}", name.toString());

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
  /// Generate New API Key
  ///
  /// Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
  Future<SuccessTextResponse> updateAccountApiKey() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/account/apikey".replaceAll("{format}","json");

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
  /// Update Account Feature Flags
  ///
  /// Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
  Future<SuccessTextResponse> updateAccountFeatures(int disableReset, int disableReinstall) async {
    Object postBody = body;

    // verify required params are set
    if(disableReset == null) {
     throw new ApiException(400, "Missing required param: disableReset");
    }
    if(disableReinstall == null) {
     throw new ApiException(400, "Missing required param: disableReinstall");
    }

    // create path and map variables
    String path = "/account/features".replaceAll("{format}","json");

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
      if (disableReset != null) {
        hasFields = true;
        mp.fields['disable_reset'] = parameterToString(disableReset);
      }
      if (disableReinstall != null) {
        hasFields = true;
        mp.fields['disable_reinstall'] = parameterToString(disableReinstall);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (disableReset != null)
        formParams['disable_reset'] = parameterToString(disableReset);
if (disableReinstall != null)
        formParams['disable_reinstall'] = parameterToString(disableReinstall);
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
  /// Update Account Information
  ///
  /// Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
  Future<SuccessTextResponse> updateAccountInfo(String name, String company, String address, String address2, String city, String state, String zip, String country, String phone, String locale, String emailInvoices, String emailAbuse, bool disableReset, bool disableReinstall, bool disableServerNotifications, bool disableEmailNotifications, String gstin) async {
    Object postBody = body;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }
    if(company == null) {
     throw new ApiException(400, "Missing required param: company");
    }
    if(address == null) {
     throw new ApiException(400, "Missing required param: address");
    }
    if(address2 == null) {
     throw new ApiException(400, "Missing required param: address2");
    }
    if(city == null) {
     throw new ApiException(400, "Missing required param: city");
    }
    if(state == null) {
     throw new ApiException(400, "Missing required param: state");
    }
    if(zip == null) {
     throw new ApiException(400, "Missing required param: zip");
    }
    if(country == null) {
     throw new ApiException(400, "Missing required param: country");
    }
    if(phone == null) {
     throw new ApiException(400, "Missing required param: phone");
    }
    if(locale == null) {
     throw new ApiException(400, "Missing required param: locale");
    }
    if(emailInvoices == null) {
     throw new ApiException(400, "Missing required param: emailInvoices");
    }
    if(emailAbuse == null) {
     throw new ApiException(400, "Missing required param: emailAbuse");
    }
    if(disableReset == null) {
     throw new ApiException(400, "Missing required param: disableReset");
    }
    if(disableReinstall == null) {
     throw new ApiException(400, "Missing required param: disableReinstall");
    }
    if(disableServerNotifications == null) {
     throw new ApiException(400, "Missing required param: disableServerNotifications");
    }
    if(disableEmailNotifications == null) {
     throw new ApiException(400, "Missing required param: disableEmailNotifications");
    }
    if(gstin == null) {
     throw new ApiException(400, "Missing required param: gstin");
    }

    // create path and map variables
    String path = "/account".replaceAll("{format}","json");

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
      if (company != null) {
        hasFields = true;
        mp.fields['company'] = parameterToString(company);
      }
      if (address != null) {
        hasFields = true;
        mp.fields['address'] = parameterToString(address);
      }
      if (address2 != null) {
        hasFields = true;
        mp.fields['address2'] = parameterToString(address2);
      }
      if (city != null) {
        hasFields = true;
        mp.fields['city'] = parameterToString(city);
      }
      if (state != null) {
        hasFields = true;
        mp.fields['state'] = parameterToString(state);
      }
      if (zip != null) {
        hasFields = true;
        mp.fields['zip'] = parameterToString(zip);
      }
      if (country != null) {
        hasFields = true;
        mp.fields['country'] = parameterToString(country);
      }
      if (phone != null) {
        hasFields = true;
        mp.fields['phone'] = parameterToString(phone);
      }
      if (locale != null) {
        hasFields = true;
        mp.fields['locale'] = parameterToString(locale);
      }
      if (emailInvoices != null) {
        hasFields = true;
        mp.fields['email_invoices'] = parameterToString(emailInvoices);
      }
      if (emailAbuse != null) {
        hasFields = true;
        mp.fields['email_abuse'] = parameterToString(emailAbuse);
      }
      if (disableReset != null) {
        hasFields = true;
        mp.fields['disable_reset'] = parameterToString(disableReset);
      }
      if (disableReinstall != null) {
        hasFields = true;
        mp.fields['disable_reinstall'] = parameterToString(disableReinstall);
      }
      if (disableServerNotifications != null) {
        hasFields = true;
        mp.fields['disable_server_notifications'] = parameterToString(disableServerNotifications);
      }
      if (disableEmailNotifications != null) {
        hasFields = true;
        mp.fields['disable_email_notifications'] = parameterToString(disableEmailNotifications);
      }
      if (gstin != null) {
        hasFields = true;
        mp.fields['gstin'] = parameterToString(gstin);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (name != null)
        formParams['name'] = parameterToString(name);
if (company != null)
        formParams['company'] = parameterToString(company);
if (address != null)
        formParams['address'] = parameterToString(address);
if (address2 != null)
        formParams['address2'] = parameterToString(address2);
if (city != null)
        formParams['city'] = parameterToString(city);
if (state != null)
        formParams['state'] = parameterToString(state);
if (zip != null)
        formParams['zip'] = parameterToString(zip);
if (country != null)
        formParams['country'] = parameterToString(country);
if (phone != null)
        formParams['phone'] = parameterToString(phone);
if (locale != null)
        formParams['locale'] = parameterToString(locale);
if (emailInvoices != null)
        formParams['email_invoices'] = parameterToString(emailInvoices);
if (emailAbuse != null)
        formParams['email_abuse'] = parameterToString(emailAbuse);
if (disableReset != null)
        formParams['disable_reset'] = parameterToString(disableReset);
if (disableReinstall != null)
        formParams['disable_reinstall'] = parameterToString(disableReinstall);
if (disableServerNotifications != null)
        formParams['disable_server_notifications'] = parameterToString(disableServerNotifications);
if (disableEmailNotifications != null)
        formParams['disable_email_notifications'] = parameterToString(disableEmailNotifications);
if (gstin != null)
        formParams['gstin'] = parameterToString(gstin);
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
  /// Add IP Access Restriction
  ///
  /// Adds an IP address range to the account&#x27;s access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
  Future<SuccessTextResponse> updateAccountIpLimits(String start, String end) async {
    Object postBody = body;

    // verify required params are set
    if(start == null) {
     throw new ApiException(400, "Missing required param: start");
    }
    if(end == null) {
     throw new ApiException(400, "Missing required param: end");
    }

    // create path and map variables
    String path = "/account/iplimits".replaceAll("{format}","json");

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
      if (start != null) {
        hasFields = true;
        mp.fields['start'] = parameterToString(start);
      }
      if (end != null) {
        hasFields = true;
        mp.fields['end'] = parameterToString(end);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (start != null)
        formParams['start'] = parameterToString(start);
if (end != null)
        formParams['end'] = parameterToString(end);
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
  /// Change Account Password
  ///
  /// Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
  Future<TextResponse> updateAccountPassword(String password) async {
    Object postBody = body;

    // verify required params are set
    if(password == null) {
     throw new ApiException(400, "Missing required param: password");
    }

    // create path and map variables
    String path = "/account/password".replaceAll("{format}","json");

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
      if (password != null) {
        hasFields = true;
        mp.fields['password'] = parameterToString(password);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (password != null)
        formParams['password'] = parameterToString(password);
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
  /// Update SSH Keys
  ///
  /// Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
  Future<SuccessTextResponse> updateAccountSshKey(String sshKey) async {
    Object postBody = body;

    // verify required params are set
    if(sshKey == null) {
     throw new ApiException(400, "Missing required param: sshKey");
    }

    // create path and map variables
    String path = "/account/sshkey".replaceAll("{format}","json");

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
      if (sshKey != null) {
        hasFields = true;
        mp.fields['ssh_key'] = parameterToString(sshKey);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (sshKey != null)
        formParams['ssh_key'] = parameterToString(sshKey);
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
  /// Enable Two-Factor Authentication
  ///
  /// Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use &#x60;GET /account/2fa&#x60; first to retrieve the secret key for app setup.
  Future<SuccessTextResponse> updateAccountTfa(String n2faGoogleCode) async {
    Object postBody = body;

    // verify required params are set
    if(n2faGoogleCode == null) {
     throw new ApiException(400, "Missing required param: n2faGoogleCode");
    }

    // create path and map variables
    String path = "/account/2fa".replaceAll("{format}","json");

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
      if (n2faGoogleCode != null) {
        hasFields = true;
        mp.fields['2fa_google_code'] = parameterToString(n2faGoogleCode);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (n2faGoogleCode != null)
        formParams['2fa_google_code'] = parameterToString(n2faGoogleCode);
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
