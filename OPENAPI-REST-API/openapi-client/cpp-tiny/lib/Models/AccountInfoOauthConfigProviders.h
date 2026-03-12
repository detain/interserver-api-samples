
/*
 * AccountInfoOauthConfigProviders.h
 *
 * Map of OAuth providers and their linked status on the account.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoOauthConfigProviders_H_
#define TINY_CPP_CLIENT_AccountInfoOauthConfigProviders_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoOauthConfigProviders_value.h"
#include <map>

namespace Tiny {


/*! \brief Map of OAuth providers and their linked status on the account.
 *
 *  \ingroup Models
 *
 */

class AccountInfoOauthConfigProviders{
public:

    /*! \brief Constructor.
	 */
    AccountInfoOauthConfigProviders();
    AccountInfoOauthConfigProviders(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoOauthConfigProviders();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoOauthConfigProviders_H_ */
