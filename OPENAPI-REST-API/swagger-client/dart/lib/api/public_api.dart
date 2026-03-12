part of swagger.api;



class PublicApi {
  final ApiClient apiClient;

  PublicApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Get Captcha Challenge
  ///
  /// Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
  Future<CaptchaResponse> getCaptcha() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/captcha".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'CaptchaResponse') as CaptchaResponse ;
    } else {
      return null;
    }
  }
  /// Get Countries
  ///
  /// Returns a map of country codes to country names. Use the optional &#x60;fetch_by&#x60; parameter to select the key format: &#x60;iso2&#x60; (default, two-letter codes), &#x60;iso3&#x60; (three-letter codes), or &#x60;numcode&#x60; (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
  Future<Object> getCountries({ String fetchBy }) async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/account/countries".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if(fetchBy != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "fetch_by", fetchBy));
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
          apiClient.deserialize(response.body, 'Object') as Object ;
    } else {
      return null;
    }
  }
  /// Get Server Info
  ///
  /// Returns metadata about the API server&#x27;s available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
  Future<ServicesInfo> getInfo() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/info".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'ServicesInfo') as ServicesInfo ;
    } else {
      return null;
    }
  }
  /// Get Login Info
  ///
  /// Gets the various pieces of information useful for generating a login page.
  Future<LoginInfo> getLoginInfo() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/login".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'LoginInfo') as LoginInfo ;
    } else {
      return null;
    }
  }
  /// List Marketplace Servers
  ///
  /// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
  Future<BuyItNowList> getMPServers() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/buy_now_servers_list".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'BuyItNowList') as BuyItNowList ;
    } else {
      return null;
    }
  }
  /// Get OAuth Redirect URL
  ///
  /// Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call &#x60;POST /oauth&#x60;.
  Future<InlineResponse2005> getOauthRedirect(String provider) async {
    Object postBody = null;

    // verify required params are set
    if(provider == null) {
     throw new ApiException(400, "Missing required param: provider");
    }

    // create path and map variables
    String path = "/oauth".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
      queryParams.addAll(_convertParametersForCollectionFormat("", "provider", provider));
    
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
          apiClient.deserialize(response.body, 'InlineResponse2005') as InlineResponse2005 ;
    } else {
      return null;
    }
  }
  /// Get Available Timezones
  ///
  /// Returns the complete list of available timezone identifiers (e.g. &#x60;America/New_York&#x60;, &#x60;UTC&#x60;). Use these values when updating timezone settings on your account or on VPS and QuickServer services via &#x60;/vps/{id}/change_timezone&#x60; or &#x60;/qs/{id}/change_timezone&#x60;.
  Future<List<String>> getTimezones() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/account/timezones".replaceAll("{format}","json");

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
        (apiClient.deserialize(response.body, 'List<String>') as List).map((item) => item as String).toList();
    } else {
      return null;
    }
  }
  /// Complete OAuth Two-Factor Verification
  ///
  /// Completes the OAuth login by verifying a two-factor authentication code. Use the &#x60;account_id&#x60; returned by &#x60;POST /oauth&#x60; when the response contained &#x60;error_code: \&quot;2fa_required\&quot;&#x60;.
  Future<InlineResponse2007> patchOauthTwoFactor(OauthBody2 body) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }

    // create path and map variables
    String path = "/oauth".replaceAll("{format}","json");

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
      if (accountId != null) {
        hasFields = true;
        mp.fields['account_id'] = parameterToString(accountId);
      }
      if (code != null) {
        hasFields = true;
        mp.fields['code'] = parameterToString(code);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (accountId != null)
        formParams['account_id'] = parameterToString(accountId);
if (code != null)
        formParams['code'] = parameterToString(code);
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
          apiClient.deserialize(response.body, 'InlineResponse2007') as InlineResponse2007 ;
    } else {
      return null;
    }
  }
  /// Ping Server
  ///
  /// Performs a single ping/pong request to let you know if the server is up.
  Future<String> pingServer() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/ping".replaceAll("{format}","json");

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
          apiClient.deserialize(response.body, 'String') as String ;
    } else {
      return null;
    }
  }
  /// OAuth Callback
  ///
  /// Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include &#x60;error_code: \&quot;2fa_required\&quot;&#x60; and an &#x60;account_id&#x60;; use &#x60;PATCH /oauth&#x60; with the 2FA code and account ID to complete login.
  Future<InlineResponse2006> postOauthCallback(String provider, { OauthBody body }) async {
    Object postBody = body;

    // verify required params are set
    if(provider == null) {
     throw new ApiException(400, "Missing required param: provider");
    }

    // create path and map variables
    String path = "/oauth".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
      queryParams.addAll(_convertParametersForCollectionFormat("", "provider", provider));
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (provider != null) {
        hasFields = true;
        mp.fields['provider'] = parameterToString(provider);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (provider != null)
        formParams['provider'] = parameterToString(provider);
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
          apiClient.deserialize(response.body, 'InlineResponse2006') as InlineResponse2006 ;
    } else {
      return null;
    }
  }
  /// Submit Login Information
  ///
  /// Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the &#x60;sessionid&#x60; header on subsequent requests. If authentication fails, a &#x60;402&#x60; error is returned.
  Future<LoginSuccessResponse> submitLogin(String login, String passwd, String remember, LoginSubmissionExampleGrecaptcharesponse gRecaptchaResponse, String tfa) async {
    Object postBody = body;

    // verify required params are set
    if(login == null) {
     throw new ApiException(400, "Missing required param: login");
    }
    if(passwd == null) {
     throw new ApiException(400, "Missing required param: passwd");
    }
    if(remember == null) {
     throw new ApiException(400, "Missing required param: remember");
    }
    if(gRecaptchaResponse == null) {
     throw new ApiException(400, "Missing required param: gRecaptchaResponse");
    }
    if(tfa == null) {
     throw new ApiException(400, "Missing required param: tfa");
    }

    // create path and map variables
    String path = "/login".replaceAll("{format}","json");

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
      if (login != null) {
        hasFields = true;
        mp.fields['login'] = parameterToString(login);
      }
      if (passwd != null) {
        hasFields = true;
        mp.fields['passwd'] = parameterToString(passwd);
      }
      if (remember != null) {
        hasFields = true;
        mp.fields['remember'] = parameterToString(remember);
      }
      if (gRecaptchaResponse != null) {
        hasFields = true;
        mp.fields['g-recaptcha-response'] = parameterToString(gRecaptchaResponse);
      }
      if (tfa != null) {
        hasFields = true;
        mp.fields['tfa'] = parameterToString(tfa);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (login != null)
        formParams['login'] = parameterToString(login);
if (passwd != null)
        formParams['passwd'] = parameterToString(passwd);
if (remember != null)
        formParams['remember'] = parameterToString(remember);
if (gRecaptchaResponse != null)
        formParams['g-recaptcha-response'] = parameterToString(gRecaptchaResponse);
if (tfa != null)
        formParams['tfa'] = parameterToString(tfa);
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
          apiClient.deserialize(response.body, 'LoginSuccessResponse') as LoginSuccessResponse ;
    } else {
      return null;
    }
  }
  /// Submit Signup Information
  ///
  /// Creates a new account in our system using the provided information.
  Future submitSignup({ LoginSubmissionExample body }) async {
    Object postBody = body;

    // verify required params are set

    // create path and map variables
    String path = "/signup".replaceAll("{format}","json");

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
