
/*
 * TicketPostDetails.h
 *
 * Fetches every posts of ticket
 */

#ifndef TINY_CPP_CLIENT_TicketPostDetails_H_
#define TINY_CPP_CLIENT_TicketPostDetails_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "TicketPostDetails_inner.h"
#include <list>

namespace Tiny {


/*! \brief Fetches every posts of ticket
 *
 *  \ingroup Models
 *
 */

class TicketPostDetails{
public:

    /*! \brief Constructor.
	 */
    TicketPostDetails();
    TicketPostDetails(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TicketPostDetails();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_TicketPostDetails_H_ */
