//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class SSLCertificatesApi {
  SSLCertificatesApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place SSL Cert Order
  ///
  /// Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addSslWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/order';

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

  /// Place SSL Cert Order
  ///
  /// Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
  Future<ServiceOrderPostResponse?> addSsl() async {
    final response = await addSslWithHttpInfo();
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

  /// SSL Cert Ordering Information
  ///
  /// Retrieves available SSL certificate types and pricing for ordering.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewSslWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/order';

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

  /// SSL Cert Ordering Information
  ///
  /// Retrieves available SSL certificate types and pricing for ordering.
  Future<Object?> getNewSsl() async {
    final response = await getNewSslWithHttpInfo();
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

  /// Get SSL Cert Info
  ///
  /// Returns detailed information about a specific SSL certificate including its domain and expiration.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL certificate ID number.
  Future<Response> getSslInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/{id}'
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

  /// Get SSL Cert Info
  ///
  /// Returns detailed information about a specific SSL certificate including its domain and expiration.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL certificate ID number.
  Future<Object?> getSslInfo(int id,) async {
    final response = await getSslInfoWithHttpInfo(id,);
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

  /// Get SSL Cert Invoices
  ///
  /// Returns the billing invoices associated with this SSL certificate.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL Cert ID number
  Future<Response> getSslInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/{id}/invoices'
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

  /// Get SSL Cert Invoices
  ///
  /// Returns the billing invoices associated with this SSL certificate.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL Cert ID number
  Future<ChargeInvoiceRows?> getSslInvoices(int id,) async {
    final response = await getSslInvoicesWithHttpInfo(id,);
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

  /// List SSL Certs
  ///
  /// Returns all SSL certificate services on the account with their current status.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getSslListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/ssl';

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

  /// List SSL Certs
  ///
  /// Returns all SSL certificate services on the account with their current status.
  Future<void> getSslList() async {
    final response = await getSslListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Resend SSL Welcome Email
  ///
  /// Resends the welcome email for the order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL Cert ID number
  Future<Response> getSslWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/{id}/welcome_email'
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

  /// Resend SSL Welcome Email
  ///
  /// Resends the welcome email for the order.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL Cert ID number
  Future<SuccessTextResponse?> getSslWelcomeEmail(int id,) async {
    final response = await getSslWelcomeEmailWithHttpInfo(id,);
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

  /// Validate SSL Cert Order
  ///
  /// Validates an SSL certificate order before placing it.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putSslWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/order';

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

  /// Validate SSL Cert Order
  ///
  /// Validates an SSL certificate order before placing it.
  Future<void> putSsl() async {
    final response = await putSslWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Cancel SSL Certificate Service
  ///
  /// Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL Cert ID number
  Future<Response> sslCancelWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/{id}'
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

  /// Cancel SSL Certificate Service
  ///
  /// Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   SSL Cert ID number
  Future<SslCancel200Response?> sslCancel(int id,) async {
    final response = await sslCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'SslCancel200Response',) as SslCancel200Response;
    
    }
    return null;
  }

  /// Update SSL Cert Order
  ///
  /// Updates settings on an SSL certificate order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   SSL certificate ID number.
  Future<Response> updateSslInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/ssl/{id}'
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

  /// Update SSL Cert Order
  ///
  /// Updates settings on an SSL certificate order.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   SSL certificate ID number.
  Future<SuccessTextResponse?> updateSslInfo(String id,) async {
    final response = await updateSslInfoWithHttpInfo(id,);
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
