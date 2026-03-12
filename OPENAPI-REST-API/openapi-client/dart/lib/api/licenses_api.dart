//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class LicensesApi {
  LicensesApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place License Order
  ///
  /// Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addLicenseWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/order';

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

  /// Place License Order
  ///
  /// Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
  Future<void> addLicense() async {
    final response = await addLicenseWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get License
  ///
  /// Returns detailed information about a specific license including its type, IP assignment, and status.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<Response> getLicenseInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/{id}'
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

  /// Get License
  ///
  /// Returns detailed information about a specific license including its type, IP assignment, and status.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<License?> getLicenseInfo(int id,) async {
    final response = await getLicenseInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'License',) as License;
    
    }
    return null;
  }

  /// Get License Invoices
  ///
  /// Returns the billing invoices associated with this license service.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<Response> getLicenseInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/{id}/invoices'
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

  /// Get License Invoices
  ///
  /// Returns the billing invoices associated with this license service.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<ChargeInvoiceRows?> getLicenseInvoices(int id,) async {
    final response = await getLicenseInvoicesWithHttpInfo(id,);
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

  /// List Licenses
  ///
  /// Returns all software license services on the account with their current status and IP assignments.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getLicenseListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/licenses';

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

  /// List Licenses
  ///
  /// Returns all software license services on the account with their current status and IP assignments.
  Future<List<LicenseRow>?> getLicenseList() async {
    final response = await getLicenseListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<LicenseRow>') as List)
        .cast<LicenseRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get License Order Information for Category
  ///
  /// Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] catTag (required):
  ///   The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.
  Future<Response> getLicenseOrderCatTagInfoWithHttpInfo(String catTag,) async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/order/{catTag}'
      .replaceAll('{catTag}', catTag);

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

  /// Get License Order Information for Category
  ///
  /// Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
  ///
  /// Parameters:
  ///
  /// * [String] catTag (required):
  ///   The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response.
  Future<void> getLicenseOrderCatTagInfo(String catTag,) async {
    final response = await getLicenseOrderCatTagInfoWithHttpInfo(catTag,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Resend License Welcome Email
  ///
  /// Resends the welcome email for the license service. The email contains the license key and activation instructions.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<Response> getLicensesWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/{id}/welcome_email'
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

  /// Resend License Welcome Email
  ///
  /// Resends the welcome email for the license service. The email contains the license key and activation instructions.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<SuccessTextResponse?> getLicensesWelcomeEmail(int id,) async {
    final response = await getLicensesWelcomeEmailWithHttpInfo(id,);
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

  /// Get License Order Information
  ///
  /// Retrieves available license types, categories, and pricing for ordering a new license.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewLicenseWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/order';

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

  /// Get License Order Information
  ///
  /// Retrieves available license types, categories, and pricing for ordering a new license.
  Future<LicensesOrder?> getNewLicense() async {
    final response = await getNewLicenseWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'LicensesOrder',) as LicensesOrder;
    
    }
    return null;
  }

  /// Cancel License
  ///
  /// Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<Response> licensesCancelWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/{id}'
      .replaceAll('{id}', id.toString());

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

  /// Cancel License
  ///
  /// Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<LicensesCancel200Response?> licensesCancel(int id,) async {
    final response = await licensesCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'LicensesCancel200Response',) as LicensesCancel200Response;
    
    }
    return null;
  }

  /// Change License IP
  ///
  /// Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  ///
  /// * [IpObject] ipObject (required):
  Future<Response> postLicenseChangeIpWithHttpInfo(int id, IpObject ipObject,) async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/{id}/change_ip'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = ipObject;

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

  /// Change License IP
  ///
  /// Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  ///
  /// * [IpObject] ipObject (required):
  Future<SuccessTextResponse?> postLicenseChangeIp(int id, IpObject ipObject,) async {
    final response = await postLicenseChangeIpWithHttpInfo(id, ipObject,);
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

  /// Validate License Order
  ///
  /// Validates a license order before placing it. Use this to check for errors before committing to a purchase.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putLicensesWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/order';

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

  /// Validate License Order
  ///
  /// Validates a license order before placing it. Use this to check for errors before committing to a purchase.
  Future<void> putLicenses() async {
    final response = await putLicensesWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Update License
  ///
  /// Updates settings on a license service such as its assigned IP.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<Response> updateLicenseInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/licenses/{id}'
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

  /// Update License
  ///
  /// Updates settings on a license service such as its assigned IP.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The license service ID. Use `license_id` from `GET /licenses`.
  Future<void> updateLicenseInfo(String id,) async {
    final response = await updateLicenseInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }
}
