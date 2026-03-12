
/*
 * AccountInfoOauthConfig.h
 *
 * OAuth integration configuration including callback URL and available providers.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoOauthConfig_H_
#define TINY_CPP_CLIENT_AccountInfoOauthConfig_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoOauthConfigProviders.h"

namespace Tiny {


/*! \brief OAuth integration configuration including callback URL and available providers.
 *
 *  \ingroup Models
 *
 */

class AccountInfoOauthConfig{
public:

    /*! \brief Constructor.
	 */
    AccountInfoOauthConfig();
    AccountInfoOauthConfig(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoOauthConfig();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getCallback();

	/*! \brief Set 
	 */
	void setCallback(std::string callback);
	/*! \brief Get 
	 */
	AccountInfoOauthConfigProviders&lt;std::string, AccountInfoOauthConfigProviders_value&gt; getProviders();

	/*! \brief Set 
	 */
	void setProviders(AccountInfoOauthConfigProviders&lt;std::string, AccountInfoOauthConfigProviders_value&gt; providers);


    private:
    std::string callback{};
    AccountInfoOauthConfigProviders&lt;std::string, AccountInfoOauthConfigProviders_value&gt; providers;
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoOauthConfig_H_ */
