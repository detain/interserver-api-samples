
/*
 * MailAlertsResponse.h
 *
 * Alert configuration entries for a mail service.
 */

#ifndef TINY_CPP_CLIENT_MailAlertsResponse_H_
#define TINY_CPP_CLIENT_MailAlertsResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailAlertsResponse_inner.h"
#include <list>

namespace Tiny {


/*! \brief Alert configuration entries for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailAlertsResponse{
public:

    /*! \brief Constructor.
	 */
    MailAlertsResponse();
    MailAlertsResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailAlertsResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_MailAlertsResponse_H_ */
