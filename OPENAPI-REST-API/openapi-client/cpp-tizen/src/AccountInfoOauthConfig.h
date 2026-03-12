/*
 * AccountInfoOauthConfig.h
 *
 * OAuth integration configuration including callback URL and available providers.
 */

#ifndef _AccountInfoOauthConfig_H_
#define _AccountInfoOauthConfig_H_


#include <string>
#include "AccountInfoOauthConfigProviders.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief OAuth integration configuration including callback URL and available providers.
 *
 *  \ingroup Models
 *
 */

class AccountInfoOauthConfig : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoOauthConfig();
	AccountInfoOauthConfig(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoOauthConfig();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCallback();

	/*! \brief Set 
	 */
	void setCallback(std::string  callback);
	/*! \brief Get 
	 */
	AccountInfoOauthConfigProviders getProviders();

	/*! \brief Set 
	 */
	void setProviders(AccountInfoOauthConfigProviders  providers);

private:
	std::string callback;
	AccountInfoOauthConfigProviders providers;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoOauthConfig_H_ */
