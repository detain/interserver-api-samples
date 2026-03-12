#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/charge_invoice_rows.h"
#include "../model/get_account_info_401_response.h"
#include "../model/get_website_buy_ip_200_response.h"
#include "../model/post_website_buy_ip_200_response.h"
#include "../model/post_website_buy_ip_request.h"
#include "../model/post_website_migration_200_response.h"
#include "../model/post_website_migration_request.h"
#include "../model/post_website_migration_request_1.h"
#include "../model/reverse_dns_entries.h"
#include "../model/success_text_response.h"
#include "../model/text_response.h"
#include "../model/webhosting_cancel_200_response.h"
#include "../model/website.h"
#include "../model/website_backups.h"
#include "../model/website_login_response.h"
#include "../model/website_row.h"
#include "../model/websites_order.h"


// Place Website Order
//
// Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
//
void
WebhostingAPI_addWebsite(apiClient_t *apiClient);


// Website Ordering Information
//
// Retrieves available webhosting plans and pricing for ordering.
//
websites_order_t*
WebhostingAPI_getNewWebsite(apiClient_t *apiClient);


// Get Website IP Information
//
// Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
//
get_website_buy_ip_200_response_t*
WebhostingAPI_getWebsiteBuyIp(apiClient_t *apiClient, int *id);


// Get Website Order
//
// Returns detailed information about a specific webhosting order including its domain, plan, and status.
//
website_t*
WebhostingAPI_getWebsiteInfo(apiClient_t *apiClient, int *id);


// Get Website Invoices
//
// Returns the billing invoices associated with this webhosting service.
//
charge_invoice_rows_t*
WebhostingAPI_getWebsiteInvoices(apiClient_t *apiClient, int *id);


// Get Website Listing
//
// Gets a listing of your webhosting orders and service details.
//
list_t*
WebhostingAPI_getWebsiteList(apiClient_t *apiClient);


// Get Website Backups
//
// Gets a list of the backups that exist for a website and their sizes.
//
website_backups_t*
WebhostingAPI_getWebsitesBackups(apiClient_t *apiClient, int *id);


// Hosting Panel Auto Login
//
// Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
//
website_login_response_t*
WebhostingAPI_getWebsitesLogin(apiClient_t *apiClient, int *id);


// Resend Website Welcome Email
//
// Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
//
success_text_response_t*
WebhostingAPI_getWebsitesWelcomeEmail(apiClient_t *apiClient, int *id);


// Get Website Reverse DNS
//
// Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
//
reverse_dns_entries_t*
WebhostingAPI_gettWebsiteReverseDns(apiClient_t *apiClient, int *id);


// Update Website IP DNS
//
// Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
//
post_website_buy_ip_200_response_t*
WebhostingAPI_postWebsiteBuyIp(apiClient_t *apiClient, int *id, post_website_buy_ip_request_t *post_website_buy_ip_request);


// Request Website Migration
//
// Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
//
post_website_migration_200_response_t*
WebhostingAPI_postWebsiteMigration(apiClient_t *apiClient, int *id, post_website_migration_request_t *post_website_migration_request);


// Update Website Reverse DNS
//
// Updates the reverse DNS entries for each of the IP addresses for the website.
//
text_response_t*
WebhostingAPI_postWebsitesReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);


// Validate Webhosting Order
//
// Validates a webhosting order before placing it.
//
void
WebhostingAPI_putWebsites(apiClient_t *apiClient);


// Update Website Order
//
// Updates settings on a webhosting order.
//
void
WebhostingAPI_updateWebsiteInfo(apiClient_t *apiClient, char *id);


// Cancel Website
//
// Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
//
webhosting_cancel_200_response_t*
WebhostingAPI_webhostingCancel(apiClient_t *apiClient, char *id);


