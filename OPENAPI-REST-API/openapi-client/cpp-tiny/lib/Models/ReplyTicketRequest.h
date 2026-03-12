
/*
 * ReplyTicketRequest.h
 *
 * Post reply to your ticket
 */

#ifndef TINY_CPP_CLIENT_ReplyTicketRequest_H_
#define TINY_CPP_CLIENT_ReplyTicketRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Post reply to your ticket
 *
 *  \ingroup Models
 *
 */

class ReplyTicketRequest{
public:

    /*! \brief Constructor.
	 */
    ReplyTicketRequest();
    ReplyTicketRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ReplyTicketRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getContent();

	/*! \brief Set 
	 */
	void setContent(std::string content);


    private:
    std::string content{};
};
}

#endif /* TINY_CPP_CLIENT_ReplyTicketRequest_H_ */
