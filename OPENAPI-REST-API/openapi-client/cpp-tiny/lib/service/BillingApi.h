#ifndef TINY_CPP_CLIENT_BillingApi_H_
#define TINY_CPP_CLIENT_BillingApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "AffiliateBannerRow.h"
#include "AffiliateTrafficRow.h"
#include "BillingAddCcRequest.h"
#include "BillingInvoiceDetail.h"
#include "BillingInvoiceList.h"
#include "BillingPaymentMethodRequest.h"
#include "BillingPrepayRequest.h"
#include "BillingVerifyCcRequest.h"
#include "GetAccountInfo_401_response.h"
#include "InitiatePayment_200_response.h"
#include "Invoice.h"
#include "MonthlyCounts.h"
#include "Object.h"
#include "StatusMonthlyBreakdown.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class BillingApi : public Service {
public:
    BillingApi() = default;

    virtual ~BillingApi();

    /**
    * Add Credit Card to Account.
    *
    * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
    * \param name 
    * \param address 
    * \param city 
    * \param state 
    * \param country 
    * \param zip 
    * \param cc 
    * \param ccExp 
    * \param ccCcv2 
    */
    Response<
                SuccessTextResponse
        >
    addAccountCreditCard(
            
            std::string name
            , 
            
            std::string address
            , 
            
            std::string city
            , 
            
            std::string state
            , 
            
            std::string country
            , 
            
            std::string zip
            , 
            
            std::string cc
            , 
            
            std::string ccExp
            , 
            
            std::string ccCcv2
            
    );
    /**
    * Add Credit Card for Billing.
    *
    * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
    * \param billingAddCcRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    addBillingCreditCard(
            
            BillingAddCcRequest billingAddCcRequest
            
    );
    /**
    * Create Prepay Deposit.
    *
    * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
    * \param billingPrepayRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    addBillingPrepay(
            
            BillingPrepayRequest billingPrepayRequest
            
    );
    /**
    * Remove Credit Card.
    *
    * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
    * \param id The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. *Required*
    */
    Response<
                std::string
        >
    deleteAccountCreditCard(
            
            std::string id
            
    );
    /**
    * Delete Credit Card.
    *
    * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
    * \param id The credit card ID to remove. Use IDs from `GET /billing/creditcards`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    deleteBillingCreditCard(
            
            int id
            
    );
    /**
    * Delete Invoice.
    *
    * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
    * \param id The invoice ID to delete. Only unpaid invoices can be deleted. *Required*
    */
    Response<
                SuccessTextResponse
        >
    deleteBillingInvoice(
            
            int id
            
    );
    /**
    * Delete Prepay Balance.
    *
    * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
    * \param id The prepay balance ID to delete. *Required*
    */
    Response<
                SuccessTextResponse
        >
    deleteBillingPrepay(
            
            int id
            
    );
    /**
    * List Affiliate Banner Assets.
    *
    * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
    */
    Response<
                    std::list<AffiliateBannerRow>
        >
    getAffiliateBanners(
    );
    /**
    * Get Affiliate Performance Report.
    *
    * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
    */
    Response<
                TextResponse
        >
    getAffiliateRichReport(
    );
    /**
    * Get Affiliate Sales Graph Data.
    *
    * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
    * \param days Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
    */
    Response<
                StatusMonthlyBreakdown
        >
    getAffiliateSalesGraph(
            
            int days
            
    );
    /**
    * Get Affiliate Sales Report.
    *
    * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
    */
    Response<
                TextResponse
        >
    getAffiliateSalesReport(
    );
    /**
    * Get Affiliate Traffic Graph Data.
    *
    * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
    * \param days Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
    */
    Response<
                MonthlyCounts&lt;std::string, int&gt;
        >
    getAffiliateTrafficGraph(
            
            int days
            
    );
    /**
    * List Affiliate Web Traffic Entries.
    *
    * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
    */
    Response<
                    std::list<AffiliateTrafficRow>
        >
    getAffiliateWebTraffic(
    );
    /**
    * Get Shopping Cart Contents.
    *
    * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
    */
    Response<
                Object
        >
    getBillingCart(
    );
    /**
    * Get Credit Card Verification Requirements.
    *
    * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
    * \param id The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getBillingCreditCardVerify(
            
            int id
            
    );
    /**
    * Get Invoice Details.
    *
    * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
    * \param id The invoice ID. Use IDs from `GET /billing/invoices` or from order responses. *Required*
    */
    Response<
                BillingInvoiceDetail&lt;std::string, std::string&gt;
        >
    getBillingInvoice(
            
            int id
            
    );
    /**
    * List Account Invoices.
    *
    * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
    */
    Response<
                BillingInvoiceList
        >
    getBillingInvoices(
    );
    /**
    * List Prepay Balances.
    *
    * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
    */
    Response<
                Object
        >
    getBillingPrePays(
    );
    /**
    * Get Invoices.
    *
    * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
    * \param searchString pass an optional search string for looking up inventory
    * \param skip number of records to skip for pagination
    * \param limit maximum number of records to return
    */
    Response<
                    std::list<Invoice>
        >
    getInvoices(
            
            std::string searchString
            , 
            
            int skip
            , 
            
            int limit
            
    );
    /**
    * Initiate Payment.
    *
    * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
    * \param method The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`. *Required*
    * \param invoices A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`. *Required*
    */
    Response<
                InitiatePayment_200_response
        >
    initiatePayment(
            
            std::string method
            , 
            
            std::string invoices
            
    );
    /**
    * Submit Credit Card Verification.
    *
    * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
    * \param id The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. *Required*
    * \param billingVerifyCcRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    postBillingCreditCardVerify(
            
            int id
            , 
            
            BillingVerifyCcRequest billingVerifyCcRequest
            
    );
    /**
    * Update Credit Card.
    *
    * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
    * \param id The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. *Required*
    */
    Response<
                std::string
        >
    updateAccountCreditCard(
            
            int id
            
    );
    /**
    * Configure Affiliate Dock Settings.
    *
    * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
    * \param affiliateDockTitle 
    * \param affiliateDockDescription 
    * \param referrerCoupon 
    */
    Response<
                TextResponse
        >
    updateAffiliateDockSetup(
            
            std::string affiliateDockTitle
            , 
            
            std::string affiliateDockDescription
            , 
            
            std::string referrerCoupon
            
    );
    /**
    * Configure Affiliate Landing Page.
    *
    * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
    * \param affiliateDockTitle 
    * \param affiliateDockDescription 
    * \param referrerCoupon 
    */
    Response<
                TextResponse
        >
    updateAffiliateLandingPage(
            
            std::string affiliateDockTitle
            , 
            
            std::string affiliateDockDescription
            , 
            
            std::string referrerCoupon
            
    );
    /**
    * Configure Affiliate Payout Preferences.
    *
    * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
    * \param affiliatePaypal 
    * \param affiliatePaymentMethod 
    */
    Response<
                TextResponse
        >
    updateAffiliatePaymentSetup(
            
            std::string affiliatePaypal
            , 
            
            std::string affiliatePaymentMethod
            
    );
    /**
    * Update Credit Card Details.
    *
    * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
    * \param id The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateBillingCreditCard(
            
            int id
            
    );
    /**
    * Update Default Payment Method.
    *
    * Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
    * \param billingPaymentMethodRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateBillingPaymentMethod(
            
            BillingPaymentMethodRequest billingPaymentMethodRequest
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_BillingApi_H_ */