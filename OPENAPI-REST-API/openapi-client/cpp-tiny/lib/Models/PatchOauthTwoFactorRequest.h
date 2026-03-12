
/*
 * PatchOauthTwoFactor_request.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PatchOauthTwoFactor_request_H_
#define TINY_CPP_CLIENT_PatchOauthTwoFactor_request_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PatchOauthTwoFactor_request{
public:

    /*! \brief Constructor.
	 */
    PatchOauthTwoFactor_request();
    PatchOauthTwoFactor_request(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PatchOauthTwoFactor_request();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The account ID returned from the POST callback.
	 */
	int getAccountId();

	/*! \brief Set The account ID returned from the POST callback.
	 */
	void setAccountId(int account_id);
	/*! \brief Get The 6-digit two-factor authentication code.
	 */
	std::string getCode();

	/*! \brief Set The 6-digit two-factor authentication code.
	 */
	void setCode(std::string code);


    private:
    int account_id{};
    std::string code{};
};
}

#endif /* TINY_CPP_CLIENT_PatchOauthTwoFactor_request_H_ */
