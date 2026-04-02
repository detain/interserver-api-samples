#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/charge_invoice_rows.h"
#include "../model/deny_rule_new.h"
#include "../model/deny_rule_record.h"
#include "../model/generic_response.h"
#include "../model/get_account_info_401_response.h"
#include "../model/mail_alert_request.h"
#include "../model/mail_alert_update_request.h"
#include "../model/mail_alerts_response.h"
#include "../model/mail_blocks.h"
#include "../model/mail_cancel_200_response.h"
#include "../model/mail_delist_request.h"
#include "../model/mail_delist_response.h"
#include "../model/mail_deliverability_response.h"
#include "../model/mail_log.h"
#include "../model/mail_order.h"
#include "../model/mail_row.h"
#include "../model/mail_schema.h"
#include "../model/mail_stats_type.h"
#include "../model/send_mail.h"
#include "../model/send_mail_adv.h"
#include "../model/service_order_post_response.h"
#include "../model/success_text_response.h"
#include "../model/view_mail_log_start_date_parameter.h"

// Enum TIME for MailAPI_getStats
typedef enum  { interserver_management_api_getStats_TIME_NULL = 0, interserver_management_api_getStats_TIME_all, interserver_management_api_getStats_TIME_billing, interserver_management_api_getStats_TIME_month, interserver_management_api_getStats_TIME__7d, interserver_management_api_getStats_TIME__24h, interserver_management_api_getStats_TIME__1d, interserver_management_api_getStats_TIME__1h } interserver_management_api_getStats_time_e;

// Enum DELIVERED for MailAPI_viewMailLog
typedef enum  { interserver_management_api_viewMailLog_DELIVERED_NULL = 0, interserver_management_api_viewMailLog_DELIVERED__0, interserver_management_api_viewMailLog_DELIVERED__1 } interserver_management_api_viewMailLog_delivered_e;

// Enum SORT for MailAPI_viewMailLog
typedef enum  { interserver_management_api_viewMailLog_SORT_NULL = 0, interserver_management_api_viewMailLog_SORT_time } interserver_management_api_viewMailLog_sort_e;

// Enum DIR for MailAPI_viewMailLog
typedef enum  { interserver_management_api_viewMailLog_DIR_NULL = 0, interserver_management_api_viewMailLog_DIR_asc, interserver_management_api_viewMailLog_DIR_desc } interserver_management_api_viewMailLog_dir_e;

// Enum GROUPBY for MailAPI_viewMailLog
typedef enum  { interserver_management_api_viewMailLog_GROUPBY_NULL = 0, interserver_management_api_viewMailLog_GROUPBY_message, interserver_management_api_viewMailLog_GROUPBY_recipient } interserver_management_api_viewMailLog_groupby_e;


// Place Mail Order
//
// Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
//
service_order_post_response_t*
MailAPI_addMail(apiClient_t *apiClient);


// Create Deny Rule
//
// Adds a new deny rule to automatically block emails that match the specified criteria.
//
generic_response_t*
MailAPI_addRule(apiClient_t *apiClient, int *id, deny_rule_new_t *deny_rule_new);


// Create Mail Alert
//
// Creates a new alert for the mail service, such as delivery or quota notifications.
//
success_text_response_t*
MailAPI_createMailAlert(apiClient_t *apiClient, int *id, mail_alert_request_t *mail_alert_request);


// Delete Mail Alert
//
// Deletes an existing alert definition for the mail service.
//
success_text_response_t*
MailAPI_deleteMailAlert(apiClient_t *apiClient, int *id, int *alert_id);


// Delete Deny Rule
//
// Removes a deny rule from the mail service.
//
generic_response_t*
MailAPI_deleteRule(apiClient_t *apiClient, int *id, char *rule);


// Remove Email Address from Block List
//
// Removes an email address from the mail service's block lists.
//
generic_response_t*
MailAPI_delistBlock(apiClient_t *apiClient, int *id, char *email);


// List Mail Alerts
//
// Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
//
mail_alerts_response_t*
MailAPI_getMailAlerts(apiClient_t *apiClient, int *id);


// List Blocked Email Addresses
//
// Displays a listing of the blocked email addresses
//
mail_blocks_t*
MailAPI_getMailBlocks(apiClient_t *apiClient, int *id);


// Get Delist Status
//
// Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
//
mail_delist_response_t*
MailAPI_getMailDelist(apiClient_t *apiClient, int *id);


// Get Deliverability Metrics
//
// Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
//
mail_deliverability_response_t*
MailAPI_getMailDeliverability(apiClient_t *apiClient, int *id);


