/*
 * MailAlertsResponse.h
 *
 * Alert configuration entries for a mail service.
 */

#ifndef _MailAlertsResponse_H_
#define _MailAlertsResponse_H_


#include <string>
#include "MailAlertsResponse_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Alert configuration entries for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailAlertsResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	MailAlertsResponse();
	MailAlertsResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailAlertsResponse();

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

#endif /* _MailAlertsResponse_H_ */
