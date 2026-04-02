//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class WebhostingApi {
  WebhostingApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place Website Order
  ///
  /// Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addWebsiteWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/websites/order';

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

  /// Place Website Order
  ///
  /// Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
  Future<ServiceOrderPostResponse?> addWebsite() async {
    final response = await addWebsiteWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ServiceOrderPostResponse',) as ServiceOrderPostResponse;
    
    }
    return null;
  }

  /// Website Ordering Information
  ///
  /// Retrieves available webhosting plans and pricing for ordering.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewWebsiteWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/websites/order';

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

  /// Website Ordering Information
  ///
  /// Retrieves available webhosting plans and pricing for ordering.
  Future<WebsitesOrder?> getNewWebsite() async {
    final response = await getNewWebsiteWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'WebsitesOrder',) as WebsitesOrder;
    
    }
    return null;
  }

  /// Get Website IP Information
  ///
  /// Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> getWebsiteBuyIpWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/buy_ip'
      .replaceAll('{id}', id.toString());

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

  /// Get Website IP Information
  ///
  /// Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<GetWebsiteBuyIp200Response?> getWebsiteBuyIp(int id,) async {
    final response = await getWebsiteBuyIpWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GetWebsiteBuyIp200Response',) as GetWebsiteBuyIp200Response;
    
    }
    return null;
  }

  /// Get Website Order
  ///
  /// Returns detailed information about a specific webhosting order including its domain, plan, and status.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> getWebsiteInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}'
      .replaceAll('{id}', id.toString());

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

  /// Get Website Order
  ///
  /// Returns detailed information about a specific webhosting order including its domain, plan, and status.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Website?> getWebsiteInfo(int id,) async {
    final response = await getWebsiteInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Website',) as Website;
    
    }
    return null;
  }

  /// Get Website Invoices
  ///
  /// Returns the billing invoices associated with this webhosting service.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> getWebsiteInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/invoices'
      .replaceAll('{id}', id.toString());

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

  /// Get Website Invoices
  ///
  /// Returns the billing invoices associated with this webhosting service.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<ChargeInvoiceRows?> getWebsiteInvoices(int id,) async {
    final response = await getWebsiteInvoicesWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ChargeInvoiceRows',) as ChargeInvoiceRows;
    
    }
    return null;
  }

  /// Get Website Listing
  ///
  /// Gets a listing of your webhosting orders and service details.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getWebsiteListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/websites';

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

  /// Get Website Listing
  ///
  /// Gets a listing of your webhosting orders and service details.
  Future<List<WebsiteRow>?> getWebsiteList() async {
    final response = await getWebsiteListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<WebsiteRow>') as List)
        .cast<WebsiteRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Website Backups
  ///
  /// Gets a list of the backups that exist for a website and their sizes.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> getWebsitesBackupsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/backups'
      .replaceAll('{id}', id.toString());

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

  /// Get Website Backups
  ///
  /// Gets a list of the backups that exist for a website and their sizes.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<WebsiteBackups?> getWebsitesBackups(int id,) async {
    final response = await getWebsitesBackupsWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'WebsiteBackups',) as WebsiteBackups;
    
    }
    return null;
  }

  /// Hosting Panel Auto Login
  ///
  /// Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> getWebsitesLoginWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/login'
      .replaceAll('{id}', id.toString());

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

  /// Hosting Panel Auto Login
  ///
  /// Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<WebsiteLoginResponse?> getWebsitesLogin(int id,) async {
    final response = await getWebsitesLoginWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'WebsiteLoginResponse',) as WebsiteLoginResponse;
    
    }
    return null;
  }

  /// Resend Website Welcome Email
  ///
  /// Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> getWebsitesWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/welcome_email'
      .replaceAll('{id}', id.toString());

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

  /// Resend Website Welcome Email
  ///
  /// Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<SuccessTextResponse?> getWebsitesWelcomeEmail(int id,) async {
    final response = await getWebsitesWelcomeEmailWithHttpInfo(id,);
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

  /// Get Website Reverse DNS
  ///
  /// Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> gettWebsiteReverseDnsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/reverse_dns'
      .replaceAll('{id}', id.toString());

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

  /// Get Website Reverse DNS
  ///
  /// Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<ReverseDnsEntries?> gettWebsiteReverseDns(int id,) async {
    final response = await gettWebsiteReverseDnsWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ReverseDnsEntries',) as ReverseDnsEntries;
    
    }
    return null;
  }

  /// Update Website IP DNS
  ///
  /// Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  ///
  /// * [PostWebsiteBuyIpRequest] postWebsiteBuyIpRequest (required):
  Future<Response> postWebsiteBuyIpWithHttpInfo(int id, PostWebsiteBuyIpRequest postWebsiteBuyIpRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/buy_ip'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = postWebsiteBuyIpRequest;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

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

  /// Update Website IP DNS
  ///
  /// Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  ///
  /// * [PostWebsiteBuyIpRequest] postWebsiteBuyIpRequest (required):
  Future<PostWebsiteBuyIp200Response?> postWebsiteBuyIp(int id, PostWebsiteBuyIpRequest postWebsiteBuyIpRequest,) async {
    final response = await postWebsiteBuyIpWithHttpInfo(id, postWebsiteBuyIpRequest,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'PostWebsiteBuyIp200Response',) as PostWebsiteBuyIp200Response;
    
    }
    return null;
  }

  /// Request Website Migration
  ///
  /// Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  ///
  /// * [PostWebsiteMigrationRequest] postWebsiteMigrationRequest (required):
  Future<Response> postWebsiteMigrationWithHttpInfo(int id, PostWebsiteMigrationRequest postWebsiteMigrationRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/migration'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = postWebsiteMigrationRequest;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

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

  /// Request Website Migration
  ///
  /// Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  ///
  /// * [PostWebsiteMigrationRequest] postWebsiteMigrationRequest (required):
  Future<PostWebsiteMigration200Response?> postWebsiteMigration(int id, PostWebsiteMigrationRequest postWebsiteMigrationRequest,) async {
    final response = await postWebsiteMigrationWithHttpInfo(id, postWebsiteMigrationRequest,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'PostWebsiteMigration200Response',) as PostWebsiteMigration200Response;
    
    }
    return null;
  }

  /// Update Website Reverse DNS
  ///
  /// Updates the reverse DNS entries for each of the IP addresses for the website.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<Response> postWebsitesReverseDnsWithHttpInfo(int id, ReverseDnsEntries reverseDnsEntries,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}/reverse_dns'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = reverseDnsEntries;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

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

  /// Update Website Reverse DNS
  ///
  /// Updates the reverse DNS entries for each of the IP addresses for the website.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<TextResponse?> postWebsitesReverseDns(int id, ReverseDnsEntries reverseDnsEntries,) async {
    final response = await postWebsitesReverseDnsWithHttpInfo(id, reverseDnsEntries,);
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

  /// Validate Webhosting Order
  ///
  /// Validates a webhosting order before placing it.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putWebsitesWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/websites/order';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


    return apiClient.invokeAPI(
      path,
      'PUT',
      queryParams,
      postBody,
      headerParams,
      formParams,
      contentTypes.isEmpty ? null : contentTypes.first,
    );
  }

  /// Validate Webhosting Order
  ///
  /// Validates a webhosting order before placing it.
  Future<void> putWebsites() async {
    final response = await putWebsitesWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Update Website Order
  ///
  /// Updates settings on a webhosting order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> updateWebsiteInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}'
      .replaceAll('{id}', id);

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

  /// Update Website Order
  ///
  /// Updates settings on a webhosting order.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<SuccessTextResponse?> updateWebsiteInfo(String id,) async {
    final response = await updateWebsiteInfoWithHttpInfo(id,);
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

  /// Cancel Website
  ///
  /// Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<Response> webhostingCancelWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/websites/{id}'
      .replaceAll('{id}', id);

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

  /// Cancel Website
  ///
  /// Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The website service ID. Use `website_id` from `GET /websites`.
  Future<WebhostingCancel200Response?> webhostingCancel(String id,) async {
    final response = await webhostingCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'WebhostingCancel200Response',) as WebhostingCancel200Response;
    
    }
    return null;
  }
}
