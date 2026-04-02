#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/charge_invoice_rows.h"
#include "../model/floating_ips_cancel_200_response.h"
#include "../model/get_account_info_401_response.h"
#include "../model/object.h"
#include "../model/service_order_post_response.h"
#include "../model/success_text_response.h"


// Place Floating IP Order
//
// Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
//
service_order_post_response_t*
FloatingIPsAPI_addFloatingIp(apiClient_t *apiClient);


// Cancel Floating IP
//
// Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
//
floating_ips_cancel_200_response_t*
FloatingIPsAPI_floatingIpsCancel(apiClient_t *apiClient, int *id);


// View Floating IP
//
// Returns detailed information about a specific Floating IP service including its current target IP assignment.
//
object_t*
FloatingIPsAPI_getFloatingIpInfo(apiClient_t *apiClient, int *id);


// Get Floating IP Invoices
//
// Returns the billing invoices associated with this Floating IP service.
//
charge_invoice_rows_t*
FloatingIPsAPI_getFloatingIpInvoices(apiClient_t *apiClient, int *id);


// List Floating IPs
//
// Returns all Floating IP services on the account with their current status and assignment details.
//
void
FloatingIPsAPI_getFloatingIpsList(apiClient_t *apiClient);


// Resend Floating IPs Welcome Email
//
// Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
//
success_text_response_t*
FloatingIPsAPI_getFloatingIpsWelcomeEmail(apiClient_t *apiClient, int *id);


// Get Floating IP Ordering Information
//
// Retrieves available options and pricing for ordering a new Floating IP.
//
object_t*
FloatingIPsAPI_getNewFloatingIp(apiClient_t *apiClient);


// Change Floating IP Target
//
// Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
//
success_text_response_t*
FloatingIPsAPI_postFloatingIpsChangeIp(apiClient_t *apiClient, int *id, char *ip);


// Validate Floating IP Order
//
// Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
//
void
FloatingIPsAPI_putFloatingIps(apiClient_t *apiClient);


// Update Floating IP
//
// Updates settings on a Floating IP service, such as its label or configuration metadata.
//
success_text_response_t*
FloatingIPsAPI_updateFloatingIpInfo(apiClient_t *apiClient, char *id);


