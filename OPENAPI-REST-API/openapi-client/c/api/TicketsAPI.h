#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/close_ticket_response_schema.h"
#include "../model/get_account_info_401_response.h"
#include "../model/reply_ticket_request.h"
#include "../model/reply_ticket_response_schema.h"
#include "../model/ticket_new.h"
#include "../model/ticket_new_response.h"
#include "../model/tickets.h"
#include "../model/update_ticket.h"
#include "../model/update_ticket_response_schema.h"
#include "../model/view_ticket_response.h"

// Enum PERIOD for TicketsAPI_getTicketsList
typedef enum  { interserver_management_api_getTicketsList_PERIOD_NULL = 0, interserver_management_api_getTicketsList_PERIOD__30, interserver_management_api_getTicketsList_PERIOD__90, interserver_management_api_getTicketsList_PERIOD__365, interserver_management_api_getTicketsList_PERIOD__1825, interserver_management_api_getTicketsList_PERIOD_all } interserver_management_api_getTicketsList_period_e;

// Enum VIEW for TicketsAPI_getTicketsList
typedef enum  { interserver_management_api_getTicketsList_VIEW_NULL = 0, interserver_management_api_getTicketsList_VIEW_Open, interserver_management_api_getTicketsList_VIEW_Closed, interserver_management_api_getTicketsList_VIEW_On Hold, interserver_management_api_getTicketsList_VIEW_In Progress } interserver_management_api_getTicketsList_view_e;


// Create New Ticket
//
// Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
//
ticket_new_response_t*
TicketsAPI_addNewTicket(apiClient_t *apiClient, ticket_new_t *ticket_new);


// Close Ticket
//
// Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
//
close_ticket_response_schema_t*
TicketsAPI_closeTicket(apiClient_t *apiClient, char *id);


// Close Ticket
//
// Closes the support ticket.
//
view_ticket_response_t*
TicketsAPI_deleteTicketInfo(apiClient_t *apiClient, double id);


// Gets Information for creating a new ticket.
//
// Returns the form data needed to create a new support ticket, such as available departments and service categories.
//
void
TicketsAPI_getNewTicket(apiClient_t *apiClient);


// Get Ticket Information
//
// Returns the full details of a support ticket including its history of replies.
//
view_ticket_response_t*
TicketsAPI_getTicketInfo(apiClient_t *apiClient, double id);


// List Support Tickets
//
// Returns a paginated list of support tickets on the account. Filter by status and time period.
//
tickets_t*
TicketsAPI_getTicketsList(apiClient_t *apiClient, int *page, interserver_management_api_getTicketsList_period_e period, interserver_management_api_getTicketsList_view_e view);


// Reply To Ticket
//
// Adds a reply to an existing support ticket.
//
view_ticket_response_t*
TicketsAPI_postTicketInfo(apiClient_t *apiClient, double id);


// Search Support Tickets
//
// Searches support tickets by email, subject, or ticket mask ID.
//
tickets_t*
TicketsAPI_postTicketsList(apiClient_t *apiClient);


// Update Ticket
//
// Updates a support ticket's properties such as subject or status.
//
view_ticket_response_t*
TicketsAPI_putTicketInfo(apiClient_t *apiClient, double id);


// Reply Ticket
//
// Posts a reply to an existing support ticket thread.
//
reply_ticket_response_schema_t*
TicketsAPI_replyTicket(apiClient_t *apiClient, double id, reply_ticket_request_t *reply_ticket_request);


// Update Ticket
//
// Updates a support ticket's subject or body content.
//
update_ticket_response_schema_t*
TicketsAPI_updateTicketInfo(apiClient_t *apiClient, double id, update_ticket_t *update_ticket);


