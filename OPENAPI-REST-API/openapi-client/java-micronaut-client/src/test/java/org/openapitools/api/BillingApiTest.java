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
import io.micronaut.test.extensions.junit5.annotation.MicronautTest;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Disabled;
import jakarta.inject.Inject;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;

/**
 * API tests for BillingApi
 */
@MicronautTest
public class BillingApiTest {

    @Inject
    BillingApi api;

    
    /**
     * Add Credit Card to Account
     *
     * Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.
     */
    @Test
    @Disabled("Not Implemented")
    public void addAccountCreditCardTest() {
        // given
        String name = "example";
        String address = "example";
        String city = "example";
        String state = "example";
        String country = "example";
        String zip = "example";
        String cc = "example";
        String ccExp = "example";
        String ccCcv2 = "example";

        // when
        SuccessTextResponse body = api.addAccountCreditCard(name, address, city, state, country, zip, cc, ccExp, ccCcv2).block();

        // then
        // TODO implement the addAccountCreditCardTest()
    }

    
    /**
     * Add Credit Card for Billing
     *
     * Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via &#x60;GET /billing/creditcards/{id}/verify&#x60; followed by &#x60;POST /billing/creditcards/{id}/verify&#x60; before the card can be used for payments.
     */
    @Test
    @Disabled("Not Implemented")
    public void addBillingCreditCardTest() {
        // given
        BillingAddCcRequest billingAddCcRequest = new BillingAddCcRequest();

        // when
        SuccessTextResponse body = api.addBillingCreditCard(billingAddCcRequest).block();

        // then
        // TODO implement the addBillingCreditCardTest()
    }

    
    /**
     * Create Prepay Deposit
     *
     * Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use &#x60;/billing/invoices/{id}&#x60; to retrieve the generated invoice details.
     */
    @Test
    @Disabled("Not Implemented")
    public void addBillingPrepayTest() {
        // given
        BillingPrepayRequest billingPrepayRequest = new BillingPrepayRequest();

        // when
        SuccessTextResponse body = api.addBillingPrepay(billingPrepayRequest).block();

        // then
        // TODO implement the addBillingPrepayTest()
    }

    
    /**
     * Remove Credit Card
     *
     * Removes a credit card from the account. If this is the default payment method, select a new default via &#x60;/billing/payment_method&#x60; afterward.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteAccountCreditCardTest() {
        // given
        String id = "example";

        // when
        String body = api.deleteAccountCreditCard(id).block();

        // then
        // TODO implement the deleteAccountCreditCardTest()
    }

    
    /**
     * Delete Credit Card
     *
     * Removes the selected credit card from the account. Use &#x60;/billing/payment_method&#x60; to select a new default payment method after deleting a card.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteBillingCreditCardTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.deleteBillingCreditCard(id).block();

        // then
        // TODO implement the deleteBillingCreditCardTest()
    }

    
    /**
     * Delete Invoice
     *
     * Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteBillingInvoiceTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.deleteBillingInvoice(id).block();

        // then
        // TODO implement the deleteBillingInvoiceTest()
    }

    
    /**
     * Delete Prepay Balance
     *
     * Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use &#x60;GET /billing/prepays&#x60; to list available prepay balances and their IDs.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteBillingPrepayTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.deleteBillingPrepay(id).block();

        // then
        // TODO implement the deleteBillingPrepayTest()
    }

    
    /**
     * List Affiliate Banner Assets
     *
     * Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAffiliateBannersTest() {
        // given

        // when
        List<AffiliateBannerRow> body = api.getAffiliateBanners().block();

        // then
        // TODO implement the getAffiliateBannersTest()
    }

    
    /**
     * Get Affiliate Performance Report
     *
     * Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAffiliateRichReportTest() {
        // given

        // when
        TextResponse body = api.getAffiliateRichReport().block();

        // then
        // TODO implement the getAffiliateRichReportTest()
    }

    
    /**
     * Get Affiliate Sales Graph Data
     *
     * Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAffiliateSalesGraphTest() {
        // given
        Integer days = 56;

        // when
        StatusMonthlyBreakdown body = api.getAffiliateSalesGraph(days).block();

        // then
        // TODO implement the getAffiliateSalesGraphTest()
    }

    
    /**
     * Get Affiliate Sales Report
     *
     * Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAffiliateSalesReportTest() {
        // given

        // when
        TextResponse body = api.getAffiliateSalesReport().block();

        // then
        // TODO implement the getAffiliateSalesReportTest()
    }

    
    /**
     * Get Affiliate Traffic Graph Data
     *
     * Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAffiliateTrafficGraphTest() {
        // given
        Integer days = 56;

        // when
        MonthlyCounts body = api.getAffiliateTrafficGraph(days).block();

        // then
        // TODO implement the getAffiliateTrafficGraphTest()
    }

    
    /**
     * List Affiliate Web Traffic Entries
     *
     * Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.
     */
    @Test
    @Disabled("Not Implemented")
    public void getAffiliateWebTrafficTest() {
        // given

        // when
        List<AffiliateTrafficRow> body = api.getAffiliateWebTraffic().block();

        // then
        // TODO implement the getAffiliateWebTrafficTest()
    }

    
    /**
     * Get Shopping Cart Contents
     *
     * Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to &#x60;/pay/{method}/{invoices}&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBillingCartTest() {
        // given

        // when
        Object body = api.getBillingCart().block();

        // then
        // TODO implement the getBillingCartTest()
    }

    
    /**
     * Get Credit Card Verification Requirements
     *
     * Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBillingCreditCardVerifyTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getBillingCreditCardVerify(id).block();

        // then
        // TODO implement the getBillingCreditCardVerifyTest()
    }

    
    /**
     * Get Invoice Details
     *
     * Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to &#x60;/pay/{method}/{invoices}&#x60; so you can display the exact amount due and confirm the invoice is still unpaid.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBillingInvoiceTest() {
        // given
        Integer id = 56;

        // when
        BillingInvoiceDetail body = api.getBillingInvoice(id).block();

        // then
        // TODO implement the getBillingInvoiceTest()
    }

    
    /**
     * List Account Invoices
     *
     * Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with &#x60;/billing/invoices/{id}&#x60; to retrieve detailed line items, or with &#x60;/pay/{method}/{invoices}&#x60; to initiate payment.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBillingInvoicesTest() {
        // given

        // when
        BillingInvoiceList body = api.getBillingInvoices().block();

        // then
        // TODO implement the getBillingInvoicesTest()
    }

    
    /**
     * List Prepay Balances
     *
     * Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting &#x60;prepay&#x60; as a payment method.
     */
    @Test
    @Disabled("Not Implemented")
    public void getBillingPrePaysTest() {
        // given

        // when
        Object body = api.getBillingPrePays().block();

        // then
        // TODO implement the getBillingPrePaysTest()
    }

    
    /**
     * Get Invoices
     *
     * Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional &#x60;searchString&#x60; parameter to filter results and &#x60;skip&#x60;/&#x60;limit&#x60; for pagination.
     */
    @Test
    @Disabled("Not Implemented")
    public void getInvoicesTest() {
        // given
        String searchString = "example";
        Integer skip = 56;
        Integer limit = 56;

        // when
        List<Invoice> body = api.getInvoices(searchString, skip, limit).block();

        // then
        // TODO implement the getInvoicesTest()
    }

    
    /**
     * Initiate Payment
     *
     * Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: &#x60;redirect&#x60; means send the user to the provided URL, &#x60;submit&#x60; means POST a form with the provided fields, and &#x60;single&#x60; means the payment was processed immediately. Use invoice IDs obtained from order responses or &#x60;/billing/invoices&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void initiatePaymentTest() {
        // given
        String method = "example";
        String invoices = "example";

        // when
        InitiatePayment200Response body = api.initiatePayment(method, invoices).block();

        // then
        // TODO implement the initiatePaymentTest()
    }

    
    /**
     * Submit Credit Card Verification
     *
     * Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by &#x60;GET /billing/creditcards/{id}/verify&#x60;. A successful response means the card is verified and can be selected as a payment method via &#x60;/billing/payment_method&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void postBillingCreditCardVerifyTest() {
        // given
        Integer id = 56;
        BillingVerifyCcRequest billingVerifyCcRequest = new BillingVerifyCcRequest();

        // when
        SuccessTextResponse body = api.postBillingCreditCardVerify(id, billingVerifyCcRequest).block();

        // then
        // TODO implement the postBillingCreditCardVerifyTest()
    }

    
    /**
     * Update Credit Card
     *
     * Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAccountCreditCardTest() {
        // given
        Integer id = 56;

        // when
        String body = api.updateAccountCreditCard(id).block();

        // then
        // TODO implement the updateAccountCreditCardTest()
    }

    
    /**
     * Configure Affiliate Dock Settings
     *
     * Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAffiliateDockSetupTest() {
        // given
        String affiliateDockTitle = "example";
        String affiliateDockDescription = "example";
        String referrerCoupon = "example";

        // when
        TextResponse body = api.updateAffiliateDockSetup(affiliateDockTitle, affiliateDockDescription, referrerCoupon).block();

        // then
        // TODO implement the updateAffiliateDockSetupTest()
    }

    
    /**
     * Configure Affiliate Landing Page
     *
     * Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAffiliateLandingPageTest() {
        // given
        String affiliateDockTitle = "example";
        String affiliateDockDescription = "example";
        String referrerCoupon = "example";

        // when
        TextResponse body = api.updateAffiliateLandingPage(affiliateDockTitle, affiliateDockDescription, referrerCoupon).block();

        // then
        // TODO implement the updateAffiliateLandingPageTest()
    }

    
    /**
     * Configure Affiliate Payout Preferences
     *
     * Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateAffiliatePaymentSetupTest() {
        // given
        String affiliatePaypal = "example";
        String affiliatePaymentMethod = "example";

        // when
        TextResponse body = api.updateAffiliatePaymentSetup(affiliatePaypal, affiliatePaymentMethod).block();

        // then
        // TODO implement the updateAffiliatePaymentSetupTest()
    }

    
    /**
     * Update Credit Card Details
     *
     * Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateBillingCreditCardTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.updateBillingCreditCard(id).block();

        // then
        // TODO implement the updateBillingCreditCardTest()
    }

    
    /**
     * Update Default Payment Method
     *
     * Updates the account&#39;s default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateBillingPaymentMethodTest() {
        // given
        BillingPaymentMethodRequest billingPaymentMethodRequest = new BillingPaymentMethodRequest();

        // when
        SuccessTextResponse body = api.updateBillingPaymentMethod(billingPaymentMethodRequest).block();

        // then
        // TODO implement the updateBillingPaymentMethodTest()
    }

    
}
