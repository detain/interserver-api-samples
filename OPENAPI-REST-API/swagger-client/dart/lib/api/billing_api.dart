part of swagger.api;



class BillingApi {
  final ApiClient apiClient;

  BillingApi([ApiClient apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// Add Credit Card to Account
  ///
  /// Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
  Future<SuccessTextResponse> addAccountCreditCard(String name, String address, String city, String state, String country, String zip, String cc, String ccExp, String ccCcv2) async {
    Object postBody = body;

    // verify required params are set
    if(name == null) {
     throw new ApiException(400, "Missing required param: name");
    }
    if(address == null) {
     throw new ApiException(400, "Missing required param: address");
    }
    if(city == null) {
     throw new ApiException(400, "Missing required param: city");
    }
    if(state == null) {
     throw new ApiException(400, "Missing required param: state");
    }
    if(country == null) {
     throw new ApiException(400, "Missing required param: country");
    }
    if(zip == null) {
     throw new ApiException(400, "Missing required param: zip");
    }
    if(cc == null) {
     throw new ApiException(400, "Missing required param: cc");
    }
    if(ccExp == null) {
     throw new ApiException(400, "Missing required param: ccExp");
    }
    if(ccCcv2 == null) {
     throw new ApiException(400, "Missing required param: ccCcv2");
    }

    // create path and map variables
    String path = "/account/creditcards".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["multipart/form-data","application/json"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (name != null) {
        hasFields = true;
        mp.fields['name'] = parameterToString(name);
      }
      if (address != null) {
        hasFields = true;
        mp.fields['address'] = parameterToString(address);
      }
      if (city != null) {
        hasFields = true;
        mp.fields['city'] = parameterToString(city);
      }
      if (state != null) {
        hasFields = true;
        mp.fields['state'] = parameterToString(state);
      }
      if (country != null) {
        hasFields = true;
        mp.fields['country'] = parameterToString(country);
      }
      if (zip != null) {
        hasFields = true;
        mp.fields['zip'] = parameterToString(zip);
      }
      if (cc != null) {
        hasFields = true;
        mp.fields['cc'] = parameterToString(cc);
      }
      if (ccExp != null) {
        hasFields = true;
        mp.fields['cc_exp'] = parameterToString(ccExp);
      }
      if (ccCcv2 != null) {
        hasFields = true;
        mp.fields['cc_ccv2'] = parameterToString(ccCcv2);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (name != null)
        formParams['name'] = parameterToString(name);
if (address != null)
        formParams['address'] = parameterToString(address);
if (city != null)
        formParams['city'] = parameterToString(city);
if (state != null)
        formParams['state'] = parameterToString(state);
if (country != null)
        formParams['country'] = parameterToString(country);
if (zip != null)
        formParams['zip'] = parameterToString(zip);
if (cc != null)
        formParams['cc'] = parameterToString(cc);
if (ccExp != null)
        formParams['cc_exp'] = parameterToString(ccExp);
if (ccCcv2 != null)
        formParams['cc_ccv2'] = parameterToString(ccCcv2);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Add Credit Card for Billing
  ///
  /// Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
  Future<SuccessTextResponse> addBillingCreditCard(BillingAddCcRequest body) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }

    // create path and map variables
    String path = "/billing/creditcards".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (name != null) {
        hasFields = true;
        mp.fields['name'] = parameterToString(name);
      }
      if (address != null) {
        hasFields = true;
        mp.fields['address'] = parameterToString(address);
      }
      if (city != null) {
        hasFields = true;
        mp.fields['city'] = parameterToString(city);
      }
      if (state != null) {
        hasFields = true;
        mp.fields['state'] = parameterToString(state);
      }
      if (country != null) {
        hasFields = true;
        mp.fields['country'] = parameterToString(country);
      }
      if (zip != null) {
        hasFields = true;
        mp.fields['zip'] = parameterToString(zip);
      }
      if (cc != null) {
        hasFields = true;
        mp.fields['cc'] = parameterToString(cc);
      }
      if (ccExp != null) {
        hasFields = true;
        mp.fields['cc_exp'] = parameterToString(ccExp);
      }
      if (ccCcv2 != null) {
        hasFields = true;
        mp.fields['cc_ccv2'] = parameterToString(ccCcv2);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (name != null)
        formParams['name'] = parameterToString(name);
if (address != null)
        formParams['address'] = parameterToString(address);
if (city != null)
        formParams['city'] = parameterToString(city);
if (state != null)
        formParams['state'] = parameterToString(state);
if (country != null)
        formParams['country'] = parameterToString(country);
if (zip != null)
        formParams['zip'] = parameterToString(zip);
if (cc != null)
        formParams['cc'] = parameterToString(cc);
if (ccExp != null)
        formParams['cc_exp'] = parameterToString(ccExp);
if (ccCcv2 != null)
        formParams['cc_ccv2'] = parameterToString(ccCcv2);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Create Prepay Deposit
  ///
  /// Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
  Future<SuccessTextResponse> addBillingPrepay(BillingPrepayRequest body) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }

    // create path and map variables
    String path = "/billing/prepays".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (module != null) {
        hasFields = true;
        mp.fields['module'] = parameterToString(module);
      }
      if (amount != null) {
        hasFields = true;
        mp.fields['amount'] = parameterToString(amount);
      }
      if (automaticUse != null) {
        hasFields = true;
        mp.fields['automatic_use'] = parameterToString(automaticUse);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (module != null)
        formParams['module'] = parameterToString(module);
if (amount != null)
        formParams['amount'] = parameterToString(amount);
if (automaticUse != null)
        formParams['automatic_use'] = parameterToString(automaticUse);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Remove Credit Card
  ///
  /// Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.
  Future<String> deleteAccountCreditCard(String id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/account/creditcards/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'String') as String ;
    } else {
      return null;
    }
  }
  /// Delete Credit Card
  ///
  /// Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.
  Future<SuccessTextResponse> deleteBillingCreditCard(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/billing/creditcards/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Delete Invoice
  ///
  /// Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
  Future<SuccessTextResponse> deleteBillingInvoice(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/billing/invoices/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Delete Prepay Balance
  ///
  /// Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.
  Future<SuccessTextResponse> deleteBillingPrepay(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/billing/prepays/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'DELETE',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// List Affiliate Banner Assets
  ///
  /// Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
  Future<List<AffiliateBannerRow>> getAffiliateBanners() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/affiliate/banners".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
        (apiClient.deserialize(response.body, 'List<AffiliateBannerRow>') as List).map((item) => item as AffiliateBannerRow).toList();
    } else {
      return null;
    }
  }
  /// Get Affiliate Performance Report
  ///
  /// Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
  Future<TextResponse> getAffiliateRichReport() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/affiliate/rich_report".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Get Affiliate Sales Graph Data
  ///
  /// Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
  Future<StatusMonthlyBreakdown> getAffiliateSalesGraph({ int days }) async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/affiliate/sales_graph".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if(days != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "days", days));
    }
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'StatusMonthlyBreakdown') as StatusMonthlyBreakdown ;
    } else {
      return null;
    }
  }
  /// Get Affiliate Sales Report
  ///
  /// Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
  Future<TextResponse> getAffiliateSalesReport() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/affiliate/sales_report".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Get Affiliate Traffic Graph Data
  ///
  /// Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
  Future<MonthlyCounts> getAffiliateTrafficGraph({ int days }) async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/affiliate/traffic_graph".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if(days != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "days", days));
    }
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'MonthlyCounts') as MonthlyCounts ;
    } else {
      return null;
    }
  }
  /// List Affiliate Web Traffic Entries
  ///
  /// Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
  Future<List<AffiliateTrafficRow>> getAffiliateWebTraffic() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/affiliate/web_traffic".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
        (apiClient.deserialize(response.body, 'List<AffiliateTrafficRow>') as List).map((item) => item as AffiliateTrafficRow).toList();
    } else {
      return null;
    }
  }
  /// Get Shopping Cart Contents
  ///
  /// Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.
  Future<Object> getBillingCart() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/billing/cart".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'Object') as Object ;
    } else {
      return null;
    }
  }
  /// Get Credit Card Verification Requirements
  ///
  /// Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
  Future<SuccessTextResponse> getBillingCreditCardVerify(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/billing/creditcards/{id}/verify".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Get Invoice Details
  ///
  /// Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.
  Future<BillingInvoiceDetail> getBillingInvoice(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/billing/invoices/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'BillingInvoiceDetail') as BillingInvoiceDetail ;
    } else {
      return null;
    }
  }
  /// List Account Invoices
  ///
  /// Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.
  Future<BillingInvoiceList> getBillingInvoices() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/billing/invoices".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'BillingInvoiceList') as BillingInvoiceList ;
    } else {
      return null;
    }
  }
  /// List Prepay Balances
  ///
  /// Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.
  Future<Object> getBillingPrePays() async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/billing/prepays".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'Object') as Object ;
    } else {
      return null;
    }
  }
  /// Get Invoices
  ///
  /// Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.
  Future<List<Invoice>> getInvoices({ String searchString, int skip, int limit }) async {
    Object postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/invoices".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    if(searchString != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "searchString", searchString));
    }
    if(skip != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "skip", skip));
    }
    if(limit != null) {
      queryParams.addAll(_convertParametersForCollectionFormat("", "limit", limit));
    }
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
        (apiClient.deserialize(response.body, 'List<Invoice>') as List).map((item) => item as Invoice).toList();
    } else {
      return null;
    }
  }
  /// Initiate Payment
  ///
  /// Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.
  Future<InlineResponse2009> initiatePayment(String method, String invoices) async {
    Object postBody = null;

    // verify required params are set
    if(method == null) {
     throw new ApiException(400, "Missing required param: method");
    }
    if(invoices == null) {
     throw new ApiException(400, "Missing required param: invoices");
    }

    // create path and map variables
    String path = "/pay/{method}/{invoices}".replaceAll("{format}","json").replaceAll("{" + "method" + "}", method.toString()).replaceAll("{" + "invoices" + "}", invoices.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'InlineResponse2009') as InlineResponse2009 ;
    } else {
      return null;
    }
  }
  /// Submit Credit Card Verification
  ///
  /// Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
  Future<SuccessTextResponse> postBillingCreditCardVerify(BillingVerifyCcRequest body, int id) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/billing/creditcards/{id}/verify".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (idx != null) {
        hasFields = true;
        mp.fields['idx'] = parameterToString(idx);
      }
      if (ccCcv2 != null) {
        hasFields = true;
        mp.fields['cc_ccv2'] = parameterToString(ccCcv2);
      }
      if (ccAmount1 != null) {
        hasFields = true;
        mp.fields['cc_amount1'] = parameterToString(ccAmount1);
      }
      if (ccAmount2 != null) {
        hasFields = true;
        mp.fields['cc_amount2'] = parameterToString(ccAmount2);
      }
      if (terms != null) {
        hasFields = true;
        mp.fields['terms'] = parameterToString(terms);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (idx != null)
        formParams['idx'] = parameterToString(idx);
if (ccCcv2 != null)
        formParams['cc_ccv2'] = parameterToString(ccCcv2);
if (ccAmount1 != null)
        formParams['cc_amount1'] = parameterToString(ccAmount1);
if (ccAmount2 != null)
        formParams['cc_amount2'] = parameterToString(ccAmount2);
if (terms != null)
        formParams['terms'] = parameterToString(terms);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Update Credit Card
  ///
  /// Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
  Future<String> updateAccountCreditCard(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/account/creditcards/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'String') as String ;
    } else {
      return null;
    }
  }
  /// Configure Affiliate Dock Settings
  ///
  /// Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
  Future<TextResponse> updateAffiliateDockSetup(String affiliateDockTitle, String affiliateDockDescription, String referrerCoupon) async {
    Object postBody = body;

    // verify required params are set
    if(affiliateDockTitle == null) {
     throw new ApiException(400, "Missing required param: affiliateDockTitle");
    }
    if(affiliateDockDescription == null) {
     throw new ApiException(400, "Missing required param: affiliateDockDescription");
    }
    if(referrerCoupon == null) {
     throw new ApiException(400, "Missing required param: referrerCoupon");
    }

    // create path and map variables
    String path = "/affiliate/dock_setup".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["multipart/form-data","application/json"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (affiliateDockTitle != null) {
        hasFields = true;
        mp.fields['affiliate_dock_title'] = parameterToString(affiliateDockTitle);
      }
      if (affiliateDockDescription != null) {
        hasFields = true;
        mp.fields['affiliate_dock_description'] = parameterToString(affiliateDockDescription);
      }
      if (referrerCoupon != null) {
        hasFields = true;
        mp.fields['referrer_coupon'] = parameterToString(referrerCoupon);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (affiliateDockTitle != null)
        formParams['affiliate_dock_title'] = parameterToString(affiliateDockTitle);
if (affiliateDockDescription != null)
        formParams['affiliate_dock_description'] = parameterToString(affiliateDockDescription);
if (referrerCoupon != null)
        formParams['referrer_coupon'] = parameterToString(referrerCoupon);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Configure Affiliate Landing Page
  ///
  /// Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
  Future<TextResponse> updateAffiliateLandingPage(String affiliateDockTitle, String affiliateDockDescription, String referrerCoupon) async {
    Object postBody = body;

    // verify required params are set
    if(affiliateDockTitle == null) {
     throw new ApiException(400, "Missing required param: affiliateDockTitle");
    }
    if(affiliateDockDescription == null) {
     throw new ApiException(400, "Missing required param: affiliateDockDescription");
    }
    if(referrerCoupon == null) {
     throw new ApiException(400, "Missing required param: referrerCoupon");
    }

    // create path and map variables
    String path = "/affiliate/landing_pg".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["multipart/form-data","application/json"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (affiliateDockTitle != null) {
        hasFields = true;
        mp.fields['affiliate_dock_title'] = parameterToString(affiliateDockTitle);
      }
      if (affiliateDockDescription != null) {
        hasFields = true;
        mp.fields['affiliate_dock_description'] = parameterToString(affiliateDockDescription);
      }
      if (referrerCoupon != null) {
        hasFields = true;
        mp.fields['referrer_coupon'] = parameterToString(referrerCoupon);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (affiliateDockTitle != null)
        formParams['affiliate_dock_title'] = parameterToString(affiliateDockTitle);
if (affiliateDockDescription != null)
        formParams['affiliate_dock_description'] = parameterToString(affiliateDockDescription);
if (referrerCoupon != null)
        formParams['referrer_coupon'] = parameterToString(referrerCoupon);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Configure Affiliate Payout Preferences
  ///
  /// Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
  Future<TextResponse> updateAffiliatePaymentSetup(String affiliatePaypal, String affiliatePaymentMethod) async {
    Object postBody = body;

    // verify required params are set
    if(affiliatePaypal == null) {
     throw new ApiException(400, "Missing required param: affiliatePaypal");
    }
    if(affiliatePaymentMethod == null) {
     throw new ApiException(400, "Missing required param: affiliatePaymentMethod");
    }

    // create path and map variables
    String path = "/affiliate/payment_setup".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["multipart/form-data","application/json"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (affiliatePaypal != null) {
        hasFields = true;
        mp.fields['affiliate_paypal'] = parameterToString(affiliatePaypal);
      }
      if (affiliatePaymentMethod != null) {
        hasFields = true;
        mp.fields['affiliate_payment_method'] = parameterToString(affiliatePaymentMethod);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (affiliatePaypal != null)
        formParams['affiliate_paypal'] = parameterToString(affiliatePaypal);
if (affiliatePaymentMethod != null)
        formParams['affiliate_payment_method'] = parameterToString(affiliatePaymentMethod);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'TextResponse') as TextResponse ;
    } else {
      return null;
    }
  }
  /// Update Credit Card Details
  ///
  /// Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
  Future<SuccessTextResponse> updateBillingCreditCard(int id) async {
    Object postBody = null;

    // verify required params are set
    if(id == null) {
     throw new ApiException(400, "Missing required param: id");
    }

    // create path and map variables
    String path = "/billing/creditcards/{id}".replaceAll("{format}","json").replaceAll("{" + "id" + "}", id.toString());

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if(hasFields)
        postBody = mp;
    }
    else {
          }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
  /// Update Default Payment Method
  ///
  /// Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
  Future<SuccessTextResponse> updateBillingPaymentMethod(BillingPaymentMethodRequest body) async {
    Object postBody = body;

    // verify required params are set
    if(body == null) {
     throw new ApiException(400, "Missing required param: body");
    }

    // create path and map variables
    String path = "/billing/payment_method".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};
    
    List<String> contentTypes = ["application/json","multipart/form-data"];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
      MultipartRequest mp = new MultipartRequest(null, null);
      if (paymentMethod != null) {
        hasFields = true;
        mp.fields['payment_method'] = parameterToString(paymentMethod);
      }
      if (ccAuto != null) {
        hasFields = true;
        mp.fields['cc_auto'] = parameterToString(ccAuto);
      }
      if(hasFields)
        postBody = mp;
    }
    else {
      if (paymentMethod != null)
        formParams['payment_method'] = parameterToString(paymentMethod);
if (ccAuto != null)
        formParams['cc_auto'] = parameterToString(ccAuto);
    }

    var response = await apiClient.invokeAPI(path,
                                             'POST',
                                             queryParams,
                                             postBody,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return
          apiClient.deserialize(response.body, 'SuccessTextResponse') as SuccessTextResponse ;
    } else {
      return null;
    }
  }
}
