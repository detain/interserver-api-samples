/*
 * EmailAddress.h
 *
 * an email address
 */

#ifndef _EmailAddress_H_
#define _EmailAddress_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief an email address
 *
 *  \ingroup Models
 *
 */

class EmailAddress : public Object {
public:
	/*! \brief Constructor.
	 */
	EmailAddress();
	EmailAddress(char* str);

	/*! \brief Destructor.
	 */
	virtual ~EmailAddress();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get an email address
	 */
	std::string getEmail();

	/*! \brief Set an email address
	 */
	void setEmail(std::string  email);

private:
	std::string email;
	void __init();
	void __cleanup();

};
}
}

#endif /* _EmailAddress_H_ */
