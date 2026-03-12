/*
 * AccountInfoOauthConfigProviders_value.h
 *
 * 
 */

#ifndef _AccountInfoOauthConfigProviders_value_H_
#define _AccountInfoOauthConfigProviders_value_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoOauthConfigProviders_value : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoOauthConfigProviders_value();
	AccountInfoOauthConfigProviders_value(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoOauthConfigProviders_value();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getEnabled();

	/*! \brief Set 
	 */
	void setEnabled(bool  enabled);
	/*! \brief Get 
	 */
	bool getLinked();

	/*! \brief Set 
	 */
	void setLinked(bool  linked);
	/*! \brief Get 
	 */
	std::string getAccount();

	/*! \brief Set 
	 */
	void setAccount(std::string  account);
	/*! \brief Get 
	 */
	std::string getUrl();

	/*! \brief Set 
	 */
	void setUrl(std::string  url);

private:
	bool enabled;
	bool linked;
	std::string account;
	std::string url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoOauthConfigProviders_value_H_ */
