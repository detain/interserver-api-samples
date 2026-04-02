//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class BackupsApi {
  BackupsApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place Backup Order
  ///
  /// Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [bool] validateOnly:
  ///
  /// * [int] serviceType:
  ///
  /// * [String] coupon:
  Future<Response> addBackupWithHttpInfo({ bool? validateOnly, int? serviceType, String? coupon, }) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/order';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (validateOnly != null) {
      hasFields = true;
      mp.fields[r'validateOnly'] = parameterToString(validateOnly);
    }
    if (serviceType != null) {
      hasFields = true;
      mp.fields[r'serviceType'] = parameterToString(serviceType);
    }
    if (coupon != null) {
      hasFields = true;
      mp.fields[r'coupon'] = parameterToString(coupon);
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

  /// Place Backup Order
  ///
  /// Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
  ///
  /// Parameters:
  ///
  /// * [bool] validateOnly:
  ///
  /// * [int] serviceType:
  ///
  /// * [String] coupon:
  Future<BackupOrderPostResponse?> addBackup({ bool? validateOnly, int? serviceType, String? coupon, }) async {
    final response = await addBackupWithHttpInfo( validateOnly: validateOnly, serviceType: serviceType, coupon: coupon, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BackupOrderPostResponse',) as BackupOrderPostResponse;
    
    }
    return null;
  }

  /// Cancel Backup Service
  ///
  /// Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<Response> cancelBackupWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/{id}'
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

  /// Cancel Backup Service
  ///
  /// Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<CancelBackup200Response?> cancelBackup(int id,) async {
    final response = await cancelBackupWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CancelBackup200Response',) as CancelBackup200Response;
    
    }
    return null;
  }

  /// Get Backup Service Details
  ///
  /// Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<Response> getBackupInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/{id}'
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

  /// Get Backup Service Details
  ///
  /// Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<Backup?> getBackupInfo(int id,) async {
    final response = await getBackupInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Backup',) as Backup;
    
    }
    return null;
  }

  /// Get Backup Order Invoices
  ///
  /// Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<Response> getBackupInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/{id}/invoices'
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

  /// Get Backup Order Invoices
  ///
  /// Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<ChargeInvoiceRows?> getBackupInvoices(int id,) async {
    final response = await getBackupInvoicesWithHttpInfo(id,);
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

  /// Get Backup Storage Panel Login
  ///
  /// Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<Response> getBackupLoginWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/{id}/login'
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

  /// Get Backup Storage Panel Login
  ///
  /// Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<BackupLoginResponse?> getBackupLogin(int id,) async {
    final response = await getBackupLoginWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BackupLoginResponse',) as BackupLoginResponse;
    
    }
    return null;
  }

  /// List Backup Services
  ///
  /// Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getBackupsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/backups';

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

  /// List Backup Services
  ///
  /// Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
  Future<List<BackupRow>?> getBackupsList() async {
    final response = await getBackupsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<BackupRow>') as List)
        .cast<BackupRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Resend Backup Welcome Email
  ///
  /// Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<Response> getBackupsWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/{id}/welcome_email'
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

  /// Resend Backup Welcome Email
  ///
  /// Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<SuccessTextResponse?> getBackupsWelcomeEmail(int id,) async {
    final response = await getBackupsWelcomeEmailWithHttpInfo(id,);
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

  /// Get Backup Order Form Data
  ///
  /// Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewBackupWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/backups/order';

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

  /// Get Backup Order Form Data
  ///
  /// Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
  Future<BackupsOrder?> getNewBackup() async {
    final response = await getNewBackupWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BackupsOrder',) as BackupsOrder;
    
    }
    return null;
  }

  /// Update Backup Information
  ///
  /// Updates backup storage service metadata, such as stored credentials or settings for the order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<Response> updateBackupInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/{id}'
      .replaceAll('{id}', id.toString());

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

  /// Update Backup Information
  ///
  /// Updates backup storage service metadata, such as stored credentials or settings for the order.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The backup service ID. Use the `backup_id` from `GET /backups` to identify the service.
  Future<SuccessTextResponse?> updateBackupInfo(int id,) async {
    final response = await updateBackupInfoWithHttpInfo(id,);
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

  /// Validate Backup Order
  ///
  /// Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [bool] validateOnly:
  ///
  /// * [int] serviceType:
  ///
  /// * [String] coupon:
  Future<Response> validateBackupOrderWithHttpInfo({ bool? validateOnly, int? serviceType, String? coupon, }) async {
    // ignore: prefer_const_declarations
    final path = r'/backups/order';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('PUT', Uri.parse(path));
    if (validateOnly != null) {
      hasFields = true;
      mp.fields[r'validateOnly'] = parameterToString(validateOnly);
    }
    if (serviceType != null) {
      hasFields = true;
      mp.fields[r'serviceType'] = parameterToString(serviceType);
    }
    if (coupon != null) {
      hasFields = true;
      mp.fields[r'coupon'] = parameterToString(coupon);
    }
    if (hasFields) {
      postBody = mp;
    }

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

  /// Validate Backup Order
  ///
  /// Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
  ///
  /// Parameters:
  ///
  /// * [bool] validateOnly:
  ///
  /// * [int] serviceType:
  ///
  /// * [String] coupon:
  Future<BackupOrderPutResponse?> validateBackupOrder({ bool? validateOnly, int? serviceType, String? coupon, }) async {
    final response = await validateBackupOrderWithHttpInfo( validateOnly: validateOnly, serviceType: serviceType, coupon: coupon, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BackupOrderPutResponse',) as BackupOrderPutResponse;
    
    }
    return null;
  }
}
