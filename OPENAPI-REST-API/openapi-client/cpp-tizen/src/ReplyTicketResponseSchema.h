/*
 * ReplyTicketResponseSchema.h
 *
 * 
 */

#ifndef _ReplyTicketResponseSchema_H_
#define _ReplyTicketResponseSchema_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ReplyTicketResponseSchema : public Object {
public:
	/*! \brief Constructor.
	 */
	ReplyTicketResponseSchema();
	ReplyTicketResponseSchema(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ReplyTicketResponseSchema();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool  success);
	/*! \brief Get 
	 */
	int getPostId();

	/*! \brief Set 
	 */
	void setPostId(int  post_id);

private:
	bool success;
	int post_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ReplyTicketResponseSchema_H_ */
