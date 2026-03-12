/*
 * PatchOauthTwoFactor_200_response.h
 *
 * 
 */

#ifndef _PatchOauthTwoFactor_200_response_H_
#define _PatchOauthTwoFactor_200_response_H_


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

class PatchOauthTwoFactor_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	PatchOauthTwoFactor_200_response();
	PatchOauthTwoFactor_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PatchOauthTwoFactor_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the 2FA verification succeeded and the user is now logged in.
	 */
	bool getLogin();

	/*! \brief Set Whether the 2FA verification succeeded and the user is now logged in.
	 */
	void setLogin(bool  login);

private:
	bool login;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PatchOauthTwoFactor_200_response_H_ */
