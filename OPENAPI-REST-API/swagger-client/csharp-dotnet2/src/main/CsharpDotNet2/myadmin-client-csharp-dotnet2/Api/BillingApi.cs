using System;
using System.Collections.Generic;
using RestSharp;
using IO.Swagger.Client;
using IO.Swagger.Model;

namespace IO.Swagger.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface IBillingApi
    {
        /// <summary>
        /// Add Credit Card to Account Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="address"></param>
        /// <param name="city"></param>
        /// <param name="state"></param>
        /// <param name="country"></param>
        /// <param name="zip"></param>
        /// <param name="cc"></param>
        /// <param name="ccExp"></param>
        /// <param name="ccCcv2"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddAccountCreditCard (string name, string address, string city, string state, string country, string zip, string cc, string ccExp, string ccCcv2);
        /// <summary>
        /// Add Credit Card to Account Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddAccountCreditCard (BillingAddCcRequest body);
        /// <summary>
        /// Add Credit Card for Billing Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddBillingCreditCard (BillingAddCcRequest body);
        /// <summary>
        /// Add Credit Card for Billing Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="address"></param>
        /// <param name="city"></param>
        /// <param name="state"></param>
        /// <param name="country"></param>
        /// <param name="zip"></param>
        /// <param name="cc"></param>
        /// <param name="ccExp"></param>
        /// <param name="ccCcv2"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddBillingCreditCard (string name, string address, string city, string state, string country, string zip, string cc, string ccExp, string ccCcv2);
        /// <summary>
        /// Create Prepay Deposit Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddBillingPrepay (BillingPrepayRequest body);
        /// <summary>
        /// Create Prepay Deposit Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
        /// </summary>
        /// <param name="module"></param>
        /// <param name="amount"></param>
        /// <param name="automaticUse"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse AddBillingPrepay (string module, decimal? amount, string automaticUse);
        /// <summary>
        /// Remove Credit Card Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.
        /// </summary>
        /// <param name="id">The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.</param>
        /// <returns></returns>
        void DeleteAccountCreditCard (string id);
        /// <summary>
        /// Delete Credit Card Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.
        /// </summary>
        /// <param name="id">The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteBillingCreditCard (int? id);
        /// <summary>
        /// Delete Invoice Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
        /// </summary>
        /// <param name="id">The invoice ID to delete. Only unpaid invoices can be deleted.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteBillingInvoice (int? id);
        /// <summary>
        /// Delete Prepay Balance Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.
        /// </summary>
        /// <param name="id">The prepay balance ID to delete.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse DeleteBillingPrepay (int? id);
        /// <summary>
        /// List Affiliate Banner Assets Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
        /// </summary>
        /// <returns>List&lt;AffiliateBannerRow&gt;</returns>
        List<AffiliateBannerRow> GetAffiliateBanners ();
        /// <summary>
        /// Get Affiliate Performance Report Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
        /// </summary>
        /// <returns>TextResponse</returns>
        TextResponse GetAffiliateRichReport ();
        /// <summary>
        /// Get Affiliate Sales Graph Data Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
        /// </summary>
        /// <param name="days">Number of days of sales history to include in the graph data. Determines the time window for the returned data points.</param>
        /// <returns>StatusMonthlyBreakdown</returns>
        StatusMonthlyBreakdown GetAffiliateSalesGraph (int? days);
        /// <summary>
        /// Get Affiliate Sales Report Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
        /// </summary>
        /// <returns>TextResponse</returns>
        TextResponse GetAffiliateSalesReport ();
        /// <summary>
        /// Get Affiliate Traffic Graph Data Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
        /// </summary>
        /// <param name="days">Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.</param>
        /// <returns>MonthlyCounts</returns>
        MonthlyCounts GetAffiliateTrafficGraph (int? days);
        /// <summary>
        /// List Affiliate Web Traffic Entries Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
        /// </summary>
        /// <returns>List&lt;AffiliateTrafficRow&gt;</returns>
        List<AffiliateTrafficRow> GetAffiliateWebTraffic ();
        /// <summary>
        /// Get Shopping Cart Contents Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.
        /// </summary>
        /// <returns></returns>
        void GetBillingCart ();
        /// <summary>
        /// Get Credit Card Verification Requirements Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
        /// </summary>
        /// <param name="id">The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse GetBillingCreditCardVerify (int? id);
        /// <summary>
        /// Get Invoice Details Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.
        /// </summary>
        /// <param name="id">The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.</param>
        /// <returns>BillingInvoiceDetail</returns>
        BillingInvoiceDetail GetBillingInvoice (int? id);
        /// <summary>
        /// List Account Invoices Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.
        /// </summary>
        /// <returns>BillingInvoiceList</returns>
        BillingInvoiceList GetBillingInvoices ();
        /// <summary>
        /// List Prepay Balances Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.
        /// </summary>
        /// <returns></returns>
        void GetBillingPrePays ();
        /// <summary>
        /// Get Invoices Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.
        /// </summary>
        /// <param name="searchString">pass an optional search string for looking up inventory</param>
        /// <param name="skip">number of records to skip for pagination</param>
        /// <param name="limit">maximum number of records to return</param>
        /// <returns>List&lt;Invoice&gt;</returns>
        List<Invoice> GetInvoices (string searchString, int? skip, int? limit);
        /// <summary>
        /// Initiate Payment Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.
        /// </summary>
        /// <param name="method">The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.</param>
        /// <param name="invoices">A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.</param>
        /// <returns>InlineResponse2009</returns>
        InlineResponse2009 InitiatePayment (string method, string invoices);
        /// <summary>
        /// Submit Credit Card Verification Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostBillingCreditCardVerify (BillingVerifyCcRequest body, int? id);
        /// <summary>
        /// Submit Credit Card Verification Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
        /// </summary>
        /// <param name="idx"></param>
        /// <param name="ccCcv2"></param>
        /// <param name="ccAmount1"></param>
        /// <param name="ccAmount2"></param>
        /// <param name="terms"></param>
        /// <param name="id">The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse PostBillingCreditCardVerify (int? idx, string ccCcv2, string ccAmount1, string ccAmount2, bool? terms, int? id);
        /// <summary>
        /// Update Credit Card Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
        /// </summary>
        /// <param name="id">The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.</param>
        /// <returns></returns>
        void UpdateAccountCreditCard (int? id);
        /// <summary>
        /// Configure Affiliate Dock Settings Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
        /// </summary>
        /// <param name="affiliateDockTitle"></param>
        /// <param name="affiliateDockDescription"></param>
        /// <param name="referrerCoupon"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAffiliateDockSetup (string affiliateDockTitle, string affiliateDockDescription, string referrerCoupon);
        /// <summary>
        /// Configure Affiliate Dock Settings Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAffiliateDockSetup (AffiliateDockSetup body);
        /// <summary>
        /// Configure Affiliate Landing Page Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
        /// </summary>
        /// <param name="affiliateDockTitle"></param>
        /// <param name="affiliateDockDescription"></param>
        /// <param name="referrerCoupon"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAffiliateLandingPage (string affiliateDockTitle, string affiliateDockDescription, string referrerCoupon);
        /// <summary>
        /// Configure Affiliate Landing Page Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAffiliateLandingPage (AffiliateDockSetup body);
        /// <summary>
        /// Configure Affiliate Payout Preferences Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
        /// </summary>
        /// <param name="affiliatePaypal"></param>
        /// <param name="affiliatePaymentMethod"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAffiliatePaymentSetup (string affiliatePaypal, string affiliatePaymentMethod);
        /// <summary>
        /// Configure Affiliate Payout Preferences Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        TextResponse UpdateAffiliatePaymentSetup (AffiliatePaymentSetup body);
        /// <summary>
        /// Update Credit Card Details Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
        /// </summary>
        /// <param name="id">The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateBillingCreditCard (int? id);
        /// <summary>
        /// Update Default Payment Method Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateBillingPaymentMethod (BillingPaymentMethodRequest body);
        /// <summary>
        /// Update Default Payment Method Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
        /// </summary>
        /// <param name="paymentMethod"></param>
        /// <param name="ccAuto"></param>
        /// <returns>SuccessTextResponse</returns>
        SuccessTextResponse UpdateBillingPaymentMethod (string paymentMethod, string ccAuto);
    }
  
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class BillingApi : IBillingApi
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BillingApi"/> class.
        /// </summary>
        /// <param name="apiClient"> an instance of ApiClient (optional)</param>
        /// <returns></returns>
        public BillingApi(ApiClient apiClient = null)
        {
            if (apiClient == null) // use the default one in Configuration
                this.ApiClient = Configuration.DefaultApiClient; 
            else
                this.ApiClient = apiClient;
        }
    
        /// <summary>
        /// Initializes a new instance of the <see cref="BillingApi"/> class.
        /// </summary>
        /// <returns></returns>
        public BillingApi(String basePath)
        {
            this.ApiClient = new ApiClient(basePath);
        }
    
        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <param name="basePath">The base path</param>
        /// <value>The base path</value>
        public void SetBasePath(String basePath)
        {
            this.ApiClient.BasePath = basePath;
        }
    
        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <param name="basePath">The base path</param>
        /// <value>The base path</value>
        public String GetBasePath(String basePath)
        {
            return this.ApiClient.BasePath;
        }
    
        /// <summary>
        /// Gets or sets the API client.
        /// </summary>
        /// <value>An instance of the ApiClient</value>
        public ApiClient ApiClient {get; set;}
    
        /// <summary>
        /// Add Credit Card to Account Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="address"></param>
        /// <param name="city"></param>
        /// <param name="state"></param>
        /// <param name="country"></param>
        /// <param name="zip"></param>
        /// <param name="cc"></param>
        /// <param name="ccExp"></param>
        /// <param name="ccCcv2"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddAccountCreditCard (string name, string address, string city, string state, string country, string zip, string cc, string ccExp, string ccCcv2)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling AddAccountCreditCard");
            // verify the required parameter 'address' is set
            if (address == null) throw new ApiException(400, "Missing required parameter 'address' when calling AddAccountCreditCard");
            // verify the required parameter 'city' is set
            if (city == null) throw new ApiException(400, "Missing required parameter 'city' when calling AddAccountCreditCard");
            // verify the required parameter 'state' is set
            if (state == null) throw new ApiException(400, "Missing required parameter 'state' when calling AddAccountCreditCard");
            // verify the required parameter 'country' is set
            if (country == null) throw new ApiException(400, "Missing required parameter 'country' when calling AddAccountCreditCard");
            // verify the required parameter 'zip' is set
            if (zip == null) throw new ApiException(400, "Missing required parameter 'zip' when calling AddAccountCreditCard");
            // verify the required parameter 'cc' is set
            if (cc == null) throw new ApiException(400, "Missing required parameter 'cc' when calling AddAccountCreditCard");
            // verify the required parameter 'ccExp' is set
            if (ccExp == null) throw new ApiException(400, "Missing required parameter 'ccExp' when calling AddAccountCreditCard");
            // verify the required parameter 'ccCcv2' is set
            if (ccCcv2 == null) throw new ApiException(400, "Missing required parameter 'ccCcv2' when calling AddAccountCreditCard");
    
            var path = "/account/creditcards";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (name != null) formParams.Add("name", ApiClient.ParameterToString(name)); // form parameter
