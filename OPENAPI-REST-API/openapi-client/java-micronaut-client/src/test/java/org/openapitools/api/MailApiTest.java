package org.openapitools.api;

import org.openapitools.model.ChargeInvoiceRows;
import org.openapitools.model.DenyRuleNew;
import org.openapitools.model.DenyRuleRecord;
import org.openapitools.model.GenericResponse;
import org.openapitools.model.GetAccountInfo401Response;
import org.openapitools.model.MailAlertRequest;
import org.openapitools.model.MailAlertUpdateRequest;
import org.openapitools.model.MailAlertsResponse;
import org.openapitools.model.MailBlocks;
import org.openapitools.model.MailCancel200Response;
import org.openapitools.model.MailDelistRequest;
import org.openapitools.model.MailDelistResponse;
import org.openapitools.model.MailDeliverabilityResponse;
import org.openapitools.model.MailLog;
import org.openapitools.model.MailOrder;
import org.openapitools.model.MailRow;
import org.openapitools.model.MailSchema;
import org.openapitools.model.MailStatsType;
import org.openapitools.model.SendMail;
import org.openapitools.model.SendMailAdv;
import org.openapitools.model.ServiceOrderPostResponse;
import org.openapitools.model.SuccessTextResponse;
import org.openapitools.model.ViewMailLogStartDateParameter;
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
 * API tests for MailApi
 */
@MicronautTest
public class MailApiTest {

    @Inject
    MailApi api;

    
    /**
     * Place Mail Order
     *
     * Places a Mail Baby order. On success, invoices are created for payment; use &#x60;/billing/invoices/{id}&#x60; or &#x60;/pay/{method}/{invoices}&#x60; to complete payment.
     */
    @Test
    @Disabled("Not Implemented")
    public void addMailTest() {
        // given

        // when
        ServiceOrderPostResponse body = api.addMail().block();

        // then
        // TODO implement the addMailTest()
    }

    
    /**
     * Create Deny Rule
     *
     * Adds a new deny rule to automatically block emails that match the specified criteria.
     */
    @Test
    @Disabled("Not Implemented")
    public void addRuleTest() {
        // given
        Integer id = 56;
        DenyRuleNew denyRuleNew = new DenyRuleNew("email", "domeinwo@server.guesshost.net");

        // when
        GenericResponse body = api.addRule(id, denyRuleNew).block();

        // then
        // TODO implement the addRuleTest()
    }

    
    /**
     * Create Mail Alert
     *
     * Creates a new alert for the mail service, such as delivery or quota notifications.
     */
    @Test
    @Disabled("Not Implemented")
    public void createMailAlertTest() {
        // given
        Integer id = 56;
        MailAlertRequest mailAlertRequest = new MailAlertRequest();

        // when
        SuccessTextResponse body = api.createMailAlert(id, mailAlertRequest).block();

        // then
        // TODO implement the createMailAlertTest()
    }

    
    /**
     * Delete Mail Alert
     *
     * Deletes an existing alert definition for the mail service.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteMailAlertTest() {
        // given
        Integer id = 56;
        Integer alertId = 56;

        // when
        SuccessTextResponse body = api.deleteMailAlert(id, alertId).block();

        // then
        // TODO implement the deleteMailAlertTest()
    }

    
    /**
     * Delete Deny Rule
     *
     * Removes a deny rule from the mail service.
     */
    @Test
    @Disabled("Not Implemented")
    public void deleteRuleTest() {
        // given
        Integer id = 56;
        String rule = "34";

        // when
        GenericResponse body = api.deleteRule(id, rule).block();

        // then
        // TODO implement the deleteRuleTest()
    }

    
    /**
     * Remove Email Address from Block List
     *
     * Removes an email address from the mail service&#39;s block lists.
     */
    @Test
    @Disabled("Not Implemented")
    public void delistBlockTest() {
        // given
        Integer id = 56;
        String email = "example";

        // when
        GenericResponse body = api.delistBlock(id, email).block();

        // then
        // TODO implement the delistBlockTest()
    }

    
    /**
     * List Mail Alerts
     *
     * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailAlertsTest() {
        // given
        Integer id = 56;

        // when
        MailAlertsResponse body = api.getMailAlerts(id).block();

        // then
        // TODO implement the getMailAlertsTest()
    }

    
    /**
     * List Blocked Email Addresses
     *
     * Displays a listing of the blocked email addresses
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailBlocksTest() {
        // given
        Integer id = 56;

        // when
        MailBlocks body = api.getMailBlocks(id).block();

        // then
        // TODO implement the getMailBlocksTest()
    }

    
    /**
     * Get Delist Status
     *
     * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailDelistTest() {
        // given
        Integer id = 56;

        // when
        MailDelistResponse body = api.getMailDelist(id).block();

        // then
        // TODO implement the getMailDelistTest()
    }

    
    /**
     * Get Deliverability Metrics
     *
     * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailDeliverabilityTest() {
        // given
        Integer id = 56;

        // when
        MailDeliverabilityResponse body = api.getMailDeliverability(id).block();

        // then
        // TODO implement the getMailDeliverabilityTest()
    }

    
    /**
     * Get Mail Order
     *
     * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailInfoTest() {
        // given
        Integer id = 56;

        // when
        MailSchema body = api.getMailInfo(id).block();

        // then
        // TODO implement the getMailInfoTest()
    }

    
    /**
     * Get Mail Invoices
     *
     * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailInvoicesTest() {
        // given
        Integer id = 56;

        // when
        ChargeInvoiceRows body = api.getMailInvoices(id).block();

        // then
        // TODO implement the getMailInvoicesTest()
    }

    
    /**
     * List Mail Orders
     *
     * Returns the Mail Baby services on your account. Use the &#x60;mail_id&#x60; from this list with &#x60;/mail/{id}&#x60; to retrieve service details, and with &#x60;/mail/{id}/stats&#x60; or &#x60;/mail/{id}/log&#x60; to review delivery statistics.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailListTest() {
        // given

        // when
        List<MailRow> body = api.getMailList().block();

        // then
        // TODO implement the getMailListTest()
    }

    
    /**
     * Resend Mail Welcome Email
     *
     * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
     */
    @Test
    @Disabled("Not Implemented")
    public void getMailWelcomeEmailTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.getMailWelcomeEmail(id).block();

