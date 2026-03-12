
/*
 * ViewTicketResponse.h
 *
 * Ticket details
 */

#ifndef TINY_CPP_CLIENT_ViewTicketResponse_H_
#define TINY_CPP_CLIENT_ViewTicketResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "TicketCustomFieldDetails.h"
#include "TicketDetails.h"
#include "TicketPostDetails.h"

namespace Tiny {


/*! \brief Ticket details
 *
 *  \ingroup Models
 *
 */

class ViewTicketResponse{
public:

    /*! \brief Constructor.
	 */
    ViewTicketResponse();
    ViewTicketResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ViewTicketResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool success);
	/*! \brief Get 
	 */
	TicketDetails getTicket();

	/*! \brief Set 
	 */
	void setTicket(TicketDetails ticket);
	/*! \brief Get 
	 */
	TicketCustomFieldDetails getTicketCustomFields();

	/*! \brief Set 
	 */
	void setTicketCustomFields(TicketCustomFieldDetails ticket_custom_fields);
	/*! \brief Get 
	 */
	TicketPostDetails getTicketPosts();

	/*! \brief Set 
	 */
	void setTicketPosts(TicketPostDetails ticket_posts);


    private:
    bool success{};
    TicketDetails ticket;
    TicketCustomFieldDetails ticket_custom_fields;
    TicketPostDetails ticket_posts;
};
}

#endif /* TINY_CPP_CLIENT_ViewTicketResponse_H_ */
