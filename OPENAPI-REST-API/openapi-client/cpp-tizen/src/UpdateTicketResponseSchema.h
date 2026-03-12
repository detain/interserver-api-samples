/*
 * UpdateTicketResponseSchema.h
 *
 * 
 */

#ifndef _UpdateTicketResponseSchema_H_
#define _UpdateTicketResponseSchema_H_


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

class UpdateTicketResponseSchema : public Object {
public:
	/*! \brief Constructor.
	 */
	UpdateTicketResponseSchema();
	UpdateTicketResponseSchema(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UpdateTicketResponseSchema();

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
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string  message);

private:
	bool success;
	std::string message;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UpdateTicketResponseSchema_H_ */
