/*
 * AccountInfo_oauthproviders.h
 *
 * 
 */

#ifndef _AccountInfo_oauthproviders_H_
#define _AccountInfo_oauthproviders_H_


#include <string>
#include "AccountInfoOauthConfigProviders.h"
#include "AnyType.h"
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

class AccountInfo_oauthproviders : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfo_oauthproviders();
	AccountInfo_oauthproviders(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfo_oauthproviders();

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

#endif /* _AccountInfo_oauthproviders_H_ */
