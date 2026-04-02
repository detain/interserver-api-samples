package io.swagger.api;

import io.swagger.model.AffiliateBannerRow;
import io.swagger.model.AffiliateDockSetup;
import io.swagger.model.AffiliatePaymentSetup;
import io.swagger.model.AffiliateTrafficRow;
import java.math.BigDecimal;
import io.swagger.model.BillingAddCcRequest;
import io.swagger.model.BillingInvoiceDetail;
import io.swagger.model.BillingInvoiceList;
import io.swagger.model.BillingPaymentMethodRequest;
import io.swagger.model.BillingPrepayRequest;
import io.swagger.model.BillingVerifyCcRequest;
import io.swagger.model.InlineResponse2009;
import io.swagger.model.InlineResponse401;
import io.swagger.model.Invoice;
import io.swagger.model.MonthlyCounts;
import io.swagger.model.StatusMonthlyBreakdown;
import io.swagger.model.SuccessTextResponse;
import io.swagger.model.TextResponse;

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.MediaType;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.media.ArraySchema;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * InterServer Management API
 *
 * <p># Overview  The InterServer Management API provides programmatic access to manage your InterServer services. Use this REST API to automate provisioning, configuration, and billing operations across your account.  The API covers the following service categories: - [Domains](https://www.interserver.net/domains/) — registration, transfers, and DNS management - [Web Hosting](https://www.interserver.net/hosting/) — shared and reseller hosting - [VPS Hosting](https://www.interserver.net/vps/) — virtual private servers - [Dedicated Servers](https://www.interserver.net/dedicated/) — bare metal and [Rapid Deploy Servers](https://www.interserver.net/dedicated/rapid-deploy.html) - [Backups](https://www.interserver.net/storage/) — storage and backup services - Licenses — control panel and software licenses - [Mail](https://www.mail.baby/) — mail delivery services - SSL — certificate provisioning - Billing — invoices, payment methods, and account management  For interactive testing, see the [API documentation](/api-docs/).  # Authentication  Most endpoints require authentication. Two methods are supported:  ## API Key (Preferred)  Generate an API key from the [Account Security](https://my.interserver.net/account_security) page on [my.interserver.net](https://my.interserver.net/). Pass it in the `X-API-KEY` request header:  ``` X-API-KEY: your-api-key-here ```  ## Session-Based Authentication  Alternatively, authenticate by creating a session:  1. **Log in** — Send a `POST` request to `/login` with your account credentials. The response includes a session identifier. 2. **Pass the session ID** — Include the session identifier in the `sessionid` header on subsequent requests:  ``` sessionid: your-session-id-here ```  API key authentication is recommended for most integrations as it does not expire and avoids the overhead of session management.  
 *
 */
