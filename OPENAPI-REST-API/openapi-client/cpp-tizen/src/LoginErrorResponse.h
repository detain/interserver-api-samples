/*
 * LoginErrorResponse.h
 *
 * Error resposne during login indicating further action.
 */

#ifndef _LoginErrorResponse_H_
#define _LoginErrorResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Error resposne during login indicating further action.
 *
 *  \ingroup Models
 *
 */

class LoginErrorResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	LoginErrorResponse();
	LoginErrorResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LoginErrorResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getMessage();

	/*! \brief Set 
	 */
	void setMessage(std::string  message);
	/*! \brief Get 
	 */
	std::string getField();

	/*! \brief Set 
	 */
	void setField(std::string  field);

private:
	std::string message;
	std::string field;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LoginErrorResponse_H_ */
