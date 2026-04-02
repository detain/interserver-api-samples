import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for BillingApi
void main() {
  final instance = Openapi().getBillingApi();

  group(BillingApi, () {
    // Add Credit Card to Account
    //
    // Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
    //
    //Future<SuccessTextResponse> addAccountCreditCard({ String name, String address, String city, String state, String country, String zip, String cc, String ccExp, String ccCcv2 }) async
    test('test addAccountCreditCard', () async {
      // TODO
    });

    // Add Credit Card for Billing
    //
    // Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
    //
    //Future<SuccessTextResponse> addBillingCreditCard(BillingAddCcRequest billingAddCcRequest) async
    test('test addBillingCreditCard', () async {
      // TODO
    });

    // Create Prepay Deposit
    //
    // Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
    //
    //Future<SuccessTextResponse> addBillingPrepay(BillingPrepayRequest billingPrepayRequest) async
    test('test addBillingPrepay', () async {
      // TODO
    });

    // Remove Credit Card
    //
    // Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
    //
    //Future<String> deleteAccountCreditCard(String id) async
    test('test deleteAccountCreditCard', () async {
      // TODO
    });

    // Delete Credit Card
    //
    // Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
    //
    //Future<SuccessTextResponse> deleteBillingCreditCard(int id) async
    test('test deleteBillingCreditCard', () async {
      // TODO
    });

    // Delete Invoice
    //
    // Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
    //
    //Future<SuccessTextResponse> deleteBillingInvoice(int id) async
    test('test deleteBillingInvoice', () async {
      // TODO
    });

    // Delete Prepay Balance
    //
    // Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
    //
    //Future<SuccessTextResponse> deleteBillingPrepay(int id) async
    test('test deleteBillingPrepay', () async {
      // TODO
    });

    // List Affiliate Banner Assets
    //
    // Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
    //
    //Future<BuiltList<AffiliateBannerRow>> getAffiliateBanners() async
    test('test getAffiliateBanners', () async {
      // TODO
    });

    // Get Affiliate Performance Report
    //
    // Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
    //
    //Future<TextResponse> getAffiliateRichReport() async
    test('test getAffiliateRichReport', () async {
      // TODO
    });

    // Get Affiliate Sales Graph Data
    //
    // Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
    //
    //Future<StatusMonthlyBreakdown> getAffiliateSalesGraph({ int days }) async
    test('test getAffiliateSalesGraph', () async {
      // TODO
    });

    // Get Affiliate Sales Report
    //
    // Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
    //
    //Future<TextResponse> getAffiliateSalesReport() async
    test('test getAffiliateSalesReport', () async {
      // TODO
    });

    // Get Affiliate Traffic Graph Data
    //
    // Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
    //
    //Future<MonthlyCounts> getAffiliateTrafficGraph({ int days }) async
    test('test getAffiliateTrafficGraph', () async {
      // TODO
    });

    // List Affiliate Web Traffic Entries
    //
    // Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
    //
    //Future<BuiltList<AffiliateTrafficRow>> getAffiliateWebTraffic() async
    test('test getAffiliateWebTraffic', () async {
      // TODO
    });

    // Get Shopping Cart Contents
    //
    // Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
    //
    //Future<JsonObject> getBillingCart() async
    test('test getBillingCart', () async {
      // TODO
    });

    // Get Credit Card Verification Requirements
    //
    // Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
    //
    //Future<SuccessTextResponse> getBillingCreditCardVerify(int id) async
    test('test getBillingCreditCardVerify', () async {
      // TODO
    });

    // Get Invoice Details
    //
    // Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
    //
    //Future<BillingInvoiceDetail> getBillingInvoice(int id) async
    test('test getBillingInvoice', () async {
      // TODO
    });

    // List Account Invoices
    //
    // Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
    //
    //Future<BillingInvoiceList> getBillingInvoices() async
    test('test getBillingInvoices', () async {
      // TODO
    });

    // List Prepay Balances
    //
    // Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
    //
    //Future<JsonObject> getBillingPrePays() async
    test('test getBillingPrePays', () async {
      // TODO
    });

    // Get Invoices
    //
    // Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
    //
    //Future<BuiltList<Invoice>> getInvoices({ String searchString, int skip, int limit }) async
    test('test getInvoices', () async {
      // TODO
    });

    // Initiate Payment
    //
    // Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
    //
    //Future<InitiatePayment200Response> initiatePayment(String method, String invoices) async
    test('test initiatePayment', () async {
      // TODO
    });

    // Submit Credit Card Verification
    //
    // Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
    //
    //Future<SuccessTextResponse> postBillingCreditCardVerify(int id, BillingVerifyCcRequest billingVerifyCcRequest) async
    test('test postBillingCreditCardVerify', () async {
      // TODO
    });

    // Update Credit Card
    //
    // Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
    //
    //Future<String> updateAccountCreditCard(int id) async
    test('test updateAccountCreditCard', () async {
      // TODO
    });

    // Configure Affiliate Dock Settings
    //
    // Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
    //
    //Future<TextResponse> updateAffiliateDockSetup({ String affiliateDockTitle, String affiliateDockDescription, String referrerCoupon }) async
    test('test updateAffiliateDockSetup', () async {
      // TODO
    });

    // Configure Affiliate Landing Page
    //
    // Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
    //
    //Future<TextResponse> updateAffiliateLandingPage({ String affiliateDockTitle, String affiliateDockDescription, String referrerCoupon }) async
    test('test updateAffiliateLandingPage', () async {
      // TODO
    });

    // Configure Affiliate Payout Preferences
    //
    // Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
    //
    //Future<TextResponse> updateAffiliatePaymentSetup({ String affiliatePaypal, String affiliatePaymentMethod }) async
    test('test updateAffiliatePaymentSetup', () async {
      // TODO
    });

    // Update Credit Card Details
    //
    // Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
    //
    //Future<SuccessTextResponse> updateBillingCreditCard(int id) async
    test('test updateBillingCreditCard', () async {
      // TODO
    });

    // Update Default Payment Method
    //
    // Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
    //
    //Future<SuccessTextResponse> updateBillingPaymentMethod(BillingPaymentMethodRequest billingPaymentMethodRequest) async
    test('test updateBillingPaymentMethod', () async {
      // TODO
    });

  });
}
