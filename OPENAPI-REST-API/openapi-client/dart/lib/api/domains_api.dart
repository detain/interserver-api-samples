//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class DomainsApi {
  DomainsApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place Domain Order
  ///
  /// Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addDomainWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/domains/order';

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

  /// Place Domain Order
  ///
  /// Places a new domain registration or transfer order. Use the results from `/domains/lookup/{name}` or `/domains/order/{domain}/{regType}` to populate the required domain fields before submitting the order.
  Future<ServiceOrderPostResponse?> addDomain() async {
    final response = await addDomainWithHttpInfo();
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

  /// Add Domain DNSSEC Records
  ///
  /// Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainDnssecRequest] domainDnssecRequest (required):
  Future<Response> addDomainDnssecWithHttpInfo(int id, DomainDnssecRequest domainDnssecRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/dnssec'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = domainDnssecRequest;

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

  /// Add Domain DNSSEC Records
  ///
  /// Adds DNSSEC DS records to the domain registration. Provide one or more DNSSEC record entries (algorithm, digest type, digest, key tag). Registrations must be active.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainDnssecRequest] domainDnssecRequest (required):
  Future<SuccessTextResponse?> addDomainDnssec(int id, DomainDnssecRequest domainDnssecRequest,) async {
    final response = await addDomainDnssecWithHttpInfo(id, domainDnssecRequest,);
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

  /// Add Registered Nameserver
  ///
  /// Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainNameserverPostRequest] domainNameserverPostRequest (required):
  Future<Response> addDomainNameserverWithHttpInfo(int id, DomainNameserverPostRequest domainNameserverPostRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/nameservers'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = domainNameserverPostRequest;

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

  /// Add Registered Nameserver
  ///
  /// Adds a new registered nameserver (glue record) for the domain using the supplied hostname and IP address. Use `GET /domains/{id}/nameservers` to confirm that the new entry exists.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainNameserverPostRequest] domainNameserverPostRequest (required):
  Future<TextResponse?> addDomainNameserver(int id, DomainNameserverPostRequest domainNameserverPostRequest,) async {
    final response = await addDomainNameserverWithHttpInfo(id, domainNameserverPostRequest,);
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

  /// Cancel Domain Order
  ///
  /// Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> cancelDomainWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}'
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

  /// Cancel Domain Order
  ///
  /// Cancels the domain order in the billing system. After cancellation the service will no longer auto-renew and will transition to a `canceled` status. The domain registration itself may remain active at the registrar until its current expiration date, but no further renewals will be processed. Treat the domain as inactive in downstream automation after this call succeeds.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<CancelDomain200Response?> cancelDomain(int id,) async {
    final response = await cancelDomainWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CancelDomain200Response',) as CancelDomain200Response;
    
    }
    return null;
  }

  /// Remove Domain DNSSEC Records
  ///
  /// Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [String] action (required):
  ///   Set to `delete` to remove all DNSSEC records.
  Future<Response> deleteDomainDnssecWithHttpInfo(int id, String action,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/dnssec'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'action', action));

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

  /// Remove Domain DNSSEC Records
  ///
  /// Removes DNSSEC DS records from the domain registration. Use this to disable DNSSEC at the registrar level.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [String] action (required):
  ///   Set to `delete` to remove all DNSSEC records.
  Future<SuccessTextResponse?> deleteDomainDnssec(int id, String action,) async {
    final response = await deleteDomainDnssecWithHttpInfo(id, action,);
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

  /// Delete Registered Nameserver
  ///
  /// Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [int] index (required):
  ///   The index of the registered nameserver from the registered nameservers list to delete.  
  Future<Response> deleteDomainNameserverWithHttpInfo(int id, int index,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/nameservers'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'index', index));

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

  /// Delete Registered Nameserver
  ///
  /// Removes a registered nameserver (glue record) from the domain. Specify the zero-based `index` of the nameserver to remove as returned by `GET /domains/{id}/nameservers`.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [int] index (required):
  ///   The index of the registered nameserver from the registered nameservers list to delete.  
  Future<TextResponse?> deleteDomainNameserver(int id, int index,) async {
    final response = await deleteDomainNameserverWithHttpInfo(id, index,);
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

  /// Get Domain Contact Details
  ///
  /// Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainContactWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/contact'
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

  /// Get Domain Contact Details
  ///
  /// Returns the current domain contact details that will be used for the registrant, admin, technical, and billing contact records. Use this response as the basis for any contact updates.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<DomainContactDetails?> getDomainContact(int id,) async {
    final response = await getDomainContactWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DomainContactDetails',) as DomainContactDetails;
    
    }
    return null;
  }

  /// Get Domain DNSSEC Records
  ///
  /// Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainDnssecWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/dnssec'
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

  /// Get Domain DNSSEC Records
  ///
  /// Returns the DNSSEC DS records registered with the domain. Use the record data if you need to synchronize DNSSEC settings with another registry or to prepare an update request.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<DomainDnssecRecords?> getDomainDnssec(int id,) async {
    final response = await getDomainDnssecWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DomainDnssecRecords',) as DomainDnssecRecords;
    
    }
    return null;
  }

  /// Get Domain Order
  ///
  /// Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}'
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

  /// Get Domain Order
  ///
  /// Fetches the detailed domain service record (billing, registration, and service metadata) for the specified order ID. Use the `domain_hostname` from this response when calling `/domains/lookup/{name}` or when interacting with nameserver and DNSSEC management endpoints.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Domain?> getDomainInfo(int id,) async {
    final response = await getDomainInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Domain',) as Domain;
    
    }
    return null;
  }

  /// Get Domain Invoices
  ///
  /// Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/invoices'
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

  /// Get Domain Invoices
  ///
  /// Retrieves invoice records associated with the domain order. Use this to reconcile billing or to confirm whether renewals or add-ons (such as Whois privacy) have been invoiced.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<ChargeInvoiceRows?> getDomainInvoices(int id,) async {
    final response = await getDomainInvoicesWithHttpInfo(id,);
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

  /// Lookup Domain Availability and Pricing
  ///
  /// Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  ///   The full domain name to look up (for example `example.com`).
  Future<Response> getDomainLookupWithHttpInfo(String name,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/lookup/{name}'
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

  /// Lookup Domain Availability and Pricing
  ///
  /// Checks a domain for availability and premium status, and returns pricing information for new, renewal, and transfer actions when possible. The response also includes the order field metadata you can pass to `/domains/order` when placing a registration or transfer.
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  ///   The full domain name to look up (for example `example.com`).
  Future<DomainLookupResponse?> getDomainLookup(String name,) async {
    final response = await getDomainLookupWithHttpInfo(name,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DomainLookupResponse',) as DomainLookupResponse;
    
    }
    return null;
  }

  /// List Registered Nameservers
  ///
  /// Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainNameserversWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/nameservers'
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

  /// List Registered Nameservers
  ///
  /// Returns the registered nameserver hosts and glue IP addresses currently configured at the registrar. Use the returned list when adding, updating, or deleting individual nameserver records.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<DomainNameserverGetResponse?> getDomainNameservers(int id,) async {
    final response = await getDomainNameserversWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DomainNameserverGetResponse',) as DomainNameserverGetResponse;
    
    }
    return null;
  }

  /// Get Domain Order Fields
  ///
  /// Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] domain (required):
  ///   The fully qualified domain name (e.g. `example.com`).
  ///
  /// * [String] regType (required):
  ///   The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.
  Future<Response> getDomainOrderFieldsWithHttpInfo(String domain, String regType,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/order/{domain}/{regType}'
      .replaceAll('{domain}', domain)
      .replaceAll('{regType}', regType);

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

  /// Get Domain Order Fields
  ///
  /// Returns the registration-type-specific form fields required to place a domain order for the given hostname. Use the returned fields to build the POST body for `POST /domains/order`.
  ///
  /// Parameters:
  ///
  /// * [String] domain (required):
  ///   The fully qualified domain name (e.g. `example.com`).
  ///
  /// * [String] regType (required):
  ///   The registration type. Common values include `register` for new registrations and `transfer` for inbound transfers.
  Future<void> getDomainOrderFields(String domain, String regType,) async {
    final response = await getDomainOrderFieldsWithHttpInfo(domain, regType,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Domain Order Search Results
  ///
  /// Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] domain (required):
  ///   The fully qualified domain name to look up (e.g. `example.com`).
  Future<Response> getDomainOrderSearchResultsWithHttpInfo(String domain,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/order/{domain}'
      .replaceAll('{domain}', domain);

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

  /// Get Domain Order Search Results
  ///
  /// Returns order data for the specified domain hostname, including availability and pricing details. Use this to preview order information before placing a registration or transfer.
  ///
  /// Parameters:
  ///
  /// * [String] domain (required):
  ///   The fully qualified domain name to look up (e.g. `example.com`).
  Future<void> getDomainOrderSearchResults(String domain,) async {
    final response = await getDomainOrderSearchResultsWithHttpInfo(domain,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Start Domain Renewal Flow
  ///
  /// Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainRenewalWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/renew'
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

  /// Start Domain Renewal Flow
  ///
  /// Starts the domain renewal workflow for an active domain. This endpoint currently returns a status message indicating that renewal handling has been triggered.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<SuccessTextResponse?> getDomainRenewal(int id,) async {
    final response = await getDomainRenewalWithHttpInfo(id,);
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

  /// Search Domain Suggestions
  ///
  /// Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  ///   The base domain name to search (for example `example` or `example.com`).
  Future<Response> getDomainSearchWithHttpInfo(String name,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/search/{name}'
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

  /// Search Domain Suggestions
  ///
  /// Queries the registrar for suggested domains and availability data. Use the returned `lookup` results to identify availability and then call `/domains/lookup/{name}` or `/domains/order` to obtain pricing and order fields for the chosen domain.
  ///
  /// Parameters:
  ///
  /// * [String] name (required):
  ///   The base domain name to search (for example `example` or `example.com`).
  Future<DomainSearchResponse?> getDomainSearch(String name,) async {
    final response = await getDomainSearchWithHttpInfo(name,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DomainSearchResponse',) as DomainSearchResponse;
    
    }
    return null;
  }

  /// Start Domain Transfer Flow
  ///
  /// Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainTransferWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/transfer'
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

  /// Start Domain Transfer Flow
  ///
  /// Initiates the transfer workflow for a domain already in your account. Use this in coordination with `/domains/{id}/contact` to ensure registrant details are ready for the transfer request.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<SuccessTextResponse?> getDomainTransfer(int id,) async {
    final response = await getDomainTransferWithHttpInfo(id,);
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

  /// Get Whois Privacy Status
  ///
  /// Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainWhoisPrivacyWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/whois'
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

  /// Get Whois Privacy Status
  ///
  /// Returns status text for the Whois privacy add-on on the domain. Use this to determine whether privacy can be enabled or disabled for the current TLD before submitting updates.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<SuccessTextResponse?> getDomainWhoisPrivacy(int id,) async {
    final response = await getDomainWhoisPrivacyWithHttpInfo(id,);
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

  /// List Domain Orders
  ///
  /// Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getDomainsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/domains';

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

  /// List Domain Orders
  ///
  /// Returns the domain services on your account, including the billing order ID, hostname, expiration date, and status. Use the `domain_id` from this response with `GET /domains/{id}` to fetch full service details, or with `/domains/{id}/nameservers`, `/domains/{id}/contact`, and `/domains/{id}/whois` to manage registration settings.
  Future<List<DomainRow>?> getDomainsList() async {
    final response = await getDomainsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<DomainRow>') as List)
        .cast<DomainRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Resend Domain Welcome Email
  ///
  /// Resends the welcome email for the domain service. The email contains registration details and management instructions.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> getDomainsWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/welcome_email'
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

  /// Resend Domain Welcome Email
  ///
  /// Resends the welcome email for the domain service. The email contains registration details and management instructions.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<SuccessTextResponse?> getDomainsWelcomeEmail(int id,) async {
    final response = await getDomainsWelcomeEmailWithHttpInfo(id,);
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

  /// Get Domain Ordering Information
  ///
  /// Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewDomainWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/domains/order';

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

  /// Get Domain Ordering Information
  ///
  /// Returns the catalog of available domain services, including TLD service IDs and base Whois privacy pricing. Use the `tldServices` map to resolve a TLD into a service ID when you build an order request for `/domains/order` (POST) or the domain-field lookup endpoints.
  Future<DomainOrder?> getNewDomain() async {
    final response = await getNewDomainWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'DomainOrder',) as DomainOrder;
    
    }
    return null;
  }

  /// Validate Domain Order
  ///
  /// Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> patchDomainsWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/domains/order';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>[];


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

  /// Validate Domain Order
  ///
  /// Returns the domain-specific field requirements for the supplied hostname and registration type. Use this to build the form data required for `/domains/order` (POST).
  Future<void> patchDomains() async {
    final response = await patchDomainsWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Request Domain Renewal
  ///
  /// Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> postDomainRenewalWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/renew'
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

  /// Request Domain Renewal
  ///
  /// Submits a domain renewal request for the order. Use `/domains/{id}/invoices` to identify any invoices created as part of the renewal flow.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<SuccessTextResponse?> postDomainRenewal(int id,) async {
    final response = await postDomainRenewalWithHttpInfo(id,);
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

  /// Request Domain Transfer
  ///
  /// Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> postDomainTransferWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/transfer'
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

  /// Request Domain Transfer
  ///
  /// Submits a transfer request for the domain order. Use `/domains/{id}/invoices` to identify any invoices generated as part of the transfer process.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<SuccessTextResponse?> postDomainTransfer(int id,) async {
    final response = await postDomainTransferWithHttpInfo(id,);
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

  /// Domain Order Search
  ///
  /// Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putDomainsWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/domains/order';

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

  /// Domain Order Search
  ///
  /// Returns validation data for a domain order request (such as availability and pricing information). This is typically used as a pre-flight check before submitting a POST order.
  Future<void> putDomains() async {
    final response = await putDomainsWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Update Domain Contact Details
  ///
  /// Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainContactDetails] domainContactDetails (required):
  Future<Response> updateDomainContactWithHttpInfo(int id, DomainContactDetails domainContactDetails,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/contact'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = domainContactDetails;

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

  /// Update Domain Contact Details
  ///
  /// Updates the registrant/admin contact details for the domain. Submit the same fields returned by the GET response after making the desired changes. Domain updates require the service to be active and unlocked.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainContactDetails] domainContactDetails (required):
  Future<SuccessTextResponse?> updateDomainContact(int id, DomainContactDetails domainContactDetails,) async {
    final response = await updateDomainContactWithHttpInfo(id, domainContactDetails,);
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

  /// Update Domain Order
  ///
  /// Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<Response> updateDomainInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}'
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

  /// Update Domain Order
  ///
  /// Updates the domain service record for the order. Use this for account-level changes such as updating stored registration metadata or transfer attributes.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  Future<SuccessTextResponse?> updateDomainInfo(String id,) async {
    final response = await updateDomainInfoWithHttpInfo(id,);
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

  /// Replace Nameserver Set
  ///
  /// Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainNameserverPutRequest] domainNameserverPutRequest (required):
  Future<Response> updateDomainNameserversWithHttpInfo(int id, DomainNameserverPutRequest domainNameserverPutRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/nameservers'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = domainNameserverPutRequest;

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

  /// Replace Nameserver Set
  ///
  /// Replaces the full nameserver assignment for the domain with the provided list. This is the primary method for changing which authoritative nameservers the domain delegates to.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainNameserverPutRequest] domainNameserverPutRequest (required):
  Future<TextResponse?> updateDomainNameservers(int id, DomainNameserverPutRequest domainNameserverPutRequest,) async {
    final response = await updateDomainNameserversWithHttpInfo(id, domainNameserverPutRequest,);
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

  /// Update Whois Privacy
  ///
  /// Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainWhoisPrivacyRequest] domainWhoisPrivacyRequest (required):
  Future<Response> updateDomainWhoisPrivacyWithHttpInfo(int id, DomainWhoisPrivacyRequest domainWhoisPrivacyRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/domains/{id}/whois'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = domainWhoisPrivacyRequest;

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

  /// Update Whois Privacy
  ///
  /// Enables or disables the Whois privacy add-on for the domain. The API may create invoices when enabling privacy; use `/domains/{id}/invoices` to track billing events.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The domain service ID. Use `domain_id` from `GET /domains`.
  ///
  /// * [DomainWhoisPrivacyRequest] domainWhoisPrivacyRequest (required):
  Future<SuccessTextResponse?> updateDomainWhoisPrivacy(int id, DomainWhoisPrivacyRequest domainWhoisPrivacyRequest,) async {
    final response = await updateDomainWhoisPrivacyWithHttpInfo(id, domainWhoisPrivacyRequest,);
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
