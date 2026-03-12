/*
 * ReplyTicketRequest.h
 *
 * Post reply to your ticket
 */

#ifndef _ReplyTicketRequest_H_
#define _ReplyTicketRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Post reply to your ticket
 *
 *  \ingroup Models
 *
 */

class ReplyTicketRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ReplyTicketRequest();
	ReplyTicketRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ReplyTicketRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getContent();

	/*! \brief Set 
	 */
	void setContent(std::string  content);

private:
	std::string content;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ReplyTicketRequest_H_ */
