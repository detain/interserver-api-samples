
/*
 * PatchOauthTwoFactor_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PatchOauthTwoFactor_200_response_H_
#define TINY_CPP_CLIENT_PatchOauthTwoFactor_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PatchOauthTwoFactor_200_response{
public:

    /*! \brief Constructor.
	 */
    PatchOauthTwoFactor_200_response();
    PatchOauthTwoFactor_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PatchOauthTwoFactor_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Whether the 2FA verification succeeded and the user is now logged in.
	 */
	bool isLogin();

	/*! \brief Set Whether the 2FA verification succeeded and the user is now logged in.
	 */
	void setLogin(bool login);


    private:
    bool login{};
};
}

#endif /* TINY_CPP_CLIENT_PatchOauthTwoFactor_200_response_H_ */
