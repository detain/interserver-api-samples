/*
 * PostOauthCallback_request.h
 *
 * 
 */

#ifndef _PostOauthCallback_request_H_
#define _PostOauthCallback_request_H_


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

class PostOauthCallback_request : public Object {
public:
	/*! \brief Constructor.
	 */
	PostOauthCallback_request();
	PostOauthCallback_request(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PostOauthCallback_request();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The OAuth provider name (e.g. `Google`).
	 */
	std::string getProvider();

	/*! \brief Set The OAuth provider name (e.g. `Google`).
	 */
	void setProvider(std::string  provider);

private:
	std::string provider;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PostOauthCallback_request_H_ */
