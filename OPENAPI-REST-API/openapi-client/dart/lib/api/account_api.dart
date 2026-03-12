//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class AccountApi {
  AccountApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Change Account Username
  ///
  /// Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> changeAccountUsernameWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/account/username';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


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

  /// Change Account Username
  ///
  /// Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
  Future<TextResponse?> changeAccountUsername() async {
    final response = await changeAccountUsernameWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'TextResponse',) as TextResponse;
    
    }
    return null;
  }

  /// Unlink OAuth Account
  ///
  /// Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  Future<Response> deleteAccountOauthNameWithHttpInfo(String name,) async {
    // ignore: prefer_const_declarations
    final path = r'/account/oauth/{name}'
      .replaceAll('{name}', name);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'DELETE',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Unlink OAuth Account
  ///
  /// Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  Future<SuccessTextResponse?> deleteAccountOauthName(String name,) async {
    final response = await deleteAccountOauthNameWithHttpInfo(name,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }

  /// Disable Two-Factor Authentication
  ///
  /// Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> deleteAccountTfaWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/account/2fa';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'DELETE',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Disable Two-Factor Authentication
  ///
  /// Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
  Future<SuccessTextResponse?> deleteAccountTfa() async {
    final response = await deleteAccountTfaWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }

  /// Remove IP Access Restriction
  ///
  /// Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> deleteIpLimitWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/account/iplimits';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['application/json'];


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

  /// Remove IP Access Restriction
  ///
  /// Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
  Future<GenericResponse?> deleteIpLimit() async {
    final response = await deleteIpLimitWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GenericResponse',) as GenericResponse;
    
    }
    return null;
  }

  /// Retrieve Account Details
  ///
  /// Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getAccountInfoWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/account';

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

  /// Retrieve Account Details
  ///
  /// Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
  Future<AccountInfo?> getAccountInfo() async {
    final response = await getAccountInfoWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'AccountInfo',) as AccountInfo;
    
    }
    return null;
  }

  /// Get Two-Factor Setup Data
  ///
  /// Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getAccountTfaSetupWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/account/2fa';

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

  /// Get Two-Factor Setup Data
  ///
  /// Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
  Future<GetAccountTfaSetup200Response?> getAccountTfaSetup() async {
    final response = await getAccountTfaSetupWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GetAccountTfaSetup200Response',) as GetAccountTfaSetup200Response;
    
    }
    return null;
  }

  /// Get Home Data
  ///
  /// Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getHomeWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/home';

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

  /// Get Home Data
  ///
  /// Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
  Future<Home?> getHome() async {
    final response = await getHomeWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Home',) as Home;
    
    }
    return null;
  }

  /// Search Autocomplete
  ///
  /// Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getSearchWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/search';

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

  /// Search Autocomplete
  ///
  /// Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
  Future<SearchAutocompleteResponse?> getSearch() async {
    final response = await getSearchWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SearchAutocompleteResponse',) as SearchAutocompleteResponse;
    
    }
    return null;
  }

  /// Log Out
  ///
  /// Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> logoutWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/logout';

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

  /// Log Out
  ///
  /// Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
  Future<SuccessTextResponse?> logout() async {
    final response = await logoutWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }

  /// Logout of OAuth
  ///
  /// Logs out of the specified OAuth provider session.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  Future<Response> logoutAccountOauthWithHttpInfo(String name,) async {
    // ignore: prefer_const_declarations
    final path = r'/account/oauth/{name}/logout'
      .replaceAll('{name}', name);

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

  /// Logout of OAuth
  ///
  /// Logs out of the specified OAuth provider session.
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  Future<SuccessTextResponse?> logoutAccountOauth(String name,) async {
    final response = await logoutAccountOauthWithHttpInfo(name,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }

  /// Generate New API Key
  ///
  /// Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> updateAccountApiKeyWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/account/apikey';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


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

  /// Generate New API Key
  ///
  /// Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
  Future<SuccessTextResponse?> updateAccountApiKey() async {
    final response = await updateAccountApiKeyWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }

  /// Update Account Feature Flags
  ///
  /// Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] disableReset:
  ///
  /// * [int] disableReinstall:
  Future<Response> updateAccountFeaturesWithHttpInfo({ int? disableReset, int? disableReinstall, }) async {
    // ignore: prefer_const_declarations
    final path = r'/account/features';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (disableReset != null) {
      hasFields = true;
      mp.fields[r'disable_reset'] = parameterToString(disableReset);
    }
    if (disableReinstall != null) {
      hasFields = true;
      mp.fields[r'disable_reinstall'] = parameterToString(disableReinstall);
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

  /// Update Account Feature Flags
  ///
  /// Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
  ///
  /// Parameters:
  ///
  /// * [int] disableReset:
  ///
  /// * [int] disableReinstall:
  Future<SuccessTextResponse?> updateAccountFeatures({ int? disableReset, int? disableReinstall, }) async {
    final response = await updateAccountFeaturesWithHttpInfo( disableReset: disableReset, disableReinstall: disableReinstall, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }

  /// Update Account Information
  ///
  /// Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  ///   Your name.
  ///
  /// * [String] address (required):
  ///   Your address.
  ///
  /// * [String] city (required):
  ///   Your city.
  ///
  /// * [String] state (required):
  ///   Your state.
  ///
  /// * [String] zip (required):
  ///   Your ZIP code.
  ///
  /// * [String] country (required):
  ///   Your country.
  ///
  /// * [String] phone (required):
  ///   Your phone number.
  ///
  /// * [String] company:
  ///   Your company name.
  ///
  /// * [String] address2:
  ///   Additional address information.
  ///
  /// * [String] locale:
  ///   Your preferred locale.
  ///
  /// * [String] emailInvoices:
  ///   Your email for invoice notifications.
  ///
  /// * [String] emailAbuse:
  ///   Your email for abuse notifications.
  ///
  /// * [bool] disableReset:
  ///   Set to `true` to disable account resets, or `false` to enable them.
  ///
  /// * [bool] disableReinstall:
  ///   Set to `true` to disable server reinstalls, or `false` to enable them.
  ///
  /// * [bool] disableServerNotifications:
  ///   Set to `true` to disable server notifications, or `false` to enable them.
  ///
  /// * [bool] disableEmailNotifications:
  ///   Set to `true` to disable email notifications, or `false` to enable them.
  ///
  /// * [String] gstin:
  ///   Your GST identification number (if applicable).
  Future<Response> updateAccountInfoWithHttpInfo(String name, String address, String city, String state, String zip, String country, String phone, { String? company, String? address2, String? locale, String? emailInvoices, String? emailAbuse, bool? disableReset, bool? disableReinstall, bool? disableServerNotifications, bool? disableEmailNotifications, String? gstin, }) async {
    // ignore: prefer_const_declarations
    final path = r'/account';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (name != null) {
      hasFields = true;
      mp.fields[r'name'] = parameterToString(name);
    }
    if (company != null) {
      hasFields = true;
      mp.fields[r'company'] = parameterToString(company);
    }
    if (address != null) {
      hasFields = true;
      mp.fields[r'address'] = parameterToString(address);
    }
    if (address2 != null) {
      hasFields = true;
      mp.fields[r'address2'] = parameterToString(address2);
    }
    if (city != null) {
      hasFields = true;
      mp.fields[r'city'] = parameterToString(city);
    }
    if (state != null) {
      hasFields = true;
      mp.fields[r'state'] = parameterToString(state);
    }
    if (zip != null) {
      hasFields = true;
      mp.fields[r'zip'] = parameterToString(zip);
    }
    if (country != null) {
      hasFields = true;
      mp.fields[r'country'] = parameterToString(country);
    }
    if (phone != null) {
      hasFields = true;
      mp.fields[r'phone'] = parameterToString(phone);
    }
    if (locale != null) {
      hasFields = true;
      mp.fields[r'locale'] = parameterToString(locale);
    }
    if (emailInvoices != null) {
      hasFields = true;
      mp.fields[r'email_invoices'] = parameterToString(emailInvoices);
    }
    if (emailAbuse != null) {
      hasFields = true;
      mp.fields[r'email_abuse'] = parameterToString(emailAbuse);
    }
    if (disableReset != null) {
      hasFields = true;
      mp.fields[r'disable_reset'] = parameterToString(disableReset);
    }
    if (disableReinstall != null) {
      hasFields = true;
      mp.fields[r'disable_reinstall'] = parameterToString(disableReinstall);
    }
    if (disableServerNotifications != null) {
      hasFields = true;
      mp.fields[r'disable_server_notifications'] = parameterToString(disableServerNotifications);
    }
    if (disableEmailNotifications != null) {
      hasFields = true;
      mp.fields[r'disable_email_notifications'] = parameterToString(disableEmailNotifications);
    }
    if (gstin != null) {
      hasFields = true;
      mp.fields[r'gstin'] = parameterToString(gstin);
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

  /// Update Account Information
  ///
  /// Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  ///   Your name.
  ///
  /// * [String] address (required):
  ///   Your address.
  ///
  /// * [String] city (required):
  ///   Your city.
  ///
  /// * [String] state (required):
  ///   Your state.
  ///
  /// * [String] zip (required):
  ///   Your ZIP code.
  ///
  /// * [String] country (required):
  ///   Your country.
  ///
  /// * [String] phone (required):
  ///   Your phone number.
  ///
  /// * [String] company:
  ///   Your company name.
  ///
  /// * [String] address2:
  ///   Additional address information.
  ///
  /// * [String] locale:
  ///   Your preferred locale.
  ///
  /// * [String] emailInvoices:
  ///   Your email for invoice notifications.
  ///
  /// * [String] emailAbuse:
  ///   Your email for abuse notifications.
  ///
  /// * [bool] disableReset:
  ///   Set to `true` to disable account resets, or `false` to enable them.
  ///
  /// * [bool] disableReinstall:
  ///   Set to `true` to disable server reinstalls, or `false` to enable them.
  ///
  /// * [bool] disableServerNotifications:
  ///   Set to `true` to disable server notifications, or `false` to enable them.
  ///
  /// * [bool] disableEmailNotifications:
  ///   Set to `true` to disable email notifications, or `false` to enable them.
  ///
  /// * [String] gstin:
  ///   Your GST identification number (if applicable).
  Future<void> updateAccountInfo(String name, String address, String city, String state, String zip, String country, String phone, { String? company, String? address2, String? locale, String? emailInvoices, String? emailAbuse, bool? disableReset, bool? disableReinstall, bool? disableServerNotifications, bool? disableEmailNotifications, String? gstin, }) async {
    final response = await updateAccountInfoWithHttpInfo(name, address, city, state, zip, country, phone,  company: company, address2: address2, locale: locale, emailInvoices: emailInvoices, emailAbuse: emailAbuse, disableReset: disableReset, disableReinstall: disableReinstall, disableServerNotifications: disableServerNotifications, disableEmailNotifications: disableEmailNotifications, gstin: gstin, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Add IP Access Restriction
  ///
  /// Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] start (required):
  ///   The begining (or first) IP address in the range.
  ///
  /// * [String] end (required):
  ///   The ending (or last) IP address in the range.
  Future<Response> updateAccountIpLimitsWithHttpInfo(String start, String end,) async {
    // ignore: prefer_const_declarations
    final path = r'/account/iplimits';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (start != null) {
      hasFields = true;
      mp.fields[r'start'] = parameterToString(start);
    }
    if (end != null) {
      hasFields = true;
      mp.fields[r'end'] = parameterToString(end);
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

  /// Add IP Access Restriction
  ///
  /// Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
  ///
  /// Parameters:
  ///
  /// * [String] start (required):
  ///   The begining (or first) IP address in the range.
  ///
  /// * [String] end (required):
  ///   The ending (or last) IP address in the range.
  Future<void> updateAccountIpLimits(String start, String end,) async {
    final response = await updateAccountIpLimitsWithHttpInfo(start, end,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Change Account Password
  ///
  /// Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] password (required):
  Future<Response> updateAccountPasswordWithHttpInfo(String password,) async {
    // ignore: prefer_const_declarations
    final path = r'/account/password';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (password != null) {
      hasFields = true;
      mp.fields[r'password'] = parameterToString(password);
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

  /// Change Account Password
  ///
  /// Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
  ///
  /// Parameters:
  ///
  /// * [String] password (required):
  Future<TextResponse?> updateAccountPassword(String password,) async {
    final response = await updateAccountPasswordWithHttpInfo(password,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'TextResponse',) as TextResponse;
    
    }
    return null;
  }

  /// Update SSH Keys
  ///
  /// Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] sshKey:
  Future<Response> updateAccountSshKeyWithHttpInfo({ String? sshKey, }) async {
    // ignore: prefer_const_declarations
    final path = r'/account/sshkey';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (sshKey != null) {
      hasFields = true;
      mp.fields[r'ssh_key'] = parameterToString(sshKey);
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

  /// Update SSH Keys
  ///
  /// Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
  ///
  /// Parameters:
  ///
  /// * [String] sshKey:
  Future<SuccessTextResponse?> updateAccountSshKey({ String? sshKey, }) async {
    final response = await updateAccountSshKeyWithHttpInfo( sshKey: sshKey, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }

  /// Enable Two-Factor Authentication
  ///
  /// Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] n2faGoogleCode (required):
  ///   The 6-digit verification code from your authenticator app.
  Future<Response> updateAccountTfaWithHttpInfo(String n2faGoogleCode,) async {
    // ignore: prefer_const_declarations
    final path = r'/account/2fa';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (n2faGoogleCode != null) {
      hasFields = true;
      mp.fields[r'2fa_google_code'] = parameterToString(n2faGoogleCode);
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

  /// Enable Two-Factor Authentication
  ///
  /// Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
  ///
  /// Parameters:
  ///
  /// * [String] n2faGoogleCode (required):
  ///   The 6-digit verification code from your authenticator app.
  Future<SuccessTextResponse?> updateAccountTfa(String n2faGoogleCode,) async {
    final response = await updateAccountTfaWithHttpInfo(n2faGoogleCode,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SuccessTextResponse',) as SuccessTextResponse;
    
    }
    return null;
  }
}
