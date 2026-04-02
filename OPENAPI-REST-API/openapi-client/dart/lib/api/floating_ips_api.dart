//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class FloatingIPsApi {
  FloatingIPsApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place Floating IP Order
  ///
  /// Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addFloatingIpWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/order';

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

  /// Place Floating IP Order
  ///
  /// Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
  Future<ServiceOrderPostResponse?> addFloatingIp() async {
    final response = await addFloatingIpWithHttpInfo();
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

  /// Cancel Floating IP
  ///
  /// Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<Response> floatingIpsCancelWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/{id}'
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

  /// Cancel Floating IP
  ///
  /// Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<FloatingIpsCancel200Response?> floatingIpsCancel(int id,) async {
    final response = await floatingIpsCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'FloatingIpsCancel200Response',) as FloatingIpsCancel200Response;
    
    }
    return null;
  }

  /// View Floating IP
  ///
  /// Returns detailed information about a specific Floating IP service including its current target IP assignment.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<Response> getFloatingIpInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/{id}'
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

  /// View Floating IP
  ///
  /// Returns detailed information about a specific Floating IP service including its current target IP assignment.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<Object?> getFloatingIpInfo(int id,) async {
    final response = await getFloatingIpInfoWithHttpInfo(id,);
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

  /// Get Floating IP Invoices
  ///
  /// Returns the billing invoices associated with this Floating IP service.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<Response> getFloatingIpInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/{id}/invoices'
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

  /// Get Floating IP Invoices
  ///
  /// Returns the billing invoices associated with this Floating IP service.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<ChargeInvoiceRows?> getFloatingIpInvoices(int id,) async {
    final response = await getFloatingIpInvoicesWithHttpInfo(id,);
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

  /// List Floating IPs
  ///
  /// Returns all Floating IP services on the account with their current status and assignment details.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getFloatingIpsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips';

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

  /// List Floating IPs
  ///
  /// Returns all Floating IP services on the account with their current status and assignment details.
  Future<List<Object>?> getFloatingIpsList() async {
    final response = await getFloatingIpsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<Object>') as List)
        .cast<Object>()
        .toList(growable: false);

    }
    return null;
  }

  /// Resend Floating IPs Welcome Email
  ///
  /// Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<Response> getFloatingIpsWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/{id}/welcome_email'
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

  /// Resend Floating IPs Welcome Email
  ///
  /// Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<SuccessTextResponse?> getFloatingIpsWelcomeEmail(int id,) async {
    final response = await getFloatingIpsWelcomeEmailWithHttpInfo(id,);
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

  /// Get Floating IP Ordering Information
  ///
  /// Retrieves available options and pricing for ordering a new Floating IP.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewFloatingIpWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/order';

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

  /// Get Floating IP Ordering Information
  ///
  /// Retrieves available options and pricing for ordering a new Floating IP.
  Future<Object?> getNewFloatingIp() async {
    final response = await getNewFloatingIpWithHttpInfo();
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

  /// Change Floating IP Target
  ///
  /// Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  ///
  /// * [String] ip (required):
  ///   IP Address
  Future<Response> postFloatingIpsChangeIpWithHttpInfo(int id, String ip,) async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/{id}/change_ip'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (ip != null) {
      hasFields = true;
      mp.fields[r'ip'] = parameterToString(ip);
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

  /// Change Floating IP Target
  ///
  /// Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  ///
  /// * [String] ip (required):
  ///   IP Address
  Future<SuccessTextResponse?> postFloatingIpsChangeIp(int id, String ip,) async {
    final response = await postFloatingIpsChangeIpWithHttpInfo(id, ip,);
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

  /// Validate Floating IP Order
  ///
  /// Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putFloatingIpsWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/order';

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

  /// Validate Floating IP Order
  ///
  /// Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
  Future<void> putFloatingIps() async {
    final response = await putFloatingIpsWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Update Floating IP
  ///
  /// Updates settings on a Floating IP service, such as its label or configuration metadata.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<Response> updateFloatingIpInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/floating_ips/{id}'
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

  /// Update Floating IP
  ///
  /// Updates settings on a Floating IP service, such as its label or configuration metadata.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The Floating IP service ID. Use the ID from `GET /floating_ips`.
  Future<SuccessTextResponse?> updateFloatingIpInfo(String id,) async {
    final response = await updateFloatingIpInfoWithHttpInfo(id,);
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
