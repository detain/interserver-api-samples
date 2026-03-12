#ifndef TINY_CPP_CLIENT_TicketsApi_H_
#define TINY_CPP_CLIENT_TicketsApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "CloseTicketResponseSchema.h"
#include "GetAccountInfo_401_response.h"
#include "ReplyTicketRequest.h"
#include "ReplyTicketResponseSchema.h"
#include "TicketNew.h"
#include "TicketNewResponse.h"
#include "Tickets.h"
#include "UpdateTicket.h"
#include "UpdateTicketResponseSchema.h"
#include "ViewTicketResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class TicketsApi : public Service {
public:
    TicketsApi() = default;

    virtual ~TicketsApi() = default;

    /**
    * Create New Ticket.
    *
    * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
    * \param ticketNew  *Required*
    */
    Response<
                TicketNewResponse
        >
    addNewTicket(
            
            TicketNew ticketNew
            
    );
    /**
    * Close Ticket.
    *
    * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
    * \param id Ticket ID *Required*
    */
    Response<
                CloseTicketResponseSchema
        >
    closeTicket(
            
            std::string id
            
    );
    /**
    * Close Ticket.
    *
    * Closes the support ticket.
    * \param id Ticket ID number. *Required*
    */
    Response<
                ViewTicketResponse
        >
    deleteTicketInfo(
            
            long id
            
    );
    /**
    * Gets Information for creating a new ticket..
    *
    * Returns the form data needed to create a new support ticket, such as available departments and service categories.
    */
    Response<
            String
        >
    getNewTicket(
    );
    /**
    * Get Ticket Information.
    *
    * Returns the full details of a support ticket including its history of replies.
    * \param id Ticket ID number. *Required*
    */
    Response<
                ViewTicketResponse
        >
    getTicketInfo(
            
            long id
            
    );
    /**
    * List Support Tickets.
    *
    * Returns a paginated list of support tickets on the account. Filter by status and time period.
    * \param page Page number for paginated results.
    * \param period How far back to show tickets from. Value is in days.
    * \param view The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
    */
    Response<
                Tickets
        >
    getTicketsList(
            
            int page
            , 
            
            std::string period
            , 
            
            std::string view
            
    );
    /**
    * Reply To Ticket.
    *
    * Adds a reply to an existing support ticket.
    * \param id Ticket ID number. *Required*
    */
    Response<
                ViewTicketResponse
        >
    postTicketInfo(
            
            long id
            
    );
    /**
    * Search Support Tickets.
    *
    * Searches support tickets by email, subject, or ticket mask ID.
    */
    Response<
                Tickets
        >
    postTicketsList(
    );
    /**
    * Update Ticket.
    *
    * Updates a support ticket's properties such as subject or status.
    * \param id Ticket ID number. *Required*
    */
    Response<
                ViewTicketResponse
        >
    putTicketInfo(
            
            long id
            
    );
    /**
    * Reply Ticket.
    *
    * Posts a reply to an existing support ticket thread.
    * \param id The ticket ID number. *Required*
    * \param replyTicketRequest 
    */
    Response<
                ReplyTicketResponseSchema
        >
    replyTicket(
            
            long id
            , 
            
            ReplyTicketRequest replyTicketRequest
            
    );
    /**
    * Update Ticket.
    *
    * Updates a support ticket's subject or body content.
    * \param id The ticket ID number. *Required*
    * \param updateTicket 
    */
    Response<
                UpdateTicketResponseSchema
        >
    updateTicketInfo(
            
            long id
            , 
            
            UpdateTicket updateTicket
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_TicketsApi_H_ */