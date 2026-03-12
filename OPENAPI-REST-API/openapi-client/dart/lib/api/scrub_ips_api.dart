//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class ScrubIpsApi {
  ScrubIpsApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Cancel Scrub IP Service
  ///
  /// Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<Response> cancelScrubIpWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}'
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

  /// Cancel Scrub IP Service
  ///
  /// Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<CancelScrubIp200Response?> cancelScrubIp(int id,) async {
    final response = await cancelScrubIpWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CancelScrubIp200Response',) as CancelScrubIp200Response;
    
    }
    return null;
  }

  /// Create Traffic Filter
  ///
  /// Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateFilter] createFilter (required):
  Future<Response> createFilterWithHttpInfo(int id, CreateFilter createFilter,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/create_filter'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = createFilter;

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

  /// Create Traffic Filter
  ///
  /// Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateFilter] createFilter (required):
  Future<CreateFilter201Response?> createFilter(int id, CreateFilter createFilter,) async {
    final response = await createFilterWithHttpInfo(id, createFilter,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CreateFilter201Response',) as CreateFilter201Response;
    
    }
    return null;
  }

  /// Create Geo Firewall Rule
  ///
  /// Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateGeoFirewallRule] createGeoFirewallRule (required):
  Future<Response> createGeoRuleWithHttpInfo(int id, CreateGeoFirewallRule createGeoFirewallRule,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/create_geo_rule'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = createGeoFirewallRule;

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

  /// Create Geo Firewall Rule
  ///
  /// Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateGeoFirewallRule] createGeoFirewallRule (required):
  Future<CreateRule201Response?> createGeoRule(int id, CreateGeoFirewallRule createGeoFirewallRule,) async {
    final response = await createGeoRuleWithHttpInfo(id, createGeoFirewallRule,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CreateRule201Response',) as CreateRule201Response;
    
    }
    return null;
  }

  /// Create Firewall Rule
  ///
  /// Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateFirewallRule] createFirewallRule (required):
  Future<Response> createRuleWithHttpInfo(int id, CreateFirewallRule createFirewallRule,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/create_rule'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = createFirewallRule;

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

  /// Create Firewall Rule
  ///
  /// Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateFirewallRule] createFirewallRule (required):
  Future<CreateRule201Response?> createRule(int id, CreateFirewallRule createFirewallRule,) async {
    final response = await createRuleWithHttpInfo(id, createFirewallRule,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CreateRule201Response',) as CreateRule201Response;
    
    }
    return null;
  }

  /// Delete Traffic Filter
  ///
  /// Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateFilter] createFilter (required):
  Future<Response> deleteFilterWithHttpInfo(int id, CreateFilter createFilter,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/delete_filter'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = createFilter;

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

  /// Delete Traffic Filter
  ///
  /// Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [CreateFilter] createFilter (required):
  Future<DeleteFilter200Response?> deleteFilter(int id, CreateFilter createFilter,) async {
    final response = await deleteFilterWithHttpInfo(id, createFilter,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DeleteFilter200Response',) as DeleteFilter200Response;
    
    }
    return null;
  }

  /// Disable Scrub Protection
  ///
  /// Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<Response> disableScrubWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/disable'
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

  /// Disable Scrub Protection
  ///
  /// Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<DisableScrub200Response?> disableScrub(int id,) async {
    final response = await disableScrubWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DisableScrub200Response',) as DisableScrub200Response;
    
    }
    return null;
  }

  /// Enable Scrub Protection
  ///
  /// Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<Response> enableScrubWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/enable'
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

  /// Enable Scrub Protection
  ///
  /// Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<EnableScrub200Response?> enableScrub(int id,) async {
    final response = await enableScrubWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'EnableScrub200Response',) as EnableScrub200Response;
    
    }
    return null;
  }

  /// Get Scrub IP Ordering Information
  ///
  /// Returns the available Scrub IP service plans and pricing information needed to build an order form.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getOrderDetailWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/order';

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

  /// Get Scrub IP Ordering Information
  ///
  /// Returns the available Scrub IP service plans and pricing information needed to build an order form.
  Future<GetOrderDetail200Response?> getOrderDetail() async {
    final response = await getOrderDetailWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GetOrderDetail200Response',) as GetOrderDetail200Response;
    
    }
    return null;
  }

  /// Get Scrub IP Details
  ///
  /// Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<Response> getScrubIpDetailsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}'
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

  /// Get Scrub IP Details
  ///
  /// Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<GetScrubIpDetails200Response?> getScrubIpDetails(int id,) async {
    final response = await getScrubIpDetailsWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GetScrubIpDetails200Response',) as GetScrubIpDetails200Response;
    
    }
    return null;
  }

  /// List Scrub Filter Types
  ///
  /// Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getScrubIpFilterTypesWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/filter_types';

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

  /// List Scrub Filter Types
  ///
  /// Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
  Future<ScrubIpFilterTypes?> getScrubIpFilterTypes() async {
    final response = await getScrubIpFilterTypesWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ScrubIpFilterTypes',) as ScrubIpFilterTypes;
    
    }
    return null;
  }

  /// Get ScrubIp Invoices
  ///
  /// Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<Response> getScrubIpInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/invoices'
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

  /// Get ScrubIp Invoices
  ///
  /// Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  Future<ChargeInvoiceRows?> getScrubIpInvoices(int id,) async {
    final response = await getScrubIpInvoicesWithHttpInfo(id,);
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

  /// Get Scrub IP Logs
  ///
  /// Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Scrub Order ID
  Future<Response> getScrubIpLogsWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/logs'
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

  /// Get Scrub IP Logs
  ///
  /// Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Scrub Order ID
  Future<List<ScrubIpsLogRowSchema>?> getScrubIpLogs(String id,) async {
    final response = await getScrubIpLogsWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ScrubIpsLogRowSchema>') as List)
        .cast<ScrubIpsLogRowSchema>()
        .toList(growable: false);

    }
    return null;
  }

  /// List Scrub IP Services
  ///
  /// Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getScrubIpsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips';

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

  /// List Scrub IP Services
  ///
  /// Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
  Future<List<ScrubIpsRowSchema>?> getScrubIpsList() async {
    final response = await getScrubIpsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<ScrubIpsRowSchema>') as List)
        .cast<ScrubIpsRowSchema>()
        .toList(growable: false);

    }
    return null;
  }

  /// Place Scrub IP Order
  ///
  /// Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [ScrubIpPlaceOrder] scrubIpPlaceOrder (required):
  Future<Response> placeScrubOrderWithHttpInfo(ScrubIpPlaceOrder scrubIpPlaceOrder,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/order';

    // ignore: prefer_final_locals
    Object? postBody = scrubIpPlaceOrder;

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

  /// Place Scrub IP Order
  ///
  /// Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
  ///
  /// Parameters:
  ///
  /// * [ScrubIpPlaceOrder] scrubIpPlaceOrder (required):
  Future<PlaceScrubOrder201Response?> placeScrubOrder(ScrubIpPlaceOrder scrubIpPlaceOrder,) async {
    final response = await placeScrubOrderWithHttpInfo(scrubIpPlaceOrder,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'PlaceScrubOrder201Response',) as PlaceScrubOrder201Response;
    
    }
    return null;
  }

  /// Delete Geo Firewall Rule
  ///
  /// Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [DeleteGeoFirewallRule] deleteGeoFirewallRule (required):
  Future<Response> scrubIpsDeleteGeoRuleWithHttpInfo(int id, DeleteGeoFirewallRule deleteGeoFirewallRule,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/delete_geo_rule'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = deleteGeoFirewallRule;

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

  /// Delete Geo Firewall Rule
  ///
  /// Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [DeleteGeoFirewallRule] deleteGeoFirewallRule (required):
  Future<ScrubIpsDeleteRule200Response?> scrubIpsDeleteGeoRule(int id, DeleteGeoFirewallRule deleteGeoFirewallRule,) async {
    final response = await scrubIpsDeleteGeoRuleWithHttpInfo(id, deleteGeoFirewallRule,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ScrubIpsDeleteRule200Response',) as ScrubIpsDeleteRule200Response;
    
    }
    return null;
  }

  /// Delete Firewall Rule
  ///
  /// Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [DeleteFirewallRule] deleteFirewallRule (required):
  Future<Response> scrubIpsDeleteRuleWithHttpInfo(int id, DeleteFirewallRule deleteFirewallRule,) async {
    // ignore: prefer_const_declarations
    final path = r'/scrub_ips/{id}/delete_rule'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = deleteFirewallRule;

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

  /// Delete Firewall Rule
  ///
  /// Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   ScrubIp ID number
  ///
  /// * [DeleteFirewallRule] deleteFirewallRule (required):
  Future<ScrubIpsDeleteRule200Response?> scrubIpsDeleteRule(int id, DeleteFirewallRule deleteFirewallRule,) async {
    final response = await scrubIpsDeleteRuleWithHttpInfo(id, deleteFirewallRule,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ScrubIpsDeleteRule200Response',) as ScrubIpsDeleteRule200Response;
    
    }
    return null;
  }
}