if (address != null) formParams.Add("address", ApiClient.ParameterToString(address)); // form parameter
if (city != null) formParams.Add("city", ApiClient.ParameterToString(city)); // form parameter
if (state != null) formParams.Add("state", ApiClient.ParameterToString(state)); // form parameter
if (country != null) formParams.Add("country", ApiClient.ParameterToString(country)); // form parameter
if (zip != null) formParams.Add("zip", ApiClient.ParameterToString(zip)); // form parameter
if (cc != null) formParams.Add("cc", ApiClient.ParameterToString(cc)); // form parameter
if (ccExp != null) formParams.Add("cc_exp", ApiClient.ParameterToString(ccExp)); // form parameter
if (ccCcv2 != null) formParams.Add("cc_ccv2", ApiClient.ParameterToString(ccCcv2)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddAccountCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddAccountCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add Credit Card to Account Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddAccountCreditCard (BillingAddCcRequest body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddAccountCreditCard");
    
            var path = "/account/creditcards";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddAccountCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddAccountCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add Credit Card for Billing Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddBillingCreditCard (BillingAddCcRequest body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddBillingCreditCard");
    
            var path = "/billing/creditcards";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Add Credit Card for Billing Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
        /// </summary>
        /// <param name="name"></param>
        /// <param name="address"></param>
        /// <param name="city"></param>
        /// <param name="state"></param>
        /// <param name="country"></param>
        /// <param name="zip"></param>
        /// <param name="cc"></param>
        /// <param name="ccExp"></param>
        /// <param name="ccCcv2"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddBillingCreditCard (string name, string address, string city, string state, string country, string zip, string cc, string ccExp, string ccCcv2)
        {
            // verify the required parameter 'name' is set
            if (name == null) throw new ApiException(400, "Missing required parameter 'name' when calling AddBillingCreditCard");
            // verify the required parameter 'address' is set
            if (address == null) throw new ApiException(400, "Missing required parameter 'address' when calling AddBillingCreditCard");
            // verify the required parameter 'city' is set
            if (city == null) throw new ApiException(400, "Missing required parameter 'city' when calling AddBillingCreditCard");
            // verify the required parameter 'state' is set
            if (state == null) throw new ApiException(400, "Missing required parameter 'state' when calling AddBillingCreditCard");
            // verify the required parameter 'country' is set
            if (country == null) throw new ApiException(400, "Missing required parameter 'country' when calling AddBillingCreditCard");
            // verify the required parameter 'zip' is set
            if (zip == null) throw new ApiException(400, "Missing required parameter 'zip' when calling AddBillingCreditCard");
            // verify the required parameter 'cc' is set
            if (cc == null) throw new ApiException(400, "Missing required parameter 'cc' when calling AddBillingCreditCard");
            // verify the required parameter 'ccExp' is set
            if (ccExp == null) throw new ApiException(400, "Missing required parameter 'ccExp' when calling AddBillingCreditCard");
            // verify the required parameter 'ccCcv2' is set
            if (ccCcv2 == null) throw new ApiException(400, "Missing required parameter 'ccCcv2' when calling AddBillingCreditCard");
    
            var path = "/billing/creditcards";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (name != null) formParams.Add("name", ApiClient.ParameterToString(name)); // form parameter
if (address != null) formParams.Add("address", ApiClient.ParameterToString(address)); // form parameter
if (city != null) formParams.Add("city", ApiClient.ParameterToString(city)); // form parameter
if (state != null) formParams.Add("state", ApiClient.ParameterToString(state)); // form parameter
if (country != null) formParams.Add("country", ApiClient.ParameterToString(country)); // form parameter
if (zip != null) formParams.Add("zip", ApiClient.ParameterToString(zip)); // form parameter
if (cc != null) formParams.Add("cc", ApiClient.ParameterToString(cc)); // form parameter
if (ccExp != null) formParams.Add("cc_exp", ApiClient.ParameterToString(ccExp)); // form parameter
if (ccCcv2 != null) formParams.Add("cc_ccv2", ApiClient.ParameterToString(ccCcv2)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Create Prepay Deposit Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddBillingPrepay (BillingPrepayRequest body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling AddBillingPrepay");
    
            var path = "/billing/prepays";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingPrepay: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingPrepay: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Create Prepay Deposit Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
        /// </summary>
        /// <param name="module"></param>
        /// <param name="amount"></param>
        /// <param name="automaticUse"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse AddBillingPrepay (string module, decimal? amount, string automaticUse)
        {
            // verify the required parameter 'module' is set
            if (module == null) throw new ApiException(400, "Missing required parameter 'module' when calling AddBillingPrepay");
            // verify the required parameter 'amount' is set
            if (amount == null) throw new ApiException(400, "Missing required parameter 'amount' when calling AddBillingPrepay");
            // verify the required parameter 'automaticUse' is set
            if (automaticUse == null) throw new ApiException(400, "Missing required parameter 'automaticUse' when calling AddBillingPrepay");
    
            var path = "/billing/prepays";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (module != null) formParams.Add("module", ApiClient.ParameterToString(module)); // form parameter
if (amount != null) formParams.Add("amount", ApiClient.ParameterToString(amount)); // form parameter
if (automaticUse != null) formParams.Add("automatic_use", ApiClient.ParameterToString(automaticUse)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingPrepay: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling AddBillingPrepay: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Remove Credit Card Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.
        /// </summary>
        /// <param name="id">The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.</param>
        /// <returns></returns>
        public void DeleteAccountCreditCard (string id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteAccountCreditCard");
    
            var path = "/account/creditcards/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteAccountCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteAccountCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Delete Credit Card Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.
        /// </summary>
        /// <param name="id">The credit card ID to remove. Use IDs from &#x60;GET /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteBillingCreditCard (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteBillingCreditCard");
    
            var path = "/billing/creditcards/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteBillingCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteBillingCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete Invoice Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
        /// </summary>
        /// <param name="id">The invoice ID to delete. Only unpaid invoices can be deleted.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteBillingInvoice (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteBillingInvoice");
    
            var path = "/billing/invoices/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteBillingInvoice: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteBillingInvoice: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Delete Prepay Balance Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.
        /// </summary>
        /// <param name="id">The prepay balance ID to delete.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse DeleteBillingPrepay (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteBillingPrepay");
    
            var path = "/billing/prepays/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.DELETE, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteBillingPrepay: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling DeleteBillingPrepay: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// List Affiliate Banner Assets Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
        /// </summary>
        /// <returns>List&lt;AffiliateBannerRow&gt;</returns>
        public List<AffiliateBannerRow> GetAffiliateBanners ()
        {
    
            var path = "/affiliate/banners";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateBanners: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateBanners: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<AffiliateBannerRow>) ApiClient.Deserialize(response.Content, typeof(List<AffiliateBannerRow>), response.Headers);
        }
    
        /// <summary>
        /// Get Affiliate Performance Report Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
        /// </summary>
        /// <returns>TextResponse</returns>
        public TextResponse GetAffiliateRichReport ()
        {
    
            var path = "/affiliate/rich_report";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateRichReport: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateRichReport: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Affiliate Sales Graph Data Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
        /// </summary>
        /// <param name="days">Number of days of sales history to include in the graph data. Determines the time window for the returned data points.</param>
        /// <returns>StatusMonthlyBreakdown</returns>
        public StatusMonthlyBreakdown GetAffiliateSalesGraph (int? days)
        {
    
            var path = "/affiliate/sales_graph";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (days != null) queryParams.Add("days", ApiClient.ParameterToString(days)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateSalesGraph: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateSalesGraph: " + response.ErrorMessage, response.ErrorMessage);
    
            return (StatusMonthlyBreakdown) ApiClient.Deserialize(response.Content, typeof(StatusMonthlyBreakdown), response.Headers);
        }
    
        /// <summary>
        /// Get Affiliate Sales Report Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
        /// </summary>
        /// <returns>TextResponse</returns>
        public TextResponse GetAffiliateSalesReport ()
        {
    
            var path = "/affiliate/sales_report";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateSalesReport: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateSalesReport: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Affiliate Traffic Graph Data Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
        /// </summary>
        /// <param name="days">Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.</param>
        /// <returns>MonthlyCounts</returns>
        public MonthlyCounts GetAffiliateTrafficGraph (int? days)
        {
    
            var path = "/affiliate/traffic_graph";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (days != null) queryParams.Add("days", ApiClient.ParameterToString(days)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateTrafficGraph: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateTrafficGraph: " + response.ErrorMessage, response.ErrorMessage);
    
            return (MonthlyCounts) ApiClient.Deserialize(response.Content, typeof(MonthlyCounts), response.Headers);
        }
    
        /// <summary>
        /// List Affiliate Web Traffic Entries Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
        /// </summary>
        /// <returns>List&lt;AffiliateTrafficRow&gt;</returns>
        public List<AffiliateTrafficRow> GetAffiliateWebTraffic ()
        {
    
            var path = "/affiliate/web_traffic";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateWebTraffic: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetAffiliateWebTraffic: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<AffiliateTrafficRow>) ApiClient.Deserialize(response.Content, typeof(List<AffiliateTrafficRow>), response.Headers);
        }
    
        /// <summary>
        /// Get Shopping Cart Contents Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.
        /// </summary>
        /// <returns></returns>
        public void GetBillingCart ()
        {
    
            var path = "/billing/cart";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingCart: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingCart: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Credit Card Verification Requirements Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
        /// </summary>
        /// <param name="id">The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse GetBillingCreditCardVerify (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetBillingCreditCardVerify");
    
            var path = "/billing/creditcards/{id}/verify";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingCreditCardVerify: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingCreditCardVerify: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Get Invoice Details Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.
        /// </summary>
        /// <param name="id">The invoice ID. Use IDs from &#x60;GET /billing/invoices&#x60; or from order responses.</param>
        /// <returns>BillingInvoiceDetail</returns>
        public BillingInvoiceDetail GetBillingInvoice (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetBillingInvoice");
    
            var path = "/billing/invoices/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingInvoice: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingInvoice: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BillingInvoiceDetail) ApiClient.Deserialize(response.Content, typeof(BillingInvoiceDetail), response.Headers);
        }
    
        /// <summary>
        /// List Account Invoices Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.
        /// </summary>
        /// <returns>BillingInvoiceList</returns>
        public BillingInvoiceList GetBillingInvoices ()
        {
    
            var path = "/billing/invoices";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (BillingInvoiceList) ApiClient.Deserialize(response.Content, typeof(BillingInvoiceList), response.Headers);
        }
    
        /// <summary>
        /// List Prepay Balances Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.
        /// </summary>
        /// <returns></returns>
        public void GetBillingPrePays ()
        {
    
            var path = "/billing/prepays";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingPrePays: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetBillingPrePays: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Get Invoices Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.
        /// </summary>
        /// <param name="searchString">pass an optional search string for looking up inventory</param>
        /// <param name="skip">number of records to skip for pagination</param>
        /// <param name="limit">maximum number of records to return</param>
        /// <returns>List&lt;Invoice&gt;</returns>
        public List<Invoice> GetInvoices (string searchString, int? skip, int? limit)
        {
    
            var path = "/invoices";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
             if (searchString != null) queryParams.Add("searchString", ApiClient.ParameterToString(searchString)); // query parameter
 if (skip != null) queryParams.Add("skip", ApiClient.ParameterToString(skip)); // query parameter
 if (limit != null) queryParams.Add("limit", ApiClient.ParameterToString(limit)); // query parameter
                        
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling GetInvoices: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling GetInvoices: " + response.ErrorMessage, response.ErrorMessage);
    
            return (List<Invoice>) ApiClient.Deserialize(response.Content, typeof(List<Invoice>), response.Headers);
        }
    
        /// <summary>
        /// Initiate Payment Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.
        /// </summary>
        /// <param name="method">The payment method to use. Valid values: &#x60;cc&#x60; (credit card), &#x60;paypal&#x60;, &#x60;prepay&#x60;, &#x60;payssion&#x60;, &#x60;payu&#x60;, &#x60;ccavenue&#x60;, &#x60;cashfree&#x60;, &#x60;coinbase&#x60;, &#x60;btcpay&#x60;.</param>
        /// <param name="invoices">A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. &#x60;/backups/order&#x60;, &#x60;/vps/order&#x60;) and by &#x60;/billing/invoices&#x60;.</param>
        /// <returns>InlineResponse2009</returns>
        public InlineResponse2009 InitiatePayment (string method, string invoices)
        {
            // verify the required parameter 'method' is set
            if (method == null) throw new ApiException(400, "Missing required parameter 'method' when calling InitiatePayment");
            // verify the required parameter 'invoices' is set
            if (invoices == null) throw new ApiException(400, "Missing required parameter 'invoices' when calling InitiatePayment");
    
            var path = "/pay/{method}/{invoices}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "method" + "}", ApiClient.ParameterToString(method));
path = path.Replace("{" + "invoices" + "}", ApiClient.ParameterToString(invoices));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.GET, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling InitiatePayment: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling InitiatePayment: " + response.ErrorMessage, response.ErrorMessage);
    
            return (InlineResponse2009) ApiClient.Deserialize(response.Content, typeof(InlineResponse2009), response.Headers);
        }
    
        /// <summary>
        /// Submit Credit Card Verification Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
        /// </summary>
        /// <param name="body"></param>
        /// <param name="id">The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostBillingCreditCardVerify (BillingVerifyCcRequest body, int? id)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling PostBillingCreditCardVerify");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostBillingCreditCardVerify");
    
            var path = "/billing/creditcards/{id}/verify";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostBillingCreditCardVerify: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostBillingCreditCardVerify: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Submit Credit Card Verification Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
        /// </summary>
        /// <param name="idx"></param>
        /// <param name="ccCcv2"></param>
        /// <param name="ccAmount1"></param>
        /// <param name="ccAmount2"></param>
        /// <param name="terms"></param>
        /// <param name="id">The credit card ID to verify. Use the ID returned from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse PostBillingCreditCardVerify (int? idx, string ccCcv2, string ccAmount1, string ccAmount2, bool? terms, int? id)
        {
            // verify the required parameter 'idx' is set
            if (idx == null) throw new ApiException(400, "Missing required parameter 'idx' when calling PostBillingCreditCardVerify");
            // verify the required parameter 'ccCcv2' is set
            if (ccCcv2 == null) throw new ApiException(400, "Missing required parameter 'ccCcv2' when calling PostBillingCreditCardVerify");
            // verify the required parameter 'ccAmount1' is set
            if (ccAmount1 == null) throw new ApiException(400, "Missing required parameter 'ccAmount1' when calling PostBillingCreditCardVerify");
            // verify the required parameter 'ccAmount2' is set
            if (ccAmount2 == null) throw new ApiException(400, "Missing required parameter 'ccAmount2' when calling PostBillingCreditCardVerify");
            // verify the required parameter 'terms' is set
            if (terms == null) throw new ApiException(400, "Missing required parameter 'terms' when calling PostBillingCreditCardVerify");
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling PostBillingCreditCardVerify");
    
            var path = "/billing/creditcards/{id}/verify";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (idx != null) formParams.Add("idx", ApiClient.ParameterToString(idx)); // form parameter
if (ccCcv2 != null) formParams.Add("cc_ccv2", ApiClient.ParameterToString(ccCcv2)); // form parameter
if (ccAmount1 != null) formParams.Add("cc_amount1", ApiClient.ParameterToString(ccAmount1)); // form parameter
if (ccAmount2 != null) formParams.Add("cc_amount2", ApiClient.ParameterToString(ccAmount2)); // form parameter
if (terms != null) formParams.Add("terms", ApiClient.ParameterToString(terms)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling PostBillingCreditCardVerify: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling PostBillingCreditCardVerify: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Credit Card Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
        /// </summary>
        /// <param name="id">The credit card ID. Use the card ID returned from &#x60;POST /account/creditcards&#x60; or listed in &#x60;/billing/creditcards&#x60;.</param>
        /// <returns></returns>
        public void UpdateAccountCreditCard (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateAccountCreditCard");
    
            var path = "/account/creditcards/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAccountCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return;
        }
    
        /// <summary>
        /// Configure Affiliate Dock Settings Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
        /// </summary>
        /// <param name="affiliateDockTitle"></param>
        /// <param name="affiliateDockDescription"></param>
        /// <param name="referrerCoupon"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAffiliateDockSetup (string affiliateDockTitle, string affiliateDockDescription, string referrerCoupon)
        {
            // verify the required parameter 'affiliateDockTitle' is set
            if (affiliateDockTitle == null) throw new ApiException(400, "Missing required parameter 'affiliateDockTitle' when calling UpdateAffiliateDockSetup");
            // verify the required parameter 'affiliateDockDescription' is set
            if (affiliateDockDescription == null) throw new ApiException(400, "Missing required parameter 'affiliateDockDescription' when calling UpdateAffiliateDockSetup");
            // verify the required parameter 'referrerCoupon' is set
            if (referrerCoupon == null) throw new ApiException(400, "Missing required parameter 'referrerCoupon' when calling UpdateAffiliateDockSetup");
    
            var path = "/affiliate/dock_setup";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (affiliateDockTitle != null) formParams.Add("affiliate_dock_title", ApiClient.ParameterToString(affiliateDockTitle)); // form parameter
if (affiliateDockDescription != null) formParams.Add("affiliate_dock_description", ApiClient.ParameterToString(affiliateDockDescription)); // form parameter
if (referrerCoupon != null) formParams.Add("referrer_coupon", ApiClient.ParameterToString(referrerCoupon)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateDockSetup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateDockSetup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Configure Affiliate Dock Settings Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAffiliateDockSetup (AffiliateDockSetup body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAffiliateDockSetup");
    
            var path = "/affiliate/dock_setup";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateDockSetup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateDockSetup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Configure Affiliate Landing Page Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
        /// </summary>
        /// <param name="affiliateDockTitle"></param>
        /// <param name="affiliateDockDescription"></param>
        /// <param name="referrerCoupon"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAffiliateLandingPage (string affiliateDockTitle, string affiliateDockDescription, string referrerCoupon)
        {
            // verify the required parameter 'affiliateDockTitle' is set
            if (affiliateDockTitle == null) throw new ApiException(400, "Missing required parameter 'affiliateDockTitle' when calling UpdateAffiliateLandingPage");
            // verify the required parameter 'affiliateDockDescription' is set
            if (affiliateDockDescription == null) throw new ApiException(400, "Missing required parameter 'affiliateDockDescription' when calling UpdateAffiliateLandingPage");
            // verify the required parameter 'referrerCoupon' is set
            if (referrerCoupon == null) throw new ApiException(400, "Missing required parameter 'referrerCoupon' when calling UpdateAffiliateLandingPage");
    
            var path = "/affiliate/landing_pg";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (affiliateDockTitle != null) formParams.Add("affiliate_dock_title", ApiClient.ParameterToString(affiliateDockTitle)); // form parameter
if (affiliateDockDescription != null) formParams.Add("affiliate_dock_description", ApiClient.ParameterToString(affiliateDockDescription)); // form parameter
if (referrerCoupon != null) formParams.Add("referrer_coupon", ApiClient.ParameterToString(referrerCoupon)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateLandingPage: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateLandingPage: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Configure Affiliate Landing Page Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAffiliateLandingPage (AffiliateDockSetup body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAffiliateLandingPage");
    
            var path = "/affiliate/landing_pg";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateLandingPage: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliateLandingPage: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Configure Affiliate Payout Preferences Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
        /// </summary>
        /// <param name="affiliatePaypal"></param>
        /// <param name="affiliatePaymentMethod"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAffiliatePaymentSetup (string affiliatePaypal, string affiliatePaymentMethod)
        {
            // verify the required parameter 'affiliatePaypal' is set
            if (affiliatePaypal == null) throw new ApiException(400, "Missing required parameter 'affiliatePaypal' when calling UpdateAffiliatePaymentSetup");
            // verify the required parameter 'affiliatePaymentMethod' is set
            if (affiliatePaymentMethod == null) throw new ApiException(400, "Missing required parameter 'affiliatePaymentMethod' when calling UpdateAffiliatePaymentSetup");
    
            var path = "/affiliate/payment_setup";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (affiliatePaypal != null) formParams.Add("affiliate_paypal", ApiClient.ParameterToString(affiliatePaypal)); // form parameter
if (affiliatePaymentMethod != null) formParams.Add("affiliate_payment_method", ApiClient.ParameterToString(affiliatePaymentMethod)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliatePaymentSetup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliatePaymentSetup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Configure Affiliate Payout Preferences Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>TextResponse</returns>
        public TextResponse UpdateAffiliatePaymentSetup (AffiliatePaymentSetup body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateAffiliatePaymentSetup");
    
            var path = "/affiliate/payment_setup";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliatePaymentSetup: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateAffiliatePaymentSetup: " + response.ErrorMessage, response.ErrorMessage);
    
            return (TextResponse) ApiClient.Deserialize(response.Content, typeof(TextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Credit Card Details Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
        /// </summary>
        /// <param name="id">The credit card ID. Use IDs from &#x60;GET /billing/creditcards&#x60; or the response from &#x60;POST /billing/creditcards&#x60;.</param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateBillingCreditCard (int? id)
        {
            // verify the required parameter 'id' is set
            if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateBillingCreditCard");
    
            var path = "/billing/creditcards/{id}";
            path = path.Replace("{format}", "json");
            path = path.Replace("{" + "id" + "}", ApiClient.ParameterToString(id));
    
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    
            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBillingCreditCard: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBillingCreditCard: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Default Payment Method Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
        /// </summary>
        /// <param name="body"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateBillingPaymentMethod (BillingPaymentMethodRequest body)
        {
            // verify the required parameter 'body' is set
            if (body == null) throw new ApiException(400, "Missing required parameter 'body' when calling UpdateBillingPaymentMethod");
    
            var path = "/billing/payment_method";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    postBody = ApiClient.Serialize(body); // http body (model) parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBillingPaymentMethod: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBillingPaymentMethod: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
        /// <summary>
        /// Update Default Payment Method Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
        /// </summary>
        /// <param name="paymentMethod"></param>
        /// <param name="ccAuto"></param>
        /// <returns>SuccessTextResponse</returns>
        public SuccessTextResponse UpdateBillingPaymentMethod (string paymentMethod, string ccAuto)
        {
            // verify the required parameter 'paymentMethod' is set
            if (paymentMethod == null) throw new ApiException(400, "Missing required parameter 'paymentMethod' when calling UpdateBillingPaymentMethod");
            // verify the required parameter 'ccAuto' is set
            if (ccAuto == null) throw new ApiException(400, "Missing required parameter 'ccAuto' when calling UpdateBillingPaymentMethod");
    
            var path = "/billing/payment_method";
            path = path.Replace("{format}", "json");
                
            var queryParams = new Dictionary<String, String>();
            var headerParams = new Dictionary<String, String>();
            var formParams = new Dictionary<String, String>();
            var fileParams = new Dictionary<String, FileParameter>();
            String postBody = null;
    
                                    if (paymentMethod != null) formParams.Add("payment_method", ApiClient.ParameterToString(paymentMethod)); // form parameter
if (ccAuto != null) formParams.Add("cc_auto", ApiClient.ParameterToString(ccAuto)); // form parameter

            // authentication setting, if any
            String[] authSettings = new String[] { "apiKeyAuth", "sessionIdCookieAuth", "sessionIdHeaderAuth" };
    
            // make the HTTP request
            IRestResponse response = (IRestResponse) ApiClient.CallApi(path, Method.POST, queryParams, postBody, headerParams, formParams, fileParams, authSettings);
    
            if (((int)response.StatusCode) >= 400)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBillingPaymentMethod: " + response.Content, response.Content);
            else if (((int)response.StatusCode) == 0)
                throw new ApiException ((int)response.StatusCode, "Error calling UpdateBillingPaymentMethod: " + response.ErrorMessage, response.ErrorMessage);
    
            return (SuccessTextResponse) ApiClient.Deserialize(response.Content, typeof(SuccessTextResponse), response.Headers);
        }
    
    }
}
