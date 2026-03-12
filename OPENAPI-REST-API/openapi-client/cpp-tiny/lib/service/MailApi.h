#ifndef TINY_CPP_CLIENT_MailApi_H_
#define TINY_CPP_CLIENT_MailApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "ChargeInvoiceRows.h"
#include "DenyRuleNew.h"
#include "DenyRuleRecord.h"
#include "GenericResponse.h"
#include "GetAccountInfo_401_response.h"
#include "MailAlertRequest.h"
#include "MailAlertUpdateRequest.h"
#include "MailAlertsResponse.h"
#include "MailBlocks.h"
#include "MailCancel_200_response.h"
#include "MailDelistRequest.h"
#include "MailDelistResponse.h"
#include "MailDeliverabilityResponse.h"
#include "MailLog.h"
#include "MailOrder.h"
#include "MailRow.h"
#include "MailSchema.h"
#include "MailStatsType.h"
#include "SendMail.h"
#include "SendMailAdv.h"
#include "SuccessTextResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class MailApi : public Service {
public:
    MailApi() = default;

    virtual ~MailApi() = default;

    /**
    * Place Mail Order.
    *
    * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
    */
    Response<
            String
        >
    addMail(
    );
    /**
    * Create Deny Rule.
    *
    * Adds a new deny rule to automatically block emails that match the specified criteria.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param denyRuleNew These are the fields needed to create a new email deny rule. *Required*
    */
    Response<
                GenericResponse
        >
    addRule(
            
            int id
            , 
            
            DenyRuleNew denyRuleNew
            
    );
    /**
    * Create Mail Alert.
    *
    * Creates a new alert for the mail service, such as delivery or quota notifications.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param mailAlertRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    createMailAlert(
            
            int id
            , 
            
            MailAlertRequest mailAlertRequest
            
    );
    /**
    * Delete Mail Alert.
    *
    * Deletes an existing alert definition for the mail service.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param alertId Alert ID to delete. *Required*
    */
    Response<
                SuccessTextResponse
        >
    deleteMailAlert(
            
            int id
            , 
            
            int alertId
            
    );
    /**
    * Delete Deny Rule.
    *
    * Removes a deny rule from the mail service.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param rule The ID of the Rules entry. *Required*
    */
    Response<
                GenericResponse
        >
    deleteRule(
            
            int id
            , 
            
            std::string rule
            
    );
    /**
    * Remove Email Address from Block List.
    *
    * Removes an email address from the mail service's block lists.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param email an email address
    */
    Response<
                GenericResponse
        >
    delistBlock(
            
            int id
            , 
            
            std::string email
            
    );
    /**
    * List Mail Alerts.
    *
    * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                MailAlertsResponse
        >
    getMailAlerts(
            
            int id
            
    );
    /**
    * List Blocked Email Addresses.
    *
    * Displays a listing of the blocked email addresses
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                MailBlocks
        >
    getMailBlocks(
            
            int id
            
    );
    /**
    * Get Delist Status.
    *
    * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                MailDelistResponse
        >
    getMailDelist(
            
            int id
            
    );
    /**
    * Get Deliverability Metrics.
    *
    * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                MailDeliverabilityResponse
        >
    getMailDeliverability(
            
            int id
            
    );
    /**
    * Get Mail Order.
    *
    * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                MailSchema
        >
    getMailInfo(
            
            int id
            
    );
    /**
    * Get Mail Invoices.
    *
    * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getMailInvoices(
            
            int id
            
    );
    /**
    * List Mail Orders.
    *
    * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
    */
    Response<
                    std::list<MailRow>
        >
    getMailList(
    );
    /**
    * Resend Mail Welcome Email.
    *
    * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getMailWelcomeEmail(
            
            int id
            
    );
    /**
    * Get Mail Ordering Information.
    *
    * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
    */
    Response<
                MailOrder
        >
    getNewMail(
    );
    /**
    * List Deny Rules.
    *
    * Returns a listing of all the deny block rules configured for this mail service.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                    std::list<DenyRuleRecord>
        >
    getRules(
            
            int id
            
    );
    /**
    * Get Mail Usage Statistics.
    *
    * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param time The timeframe for the statistics.
    */
    Response<
                MailStatsType
        >
    getStats(
            
            int id
            , 
            
            std::string time
            
    );
    /**
    * Cancel Mail.
    *
    * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                MailCancel_200_response
        >
    mailCancel(
            
            int id
            
    );
    /**
    * Delist a Blocked Sender.
    *
    * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param mailDelistRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    postMailDelist(
            
            int id
            , 
            
            MailDelistRequest mailDelistRequest
            
    );
    /**
    * Validate Mail Order.
    *
    * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
    */
    Response<
            String
        >
    putMail(
    );
    /**
    * Reset Mail Password.
    *
    * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
                SuccessTextResponse
        >
    resetMailPassword(
            
            int id
            
    );
    /**
    * Send Email with Advanced Options.
    *
    * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param sendMailAdv  *Required*
    */
    Response<
                GenericResponse
        >
    sendAdvMail(
            
            int id
            , 
            
            SendMailAdv sendMailAdv
            
    );
    /**
    * Send Email.
    *
    * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param sendMail  *Required*
    */
    Response<
                GenericResponse
        >
    sendMail(
            
            int id
            , 
            
            SendMail sendMail
            
    );
    /**
    * Update Mail Alert.
    *
    * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param mailAlertUpdateRequest  *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateMailAlert(
            
            int id
            , 
            
            MailAlertUpdateRequest mailAlertUpdateRequest
            
    );
    /**
    * Update Mail Order.
    *
    * Updates mail service metadata for the order, such as stored settings or account details.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    */
    Response<
            String
        >
    updateMailInfo(
            
            std::string id
            
    );
    /**
    * View Mail Log.
    *
    * Returns a paginated log of emails sent through this mail service, with optional filtering by sender, recipient, date range, and delivery status.
    * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
    * \param id2 The ID of your mail order this will be sent through.
    * \param origin originating ip address sending mail
    * \param mx mx record mail was sent to
    * \param from from email address
    * \param to to/destination email address
    * \param subject subject containing this string
    * \param mailid mail id
    * \param skip number of records to skip for pagination
    * \param limit maximum number of records to return
    * \param startDate earliest date to get emails in unix timestamp format
    * \param endDate Latest date to get emails in unix timestamp format.
    * \param delivered Filter emails by whether or not they were delivered.
    */
    Response<
                MailLog
        >
    viewMailLog(
            
            int id
            , 
            
            long id2
            , 
            
            std::string origin
            , 
            
            std::string mx
            , 
            
            std::string from
            , 
            
            std::string to
            , 
            
            std::string subject
            , 
            
            std::string mailid
            , 
            
            int skip
            , 
            
            int limit
            , 
            
            long startDate
            , 
            
            long endDate
            , 
            
            std::string delivered
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_MailApi_H_ */