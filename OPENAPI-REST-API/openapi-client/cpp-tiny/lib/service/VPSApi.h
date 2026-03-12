#ifndef TINY_CPP_CLIENT_VPSApi_H_
#define TINY_CPP_CLIENT_VPSApi_H_


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

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class VPSApi : public Service {
public:
    VPSApi() = default;

    virtual ~VPSApi() = default;

    /**
    * Place VPS Order.
    *
    * Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
    * \param vpsOrderPostRequest 
    */
    Response<
            String
        >
    addVps(
            
            VpsOrderPostRequest vpsOrderPostRequest
            
    );
    /**
    * Delete VPS Backup.
    *
    * Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
    * \param id VPS ID number *Required*
    * \param file The backup filename to delete. *Required*
    * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
    */
    Response<
                SuccessTextResponse
        >
    deleteVpsBackup(
            
            int id
            , 
            
            std::string file
            , 
            
            std::string all
            
    );
    /**
    * Blocks SMTP.
    *
    * Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsBlockSmtp(
            
            int id
            
    );
    /**
    * Disable CD Drive.
    *
    * Disables the virtual CD drive on the VPS.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsDisableCd(
            
            int id
            
    );
    /**
    * Disable Quotas.
    *
    * Disables disk quota enforcement on the VPS.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsDisableQuota(
            
            int id
            
    );
    /**
    * Eject CD Drive.
    *
    * Ejects the virtual CD from the VPS CD drive.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsEjectCd(
            
            int id
            
    );
    /**
    * Enable Quotas.
    *
    * Enables disk quota enforcement on the VPS.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsEnableQuota(
            
            int id
            
    );
    /**
    * Restart VPS.
    *
    * Restarts the VPS.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsRestart(
            
            int id
            
    );
    /**
    * Start VPS.
    *
    * Powers on the VPS.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsStart(
            
            int id
            
    );
    /**
    * Stop VPS.
    *
    * Powers off the VPS.
    * \param id VPS ID number. *Required*
    */
    Response<
                QueueResponse
        >
    doVpsStop(
            
            int id
            
    );
    /**
    * Download VPS Backup.
    *
    * Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
    * \param id VPS ID number *Required*
    * \param downloadQsBackupRequest  *Required*
    * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
    */
    Response<
                DownloadQsBackup_200_response
        >
    downloadVpsBackup(
            
            int id
            , 
            
            DownloadQsBackup_request downloadQsBackupRequest
            , 
            
            std::string all
            
    );
    /**
    * VPS Ordering Information.
    *
    * Retrieves available VPS configurations, OS templates, and pricing for ordering.
    */
    Response<
                VpsOrder
        >
    getNewVps(
    );
    /**
    * Get VPS Backups List.
    *
    * Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
    * \param id VPS ID number *Required*
    * \param all Set to `1` to list all backups across all services, not just the ones for the given VPS.
    */
    Response<
                VpsBackupRows
        >
    getVpsBackups(
            
            int id
            , 
            
            std::string all
            
    );
    /**
    * HD Space Addon Info.
    *
    * Returns available hard drive space addon options and pricing for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    getVpsBuyHdSpace(
            
            int id
            
    );
    /**
    * Additional IP Addon Info.
    *
    * Returns available additional IP address options and pricing for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    getVpsBuyIp(
            
            int id
            
    );
    /**
    * Get Timezone Info.
    *
    * Returns the list of available timezones that can be set on the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
                    std::list<std::string>
        >
    getVpsChangeTimezone(
            
            int id
            
    );
    /**
    * Get VPS Order.
    *
    * Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
    * \param id VPS ID number *Required*
    */
    Response<
                Vps
        >
    getVpsInfo(
            
            int id
            
    );
    /**
    * Get VPS Invoices.
    *
    * Returns the billing invoices associated with this VPS.
    * \param id VPS ID number *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getVpsInvoices(
            
            int id
            
    );
    /**
    * List VPS Orders.
    *
    * Returns all VPS services on the account with their current status and configuration.
    */
    Response<
                    std::list<VpsRow>
        >
    getVpsList(
    );
    /**
    * VPS Reinstall OS Options.
    *
    * Returns the list of available OS templates for reinstalling the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
                VpsTemplatesList
        >
    getVpsReinstallOs(
            
            int id
            
    );
    /**
    * Reverse DNS Info.
    *
    * Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
    * \param id VPS ID number *Required*
    */
    Response<
                ReverseDnsEntries
        >
    getVpsReverseDns(
            
            int id
            
    );
    /**
    * VNC Setup Info.
    *
    * Returns the current VNC connection information for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    getVpsSetupVnc(
            
            int id
            
    );
    /**
    * Slice Upgrade Info.
    *
    * Returns available slice upgrade options and pricing for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    getVpsSlices(
            
            int id
            
    );
    /**
    * Get Traffic Usage.
    *
    * Returns bandwidth traffic usage data for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
                VpsTrafficResponse
        >
    getVpsTrafficUsage(
            
            int id
            
    );
    /**
    * Get View Desktop Info.
    *
    * Returns remote desktop connection information for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    getVpsViewDesktop(
            
            int id
            
    );
    /**
    * Resend VPS Welcome Email.
    *
    * Resends the welcome email containing connection details and credentials for the VPS order.
    * \param id VPS ID *Required*
    */
    Response<
                SuccessTextResponse
        >
    getVpsWelcomeEmail(
            
            std::string id
            
    );
    /**
    * Start a VPS Backup.
    *
    * Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
    * \param id VPS ID number *Required*
    */
    Response<
                QueueResponse
        >
    postVpsBackup(
            
            int id
            
    );
    /**
    * Purchase HD Space Addon.
    *
    * Purchases additional hard drive space for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    postVpsBuyHdSpace(
            
            int id
            
    );
    /**
    * Purchase Additional IP.
    *
    * Purchases an additional IP address for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    postVpsBuyIp(
            
            int id
            
    );
    /**
    * Update VPS Hostname.
    *
    * Changes the hostname of the VPS. This queues a background task to update the server.
    * \param id VPS ID number *Required*
    * \param hostname 
    */
    Response<
                QueueResponse
        >
    postVpsChangeHostname(
            
            int id
            , 
            
            std::string hostname
            
    );
    /**
    * Change VPS Root Password.
    *
    * Changes the root password of the VPS.
    * \param id VPS ID number *Required*
    * \param password  *Required*
    */
    Response<
                QueueResponse
        >
    postVpsChangeRootPassword(
            
            int id
            , 
            
            std::string password
            
    );
    /**
    * Change VPS Timezone.
    *
    * Changes the system timezone on the VPS.
    * \param id VPS ID number *Required*
    * \param timezone The time zone *Required*
    */
    Response<
                QueueResponse
        >
    postVpsChangeTimezone(
            
            int id
            , 
            
            std::string timezone
            
    );
    /**
    * Change Webuzo Password.
    *
    * Changes the Webuzo control panel password on the VPS.
    * \param id VPS ID number *Required*
    * \param password  *Required*
    */
    Response<
                QueueResponse
        >
    postVpsChangeWebuzoPassword(
            
            int id
            , 
            
            std::string password
            
    );
    /**
    * Insert CD in VPS.
    *
    * Mounts an ISO image in the VPS virtual CD drive from the given URL.
    * \param id VPS ID number *Required*
    * \param url 
    */
    Response<
                QueueResponse
        >
    postVpsInsertCd(
            
            int id
            , 
            
            std::string url
            
    );
    /**
    * Reinstall VPS OS.
    *
    * Reinstalls the operating system on the VPS. Warning - all data will be erased.
    * \param id VPS ID number *Required*
    * \param r_template OS Template Filename *Required*
    * \param localPassword Password for this account. *Required*
    * \param password Password for Root / Administrator Account.
    */
    Response<
                QueueResponse
        >
    postVpsReinstallOs(
            
            int id
            , 
            
            std::string r_template
            , 
            
            std::string localPassword
            , 
            
            std::string password
            
    );
    /**
    * Reset VPS Password.
    *
    * Resets the root password on the VPS to a new randomly generated password.
    * \param id VPS ID number *Required*
    */
    Response<
                QueueResponse
        >
    postVpsResetPassword(
            
            int id
            
    );
    /**
    * Restore VPS from Backup.
    *
    * Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
    * \param id VPS ID number *Required*
    * \param restoreRequest VPS Restore request *Required*
    */
    Response<
                QueueResponse
        >
    postVpsRestore(
            
            int id
            , 
            
            RestoreRequest restoreRequest
            
    );
    /**
    * Update Reverse DNS.
    *
    * Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
    * \param id VPS ID number *Required*
    * \param reverseDnsEntries  *Required*
    */
    Response<
                TextResponse
        >
    postVpsReverseDns(
            
            int id
            , 
            
            ReverseDnsEntries reverseDnsEntries
            
    );
    /**
    * Setup VNC.
    *
    * Sets up or refreshes the VNC console connection for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
                QueueResponse
        >
    postVpsSetupVnc(
            
            int id
            
    );
    /**
    * Purchase Slice Upgrade.
    *
    * Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    postVpsSlices(
            
            int id
            
    );
    /**
    * Update View Desktop.
    *
    * Updates or refreshes the remote desktop session for the VPS.
    * \param id VPS ID number *Required*
    */
    Response<
            String
        >
    postVpsViewDesktop(
            
            int id
            
    );
    /**
    * Validate VPS Order.
    *
    * Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
    * \param vpsOrderPutRequest 
    */
    Response<
                VpsOrderPutResponse
        >
    putVps(
            
            VpsOrderPutRequest vpsOrderPutRequest
            
    );
    /**
    * Update VPS Order.
    *
    * Updates settings on a VPS order.
    * \param id VPS ID number. *Required*
    */
    Response<
            String
        >
    updateVpsInfo(
            
            std::string id
            
    );
    /**
    * Cancel VPS Service.
    *
    * Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
    * \param id VPS ID number *Required*
    */
    Response<
                VPSCancel_200_response
        >
    vPSCancel(
            
            int id
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_VPSApi_H_ */