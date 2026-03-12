#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/charge_invoice_rows.h"
#include "../model/get_account_info_401_response.h"
#include "../model/ssl_cancel_200_response.h"
#include "../model/success_text_response.h"


// Place SSL Cert Order
//
// Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
//
void
SSLCertificatesAPI_addSsl(apiClient_t *apiClient);


// SSL Cert Ordering Information
//
// Retrieves available SSL certificate types and pricing for ordering.
//
void
SSLCertificatesAPI_getNewSsl(apiClient_t *apiClient);


// Get SSL Cert Info
//
// Returns detailed information about a specific SSL certificate including its domain and expiration.
//
void
SSLCertificatesAPI_getSslInfo(apiClient_t *apiClient, int *id);


// Get SSL Cert Invoices
//
// Returns the billing invoices associated with this SSL certificate.
//
charge_invoice_rows_t*
SSLCertificatesAPI_getSslInvoices(apiClient_t *apiClient, int *id);


// List SSL Certs
//
// Returns all SSL certificate services on the account with their current status.
//
void
SSLCertificatesAPI_getSslList(apiClient_t *apiClient);


// Resend SSL Welcome Email
//
// Resends the welcome email for the order.
//
success_text_response_t*
SSLCertificatesAPI_getSslWelcomeEmail(apiClient_t *apiClient, int *id);


// Validate SSL Cert Order
//
// Validates an SSL certificate order before placing it.
//
void
SSLCertificatesAPI_putSsl(apiClient_t *apiClient);


// Cancel SSL Certificate Service
//
// Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
//
ssl_cancel_200_response_t*
SSLCertificatesAPI_sslCancel(apiClient_t *apiClient, int *id);


// Update SSL Cert Order
//
// Updates settings on an SSL certificate order.
//
void
SSLCertificatesAPI_updateSslInfo(apiClient_t *apiClient, char *id);


