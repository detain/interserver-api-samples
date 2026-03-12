/*
 * Home_ticketStatus.h
 *
 * Ticket statuses.
 */

#ifndef _Home_ticketStatus_H_
#define _Home_ticketStatus_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Ticket statuses.
 *
 *  \ingroup Models
 *
 */

class Home_ticketStatus : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_ticketStatus();
	Home_ticketStatus(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_ticketStatus();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Count of open tickets.
	 */
	int getOpen();

	/*! \brief Set Count of open tickets.
	 */
	void setOpen(int  open);
	/*! \brief Get Count of tickets on hold.
	 */
	int getOnHold();

	/*! \brief Set Count of tickets on hold.
	 */
	void setOnHold(int  onHold);

private:
	int open;
	int onHold;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_ticketStatus_H_ */
