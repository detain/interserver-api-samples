#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/charge_invoice_rows.h"
#include "../model/download_qs_backup_200_response.h"
#include "../model/download_qs_backup_request.h"
#include "../model/get_account_info_401_response.h"
#include "../model/queue_response.h"
#include "../model/restore_request.h"
#include "../model/reverse_dns_entries.h"
#include "../model/success_text_response.h"
#include "../model/text_response.h"
#include "../model/vps.h"
#include "../model/vps_backup_rows.h"
#include "../model/vps_cancel_200_response.h"
#include "../model/vps_order.h"
#include "../model/vps_order_post_request.h"
#include "../model/vps_order_put_request.h"
#include "../model/vps_order_put_response.h"
#include "../model/vps_row.h"
#include "../model/vps_templates_list.h"
#include "../model/vps_traffic_response.h"

// Enum ALL for VPSAPI_deleteVpsBackup
typedef enum  { interserver_management_api_deleteVpsBackup_ALL_NULL = 0, interserver_management_api_deleteVpsBackup_ALL__0, interserver_management_api_deleteVpsBackup_ALL__1 } interserver_management_api_deleteVpsBackup_all_e;

// Enum ALL for VPSAPI_downloadVpsBackup
typedef enum  { interserver_management_api_downloadVpsBackup_ALL_NULL = 0, interserver_management_api_downloadVpsBackup_ALL__0, interserver_management_api_downloadVpsBackup_ALL__1 } interserver_management_api_downloadVpsBackup_all_e;

// Enum ALL for VPSAPI_getVpsBackups
typedef enum  { interserver_management_api_getVpsBackups_ALL_NULL = 0, interserver_management_api_getVpsBackups_ALL__0, interserver_management_api_getVpsBackups_ALL__1 } interserver_management_api_getVpsBackups_all_e;


// Place VPS Order
//
// Places an order for a new VPS. Use `PUT /vps/order` to validate the order first.
//
void
VPSAPI_addVps(apiClient_t *apiClient, vps_order_post_request_t *vps_order_post_request);


// Delete VPS Backup
//
// Permanently removes the specified backup file from storage. Use `GET /vps/{id}/backups` to list available backup filenames before deleting.
//
success_text_response_t*
VPSAPI_deleteVpsBackup(apiClient_t *apiClient, int *id, char *file, interserver_management_api_deleteVpsBackup_all_e all);


// Blocks SMTP
//
// Blocks outbound SMTP (port 25) on the VPS to prevent spam. Useful for VPS that do not need to send email.
//
queue_response_t*
VPSAPI_doVpsBlockSmtp(apiClient_t *apiClient, int *id);


// Disable CD Drive
//
// Disables the virtual CD drive on the VPS.
//
queue_response_t*
VPSAPI_doVpsDisableCd(apiClient_t *apiClient, int *id);


// Disable Quotas
//
// Disables disk quota enforcement on the VPS.
//
queue_response_t*
VPSAPI_doVpsDisableQuota(apiClient_t *apiClient, int *id);


// Eject CD Drive
//
// Ejects the virtual CD from the VPS CD drive.
//
queue_response_t*
VPSAPI_doVpsEjectCd(apiClient_t *apiClient, int *id);


// Enable Quotas
//
// Enables disk quota enforcement on the VPS.
//
queue_response_t*
VPSAPI_doVpsEnableQuota(apiClient_t *apiClient, int *id);


// Restart VPS
//
// Restarts the VPS.
//
queue_response_t*
VPSAPI_doVpsRestart(apiClient_t *apiClient, int *id);


// Start VPS
//
// Powers on the VPS.
//
queue_response_t*
VPSAPI_doVpsStart(apiClient_t *apiClient, int *id);


// Stop VPS
//
// Powers off the VPS.
//
queue_response_t*
VPSAPI_doVpsStop(apiClient_t *apiClient, int *id);


// Download VPS Backup
//
// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /vps/{id}/backups` to list available backup filenames.
//
download_qs_backup_200_response_t*
VPSAPI_downloadVpsBackup(apiClient_t *apiClient, int *id, download_qs_backup_request_t *download_qs_backup_request, interserver_management_api_downloadVpsBackup_all_e all);


// VPS Ordering Information
//
// Retrieves available VPS configurations, OS templates, and pricing for ordering.
//
vps_order_t*
VPSAPI_getNewVps(apiClient_t *apiClient);


// Get VPS Backups List
//
// Returns the available backups for the VPS across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /vps/{id}/backups` to download or `DELETE /vps/{id}/backups` to remove a backup. Use `POST /vps/{id}/restore` to restore from a backup.
//
vps_backup_rows_t*
VPSAPI_getVpsBackups(apiClient_t *apiClient, int *id, interserver_management_api_getVpsBackups_all_e all);


// HD Space Addon Info
//
// Returns available hard drive space addon options and pricing for the VPS.
//
void
VPSAPI_getVpsBuyHdSpace(apiClient_t *apiClient, int *id);


// Additional IP Addon Info
//
// Returns available additional IP address options and pricing for the VPS.
//
void
VPSAPI_getVpsBuyIp(apiClient_t *apiClient, int *id);


// Get Timezone Info
//
// Returns the list of available timezones that can be set on the VPS.
//
list_t*
VPSAPI_getVpsChangeTimezone(apiClient_t *apiClient, int *id);


// Get VPS Order
//
// Returns detailed information about a specific VPS including its IPs, hostname, OS, and resource allocation.
//
vps_t*
VPSAPI_getVpsInfo(apiClient_t *apiClient, int *id);


