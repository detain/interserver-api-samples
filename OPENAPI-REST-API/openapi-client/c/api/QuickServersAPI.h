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
#include "../model/quickserver.h"
#include "../model/quickserver_order.h"
#include "../model/quickserver_row.h"
#include "../model/quickservers_cancel_200_response.h"
#include "../model/restore_request.h"
#include "../model/reverse_dns_entries.h"
#include "../model/success_text_response.h"
#include "../model/text_response.h"
#include "../model/vps_backup_rows.h"
#include "../model/vps_templates_list.h"

// Enum ALL for QuickServersAPI_deleteQsBackup
typedef enum  { interserver_management_api_deleteQsBackup_ALL_NULL = 0, interserver_management_api_deleteQsBackup_ALL__0, interserver_management_api_deleteQsBackup_ALL__1 } interserver_management_api_deleteQsBackup_all_e;

// Enum ALL for QuickServersAPI_downloadQsBackup
typedef enum  { interserver_management_api_downloadQsBackup_ALL_NULL = 0, interserver_management_api_downloadQsBackup_ALL__0, interserver_management_api_downloadQsBackup_ALL__1 } interserver_management_api_downloadQsBackup_all_e;

// Enum ALL for QuickServersAPI_getQsBackups
typedef enum  { interserver_management_api_getQsBackups_ALL_NULL = 0, interserver_management_api_getQsBackups_ALL__0, interserver_management_api_getQsBackups_ALL__1 } interserver_management_api_getQsBackups_all_e;


// Place QuickServer Order
//
// Places a QuickServer order. On success, invoices are generated for payment; use `/billing/invoices/{id}` or `/pay/{method}/{invoices}` to complete payment.
//
void
QuickServersAPI_addQs(apiClient_t *apiClient);


// Delete QuickServer Backup
//
// Permanently removes the specified backup file from storage. Use `GET /qs/{id}/backups` to list available backup filenames before deleting.
//
success_text_response_t*
QuickServersAPI_deleteQsBackup(apiClient_t *apiClient, int *id, char *file, interserver_management_api_deleteQsBackup_all_e all);


// Block QuickServer SMTP
//
// Blocks outbound SMTP for the QuickServer to prevent email abuse. Use this action when responding to abuse notifications or to enforce outbound email policies.
//
queue_response_t*
QuickServersAPI_doQsBlockSmtp(apiClient_t *apiClient, int *id);


// Disable CD Drive
//
// Disables the virtual CD drive for the QuickServer.
//
queue_response_t*
QuickServersAPI_doQsDisableCd(apiClient_t *apiClient, int *id);


// Disable Quotas
//
// Disables disk quota enforcement for the QuickServer.
//
queue_response_t*
QuickServersAPI_doQsDisableQuota(apiClient_t *apiClient, int *id);


// Eject CD Drive
//
// Ejects the virtual CD from the QuickServer's CD drive.
//
queue_response_t*
QuickServersAPI_doQsEjectCd(apiClient_t *apiClient, int *id);


// Enable Quotas
//
// Enables disk quota enforcement for the QuickServer.
//
queue_response_t*
QuickServersAPI_doQsEnableQuota(apiClient_t *apiClient, int *id);


// Restart QuickServer
//
// Restarts the QuickServer. The server will be shut down and started again.
//
queue_response_t*
QuickServersAPI_doQsRestart(apiClient_t *apiClient, int *id);


// Start QuickServer
//
// Powers on the QuickServer.
//
queue_response_t*
QuickServersAPI_doQsStart(apiClient_t *apiClient, int *id);


// Stop QuickServer
//
// Powers off the QuickServer.
//
queue_response_t*
QuickServersAPI_doQsStop(apiClient_t *apiClient, int *id);


