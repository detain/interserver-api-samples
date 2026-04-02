#ifndef TINY_CPP_CLIENT_BackupsApi_H_
#define TINY_CPP_CLIENT_BackupsApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

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

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class BackupsApi : public Service {
public:
    BackupsApi() = default;

    virtual ~BackupsApi();

    /**
    * Place Backup Order.
    *
    * Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
    * \param validateOnly 
    * \param serviceType 
    * \param coupon 
    */
    Response<
                BackupOrderPostResponse
        >
    addBackup(
            
            bool validateOnly
            , 
            
            int serviceType
            , 
            
            std::string coupon
            
    );
    /**
    * Cancel Backup Service.
    *
    * Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
    * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
    */
    Response<
                CancelBackup_200_response
        >
    cancelBackup(
            
            int id
            
    );
    /**
    * Get Backup Service Details.
    *
    * Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
    * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
    */
    Response<
                Backup
        >
    getBackupInfo(
            
            int id
            
    );
    /**
    * Get Backup Order Invoices.
    *
    * Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
    * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getBackupInvoices(
            
            int id
            
    );
    /**
    * Get Backup Storage Panel Login.
    *
    * Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
    * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
    */
    Response<
                BackupLoginResponse
        >
    getBackupLogin(
            
            int id
            
    );
    /**
    * List Backup Services.
    *
    * Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
    */
    Response<
                    std::list<BackupRow>
        >
    getBackupsList(
    );
    /**
    * Resend Backup Welcome Email.
    *
    * Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
    * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
    */
    Response<
                SuccessTextResponse
        >
    getBackupsWelcomeEmail(
            
            int id
            
    );
    /**
    * Get Backup Order Form Data.
    *
    * Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
    */
    Response<
                BackupsOrder
        >
    getNewBackup(
    );
    /**
    * Update Backup Information.
    *
    * Updates backup storage service metadata, such as stored credentials or settings for the order.
    * \param id The backup service ID. Use the `backup_id` from `GET /backups` to identify the service. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateBackupInfo(
            
            int id
            
    );
    /**
    * Validate Backup Order.
    *
    * Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
    * \param validateOnly 
    * \param serviceType 
    * \param coupon 
    */
    Response<
                BackupOrderPutResponse
        >
    validateBackupOrder(
            
            bool validateOnly
            , 
            
            int serviceType
            , 
            
            std::string coupon
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_BackupsApi_H_ */