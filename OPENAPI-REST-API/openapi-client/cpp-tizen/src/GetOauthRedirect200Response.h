/*
 * GetOauthRedirect_200_response.h
 *
 * 
 */

#ifndef _GetOauthRedirect_200_response_H_
#define _GetOauthRedirect_200_response_H_


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

class GetOauthRedirect_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	GetOauthRedirect_200_response();
	GetOauthRedirect_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetOauthRedirect_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The URL to redirect the user to for OAuth authentication.
	 */
	std::string getRedirectUrl();

	/*! \brief Set The URL to redirect the user to for OAuth authentication.
	 */
	void setRedirectUrl(std::string  redirect_url);

private:
	std::string redirect_url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetOauthRedirect_200_response_H_ */
