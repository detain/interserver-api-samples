/*
 * AccountInfoOauthConfigProviders.h
 *
 * Map of OAuth providers and their linked status on the account.
 */

#ifndef _AccountInfoOauthConfigProviders_H_
#define _AccountInfoOauthConfigProviders_H_


#include <string>
#include "AccountInfoOauthConfigProviders_value.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Map of OAuth providers and their linked status on the account.
 *
 *  \ingroup Models
 *
 */

class AccountInfoOauthConfigProviders : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoOauthConfigProviders();
	AccountInfoOauthConfigProviders(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoOauthConfigProviders();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoOauthConfigProviders_H_ */
