//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class TicketsApi {
  TicketsApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Create New Ticket
  ///
  /// Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [TicketNew] ticketNew (required):
  Future<Response> addNewTicketWithHttpInfo(TicketNew ticketNew,) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/new';

    // ignore: prefer_final_locals
    Object? postBody = ticketNew;

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

  /// Create New Ticket
  ///
  /// Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
  ///
  /// Parameters:
  ///
  /// * [TicketNew] ticketNew (required):
  Future<TicketNewResponse?> addNewTicket(TicketNew ticketNew,) async {
    final response = await addNewTicketWithHttpInfo(ticketNew,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'TicketNewResponse',) as TicketNewResponse;
    
    }
    return null;
  }

  /// Close Ticket
  ///
  /// Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Ticket ID
  Future<Response> closeTicketWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/{id}/close'
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

  /// Close Ticket
  ///
  /// Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   Ticket ID
  Future<CloseTicketResponseSchema?> closeTicket(String id,) async {
    final response = await closeTicketWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'CloseTicketResponseSchema',) as CloseTicketResponseSchema;
    
    }
    return null;
  }

  /// Close Ticket
  ///
  /// Closes the support ticket.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<Response> deleteTicketInfoWithHttpInfo(num id,) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/{id}'
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

  /// Close Ticket
  ///
  /// Closes the support ticket.
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<ViewTicketResponse?> deleteTicketInfo(num id,) async {
    final response = await deleteTicketInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ViewTicketResponse',) as ViewTicketResponse;
    
    }
    return null;
  }

  /// Gets Information for creating a new ticket.
  ///
  /// Returns the form data needed to create a new support ticket, such as available departments and service categories.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getNewTicketWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/new';

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

  /// Gets Information for creating a new ticket.
  ///
  /// Returns the form data needed to create a new support ticket, such as available departments and service categories.
  Future<void> getNewTicket() async {
    final response = await getNewTicketWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
  }

  /// Get Ticket Information
  ///
  /// Returns the full details of a support ticket including its history of replies.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<Response> getTicketInfoWithHttpInfo(num id,) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/{id}'
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

  /// Get Ticket Information
  ///
  /// Returns the full details of a support ticket including its history of replies.
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<ViewTicketResponse?> getTicketInfo(num id,) async {
    final response = await getTicketInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ViewTicketResponse',) as ViewTicketResponse;
    
    }
    return null;
  }

  /// List Support Tickets
  ///
  /// Returns a paginated list of support tickets on the account. Filter by status and time period.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] page:
  ///   Page number for paginated results.
  ///
  /// * [String] period:
  ///   How far back to show tickets from. Value is in days.
  ///
  /// * [String] view:
  ///   The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
  Future<Response> getTicketsListWithHttpInfo({ int? page, String? period, String? view, }) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (page != null) {
      queryParams.addAll(_queryParams('', 'page', page));
    }
    if (period != null) {
      queryParams.addAll(_queryParams('', 'period', period));
    }
    if (view != null) {
      queryParams.addAll(_queryParams('', 'view', view));
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

  /// List Support Tickets
  ///
  /// Returns a paginated list of support tickets on the account. Filter by status and time period.
  ///
  /// Parameters:
  ///
  /// * [int] page:
  ///   Page number for paginated results.
  ///
  /// * [String] period:
  ///   How far back to show tickets from. Value is in days.
  ///
  /// * [String] view:
  ///   The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
  Future<Tickets?> getTicketsList({ int? page, String? period, String? view, }) async {
    final response = await getTicketsListWithHttpInfo( page: page, period: period, view: view, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Tickets',) as Tickets;
    
    }
    return null;
  }

  /// Reply To Ticket
  ///
  /// Adds a reply to an existing support ticket.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<Response> postTicketInfoWithHttpInfo(num id,) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/{id}'
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

  /// Reply To Ticket
  ///
  /// Adds a reply to an existing support ticket.
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<ViewTicketResponse?> postTicketInfo(num id,) async {
    final response = await postTicketInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ViewTicketResponse',) as ViewTicketResponse;
    
    }
    return null;
  }

  /// Search Support Tickets
  ///
  /// Searches support tickets by email, subject, or ticket mask ID.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> postTicketsListWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/tickets';

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

  /// Search Support Tickets
  ///
  /// Searches support tickets by email, subject, or ticket mask ID.
  Future<Tickets?> postTicketsList() async {
    final response = await postTicketsListWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Tickets',) as Tickets;
    
    }
    return null;
  }

  /// Update Ticket
  ///
  /// Updates a support ticket's properties such as subject or status.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<Response> putTicketInfoWithHttpInfo(num id,) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/{id}'
      .replaceAll('{id}', id.toString());

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

  /// Update Ticket
  ///
  /// Updates a support ticket's properties such as subject or status.
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   Ticket ID number.
  Future<ViewTicketResponse?> putTicketInfo(num id,) async {
    final response = await putTicketInfoWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ViewTicketResponse',) as ViewTicketResponse;
    
    }
    return null;
  }

  /// Reply Ticket
  ///
  /// Posts a reply to an existing support ticket thread.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   The ticket ID number.
  ///
  /// * [ReplyTicketRequest] replyTicketRequest:
  Future<Response> replyTicketWithHttpInfo(num id, { ReplyTicketRequest? replyTicketRequest, }) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/{id}/reply'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = replyTicketRequest;

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

  /// Reply Ticket
  ///
  /// Posts a reply to an existing support ticket thread.
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   The ticket ID number.
  ///
  /// * [ReplyTicketRequest] replyTicketRequest:
  Future<ReplyTicketResponseSchema?> replyTicket(num id, { ReplyTicketRequest? replyTicketRequest, }) async {
    final response = await replyTicketWithHttpInfo(id,  replyTicketRequest: replyTicketRequest, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'ReplyTicketResponseSchema',) as ReplyTicketResponseSchema;
    
    }
    return null;
  }

  /// Update Ticket
  ///
  /// Updates a support ticket's subject or body content.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   The ticket ID number.
  ///
  /// * [UpdateTicket] updateTicket:
  Future<Response> updateTicketInfoWithHttpInfo(num id, { UpdateTicket? updateTicket, }) async {
    // ignore: prefer_const_declarations
    final path = r'/tickets/{id}/update'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = updateTicket;

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

  /// Update Ticket
  ///
  /// Updates a support ticket's subject or body content.
  ///
  /// Parameters:
  ///
  /// * [num] id (required):
  ///   The ticket ID number.
  ///
  /// * [UpdateTicket] updateTicket:
  Future<UpdateTicketResponseSchema?> updateTicketInfo(num id, { UpdateTicket? updateTicket, }) async {
    final response = await updateTicketInfoWithHttpInfo(id,  updateTicket: updateTicket, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'UpdateTicketResponseSchema',) as UpdateTicketResponseSchema;
    
    }
    return null;
  }
}
