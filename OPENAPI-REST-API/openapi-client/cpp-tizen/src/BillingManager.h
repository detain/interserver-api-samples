#ifndef _BillingManager_H_
#define _BillingManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
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
#include "StatusMonthlyBreakdown.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Billing Billing
 * \ingroup Operations
 *  @{
 */
class BillingManager {
public:
	BillingManager();
	virtual ~BillingManager();

/*! \brief Add Credit Card to Account. *Synchronous*
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
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addAccountCreditCardSync(char * accessToken,
	std::string name, std::string address, std::string city, std::string state, std::string country, std::string zip, std::string cc, std::string ccExp, std::string ccCcv2, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Add Credit Card to Account. *Asynchronous*
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
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addAccountCreditCardAsync(char * accessToken,
	std::string name, std::string address, std::string city, std::string state, std::string country, std::string zip, std::string cc, std::string ccExp, std::string ccCcv2, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Add Credit Card for Billing. *Synchronous*
 *
 * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
 * \param billingAddCcRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addBillingCreditCardSync(char * accessToken,
	std::shared_ptr<BillingAddCcRequest> billingAddCcRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Add Credit Card for Billing. *Asynchronous*
 *
 * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.
 * \param billingAddCcRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addBillingCreditCardAsync(char * accessToken,
	std::shared_ptr<BillingAddCcRequest> billingAddCcRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Create Prepay Deposit. *Synchronous*
 *
 * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
 * \param billingPrepayRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addBillingPrepaySync(char * accessToken,
	std::shared_ptr<BillingPrepayRequest> billingPrepayRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Create Prepay Deposit. *Asynchronous*
 *
 * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.
 * \param billingPrepayRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addBillingPrepayAsync(char * accessToken,
	std::shared_ptr<BillingPrepayRequest> billingPrepayRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Remove Credit Card. *Synchronous*
 *
 * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
 * \param id The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAccountCreditCardSync(char * accessToken,
	std::string id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Remove Credit Card. *Asynchronous*
 *
 * Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.
 * \param id The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAccountCreditCardAsync(char * accessToken,
	std::string id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Delete Credit Card. *Synchronous*
 *
 * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
 * \param id The credit card ID to remove. Use IDs from `GET /billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBillingCreditCardSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Delete Credit Card. *Asynchronous*
 *
 * Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.
 * \param id The credit card ID to remove. Use IDs from `GET /billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBillingCreditCardAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Delete Invoice. *Synchronous*
 *
 * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
 * \param id The invoice ID to delete. Only unpaid invoices can be deleted. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBillingInvoiceSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Delete Invoice. *Asynchronous*
 *
 * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
 * \param id The invoice ID to delete. Only unpaid invoices can be deleted. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBillingInvoiceAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Delete Prepay Balance. *Synchronous*
 *
 * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
 * \param id The prepay balance ID to delete. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBillingPrepaySync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Delete Prepay Balance. *Asynchronous*
 *
 * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.
 * \param id The prepay balance ID to delete. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBillingPrepayAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief List Affiliate Banner Assets. *Synchronous*
 *
 * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateBannersSync(char * accessToken,
	
	void(* handler)(std::list<AffiliateBannerRow>, Error, void* )
	, void* userData);

/*! \brief List Affiliate Banner Assets. *Asynchronous*
 *
 * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateBannersAsync(char * accessToken,
	
	void(* handler)(std::list<AffiliateBannerRow>, Error, void* )
	, void* userData);


/*! \brief Get Affiliate Performance Report. *Synchronous*
 *
 * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateRichReportSync(char * accessToken,
	
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Get Affiliate Performance Report. *Asynchronous*
 *
 * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateRichReportAsync(char * accessToken,
	
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Get Affiliate Sales Graph Data. *Synchronous*
 *
 * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
 * \param days Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateSalesGraphSync(char * accessToken,
	int days, 
	void(* handler)(StatusMonthlyBreakdown, Error, void* )
	, void* userData);

/*! \brief Get Affiliate Sales Graph Data. *Asynchronous*
 *
 * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
 * \param days Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateSalesGraphAsync(char * accessToken,
	int days, 
	void(* handler)(StatusMonthlyBreakdown, Error, void* )
	, void* userData);


/*! \brief Get Affiliate Sales Report. *Synchronous*
 *
 * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateSalesReportSync(char * accessToken,
	
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Get Affiliate Sales Report. *Asynchronous*
 *
 * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateSalesReportAsync(char * accessToken,
	
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Get Affiliate Traffic Graph Data. *Synchronous*
 *
 * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
 * \param days Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateTrafficGraphSync(char * accessToken,
	int days, 
	void(* handler)(MonthlyCounts, Error, void* )
	, void* userData);

/*! \brief Get Affiliate Traffic Graph Data. *Asynchronous*
 *
 * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
 * \param days Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateTrafficGraphAsync(char * accessToken,
	int days, 
	void(* handler)(MonthlyCounts, Error, void* )
	, void* userData);


/*! \brief List Affiliate Web Traffic Entries. *Synchronous*
 *
 * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateWebTrafficSync(char * accessToken,
	
	void(* handler)(std::list<AffiliateTrafficRow>, Error, void* )
	, void* userData);

/*! \brief List Affiliate Web Traffic Entries. *Asynchronous*
 *
 * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAffiliateWebTrafficAsync(char * accessToken,
	
	void(* handler)(std::list<AffiliateTrafficRow>, Error, void* )
	, void* userData);


/*! \brief Get Shopping Cart Contents. *Synchronous*
 *
 * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingCartSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get Shopping Cart Contents. *Asynchronous*
 *
 * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingCartAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get Credit Card Verification Requirements. *Synchronous*
 *
 * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
 * \param id The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingCreditCardVerifySync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Get Credit Card Verification Requirements. *Asynchronous*
 *
 * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
 * \param id The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingCreditCardVerifyAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get Invoice Details. *Synchronous*
 *
 * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
 * \param id The invoice ID. Use IDs from `GET /billing/invoices` or from order responses. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingInvoiceSync(char * accessToken,
	int id, 
	void(* handler)(BillingInvoiceDetail, Error, void* )
	, void* userData);

/*! \brief Get Invoice Details. *Asynchronous*
 *
 * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.
 * \param id The invoice ID. Use IDs from `GET /billing/invoices` or from order responses. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingInvoiceAsync(char * accessToken,
	int id, 
	void(* handler)(BillingInvoiceDetail, Error, void* )
	, void* userData);


/*! \brief List Account Invoices. *Synchronous*
 *
 * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingInvoicesSync(char * accessToken,
	
	void(* handler)(BillingInvoiceList, Error, void* )
	, void* userData);

/*! \brief List Account Invoices. *Asynchronous*
 *
 * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingInvoicesAsync(char * accessToken,
	
	void(* handler)(BillingInvoiceList, Error, void* )
	, void* userData);


/*! \brief List Prepay Balances. *Synchronous*
 *
 * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingPrePaysSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief List Prepay Balances. *Asynchronous*
 *
 * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBillingPrePaysAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get Invoices. *Synchronous*
 *
 * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
 * \param searchString pass an optional search string for looking up inventory
 * \param skip number of records to skip for pagination
 * \param limit maximum number of records to return
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoicesSync(char * accessToken,
	std::string searchString, int skip, int limit, 
	void(* handler)(std::list<Invoice>, Error, void* )
	, void* userData);

/*! \brief Get Invoices. *Asynchronous*
 *
 * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.
 * \param searchString pass an optional search string for looking up inventory
 * \param skip number of records to skip for pagination
 * \param limit maximum number of records to return
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoicesAsync(char * accessToken,
	std::string searchString, int skip, int limit, 
	void(* handler)(std::list<Invoice>, Error, void* )
	, void* userData);


/*! \brief Initiate Payment. *Synchronous*
 *
 * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
 * \param method The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`. *Required*
 * \param invoices A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool initiatePaymentSync(char * accessToken,
	std::string method, std::string invoices, 
	void(* handler)(InitiatePayment_200_response, Error, void* )
	, void* userData);

/*! \brief Initiate Payment. *Asynchronous*
 *
 * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.
 * \param method The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`. *Required*
 * \param invoices A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool initiatePaymentAsync(char * accessToken,
	std::string method, std::string invoices, 
	void(* handler)(InitiatePayment_200_response, Error, void* )
	, void* userData);


/*! \brief Submit Credit Card Verification. *Synchronous*
 *
 * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
 * \param id The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. *Required*
 * \param billingVerifyCcRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postBillingCreditCardVerifySync(char * accessToken,
	int id, std::shared_ptr<BillingVerifyCcRequest> billingVerifyCcRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Submit Credit Card Verification. *Asynchronous*
 *
 * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.
 * \param id The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`. *Required*
 * \param billingVerifyCcRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postBillingCreditCardVerifyAsync(char * accessToken,
	int id, std::shared_ptr<BillingVerifyCcRequest> billingVerifyCcRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Update Credit Card. *Synchronous*
 *
 * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
 * \param id The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountCreditCardSync(char * accessToken,
	int id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Update Credit Card. *Asynchronous*
 *
 * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
 * \param id The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAccountCreditCardAsync(char * accessToken,
	int id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Configure Affiliate Dock Settings. *Synchronous*
 *
 * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
 * \param affiliateDockTitle 
 * \param affiliateDockDescription 
 * \param referrerCoupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAffiliateDockSetupSync(char * accessToken,
	std::string affiliateDockTitle, std::string affiliateDockDescription, std::string referrerCoupon, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Configure Affiliate Dock Settings. *Asynchronous*
 *
 * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
 * \param affiliateDockTitle 
 * \param affiliateDockDescription 
 * \param referrerCoupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAffiliateDockSetupAsync(char * accessToken,
	std::string affiliateDockTitle, std::string affiliateDockDescription, std::string referrerCoupon, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Configure Affiliate Landing Page. *Synchronous*
 *
 * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
 * \param affiliateDockTitle 
 * \param affiliateDockDescription 
 * \param referrerCoupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAffiliateLandingPageSync(char * accessToken,
	std::string affiliateDockTitle, std::string affiliateDockDescription, std::string referrerCoupon, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Configure Affiliate Landing Page. *Asynchronous*
 *
 * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
 * \param affiliateDockTitle 
 * \param affiliateDockDescription 
 * \param referrerCoupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAffiliateLandingPageAsync(char * accessToken,
	std::string affiliateDockTitle, std::string affiliateDockDescription, std::string referrerCoupon, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Configure Affiliate Payout Preferences. *Synchronous*
 *
 * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
 * \param affiliatePaypal 
 * \param affiliatePaymentMethod 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAffiliatePaymentSetupSync(char * accessToken,
	std::string affiliatePaypal, std::string affiliatePaymentMethod, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Configure Affiliate Payout Preferences. *Asynchronous*
 *
 * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
 * \param affiliatePaypal 
 * \param affiliatePaymentMethod 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAffiliatePaymentSetupAsync(char * accessToken,
	std::string affiliatePaypal, std::string affiliatePaymentMethod, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Update Credit Card Details. *Synchronous*
 *
 * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
 * \param id The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBillingCreditCardSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Credit Card Details. *Asynchronous*
 *
 * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
 * \param id The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBillingCreditCardAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Update Default Payment Method. *Synchronous*
 *
 * Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
 * \param billingPaymentMethodRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBillingPaymentMethodSync(char * accessToken,
	std::shared_ptr<BillingPaymentMethodRequest> billingPaymentMethodRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Default Payment Method. *Asynchronous*
 *
 * Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
 * \param billingPaymentMethodRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBillingPaymentMethodAsync(char * accessToken,
	std::shared_ptr<BillingPaymentMethodRequest> billingPaymentMethodRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* BillingManager_H_ */
