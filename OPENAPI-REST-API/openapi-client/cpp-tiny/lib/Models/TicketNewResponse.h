
/*
 * TicketNewResponse.h
 *
 * Response returned after creating a new support ticket.
 */

#ifndef TINY_CPP_CLIENT_TicketNewResponse_H_
#define TINY_CPP_CLIENT_TicketNewResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Response returned after creating a new support ticket.
 *
 *  \ingroup Models
 *
 */

class TicketNewResponse{
public:

    /*! \brief Constructor.
	 */
    TicketNewResponse();
    TicketNewResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TicketNewResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string text);
	/*! \brief Get 
	 */
	bool isSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool success);
	/*! \brief Get 
	 */
	int getTicketId();

	/*! \brief Set 
	 */
	void setTicketId(int ticket_id);


    private:
    std::string text{};
    bool success{};
    int ticket_id{};
};
}

#endif /* TINY_CPP_CLIENT_TicketNewResponse_H_ */
