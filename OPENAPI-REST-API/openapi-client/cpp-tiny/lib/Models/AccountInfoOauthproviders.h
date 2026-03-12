
/*
 * AccountInfo_oauthproviders.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AccountInfo_oauthproviders_H_
#define TINY_CPP_CLIENT_AccountInfo_oauthproviders_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoOauthConfigProviders.h"
#include "AnyType.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfo_oauthproviders{
public:

    /*! \brief Constructor.
	 */
    AccountInfo_oauthproviders();
    AccountInfo_oauthproviders(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfo_oauthproviders();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_AccountInfo_oauthproviders_H_ */
