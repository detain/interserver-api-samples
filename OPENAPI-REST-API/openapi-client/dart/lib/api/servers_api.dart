//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class ServersApi {
  ServersApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place Server Order
  ///
  /// Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addServerWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/servers/order';

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

  /// Place Server Order
  ///
  /// Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
  Future<void> addServer() async {
    final response = await addServerWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Buy Now Server Options
  ///
  /// Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> buyItNowServerOrderWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/servers/order/buy_now_server';

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

  /// Get Buy Now Server Options
  ///
  /// Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
  Future<BuyItNowServerOrder200Response?> buyItNowServerOrder() async {
    final response = await buyItNowServerOrderWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BuyItNowServerOrder200Response',) as BuyItNowServerOrder200Response;
    
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

  /// Server Ordering Information
  ///
  /// Retrieves available server configurations and pricing for ordering a new dedicated server.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewServerWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/servers/order';

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

  /// Server Ordering Information
  ///
  /// Retrieves available server configurations and pricing for ordering a new dedicated server.
  Future<ServerOrder?> getNewServer() async {
    final response = await getNewServerWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ServerOrder',) as ServerOrder;
    
    }
    return null;
  }

  /// Get Server Order
  ///
  /// Returns detailed information about a specific server including its hardware configuration, IPs, and status.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number.
  Future<Response> getServerInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}'
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

  /// Get Server Order
  ///
  /// Returns detailed information about a specific server including its hardware configuration, IPs, and status.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number.
  Future<Server?> getServerInfo(int id,) async {
    final response = await getServerInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Server',) as Server;
    
    }
    return null;
  }

  /// Get Server Invoices
  ///
  /// Returns the billing invoices associated with this dedicated server.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<Response> getServerInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/invoices'
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

  /// Get Server Invoices
  ///
  /// Returns the billing invoices associated with this dedicated server.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<ChargeInvoiceRows?> getServerInvoices(int id,) async {
    final response = await getServerInvoicesWithHttpInfo(id,);
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

  /// List Servers
  ///
  /// Returns all dedicated server services on the account with their current status and configuration.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getServerListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/servers';

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

  /// List Servers
  ///
  /// Returns all dedicated server services on the account with their current status and configuration.
  Future<List<ServerRow>?> getServerList() async {
    final response = await getServerListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ServerRow>') as List)
        .cast<ServerRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Reverse DNS Info
  ///
  /// Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<Response> getServerReverseDnsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/reverse_dns'
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
  /// Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<ReverseDnsEntries?> getServerReverseDns(int id,) async {
    final response = await getServerReverseDnsWithHttpInfo(id,);
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

  /// Resend Server Welcome Email
  ///
  /// Resends the welcome email for the order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<Response> getServersWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/welcome_email'
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

  /// Resend Server Welcome Email
  ///
  /// Resends the welcome email for the order.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<SuccessTextResponse?> getServersWelcomeEmail(int id,) async {
    final response = await getServersWelcomeEmailWithHttpInfo(id,);
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

  /// Place Buy Now Server Order
  ///
  /// Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [PlaceBuyNowServerRequest] placeBuyNowServerRequest:
  Future<Response> placeBuyNowServerWithHttpInfo({ PlaceBuyNowServerRequest? placeBuyNowServerRequest, }) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/order/buy_now_server';

    // ignore: prefer_final_locals
    Object? postBody = placeBuyNowServerRequest;

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

  /// Place Buy Now Server Order
  ///
  /// Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
  ///
  /// Parameters:
  ///
  /// * [PlaceBuyNowServerRequest] placeBuyNowServerRequest:
  Future<ServersBuyNowResponse?> placeBuyNowServer({ PlaceBuyNowServerRequest? placeBuyNowServerRequest, }) async {
    final response = await placeBuyNowServerWithHttpInfo( placeBuyNowServerRequest: placeBuyNowServerRequest, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ServersBuyNowResponse',) as ServersBuyNowResponse;
    
    }
    return null;
  }

  /// Update Reverse DNS
  ///
  /// Updates the reverse DNS (PTR record) entries for the server's IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<Response> postServerReverseDnsWithHttpInfo(int id, ReverseDnsEntries reverseDnsEntries,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/reverse_dns'
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
  /// Updates the reverse DNS (PTR record) entries for the server's IP addresses.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  ///
  /// * [ReverseDnsEntries] reverseDnsEntries (required):
  Future<TextResponse?> postServerReverseDns(int id, ReverseDnsEntries reverseDnsEntries,) async {
    final response = await postServerReverseDnsWithHttpInfo(id, reverseDnsEntries,);
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

  /// Validate Server Order
  ///
  /// Validates a server order before placing it. Use this to check for errors before committing to a purchase.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putServersWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/servers/order';

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

  /// Validate Server Order
  ///
  /// Validates a server order before placing it. Use this to check for errors before committing to a purchase.
  Future<void> putServers() async {
    final response = await putServersWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Server IPMI Live Information
  ///
  /// Returns the current IPMI live connection information for the server.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<Response> serverIpmiLiveGetWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/ipmi_live'
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

  /// Server IPMI Live Information
  ///
  /// Returns the current IPMI live connection information for the server.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<ServerIpmiLiveInfo?> serverIpmiLiveGet(int id,) async {
    final response = await serverIpmiLiveGetWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ServerIpmiLiveInfo',) as ServerIpmiLiveInfo;
    
    }
    return null;
  }

  /// Server IPMI Live Setup
  ///
  /// Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  ///
  /// * [String] ip (required):
  ///   Your IP Address you wish to connect to the IPMI system from.
  ///
  /// * [int] asset:
  ///   Asset ID
  Future<Response> serverIpmiLivePostWithHttpInfo(int id, String ip, { int? asset, }) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/ipmi_live'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (asset != null) {
      hasFields = true;
      mp.fields[r'asset'] = parameterToString(asset);
    }
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

  /// Server IPMI Live Setup
  ///
  /// Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  ///
  /// * [String] ip (required):
  ///   Your IP Address you wish to connect to the IPMI system from.
  ///
  /// * [int] asset:
  ///   Asset ID
  Future<ServerIpmiLiveInfo?> serverIpmiLivePost(int id, String ip, { int? asset, }) async {
    final response = await serverIpmiLivePostWithHttpInfo(id, ip,  asset: asset, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ServerIpmiLiveInfo',) as ServerIpmiLiveInfo;
    
    }
    return null;
  }

  /// Get IPMI Power Status
  ///
  /// Returns the chassis power status from ipmi.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<Response> serverIpmiPowerGetWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/ipmi_power'
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

  /// Get IPMI Power Status
  ///
  /// Returns the chassis power status from ipmi.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<TextResponse?> serverIpmiPowerGet(int id,) async {
    final response = await serverIpmiPowerGetWithHttpInfo(id,);
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

  /// Server IPMI Power
  ///
  /// Uses the IPMI interface to set the Power status on the server.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  ///
  /// * [String] action (required):
  ///   The power action to send to the ipmi controller.
  ///
  /// * [int] asset:
  ///   The Asset ID
  Future<Response> serverIpmiPowerPostWithHttpInfo(int id, String action, { int? asset, }) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}/ipmi_power'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (asset != null) {
      hasFields = true;
      mp.fields[r'asset'] = parameterToString(asset);
    }
    if (action != null) {
      hasFields = true;
      mp.fields[r'action'] = parameterToString(action);
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

  /// Server IPMI Power
  ///
  /// Uses the IPMI interface to set the Power status on the server.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  ///
  /// * [String] action (required):
  ///   The power action to send to the ipmi controller.
  ///
  /// * [int] asset:
  ///   The Asset ID
  Future<TextResponse?> serverIpmiPowerPost(int id, String action, { int? asset, }) async {
    final response = await serverIpmiPowerPostWithHttpInfo(id, action,  asset: asset, );
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

  /// Cancel Server Service
  ///
  /// Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<Response> serversCancelWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}'
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

  /// Cancel Server Service
  ///
  /// Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   Server ID number
  Future<ServersCancel200Response?> serversCancel(int id,) async {
    final response = await serversCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ServersCancel200Response',) as ServersCancel200Response;
    
    }
    return null;
  }

  /// Update Server Order
  ///
  /// Updates settings on a dedicated server order.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Server ID number.
  Future<Response> updateServerInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/servers/{id}'
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

  /// Update Server Order
  ///
  /// Updates settings on a dedicated server order.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Server ID number.
  Future<void> updateServerInfo(String id,) async {
    final response = await updateServerInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }
}