// Download QuickServer Backup
//
// Generates a pre-signed download URL for the specified backup file. The URL is valid for 24 hours. Use `GET /qs/{id}/backups` to list available backup filenames.
//
download_qs_backup_200_response_t*
QuickServersAPI_downloadQsBackup(apiClient_t *apiClient, int *id, download_qs_backup_request_t *download_qs_backup_request, interserver_management_api_downloadQsBackup_all_e all);


// Get QuickServer Ordering Information
//
// Returns QuickServer ordering metadata and available plans. Use these details to build the order form and to validate a plan selection.
//
quickserver_order_t*
QuickServersAPI_getNewQs(apiClient_t *apiClient);


// List QuickServer Backups
//
// Returns the available backups for the QuickServer across all storage systems (Swift, MinIO, ZFS). Use the backup `name` value with `PATCH /qs/{id}/backups` to download or `DELETE /qs/{id}/backups` to remove a backup. Use `POST /qs/{id}/restore` to restore from a backup.
//
vps_backup_rows_t*
QuickServersAPI_getQsBackups(apiClient_t *apiClient, int *id, interserver_management_api_getQsBackups_all_e all);


// Get QuickServer Hostname
//
// Retrieves the current hostname and any validation requirements for changing it.
//
void
QuickServersAPI_getQsChangeHostname(apiClient_t *apiClient, int *id);


// Get Change Root Password Info
//
// Retrieves instructions or metadata needed to reset the root password.
//
void
QuickServersAPI_getQsChangeRootPassword(apiClient_t *apiClient, int *id);


// Get Timezone Info
//
// Returns the list of available timezones that can be set on the QuickServer.
//
list_t*
QuickServersAPI_getQsChangeTimezone(apiClient_t *apiClient, int *id);


// Webuzo Change Pass Info
//
// Retrieves instructions or metadata for changing the Webuzo control panel password.
//
void
QuickServersAPI_getQsChangeWebuzoPassword(apiClient_t *apiClient, int *id);


// Get QuickServer Order
//
// Returns detailed QuickServer information, including credentials, IPs, and available client actions.
//
quickserver_t*
QuickServersAPI_getQsInfo(apiClient_t *apiClient, int *id);


// Insert CD Information
//
// Returns available ISO images that can be mounted in the QuickServer's virtual CD drive.
//
void
QuickServersAPI_getQsInsertCd(apiClient_t *apiClient, int *id);


// Get QuickServer Invoices
//
// Returns the billing invoices associated with this QuickServer.
//
charge_invoice_rows_t*
QuickServersAPI_getQsInvoices(apiClient_t *apiClient, int *id);


// List QuickServers
//
// Returns the QuickServer services on your account. Use the `qs_id` values with `/qs/{id}` for details or with the action endpoints (restart, backup, etc.) to manage each server.
//
list_t*
QuickServersAPI_getQsList(apiClient_t *apiClient);


// QuickServer Reinstall OS Options
//
// Returns the list of available operating system templates for reinstalling the QuickServer.
//
vps_templates_list_t*
QuickServersAPI_getQsReinstallOs(apiClient_t *apiClient, int *id);


// Reset QuickServer Password Info
//
// Returns information needed before resetting the QuickServer's root password.
//
void
QuickServersAPI_getQsResetPassword(apiClient_t *apiClient, int *id);


// Reverse DNS Info
//
// Returns the current reverse DNS (PTR record) entries for the QuickServer's IP addresses.
//
reverse_dns_entries_t*
QuickServersAPI_getQsReverseDns(apiClient_t *apiClient, int *id);


// VNC Setup Info
//
// Returns the current VNC connection information for the QuickServer.
//
void
QuickServersAPI_getQsSetupVnc(apiClient_t *apiClient, int *id);


// Get Traffic Usage
//
// Returns bandwidth traffic usage data for the QuickServer.
//
void
QuickServersAPI_getQsTrafficUsage(apiClient_t *apiClient, int *id);


// Get View Desktop Info
//
// Returns remote desktop connection information for the QuickServer.
//
void
QuickServersAPI_getQsViewDesktop(apiClient_t *apiClient, int *id);


