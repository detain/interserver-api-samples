//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class MailApi {
  MailApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Place Mail Order
  ///
  /// Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> addMailWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/mail/order';

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

  /// Place Mail Order
  ///
  /// Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
  Future<void> addMail() async {
    final response = await addMailWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Create Deny Rule
  ///
  /// Adds a new deny rule to automatically block emails that match the specified criteria.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [DenyRuleNew] denyRuleNew (required):
  ///   These are the fields needed to create a new email deny rule.
  Future<Response> addRuleWithHttpInfo(int id, DenyRuleNew denyRuleNew,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/rules'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = denyRuleNew;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['application/json', 'application/x-www-form-urlencoded'];


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

  /// Create Deny Rule
  ///
  /// Adds a new deny rule to automatically block emails that match the specified criteria.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [DenyRuleNew] denyRuleNew (required):
  ///   These are the fields needed to create a new email deny rule.
  Future<GenericResponse?> addRule(int id, DenyRuleNew denyRuleNew,) async {
    final response = await addRuleWithHttpInfo(id, denyRuleNew,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GenericResponse',) as GenericResponse;
    
    }
    return null;
  }

  /// Create Mail Alert
  ///
  /// Creates a new alert for the mail service, such as delivery or quota notifications.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [MailAlertRequest] mailAlertRequest (required):
  Future<Response> createMailAlertWithHttpInfo(int id, MailAlertRequest mailAlertRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/alerts'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = mailAlertRequest;

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

  /// Create Mail Alert
  ///
  /// Creates a new alert for the mail service, such as delivery or quota notifications.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [MailAlertRequest] mailAlertRequest (required):
  Future<SuccessTextResponse?> createMailAlert(int id, MailAlertRequest mailAlertRequest,) async {
    final response = await createMailAlertWithHttpInfo(id, mailAlertRequest,);
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

  /// Delete Mail Alert
  ///
  /// Deletes an existing alert definition for the mail service.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [int] alertId (required):
  ///   Alert ID to delete.
  Future<Response> deleteMailAlertWithHttpInfo(int id, int alertId,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/alerts'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

      queryParams.addAll(_queryParams('', 'alert_id', alertId));

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

  /// Delete Mail Alert
  ///
  /// Deletes an existing alert definition for the mail service.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [int] alertId (required):
  ///   Alert ID to delete.
  Future<SuccessTextResponse?> deleteMailAlert(int id, int alertId,) async {
    final response = await deleteMailAlertWithHttpInfo(id, alertId,);
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

  /// Delete Deny Rule
  ///
  /// Removes a deny rule from the mail service.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [String] rule (required):
  ///   The ID of the Rules entry.
  Future<Response> deleteRuleWithHttpInfo(int id, String rule,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/rules/{rule}'
      .replaceAll('{id}', id.toString())
      .replaceAll('{rule}', rule);

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

  /// Delete Deny Rule
  ///
  /// Removes a deny rule from the mail service.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [String] rule (required):
  ///   The ID of the Rules entry.
  Future<GenericResponse?> deleteRule(int id, String rule,) async {
    final response = await deleteRuleWithHttpInfo(id, rule,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GenericResponse',) as GenericResponse;
    
    }
    return null;
  }

  /// Remove Email Address from Block List
  ///
  /// Removes an email address from the mail service's block lists.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [String] email:
  ///   an email address
  Future<Response> delistBlockWithHttpInfo(int id, { String? email, }) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/blocks/delete'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (email != null) {
      hasFields = true;
      mp.fields[r'email'] = parameterToString(email);
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

  /// Remove Email Address from Block List
  ///
  /// Removes an email address from the mail service's block lists.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [String] email:
  ///   an email address
  Future<GenericResponse?> delistBlock(int id, { String? email, }) async {
    final response = await delistBlockWithHttpInfo(id,  email: email, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GenericResponse',) as GenericResponse;
    
    }
    return null;
  }

  /// List Mail Alerts
  ///
  /// Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getMailAlertsWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/alerts'
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

  /// List Mail Alerts
  ///
  /// Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<MailAlertsResponse?> getMailAlerts(int id,) async {
    final response = await getMailAlertsWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailAlertsResponse',) as MailAlertsResponse;
    
    }
    return null;
  }

  /// List Blocked Email Addresses
  ///
  /// Displays a listing of the blocked email addresses
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getMailBlocksWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/blocks'
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

  /// List Blocked Email Addresses
  ///
  /// Displays a listing of the blocked email addresses
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<MailBlocks?> getMailBlocks(int id,) async {
    final response = await getMailBlocksWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailBlocks',) as MailBlocks;
    
    }
    return null;
  }

  /// Get Delist Status
  ///
  /// Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getMailDelistWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/delist'
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

  /// Get Delist Status
  ///
  /// Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<MailDelistResponse?> getMailDelist(int id,) async {
    final response = await getMailDelistWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailDelistResponse',) as MailDelistResponse;
    
    }
    return null;
  }

  /// Get Deliverability Metrics
  ///
  /// Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getMailDeliverabilityWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/deliverability'
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

  /// Get Deliverability Metrics
  ///
  /// Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<MailDeliverabilityResponse?> getMailDeliverability(int id,) async {
    final response = await getMailDeliverabilityWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailDeliverabilityResponse',) as MailDeliverabilityResponse;
    
    }
    return null;
  }

  /// Get Mail Order
  ///
  /// Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getMailInfoWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}'
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

  /// Get Mail Order
  ///
  /// Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<MailSchema?> getMailInfo(int id,) async {
    final response = await getMailInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailSchema',) as MailSchema;
    
    }
    return null;
  }

  /// Get Mail Invoices
  ///
  /// Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getMailInvoicesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/invoices'
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

  /// Get Mail Invoices
  ///
  /// Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<ChargeInvoiceRows?> getMailInvoices(int id,) async {
    final response = await getMailInvoicesWithHttpInfo(id,);
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

  /// List Mail Orders
  ///
  /// Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getMailListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/mail';

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

  /// List Mail Orders
  ///
  /// Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
  Future<List<MailRow>?> getMailList() async {
    final response = await getMailListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<MailRow>') as List)
        .cast<MailRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Resend Mail Welcome Email
  ///
  /// Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getMailWelcomeEmailWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/welcome_email'
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

  /// Resend Mail Welcome Email
  ///
  /// Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<SuccessTextResponse?> getMailWelcomeEmail(int id,) async {
    final response = await getMailWelcomeEmailWithHttpInfo(id,);
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

  /// Get Mail Ordering Information
  ///
  /// Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewMailWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/mail/order';

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

  /// Get Mail Ordering Information
  ///
  /// Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
  Future<MailOrder?> getNewMail() async {
    final response = await getNewMailWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailOrder',) as MailOrder;
    
    }
    return null;
  }

  /// List Deny Rules
  ///
  /// Returns a listing of all the deny block rules configured for this mail service.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> getRulesWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/rules'
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

  /// List Deny Rules
  ///
  /// Returns a listing of all the deny block rules configured for this mail service.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<List<DenyRuleRecord>?> getRules(int id,) async {
    final response = await getRulesWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<DenyRuleRecord>') as List)
        .cast<DenyRuleRecord>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Mail Usage Statistics
  ///
  /// Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [String] time:
  ///   The timeframe for the statistics.
  Future<Response> getStatsWithHttpInfo(int id, { String? time, }) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/stats'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (time != null) {
      queryParams.addAll(_queryParams('', 'time', time));
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

  /// Get Mail Usage Statistics
  ///
  /// Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [String] time:
  ///   The timeframe for the statistics.
  Future<MailStatsType?> getStats(int id, { String? time, }) async {
    final response = await getStatsWithHttpInfo(id,  time: time, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailStatsType',) as MailStatsType;
    
    }
    return null;
  }

  /// Cancel Mail
  ///
  /// Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> mailCancelWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}'
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

  /// Cancel Mail
  ///
  /// Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<MailCancel200Response?> mailCancel(int id,) async {
    final response = await mailCancelWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailCancel200Response',) as MailCancel200Response;
    
    }
    return null;
  }

  /// Delist a Blocked Sender
  ///
  /// Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [MailDelistRequest] mailDelistRequest (required):
  Future<Response> postMailDelistWithHttpInfo(int id, MailDelistRequest mailDelistRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/delist'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = mailDelistRequest;

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

  /// Delist a Blocked Sender
  ///
  /// Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [MailDelistRequest] mailDelistRequest (required):
  Future<SuccessTextResponse?> postMailDelist(int id, MailDelistRequest mailDelistRequest,) async {
    final response = await postMailDelistWithHttpInfo(id, mailDelistRequest,);
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

  /// Validate Mail Order
  ///
  /// Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> putMailWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/mail/order';

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

  /// Validate Mail Order
  ///
  /// Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
  Future<void> putMail() async {
    final response = await putMailWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Reset Mail Password
  ///
  /// Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> resetMailPasswordWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/reset_password'
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

  /// Reset Mail Password
  ///
  /// Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<SuccessTextResponse?> resetMailPassword(int id,) async {
    final response = await resetMailPasswordWithHttpInfo(id,);
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

  /// Send Email with Advanced Options
  ///
  /// Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [SendMailAdv] sendMailAdv (required):
  Future<Response> sendAdvMailWithHttpInfo(int id, SendMailAdv sendMailAdv,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/advsend'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = sendMailAdv;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['application/json', 'application/x-www-form-urlencoded'];


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

  /// Send Email with Advanced Options
  ///
  /// Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [SendMailAdv] sendMailAdv (required):
  Future<GenericResponse?> sendAdvMail(int id, SendMailAdv sendMailAdv,) async {
    final response = await sendAdvMailWithHttpInfo(id, sendMailAdv,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GenericResponse',) as GenericResponse;
    
    }
    return null;
  }

  /// Send Email
  ///
  /// Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [SendMail] sendMail (required):
  Future<Response> sendMailWithHttpInfo(int id, SendMail sendMail,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/send'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = sendMail;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['application/json', 'application/x-www-form-urlencoded'];


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

  /// Send Email
  ///
  /// Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [SendMail] sendMail (required):
  Future<GenericResponse?> sendMail(int id, SendMail sendMail,) async {
    final response = await sendMailWithHttpInfo(id, sendMail,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'GenericResponse',) as GenericResponse;
    
    }
    return null;
  }

  /// Update Mail Alert
  ///
  /// Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [MailAlertUpdateRequest] mailAlertUpdateRequest (required):
  Future<Response> updateMailAlertWithHttpInfo(int id, MailAlertUpdateRequest mailAlertUpdateRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/alerts'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = mailAlertUpdateRequest;

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

  /// Update Mail Alert
  ///
  /// Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [MailAlertUpdateRequest] mailAlertUpdateRequest (required):
  Future<SuccessTextResponse?> updateMailAlert(int id, MailAlertUpdateRequest mailAlertUpdateRequest,) async {
    final response = await updateMailAlertWithHttpInfo(id, mailAlertUpdateRequest,);
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

  /// Update Mail Order
  ///
  /// Updates mail service metadata for the order, such as stored settings or account details.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<Response> updateMailInfoWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}'
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

  /// Update Mail Order
  ///
  /// Updates mail service metadata for the order, such as stored settings or account details.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  Future<void> updateMailInfo(String id,) async {
    final response = await updateMailInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// View Mail Log
  ///
  /// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [int] id2:
  ///   The ID of your mail order this will be sent through.
  ///
  /// * [String] origin:
  ///   originating ip address sending mail
  ///
  /// * [String] mx:
  ///   mx record mail was sent to
  ///
  /// * [String] from:
  ///   from email address
  ///
  /// * [String] to:
  ///   to/destination email address
  ///
  /// * [String] subject:
  ///   subject containing this string
  ///
  /// * [String] mailid:
  ///   mail id
  ///
  /// * [int] skip:
  ///   number of records to skip for pagination
  ///
  /// * [int] limit:
  ///   maximum number of records to return
  ///
  /// * [int] startDate:
  ///   earliest date to get emails in unix timestamp format
  ///
  /// * [int] endDate:
  ///   Latest date to get emails in unix timestamp format.
  ///
  /// * [String] delivered:
  ///   Filter emails by whether or not they were delivered.
  Future<Response> viewMailLogWithHttpInfo(int id, { int? id2, String? origin, String? mx, String? from, String? to, String? subject, String? mailid, int? skip, int? limit, int? startDate, int? endDate, String? delivered, }) async {
    // ignore: prefer_const_declarations
    final path = r'/mail/{id}/log'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (id2 != null) {
      queryParams.addAll(_queryParams('', 'id', id2));
    }
    if (origin != null) {
      queryParams.addAll(_queryParams('', 'origin', origin));
    }
    if (mx != null) {
      queryParams.addAll(_queryParams('', 'mx', mx));
    }
    if (from != null) {
      queryParams.addAll(_queryParams('', 'from', from));
    }
    if (to != null) {
      queryParams.addAll(_queryParams('', 'to', to));
    }
    if (subject != null) {
      queryParams.addAll(_queryParams('', 'subject', subject));
    }
    if (mailid != null) {
      queryParams.addAll(_queryParams('', 'mailid', mailid));
    }
    if (skip != null) {
      queryParams.addAll(_queryParams('', 'skip', skip));
    }
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
    }
    if (startDate != null) {
      queryParams.addAll(_queryParams('', 'startDate', startDate));
    }
    if (endDate != null) {
      queryParams.addAll(_queryParams('', 'endDate', endDate));
    }
    if (delivered != null) {
      queryParams.addAll(_queryParams('', 'delivered', delivered));
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

  /// View Mail Log
  ///
  /// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [int] id2:
  ///   The ID of your mail order this will be sent through.
  ///
  /// * [String] origin:
  ///   originating ip address sending mail
  ///
  /// * [String] mx:
  ///   mx record mail was sent to
  ///
  /// * [String] from:
  ///   from email address
  ///
  /// * [String] to:
  ///   to/destination email address
  ///
  /// * [String] subject:
  ///   subject containing this string
  ///
  /// * [String] mailid:
  ///   mail id
  ///
  /// * [int] skip:
  ///   number of records to skip for pagination
  ///
  /// * [int] limit:
  ///   maximum number of records to return
  ///
  /// * [int] startDate:
  ///   earliest date to get emails in unix timestamp format
  ///
  /// * [int] endDate:
  ///   Latest date to get emails in unix timestamp format.
  ///
  /// * [String] delivered:
  ///   Filter emails by whether or not they were delivered.
  Future<MailLog?> viewMailLog(int id, { int? id2, String? origin, String? mx, String? from, String? to, String? subject, String? mailid, int? skip, int? limit, int? startDate, int? endDate, String? delivered, }) async {
    final response = await viewMailLogWithHttpInfo(id,  id2: id2, origin: origin, mx: mx, from: from, to: to, subject: subject, mailid: mailid, skip: skip, limit: limit, startDate: startDate, endDate: endDate, delivered: delivered, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MailLog',) as MailLog;
    
    }
    return null;
  }
}