// Get Mail Order
//
// Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
//
mail_schema_t*
MailAPI_getMailInfo(apiClient_t *apiClient, int *id);


// Get Mail Invoices
//
// Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
//
charge_invoice_rows_t*
MailAPI_getMailInvoices(apiClient_t *apiClient, int *id);


// List Mail Orders
//
// Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
//
list_t*
MailAPI_getMailList(apiClient_t *apiClient);


// Resend Mail Welcome Email
//
// Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
//
success_text_response_t*
MailAPI_getMailWelcomeEmail(apiClient_t *apiClient, int *id);


// Get Mail Ordering Information
//
// Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
//
mail_order_t*
MailAPI_getNewMail(apiClient_t *apiClient);


// List Deny Rules
//
// Returns a listing of all the deny block rules configured for this mail service.
//
list_t*
MailAPI_getRules(apiClient_t *apiClient, int *id);


// Get Mail Usage Statistics
//
// Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
//
mail_stats_type_t*
MailAPI_getStats(apiClient_t *apiClient, int *id, interserver_management_api_getStats_time_e time);


// Cancel Mail
//
// Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
//
mail_cancel_200_response_t*
MailAPI_mailCancel(apiClient_t *apiClient, int *id);


// Delist a Blocked Sender
//
// Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
//
success_text_response_t*
MailAPI_postMailDelist(apiClient_t *apiClient, int *id, mail_delist_request_t *mail_delist_request);


// Validate Mail Order
//
// Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
//
void
MailAPI_putMail(apiClient_t *apiClient);


// Reset Mail Password
//
// Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
//
success_text_response_t*
MailAPI_resetMailPassword(apiClient_t *apiClient, int *id);


// Send Email with Advanced Options
//
// Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
//
generic_response_t*
MailAPI_sendAdvMail(apiClient_t *apiClient, int *id, send_mail_adv_t *send_mail_adv);


// Send Email
//
// Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
//
generic_response_t*
MailAPI_sendMail(apiClient_t *apiClient, int *id, send_mail_t *send_mail);


// Update Mail Alert
//
// Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
//
success_text_response_t*
MailAPI_updateMailAlert(apiClient_t *apiClient, int *id, mail_alert_update_request_t *mail_alert_update_request);


// Update Mail Order
//
// Updates mail service metadata for the order, such as stored settings or account details.
//
success_text_response_t*
MailAPI_updateMailInfo(apiClient_t *apiClient, char *id);


// View Mail Log
//
// Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.  **Row grouping** is controlled by the `groupby` parameter.  By default (`groupby=recipient`), the response contains one row per delivery attempt — so a single message sent to 4 recipients produces 4 rows, each with its own `recipient`, `delivered`, `response`, and `mxHostname` values.  Set `groupby=message` to collapse to one row per message (delivery fields will reflect one arbitrary recipient).  **Pagination** is controlled by `skip` and `limit`.  The `total` in the response reflects the row count **after** grouping, so it matches the number of pages you need to fetch.  **Date filtering** accepts either a Unix timestamp (integer) or a date string parseable by PHP `strtotime()` such as `2024-01-15`, `last monday`, or `2024-01-01 00:00:00`.  Examples: `startDate=1704067200&endDate=1706745599` or `startDate=2024-01-01&endDate=2024-01-31`.  **Sorting** is controlled by `sort` and `dir`.  Currently the only sort key is `time` (default), which orders by internal row ID.  **Delivery status** can be filtered with the `delivered` parameter: `delivered=1` returns only successfully delivered messages; `delivered=0` returns messages still in queue or that failed.  **Address filtering** distinguishes between the SMTP envelope address (`from`, `to`) and message headers (`headerfrom` for the `From:` header, `replyto` for `Reply-To:`). These may differ when a message is sent on behalf of another address.  The `mailid` parameter corresponds to the `id` field in the returned `MailLogEntry` objects, **not** the `_id` field.  It also matches the transaction ID returned in the `text` field of a successful send response.  The `messageId` parameter searches the `Message-ID` email header (case-insensitive substring match). 
//
mail_log_t*
MailAPI_viewMailLog(apiClient_t *apiClient, int *id, long id2, char *origin, char *mx, char *from, char *to, char *subject, char *mailid, char *messageId, char *replyto, char *headerfrom, int *delivered, int *skip, int *limit, view_mail_log_start_date_parameter_t *startDate, view_mail_log_start_date_parameter_t *endDate, interserver_management_api_viewMailLog_sort_e sort, interserver_management_api_viewMailLog_dir_e dir, interserver_management_api_viewMailLog_groupby_e groupby);


