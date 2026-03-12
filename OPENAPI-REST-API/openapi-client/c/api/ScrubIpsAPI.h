#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cancel_scrub_ip_200_response.h"
#include "../model/charge_invoice_rows.h"
#include "../model/create_filter.h"
#include "../model/create_filter_201_response.h"
#include "../model/create_filter_400_response.h"
#include "../model/create_filter_500_response.h"
#include "../model/create_firewall_rule.h"
#include "../model/create_geo_firewall_rule.h"
#include "../model/create_geo_rule_400_response.h"
#include "../model/create_rule_201_response.h"
#include "../model/create_rule_400_response.h"
#include "../model/create_rule_500_response.h"
#include "../model/delete_filter_200_response.h"
#include "../model/delete_filter_400_response.h"
#include "../model/delete_filter_500_response.h"
#include "../model/delete_firewall_rule.h"
#include "../model/delete_geo_firewall_rule.h"
#include "../model/disable_scrub_200_response.h"
#include "../model/disable_scrub_400_response.h"
#include "../model/disable_scrub_500_response.h"
#include "../model/enable_scrub_200_response.h"
#include "../model/enable_scrub_500_response.h"
#include "../model/get_account_info_401_response.h"
#include "../model/get_order_detail_200_response.h"
#include "../model/get_scrub_ip_details_200_response.h"
#include "../model/place_scrub_order_201_response.h"
#include "../model/scrub_ip_filter_types.h"
#include "../model/scrub_ip_place_order.h"
#include "../model/scrub_ips_delete_rule_200_response.h"
#include "../model/scrub_ips_delete_rule_400_response.h"
#include "../model/scrub_ips_delete_rule_500_response.h"
#include "../model/scrub_ips_log_row_schema.h"
#include "../model/scrub_ips_row_schema.h"


// Cancel Scrub IP Service
//
// Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
//
cancel_scrub_ip_200_response_t*
ScrubIpsAPI_cancelScrubIp(apiClient_t *apiClient, int *id);


// Create Traffic Filter
//
// Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
//
create_filter_201_response_t*
ScrubIpsAPI_createFilter(apiClient_t *apiClient, int *id, create_filter_t *create_filter);


// Create Geo Firewall Rule
//
// Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
//
create_rule_201_response_t*
ScrubIpsAPI_createGeoRule(apiClient_t *apiClient, int *id, create_geo_firewall_rule_t *create_geo_firewall_rule);


// Create Firewall Rule
//
// Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
//
create_rule_201_response_t*
ScrubIpsAPI_createRule(apiClient_t *apiClient, int *id, create_firewall_rule_t *create_firewall_rule);


// Delete Traffic Filter
//
// Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
//
delete_filter_200_response_t*
ScrubIpsAPI_deleteFilter(apiClient_t *apiClient, int *id, create_filter_t *create_filter);


// Disable Scrub Protection
//
// Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
//
disable_scrub_200_response_t*
ScrubIpsAPI_disableScrub(apiClient_t *apiClient, int *id);


// Enable Scrub Protection
//
// Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
//
enable_scrub_200_response_t*
ScrubIpsAPI_enableScrub(apiClient_t *apiClient, int *id);


// Get Scrub IP Ordering Information
//
// Returns the available Scrub IP service plans and pricing information needed to build an order form.
//
get_order_detail_200_response_t*
ScrubIpsAPI_getOrderDetail(apiClient_t *apiClient);


// Get Scrub IP Details
//
// Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
//
get_scrub_ip_details_200_response_t*
ScrubIpsAPI_getScrubIpDetails(apiClient_t *apiClient, int *id);


// List Scrub Filter Types
//
// Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
//
scrub_ip_filter_types_t*
ScrubIpsAPI_getScrubIpFilterTypes(apiClient_t *apiClient);


// Get ScrubIp Invoices
//
// Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
//
charge_invoice_rows_t*
ScrubIpsAPI_getScrubIpInvoices(apiClient_t *apiClient, int *id);


// Get Scrub IP Logs
//
// Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
//
list_t*
ScrubIpsAPI_getScrubIpLogs(apiClient_t *apiClient, char *id);


// List Scrub IP Services
//
// Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
//
list_t*
ScrubIpsAPI_getScrubIpsList(apiClient_t *apiClient);


// Place Scrub IP Order
//
// Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
//
place_scrub_order_201_response_t*
ScrubIpsAPI_placeScrubOrder(apiClient_t *apiClient, scrub_ip_place_order_t *scrub_ip_place_order);


// Delete Geo Firewall Rule
//
// Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
//
scrub_ips_delete_rule_200_response_t*
ScrubIpsAPI_scrubIpsDeleteGeoRule(apiClient_t *apiClient, int *id, delete_geo_firewall_rule_t *delete_geo_firewall_rule);


// Delete Firewall Rule
//
// Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
//
scrub_ips_delete_rule_200_response_t*
ScrubIpsAPI_scrubIpsDeleteRule(apiClient_t *apiClient, int *id, delete_firewall_rule_t *delete_firewall_rule);


