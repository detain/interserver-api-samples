//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;


class BillingApi {
  BillingApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  final ApiClient apiClient;

  /// Add Credit Card to Account
  ///
  /// Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] name:
  ///
  /// * [String] address:
  ///
  /// * [String] city:
  ///
  /// * [String] state:
  ///
  /// * [String] country:
  ///
  /// * [String] zip:
  ///
  /// * [String] cc:
  ///
  /// * [String] ccExp:
  ///
  /// * [String] ccCcv2:
  Future<Response> addAccountCreditCardWithHttpInfo({ String? name, String? address, String? city, String? state, String? country, String? zip, String? cc, String? ccExp, String? ccCcv2, }) async {
    // ignore: prefer_const_declarations
    final path = r'/account/creditcards';

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
    if (address != null) {
      hasFields = true;
      mp.fields[r'address'] = parameterToString(address);
    }
    if (city != null) {
      hasFields = true;
      mp.fields[r'city'] = parameterToString(city);
    }
    if (state != null) {
      hasFields = true;
      mp.fields[r'state'] = parameterToString(state);
    }
    if (country != null) {
      hasFields = true;
      mp.fields[r'country'] = parameterToString(country);
    }
    if (zip != null) {
      hasFields = true;
      mp.fields[r'zip'] = parameterToString(zip);
    }
    if (cc != null) {
      hasFields = true;
      mp.fields[r'cc'] = parameterToString(cc);
    }
    if (ccExp != null) {
      hasFields = true;
      mp.fields[r'cc_exp'] = parameterToString(ccExp);
    }
    if (ccCcv2 != null) {
      hasFields = true;
      mp.fields[r'cc_ccv2'] = parameterToString(ccCcv2);
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

  /// Add Credit Card to Account
  ///
  /// Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
  ///
  /// Parameters:
  ///
  /// * [String] name:
  ///
  /// * [String] address:
  ///
  /// * [String] city:
  ///
  /// * [String] state:
  ///
  /// * [String] country:
  ///
  /// * [String] zip:
  ///
  /// * [String] cc:
  ///
  /// * [String] ccExp:
  ///
  /// * [String] ccCcv2:
  Future<SuccessTextResponse?> addAccountCreditCard({ String? name, String? address, String? city, String? state, String? country, String? zip, String? cc, String? ccExp, String? ccCcv2, }) async {
    final response = await addAccountCreditCardWithHttpInfo( name: name, address: address, city: city, state: state, country: country, zip: zip, cc: cc, ccExp: ccExp, ccCcv2: ccCcv2, );
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

  /// Add Credit Card for Billing
  ///
  /// Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [BillingAddCcRequest] billingAddCcRequest (required):
  Future<Response> addBillingCreditCardWithHttpInfo(BillingAddCcRequest billingAddCcRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/creditcards';

    // ignore: prefer_final_locals
    Object? postBody = billingAddCcRequest;

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

  /// Add Credit Card for Billing
  ///
  /// Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
  ///
  /// Parameters:
  ///
  /// * [BillingAddCcRequest] billingAddCcRequest (required):
  Future<SuccessTextResponse?> addBillingCreditCard(BillingAddCcRequest billingAddCcRequest,) async {
    final response = await addBillingCreditCardWithHttpInfo(billingAddCcRequest,);
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

  /// Create Prepay Deposit
  ///
  /// Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [BillingPrepayRequest] billingPrepayRequest (required):
  Future<Response> addBillingPrepayWithHttpInfo(BillingPrepayRequest billingPrepayRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/prepays';

    // ignore: prefer_final_locals
    Object? postBody = billingPrepayRequest;

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

  /// Create Prepay Deposit
  ///
  /// Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
  ///
  /// Parameters:
  ///
  /// * [BillingPrepayRequest] billingPrepayRequest (required):
  Future<SuccessTextResponse?> addBillingPrepay(BillingPrepayRequest billingPrepayRequest,) async {
    final response = await addBillingPrepayWithHttpInfo(billingPrepayRequest,);
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

  /// Remove Credit Card
  ///
  /// Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
  Future<Response> deleteAccountCreditCardWithHttpInfo(String id,) async {
    // ignore: prefer_const_declarations
    final path = r'/account/creditcards/{id}'
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

  /// Remove Credit Card
  ///
  /// Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
  ///
  /// Parameters:
  ///
  /// * [String] id (required):
  ///   The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
  Future<String?> deleteAccountCreditCard(String id,) async {
    final response = await deleteAccountCreditCardWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'String',) as String;
    
    }
    return null;
  }

  /// Delete Credit Card
  ///
  /// Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID to remove. Use IDs from `GET /billing/creditcards`.
  Future<Response> deleteBillingCreditCardWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/creditcards/{id}'
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

  /// Delete Credit Card
  ///
  /// Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID to remove. Use IDs from `GET /billing/creditcards`.
  Future<SuccessTextResponse?> deleteBillingCreditCard(int id,) async {
    final response = await deleteBillingCreditCardWithHttpInfo(id,);
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

  /// Delete Invoice
  ///
  /// Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The invoice ID to delete. Only unpaid invoices can be deleted.
  Future<Response> deleteBillingInvoiceWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/invoices/{id}'
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

  /// Delete Invoice
  ///
  /// Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The invoice ID to delete. Only unpaid invoices can be deleted.
  Future<SuccessTextResponse?> deleteBillingInvoice(int id,) async {
    final response = await deleteBillingInvoiceWithHttpInfo(id,);
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

  /// Delete Prepay Balance
  ///
  /// Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The prepay balance ID to delete.
  Future<Response> deleteBillingPrepayWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/prepays/{id}'
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

  /// Delete Prepay Balance
  ///
  /// Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The prepay balance ID to delete.
  Future<SuccessTextResponse?> deleteBillingPrepay(int id,) async {
    final response = await deleteBillingPrepayWithHttpInfo(id,);
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

  /// List Affiliate Banner Assets
  ///
  /// Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getAffiliateBannersWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/banners';

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

  /// List Affiliate Banner Assets
  ///
  /// Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
  Future<List<AffiliateBannerRow>?> getAffiliateBanners() async {
    final response = await getAffiliateBannersWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<AffiliateBannerRow>') as List)
        .cast<AffiliateBannerRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Affiliate Performance Report
  ///
  /// Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getAffiliateRichReportWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/rich_report';

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

  /// Get Affiliate Performance Report
  ///
  /// Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
  Future<TextResponse?> getAffiliateRichReport() async {
    final response = await getAffiliateRichReportWithHttpInfo();
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

  /// Get Affiliate Sales Graph Data
  ///
  /// Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] days:
  ///   Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
  Future<Response> getAffiliateSalesGraphWithHttpInfo({ int? days, }) async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/sales_graph';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (days != null) {
      queryParams.addAll(_queryParams('', 'days', days));
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

  /// Get Affiliate Sales Graph Data
  ///
  /// Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
  ///
  /// Parameters:
  ///
  /// * [int] days:
  ///   Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
  Future<StatusMonthlyBreakdown?> getAffiliateSalesGraph({ int? days, }) async {
    final response = await getAffiliateSalesGraphWithHttpInfo( days: days, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'StatusMonthlyBreakdown',) as StatusMonthlyBreakdown;
    
    }
    return null;
  }

  /// Get Affiliate Sales Report
  ///
  /// Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getAffiliateSalesReportWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/sales_report';

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

  /// Get Affiliate Sales Report
  ///
  /// Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
  Future<TextResponse?> getAffiliateSalesReport() async {
    final response = await getAffiliateSalesReportWithHttpInfo();
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

  /// Get Affiliate Traffic Graph Data
  ///
  /// Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] days:
  ///   Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
  Future<Response> getAffiliateTrafficGraphWithHttpInfo({ int? days, }) async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/traffic_graph';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (days != null) {
      queryParams.addAll(_queryParams('', 'days', days));
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

  /// Get Affiliate Traffic Graph Data
  ///
  /// Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
  ///
  /// Parameters:
  ///
  /// * [int] days:
  ///   Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
  Future<MonthlyCounts?> getAffiliateTrafficGraph({ int? days, }) async {
    final response = await getAffiliateTrafficGraphWithHttpInfo( days: days, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'MonthlyCounts',) as MonthlyCounts;
    
    }
    return null;
  }

  /// List Affiliate Web Traffic Entries
  ///
  /// Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getAffiliateWebTrafficWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/web_traffic';

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

  /// List Affiliate Web Traffic Entries
  ///
  /// Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
  Future<List<AffiliateTrafficRow>?> getAffiliateWebTraffic() async {
    final response = await getAffiliateWebTrafficWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<AffiliateTrafficRow>') as List)
        .cast<AffiliateTrafficRow>()
        .toList(growable: false);

    }
    return null;
  }

  /// Get Shopping Cart Contents
  ///
  /// Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getBillingCartWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/billing/cart';

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

  /// Get Shopping Cart Contents
  ///
  /// Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
  Future<Object?> getBillingCart() async {
    final response = await getBillingCartWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Object',) as Object;
    
    }
    return null;
  }

  /// Get Credit Card Verification Requirements
  ///
  /// Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
  Future<Response> getBillingCreditCardVerifyWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/creditcards/{id}/verify'
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

  /// Get Credit Card Verification Requirements
  ///
  /// Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
  Future<SuccessTextResponse?> getBillingCreditCardVerify(int id,) async {
    final response = await getBillingCreditCardVerifyWithHttpInfo(id,);
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

  /// Get Invoice Details
  ///
  /// Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.
  Future<Response> getBillingInvoiceWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/invoices/{id}'
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

  /// Get Invoice Details
  ///
  /// Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.
  Future<BillingInvoiceDetail?> getBillingInvoice(int id,) async {
    final response = await getBillingInvoiceWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BillingInvoiceDetail',) as BillingInvoiceDetail;
    
    }
    return null;
  }

  /// List Account Invoices
  ///
  /// Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getBillingInvoicesWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/billing/invoices';

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

  /// List Account Invoices
  ///
  /// Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
  Future<BillingInvoiceList?> getBillingInvoices() async {
    final response = await getBillingInvoicesWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'BillingInvoiceList',) as BillingInvoiceList;
    
    }
    return null;
  }

  /// List Prepay Balances
  ///
  /// Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
  ///
  /// Note: This method returns the HTTP [Response].
  Future<Response> getBillingPrePaysWithHttpInfo() async {
    // ignore: prefer_const_declarations
    final path = r'/billing/prepays';

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

  /// List Prepay Balances
  ///
  /// Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
  Future<Object?> getBillingPrePays() async {
    final response = await getBillingPrePaysWithHttpInfo();
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'Object',) as Object;
    
    }
    return null;
  }

  /// Get Invoices
  ///
  /// Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] searchString:
  ///   pass an optional search string for looking up inventory
  ///
  /// * [int] skip:
  ///   number of records to skip for pagination
  ///
  /// * [int] limit:
  ///   maximum number of records to return
  Future<Response> getInvoicesWithHttpInfo({ String? searchString, int? skip, int? limit, }) async {
    // ignore: prefer_const_declarations
    final path = r'/invoices';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    if (searchString != null) {
      queryParams.addAll(_queryParams('', 'searchString', searchString));
    }
    if (skip != null) {
      queryParams.addAll(_queryParams('', 'skip', skip));
    }
    if (limit != null) {
      queryParams.addAll(_queryParams('', 'limit', limit));
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

  /// Get Invoices
  ///
  /// Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
  ///
  /// Parameters:
  ///
  /// * [String] searchString:
  ///   pass an optional search string for looking up inventory
  ///
  /// * [int] skip:
  ///   number of records to skip for pagination
  ///
  /// * [int] limit:
  ///   maximum number of records to return
  Future<List<Invoice>?> getInvoices({ String? searchString, int? skip, int? limit, }) async {
    final response = await getInvoicesWithHttpInfo( searchString: searchString, skip: skip, limit: limit, );
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      final responseBody = await _decodeBodyBytes(response);
      return (await apiClient.deserializeAsync(responseBody, 'List<Invoice>') as List)
        .cast<Invoice>()
        .toList(growable: false);

    }
    return null;
  }

  /// Initiate Payment
  ///
  /// Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] method (required):
  ///   The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
  ///
  /// * [String] invoices (required):
  ///   A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.
  Future<Response> initiatePaymentWithHttpInfo(String method, String invoices,) async {
    // ignore: prefer_const_declarations
    final path = r'/pay/{method}/{invoices}'
      .replaceAll('{method}', method)
      .replaceAll('{invoices}', invoices);

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

  /// Initiate Payment
  ///
  /// Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
  ///
  /// Parameters:
  ///
  /// * [String] method (required):
  ///   The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
  ///
  /// * [String] invoices (required):
  ///   A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.
  Future<InitiatePayment200Response?> initiatePayment(String method, String invoices,) async {
    final response = await initiatePaymentWithHttpInfo(method, invoices,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'InitiatePayment200Response',) as InitiatePayment200Response;
    
    }
    return null;
  }

  /// Submit Credit Card Verification
  ///
  /// Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
  ///
  /// * [BillingVerifyCcRequest] billingVerifyCcRequest (required):
  Future<Response> postBillingCreditCardVerifyWithHttpInfo(int id, BillingVerifyCcRequest billingVerifyCcRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/creditcards/{id}/verify'
      .replaceAll('{id}', id.toString());

    // ignore: prefer_final_locals
    Object? postBody = billingVerifyCcRequest;

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

  /// Submit Credit Card Verification
  ///
  /// Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
  ///
  /// * [BillingVerifyCcRequest] billingVerifyCcRequest (required):
  Future<SuccessTextResponse?> postBillingCreditCardVerify(int id, BillingVerifyCcRequest billingVerifyCcRequest,) async {
    final response = await postBillingCreditCardVerifyWithHttpInfo(id, billingVerifyCcRequest,);
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

  /// Update Credit Card
  ///
  /// Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
  Future<Response> updateAccountCreditCardWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/account/creditcards/{id}'
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

  /// Update Credit Card
  ///
  /// Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
  Future<String?> updateAccountCreditCard(int id,) async {
    final response = await updateAccountCreditCardWithHttpInfo(id,);
    if (response.statusCode >= HttpStatus.badRequest) {
      throw ApiException(response.statusCode, await _decodeBodyBytes(response));
    }
    // When a remote server returns no body with a status of 204, we shall not decode it.
    // At the time of writing this, `dart:convert` will throw an "Unexpected end of input"
    // FormatException when trying to decode an empty string.
    if (response.body.isNotEmpty && response.statusCode != HttpStatus.noContent) {
      return await apiClient.deserializeAsync(await _decodeBodyBytes(response), 'String',) as String;
    
    }
    return null;
  }

  /// Configure Affiliate Dock Settings
  ///
  /// Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] affiliateDockTitle:
  ///
  /// * [String] affiliateDockDescription:
  ///
  /// * [String] referrerCoupon:
  Future<Response> updateAffiliateDockSetupWithHttpInfo({ String? affiliateDockTitle, String? affiliateDockDescription, String? referrerCoupon, }) async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/dock_setup';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (affiliateDockTitle != null) {
      hasFields = true;
      mp.fields[r'affiliate_dock_title'] = parameterToString(affiliateDockTitle);
    }
    if (affiliateDockDescription != null) {
      hasFields = true;
      mp.fields[r'affiliate_dock_description'] = parameterToString(affiliateDockDescription);
    }
    if (referrerCoupon != null) {
      hasFields = true;
      mp.fields[r'referrer_coupon'] = parameterToString(referrerCoupon);
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

  /// Configure Affiliate Dock Settings
  ///
  /// Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
  ///
  /// Parameters:
  ///
  /// * [String] affiliateDockTitle:
  ///
  /// * [String] affiliateDockDescription:
  ///
  /// * [String] referrerCoupon:
  Future<TextResponse?> updateAffiliateDockSetup({ String? affiliateDockTitle, String? affiliateDockDescription, String? referrerCoupon, }) async {
    final response = await updateAffiliateDockSetupWithHttpInfo( affiliateDockTitle: affiliateDockTitle, affiliateDockDescription: affiliateDockDescription, referrerCoupon: referrerCoupon, );
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

  /// Configure Affiliate Landing Page
  ///
  /// Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] affiliateDockTitle:
  ///
  /// * [String] affiliateDockDescription:
  ///
  /// * [String] referrerCoupon:
  Future<Response> updateAffiliateLandingPageWithHttpInfo({ String? affiliateDockTitle, String? affiliateDockDescription, String? referrerCoupon, }) async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/landing_pg';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (affiliateDockTitle != null) {
      hasFields = true;
      mp.fields[r'affiliate_dock_title'] = parameterToString(affiliateDockTitle);
    }
    if (affiliateDockDescription != null) {
      hasFields = true;
      mp.fields[r'affiliate_dock_description'] = parameterToString(affiliateDockDescription);
    }
    if (referrerCoupon != null) {
      hasFields = true;
      mp.fields[r'referrer_coupon'] = parameterToString(referrerCoupon);
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

  /// Configure Affiliate Landing Page
  ///
  /// Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
  ///
  /// Parameters:
  ///
  /// * [String] affiliateDockTitle:
  ///
  /// * [String] affiliateDockDescription:
  ///
  /// * [String] referrerCoupon:
  Future<TextResponse?> updateAffiliateLandingPage({ String? affiliateDockTitle, String? affiliateDockDescription, String? referrerCoupon, }) async {
    final response = await updateAffiliateLandingPageWithHttpInfo( affiliateDockTitle: affiliateDockTitle, affiliateDockDescription: affiliateDockDescription, referrerCoupon: referrerCoupon, );
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

  /// Configure Affiliate Payout Preferences
  ///
  /// Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [String] affiliatePaypal:
  ///
  /// * [String] affiliatePaymentMethod:
  Future<Response> updateAffiliatePaymentSetupWithHttpInfo({ String? affiliatePaypal, String? affiliatePaymentMethod, }) async {
    // ignore: prefer_const_declarations
    final path = r'/affiliate/payment_setup';

    // ignore: prefer_final_locals
    Object? postBody;

    final queryParams = <QueryParam>[];
    final headerParams = <String, String>{};
    final formParams = <String, String>{};

    const contentTypes = <String>['multipart/form-data', 'application/json'];

    bool hasFields = false;
    final mp = MultipartRequest('POST', Uri.parse(path));
    if (affiliatePaypal != null) {
      hasFields = true;
      mp.fields[r'affiliate_paypal'] = parameterToString(affiliatePaypal);
    }
    if (affiliatePaymentMethod != null) {
      hasFields = true;
      mp.fields[r'affiliate_payment_method'] = parameterToString(affiliatePaymentMethod);
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

  /// Configure Affiliate Payout Preferences
  ///
  /// Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
  ///
  /// Parameters:
  ///
  /// * [String] affiliatePaypal:
  ///
  /// * [String] affiliatePaymentMethod:
  Future<TextResponse?> updateAffiliatePaymentSetup({ String? affiliatePaypal, String? affiliatePaymentMethod, }) async {
    final response = await updateAffiliatePaymentSetupWithHttpInfo( affiliatePaypal: affiliatePaypal, affiliatePaymentMethod: affiliatePaymentMethod, );
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

  /// Update Credit Card Details
  ///
  /// Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.
  Future<Response> updateBillingCreditCardWithHttpInfo(int id,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/creditcards/{id}'
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

  /// Update Credit Card Details
  ///
  /// Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
  ///
  /// Parameters:
  ///
  /// * [int] id (required):
  ///   The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.
  Future<SuccessTextResponse?> updateBillingCreditCard(int id,) async {
    final response = await updateBillingCreditCardWithHttpInfo(id,);
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

  /// Update Default Payment Method
  ///
  /// Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
  ///
  /// Note: This method returns the HTTP [Response].
  ///
  /// Parameters:
  ///
  /// * [BillingPaymentMethodRequest] billingPaymentMethodRequest (required):
  Future<Response> updateBillingPaymentMethodWithHttpInfo(BillingPaymentMethodRequest billingPaymentMethodRequest,) async {
    // ignore: prefer_const_declarations
    final path = r'/billing/payment_method';

    // ignore: prefer_final_locals
    Object? postBody = billingPaymentMethodRequest;

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

  /// Update Default Payment Method
  ///
  /// Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
  ///
  /// Parameters:
  ///
  /// * [BillingPaymentMethodRequest] billingPaymentMethodRequest (required):
  Future<SuccessTextResponse?> updateBillingPaymentMethod(BillingPaymentMethodRequest billingPaymentMethodRequest,) async {
    final response = await updateBillingPaymentMethodWithHttpInfo(billingPaymentMethodRequest,);
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
