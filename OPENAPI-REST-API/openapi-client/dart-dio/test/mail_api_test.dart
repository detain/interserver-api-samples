import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for MailApi
void main() {
  final instance = Openapi().getMailApi();

  group(MailApi, () {
    // Place Mail Order
    //
    // Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
    //
    //Future<ServiceOrderPostResponse> addMail() async
    test('test addMail', () async {
      // TODO
    });

    // Create Deny Rule
    //
    // Adds a new deny rule to automatically block emails that match the specified criteria.
    //
    //Future<GenericResponse> addRule(int id, DenyRuleNew denyRuleNew) async
    test('test addRule', () async {
      // TODO
    });

    // Create Mail Alert
    //
    // Creates a new alert for the mail service, such as delivery or quota notifications.
    //
    //Future<SuccessTextResponse> createMailAlert(int id, MailAlertRequest mailAlertRequest) async
    test('test createMailAlert', () async {
      // TODO
    });

    // Delete Mail Alert
    //
    // Deletes an existing alert definition for the mail service.
    //
    //Future<SuccessTextResponse> deleteMailAlert(int id, int alertId) async
    test('test deleteMailAlert', () async {
      // TODO
    });

    // Delete Deny Rule
    //
    // Removes a deny rule from the mail service.
    //
    //Future<GenericResponse> deleteRule(int id, String rule) async
    test('test deleteRule', () async {
      // TODO
    });

    // Remove Email Address from Block List
    //
    // Removes an email address from the mail service's block lists.
    //
    //Future<GenericResponse> delistBlock(int id, { String email }) async
    test('test delistBlock', () async {
      // TODO
    });

    // List Mail Alerts
    //
    // Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
    //
    //Future<MailAlertsResponse> getMailAlerts(int id) async
    test('test getMailAlerts', () async {
      // TODO
    });

    // List Blocked Email Addresses
    //
    // Displays a listing of the blocked email addresses
    //
    //Future<MailBlocks> getMailBlocks(int id) async
    test('test getMailBlocks', () async {
      // TODO
    });

    // Get Delist Status
    //
    // Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
    //
    //Future<MailDelistResponse> getMailDelist(int id) async
    test('test getMailDelist', () async {
      // TODO
    });

    // Get Deliverability Metrics
    //
    // Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
    //
    //Future<MailDeliverabilityResponse> getMailDeliverability(int id) async
    test('test getMailDeliverability', () async {
      // TODO
    });

    // Get Mail Order
    //
    // Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
    //
    //Future<MailSchema> getMailInfo(int id) async
    test('test getMailInfo', () async {
      // TODO
    });

    // Get Mail Invoices
    //
    // Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
    //
    //Future<ChargeInvoiceRows> getMailInvoices(int id) async
    test('test getMailInvoices', () async {
      // TODO
    });

    // List Mail Orders
    //
    // Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
    //
    //Future<BuiltList<MailRow>> getMailList() async
    test('test getMailList', () async {
      // TODO
    });

    // Resend Mail Welcome Email
    //
    // Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
    //
    //Future<SuccessTextResponse> getMailWelcomeEmail(int id) async
    test('test getMailWelcomeEmail', () async {
      // TODO
    });

    // Get Mail Ordering Information
    //
    // Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
    //
    //Future<MailOrder> getNewMail() async
    test('test getNewMail', () async {
      // TODO
    });

    // List Deny Rules
    //
    // Returns a listing of all the deny block rules configured for this mail service.
    //
    //Future<BuiltList<DenyRuleRecord>> getRules(int id) async
    test('test getRules', () async {
      // TODO
    });

    // Get Mail Usage Statistics
    //
    // Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
    //
    //Future<MailStatsType> getStats(int id, { String time }) async
    test('test getStats', () async {
      // TODO
    });

    // Cancel Mail
    //
    // Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
    //
    //Future<MailCancel200Response> mailCancel(int id) async
    test('test mailCancel', () async {
      // TODO
    });

    // Delist a Blocked Sender
    //
    // Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
    //
    //Future<SuccessTextResponse> postMailDelist(int id, MailDelistRequest mailDelistRequest) async
    test('test postMailDelist', () async {
      // TODO
    });

    // Validate Mail Order
    //
    // Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
    //
    //Future putMail() async
    test('test putMail', () async {
      // TODO
    });

    // Reset Mail Password
    //
    // Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
    //
    //Future<SuccessTextResponse> resetMailPassword(int id) async
    test('test resetMailPassword', () async {
      // TODO
    });

    // Send Email with Advanced Options
    //
    // Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
    //
    //Future<GenericResponse> sendAdvMail(int id, SendMailAdv sendMailAdv) async
    test('test sendAdvMail', () async {
      // TODO
    });

    // Send Email
    //
    // Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
    //
    //Future<GenericResponse> sendMail(int id, SendMail sendMail) async
    test('test sendMail', () async {
      // TODO
    });

    // Update Mail Alert
    //
    // Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
    //
    //Future<SuccessTextResponse> updateMailAlert(int id, MailAlertUpdateRequest mailAlertUpdateRequest) async
    test('test updateMailAlert', () async {
      // TODO
    });

    // Update Mail Order
    //
    // Updates mail service metadata for the order, such as stored settings or account details.
    //
    //Future<SuccessTextResponse> updateMailInfo(String id) async
    test('test updateMailInfo', () async {
      // TODO
    });

    // View Mail Log
    //
    // Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
    //
    //Future<MailLog> viewMailLog(int id, { int id2, String origin, String mx, String from, String to, String subject, String mailid, String messageId, String replyto, String headerfrom, int delivered, int skip, int limit, ViewMailLogStartDateParameter startDate, ViewMailLogStartDateParameter endDate, String sort, String dir, String groupby }) async
    test('test viewMailLog', () async {
      // TODO
    });

  });
}