// Get VPS Invoices
//
// Returns the billing invoices associated with this VPS.
//
charge_invoice_rows_t*
VPSAPI_getVpsInvoices(apiClient_t *apiClient, int *id);


// List VPS Orders
//
// Returns all VPS services on the account with their current status and configuration.
//
list_t*
VPSAPI_getVpsList(apiClient_t *apiClient);


// VPS Reinstall OS Options
//
// Returns the list of available OS templates for reinstalling the VPS.
//
vps_templates_list_t*
VPSAPI_getVpsReinstallOs(apiClient_t *apiClient, int *id);


// Reverse DNS Info
//
// Returns the current reverse DNS (PTR record) entries for the VPS IP addresses.
//
reverse_dns_entries_t*
VPSAPI_getVpsReverseDns(apiClient_t *apiClient, int *id);


// VNC Setup Info
//
// Returns the current VNC connection information for the VPS.
//
void
VPSAPI_getVpsSetupVnc(apiClient_t *apiClient, int *id);


// Slice Upgrade Info
//
// Returns available slice upgrade options and pricing for the VPS.
//
void
VPSAPI_getVpsSlices(apiClient_t *apiClient, int *id);


// Get Traffic Usage
//
// Returns bandwidth traffic usage data for the VPS.
//
vps_traffic_response_t*
VPSAPI_getVpsTrafficUsage(apiClient_t *apiClient, int *id);


// Get View Desktop Info
//
// Returns remote desktop connection information for the VPS.
//
void
VPSAPI_getVpsViewDesktop(apiClient_t *apiClient, int *id);


// Resend VPS Welcome Email
//
// Resends the welcome email containing connection details and credentials for the VPS order.
//
success_text_response_t*
VPSAPI_getVpsWelcomeEmail(apiClient_t *apiClient, char *id);


// Start a VPS Backup
//
// Creates a backup of the VPS. The backup can be downloaded or restored later via the backups endpoints.
//
queue_response_t*
VPSAPI_postVpsBackup(apiClient_t *apiClient, int *id);


// Purchase HD Space Addon
//
// Purchases additional hard drive space for the VPS.
//
void
VPSAPI_postVpsBuyHdSpace(apiClient_t *apiClient, int *id);


// Purchase Additional IP
//
// Purchases an additional IP address for the VPS.
//
void
VPSAPI_postVpsBuyIp(apiClient_t *apiClient, int *id);


// Update VPS Hostname
//
// Changes the hostname of the VPS. This queues a background task to update the server.
//
queue_response_t*
VPSAPI_postVpsChangeHostname(apiClient_t *apiClient, int *id, char *hostname);


// Change VPS Root Password
//
// Changes the root password of the VPS.
//
queue_response_t*
VPSAPI_postVpsChangeRootPassword(apiClient_t *apiClient, int *id, char *password);


// Change VPS Timezone
//
// Changes the system timezone on the VPS.
//
queue_response_t*
VPSAPI_postVpsChangeTimezone(apiClient_t *apiClient, int *id, char *timezone);


// Change Webuzo Password
//
// Changes the Webuzo control panel password on the VPS.
//
queue_response_t*
VPSAPI_postVpsChangeWebuzoPassword(apiClient_t *apiClient, int *id, char *password);


// Insert CD in VPS
//
// Mounts an ISO image in the VPS virtual CD drive from the given URL.
//
queue_response_t*
VPSAPI_postVpsInsertCd(apiClient_t *apiClient, int *id, char *url);


// Reinstall VPS OS
//
// Reinstalls the operating system on the VPS. Warning - all data will be erased.
//
queue_response_t*
VPSAPI_postVpsReinstallOs(apiClient_t *apiClient, int *id, char *_template, char *localPassword, char *password);


// Reset VPS Password
//
// Resets the root password on the VPS to a new randomly generated password.
//
queue_response_t*
VPSAPI_postVpsResetPassword(apiClient_t *apiClient, int *id);


// Restore VPS from Backup
//
// Initiates a restore of the VPS from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /vps/{id}/backups` to retrieve available backup names.
//
queue_response_t*
VPSAPI_postVpsRestore(apiClient_t *apiClient, int *id, restore_request_t *restore_request);


// Update Reverse DNS
//
// Updates the reverse DNS (PTR record) entries for the VPS IP addresses.
//
text_response_t*
VPSAPI_postVpsReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);


// Setup VNC
//
// Sets up or refreshes the VNC console connection for the VPS.
//
queue_response_t*
VPSAPI_postVpsSetupVnc(apiClient_t *apiClient, int *id);


// Purchase Slice Upgrade
//
// Purchases a slice upgrade for the VPS to increase CPU, RAM, and disk resources.
//
void
VPSAPI_postVpsSlices(apiClient_t *apiClient, int *id);


// Update View Desktop
//
// Updates or refreshes the remote desktop session for the VPS.
//
void
VPSAPI_postVpsViewDesktop(apiClient_t *apiClient, int *id);


// Validate VPS Order
//
// Validates a VPS order before placing it. Returns cost breakdown and any validation errors.
//
vps_order_put_response_t*
VPSAPI_putVps(apiClient_t *apiClient, vps_order_put_request_t *vps_order_put_request);


// Update VPS Order
//
// Updates settings on a VPS order.
//
void
VPSAPI_updateVpsInfo(apiClient_t *apiClient, char *id);


// Cancel VPS Service
//
// Cancels the VPS service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
//
vps_cancel_200_response_t*
VPSAPI_vPSCancel(apiClient_t *apiClient, int *id);


