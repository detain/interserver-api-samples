package org.openapitools.api;

import org.openapitools.model.AffiliateBannerRow;
import org.openapitools.model.AffiliateTrafficRow;
import org.openapitools.model.BillingAddCcRequest;
import org.openapitools.model.BillingInvoiceDetail;
import org.openapitools.model.BillingInvoiceList;
import org.openapitools.model.BillingPaymentMethodRequest;
import org.openapitools.model.BillingPrepayRequest;
import org.openapitools.model.BillingVerifyCcRequest;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.InitiatePayment200Response;
import org.openapitools.model.Invoice;
import org.openapitools.model.MonthlyCounts;
import org.openapitools.model.StatusMonthlyBreakdown;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.TextResponse;

import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiResponses;
import io.swagger.annotations.ApiResponse;
import io.swagger.jaxrs.PATCH;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("")
@Api(value = "/", description = "")
public interface BillingApi  {

    /**
     * Add Credit Card to Account
     *
     * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
     *
     */
    @POST
    @Path("/account/creditcards")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Add Credit Card to Account", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse addAccountCreditCard(@Multipart(value = "name", required = false)  String name, @Multipart(value = "address", required = false)  String address, @Multipart(value = "city", required = false)  String city, @Multipart(value = "state", required = false)  String state, @Multipart(value = "country", required = false)  String country, @Multipart(value = "zip", required = false)  String zip, @Multipart(value = "cc", required = false)  String cc, @Multipart(value = "cc_exp", required = false)  String ccExp, @Multipart(value = "cc_ccv2", required = false)  String ccCcv2);

    /**
     * Add Credit Card for Billing
     *
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
     *
     */
    @POST
    @Path("/billing/creditcards")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Add Credit Card for Billing", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse addBillingCreditCard(BillingAddCcRequest billingAddCcRequest);

    /**
     * Create Prepay Deposit
     *
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
     *
     */
    @POST
    @Path("/billing/prepays")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Create Prepay Deposit", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse addBillingPrepay(BillingPrepayRequest billingPrepayRequest);

