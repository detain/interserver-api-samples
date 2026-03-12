
/*
 * Home_ticketStatus.h
 *
 * Ticket statuses.
 */

#ifndef TINY_CPP_CLIENT_Home_ticketStatus_H_
#define TINY_CPP_CLIENT_Home_ticketStatus_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Ticket statuses.
 *
 *  \ingroup Models
 *
 */

class Home_ticketStatus{
public:

    /*! \brief Constructor.
	 */
    Home_ticketStatus();
    Home_ticketStatus(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_ticketStatus();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Count of open tickets.
	 */
	int getOpen();

	/*! \brief Set Count of open tickets.
	 */
	void setOpen(int open);
	/*! \brief Get Count of tickets on hold.
	 */
	int getOnHold();

	/*! \brief Set Count of tickets on hold.
	 */
	void setOnHold(int onHold);


    private:
    int open{};
    int onHold{};
};
}

#endif /* TINY_CPP_CLIENT_Home_ticketStatus_H_ */
