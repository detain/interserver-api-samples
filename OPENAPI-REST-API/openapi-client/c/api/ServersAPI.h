#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/add_server_200_response.h"
#include "../model/buy_it_now_list.h"
#include "../model/buy_it_now_server_order_200_response.h"
#include "../model/charge_invoice_rows.h"
#include "../model/get_account_info_401_response.h"
#include "../model/place_buy_now_server_request.h"
#include "../model/reverse_dns_entries.h"
#include "../model/server.h"
#include "../model/server_ipmi_live_info.h"
#include "../model/server_order.h"
#include "../model/server_row.h"
#include "../model/servers_buy_now_error.h"
#include "../model/servers_buy_now_response.h"
#include "../model/servers_cancel_200_response.h"
#include "../model/success_text_response.h"
#include "../model/text_response.h"

// Enum ACTION for ServersAPI_serverIpmiPowerPost
typedef enum  { interserver_management_api_serverIpmiPowerPost_ACTION_NULL = 0, interserver_management_api_serverIpmiPowerPost_ACTION_cycle, interserver_management_api_serverIpmiPowerPost_ACTION_reset, interserver_management_api_serverIpmiPowerPost_ACTION_on, interserver_management_api_serverIpmiPowerPost_ACTION_off, interserver_management_api_serverIpmiPowerPost_ACTION_soft } interserver_management_api_serverIpmiPowerPost_action_e;


// Place Server Order
//
// Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
//
add_server_200_response_t*
ServersAPI_addServer(apiClient_t *apiClient);


// Get Buy Now Server Options
//
// Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
//
buy_it_now_server_order_200_response_t*
ServersAPI_buyItNowServerOrder(apiClient_t *apiClient);


// List Marketplace Servers
//
// Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
//
buy_it_now_list_t*
ServersAPI_getMPServers(apiClient_t *apiClient);


// Server Ordering Information
//
// Retrieves available server configurations and pricing for ordering a new dedicated server.
//
server_order_t*
ServersAPI_getNewServer(apiClient_t *apiClient);


// Get Server Order
//
// Returns detailed information about a specific server including its hardware configuration, IPs, and status.
//
server_t*
ServersAPI_getServerInfo(apiClient_t *apiClient, int *id);


// Get Server Invoices
//
// Returns the billing invoices associated with this dedicated server.
//
charge_invoice_rows_t*
ServersAPI_getServerInvoices(apiClient_t *apiClient, int *id);


// List Servers
//
// Returns all dedicated server services on the account with their current status and configuration.
//
list_t*
ServersAPI_getServerList(apiClient_t *apiClient);


// Reverse DNS Info
//
// Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
//
reverse_dns_entries_t*
ServersAPI_getServerReverseDns(apiClient_t *apiClient, int *id);


// Resend Server Welcome Email
//
// Resends the welcome email for the order.
//
success_text_response_t*
ServersAPI_getServersWelcomeEmail(apiClient_t *apiClient, int *id);


// Place Buy Now Server Order
//
// Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
//
servers_buy_now_response_t*
ServersAPI_placeBuyNowServer(apiClient_t *apiClient, place_buy_now_server_request_t *place_buy_now_server_request);


// Update Reverse DNS
//
// Updates the reverse DNS (PTR record) entries for the server's IP addresses.
//
text_response_t*
ServersAPI_postServerReverseDns(apiClient_t *apiClient, int *id, reverse_dns_entries_t *reverse_dns_entries);


// Validate Server Order
//
// Validates a server order before placing it. Use this to check for errors before committing to a purchase.
//
void
ServersAPI_putServers(apiClient_t *apiClient);


// Server IPMI Live Information
//
// Returns the current IPMI live connection information for the server.
//
server_ipmi_live_info_t*
ServersAPI_serverIpmiLiveGet(apiClient_t *apiClient, int *id);


// Server IPMI Live Setup
//
// Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
//
server_ipmi_live_info_t*
ServersAPI_serverIpmiLivePost(apiClient_t *apiClient, int *id, char *ip, int *asset);


// Get IPMI Power Status
//
// Returns the chassis power status from ipmi.
//
text_response_t*
ServersAPI_serverIpmiPowerGet(apiClient_t *apiClient, int *id);


// Server IPMI Power
//
// Uses the IPMI interface to set the Power status on the server.
//
text_response_t*
ServersAPI_serverIpmiPowerPost(apiClient_t *apiClient, int *id, interserver_management_api_serverIpmiPowerPost_action_e action, int *asset);


// Cancel Server Service
//
// Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
//
servers_cancel_200_response_t*
ServersAPI_serversCancel(apiClient_t *apiClient, int *id);


// Update Server Order
//
// Updates settings on a dedicated server order.
//
success_text_response_t*
ServersAPI_updateServerInfo(apiClient_t *apiClient, char *id);


