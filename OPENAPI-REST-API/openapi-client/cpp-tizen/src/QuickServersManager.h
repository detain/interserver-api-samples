#ifndef _QuickServersManager_H_
#define _QuickServersManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChargeInvoiceRows.h"
#include "DownloadQsBackup_200_response.h"
#include "DownloadQsBackup_request.h"
#include "GetAccountInfo_401_response.h"
#include "QueueResponse.h"
#include "Quickserver.h"
#include "QuickserverOrder.h"
#include "QuickserverRow.h"
#include "QuickserversCancel_200_response.h"
#include "RestoreRequest.h"
#include "ReverseDnsEntries.h"
#include "ServiceOrderPostResponse.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include "VpsBackupRows.h"
#include "VpsTemplatesList.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup QuickServers QuickServers
 * \ingroup Operations
 *  @{
 */
class QuickServersManager {
public:
	QuickServersManager();
	virtual ~QuickServersManager();

/*! \brief Place QuickServer Order. *Synchronous*
 *
 * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addQsSync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);

/*! \brief Place QuickServer Order. *Asynchronous*
 *
 * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addQsAsync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);


/*! \brief Delete QuickServer Backup. *Synchronous*
 *
 * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
 * \param id QuickServer ID number *Required*
 * \param file The backup filename to delete. *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQsBackupSync(char * accessToken,
	int id, std::string file, std::string all, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Delete QuickServer Backup. *Asynchronous*
 *
 * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
 * \param id QuickServer ID number *Required*
 * \param file The backup filename to delete. *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteQsBackupAsync(char * accessToken,
	int id, std::string file, std::string all, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Block QuickServer SMTP. *Synchronous*
 *
 * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsBlockSmtpSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Block QuickServer SMTP. *Asynchronous*
 *
 * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsBlockSmtpAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Disable CD Drive. *Synchronous*
 *
 * Disables the virtual CD drive for the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsDisableCdSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Disable CD Drive. *Asynchronous*
 *
 * Disables the virtual CD drive for the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsDisableCdAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Disable Quotas. *Synchronous*
 *
 * Disables disk quota enforcement for the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsDisableQuotaSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Disable Quotas. *Asynchronous*
 *
 * Disables disk quota enforcement for the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsDisableQuotaAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Eject CD Drive. *Synchronous*
 *
 * Ejects the virtual CD from the QuickServer's CD drive.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsEjectCdSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Eject CD Drive. *Asynchronous*
 *
 * Ejects the virtual CD from the QuickServer's CD drive.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsEjectCdAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Enable Quotas. *Synchronous*
 *
 * Enables disk quota enforcement for the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsEnableQuotaSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Enable Quotas. *Asynchronous*
 *
 * Enables disk quota enforcement for the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsEnableQuotaAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Restart QuickServer. *Synchronous*
 *
 * Restarts the QuickServer. The server will be shut down and started again.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsRestartSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Restart QuickServer. *Asynchronous*
 *
 * Restarts the QuickServer. The server will be shut down and started again.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsRestartAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Start QuickServer. *Synchronous*
 *
 * Powers on the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsStartSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Start QuickServer. *Asynchronous*
 *
 * Powers on the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsStartAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Stop QuickServer. *Synchronous*
 *
 * Powers off the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsStopSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Stop QuickServer. *Asynchronous*
 *
 * Powers off the QuickServer.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doQsStopAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Download QuickServer Backup. *Synchronous*
 *
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
 * \param id QuickServer ID number *Required*
 * \param downloadQsBackupRequest  *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool downloadQsBackupSync(char * accessToken,
	int id, std::shared_ptr<DownloadQsBackup_request> downloadQsBackupRequest, std::string all, 
	void(* handler)(DownloadQsBackup_200_response, Error, void* )
	, void* userData);

/*! \brief Download QuickServer Backup. *Asynchronous*
 *
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
 * \param id QuickServer ID number *Required*
 * \param downloadQsBackupRequest  *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool downloadQsBackupAsync(char * accessToken,
	int id, std::shared_ptr<DownloadQsBackup_request> downloadQsBackupRequest, std::string all, 
	void(* handler)(DownloadQsBackup_200_response, Error, void* )
	, void* userData);


/*! \brief Get QuickServer Ordering Information. *Synchronous*
 *
 * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewQsSync(char * accessToken,
	
	void(* handler)(QuickserverOrder, Error, void* )
	, void* userData);

/*! \brief Get QuickServer Ordering Information. *Asynchronous*
 *
 * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewQsAsync(char * accessToken,
	
	void(* handler)(QuickserverOrder, Error, void* )
	, void* userData);


/*! \brief List QuickServer Backups. *Synchronous*
 *
 * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
 * \param id QuickServer ID number *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsBackupsSync(char * accessToken,
	int id, std::string all, 
	void(* handler)(VpsBackupRows, Error, void* )
	, void* userData);

/*! \brief List QuickServer Backups. *Asynchronous*
 *
 * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
 * \param id QuickServer ID number *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsBackupsAsync(char * accessToken,
	int id, std::string all, 
	void(* handler)(VpsBackupRows, Error, void* )
	, void* userData);


/*! \brief Get QuickServer Hostname. *Synchronous*
 *
 * Retrieves the current hostname and any validation requirements for changing it.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeHostnameSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get QuickServer Hostname. *Asynchronous*
 *
 * Retrieves the current hostname and any validation requirements for changing it.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeHostnameAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Change Root Password Info. *Synchronous*
 *
 * Retrieves instructions or metadata needed to reset the root password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeRootPasswordSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get Change Root Password Info. *Asynchronous*
 *
 * Retrieves instructions or metadata needed to reset the root password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeRootPasswordAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Timezone Info. *Synchronous*
 *
 * Returns the list of available timezones that can be set on the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeTimezoneSync(char * accessToken,
	int id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief Get Timezone Info. *Asynchronous*
 *
 * Returns the list of available timezones that can be set on the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeTimezoneAsync(char * accessToken,
	int id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Webuzo Change Pass Info. *Synchronous*
 *
 * Retrieves instructions or metadata for changing the Webuzo control panel password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeWebuzoPasswordSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Webuzo Change Pass Info. *Asynchronous*
 *
 * Retrieves instructions or metadata for changing the Webuzo control panel password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsChangeWebuzoPasswordAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get QuickServer Order. *Synchronous*
 *
 * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsInfoSync(char * accessToken,
	int id, 
	void(* handler)(Quickserver, Error, void* )
	, void* userData);

/*! \brief Get QuickServer Order. *Asynchronous*
 *
 * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsInfoAsync(char * accessToken,
	int id, 
	void(* handler)(Quickserver, Error, void* )
	, void* userData);


/*! \brief Insert CD Information. *Synchronous*
 *
 * Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsInsertCdSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Insert CD Information. *Asynchronous*
 *
 * Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsInsertCdAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get QuickServer Invoices. *Synchronous*
 *
 * Returns the billing invoices associated with this QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get QuickServer Invoices. *Asynchronous*
 *
 * Returns the billing invoices associated with this QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief List QuickServers. *Synchronous*
 *
 * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsListSync(char * accessToken,
	
	void(* handler)(std::list<QuickserverRow>, Error, void* )
	, void* userData);

/*! \brief List QuickServers. *Asynchronous*
 *
 * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsListAsync(char * accessToken,
	
	void(* handler)(std::list<QuickserverRow>, Error, void* )
	, void* userData);


/*! \brief QuickServer Reinstall OS Options. *Synchronous*
 *
 * Returns the list of available operating system templates for reinstalling the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsReinstallOsSync(char * accessToken,
	int id, 
	void(* handler)(VpsTemplatesList, Error, void* )
	, void* userData);

/*! \brief QuickServer Reinstall OS Options. *Asynchronous*
 *
 * Returns the list of available operating system templates for reinstalling the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsReinstallOsAsync(char * accessToken,
	int id, 
	void(* handler)(VpsTemplatesList, Error, void* )
	, void* userData);


/*! \brief Reset QuickServer Password Info. *Synchronous*
 *
 * Returns information needed before resetting the QuickServer's root password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsResetPasswordSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Reset QuickServer Password Info. *Asynchronous*
 *
 * Returns information needed before resetting the QuickServer's root password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsResetPasswordAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Reverse DNS Info. *Synchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsReverseDnsSync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);

/*! \brief Reverse DNS Info. *Asynchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsReverseDnsAsync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);


/*! \brief VNC Setup Info. *Synchronous*
 *
 * Returns the current VNC connection information for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsSetupVncSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief VNC Setup Info. *Asynchronous*
 *
 * Returns the current VNC connection information for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsSetupVncAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Traffic Usage. *Synchronous*
 *
 * Returns bandwidth traffic usage data for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsTrafficUsageSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get Traffic Usage. *Asynchronous*
 *
 * Returns bandwidth traffic usage data for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsTrafficUsageAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get View Desktop Info. *Synchronous*
 *
 * Returns remote desktop connection information for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsViewDesktopSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get View Desktop Info. *Asynchronous*
 *
 * Returns remote desktop connection information for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsViewDesktopAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Resend QuickServer Welcome Email. *Synchronous*
 *
 * Resends the welcome email containing connection details and credentials for the QuickServer order.
 * \param id Quickserver ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsWelcomeEmailSync(char * accessToken,
	std::string id, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Resend QuickServer Welcome Email. *Asynchronous*
 *
 * Resends the welcome email containing connection details and credentials for the QuickServer order.
 * \param id Quickserver ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getQsWelcomeEmailAsync(char * accessToken,
	std::string id, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Create QuickServer Backup. *Synchronous*
 *
 * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsBackupSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Create QuickServer Backup. *Asynchronous*
 *
 * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsBackupAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Update QuickServer Hostname. *Synchronous*
 *
 * Submits a hostname change request for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeHostnameSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Update QuickServer Hostname. *Asynchronous*
 *
 * Submits a hostname change request for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeHostnameAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Change Root Password. *Synchronous*
 *
 * Triggers a root password reset for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeRootPasswordSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Change Root Password. *Asynchronous*
 *
 * Triggers a root password reset for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeRootPasswordAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Change QuickServer Timezone. *Synchronous*
 *
 * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
 * \param id QuickServer ID number *Required*
 * \param timezone The time zone *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeTimezoneSync(char * accessToken,
	int id, std::string timezone, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Change QuickServer Timezone. *Asynchronous*
 *
 * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
 * \param id QuickServer ID number *Required*
 * \param timezone The time zone *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeTimezoneAsync(char * accessToken,
	int id, std::string timezone, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Change Webuzo Password. *Synchronous*
 *
 * Resets the Webuzo control panel password for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeWebuzoPasswordSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Change Webuzo Password. *Asynchronous*
 *
 * Resets the Webuzo control panel password for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsChangeWebuzoPasswordAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Insert CD in QuickServer. *Synchronous*
 *
 * Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsInsertCdSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Insert CD in QuickServer. *Asynchronous*
 *
 * Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsInsertCdAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Reinstall QuickServer OS. *Synchronous*
 *
 * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsReinstallOsSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Reinstall QuickServer OS. *Asynchronous*
 *
 * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsReinstallOsAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Reset QuickServer Password. *Synchronous*
 *
 * Resets the root password on the QuickServer to a new randomly generated password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsResetPasswordSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Reset QuickServer Password. *Asynchronous*
 *
 * Resets the root password on the QuickServer to a new randomly generated password.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsResetPasswordAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Update Reverse DNS. *Synchronous*
 *
 * Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
 * \param id QuickServer ID number *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsReverseDnsSync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Update Reverse DNS. *Asynchronous*
 *
 * Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
 * \param id QuickServer ID number *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsReverseDnsAsync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Setup VNC. *Synchronous*
 *
 * Sets up or refreshes the VNC console connection for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsSetupVncSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Setup VNC. *Asynchronous*
 *
 * Sets up or refreshes the VNC console connection for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsSetupVncAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Search Traffic Usage. *Synchronous*
 *
 * Searches and filters the QuickServer's bandwidth traffic usage data by date range.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsTrafficUsageSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Search Traffic Usage. *Asynchronous*
 *
 * Searches and filters the QuickServer's bandwidth traffic usage data by date range.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsTrafficUsageAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update View Desktop. *Synchronous*
 *
 * Updates or refreshes the remote desktop session for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsViewDesktopSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update View Desktop. *Asynchronous*
 *
 * Updates or refreshes the remote desktop session for the QuickServer.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQsViewDesktopAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Restore QuickServer from Backup. *Synchronous*
 *
 * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
 * \param id QuickServer ID number *Required*
 * \param restoreRequest QuickServer Restore request *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQuickServerRestoreSync(char * accessToken,
	int id, std::shared_ptr<RestoreRequest> restoreRequest, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Restore QuickServer from Backup. *Asynchronous*
 *
 * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
 * \param id QuickServer ID number *Required*
 * \param restoreRequest QuickServer Restore request *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postQuickServerRestoreAsync(char * accessToken,
	int id, std::shared_ptr<RestoreRequest> restoreRequest, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Validate QuickServer Order. *Synchronous*
 *
 * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putQsSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate QuickServer Order. *Asynchronous*
 *
 * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putQsAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Cancel QuickServer Order. *Synchronous*
 *
 * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool quickserversCancelSync(char * accessToken,
	int id, 
	void(* handler)(QuickserversCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel QuickServer Order. *Asynchronous*
 *
 * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 * \param id QuickServer ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool quickserversCancelAsync(char * accessToken,
	int id, 
	void(* handler)(QuickserversCancel_200_response, Error, void* )
	, void* userData);


/*! \brief Update QuickServer Order. *Synchronous*
 *
 * Updates QuickServer metadata or stored settings associated with the order.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQsInfoSync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update QuickServer Order. *Asynchronous*
 *
 * Updates QuickServer metadata or stored settings associated with the order.
 * \param id QuickServer ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateQsInfoAsync(char * accessToken,
	std::string id, 
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
#endif /* QuickServersManager_H_ */