        // then
        // TODO implement the getMailWelcomeEmailTest()
    }

    
    /**
     * Get Mail Ordering Information
     *
     * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
     */
    @Test
    @Disabled("Not Implemented")
    public void getNewMailTest() {
        // given

        // when
        MailOrder body = api.getNewMail().block();

        // then
        // TODO implement the getNewMailTest()
    }

    
    /**
     * List Deny Rules
     *
     * Returns a listing of all the deny block rules configured for this mail service.
     */
    @Test
    @Disabled("Not Implemented")
    public void getRulesTest() {
        // given
        Integer id = 56;

        // when
        List<DenyRuleRecord> body = api.getRules(id).block();

        // then
        // TODO implement the getRulesTest()
    }

    
    /**
     * Get Mail Usage Statistics
     *
     * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
     */
    @Test
    @Disabled("Not Implemented")
    public void getStatsTest() {
        // given
        Integer id = 56;
        String time = "example";

        // when
        MailStatsType body = api.getStats(id, time).block();

        // then
        // TODO implement the getStatsTest()
    }

    
    /**
     * Cancel Mail
     *
     * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
     */
    @Test
    @Disabled("Not Implemented")
    public void mailCancelTest() {
        // given
        Integer id = 56;

        // when
        MailCancel200Response body = api.mailCancel(id).block();

        // then
        // TODO implement the mailCancelTest()
    }

    
    /**
     * Delist a Blocked Sender
     *
     * Removes an email address from blocklists for the mail service. Provide the &#x60;unblock&#x60; email address from the delist status response.
     */
    @Test
    @Disabled("Not Implemented")
    public void postMailDelistTest() {
        // given
        Integer id = 56;
        MailDelistRequest mailDelistRequest = new MailDelistRequest();

        // when
        SuccessTextResponse body = api.postMailDelist(id, mailDelistRequest).block();

        // then
        // TODO implement the postMailDelistTest()
    }

    
    /**
     * Validate Mail Order
     *
     * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
     */
    @Test
    @Disabled("Not Implemented")
    public void putMailTest() {
        // given

        // when
        api.putMail().block();

        // then
        // TODO implement the putMailTest()
    }

    
    /**
     * Reset Mail Password
     *
     * Resets the Mail Baby service password and emails the new password to the account owner. Use &#x60;/mail/{id}&#x60; to retrieve updated credential data after the reset.
     */
    @Test
    @Disabled("Not Implemented")
    public void resetMailPasswordTest() {
        // given
        Integer id = 56;

        // when
        SuccessTextResponse body = api.resetMailPassword(id).block();

        // then
        // TODO implement the resetMailPasswordTest()
    }

    
    /**
     * Send Email with Advanced Options
     *
     * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use &#x60;POST /mail/{id}/send&#x60;.
     */
    @Test
    @Disabled("Not Implemented")
    public void sendAdvMailTest() {
        // given
        Integer id = 56;
        SendMailAdv sendMailAdv = new SendMailAdv("Your Package has been Delivered!", "The package you ordered on 2021-01-23 has been delivered. If the package is broken into many pieces, please blaim someone else.", null, Arrays.asList());

        // when
        GenericResponse body = api.sendAdvMail(id, sendMailAdv).block();

        // then
        // TODO implement the sendAdvMailTest()
    }

    
    /**
     * Send Email
     *
     * Sends an email through one of your mail orders. For multiple recipients or file attachments, use &#x60;POST /mail/{id}/advsend&#x60; instead.
     */
    @Test
    @Disabled("Not Implemented")
    public void sendMailTest() {
        // given
        Integer id = 56;
        SendMail sendMail = new SendMail("johndoe@company.com", "janedoe@company.com", "Attention Client", "This is an email to inform you that something noteworthy happened.");

        // when
        GenericResponse body = api.sendMail(id, sendMail).block();

        // then
        // TODO implement the sendMailTest()
    }

    
    /**
     * Update Mail Alert
     *
     * Updates an existing alert definition for the mail service. Provide the &#x60;alert_id&#x60; returned by the list response along with updated fields.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateMailAlertTest() {
        // given
        Integer id = 56;
        MailAlertUpdateRequest mailAlertUpdateRequest = new MailAlertUpdateRequest();

        // when
        SuccessTextResponse body = api.updateMailAlert(id, mailAlertUpdateRequest).block();

        // then
        // TODO implement the updateMailAlertTest()
    }

    
    /**
     * Update Mail Order
     *
     * Updates mail service metadata for the order, such as stored settings or account details.
     */
    @Test
    @Disabled("Not Implemented")
    public void updateMailInfoTest() {
        // given
        String id = "example";

        // when
        SuccessTextResponse body = api.updateMailInfo(id).block();

        // then
        // TODO implement the updateMailInfoTest()
    }

    
    /**
     * View Mail Log
     *
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the &#x60;groupby&#x60; parameter.  By default (&#x60;groupby&#x3D;recipient&#x60;), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own &#x60;recipient&#x60;, &#x60;delivered&#x60;, &#x60;response&#x60;, and &#x60;mxHostname&#x60; values.  Set &#x60;groupby&#x3D;message&#x60; to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by &#x60;skip&#x60; and &#x60;limit&#x60;.  The &#x60;total&#x60; in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP &#x60;strtotime()&#x60; such as &#x60;2024-01-15&#x60;, &#x60;last monday&#x60;, or &#x60;2024-01-01 00:00:00&#x60;.  Examples: &#x60;startDate&#x3D;1704067200&amp;endDate&#x3D;1706745599&#x60; or &#x60;startDate&#x3D;2024-01-01&amp;endDate&#x3D;2024-01-31&#x60;.  **Sorting** is controlled by &#x60;sort&#x60; and &#x60;dir&#x60;.  Currently the only sort key is &#x60;time&#x60; (default), which orders by internal row ID.  **Delivery status** can be filtered with the &#x60;delivered&#x60; parameter: &#x60;delivered&#x3D;1&#x60; returns only successfully delivered messages; &#x60;delivered&#x3D;0&#x60; returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (&#x60;from&#x60;, &#x60;to&#x60;) and message headers (&#x60;headerfrom&#x60; for the &#x60;From:&#x60; header, &#x60;replyto&#x60; for &#x60;Reply-To:&#x60;). These may differ when a message is sent on behalf of another address.  The &#x60;mailid&#x60; parameter corresponds to the &#x60;id&#x60; field in the returned &#x60;MailLogEntry&#x60; objects, **not** the &#x60;_id&#x60; field.  It also matches the transaction ID returned in the &#x60;text&#x60; field of a successful send response.  The &#x60;messageId&#x60; parameter searches the &#x60;Message-ID&#x60; email header (case-insensitive substring match). 
     */
    @Test
    @Disabled("Not Implemented")
    public void viewMailLogTest() {
        // given
        Integer id = 56;
        Long id2 = 2604L;
        String origin = "1.2.3.4";
        String mx = "mx.google.com";
        String from = "me@sender.com";
        String to = "you@receiver.com";
        String subject = "Your order has shipped";
        String mailid = "185997065c60008840";
        String messageId = "<abc123@yourdomain.com>";
        String replyto = "replies@sender.com";
        String headerfrom = "newsletter@sender.com";
        Integer delivered = 1;
        Integer skip = 0;
        Integer limit = 100;
        ViewMailLogStartDateParameter startDate = new ViewMailLogStartDateParameter();
        ViewMailLogStartDateParameter endDate = new ViewMailLogStartDateParameter();
        String sort = "time";
        String dir = "desc";
        String groupby = "recipient";

        // when
        MailLog body = api.viewMailLog(id, id2, origin, mx, from, to, subject, mailid, messageId, replyto, headerfrom, delivered, skip, limit, startDate, endDate, sort, dir, groupby).block();

        // then
        // TODO implement the viewMailLogTest()
    }

    
}
