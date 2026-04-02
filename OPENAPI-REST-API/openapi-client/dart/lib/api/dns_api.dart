//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class DNSApi {
  DNSApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Create DNS Domain
  ///
  /// Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] domain (required):
  ///   The domain name.
  ///
  /// * [String] ip (required):
  ///   IP Address to point the domain to.
  Future<Response> addDnsDomainWithHttpInfo(String domain, String ip,) async {
    // ignore: prefer_const_declarations
    final path = r'/dns';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (domain != null) {
      hasFields = true;
      mp.fields[r'domain'] = parameterToString(domain);
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

  /// Create DNS Domain
  ///
  /// Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
  ///
  /// Parameters:
  ///
  /// * [String] domain (required):
  ///   The domain name.
  ///
  /// * [String] ip (required):
  ///   IP Address to point the domain to.
  Future<SuccessTextResponse?> addDnsDomain(String domain, String ip,) async {
    final response = await addDnsDomainWithHttpInfo(domain, ip,);
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

  /// Add DNS Record to Domain
  ///
  /// Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The DNS Domain ID.
  ///
  /// * [String] name (required):
  ///   Name part of record
  ///
  /// * [DnsRecordType] type (required):
  ///
  /// * [String] content (required):
  ///   Content of record
  ///
  /// * [int] ttl:
  ///   Time-to-live
  ///
  /// * [int] prio:
  ///   Priority
  Future<Response> addDnsRecordWithHttpInfo(String id, String name, DnsRecordType type, String content, { int? ttl, int? prio, }) async {
    // ignore: prefer_const_declarations
    final path = r'/dns/{id}'
      .replaceAll('{id}', id);

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (name != null) {
      hasFields = true;
      mp.fields[r'name'] = parameterToString(name);
    }
    if (type != null) {
      hasFields = true;
      mp.fields[r'type'] = parameterToString(type);
    }
    if (content != null) {
      hasFields = true;
      mp.fields[r'content'] = parameterToString(content);
    }
    if (ttl != null) {
      hasFields = true;
      mp.fields[r'ttl'] = parameterToString(ttl);
    }
    if (prio != null) {
      hasFields = true;
      mp.fields[r'prio'] = parameterToString(prio);
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

  /// Add DNS Record to Domain
  ///
  /// Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The DNS Domain ID.
  ///
  /// * [String] name (required):
  ///   Name part of record
  ///
  /// * [DnsRecordType] type (required):
  ///
  /// * [String] content (required):
  ///   Content of record
  ///
  /// * [int] ttl:
  ///   Time-to-live
  ///
  /// * [int] prio:
  ///   Priority
  Future<void> addDnsRecord(String id, String name, DnsRecordType type, String content, { int? ttl, int? prio, }) async {
    final response = await addDnsRecordWithHttpInfo(id, name, type, content,  ttl: ttl, prio: prio, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Delete DNS Domain
  ///
  /// Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
  Future<Response> deleteDnsDomainWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/dns/{id}'
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

  /// Delete DNS Domain
  ///
  /// Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The DNS domain ID to delete. Use the `id` from `GET /dns` to identify the domain.
  Future<SuccessTextResponse?> deleteDnsDomain(String id,) async {
    final response = await deleteDnsDomainWithHttpInfo(id,);
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

  /// Delete DNS Record
  ///
  /// Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] domainId (required):
  ///   The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  ///
  /// * [int] recordId (required):
  ///   The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
  Future<Response> deleteDnsRecordWithHttpInfo(int domainId, int recordId,) async {
    // ignore: prefer_const_declarations
    final path = r'/dns/{domainId}/{recordId}'
      .replaceAll('{domainId}', domainId.toString())
      .replaceAll('{recordId}', recordId.toString());

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

  /// Delete DNS Record
  ///
  /// Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
  ///
  /// Parameters:
  ///
  /// * [int] domainId (required):
  ///   The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  ///
  /// * [int] recordId (required):
  ///   The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
  Future<SuccessTextResponse?> deleteDnsRecord(int domainId, int recordId,) async {
    final response = await deleteDnsRecordWithHttpInfo(domainId, recordId,);
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

  /// List Domain DNS Records
  ///
  /// Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  Future<Response> getDnsDomainWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/dns/{id}'
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

  /// List Domain DNS Records
  ///
  /// Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  Future<List<DnsRecord>?> getDnsDomain(int id,) async {
    final response = await getDnsDomainWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<DnsRecord>') as List)
        .cast<DnsRecord>()
        .toList(growable: false);

    }
    return null;
  }

  /// List DNS Domains
  ///
  /// Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getDnsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/dns';

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

  /// List DNS Domains
  ///
  /// Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
  Future<List<DnsListItem>?> getDnsList() async {
    final response = await getDnsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<DnsListItem>') as List)
        .cast<DnsListItem>()
        .toList(growable: false);

    }
    return null;
  }

  /// Update DNS Record
  ///
  /// Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] domainId (required):
  ///   The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  ///
  /// * [int] recordId (required):
  ///   The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
  ///
  /// * [String] name:
  ///
  /// * [DnsRecordType] type:
  ///
  /// * [String] content:
  ///
  /// * [String] ttl:
  ///
  /// * [String] prio:
  ///
  /// * [String] disabled:
  ///
  /// * [String] ordername:
  ///
  /// * [String] auth:
  Future<Response> updateDnsRecordWithHttpInfo(int domainId, int recordId, { String? name, DnsRecordType? type, String? content, String? ttl, String? prio, String? disabled, String? ordername, String? auth, }) async {
    // ignore: prefer_const_declarations
    final path = r'/dns/{domainId}/{recordId}'
      .replaceAll('{domainId}', domainId.toString())
      .replaceAll('{recordId}', recordId.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (name != null) {
      hasFields = true;
      mp.fields[r'name'] = parameterToString(name);
    }
    if (type != null) {
      hasFields = true;
      mp.fields[r'type'] = parameterToString(type);
    }
    if (content != null) {
      hasFields = true;
      mp.fields[r'content'] = parameterToString(content);
    }
    if (ttl != null) {
      hasFields = true;
      mp.fields[r'ttl'] = parameterToString(ttl);
    }
    if (prio != null) {
      hasFields = true;
      mp.fields[r'prio'] = parameterToString(prio);
    }
    if (disabled != null) {
      hasFields = true;
      mp.fields[r'disabled'] = parameterToString(disabled);
    }
    if (ordername != null) {
      hasFields = true;
      mp.fields[r'ordername'] = parameterToString(ordername);
    }
    if (auth != null) {
      hasFields = true;
      mp.fields[r'auth'] = parameterToString(auth);
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

  /// Update DNS Record
  ///
  /// Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
  ///
  /// Parameters:
  ///
  /// * [int] domainId (required):
  ///   The DNS domain ID. Use the `id` from `GET /dns` to identify the domain.
  ///
  /// * [int] recordId (required):
  ///   The DNS record ID within the domain. Use the record `id` from `GET /dns/{id}` to identify the record.
  ///
  /// * [String] name:
  ///
  /// * [DnsRecordType] type:
  ///
  /// * [String] content:
  ///
  /// * [String] ttl:
  ///
  /// * [String] prio:
  ///
  /// * [String] disabled:
  ///
  /// * [String] ordername:
  ///
  /// * [String] auth:
  Future<SuccessTextResponse?> updateDnsRecord(int domainId, int recordId, { String? name, DnsRecordType? type, String? content, String? ttl, String? prio, String? disabled, String? ordername, String? auth, }) async {
    final response = await updateDnsRecordWithHttpInfo(domainId, recordId,  name: name, type: type, content: content, ttl: ttl, prio: prio, disabled: disabled, ordername: ordername, auth: auth, );
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