    /**
     * Remove Credit Card
     *
     * Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.
     *
     */
    @DELETE
    @Path("/account/creditcards/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Remove Credit Card", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void deleteAccountCreditCard(@PathParam("id") String id);

    /**
     * Delete Credit Card
     *
     * Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.
     *
     */
    @DELETE
    @Path("/billing/creditcards/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Credit Card", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteBillingCreditCard(@PathParam("id") Integer id);

    /**
     * Delete Invoice
     *
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     *
     */
    @DELETE
    @Path("/billing/invoices/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Invoice", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteBillingInvoice(@PathParam("id") Integer id);

    /**
     * Delete Prepay Balance
     *
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.
     *
     */
    @DELETE
    @Path("/billing/prepays/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Delete Prepay Balance", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse deleteBillingPrepay(@PathParam("id") Integer id);

    /**
     * List Affiliate Banner Assets
     *
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     *
     */
    @GET
    @Path("/affiliate/banners")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Affiliate Banner Assets", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Affiliate Banners Array", response = AffiliateBannerRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<AffiliateBannerRow> getAffiliateBanners();

    /**
     * Get Affiliate Performance Report
     *
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     *
     */
    @GET
    @Path("/affiliate/rich_report")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Affiliate Performance Report", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse getAffiliateRichReport();

    /**
     * Get Affiliate Sales Graph Data
     *
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     *
     */
    @GET
    @Path("/affiliate/sales_graph")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Affiliate Sales Graph Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Affiliate sales graph data broken down by time period.", response = StatusMonthlyBreakdown.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public StatusMonthlyBreakdown getAffiliateSalesGraph(@QueryParam("days") Integer days);

    /**
     * Get Affiliate Sales Report
     *
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     *
     */
    @GET
    @Path("/affiliate/sales_report")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Affiliate Sales Report", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse getAffiliateSalesReport();

    /**
     * Get Affiliate Traffic Graph Data
     *
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     *
     */
    @GET
    @Path("/affiliate/traffic_graph")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Affiliate Traffic Graph Data", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Affiliate traffic graph data broken down by time period.", response = MonthlyCounts.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public MonthlyCounts getAffiliateTrafficGraph(@QueryParam("days") Integer days);

    /**
     * List Affiliate Web Traffic Entries
     *
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     *
     */
    @GET
    @Path("/affiliate/web_traffic")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Affiliate Web Traffic Entries", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "The recent affiliate web traffic", response = AffiliateTrafficRow.class, responseContainer = "List"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<AffiliateTrafficRow> getAffiliateWebTraffic();

    /**
     * Get Shopping Cart Contents
     *
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.
     *
     */
    @GET
    @Path("/billing/cart")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Shopping Cart Contents", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void getBillingCart();

    /**
     * Get Credit Card Verification Requirements
     *
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     *
     */
    @GET
    @Path("/billing/creditcards/{id}/verify")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Credit Card Verification Requirements", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse getBillingCreditCardVerify(@PathParam("id") Integer id);

    /**
     * Get Invoice Details
     *
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.
     *
     */
    @GET
    @Path("/billing/invoices/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Invoice Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Detailed invoice payload for the requested invoice.", response = BillingInvoiceDetail.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public BillingInvoiceDetail getBillingInvoice(@PathParam("id") Integer id);

    /**
     * List Account Invoices
     *
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.
     *
     */
    @GET
    @Path("/billing/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Account Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Invoice listing and summary for the account.", response = BillingInvoiceList.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public BillingInvoiceList getBillingInvoices();

    /**
     * List Prepay Balances
     *
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.
     *
     */
    @GET
    @Path("/billing/prepays")
    @Produces({ "application/json" })
    @ApiOperation(value = "List Prepay Balances", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void getBillingPrePays();

    /**
     * Get Invoices
     *
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.
     *
     */
    @GET
    @Path("/invoices")
    @Produces({ "application/json" })
    @ApiOperation(value = "Get Invoices", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "search results matching criteria", response = Invoice.class, responseContainer = "List"),
        @ApiResponse(code = 400, message = "bad input parameter"),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 404, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public List<Invoice> getInvoices(@QueryParam("searchString") String searchString, @QueryParam("skip") Integer skip, @QueryParam("limit") Integer limit);

    /**
     * Initiate Payment
     *
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.
     *
     */
    @GET
    @Path("/pay/{method}/{invoices}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Initiate Payment", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Payment initiation response with redirect or form data.", response = InitiatePayment200Response.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public InitiatePayment200Response initiatePayment(@PathParam("method") String method, @PathParam("invoices") String invoices);

    /**
     * Submit Credit Card Verification
     *
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
     *
     */
    @POST
    @Path("/billing/creditcards/{id}/verify")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Submit Credit Card Verification", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse postBillingCreditCardVerify(@PathParam("id") Integer id, BillingVerifyCcRequest billingVerifyCcRequest);

    /**
     * Update Credit Card
     *
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     *
     */
    @POST
    @Path("/account/creditcards/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Credit Card", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class),
        @ApiResponse(code = 200, message = "Default response") })
    public void updateAccountCreditCard(@PathParam("id") Integer id);

    /**
     * Configure Affiliate Dock Settings
     *
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     *
     */
    @POST
    @Path("/affiliate/dock_setup")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Configure Affiliate Dock Settings", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse updateAffiliateDockSetup(@Multipart(value = "affiliate_dock_title", required = false)  String affiliateDockTitle, @Multipart(value = "affiliate_dock_description", required = false)  String affiliateDockDescription, @Multipart(value = "referrer_coupon", required = false)  String referrerCoupon);

    /**
     * Configure Affiliate Landing Page
     *
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     *
     */
    @POST
    @Path("/affiliate/landing_pg")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Configure Affiliate Landing Page", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse updateAffiliateLandingPage(@Multipart(value = "affiliate_dock_title", required = false)  String affiliateDockTitle, @Multipart(value = "affiliate_dock_description", required = false)  String affiliateDockDescription, @Multipart(value = "referrer_coupon", required = false)  String referrerCoupon);

    /**
     * Configure Affiliate Payout Preferences
     *
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     *
     */
    @POST
    @Path("/affiliate/payment_setup")
    @Consumes({ "multipart/form-data", "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Configure Affiliate Payout Preferences", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Response with a text message field.", response = TextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public TextResponse updateAffiliatePaymentSetup(@Multipart(value = "affiliate_paypal", required = false)  String affiliatePaypal, @Multipart(value = "affiliate_payment_method", required = false)  String affiliatePaymentMethod);

    /**
     * Update Credit Card Details
     *
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     *
     */
    @POST
    @Path("/billing/creditcards/{id}")
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Credit Card Details", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateBillingCreditCard(@PathParam("id") Integer id);

    /**
     * Update Default Payment Method
     *
     * Updates the account&#39;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     *
     */
    @POST
    @Path("/billing/payment_method")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @ApiOperation(value = "Update Default Payment Method", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A response indicating the operation completed successfully with a text message.", response = SuccessTextResponse.class),
        @ApiResponse(code = 401, message = "Unauthorized", response = GetAccountInfo401Response.class) })
    public SuccessTextResponse updateBillingPaymentMethod(BillingPaymentMethodRequest billingPaymentMethodRequest);
}
