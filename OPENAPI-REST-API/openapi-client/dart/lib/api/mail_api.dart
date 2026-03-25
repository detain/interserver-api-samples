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
  /// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [int] id2:
  ///   The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from `GET /mail` or `GET /mail/{id}`.
  ///
  /// * [String] origin:
  ///   Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address.
  ///
  /// * [String] mx:
  ///   Filter by the MX hostname the relay attempted delivery to.  For example `mx.google.com` would return messages destined for Gmail recipients. Maps to `mxHostname` in the `MailLogEntry` response.
  ///
  /// * [String] from:
  ///   Filter by SMTP envelope `MAIL FROM` address (exact match).  This is the address the relay used for bounce handling and may differ from the `From:` message header.  For header-level filtering use `headerfrom`.
  ///
  /// * [String] to:
  ///   Filter by SMTP envelope `RCPT TO` address (exact match).  This is the delivery address used by the relay and may differ from the `To:` header when BCC recipients are involved.
  ///
  /// * [String] subject:
  ///   Filter by email `Subject` header (exact match).  MIME-encoded subjects are decoded automatically in the response.
  ///
  /// * [String] mailid:
  ///   Filter by the relay-assigned mail ID string (exact match).  This corresponds to the `id` field in `MailLogEntry` and to the `text` value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as `185997065c60008840`.
  ///
  /// * [String] messageId:
  ///   Filter by the `Message-ID` email header using a substring (case-insensitive) match.  The `Message-ID` is assigned by the sending mail client and is visible in the `messageId` field of `MailLogEntry`.
  ///
  /// * [String] replyto:
  ///   Filter by the `Reply-To` message header address (exact match).  Only returns messages where this header was explicitly set.
  ///
  /// * [String] headerfrom:
  ///   Filter by the `From` message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope `from` parameter when sending on behalf of another address.
  ///
  /// * [int] delivered:
  ///   Filter by delivery status.  `1` returns only messages that were successfully delivered to the destination MX.  `0` returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status.
  ///
  /// * [int] skip:
  ///   Number of records to skip for pagination.  Use in combination with `limit` to page through large result sets.  Defaults to `0` (no skip).
  ///
  /// * [int] limit:
  ///   Maximum number of records to return per page.  Defaults to `100`. Maximum allowed value is `10000`.  The response also includes a `total` field with the full matched count so you can calculate the number of pages.
  ///
  /// * [ViewMailLogStartDateParameter] startDate:
  ///   Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-15` or `last monday`.  Messages with a `time` value **greater than or equal to** this value will be included.
  ///
  /// * [ViewMailLogStartDateParameter] endDate:
  ///   Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-31` or `yesterday`.  Messages with a `time` value **less than or equal to** this value will be included.
  ///
  /// * [String] sort:
  ///   Field to sort results by.  Currently only `time` is supported (sorts by internal row ID which corresponds to chronological order).
  ///
  /// * [String] dir:
  ///   Sort direction.  `desc` returns newest first (default), `asc` returns oldest first.
  ///
  /// * [String] groupby:
  ///   Controls how results are grouped.  `recipient` (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and delivery metadata.  `message` collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The `total` count in the response matches the grouping mode.
  Future<Response> viewMailLogWithHttpInfo(int id, { int? id2, String? origin, String? mx, String? from, String? to, String? subject, String? mailid, String? messageId, String? replyto, String? headerfrom, int? delivered, int? skip, int? limit, ViewMailLogStartDateParameter? startDate, ViewMailLogStartDateParameter? endDate, String? sort, String? dir, String? groupby, }) async {
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
    if (messageId != null) {
      queryParams.addAll(_queryParams('', 'messageId', messageId));
    }
    if (replyto != null) {
      queryParams.addAll(_queryParams('', 'replyto', replyto));
    }
    if (headerfrom != null) {
      queryParams.addAll(_queryParams('', 'headerfrom', headerfrom));
    }
    if (delivered != null) {
      queryParams.addAll(_queryParams('', 'delivered', delivered));
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
    if (sort != null) {
      queryParams.addAll(_queryParams('', 'sort', sort));
    }
    if (dir != null) {
      queryParams.addAll(_queryParams('', 'dir', dir));
    }
    if (groupby != null) {
      queryParams.addAll(_queryParams('', 'groupby', groupby));
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
  /// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The mail service ID. Use `mail_id` from `GET /mail`.
  ///
  /// * [int] id2:
  ///   The numeric ID of the mail order to filter by.  When omitted, logs from the first active mail order are returned.  Obtain valid IDs from `GET /mail` or `GET /mail/{id}`.
  ///
  /// * [String] origin:
  ///   Filter by the originating IP address from which the message was submitted to the relay.  Must be a valid IPv4 or IPv6 address.
  ///
  /// * [String] mx:
  ///   Filter by the MX hostname the relay attempted delivery to.  For example `mx.google.com` would return messages destined for Gmail recipients. Maps to `mxHostname` in the `MailLogEntry` response.
  ///
  /// * [String] from:
  ///   Filter by SMTP envelope `MAIL FROM` address (exact match).  This is the address the relay used for bounce handling and may differ from the `From:` message header.  For header-level filtering use `headerfrom`.
  ///
  /// * [String] to:
  ///   Filter by SMTP envelope `RCPT TO` address (exact match).  This is the delivery address used by the relay and may differ from the `To:` header when BCC recipients are involved.
  ///
  /// * [String] subject:
  ///   Filter by email `Subject` header (exact match).  MIME-encoded subjects are decoded automatically in the response.
  ///
  /// * [String] mailid:
  ///   Filter by the relay-assigned mail ID string (exact match).  This corresponds to the `id` field in `MailLogEntry` and to the `text` value returned by the sending endpoints on success.  Format is an 18-19 character hexadecimal string such as `185997065c60008840`.
  ///
  /// * [String] messageId:
  ///   Filter by the `Message-ID` email header using a substring (case-insensitive) match.  The `Message-ID` is assigned by the sending mail client and is visible in the `messageId` field of `MailLogEntry`.
  ///
  /// * [String] replyto:
  ///   Filter by the `Reply-To` message header address (exact match).  Only returns messages where this header was explicitly set.
  ///
  /// * [String] headerfrom:
  ///   Filter by the `From` message header address (exact match).  This is the human-visible sender address and may differ from the SMTP envelope `from` parameter when sending on behalf of another address.
  ///
  /// * [int] delivered:
  ///   Filter by delivery status.  `1` returns only messages that were successfully delivered to the destination MX.  `0` returns messages that are still queued, deferred, or failed.  Omit to return all messages regardless of delivery status.
  ///
  /// * [int] skip:
  ///   Number of records to skip for pagination.  Use in combination with `limit` to page through large result sets.  Defaults to `0` (no skip).
  ///
  /// * [int] limit:
  ///   Maximum number of records to return per page.  Defaults to `100`. Maximum allowed value is `10000`.  The response also includes a `total` field with the full matched count so you can calculate the number of pages.
  ///
  /// * [ViewMailLogStartDateParameter] startDate:
  ///   Earliest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-15` or `last monday`.  Messages with a `time` value **greater than or equal to** this value will be included.
  ///
  /// * [ViewMailLogStartDateParameter] endDate:
  ///   Latest date to include.  Accepts either a Unix timestamp (integer seconds since epoch) or a date string parseable by `strtotime()` such as `2024-01-31` or `yesterday`.  Messages with a `time` value **less than or equal to** this value will be included.
  ///
  /// * [String] sort:
  ///   Field to sort results by.  Currently only `time` is supported (sorts by internal row ID which corresponds to chronological order).
  ///
  /// * [String] dir:
  ///   Sort direction.  `desc` returns newest first (default), `asc` returns oldest first.
  ///
  /// * [String] groupby:
  ///   Controls how results are grouped.  `recipient` (default) returns one row per delivery attempt — a message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and delivery metadata.  `message` collapses to one row per unique message ID; delivery-level fields will reflect one arbitrary recipient per message.  The `total` count in the response matches the grouping mode.
  Future<MailLog?> viewMailLog(int id, { int? id2, String? origin, String? mx, String? from, String? to, String? subject, String? mailid, String? messageId, String? replyto, String? headerfrom, int? delivered, int? skip, int? limit, ViewMailLogStartDateParameter? startDate, ViewMailLogStartDateParameter? endDate, String? sort, String? dir, String? groupby, }) async {
    final response = await viewMailLogWithHttpInfo(id,  id2: id2, origin: origin, mx: mx, from: from, to: to, subject: subject, mailid: mailid, messageId: messageId, replyto: replyto, headerfrom: headerfrom, delivered: delivered, skip: skip, limit: limit, startDate: startDate, endDate: endDate, sort: sort, dir: dir, groupby: groupby, );
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
