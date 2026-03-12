#ifndef _MailManager_H_
#define _MailManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
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
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Mail Mail
 * \ingroup Operations
 *  @{
 */
class MailManager {
public:
	MailManager();
	virtual ~MailManager();

/*! \brief Place Mail Order. *Synchronous*
 *
 * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMailSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Place Mail Order. *Asynchronous*
 *
 * Places a Mail Baby order. On success, invoices are created for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addMailAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Create Deny Rule. *Synchronous*
 *
 * Adds a new deny rule to automatically block emails that match the specified criteria.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param denyRuleNew These are the fields needed to create a new email deny rule. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addRuleSync(char * accessToken,
	int id, std::shared_ptr<DenyRuleNew> denyRuleNew, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);

/*! \brief Create Deny Rule. *Asynchronous*
 *
 * Adds a new deny rule to automatically block emails that match the specified criteria.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param denyRuleNew These are the fields needed to create a new email deny rule. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addRuleAsync(char * accessToken,
	int id, std::shared_ptr<DenyRuleNew> denyRuleNew, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);


/*! \brief Create Mail Alert. *Synchronous*
 *
 * Creates a new alert for the mail service, such as delivery or quota notifications.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param mailAlertRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createMailAlertSync(char * accessToken,
	int id, std::shared_ptr<MailAlertRequest> mailAlertRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Create Mail Alert. *Asynchronous*
 *
 * Creates a new alert for the mail service, such as delivery or quota notifications.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param mailAlertRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createMailAlertAsync(char * accessToken,
	int id, std::shared_ptr<MailAlertRequest> mailAlertRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Delete Mail Alert. *Synchronous*
 *
 * Deletes an existing alert definition for the mail service.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param alertId Alert ID to delete. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteMailAlertSync(char * accessToken,
	int id, int alertId, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Delete Mail Alert. *Asynchronous*
 *
 * Deletes an existing alert definition for the mail service.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param alertId Alert ID to delete. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteMailAlertAsync(char * accessToken,
	int id, int alertId, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Delete Deny Rule. *Synchronous*
 *
 * Removes a deny rule from the mail service.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param rule The ID of the Rules entry. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRuleSync(char * accessToken,
	int id, std::string rule, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);

/*! \brief Delete Deny Rule. *Asynchronous*
 *
 * Removes a deny rule from the mail service.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param rule The ID of the Rules entry. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRuleAsync(char * accessToken,
	int id, std::string rule, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);


/*! \brief Remove Email Address from Block List. *Synchronous*
 *
 * Removes an email address from the mail service's block lists.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param email an email address
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool delistBlockSync(char * accessToken,
	int id, std::string email, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);

/*! \brief Remove Email Address from Block List. *Asynchronous*
 *
 * Removes an email address from the mail service's block lists.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param email an email address
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool delistBlockAsync(char * accessToken,
	int id, std::string email, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);


/*! \brief List Mail Alerts. *Synchronous*
 *
 * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailAlertsSync(char * accessToken,
	int id, 
	void(* handler)(MailAlertsResponse, Error, void* )
	, void* userData);

/*! \brief List Mail Alerts. *Asynchronous*
 *
 * Returns the alert configuration for the mail service. Use the alert IDs from this response with PUT or DELETE to update or remove alerts.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailAlertsAsync(char * accessToken,
	int id, 
	void(* handler)(MailAlertsResponse, Error, void* )
	, void* userData);


/*! \brief List Blocked Email Addresses. *Synchronous*
 *
 * Displays a listing of the blocked email addresses
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailBlocksSync(char * accessToken,
	int id, 
	void(* handler)(MailBlocks, Error, void* )
	, void* userData);

/*! \brief List Blocked Email Addresses. *Asynchronous*
 *
 * Displays a listing of the blocked email addresses
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailBlocksAsync(char * accessToken,
	int id, 
	void(* handler)(MailBlocks, Error, void* )
	, void* userData);


/*! \brief Get Delist Status. *Synchronous*
 *
 * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailDelistSync(char * accessToken,
	int id, 
	void(* handler)(MailDelistResponse, Error, void* )
	, void* userData);

/*! \brief Get Delist Status. *Asynchronous*
 *
 * Returns the current blocklist and delisting information for the mail service, including recent local and trap blocks.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailDelistAsync(char * accessToken,
	int id, 
	void(* handler)(MailDelistResponse, Error, void* )
	, void* userData);


/*! \brief Get Deliverability Metrics. *Synchronous*
 *
 * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailDeliverabilitySync(char * accessToken,
	int id, 
	void(* handler)(MailDeliverabilityResponse, Error, void* )
	, void* userData);

/*! \brief Get Deliverability Metrics. *Asynchronous*
 *
 * Returns deliverability statistics such as delivered vs. bounced counts and percentages. Use query filters to pivot the response by domain or sender.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailDeliverabilityAsync(char * accessToken,
	int id, 
	void(* handler)(MailDeliverabilityResponse, Error, void* )
	, void* userData);


/*! \brief Get Mail Order. *Synchronous*
 *
 * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailInfoSync(char * accessToken,
	int id, 
	void(* handler)(MailSchema, Error, void* )
	, void* userData);

/*! \brief Get Mail Order. *Asynchronous*
 *
 * Returns detailed information for the mail service, including credentials and service metadata required to configure your sending client.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailInfoAsync(char * accessToken,
	int id, 
	void(* handler)(MailSchema, Error, void* )
	, void* userData);


/*! \brief Get Mail Invoices. *Synchronous*
 *
 * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get Mail Invoices. *Asynchronous*
 *
 * Retrieves invoices associated with the mail service. Use these invoices to validate billing status or initiate payment.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief List Mail Orders. *Synchronous*
 *
 * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailListSync(char * accessToken,
	
	void(* handler)(std::list<MailRow>, Error, void* )
	, void* userData);

/*! \brief List Mail Orders. *Asynchronous*
 *
 * Returns the Mail Baby services on your account. Use the `mail_id` from this list with `/mail/{id}` to retrieve service details, and with `/mail/{id}/stats` or `/mail/{id}/log` to review delivery statistics.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailListAsync(char * accessToken,
	
	void(* handler)(std::list<MailRow>, Error, void* )
	, void* userData);


/*! \brief Resend Mail Welcome Email. *Synchronous*
 *
 * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend Mail Welcome Email. *Asynchronous*
 *
 * Resends the welcome email for the Mail Baby service. The email contains SMTP credentials and configuration instructions.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMailWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get Mail Ordering Information. *Synchronous*
 *
 * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewMailSync(char * accessToken,
	
	void(* handler)(MailOrder, Error, void* )
	, void* userData);

/*! \brief Get Mail Ordering Information. *Asynchronous*
 *
 * Returns available Mail Baby plans and ordering metadata. Use the service type IDs from this response when validating or placing a new mail order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewMailAsync(char * accessToken,
	
	void(* handler)(MailOrder, Error, void* )
	, void* userData);


/*! \brief List Deny Rules. *Synchronous*
 *
 * Returns a listing of all the deny block rules configured for this mail service.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRulesSync(char * accessToken,
	int id, 
	void(* handler)(std::list<DenyRuleRecord>, Error, void* )
	, void* userData);

/*! \brief List Deny Rules. *Asynchronous*
 *
 * Returns a listing of all the deny block rules configured for this mail service.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRulesAsync(char * accessToken,
	int id, 
	void(* handler)(std::list<DenyRuleRecord>, Error, void* )
	, void* userData);


/*! \brief Get Mail Usage Statistics. *Synchronous*
 *
 * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param time The timeframe for the statistics.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStatsSync(char * accessToken,
	int id, std::string time, 
	void(* handler)(MailStatsType, Error, void* )
	, void* userData);

/*! \brief Get Mail Usage Statistics. *Asynchronous*
 *
 * Returns usage statistics for the mail service over the requested time period, including send counts, delivery rates, and quota consumption.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param time The timeframe for the statistics.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getStatsAsync(char * accessToken,
	int id, std::string time, 
	void(* handler)(MailStatsType, Error, void* )
	, void* userData);


/*! \brief Cancel Mail. *Synchronous*
 *
 * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool mailCancelSync(char * accessToken,
	int id, 
	void(* handler)(MailCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel Mail. *Asynchronous*
 *
 * Cancels a Mail Baby service. After cancellation the mail credentials are deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool mailCancelAsync(char * accessToken,
	int id, 
	void(* handler)(MailCancel_200_response, Error, void* )
	, void* userData);


/*! \brief Delist a Blocked Sender. *Synchronous*
 *
 * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param mailDelistRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postMailDelistSync(char * accessToken,
	int id, std::shared_ptr<MailDelistRequest> mailDelistRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Delist a Blocked Sender. *Asynchronous*
 *
 * Removes an email address from blocklists for the mail service. Provide the `unblock` email address from the delist status response.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param mailDelistRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postMailDelistAsync(char * accessToken,
	int id, std::shared_ptr<MailDelistRequest> mailDelistRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Validate Mail Order. *Synchronous*
 *
 * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putMailSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate Mail Order. *Asynchronous*
 *
 * Validates a Mail Baby order and returns pricing or errors. Use this before placing the final order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putMailAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Reset Mail Password. *Synchronous*
 *
 * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool resetMailPasswordSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Reset Mail Password. *Asynchronous*
 *
 * Resets the Mail Baby service password and emails the new password to the account owner. Use `/mail/{id}` to retrieve updated credential data after the reset.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool resetMailPasswordAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Send Email with Advanced Options. *Synchronous*
 *
 * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param sendMailAdv  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendAdvMailSync(char * accessToken,
	int id, std::shared_ptr<SendMailAdv> sendMailAdv, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);

/*! \brief Send Email with Advanced Options. *Asynchronous*
 *
 * Sends an email through one of your mail orders with support for file attachments, CC, BCC, and other advanced options. For simple single-recipient sends, use `POST /mail/{id}/send`.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param sendMailAdv  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendAdvMailAsync(char * accessToken,
	int id, std::shared_ptr<SendMailAdv> sendMailAdv, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);


/*! \brief Send Email. *Synchronous*
 *
 * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param sendMail  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMailSync(char * accessToken,
	int id, std::shared_ptr<SendMail> sendMail, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);

/*! \brief Send Email. *Asynchronous*
 *
 * Sends an email through one of your mail orders. For multiple recipients or file attachments, use `POST /mail/{id}/advsend` instead.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param sendMail  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMailAsync(char * accessToken,
	int id, std::shared_ptr<SendMail> sendMail, 
	void(* handler)(GenericResponse, Error, void* )
	, void* userData);


/*! \brief Update Mail Alert. *Synchronous*
 *
 * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param mailAlertUpdateRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMailAlertSync(char * accessToken,
	int id, std::shared_ptr<MailAlertUpdateRequest> mailAlertUpdateRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Mail Alert. *Asynchronous*
 *
 * Updates an existing alert definition for the mail service. Provide the `alert_id` returned by the list response along with updated fields.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param mailAlertUpdateRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMailAlertAsync(char * accessToken,
	int id, std::shared_ptr<MailAlertUpdateRequest> mailAlertUpdateRequest, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Update Mail Order. *Synchronous*
 *
 * Updates mail service metadata for the order, such as stored settings or account details.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMailInfoSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update Mail Order. *Asynchronous*
 *
 * Updates mail service metadata for the order, such as stored settings or account details.
 * \param id The mail service ID. Use `mail_id` from `GET /mail`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMailInfoAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief View Mail Log. *Synchronous*
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
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool viewMailLogSync(char * accessToken,
	int id, long long id2, std::string origin, std::string mx, std::string from, std::string to, std::string subject, std::string mailid, int skip, int limit, long long startDate, long long endDate, std::string delivered, 
	void(* handler)(MailLog, Error, void* )
	, void* userData);

/*! \brief View Mail Log. *Asynchronous*
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
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool viewMailLogAsync(char * accessToken,
	int id, long long id2, std::string origin, std::string mx, std::string from, std::string to, std::string subject, std::string mailid, int skip, int limit, long long startDate, long long endDate, std::string delivered, 
	void(* handler)(MailLog, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* MailManager_H_ */
