
/*
 * GetOauthRedirect_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetOauthRedirect_200_response_H_
#define TINY_CPP_CLIENT_GetOauthRedirect_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetOauthRedirect_200_response{
public:

    /*! \brief Constructor.
	 */
    GetOauthRedirect_200_response();
    GetOauthRedirect_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetOauthRedirect_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The URL to redirect the user to for OAuth authentication.
	 */
	std::string getRedirectUrl();

	/*! \brief Set The URL to redirect the user to for OAuth authentication.
	 */
	void setRedirectUrl(std::string redirect_url);


    private:
    std::string redirect_url{};
};
}

#endif /* TINY_CPP_CLIENT_GetOauthRedirect_200_response_H_ */
