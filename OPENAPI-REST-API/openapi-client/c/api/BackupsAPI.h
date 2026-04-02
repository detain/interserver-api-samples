#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/backup.h"
#include "../model/backup_login_response.h"
#include "../model/backup_order_post_response.h"
#include "../model/backup_order_put_response.h"
#include "../model/backup_row.h"
#include "../model/backups_order.h"
#include "../model/cancel_backup_200_response.h"
#include "../model/charge_invoice_rows.h"
#include "../model/get_account_info_401_response.h"
#include "../model/success_text_response.h"


// Place Backup Order
//
// Places a new backup storage order and generates an invoice. On success, the response includes invoice IDs that can be used with `/billing/invoices/{id}` to view the invoice or `/pay/{method}/{invoices}` to complete payment. The service is provisioned after payment is confirmed.
//
backup_order_post_response_t*
BackupsAPI_addBackup(apiClient_t *apiClient, int *validateOnly, int *serviceType, char *coupon);


// Cancel Backup Service
//
// Cancels the specified backup storage service. The service remains accessible until the end of the current billing period. This action cannot be undone; a new order must be placed to restore service.
//
cancel_backup_200_response_t*
BackupsAPI_cancelBackup(apiClient_t *apiClient, int *id);


// Get Backup Service Details
//
// Returns detailed service information for the specified backup storage order, including `backup_username`, `backup_ip`, `backup_status`, and `backup_quota` in `serviceInfo`. Also returns `client_links`, `billingDetails`, `extraInfoTables`, `package`, and `custCurrency`.
//
backup_t*
BackupsAPI_getBackupInfo(apiClient_t *apiClient, int *id);


// Get Backup Order Invoices
//
// Retrieves invoices associated with the backup storage order. Use this to confirm billing status or locate invoices for payment.
//
charge_invoice_rows_t*
BackupsAPI_getBackupInvoices(apiClient_t *apiClient, int *id);


// Get Backup Storage Panel Login
//
// Creates and returns a login session URL for the backup storage panel. The returned session URL can be used to redirect the user directly into the storage management interface without requiring separate credentials.
//
backup_login_response_t*
BackupsAPI_getBackupLogin(apiClient_t *apiClient, int *id);


// List Backup Services
//
// Returns all backup storage services on your account. Each entry includes the `backup_id`, `backup_username`, `backup_ip`, `backup_status`, and `backup_quota`. Use the `backup_id` with `/backups/{id}` to retrieve full service details or `/backups/{id}/login` to obtain a storage panel session.
//
list_t*
BackupsAPI_getBackupsList(apiClient_t *apiClient);


// Resend Backup Welcome Email
//
// Resends the welcome email for the specified backup service. The email contains connection credentials and setup instructions. Use this when the original welcome email was lost or never received.
//
success_text_response_t*
BackupsAPI_getBackupsWelcomeEmail(apiClient_t *apiClient, int *id);


// Get Backup Order Form Data
//
// Returns available backup storage plans, pricing tiers, and form metadata needed to build an order form. Use the service type IDs from this response when submitting a validation request via `PUT /backups/order` or placing an order via `POST /backups/order`.
//
backups_order_t*
BackupsAPI_getNewBackup(apiClient_t *apiClient);


// Update Backup Information
//
// Updates backup storage service metadata, such as stored credentials or settings for the order.
//
success_text_response_t*
BackupsAPI_updateBackupInfo(apiClient_t *apiClient, int *id);


// Validate Backup Order
//
// Validates a backup storage order without placing it, returning calculated pricing and any validation errors. Use this to display a confirmation screen with the final price before submitting the order via `POST /backups/order`.
//
backup_order_put_response_t*
BackupsAPI_validateBackupOrder(apiClient_t *apiClient, int *validateOnly, int *serviceType, char *coupon);