// Resend QuickServer Welcome Email
//
// Resends the welcome email containing connection details and credentials for the QuickServer order.
//
text_response_t*
QuickServersAPI_getQsWelcomeEmail(apiClient_t *apiClient, char *id);


// Create QuickServer Backup
//
// Creates a backup of the QuickServer. The backup can be downloaded or restored later via the backups endpoints.
//
queue_response_t*
QuickServersAPI_postQsBackup(apiClient_t *apiClient, int *id);


// Update QuickServer Hostname
//
// Submits a hostname change request for the QuickServer.
//
queue_response_t*
QuickServersAPI_postQsChangeHostname(apiClient_t *apiClient, int *id);


// Change Root Password
//
// Triggers a root password reset for the QuickServer.
//
queue_response_t*
QuickServersAPI_postQsChangeRootPassword(apiClient_t *apiClient, int *id);


// Change QuickServer Timezone
//
// Changes the system timezone on the QuickServer. Use `GET /qs/{id}/change_timezone` to list available options first.
//
queue_response_t*
QuickServersAPI_postQsChangeTimezone(apiClient_t *apiClient, int *id, char *timezone);


// Change Webuzo Password
//
// Resets the Webuzo control panel password for the QuickServer.
//
queue_response_t*
QuickServersAPI_postQsChangeWebuzoPassword(apiClient_t *apiClient, int *id);


// Insert CD in QuickServer
//
// Mounts an ISO image in the QuickServer's virtual CD drive. Use `GET /qs/{id}/insert_cd` to list available images.
//
queue_response_t*
QuickServersAPI_postQsInsertCd(apiClient_t *apiClient, int *id);


// Reinstall QuickServer OS
//
// Reinstalls the operating system on the QuickServer. Warning - this will erase all data on the server.
//
queue_response_t*
QuickServersAPI_postQsReinstallOs(apiClient_t *apiClient, int *id);


// Reset QuickServer Password
//
// Resets the root password on the QuickServer to a new randomly generated password.
//
queue_response_t*
QuickServersAPI_postQsResetPassword(apiClient_t *apiClient, int *id);


// Update Reverse DNS
//
// Updates the reverse DNS (PTR record) entries for the QuickServer's IP addresses.
//
text_response_t*
QuickServersAPI_postQsReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);


// Setup VNC
//
// Sets up or refreshes the VNC console connection for the QuickServer.
//
queue_response_t*
QuickServersAPI_postQsSetupVnc(apiClient_t *apiClient, int *id);


// Search Traffic Usage
//
// Searches and filters the QuickServer's bandwidth traffic usage data by date range.
//
void
QuickServersAPI_postQsTrafficUsage(apiClient_t *apiClient, int *id);


// Update View Desktop
//
// Updates or refreshes the remote desktop session for the QuickServer.
//
void
QuickServersAPI_postQsViewDesktop(apiClient_t *apiClient, int *id);


// Restore QuickServer from Backup
//
// Initiates a restore of the QuickServer from a previously created backup. The restore operation overwrites the current disk contents. Use `GET /qs/{id}/backups` to retrieve available backup names.
//
queue_response_t*
QuickServersAPI_postQuickServerRestore(apiClient_t *apiClient, int *id, restore_request_t *restore_request);


// Validate QuickServer Order
//
// Validates a QuickServer order and returns pricing or validation errors. Use this before submitting the final order.
//
void
QuickServersAPI_putQs(apiClient_t *apiClient);


// Cancel QuickServer Order
//
// Cancels the QuickServer service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
//
quickservers_cancel_200_response_t*
QuickServersAPI_quickserversCancel(apiClient_t *apiClient, int *id);


// Update QuickServer Order
//
// Updates QuickServer metadata or stored settings associated with the order.
//
void
QuickServersAPI_updateQsInfo(apiClient_t *apiClient, char *id);