@Path("/")
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
    @Operation(summary = "Add Credit Card to Account", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addAccountCreditCard(@Multipart(value = "name")  String name, @Multipart(value = "address")  String address, @Multipart(value = "city")  String city, @Multipart(value = "state")  String state, @Multipart(value = "country")  String country, @Multipart(value = "zip")  String zip, @Multipart(value = "cc")  String cc, @Multipart(value = "cc_exp")  String ccExp, @Multipart(value = "cc_ccv2")  String ccCcv2);

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
    @Operation(summary = "Add Credit Card to Account", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addAccountCreditCard(@Valid BillingAddCcRequest body);

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
    @Operation(summary = "Add Credit Card for Billing", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addBillingCreditCard(@Valid BillingAddCcRequest body);

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
    @Operation(summary = "Add Credit Card for Billing", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addBillingCreditCard(@Multipart(value = "name")  String name, @Multipart(value = "address")  String address, @Multipart(value = "city")  String city, @Multipart(value = "state")  String state, @Multipart(value = "country")  String country, @Multipart(value = "zip")  String zip, @Multipart(value = "cc")  String cc, @Multipart(value = "cc_exp")  String ccExp, @Multipart(value = "cc_ccv2")  String ccCcv2);

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
    @Operation(summary = "Create Prepay Deposit", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addBillingPrepay(@Valid BillingPrepayRequest body);

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
    @Operation(summary = "Create Prepay Deposit", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse addBillingPrepay(@Multipart(value = "module")  String module, @Multipart(value = "amount")  BigDecimal amount, @Multipart(value = "automatic_use")  String automaticUse);

    /**
     * Remove Credit Card
     *
     * Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.
     *
     */
    @DELETE
    @Path("/account/creditcards/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Remove Credit Card", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Simple string response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = String.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public String deleteAccountCreditCard(@PathParam("id") String id);

    /**
     * Delete Credit Card
     *
     * Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.
     *
     */
    @DELETE
    @Path("/billing/creditcards/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Delete Credit Card", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Delete Invoice", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Delete Prepay Balance", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "List Affiliate Banner Assets", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Affiliate Banners Array", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = AffiliateBannerRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Affiliate Performance Report", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Affiliate Sales Graph Data", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Affiliate sales graph data broken down by time period.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = StatusMonthlyBreakdown.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Affiliate Sales Report", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Affiliate Traffic Graph Data", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Affiliate traffic graph data broken down by time period.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = MonthlyCounts.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "List Affiliate Web Traffic Entries", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "The recent affiliate web traffic", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = AffiliateTrafficRow.class)))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Shopping Cart Contents", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Current shopping cart contents and available payment methods.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Object getBillingCart();

    /**
     * Get Credit Card Verification Requirements
     *
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     *
     */
    @GET
    @Path("/billing/creditcards/{id}/verify")
    @Produces({ "application/json" })
    @Operation(summary = "Get Credit Card Verification Requirements", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "Get Invoice Details", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Detailed invoice payload for the requested invoice.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BillingInvoiceDetail.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "List Account Invoices", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Invoice listing and summary for the account.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = BillingInvoiceList.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
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
    @Operation(summary = "List Prepay Balances", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Prepay balances and metadata.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = Object.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public Object getBillingPrePays();

    /**
     * Get Invoices
     *
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.
     *
     */
    @GET
    @Path("/invoices")
    @Produces({ "application/json" })
    @Operation(summary = "Get Invoices", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "search results matching criteria", content = @Content(mediaType = "application/json", array = @ArraySchema(schema = @Schema(implementation = Invoice.class)))),
        @ApiResponse(responseCode = "400", description = "bad input parameter"),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))),
        @ApiResponse(responseCode = "404", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public List<Invoice> getInvoices(@QueryParam("searchString") String searchString, @QueryParam("skip") @Min(0) Integer skip, @QueryParam("limit") @Min(0) @Max(50) Integer limit);

    /**
     * Initiate Payment
     *
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.
     *
     */
    @GET
    @Path("/pay/{method}/{invoices}")
    @Produces({ "application/json" })
    @Operation(summary = "Initiate Payment", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Payment initiation response with redirect or form data.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse2009.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public InlineResponse2009 initiatePayment(@PathParam("method") String method, @PathParam("invoices") String invoices);

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
    @Operation(summary = "Submit Credit Card Verification", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postBillingCreditCardVerify(@Valid BillingVerifyCcRequest body, @PathParam("id") Integer id);

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
    @Operation(summary = "Submit Credit Card Verification", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse postBillingCreditCardVerify(@Multipart(value = "idx")  Integer idx, @Multipart(value = "cc_ccv2")  String ccCcv2, @Multipart(value = "cc_amount1")  String ccAmount1, @Multipart(value = "cc_amount2")  String ccAmount2, @Multipart(value = "terms")  Boolean terms, @PathParam("id") Integer id);

    /**
     * Update Credit Card
     *
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     *
     */
    @POST
    @Path("/account/creditcards/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Credit Card", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Simple string response", content = @Content(mediaType = "application/json", schema = @Schema(implementation = String.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public String updateAccountCreditCard(@PathParam("id") Integer id);

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
    @Operation(summary = "Configure Affiliate Dock Settings", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAffiliateDockSetup(@Multipart(value = "affiliate_dock_title")  String affiliateDockTitle, @Multipart(value = "affiliate_dock_description")  String affiliateDockDescription, @Multipart(value = "referrer_coupon")  String referrerCoupon);

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
    @Operation(summary = "Configure Affiliate Dock Settings", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAffiliateDockSetup(@Valid AffiliateDockSetup body);

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
    @Operation(summary = "Configure Affiliate Landing Page", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAffiliateLandingPage(@Multipart(value = "affiliate_dock_title")  String affiliateDockTitle, @Multipart(value = "affiliate_dock_description")  String affiliateDockDescription, @Multipart(value = "referrer_coupon")  String referrerCoupon);

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
    @Operation(summary = "Configure Affiliate Landing Page", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAffiliateLandingPage(@Valid AffiliateDockSetup body);

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
    @Operation(summary = "Configure Affiliate Payout Preferences", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAffiliatePaymentSetup(@Multipart(value = "affiliate_paypal")  String affiliatePaypal, @Multipart(value = "affiliate_payment_method")  String affiliatePaymentMethod);

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
    @Operation(summary = "Configure Affiliate Payout Preferences", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "Response with a text message field.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = TextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public TextResponse updateAffiliatePaymentSetup(@Valid AffiliatePaymentSetup body);

    /**
     * Update Credit Card Details
     *
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     *
     */
    @POST
    @Path("/billing/creditcards/{id}")
    @Produces({ "application/json" })
    @Operation(summary = "Update Credit Card Details", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateBillingCreditCard(@PathParam("id") Integer id);

    /**
     * Update Default Payment Method
     *
     * Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     *
     */
    @POST
    @Path("/billing/payment_method")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Default Payment Method", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateBillingPaymentMethod(@Valid BillingPaymentMethodRequest body);

    /**
     * Update Default Payment Method
     *
     * Updates the account&#x27;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     *
     */
    @POST
    @Path("/billing/payment_method")
    @Consumes({ "application/json", "multipart/form-data" })
    @Produces({ "application/json" })
    @Operation(summary = "Update Default Payment Method", tags={ "Billing" })
    @ApiResponses(value = { 
        @ApiResponse(responseCode = "200", description = "A response indicating the operation completed successfully with a text message.", content = @Content(mediaType = "application/json", schema = @Schema(implementation = SuccessTextResponse.class))),
        @ApiResponse(responseCode = "401", description = "Unauthorized", content = @Content(mediaType = "application/json", schema = @Schema(implementation = InlineResponse401.class))) })
    public SuccessTextResponse updateBillingPaymentMethod(@Multipart(value = "payment_method")  String paymentMethod, @Multipart(value = "cc_auto")  String ccAuto);
}
