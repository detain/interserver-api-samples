/*
 * MailDelistRequest.h
 *
 * Payload for removing a sender from mail blocklists.
 */

#ifndef _MailDelistRequest_H_
#define _MailDelistRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Payload for removing a sender from mail blocklists.
 *
 *  \ingroup Models
 *
 */

class MailDelistRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	MailDelistRequest();
	MailDelistRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailDelistRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Email address to delist.
	 */
	std::string getUnblock();

	/*! \brief Set Email address to delist.
	 */
	void setUnblock(std::string  unblock);

private:
	std::string unblock;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailDelistRequest_H_ */
