#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/affiliate_banner_row.h"
#include "../model/affiliate_traffic_row.h"
#include "../model/billing_add_cc_request.h"
#include "../model/billing_invoice_detail.h"
#include "../model/billing_invoice_list.h"
#include "../model/billing_payment_method_request.h"
#include "../model/billing_prepay_request.h"
#include "../model/billing_verify_cc_request.h"
#include "../model/get_account_info_401_response.h"
#include "../model/initiate_payment_200_response.h"
#include "../model/invoice.h"
#include "../model/monthly_counts.h"
#include "../model/object.h"
#include "../model/status_monthly_breakdown.h"
#include "../model/success_text_response.h"
#include "../model/text_response.h"

// Enum METHOD for BillingAPI_initiatePayment
typedef enum  { interserver_management_api_initiatePayment_METHOD_NULL = 0, interserver_management_api_initiatePayment_METHOD_cc, interserver_management_api_initiatePayment_METHOD_paypal, interserver_management_api_initiatePayment_METHOD_prepay, interserver_management_api_initiatePayment_METHOD_payssion, interserver_management_api_initiatePayment_METHOD_payu, interserver_management_api_initiatePayment_METHOD_ccavenue, interserver_management_api_initiatePayment_METHOD_cashfree, interserver_management_api_initiatePayment_METHOD_coinbase, interserver_management_api_initiatePayment_METHOD_btcpay } interserver_management_api_initiatePayment_method_e;


// Add Credit Card to Account
//
// Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
//
success_text_response_t*
BillingAPI_addAccountCreditCard(apiClient_t *apiClient, char *name, char *address, char *city, char *state, char *country, char *zip, char *cc, char *cc_exp, char *cc_ccv2);


// Add Credit Card for Billing
//
// Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
//
success_text_response_t*
BillingAPI_addBillingCreditCard(apiClient_t *apiClient, billing_add_cc_request_t *billing_add_cc_request);


// Create Prepay Deposit
//
// Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
//
success_text_response_t*
BillingAPI_addBillingPrepay(apiClient_t *apiClient, billing_prepay_request_t *billing_prepay_request);


// Remove Credit Card
//
// Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
//
char*
BillingAPI_deleteAccountCreditCard(apiClient_t *apiClient, char *id);


// Delete Credit Card
//
// Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
//
success_text_response_t*
BillingAPI_deleteBillingCreditCard(apiClient_t *apiClient, int *id);


// Delete Invoice
//
// Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
//
success_text_response_t*
BillingAPI_deleteBillingInvoice(apiClient_t *apiClient, int *id);


// Delete Prepay Balance
//
// Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
//
success_text_response_t*
BillingAPI_deleteBillingPrepay(apiClient_t *apiClient, int *id);


// List Affiliate Banner Assets
//
// Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
//
list_t*
BillingAPI_getAffiliateBanners(apiClient_t *apiClient);


// Get Affiliate Performance Report
//
// Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
//
text_response_t*
BillingAPI_getAffiliateRichReport(apiClient_t *apiClient);


// Get Affiliate Sales Graph Data
//
// Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
//
status_monthly_breakdown_t*
BillingAPI_getAffiliateSalesGraph(apiClient_t *apiClient, int *days);


// Get Affiliate Sales Report
//
// Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
//
text_response_t*
BillingAPI_getAffiliateSalesReport(apiClient_t *apiClient);


// Get Affiliate Traffic Graph Data
//
// Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
//
monthly_counts_t*
BillingAPI_getAffiliateTrafficGraph(apiClient_t *apiClient, int *days);


// List Affiliate Web Traffic Entries
//
// Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
//
list_t*
BillingAPI_getAffiliateWebTraffic(apiClient_t *apiClient);


// Get Shopping Cart Contents
//
// Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
//
object_t*
BillingAPI_getBillingCart(apiClient_t *apiClient);


// Get Credit Card Verification Requirements
//
// Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
//
success_text_response_t*
BillingAPI_getBillingCreditCardVerify(apiClient_t *apiClient, int *id);


// Get Invoice Details
//
// Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
//
billing_invoice_detail_t*
BillingAPI_getBillingInvoice(apiClient_t *apiClient, int *id);


// List Account Invoices
//
// Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
//
billing_invoice_list_t*
BillingAPI_getBillingInvoices(apiClient_t *apiClient);


// List Prepay Balances
//
// Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
//
object_t*
BillingAPI_getBillingPrePays(apiClient_t *apiClient);


// Get Invoices
//
// Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
//
list_t*
BillingAPI_getInvoices(apiClient_t *apiClient, char *searchString, int *skip, int *limit);


// Initiate Payment
//
// Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
//
initiate_payment_200_response_t*
BillingAPI_initiatePayment(apiClient_t *apiClient, interserver_management_api_initiatePayment_method_e method, char *invoices);


// Submit Credit Card Verification
//
// Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
//
success_text_response_t*
BillingAPI_postBillingCreditCardVerify(apiClient_t *apiClient, int *id, billing_verify_cc_request_t *billing_verify_cc_request);


// Update Credit Card
//
// Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
//
char*
BillingAPI_updateAccountCreditCard(apiClient_t *apiClient, int *id);


// Configure Affiliate Dock Settings
//
// Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
//
text_response_t*
BillingAPI_updateAffiliateDockSetup(apiClient_t *apiClient, char *affiliate_dock_title, char *affiliate_dock_description, char *referrer_coupon);


// Configure Affiliate Landing Page
//
// Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
//
text_response_t*
BillingAPI_updateAffiliateLandingPage(apiClient_t *apiClient, char *affiliate_dock_title, char *affiliate_dock_description, char *referrer_coupon);


// Configure Affiliate Payout Preferences
//
// Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
//
text_response_t*
BillingAPI_updateAffiliatePaymentSetup(apiClient_t *apiClient, char *affiliate_paypal, char *affiliate_payment_method);


// Update Credit Card Details
//
// Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
//
success_text_response_t*
BillingAPI_updateBillingCreditCard(apiClient_t *apiClient, int *id);


// Update Default Payment Method
//
// Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
//
success_text_response_t*
BillingAPI_updateBillingPaymentMethod(apiClient_t *apiClient, billing_payment_method_request_t *billing_payment_method_request);


