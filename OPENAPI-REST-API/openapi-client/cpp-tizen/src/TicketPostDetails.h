/*
 * TicketPostDetails.h
 *
 * Fetches every posts of ticket
 */

#ifndef _TicketPostDetails_H_
#define _TicketPostDetails_H_


#include <string>
#include "TicketPostDetails_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Fetches every posts of ticket
 *
 *  \ingroup Models
 *
 */

class TicketPostDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	TicketPostDetails();
	TicketPostDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TicketPostDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _TicketPostDetails_H_ */
