//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class QuickServersApi {
  QuickServersApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place QuickServer Order
  ///
  /// Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addQsWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/qs/order';

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

  /// Place QuickServer Order
  ///
  /// Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
  Future<void> addQs() async {
    final response = await addQsWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Delete QuickServer Backup
  ///
  /// Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [String] file (required):
  ///   The backup filename to delete.
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
  Future<Response> deleteQsBackupWithHttpInfo(int id, String file, { String? all, }) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/backups'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (all != null) {
      queryParams.addAll(_queryParams('', 'all', all));
    }
      queryParams.addAll(_queryParams('', 'file', file));

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

  /// Delete QuickServer Backup
  ///
  /// Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [String] file (required):
  ///   The backup filename to delete.
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
  Future<SuccessTextResponse?> deleteQsBackup(int id, String file, { String? all, }) async {
    final response = await deleteQsBackupWithHttpInfo(id, file,  all: all, );
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

  /// Block QuickServer SMTP
  ///
  /// Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsBlockSmtpWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/block_smtp'
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

  /// Block QuickServer SMTP
  ///
  /// Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsBlockSmtp(int id,) async {
    final response = await doQsBlockSmtpWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Disable CD Drive
  ///
  /// Disables the virtual CD drive for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsDisableCdWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/disable_cd'
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

  /// Disable CD Drive
  ///
  /// Disables the virtual CD drive for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsDisableCd(int id,) async {
    final response = await doQsDisableCdWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Disable Quotas
  ///
  /// Disables disk quota enforcement for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsDisableQuotaWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/disable_quota'
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

  /// Disable Quotas
  ///
  /// Disables disk quota enforcement for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsDisableQuota(int id,) async {
    final response = await doQsDisableQuotaWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Eject CD Drive
  ///
  /// Ejects the virtual CD from the QuickServer's CD drive.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsEjectCdWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/eject_cd'
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

  /// Eject CD Drive
  ///
  /// Ejects the virtual CD from the QuickServer's CD drive.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsEjectCd(int id,) async {
    final response = await doQsEjectCdWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Enable Quotas
  ///
  /// Enables disk quota enforcement for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsEnableQuotaWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/enable_quota'
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

  /// Enable Quotas
  ///
  /// Enables disk quota enforcement for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsEnableQuota(int id,) async {
    final response = await doQsEnableQuotaWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Restart QuickServer
  ///
  /// Restarts the QuickServer. The server will be shut down and started again.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsRestartWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/restart'
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

  /// Restart QuickServer
  ///
  /// Restarts the QuickServer. The server will be shut down and started again.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsRestart(int id,) async {
    final response = await doQsRestartWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Start QuickServer
  ///
  /// Powers on the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsStartWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/start'
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

  /// Start QuickServer
  ///
  /// Powers on the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsStart(int id,) async {
    final response = await doQsStartWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Stop QuickServer
  ///
  /// Powers off the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> doQsStopWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/stop'
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

  /// Stop QuickServer
  ///
  /// Powers off the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<QueueResponse?> doQsStop(int id,) async {
    final response = await doQsStopWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Download QuickServer Backup
  ///
  /// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [DownloadQsBackupRequest] downloadQsBackupRequest (required):
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
  Future<Response> downloadQsBackupWithHttpInfo(int id, DownloadQsBackupRequest downloadQsBackupRequest, { String? all, }) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/backups'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = downloadQsBackupRequest;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (all != null) {
      queryParams.addAll(_queryParams('', 'all', all));
    }

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

  /// Download QuickServer Backup
  ///
  /// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [DownloadQsBackupRequest] downloadQsBackupRequest (required):
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
  Future<DownloadQsBackup200Response?> downloadQsBackup(int id, DownloadQsBackupRequest downloadQsBackupRequest, { String? all, }) async {
    final response = await downloadQsBackupWithHttpInfo(id, downloadQsBackupRequest,  all: all, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DownloadQsBackup200Response',) as DownloadQsBackup200Response;
    
    }
    return null;
  }

  /// Get QuickServer Ordering Information
  ///
  /// Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewQsWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/qs/order';

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

  /// Get QuickServer Ordering Information
  ///
  /// Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
  Future<QuickserverOrder?> getNewQs() async {
    final response = await getNewQsWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QuickserverOrder',) as QuickserverOrder;
    
    }
    return null;
  }

  /// List QuickServer Backups
  ///
  /// Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
  Future<Response> getQsBackupsWithHttpInfo(int id, { String? all, }) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/backups'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (all != null) {
      queryParams.addAll(_queryParams('', 'all', all));
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

  /// List QuickServer Backups
  ///
  /// Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
  Future<VpsBackupRows?> getQsBackups(int id, { String? all, }) async {
    final response = await getQsBackupsWithHttpInfo(id,  all: all, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'VpsBackupRows',) as VpsBackupRows;
    
    }
    return null;
  }

  /// Get QuickServer Hostname
  ///
  /// Retrieves the current hostname and any validation requirements for changing it.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsChangeHostnameWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_hostname'
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

  /// Get QuickServer Hostname
  ///
  /// Retrieves the current hostname and any validation requirements for changing it.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsChangeHostname(int id,) async {
    final response = await getQsChangeHostnameWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Change Root Password Info
  ///
  /// Retrieves instructions or metadata needed to reset the root password.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsChangeRootPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_root_password'
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

  /// Get Change Root Password Info
  ///
  /// Retrieves instructions or metadata needed to reset the root password.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsChangeRootPassword(int id,) async {
    final response = await getQsChangeRootPasswordWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Timezone Info
  ///
  /// Returns the list of available timezones that can be set on the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsChangeTimezoneWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_timezone'
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

  /// Get Timezone Info
  ///
  /// Returns the list of available timezones that can be set on the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<List<String>?> getQsChangeTimezone(int id,) async {
    final response = await getQsChangeTimezoneWithHttpInfo(id,);
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

  /// Webuzo Change Pass Info
  ///
  /// Retrieves instructions or metadata for changing the Webuzo control panel password.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsChangeWebuzoPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_webuzo_password'
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

  /// Webuzo Change Pass Info
  ///
  /// Retrieves instructions or metadata for changing the Webuzo control panel password.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsChangeWebuzoPassword(int id,) async {
    final response = await getQsChangeWebuzoPasswordWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get QuickServer Order
  ///
  /// Returns detailed QuickServer information, including credentials, IPs, and available client actions.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Response> getQsInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}'
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

  /// Get QuickServer Order
  ///
  /// Returns detailed QuickServer information, including credentials, IPs, and available client actions.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number.
  Future<Quickserver?> getQsInfo(int id,) async {
    final response = await getQsInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Quickserver',) as Quickserver;
    
    }
    return null;
  }

  /// Insert CD Information
  ///
  /// Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsInsertCdWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/insert_cd'
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

  /// Insert CD Information
  ///
  /// Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsInsertCd(int id,) async {
    final response = await getQsInsertCdWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get QuickServer Invoices
  ///
  /// Returns the billing invoices associated with this QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/invoices'
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

  /// Get QuickServer Invoices
  ///
  /// Returns the billing invoices associated with this QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<ChargeInvoiceRows?> getQsInvoices(int id,) async {
    final response = await getQsInvoicesWithHttpInfo(id,);
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

  /// List QuickServers
  ///
  /// Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getQsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/qs';

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

  /// List QuickServers
  ///
  /// Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
  Future<List<QuickserverRow>?> getQsList() async {
    final response = await getQsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<QuickserverRow>') as List)
        .cast<QuickserverRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// QuickServer Reinstall OS Options
  ///
  /// Returns the list of available operating system templates for reinstalling the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsReinstallOsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/reinstall_os'
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

  /// QuickServer Reinstall OS Options
  ///
  /// Returns the list of available operating system templates for reinstalling the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<VpsTemplatesList?> getQsReinstallOs(int id,) async {
    final response = await getQsReinstallOsWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'VpsTemplatesList',) as VpsTemplatesList;
    
    }
    return null;
  }

  /// Reset QuickServer Password Info
  ///
  /// Returns information needed before resetting the QuickServer's root password.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsResetPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/reset_password'
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

  /// Reset QuickServer Password Info
  ///
  /// Returns information needed before resetting the QuickServer's root password.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsResetPassword(int id,) async {
    final response = await getQsResetPasswordWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Reverse DNS Info
  ///
  /// Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsReverseDnsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/reverse_dns'
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

  /// Reverse DNS Info
  ///
  /// Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<ReverseDnsEntries?> getQsReverseDns(int id,) async {
    final response = await getQsReverseDnsWithHttpInfo(id,);
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

  /// VNC Setup Info
  ///
  /// Returns the current VNC connection information for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsSetupVncWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/setup_vnc'
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

  /// VNC Setup Info
  ///
  /// Returns the current VNC connection information for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsSetupVnc(int id,) async {
    final response = await getQsSetupVncWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Traffic Usage
  ///
  /// Returns bandwidth traffic usage data for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsTrafficUsageWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/traffic_usage'
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

  /// Get Traffic Usage
  ///
  /// Returns bandwidth traffic usage data for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsTrafficUsage(int id,) async {
    final response = await getQsTrafficUsageWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get View Desktop Info
  ///
  /// Returns remote desktop connection information for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> getQsViewDesktopWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/view_desktop'
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

  /// Get View Desktop Info
  ///
  /// Returns remote desktop connection information for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> getQsViewDesktop(int id,) async {
    final response = await getQsViewDesktopWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Resend QuickServer Welcome Email
  ///
  /// Resends the welcome email containing connection details and credentials for the QuickServer order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Quickserver ID
  Future<Response> getQsWelcomeEmailWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/welcome_email'
      .replaceAll('{id}', id);

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

  /// Resend QuickServer Welcome Email
  ///
  /// Resends the welcome email containing connection details and credentials for the QuickServer order.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Quickserver ID
  Future<TextResponse?> getQsWelcomeEmail(String id,) async {
    final response = await getQsWelcomeEmailWithHttpInfo(id,);
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

  /// Create QuickServer Backup
  ///
  /// Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsBackupWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/backup'
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

  /// Create QuickServer Backup
  ///
  /// Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsBackup(int id,) async {
    final response = await postQsBackupWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Update QuickServer Hostname
  ///
  /// Submits a hostname change request for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsChangeHostnameWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_hostname'
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

  /// Update QuickServer Hostname
  ///
  /// Submits a hostname change request for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsChangeHostname(int id,) async {
    final response = await postQsChangeHostnameWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Change Root Password
  ///
  /// Triggers a root password reset for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsChangeRootPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_root_password'
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

  /// Change Root Password
  ///
  /// Triggers a root password reset for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsChangeRootPassword(int id,) async {
    final response = await postQsChangeRootPasswordWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Change QuickServer Timezone
  ///
  /// Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [String] timezone (required):
  ///   The time zone
  Future<Response> postQsChangeTimezoneWithHttpInfo(int id, String timezone,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_timezone'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (timezone != null) {
      hasFields = true;
      mp.fields[r'timezone'] = parameterToString(timezone);
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

  /// Change QuickServer Timezone
  ///
  /// Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [String] timezone (required):
  ///   The time zone
  Future<QueueResponse?> postQsChangeTimezone(int id, String timezone,) async {
    final response = await postQsChangeTimezoneWithHttpInfo(id, timezone,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Change Webuzo Password
  ///
  /// Resets the Webuzo control panel password for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsChangeWebuzoPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/change_webuzo_password'
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

  /// Change Webuzo Password
  ///
  /// Resets the Webuzo control panel password for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsChangeWebuzoPassword(int id,) async {
    final response = await postQsChangeWebuzoPasswordWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Insert CD in QuickServer
  ///
  /// Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsInsertCdWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/insert_cd'
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

  /// Insert CD in QuickServer
  ///
  /// Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsInsertCd(int id,) async {
    final response = await postQsInsertCdWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Reinstall QuickServer OS
  ///
  /// Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsReinstallOsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/reinstall_os'
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

  /// Reinstall QuickServer OS
  ///
  /// Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsReinstallOs(int id,) async {
    final response = await postQsReinstallOsWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Reset QuickServer Password
  ///
  /// Resets the root password on the QuickServer to a new randomly generated password.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsResetPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/reset_password'
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

  /// Reset QuickServer Password
  ///
  /// Resets the root password on the QuickServer to a new randomly generated password.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsResetPassword(int id,) async {
    final response = await postQsResetPasswordWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Update Reverse DNS
  ///
  /// Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<Response> postQsReverseDnsWithHttpInfo(int id, ReverseDnsEntries reverseDnsEntries,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/reverse_dns'
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

  /// Update Reverse DNS
  ///
  /// Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<TextResponse?> postQsReverseDns(int id, ReverseDnsEntries reverseDnsEntries,) async {
    final response = await postQsReverseDnsWithHttpInfo(id, reverseDnsEntries,);
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

  /// Setup VNC
  ///
  /// Sets up or refreshes the VNC console connection for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsSetupVncWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/setup_vnc'
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

  /// Setup VNC
  ///
  /// Sets up or refreshes the VNC console connection for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QueueResponse?> postQsSetupVnc(int id,) async {
    final response = await postQsSetupVncWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Search Traffic Usage
  ///
  /// Searches and filters the QuickServer's bandwidth traffic usage data by date range.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsTrafficUsageWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/traffic_usage'
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

  /// Search Traffic Usage
  ///
  /// Searches and filters the QuickServer's bandwidth traffic usage data by date range.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> postQsTrafficUsage(int id,) async {
    final response = await postQsTrafficUsageWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Update View Desktop
  ///
  /// Updates or refreshes the remote desktop session for the QuickServer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> postQsViewDesktopWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/view_desktop'
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

  /// Update View Desktop
  ///
  /// Updates or refreshes the remote desktop session for the QuickServer.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<void> postQsViewDesktop(int id,) async {
    final response = await postQsViewDesktopWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Restore QuickServer from Backup
  ///
  /// Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [RestoreRequest] restoreRequest (required):
  ///   QuickServer Restore request
  Future<Response> postQuickServerRestoreWithHttpInfo(int id, RestoreRequest restoreRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}/restore'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = restoreRequest;

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

  /// Restore QuickServer from Backup
  ///
  /// Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  ///
  /// * [RestoreRequest] restoreRequest (required):
  ///   QuickServer Restore request
  Future<QueueResponse?> postQuickServerRestore(int id, RestoreRequest restoreRequest,) async {
    final response = await postQuickServerRestoreWithHttpInfo(id, restoreRequest,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QueueResponse',) as QueueResponse;
    
    }
    return null;
  }

  /// Validate QuickServer Order
  ///
  /// Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putQsWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/qs/order';

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

  /// Validate QuickServer Order
  ///
  /// Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
  Future<void> putQs() async {
    final response = await putQsWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Cancel QuickServer Order
  ///
  /// Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<Response> quickserversCancelWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}'
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

  /// Cancel QuickServer Order
  ///
  /// Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   QuickServer ID number
  Future<QuickserversCancel200Response?> quickserversCancel(int id,) async {
    final response = await quickserversCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'QuickserversCancel200Response',) as QuickserversCancel200Response;
    
    }
    return null;
  }

  /// Update QuickServer Order
  ///
  /// Updates QuickServer metadata or stored settings associated with the order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   QuickServer ID number.
  Future<Response> updateQsInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/qs/{id}'
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

  /// Update QuickServer Order
  ///
  /// Updates QuickServer metadata or stored settings associated with the order.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   QuickServer ID number.
  Future<void> updateQsInfo(String id,) async {
    final response = await updateQsInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }
}
