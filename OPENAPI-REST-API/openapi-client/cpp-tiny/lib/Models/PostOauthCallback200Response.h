
/*
 * PostOauthCallback_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PostOauthCallback_200_response_H_
#define TINY_CPP_CLIENT_PostOauthCallback_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PostOauthCallback_200_response{
public:

    /*! \brief Constructor.
	 */
    PostOauthCallback_200_response();
    PostOauthCallback_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PostOauthCallback_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Whether the user was logged in to an existing account.
	 */
	bool isLogin();

	/*! \brief Set Whether the user was logged in to an existing account.
	 */
	void setLogin(bool login);
	/*! \brief Get Whether a new account was created.
	 */
	bool isSignup();

	/*! \brief Set Whether a new account was created.
	 */
	void setSignup(bool signup);
	/*! \brief Get Whether the OAuth provider was linked to an existing account.
	 */
	bool isLinked();

	/*! \brief Set Whether the OAuth provider was linked to an existing account.
	 */
	void setLinked(bool linked);
	/*! \brief Get The account ID associated with the OAuth login.
	 */
	int getAccountId();

	/*! \brief Set The account ID associated with the OAuth login.
	 */
	void setAccountId(int account_id);
	/*! \brief Get Error code if additional verification is needed (e.g. `2fa_required`).
	 */
	std::string getErrorCode();

	/*! \brief Set Error code if additional verification is needed (e.g. `2fa_required`).
	 */
	void setErrorCode(std::string error_code);


    private:
    bool login{};
    bool signup{};
    bool linked{};
    int account_id{};
    std::string error_code{};
};
}

#endif /* TINY_CPP_CLIENT_PostOauthCallback_200_response_H_ */
