#ifndef _VPSManager_H_
#define _VPSManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChargeInvoiceRows.h"
#include "DownloadQsBackup_200_response.h"
#include "DownloadQsBackup_request.h"
#include "GetAccountInfo_401_response.h"
#include "QueueResponse.h"
#include "RestoreRequest.h"
#include "ReverseDnsEntries.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include "VPSCancel_200_response.h"
#include "Vps.h"
#include "VpsBackupRows.h"
#include "VpsOrder.h"
#include "VpsOrderPostRequest.h"
#include "VpsOrderPutRequest.h"
#include "VpsOrderPutResponse.h"
#include "VpsRow.h"
#include "VpsTemplatesList.h"
#include "VpsTrafficResponse.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup VPS VPS
 * \ingroup Operations
 *  @{
 */
class VPSManager {
public:
	VPSManager();
	virtual ~VPSManager();

/*! \brief Place VPS Order. *Synchronous*
 *
 * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
 * \param vpsOrderPostRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVpsSync(char * accessToken,
	std::shared_ptr<VpsOrderPostRequest> vpsOrderPostRequest, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Place VPS Order. *Asynchronous*
 *
 * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
 * \param vpsOrderPostRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVpsAsync(char * accessToken,
	std::shared_ptr<VpsOrderPostRequest> vpsOrderPostRequest, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete VPS Backup. *Synchronous*
 *
 * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
 * \param id VPS ID number *Required*
 * \param file The backup filename to delete. *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVpsBackupSync(char * accessToken,
	int id, std::string file, std::string all, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Delete VPS Backup. *Asynchronous*
 *
 * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
 * \param id VPS ID number *Required*
 * \param file The backup filename to delete. *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVpsBackupAsync(char * accessToken,
	int id, std::string file, std::string all, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Blocks SMTP. *Synchronous*
 *
 * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsBlockSmtpSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Blocks SMTP. *Asynchronous*
 *
 * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsBlockSmtpAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Disable CD Drive. *Synchronous*
 *
 * Disables the virtual CD drive on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsDisableCdSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Disable CD Drive. *Asynchronous*
 *
 * Disables the virtual CD drive on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsDisableCdAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Disable Quotas. *Synchronous*
 *
 * Disables disk quota enforcement on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsDisableQuotaSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Disable Quotas. *Asynchronous*
 *
 * Disables disk quota enforcement on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsDisableQuotaAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Eject CD Drive. *Synchronous*
 *
 * Ejects the virtual CD from the VPS CD drive.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsEjectCdSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Eject CD Drive. *Asynchronous*
 *
 * Ejects the virtual CD from the VPS CD drive.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsEjectCdAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Enable Quotas. *Synchronous*
 *
 * Enables disk quota enforcement on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsEnableQuotaSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Enable Quotas. *Asynchronous*
 *
 * Enables disk quota enforcement on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsEnableQuotaAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Restart VPS. *Synchronous*
 *
 * Restarts the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsRestartSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Restart VPS. *Asynchronous*
 *
 * Restarts the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsRestartAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Start VPS. *Synchronous*
 *
 * Powers on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsStartSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Start VPS. *Asynchronous*
 *
 * Powers on the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsStartAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Stop VPS. *Synchronous*
 *
 * Powers off the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsStopSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Stop VPS. *Asynchronous*
 *
 * Powers off the VPS.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool doVpsStopAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Download VPS Backup. *Synchronous*
 *
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
 * \param id VPS ID number *Required*
 * \param downloadQsBackupRequest  *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool downloadVpsBackupSync(char * accessToken,
	int id, std::shared_ptr<DownloadQsBackup_request> downloadQsBackupRequest, std::string all, 
	void(* handler)(DownloadQsBackup_200_response, Error, void* )
	, void* userData);

/*! \brief Download VPS Backup. *Asynchronous*
 *
 * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
 * \param id VPS ID number *Required*
 * \param downloadQsBackupRequest  *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool downloadVpsBackupAsync(char * accessToken,
	int id, std::shared_ptr<DownloadQsBackup_request> downloadQsBackupRequest, std::string all, 
	void(* handler)(DownloadQsBackup_200_response, Error, void* )
	, void* userData);


/*! \brief VPS Ordering Information. *Synchronous*
 *
 * Retrieves available VPS configurations, OS templates, and pricing for ordering.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewVpsSync(char * accessToken,
	
	void(* handler)(VpsOrder, Error, void* )
	, void* userData);

/*! \brief VPS Ordering Information. *Asynchronous*
 *
 * Retrieves available VPS configurations, OS templates, and pricing for ordering.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewVpsAsync(char * accessToken,
	
	void(* handler)(VpsOrder, Error, void* )
	, void* userData);


/*! \brief Get VPS Backups List. *Synchronous*
 *
 * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
 * \param id VPS ID number *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsBackupsSync(char * accessToken,
	int id, std::string all, 
	void(* handler)(VpsBackupRows, Error, void* )
	, void* userData);

/*! \brief Get VPS Backups List. *Asynchronous*
 *
 * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
 * \param id VPS ID number *Required*
 * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsBackupsAsync(char * accessToken,
	int id, std::string all, 
	void(* handler)(VpsBackupRows, Error, void* )
	, void* userData);


/*! \brief HD Space Addon Info. *Synchronous*
 *
 * Returns available hard drive space addon options and pricing for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsBuyHdSpaceSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief HD Space Addon Info. *Asynchronous*
 *
 * Returns available hard drive space addon options and pricing for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsBuyHdSpaceAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Additional IP Addon Info. *Synchronous*
 *
 * Returns available additional IP address options and pricing for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsBuyIpSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Additional IP Addon Info. *Asynchronous*
 *
 * Returns available additional IP address options and pricing for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsBuyIpAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Timezone Info. *Synchronous*
 *
 * Returns the list of available timezones that can be set on the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsChangeTimezoneSync(char * accessToken,
	int id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief Get Timezone Info. *Asynchronous*
 *
 * Returns the list of available timezones that can be set on the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsChangeTimezoneAsync(char * accessToken,
	int id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);


/*! \brief Get VPS Order. *Synchronous*
 *
 * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsInfoSync(char * accessToken,
	int id, 
	void(* handler)(Vps, Error, void* )
	, void* userData);

/*! \brief Get VPS Order. *Asynchronous*
 *
 * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsInfoAsync(char * accessToken,
	int id, 
	void(* handler)(Vps, Error, void* )
	, void* userData);


/*! \brief Get VPS Invoices. *Synchronous*
 *
 * Returns the billing invoices associated with this VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get VPS Invoices. *Asynchronous*
 *
 * Returns the billing invoices associated with this VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief List VPS Orders. *Synchronous*
 *
 * Returns all VPS services on the account with their current status and configuration.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsListSync(char * accessToken,
	
	void(* handler)(std::list<VpsRow>, Error, void* )
	, void* userData);

/*! \brief List VPS Orders. *Asynchronous*
 *
 * Returns all VPS services on the account with their current status and configuration.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsListAsync(char * accessToken,
	
	void(* handler)(std::list<VpsRow>, Error, void* )
	, void* userData);


/*! \brief VPS Reinstall OS Options. *Synchronous*
 *
 * Returns the list of available OS templates for reinstalling the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsReinstallOsSync(char * accessToken,
	int id, 
	void(* handler)(VpsTemplatesList, Error, void* )
	, void* userData);

/*! \brief VPS Reinstall OS Options. *Asynchronous*
 *
 * Returns the list of available OS templates for reinstalling the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsReinstallOsAsync(char * accessToken,
	int id, 
	void(* handler)(VpsTemplatesList, Error, void* )
	, void* userData);


/*! \brief Reverse DNS Info. *Synchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsReverseDnsSync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);

/*! \brief Reverse DNS Info. *Asynchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsReverseDnsAsync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);


/*! \brief VNC Setup Info. *Synchronous*
 *
 * Returns the current VNC connection information for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsSetupVncSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief VNC Setup Info. *Asynchronous*
 *
 * Returns the current VNC connection information for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsSetupVncAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Slice Upgrade Info. *Synchronous*
 *
 * Returns available slice upgrade options and pricing for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsSlicesSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Slice Upgrade Info. *Asynchronous*
 *
 * Returns available slice upgrade options and pricing for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsSlicesAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Traffic Usage. *Synchronous*
 *
 * Returns bandwidth traffic usage data for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsTrafficUsageSync(char * accessToken,
	int id, 
	void(* handler)(VpsTrafficResponse, Error, void* )
	, void* userData);

/*! \brief Get Traffic Usage. *Asynchronous*
 *
 * Returns bandwidth traffic usage data for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsTrafficUsageAsync(char * accessToken,
	int id, 
	void(* handler)(VpsTrafficResponse, Error, void* )
	, void* userData);


/*! \brief Get View Desktop Info. *Synchronous*
 *
 * Returns remote desktop connection information for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsViewDesktopSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get View Desktop Info. *Asynchronous*
 *
 * Returns remote desktop connection information for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsViewDesktopAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Resend VPS Welcome Email. *Synchronous*
 *
 * Resends the welcome email containing connection details and credentials for the VPS order.
 * \param id VPS ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsWelcomeEmailSync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend VPS Welcome Email. *Asynchronous*
 *
 * Resends the welcome email containing connection details and credentials for the VPS order.
 * \param id VPS ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVpsWelcomeEmailAsync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Start a VPS Backup. *Synchronous*
 *
 * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsBackupSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Start a VPS Backup. *Asynchronous*
 *
 * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsBackupAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Purchase HD Space Addon. *Synchronous*
 *
 * Purchases additional hard drive space for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsBuyHdSpaceSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Purchase HD Space Addon. *Asynchronous*
 *
 * Purchases additional hard drive space for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsBuyHdSpaceAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Purchase Additional IP. *Synchronous*
 *
 * Purchases an additional IP address for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsBuyIpSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Purchase Additional IP. *Asynchronous*
 *
 * Purchases an additional IP address for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsBuyIpAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update VPS Hostname. *Synchronous*
 *
 * Changes the hostname of the VPS. This queues a background task to update the server.
 * \param id VPS ID number *Required*
 * \param hostname 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeHostnameSync(char * accessToken,
	int id, std::string hostname, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Update VPS Hostname. *Asynchronous*
 *
 * Changes the hostname of the VPS. This queues a background task to update the server.
 * \param id VPS ID number *Required*
 * \param hostname 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeHostnameAsync(char * accessToken,
	int id, std::string hostname, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Change VPS Root Password. *Synchronous*
 *
 * Changes the root password of the VPS.
 * \param id VPS ID number *Required*
 * \param password  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeRootPasswordSync(char * accessToken,
	int id, std::string password, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Change VPS Root Password. *Asynchronous*
 *
 * Changes the root password of the VPS.
 * \param id VPS ID number *Required*
 * \param password  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeRootPasswordAsync(char * accessToken,
	int id, std::string password, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Change VPS Timezone. *Synchronous*
 *
 * Changes the system timezone on the VPS.
 * \param id VPS ID number *Required*
 * \param timezone The time zone *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeTimezoneSync(char * accessToken,
	int id, std::string timezone, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Change VPS Timezone. *Asynchronous*
 *
 * Changes the system timezone on the VPS.
 * \param id VPS ID number *Required*
 * \param timezone The time zone *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeTimezoneAsync(char * accessToken,
	int id, std::string timezone, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Change Webuzo Password. *Synchronous*
 *
 * Changes the Webuzo control panel password on the VPS.
 * \param id VPS ID number *Required*
 * \param password  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeWebuzoPasswordSync(char * accessToken,
	int id, std::string password, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Change Webuzo Password. *Asynchronous*
 *
 * Changes the Webuzo control panel password on the VPS.
 * \param id VPS ID number *Required*
 * \param password  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsChangeWebuzoPasswordAsync(char * accessToken,
	int id, std::string password, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Insert CD in VPS. *Synchronous*
 *
 * Mounts an ISO image in the VPS virtual CD drive from the given URL.
 * \param id VPS ID number *Required*
 * \param url 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsInsertCdSync(char * accessToken,
	int id, std::string url, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Insert CD in VPS. *Asynchronous*
 *
 * Mounts an ISO image in the VPS virtual CD drive from the given URL.
 * \param id VPS ID number *Required*
 * \param url 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsInsertCdAsync(char * accessToken,
	int id, std::string url, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Reinstall VPS OS. *Synchronous*
 *
 * Reinstalls the operating system on the VPS. Warning - all data will be erased.
 * \param id VPS ID number *Required*
 * \param r_template OS Template Filename *Required*
 * \param localPassword Password for this account. *Required*
 * \param password Password for Root / Administrator Account.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsReinstallOsSync(char * accessToken,
	int id, std::string r_template, std::string localPassword, std::string password, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Reinstall VPS OS. *Asynchronous*
 *
 * Reinstalls the operating system on the VPS. Warning - all data will be erased.
 * \param id VPS ID number *Required*
 * \param r_template OS Template Filename *Required*
 * \param localPassword Password for this account. *Required*
 * \param password Password for Root / Administrator Account.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsReinstallOsAsync(char * accessToken,
	int id, std::string r_template, std::string localPassword, std::string password, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Reset VPS Password. *Synchronous*
 *
 * Resets the root password on the VPS to a new randomly generated password.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsResetPasswordSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Reset VPS Password. *Asynchronous*
 *
 * Resets the root password on the VPS to a new randomly generated password.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsResetPasswordAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Restore VPS from Backup. *Synchronous*
 *
 * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
 * \param id VPS ID number *Required*
 * \param restoreRequest VPS Restore request *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsRestoreSync(char * accessToken,
	int id, std::shared_ptr<RestoreRequest> restoreRequest, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Restore VPS from Backup. *Asynchronous*
 *
 * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
 * \param id VPS ID number *Required*
 * \param restoreRequest VPS Restore request *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsRestoreAsync(char * accessToken,
	int id, std::shared_ptr<RestoreRequest> restoreRequest, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Update Reverse DNS. *Synchronous*
 *
 * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
 * \param id VPS ID number *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsReverseDnsSync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Update Reverse DNS. *Asynchronous*
 *
 * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
 * \param id VPS ID number *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsReverseDnsAsync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Setup VNC. *Synchronous*
 *
 * Sets up or refreshes the VNC console connection for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsSetupVncSync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);

/*! \brief Setup VNC. *Asynchronous*
 *
 * Sets up or refreshes the VNC console connection for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsSetupVncAsync(char * accessToken,
	int id, 
	void(* handler)(QueueResponse, Error, void* )
	, void* userData);


/*! \brief Purchase Slice Upgrade. *Synchronous*
 *
 * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsSlicesSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Purchase Slice Upgrade. *Asynchronous*
 *
 * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsSlicesAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update View Desktop. *Synchronous*
 *
 * Updates or refreshes the remote desktop session for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsViewDesktopSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update View Desktop. *Asynchronous*
 *
 * Updates or refreshes the remote desktop session for the VPS.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postVpsViewDesktopAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Validate VPS Order. *Synchronous*
 *
 * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
 * \param vpsOrderPutRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putVpsSync(char * accessToken,
	std::shared_ptr<VpsOrderPutRequest> vpsOrderPutRequest, 
	void(* handler)(VpsOrderPutResponse, Error, void* )
	, void* userData);

/*! \brief Validate VPS Order. *Asynchronous*
 *
 * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
 * \param vpsOrderPutRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putVpsAsync(char * accessToken,
	std::shared_ptr<VpsOrderPutRequest> vpsOrderPutRequest, 
	void(* handler)(VpsOrderPutResponse, Error, void* )
	, void* userData);


/*! \brief Update VPS Order. *Synchronous*
 *
 * Updates settings on a VPS order.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVpsInfoSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update VPS Order. *Asynchronous*
 *
 * Updates settings on a VPS order.
 * \param id VPS ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVpsInfoAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Cancel VPS Service. *Synchronous*
 *
 * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool vPSCancelSync(char * accessToken,
	int id, 
	void(* handler)(VPSCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel VPS Service. *Asynchronous*
 *
 * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 * \param id VPS ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool vPSCancelAsync(char * accessToken,
	int id, 
	void(* handler)(VPSCancel_200_response, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* VPSManager_H_ */
