
/*
 * UpdateAccountTfa_request.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_UpdateAccountTfa_request_H_
#define TINY_CPP_CLIENT_UpdateAccountTfa_request_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class UpdateAccountTfa_request{
public:

    /*! \brief Constructor.
	 */
    UpdateAccountTfa_request();
    UpdateAccountTfa_request(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~UpdateAccountTfa_request();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The 6-digit verification code from your authenticator app.
	 */
	std::string get2faGoogleCode();

	/*! \brief Set The 6-digit verification code from your authenticator app.
	 */
	void set2faGoogleCode(std::string 2fa_google_code);


    private:
    std::string 2fa_google_code{};
};
}

#endif /* TINY_CPP_CLIENT_UpdateAccountTfa_request_H_ */
