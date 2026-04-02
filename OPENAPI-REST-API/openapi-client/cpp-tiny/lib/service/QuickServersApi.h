#ifndef TINY_CPP_CLIENT_QuickServersApi_H_
#define TINY_CPP_CLIENT_QuickServersApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

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

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class QuickServersApi : public Service {
public:
    QuickServersApi() = default;

    virtual ~QuickServersApi();

    /**
    * Place QuickServer Order.
    *
    * Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
    */
    Response<
                ServiceOrderPostResponse
        >
    addQs(
    );
    /**
    * Delete QuickServer Backup.
    *
    * Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
    * \param id QuickServer ID number *Required*
    * \param file The backup filename to delete. *Required*
    * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
    */
    Response<
                SuccessTextResponse
        >
    deleteQsBackup(
            
            int id
            , 
            
            std::string file
            , 
            
            std::string all
            
    );
    /**
    * Block QuickServer SMTP.
    *
    * Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsBlockSmtp(
            
            int id
            
    );
    /**
    * Disable CD Drive.
    *
    * Disables the virtual CD drive for the QuickServer.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsDisableCd(
            
            int id
            
    );
    /**
    * Disable Quotas.
    *
    * Disables disk quota enforcement for the QuickServer.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsDisableQuota(
            
            int id
            
    );
    /**
    * Eject CD Drive.
    *
    * Ejects the virtual CD from the QuickServer's CD drive.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsEjectCd(
            
            int id
            
    );
    /**
    * Enable Quotas.
    *
    * Enables disk quota enforcement for the QuickServer.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsEnableQuota(
            
            int id
            
    );
    /**
    * Restart QuickServer.
    *
    * Restarts the QuickServer. The server will be shut down and started again.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsRestart(
            
            int id
            
    );
    /**
    * Start QuickServer.
    *
    * Powers on the QuickServer.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsStart(
            
            int id
            
    );
    /**
    * Stop QuickServer.
    *
    * Powers off the QuickServer.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doQsStop(
            
            int id
            
    );
    /**
    * Download QuickServer Backup.
    *
    * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
    * \param id QuickServer ID number *Required*
    * \param downloadQsBackupRequest  *Required*
    * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
    */
    Response<
                DownloadQsBackup_200_response
        >
    downloadQsBackup(
            
            int id
            , 
            
            DownloadQsBackup_request downloadQsBackupRequest
            , 
            
            std::string all
            
    );
    /**
    * Get QuickServer Ordering Information.
    *
    * Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
    */
    Response<
                QuickserverOrder
        >
    getNewQs(
    );
    /**
    * List QuickServer Backups.
    *
    * Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
    * \param id QuickServer ID number *Required*
    * \param all Set to `1` to list all backups across all services, not just the ones for the given QuickServer.
    */
    Response<
                VpsBackupRows
        >
    getQsBackups(
            
            int id
            , 
            
            std::string all
            
    );
    /**
    * Get QuickServer Hostname.
    *
    * Retrieves the current hostname and any validation requirements for changing it.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsChangeHostname(
            
            int id
            
    );
    /**
    * Get Change Root Password Info.
    *
    * Retrieves instructions or metadata needed to reset the root password.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsChangeRootPassword(
            
            int id
            
    );
    /**
    * Get Timezone Info.
    *
    * Returns the list of available timezones that can be set on the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
                    std::list<std::string>
        >
    getQsChangeTimezone(
            
            int id
            
    );
    /**
    * Webuzo Change Pass Info.
    *
    * Retrieves instructions or metadata for changing the Webuzo control panel password.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsChangeWebuzoPassword(
            
            int id
            
    );
    /**
    * Get QuickServer Order.
    *
    * Returns detailed QuickServer information, including credentials, IPs, and available client actions.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                Quickserver
        >
    getQsInfo(
            
            int id
            
    );
    /**
    * Insert CD Information.
    *
    * Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsInsertCd(
            
            int id
            
    );
    /**
    * Get QuickServer Invoices.
    *
    * Returns the billing invoices associated with this QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getQsInvoices(
            
            int id
            
    );
    /**
    * List QuickServers.
    *
    * Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
    */
    Response<
                    std::list<QuickserverRow>
        >
    getQsList(
    );
    /**
    * QuickServer Reinstall OS Options.
    *
    * Returns the list of available operating system templates for reinstalling the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
                VpsTemplatesList
        >
    getQsReinstallOs(
            
            int id
            
    );
    /**
    * Reset QuickServer Password Info.
    *
    * Returns information needed before resetting the QuickServer's root password.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsResetPassword(
            
            int id
            
    );
    /**
    * Reverse DNS Info.
    *
    * Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
    * \param id QuickServer ID number *Required*
    */
    Response<
                ReverseDnsEntries
        >
    getQsReverseDns(
            
            int id
            
    );
    /**
    * VNC Setup Info.
    *
    * Returns the current VNC connection information for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsSetupVnc(
            
            int id
            
    );
    /**
    * Get Traffic Usage.
    *
    * Returns bandwidth traffic usage data for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsTrafficUsage(
            
            int id
            
    );
    /**
    * Get View Desktop Info.
    *
    * Returns remote desktop connection information for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    getQsViewDesktop(
            
            int id
            
    );
    /**
    * Resend QuickServer Welcome Email.
    *
    * Resends the welcome email containing connection details and credentials for the QuickServer order.
    * \param id Quickserver ID *Required*
    */
    Response<
                TextResponse
        >
    getQsWelcomeEmail(
            
            std::string id
            
    );
    /**
    * Create QuickServer Backup.
    *
    * Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsBackup(
            
            int id
            
    );
    /**
    * Update QuickServer Hostname.
    *
    * Submits a hostname change request for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsChangeHostname(
            
            int id
            
    );
    /**
    * Change Root Password.
    *
    * Triggers a root password reset for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsChangeRootPassword(
            
            int id
            
    );
    /**
    * Change QuickServer Timezone.
    *
    * Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
    * \param id QuickServer ID number *Required*
    * \param timezone The time zone *Required*
    */
    Response<
                QueueResponse
        >
    postQsChangeTimezone(
            
            int id
            , 
            
            std::string timezone
            
    );
    /**
    * Change Webuzo Password.
    *
    * Resets the Webuzo control panel password for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsChangeWebuzoPassword(
            
            int id
            
    );
    /**
    * Insert CD in QuickServer.
    *
    * Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsInsertCd(
            
            int id
            
    );
    /**
    * Reinstall QuickServer OS.
    *
    * Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsReinstallOs(
            
            int id
            
    );
    /**
    * Reset QuickServer Password.
    *
    * Resets the root password on the QuickServer to a new randomly generated password.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsResetPassword(
            
            int id
            
    );
    /**
    * Update Reverse DNS.
    *
    * Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
    * \param id QuickServer ID number *Required*
    * \param reverseDnsEntries  *Required*
    */
    Response<
                TextResponse
        >
    postQsReverseDns(
            
            int id
            , 
            
            ReverseDnsEntries reverseDnsEntries
            
    );
    /**
    * Setup VNC.
    *
    * Sets up or refreshes the VNC console connection for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QueueResponse
        >
    postQsSetupVnc(
            
            int id
            
    );
    /**
    * Search Traffic Usage.
    *
    * Searches and filters the QuickServer's bandwidth traffic usage data by date range.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    postQsTrafficUsage(
            
            int id
            
    );
    /**
    * Update View Desktop.
    *
    * Updates or refreshes the remote desktop session for the QuickServer.
    * \param id QuickServer ID number *Required*
    */
    Response<
            String
        >
    postQsViewDesktop(
            
            int id
            
    );
    /**
    * Restore QuickServer from Backup.
    *
    * Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
    * \param id QuickServer ID number *Required*
    * \param restoreRequest QuickServer Restore request *Required*
    */
    Response<
                QueueResponse
        >
    postQuickServerRestore(
            
            int id
            , 
            
            RestoreRequest restoreRequest
            
    );
    /**
    * Validate QuickServer Order.
    *
    * Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
    */
    Response<
            String
        >
    putQs(
    );
    /**
    * Cancel QuickServer Order.
    *
    * Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
    * \param id QuickServer ID number *Required*
    */
    Response<
                QuickserversCancel_200_response
        >
    quickserversCancel(
            
            int id
            
    );
    /**
    * Update QuickServer Order.
    *
    * Updates QuickServer metadata or stored settings associated with the order.
    * \param id QuickServer ID number. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateQsInfo(
            
            std::string id
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_QuickServersApi_H_ */