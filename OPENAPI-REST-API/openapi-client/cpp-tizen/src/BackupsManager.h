#ifndef _BackupsManager_H_
#define _BackupsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Backup.h"
#include "BackupLoginResponse.h"
#include "BackupOrderPostResponse.h"
#include "BackupOrderPutResponse.h"
#include "BackupRow.h"
#include "BackupsOrder.h"
#include "CancelBackup_200_response.h"
#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "SuccessTextResponse.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Backups Backups
 * \ingroup Operations
 *  @{
 */
class BackupsManager {
public:
	BackupsManager();
	virtual ~BackupsManager();

/*! \brief Place Backup Order. *Synchronous*
 *
 * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
 * \param validateOnly 
 * \param serviceType 
 * \param coupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addBackupSync(char * accessToken,
	bool validateOnly, int serviceType, std::string coupon, 
	void(* handler)(BackupOrderPostResponse, Error, void* )
	, void* userData);

/*! \brief Place Backup Order. *Asynchronous*
 *
 * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
 * \param validateOnly 
 * \param serviceType 
 * \param coupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addBackupAsync(char * accessToken,
	bool validateOnly, int serviceType, std::string coupon, 
	void(* handler)(BackupOrderPostResponse, Error, void* )
	, void* userData);


/*! \brief Cancel Backup Service. *Synchronous*
 *
 * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool cancelBackupSync(char * accessToken,
	int id, 
	void(* handler)(CancelBackup_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel Backup Service. *Asynchronous*
 *
 * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool cancelBackupAsync(char * accessToken,
	int id, 
	void(* handler)(CancelBackup_200_response, Error, void* )
	, void* userData);


/*! \brief Get Backup Service Details. *Synchronous*
 *
 * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupInfoSync(char * accessToken,
	int id, 
	void(* handler)(Backup, Error, void* )
	, void* userData);

/*! \brief Get Backup Service Details. *Asynchronous*
 *
 * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupInfoAsync(char * accessToken,
	int id, 
	void(* handler)(Backup, Error, void* )
	, void* userData);


/*! \brief Get Backup Order Invoices. *Synchronous*
 *
 * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get Backup Order Invoices. *Asynchronous*
 *
 * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief Get Backup Storage Panel Login. *Synchronous*
 *
 * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupLoginSync(char * accessToken,
	int id, 
	void(* handler)(BackupLoginResponse, Error, void* )
	, void* userData);

/*! \brief Get Backup Storage Panel Login. *Asynchronous*
 *
 * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupLoginAsync(char * accessToken,
	int id, 
	void(* handler)(BackupLoginResponse, Error, void* )
	, void* userData);


/*! \brief List Backup Services. *Synchronous*
 *
 * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupsListSync(char * accessToken,
	
	void(* handler)(std::list<BackupRow>, Error, void* )
	, void* userData);

/*! \brief List Backup Services. *Asynchronous*
 *
 * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupsListAsync(char * accessToken,
	
	void(* handler)(std::list<BackupRow>, Error, void* )
	, void* userData);


/*! \brief Resend Backup Welcome Email. *Synchronous*
 *
 * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupsWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend Backup Welcome Email. *Asynchronous*
 *
 * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBackupsWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get Backup Order Form Data. *Synchronous*
 *
 * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewBackupSync(char * accessToken,
	
	void(* handler)(BackupsOrder, Error, void* )
	, void* userData);

/*! \brief Get Backup Order Form Data. *Asynchronous*
 *
 * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewBackupAsync(char * accessToken,
	
	void(* handler)(BackupsOrder, Error, void* )
	, void* userData);


/*! \brief Update Backup Information. *Synchronous*
 *
 * Updates backup storage service metadata, such as stored credentials or settings for the order.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBackupInfoSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update Backup Information. *Asynchronous*
 *
 * Updates backup storage service metadata, such as stored credentials or settings for the order.
 * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBackupInfoAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Validate Backup Order. *Synchronous*
 *
 * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
 * \param validateOnly 
 * \param serviceType 
 * \param coupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool validateBackupOrderSync(char * accessToken,
	bool validateOnly, int serviceType, std::string coupon, 
	void(* handler)(BackupOrderPutResponse, Error, void* )
	, void* userData);

/*! \brief Validate Backup Order. *Asynchronous*
 *
 * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
 * \param validateOnly 
 * \param serviceType 
 * \param coupon 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool validateBackupOrderAsync(char * accessToken,
	bool validateOnly, int serviceType, std::string coupon, 
	void(* handler)(BackupOrderPutResponse, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* BackupsManager_H_ */
