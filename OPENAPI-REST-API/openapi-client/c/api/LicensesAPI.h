#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/charge_invoice_rows.h"
#include "../model/get_account_info_401_response.h"
#include "../model/ip_object.h"
#include "../model/license.h"
#include "../model/license_row.h"
#include "../model/licenses_cancel_200_response.h"
#include "../model/licenses_order.h"
#include "../model/success_text_response.h"


// Place License Order
//
// Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
//
void
LicensesAPI_addLicense(apiClient_t *apiClient);


// Get License
//
// Returns detailed information about a specific license including its type, IP assignment, and status.
//
license_t*
LicensesAPI_getLicenseInfo(apiClient_t *apiClient, int *id);


// Get License Invoices
//
// Returns the billing invoices associated with this license service.
//
charge_invoice_rows_t*
LicensesAPI_getLicenseInvoices(apiClient_t *apiClient, int *id);


// List Licenses
//
// Returns all software license services on the account with their current status and IP assignments.
//
list_t*
LicensesAPI_getLicenseList(apiClient_t *apiClient);


// Get License Order Information for Category
//
// Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
//
void
LicensesAPI_getLicenseOrderCatTagInfo(apiClient_t *apiClient, char *catTag);


// Resend License Welcome Email
//
// Resends the welcome email for the license service. The email contains the license key and activation instructions.
//
success_text_response_t*
LicensesAPI_getLicensesWelcomeEmail(apiClient_t *apiClient, int *id);


// Get License Order Information
//
// Retrieves available license types, categories, and pricing for ordering a new license.
//
licenses_order_t*
LicensesAPI_getNewLicense(apiClient_t *apiClient);


// Cancel License
//
// Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
//
licenses_cancel_200_response_t*
LicensesAPI_licensesCancel(apiClient_t *apiClient, int *id);


// Change License IP
//
// Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
//
success_text_response_t*
LicensesAPI_postLicenseChangeIp(apiClient_t *apiClient, int *id, ip_object_t *ip_object);


// Validate License Order
//
// Validates a license order before placing it. Use this to check for errors before committing to a purchase.
//
void
LicensesAPI_putLicenses(apiClient_t *apiClient);


// Update License
//
// Updates settings on a license service such as its assigned IP.
//
void
LicensesAPI_updateLicenseInfo(apiClient_t *apiClient, char *id);


