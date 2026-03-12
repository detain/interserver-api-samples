/*
 * PostOauthCallback_200_response.h
 *
 * 
 */

#ifndef _PostOauthCallback_200_response_H_
#define _PostOauthCallback_200_response_H_


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

class PostOauthCallback_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	PostOauthCallback_200_response();
	PostOauthCallback_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PostOauthCallback_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the user was logged in to an existing account.
	 */
	bool getLogin();

	/*! \brief Set Whether the user was logged in to an existing account.
	 */
	void setLogin(bool  login);
	/*! \brief Get Whether a new account was created.
	 */
	bool getSignup();

	/*! \brief Set Whether a new account was created.
	 */
	void setSignup(bool  signup);
	/*! \brief Get Whether the OAuth provider was linked to an existing account.
	 */
	bool getLinked();

	/*! \brief Set Whether the OAuth provider was linked to an existing account.
	 */
	void setLinked(bool  linked);
	/*! \brief Get The account ID associated with the OAuth login.
	 */
	int getAccountId();

	/*! \brief Set The account ID associated with the OAuth login.
	 */
	void setAccountId(int  account_id);
	/*! \brief Get Error code if additional verification is needed (e.g. `2fa_required`).
	 */
	std::string getErrorCode();

	/*! \brief Set Error code if additional verification is needed (e.g. `2fa_required`).
	 */
	void setErrorCode(std::string  error_code);

private:
	bool login;
	bool signup;
	bool linked;
	int account_id;
	std::string error_code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PostOauthCallback_200_response_H_ */
