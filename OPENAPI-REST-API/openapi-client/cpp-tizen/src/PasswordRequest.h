/*
 * PasswordRequest.h
 *
 * Request containing a password
 */

#ifndef _PasswordRequest_H_
#define _PasswordRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request containing a password
 *
 *  \ingroup Models
 *
 */

class PasswordRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	PasswordRequest();
	PasswordRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PasswordRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getPassword();

	/*! \brief Set 
	 */
	void setPassword(std::string  password);

private:
	std::string password;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PasswordRequest_H_ */
