
/*
 * AccountInfoOauthConfigProviders_value.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AccountInfoOauthConfigProviders_value_H_
#define TINY_CPP_CLIENT_AccountInfoOauthConfigProviders_value_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoOauthConfigProviders_value{
public:

    /*! \brief Constructor.
	 */
    AccountInfoOauthConfigProviders_value();
    AccountInfoOauthConfigProviders_value(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoOauthConfigProviders_value();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isEnabled();

	/*! \brief Set 
	 */
	void setEnabled(bool enabled);
	/*! \brief Get 
	 */
	bool isLinked();

	/*! \brief Set 
	 */
	void setLinked(bool linked);
	/*! \brief Get 
	 */
	std::string getAccount();

	/*! \brief Set 
	 */
	void setAccount(std::string account);
	/*! \brief Get 
	 */
	std::string getUrl();

	/*! \brief Set 
	 */
	void setUrl(std::string url);


    private:
    bool enabled{};
    bool linked{};
    std::string account{};
    std::string url{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoOauthConfigProviders_value_H_ */
