
/*
 * MailDelistRequest.h
 *
 * Payload for removing a sender from mail blocklists.
 */

#ifndef TINY_CPP_CLIENT_MailDelistRequest_H_
#define TINY_CPP_CLIENT_MailDelistRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Payload for removing a sender from mail blocklists.
 *
 *  \ingroup Models
 *
 */

class MailDelistRequest{
public:

    /*! \brief Constructor.
	 */
    MailDelistRequest();
    MailDelistRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailDelistRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Email address to delist.
	 */
	std::string getUnblock();

	/*! \brief Set Email address to delist.
	 */
	void setUnblock(std::string unblock);


    private:
    std::string unblock{};
};
}

#endif /* TINY_CPP_CLIENT_MailDelistRequest_H_ */
