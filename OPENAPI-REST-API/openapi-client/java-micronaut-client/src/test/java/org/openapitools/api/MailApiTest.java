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
import org.openapitools.model.SuccessTextResponse;
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
        api.addMail().block();

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
        api.updateMailInfo(id).block();

        // then
        // TODO implement the updateMailInfoTest()
    }

    
    /**
     * View Mail Log
     *
     * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
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
        String subject = "Support";
        String mailid = "185997065c60008840";
        Integer skip = 0;
        Integer limit = 100;
        Long startDate = 1641781008L;
        Long endDate = 1673317008L;
        String delivered = "example";

        // when
        MailLog body = api.viewMailLog(id, id2, origin, mx, from, to, subject, mailid, skip, limit, startDate, endDate, delivered).block();

        // then
        // TODO implement the viewMailLogTest()
    }

    
}
