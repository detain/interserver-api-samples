//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class PublicApi {
  PublicApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Get Captcha Challenge
  ///
  /// Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getCaptchaWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/captcha';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Get Captcha Challenge
  ///
  /// Returns a base64-encoded JPEG captcha image for human verification. Display this image to the user and submit their response along with the registration or order form. No authentication is required for this endpoint.
  Future<CaptchaResponse?> getCaptcha() async {
    final response = await getCaptchaWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CaptchaResponse',) as CaptchaResponse;
    
    }
    return null;
  }

  /// Get Countries
  ///
  /// Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] fetchBy:
  ///   Get countries by iso2 or iso3 or numcode
  Future<Response> getCountriesWithHttpInfo({ String? fetchBy, }) async {
    // ignore: prefer_const_declarations
    final path = r'/account/countries';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (fetchBy != null) {
      queryParams.addAll(_queryParams('', 'fetch_by', fetchBy));
    }

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Get Countries
  ///
  /// Returns a map of country codes to country names. Use the optional `fetch_by` parameter to select the key format: `iso2` (default, two-letter codes), `iso3` (three-letter codes), or `numcode` (numeric codes). Use these values when populating country fields in account registration or domain contact forms.
  ///
  /// Parameters:
  ///
  /// * [String] fetchBy:
  ///   Get countries by iso2 or iso3 or numcode
  Future<Object?> getCountries({ String? fetchBy, }) async {
    final response = await getCountriesWithHttpInfo( fetchBy: fetchBy, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Object',) as Object;
    
    }
    return null;
  }

  /// Get Server Info
  ///
  /// Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getInfoWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/info';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Get Server Info
  ///
  /// Returns metadata about the API server's available modules, service packages, categories, and types. This public endpoint does not require authentication and is useful for discovering supported services before placing orders.
  Future<ServicesInfo?> getInfo() async {
    final response = await getInfoWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ServicesInfo',) as ServicesInfo;
    
    }
    return null;
  }

  /// Get Login Info
  ///
  /// Gets the various pieces of information useful for generating a login page.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getLoginInfoWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/login';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Get Login Info
  ///
  /// Gets the various pieces of information useful for generating a login page.
  Future<LoginInfo?> getLoginInfo() async {
    final response = await getLoginInfoWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'LoginInfo',) as LoginInfo;
    
    }
    return null;
  }

  /// List Marketplace Servers
  ///
  /// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getMPServersWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/buy_now_servers_list';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// List Marketplace Servers
  ///
  /// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
  Future<BuyItNowList?> getMPServers() async {
    final response = await getMPServersWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BuyItNowList',) as BuyItNowList;
    
    }
    return null;
  }

  /// Get OAuth Redirect URL
  ///
  /// Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] provider (required):
  ///   The OAuth provider name (e.g. `Google`).
  Future<Response> getOauthRedirectWithHttpInfo(String provider,) async {
    // ignore: prefer_const_declarations
    final path = r'/oauth';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'provider', provider));

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Get OAuth Redirect URL
  ///
  /// Returns the OAuth redirect URL for the specified provider. Redirect the user to this URL to begin the OAuth authentication flow. After the user authorizes, the provider will redirect back to your callback endpoint where you should call `POST /oauth`.
  ///
  /// Parameters:
  ///
  /// * [String] provider (required):
  ///   The OAuth provider name (e.g. `Google`).
  Future<GetOauthRedirect200Response?> getOauthRedirect(String provider,) async {
    final response = await getOauthRedirectWithHttpInfo(provider,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GetOauthRedirect200Response',) as GetOauthRedirect200Response;
    
    }
    return null;
  }

  /// Get Available Timezones
  ///
  /// Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getTimezonesWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/account/timezones';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Get Available Timezones
  ///
  /// Returns the complete list of available timezone identifiers (e.g. `America/New_York`, `UTC`). Use these values when updating timezone settings on your account or on VPS and QuickServer services via `/vps/{id}/change_timezone` or `/qs/{id}/change_timezone`.
  Future<List<String>?> getTimezones() async {
    final response = await getTimezonesWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<String>') as List)
        .cast<String>()
        .toList(growable: false);

    }
    return null;
  }

  /// Complete OAuth Two-Factor Verification
  ///
  /// Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [PatchOauthTwoFactorRequest] patchOauthTwoFactorRequest (required):
  Future<Response> patchOauthTwoFactorWithHttpInfo(PatchOauthTwoFactorRequest patchOauthTwoFactorRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/oauth';

    // ignore: prefer_final_locals
    Object? postBody = patchOauthTwoFactorRequest;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['application/json', 'multipart/form-data'];


    return apiClient.invokeAPI(
      path,
      'PATCH',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Complete OAuth Two-Factor Verification
  ///
  /// Completes the OAuth login by verifying a two-factor authentication code. Use the `account_id` returned by `POST /oauth` when the response contained `error_code: \"2fa_required\"`.
  ///
  /// Parameters:
  ///
  /// * [PatchOauthTwoFactorRequest] patchOauthTwoFactorRequest (required):
  Future<PatchOauthTwoFactor200Response?> patchOauthTwoFactor(PatchOauthTwoFactorRequest patchOauthTwoFactorRequest,) async {
    final response = await patchOauthTwoFactorWithHttpInfo(patchOauthTwoFactorRequest,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'PatchOauthTwoFactor200Response',) as PatchOauthTwoFactor200Response;
    
    }
    return null;
  }

  /// Ping Server
  ///
  /// Performs a single ping/pong request to let you know if the server is up.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> pingServerWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/ping';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'GET',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Ping Server
  ///
  /// Performs a single ping/pong request to let you know if the server is up.
  Future<String?> pingServer() async {
    final response = await pingServerWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'String',) as String;
    
    }
    return null;
  }

  /// OAuth Callback
  ///
  /// Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] provider (required):
  ///   The OAuth provider name (e.g. `Google`).
  ///
  /// * [PostOauthCallbackRequest] postOauthCallbackRequest:
  Future<Response> postOauthCallbackWithHttpInfo(String provider, { PostOauthCallbackRequest? postOauthCallbackRequest, }) async {
    // ignore: prefer_const_declarations
    final path = r'/oauth';

    // ignore: prefer_final_locals
    Object? postBody = postOauthCallbackRequest;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'provider', provider));

    const contentTypes = <String>['application/json', 'multipart/form-data'];


    return apiClient.invokeAPI(
      path,
      'POST',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// OAuth Callback
  ///
  /// Handles the OAuth callback after the user authorizes with the provider. Returns the login status. If the account has two-factor authentication enabled, the response will include `error_code: \"2fa_required\"` and an `account_id`; use `PATCH /oauth` with the 2FA code and account ID to complete login.
  ///
  /// Parameters:
  ///
  /// * [String] provider (required):
  ///   The OAuth provider name (e.g. `Google`).
  ///
  /// * [PostOauthCallbackRequest] postOauthCallbackRequest:
  Future<PostOauthCallback200Response?> postOauthCallback(String provider, { PostOauthCallbackRequest? postOauthCallbackRequest, }) async {
    final response = await postOauthCallbackWithHttpInfo(provider,  postOauthCallbackRequest: postOauthCallbackRequest, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'PostOauthCallback200Response',) as PostOauthCallback200Response;
    
    }
    return null;
  }

  /// Submit Login Information
  ///
  /// Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] login (required):
  ///
  /// * [String] passwd (required):
  ///
  /// * [String] remember:
  ///
  /// * [LoginSubmissionExampleGRecaptchaResponse] gRecaptchaResponse:
  ///
  /// * [String] tfa:
  ///   Two Factor Authentication Response.
  Future<Response> submitLoginWithHttpInfo(String login, String passwd, { String? remember, LoginSubmissionExampleGRecaptchaResponse? gRecaptchaResponse, String? tfa, }) async {
    // ignore: prefer_const_declarations
    final path = r'/login';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (login != null) {
      hasFields = true;
      mp.fields[r'login'] = parameterToString(login);
    }
    if (passwd != null) {
      hasFields = true;
      mp.fields[r'passwd'] = parameterToString(passwd);
    }
    if (remember != null) {
      hasFields = true;
      mp.fields[r'remember'] = parameterToString(remember);
    }
    if (gRecaptchaResponse != null) {
      hasFields = true;
      mp.fields[r'g-recaptcha-response'] = parameterToString(gRecaptchaResponse);
    }
    if (tfa != null) {
      hasFields = true;
      mp.fields[r'tfa'] = parameterToString(tfa);
    }
    if (hasFields) {
      postBody = mp;
    }

    return apiClient.invokeAPI(
      path,
      'POST',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Submit Login Information
  ///
  /// Authenticates using the provided login credentials and returns a session token. Include the returned session ID in the `sessionid` header on subsequent requests. If authentication fails, a `402` error is returned.
  ///
  /// Parameters:
  ///
  /// * [String] login (required):
  ///
  /// * [String] passwd (required):
  ///
  /// * [String] remember:
  ///
  /// * [LoginSubmissionExampleGRecaptchaResponse] gRecaptchaResponse:
  ///
  /// * [String] tfa:
  ///   Two Factor Authentication Response.
  Future<LoginSuccessResponse?> submitLogin(String login, String passwd, { String? remember, LoginSubmissionExampleGRecaptchaResponse? gRecaptchaResponse, String? tfa, }) async {
    final response = await submitLoginWithHttpInfo(login, passwd,  remember: remember, gRecaptchaResponse: gRecaptchaResponse, tfa: tfa, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'LoginSuccessResponse',) as LoginSuccessResponse;
    
    }
    return null;
  }

  /// Submit Signup Information
  ///
  /// Creates a new account in our system using the provided information.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [LoginSubmissionExample] loginSubmissionExample:
  Future<Response> submitSignupWithHttpInfo({ LoginSubmissionExample? loginSubmissionExample, }) async {
    // ignore: prefer_const_declarations
    final path = r'/signup';

    // ignore: prefer_final_locals
    Object? postBody = loginSubmissionExample;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['application/json'];


    return apiClient.invokeAPI(
      path,
      'POST',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Submit Signup Information
  ///
  /// Creates a new account in our system using the provided information.
  ///
  /// Parameters:
  ///
  /// * [LoginSubmissionExample] loginSubmissionExample:
  Future<void> submitSignup({ LoginSubmissionExample? loginSubmissionExample, }) async {
    final response = await submitSignupWithHttpInfo( loginSubmissionExample: loginSubmissionExample, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }
}
