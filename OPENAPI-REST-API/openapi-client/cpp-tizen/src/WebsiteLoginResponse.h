/*
 * WebsiteLoginResponse.h
 *
 * Response from a website login request.
 */

#ifndef _WebsiteLoginResponse_H_
#define _WebsiteLoginResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response from a website login request.
 *
 *  \ingroup Models
 *
 */

class WebsiteLoginResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteLoginResponse();
	WebsiteLoginResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteLoginResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getLocation();

	/*! \brief Set 
	 */
	void setLocation(std::string  location);

private:
	std::string type;
	std::string location;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteLoginResponse_H_ */
