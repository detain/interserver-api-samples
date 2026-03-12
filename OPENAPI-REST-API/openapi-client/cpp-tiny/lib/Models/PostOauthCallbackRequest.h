
/*
 * PostOauthCallback_request.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PostOauthCallback_request_H_
#define TINY_CPP_CLIENT_PostOauthCallback_request_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PostOauthCallback_request{
public:

    /*! \brief Constructor.
	 */
    PostOauthCallback_request();
    PostOauthCallback_request(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PostOauthCallback_request();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The OAuth provider name (e.g. `Google`).
	 */
	std::string getProvider();

	/*! \brief Set The OAuth provider name (e.g. `Google`).
	 */
	void setProvider(std::string provider);


    private:
    std::string provider{};
};
}

#endif /* TINY_CPP_CLIENT_PostOauthCallback_request_H_ */
