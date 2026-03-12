/*
 * ViewTicketResponse.h
 *
 * Ticket details
 */

#ifndef _ViewTicketResponse_H_
#define _ViewTicketResponse_H_


#include <string>
#include "TicketCustomFieldDetails.h"
#include "TicketDetails.h"
#include "TicketPostDetails.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Ticket details
 *
 *  \ingroup Models
 *
 */

class ViewTicketResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ViewTicketResponse();
	ViewTicketResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ViewTicketResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool  success);
	/*! \brief Get 
	 */
	TicketDetails getTicket();

	/*! \brief Set 
	 */
	void setTicket(TicketDetails  ticket);
	/*! \brief Get 
	 */
	TicketCustomFieldDetails getTicketCustomFields();

	/*! \brief Set 
	 */
	void setTicketCustomFields(TicketCustomFieldDetails  ticket_custom_fields);
	/*! \brief Get 
	 */
	TicketPostDetails getTicketPosts();

	/*! \brief Set 
	 */
	void setTicketPosts(TicketPostDetails  ticket_posts);

private:
	bool success;
	TicketDetails ticket;
	TicketCustomFieldDetails ticket_custom_fields;
	TicketPostDetails ticket_posts;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ViewTicketResponse_H_ */
