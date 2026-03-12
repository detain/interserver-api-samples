//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class VPSApi {
  VPSApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place VPS Order
  ///
  /// Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [VpsOrderPostRequest] vpsOrderPostRequest:
  Future<Response> addVpsWithHttpInfo({ VpsOrderPostRequest? vpsOrderPostRequest, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/order';

    // ignore: prefer_final_locals
    Object? postBody = vpsOrderPostRequest;

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

  /// Place VPS Order
  ///
  /// Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
  ///
  /// Parameters:
  ///
  /// * [VpsOrderPostRequest] vpsOrderPostRequest:
  Future<void> addVps({ VpsOrderPostRequest? vpsOrderPostRequest, }) async {
    final response = await addVpsWithHttpInfo( vpsOrderPostRequest: vpsOrderPostRequest, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Delete VPS Backup
  ///
  /// Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] file (required):
  ///   The backup filename to delete.
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given VPS.
  Future<Response> deleteVpsBackupWithHttpInfo(int id, String file, { String? all, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/backups'
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

  /// Delete VPS Backup
  ///
  /// Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] file (required):
  ///   The backup filename to delete.
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given VPS.
  Future<SuccessTextResponse?> deleteVpsBackup(int id, String file, { String? all, }) async {
    final response = await deleteVpsBackupWithHttpInfo(id, file,  all: all, );
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

  /// Blocks SMTP
  ///
  /// Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsBlockSmtpWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/block_smtp'
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

  /// Blocks SMTP
  ///
  /// Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsBlockSmtp(int id,) async {
    final response = await doVpsBlockSmtpWithHttpInfo(id,);
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
  /// Disables the virtual CD drive on the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsDisableCdWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/disable_cd'
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
  /// Disables the virtual CD drive on the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsDisableCd(int id,) async {
    final response = await doVpsDisableCdWithHttpInfo(id,);
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
  /// Disables disk quota enforcement on the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsDisableQuotaWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/disable_quota'
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
  /// Disables disk quota enforcement on the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsDisableQuota(int id,) async {
    final response = await doVpsDisableQuotaWithHttpInfo(id,);
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
  /// Ejects the virtual CD from the VPS CD drive.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsEjectCdWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/eject_cd'
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
  /// Ejects the virtual CD from the VPS CD drive.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsEjectCd(int id,) async {
    final response = await doVpsEjectCdWithHttpInfo(id,);
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
  /// Enables disk quota enforcement on the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsEnableQuotaWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/enable_quota'
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
  /// Enables disk quota enforcement on the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsEnableQuota(int id,) async {
    final response = await doVpsEnableQuotaWithHttpInfo(id,);
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

  /// Restart VPS
  ///
  /// Restarts the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsRestartWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/restart'
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

  /// Restart VPS
  ///
  /// Restarts the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsRestart(int id,) async {
    final response = await doVpsRestartWithHttpInfo(id,);
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

  /// Start VPS
  ///
  /// Powers on the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsStartWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/start'
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

  /// Start VPS
  ///
  /// Powers on the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsStart(int id,) async {
    final response = await doVpsStartWithHttpInfo(id,);
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

  /// Stop VPS
  ///
  /// Powers off the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<Response> doVpsStopWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/stop'
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

  /// Stop VPS
  ///
  /// Powers off the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number.
  Future<QueueResponse?> doVpsStop(int id,) async {
    final response = await doVpsStopWithHttpInfo(id,);
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

  /// Download VPS Backup
  ///
  /// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [DownloadQsBackupRequest] downloadQsBackupRequest (required):
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given VPS.
  Future<Response> downloadVpsBackupWithHttpInfo(int id, DownloadQsBackupRequest downloadQsBackupRequest, { String? all, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/backups'
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

  /// Download VPS Backup
  ///
  /// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [DownloadQsBackupRequest] downloadQsBackupRequest (required):
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given VPS.
  Future<DownloadQsBackup200Response?> downloadVpsBackup(int id, DownloadQsBackupRequest downloadQsBackupRequest, { String? all, }) async {
    final response = await downloadVpsBackupWithHttpInfo(id, downloadQsBackupRequest,  all: all, );
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

  /// VPS Ordering Information
  ///
  /// Retrieves available VPS configurations, OS templates, and pricing for ordering.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewVpsWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/vps/order';

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

  /// VPS Ordering Information
  ///
  /// Retrieves available VPS configurations, OS templates, and pricing for ordering.
  Future<VpsOrder?> getNewVps() async {
    final response = await getNewVpsWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'VpsOrder',) as VpsOrder;
    
    }
    return null;
  }

  /// Get VPS Backups List
  ///
  /// Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given VPS.
  Future<Response> getVpsBackupsWithHttpInfo(int id, { String? all, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/backups'
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

  /// Get VPS Backups List
  ///
  /// Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] all:
  ///   Set to `1` to list all backups across all services, not just the ones for the given VPS.
  Future<VpsBackupRows?> getVpsBackups(int id, { String? all, }) async {
    final response = await getVpsBackupsWithHttpInfo(id,  all: all, );
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

  /// HD Space Addon Info
  ///
  /// Returns available hard drive space addon options and pricing for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsBuyHdSpaceWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/buy_hd_space'
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

  /// HD Space Addon Info
  ///
  /// Returns available hard drive space addon options and pricing for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> getVpsBuyHdSpace(int id,) async {
    final response = await getVpsBuyHdSpaceWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Additional IP Addon Info
  ///
  /// Returns available additional IP address options and pricing for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsBuyIpWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/buy_ip'
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

  /// Additional IP Addon Info
  ///
  /// Returns available additional IP address options and pricing for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> getVpsBuyIp(int id,) async {
    final response = await getVpsBuyIpWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Timezone Info
  ///
  /// Returns the list of available timezones that can be set on the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsChangeTimezoneWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/change_timezone'
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
  /// Returns the list of available timezones that can be set on the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<List<String>?> getVpsChangeTimezone(int id,) async {
    final response = await getVpsChangeTimezoneWithHttpInfo(id,);
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

  /// Get VPS Order
  ///
  /// Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}'
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

  /// Get VPS Order
  ///
  /// Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Vps?> getVpsInfo(int id,) async {
    final response = await getVpsInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Vps',) as Vps;
    
    }
    return null;
  }

  /// Get VPS Invoices
  ///
  /// Returns the billing invoices associated with this VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/invoices'
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

  /// Get VPS Invoices
  ///
  /// Returns the billing invoices associated with this VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<ChargeInvoiceRows?> getVpsInvoices(int id,) async {
    final response = await getVpsInvoicesWithHttpInfo(id,);
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

  /// List VPS Orders
  ///
  /// Returns all VPS services on the account with their current status and configuration.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getVpsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/vps';

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

  /// List VPS Orders
  ///
  /// Returns all VPS services on the account with their current status and configuration.
  Future<List<VpsRow>?> getVpsList() async {
    final response = await getVpsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<VpsRow>') as List)
        .cast<VpsRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// VPS Reinstall OS Options
  ///
  /// Returns the list of available OS templates for reinstalling the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsReinstallOsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/reinstall_os'
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

  /// VPS Reinstall OS Options
  ///
  /// Returns the list of available OS templates for reinstalling the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<VpsTemplatesList?> getVpsReinstallOs(int id,) async {
    final response = await getVpsReinstallOsWithHttpInfo(id,);
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

  /// Reverse DNS Info
  ///
  /// Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsReverseDnsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/reverse_dns'
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
  /// Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<ReverseDnsEntries?> getVpsReverseDns(int id,) async {
    final response = await getVpsReverseDnsWithHttpInfo(id,);
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
  /// Returns the current VNC connection information for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsSetupVncWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/setup_vnc'
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
  /// Returns the current VNC connection information for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> getVpsSetupVnc(int id,) async {
    final response = await getVpsSetupVncWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Slice Upgrade Info
  ///
  /// Returns available slice upgrade options and pricing for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsSlicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/slices'
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

  /// Slice Upgrade Info
  ///
  /// Returns available slice upgrade options and pricing for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> getVpsSlices(int id,) async {
    final response = await getVpsSlicesWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Traffic Usage
  ///
  /// Returns bandwidth traffic usage data for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsTrafficUsageWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/traffic_usage'
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
  /// Returns bandwidth traffic usage data for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<VpsTrafficResponse?> getVpsTrafficUsage(int id,) async {
    final response = await getVpsTrafficUsageWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'VpsTrafficResponse',) as VpsTrafficResponse;
    
    }
    return null;
  }

  /// Get View Desktop Info
  ///
  /// Returns remote desktop connection information for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> getVpsViewDesktopWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/view_desktop'
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
  /// Returns remote desktop connection information for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> getVpsViewDesktop(int id,) async {
    final response = await getVpsViewDesktopWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Resend VPS Welcome Email
  ///
  /// Resends the welcome email containing connection details and credentials for the VPS order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   VPS ID
  Future<Response> getVpsWelcomeEmailWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/welcome_email'
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

  /// Resend VPS Welcome Email
  ///
  /// Resends the welcome email containing connection details and credentials for the VPS order.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   VPS ID
  Future<SuccessTextResponse?> getVpsWelcomeEmail(String id,) async {
    final response = await getVpsWelcomeEmailWithHttpInfo(id,);
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

  /// Start a VPS Backup
  ///
  /// Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> postVpsBackupWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/backup'
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

  /// Start a VPS Backup
  ///
  /// Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<QueueResponse?> postVpsBackup(int id,) async {
    final response = await postVpsBackupWithHttpInfo(id,);
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

  /// Purchase HD Space Addon
  ///
  /// Purchases additional hard drive space for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> postVpsBuyHdSpaceWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/buy_hd_space'
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

  /// Purchase HD Space Addon
  ///
  /// Purchases additional hard drive space for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> postVpsBuyHdSpace(int id,) async {
    final response = await postVpsBuyHdSpaceWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Purchase Additional IP
  ///
  /// Purchases an additional IP address for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> postVpsBuyIpWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/buy_ip'
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

  /// Purchase Additional IP
  ///
  /// Purchases an additional IP address for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> postVpsBuyIp(int id,) async {
    final response = await postVpsBuyIpWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Update VPS Hostname
  ///
  /// Changes the hostname of the VPS. This queues a background task to update the server.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] hostname:
  Future<Response> postVpsChangeHostnameWithHttpInfo(int id, { String? hostname, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/change_hostname'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (hostname != null) {
      hasFields = true;
      mp.fields[r'hostname'] = parameterToString(hostname);
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

  /// Update VPS Hostname
  ///
  /// Changes the hostname of the VPS. This queues a background task to update the server.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] hostname:
  Future<QueueResponse?> postVpsChangeHostname(int id, { String? hostname, }) async {
    final response = await postVpsChangeHostnameWithHttpInfo(id,  hostname: hostname, );
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

  /// Change VPS Root Password
  ///
  /// Changes the root password of the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] password (required):
  Future<Response> postVpsChangeRootPasswordWithHttpInfo(int id, String password,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/change_root_password'
      .replaceAll('{id}', id.toString());

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

  /// Change VPS Root Password
  ///
  /// Changes the root password of the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] password (required):
  Future<QueueResponse?> postVpsChangeRootPassword(int id, String password,) async {
    final response = await postVpsChangeRootPasswordWithHttpInfo(id, password,);
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

  /// Change VPS Timezone
  ///
  /// Changes the system timezone on the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] timezone (required):
  ///   The time zone
  Future<Response> postVpsChangeTimezoneWithHttpInfo(int id, String timezone,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/change_timezone'
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

  /// Change VPS Timezone
  ///
  /// Changes the system timezone on the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] timezone (required):
  ///   The time zone
  Future<QueueResponse?> postVpsChangeTimezone(int id, String timezone,) async {
    final response = await postVpsChangeTimezoneWithHttpInfo(id, timezone,);
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
  /// Changes the Webuzo control panel password on the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] password (required):
  Future<Response> postVpsChangeWebuzoPasswordWithHttpInfo(int id, String password,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/change_webuzo_password'
      .replaceAll('{id}', id.toString());

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

  /// Change Webuzo Password
  ///
  /// Changes the Webuzo control panel password on the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] password (required):
  Future<QueueResponse?> postVpsChangeWebuzoPassword(int id, String password,) async {
    final response = await postVpsChangeWebuzoPasswordWithHttpInfo(id, password,);
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

  /// Insert CD in VPS
  ///
  /// Mounts an ISO image in the VPS virtual CD drive from the given URL.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] url:
  Future<Response> postVpsInsertCdWithHttpInfo(int id, { String? url, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/insert_cd'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (url != null) {
      hasFields = true;
      mp.fields[r'url'] = parameterToString(url);
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

  /// Insert CD in VPS
  ///
  /// Mounts an ISO image in the VPS virtual CD drive from the given URL.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] url:
  Future<QueueResponse?> postVpsInsertCd(int id, { String? url, }) async {
    final response = await postVpsInsertCdWithHttpInfo(id,  url: url, );
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

  /// Reinstall VPS OS
  ///
  /// Reinstalls the operating system on the VPS. Warning - all data will be erased.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] template (required):
  ///   OS Template Filename
  ///
  /// * [String] localPassword (required):
  ///   Password for this account.
  ///
  /// * [String] password:
  ///   Password for Root / Administrator Account.
  Future<Response> postVpsReinstallOsWithHttpInfo(int id, String template, String localPassword, { String? password, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/reinstall_os'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (template != null) {
      hasFields = true;
      mp.fields[r'template'] = parameterToString(template);
    }
    if (password != null) {
      hasFields = true;
      mp.fields[r'password'] = parameterToString(password);
    }
    if (localPassword != null) {
      hasFields = true;
      mp.fields[r'localPassword'] = parameterToString(localPassword);
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

  /// Reinstall VPS OS
  ///
  /// Reinstalls the operating system on the VPS. Warning - all data will be erased.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [String] template (required):
  ///   OS Template Filename
  ///
  /// * [String] localPassword (required):
  ///   Password for this account.
  ///
  /// * [String] password:
  ///   Password for Root / Administrator Account.
  Future<QueueResponse?> postVpsReinstallOs(int id, String template, String localPassword, { String? password, }) async {
    final response = await postVpsReinstallOsWithHttpInfo(id, template, localPassword,  password: password, );
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

  /// Reset VPS Password
  ///
  /// Resets the root password on the VPS to a new randomly generated password.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> postVpsResetPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/reset_password'
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

  /// Reset VPS Password
  ///
  /// Resets the root password on the VPS to a new randomly generated password.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<QueueResponse?> postVpsResetPassword(int id,) async {
    final response = await postVpsResetPasswordWithHttpInfo(id,);
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

  /// Restore VPS from Backup
  ///
  /// Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [RestoreRequest] restoreRequest (required):
  ///   VPS Restore request
  Future<Response> postVpsRestoreWithHttpInfo(int id, RestoreRequest restoreRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/restore'
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

  /// Restore VPS from Backup
  ///
  /// Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [RestoreRequest] restoreRequest (required):
  ///   VPS Restore request
  Future<QueueResponse?> postVpsRestore(int id, RestoreRequest restoreRequest,) async {
    final response = await postVpsRestoreWithHttpInfo(id, restoreRequest,);
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
  /// Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<Response> postVpsReverseDnsWithHttpInfo(int id, ReverseDnsEntries reverseDnsEntries,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/reverse_dns'
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
  /// Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<TextResponse?> postVpsReverseDns(int id, ReverseDnsEntries reverseDnsEntries,) async {
    final response = await postVpsReverseDnsWithHttpInfo(id, reverseDnsEntries,);
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
  /// Sets up or refreshes the VNC console connection for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> postVpsSetupVncWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/setup_vnc'
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
  /// Sets up or refreshes the VNC console connection for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<QueueResponse?> postVpsSetupVnc(int id,) async {
    final response = await postVpsSetupVncWithHttpInfo(id,);
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

  /// Purchase Slice Upgrade
  ///
  /// Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> postVpsSlicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/slices'
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

  /// Purchase Slice Upgrade
  ///
  /// Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> postVpsSlices(int id,) async {
    final response = await postVpsSlicesWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Update View Desktop
  ///
  /// Updates or refreshes the remote desktop session for the VPS.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> postVpsViewDesktopWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}/view_desktop'
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
  /// Updates or refreshes the remote desktop session for the VPS.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<void> postVpsViewDesktop(int id,) async {
    final response = await postVpsViewDesktopWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Validate VPS Order
  ///
  /// Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [VpsOrderPutRequest] vpsOrderPutRequest:
  Future<Response> putVpsWithHttpInfo({ VpsOrderPutRequest? vpsOrderPutRequest, }) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/order';

    // ignore: prefer_final_locals
    Object? postBody = vpsOrderPutRequest;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['application/json', 'multipart/form-data'];


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

  /// Validate VPS Order
  ///
  /// Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
  ///
  /// Parameters:
  ///
  /// * [VpsOrderPutRequest] vpsOrderPutRequest:
  Future<VpsOrderPutResponse?> putVps({ VpsOrderPutRequest? vpsOrderPutRequest, }) async {
    final response = await putVpsWithHttpInfo( vpsOrderPutRequest: vpsOrderPutRequest, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'VpsOrderPutResponse',) as VpsOrderPutResponse;
    
    }
    return null;
  }

  /// Update VPS Order
  ///
  /// Updates settings on a VPS order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   VPS ID number.
  Future<Response> updateVpsInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}'
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

  /// Update VPS Order
  ///
  /// Updates settings on a VPS order.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   VPS ID number.
  Future<void> updateVpsInfo(String id,) async {
    final response = await updateVpsInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Cancel VPS Service
  ///
  /// Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<Response> vPSCancelWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/vps/{id}'
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

  /// Cancel VPS Service
  ///
  /// Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   VPS ID number
  Future<VPSCancel200Response?> vPSCancel(int id,) async {
    final response = await vPSCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'VPSCancel200Response',) as VPSCancel200Response;
    
    }
    return null;
  }
}
