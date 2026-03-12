#ifndef _TicketsManager_H_
#define _TicketsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
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
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Tickets Tickets
 * \ingroup Operations
 *  @{
 */
class TicketsManager {
public:
	TicketsManager();
	virtual ~TicketsManager();

/*! \brief Create New Ticket. *Synchronous*
 *
 * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
 * \param ticketNew  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addNewTicketSync(char * accessToken,
	std::shared_ptr<TicketNew> ticketNew, 
	void(* handler)(TicketNewResponse, Error, void* )
	, void* userData);

/*! \brief Create New Ticket. *Asynchronous*
 *
 * Creates a new support ticket. Optionally link it to a specific service by providing the service ID and module.
 * \param ticketNew  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addNewTicketAsync(char * accessToken,
	std::shared_ptr<TicketNew> ticketNew, 
	void(* handler)(TicketNewResponse, Error, void* )
	, void* userData);


/*! \brief Close Ticket. *Synchronous*
 *
 * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
 * \param id Ticket ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool closeTicketSync(char * accessToken,
	std::string id, 
	void(* handler)(CloseTicketResponseSchema, Error, void* )
	, void* userData);

/*! \brief Close Ticket. *Asynchronous*
 *
 * Closes the specified support ticket. Closed tickets can still be viewed but will no longer appear in the active inbox.
 * \param id Ticket ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool closeTicketAsync(char * accessToken,
	std::string id, 
	void(* handler)(CloseTicketResponseSchema, Error, void* )
	, void* userData);


/*! \brief Close Ticket. *Synchronous*
 *
 * Closes the support ticket.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);

/*! \brief Close Ticket. *Asynchronous*
 *
 * Closes the support ticket.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);


/*! \brief Gets Information for creating a new ticket.. *Synchronous*
 *
 * Returns the form data needed to create a new support ticket, such as available departments and service categories.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewTicketSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Gets Information for creating a new ticket.. *Asynchronous*
 *
 * Returns the form data needed to create a new support ticket, such as available departments and service categories.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewTicketAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Ticket Information. *Synchronous*
 *
 * Returns the full details of a support ticket including its history of replies.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);

/*! \brief Get Ticket Information. *Asynchronous*
 *
 * Returns the full details of a support ticket including its history of replies.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);


/*! \brief List Support Tickets. *Synchronous*
 *
 * Returns a paginated list of support tickets on the account. Filter by status and time period.
 * \param page Page number for paginated results.
 * \param period How far back to show tickets from. Value is in days.
 * \param view The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTicketsListSync(char * accessToken,
	int page, std::string period, std::string view, 
	void(* handler)(Tickets, Error, void* )
	, void* userData);

/*! \brief List Support Tickets. *Asynchronous*
 *
 * Returns a paginated list of support tickets on the account. Filter by status and time period.
 * \param page Page number for paginated results.
 * \param period How far back to show tickets from. Value is in days.
 * \param view The status of tickets to view. Possible values are Open, Closed, On Hold, and In Progress.  If not specified it will show all types.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTicketsListAsync(char * accessToken,
	int page, std::string period, std::string view, 
	void(* handler)(Tickets, Error, void* )
	, void* userData);


/*! \brief Reply To Ticket. *Synchronous*
 *
 * Adds a reply to an existing support ticket.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);

/*! \brief Reply To Ticket. *Asynchronous*
 *
 * Adds a reply to an existing support ticket.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);


/*! \brief Search Support Tickets. *Synchronous*
 *
 * Searches support tickets by email, subject, or ticket mask ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postTicketsListSync(char * accessToken,
	
	void(* handler)(Tickets, Error, void* )
	, void* userData);

/*! \brief Search Support Tickets. *Asynchronous*
 *
 * Searches support tickets by email, subject, or ticket mask ID.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postTicketsListAsync(char * accessToken,
	
	void(* handler)(Tickets, Error, void* )
	, void* userData);


/*! \brief Update Ticket. *Synchronous*
 *
 * Updates a support ticket's properties such as subject or status.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);

/*! \brief Update Ticket. *Asynchronous*
 *
 * Updates a support ticket's properties such as subject or status.
 * \param id Ticket ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData);


/*! \brief Reply Ticket. *Synchronous*
 *
 * Posts a reply to an existing support ticket thread.
 * \param id The ticket ID number. *Required*
 * \param replyTicketRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool replyTicketSync(char * accessToken,
	long long id, std::shared_ptr<ReplyTicketRequest> replyTicketRequest, 
	void(* handler)(ReplyTicketResponseSchema, Error, void* )
	, void* userData);

/*! \brief Reply Ticket. *Asynchronous*
 *
 * Posts a reply to an existing support ticket thread.
 * \param id The ticket ID number. *Required*
 * \param replyTicketRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool replyTicketAsync(char * accessToken,
	long long id, std::shared_ptr<ReplyTicketRequest> replyTicketRequest, 
	void(* handler)(ReplyTicketResponseSchema, Error, void* )
	, void* userData);


/*! \brief Update Ticket. *Synchronous*
 *
 * Updates a support ticket's subject or body content.
 * \param id The ticket ID number. *Required*
 * \param updateTicket 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateTicketInfoSync(char * accessToken,
	long long id, std::shared_ptr<UpdateTicket> updateTicket, 
	void(* handler)(UpdateTicketResponseSchema, Error, void* )
	, void* userData);

/*! \brief Update Ticket. *Asynchronous*
 *
 * Updates a support ticket's subject or body content.
 * \param id The ticket ID number. *Required*
 * \param updateTicket 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateTicketInfoAsync(char * accessToken,
	long long id, std::shared_ptr<UpdateTicket> updateTicket, 
	void(* handler)(UpdateTicketResponseSchema, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* TicketsManager_H_ */
