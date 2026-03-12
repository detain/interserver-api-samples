
/*
 * GetAccountTfaSetup_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetAccountTfaSetup_200_response_H_
#define TINY_CPP_CLIENT_GetAccountTfaSetup_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetAccountTfaSetup_200_response{
public:

    /*! \brief Constructor.
	 */
    GetAccountTfaSetup_200_response();
    GetAccountTfaSetup_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetAccountTfaSetup_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Base64-encoded secret key for TOTP setup.
	 */
	std::string get2faGoogleKey();

	/*! \brief Set Base64-encoded secret key for TOTP setup.
	 */
	void set2faGoogleKey(std::string 2fa_google_key);
	/*! \brief Get Human-readable formatted key (chunks of 4 characters).
	 */
	std::string get2faGoogleSplit();

	/*! \brief Set Human-readable formatted key (chunks of 4 characters).
	 */
	void set2faGoogleSplit(std::string 2fa_google_split);


    private:
    std::string 2fa_google_key{};
    std::string 2fa_google_split{};
};
}

#endif /* TINY_CPP_CLIENT_GetAccountTfaSetup_200_response_H_ */
