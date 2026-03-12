/*
 * PatchOauthTwoFactor_request.h
 *
 * 
 */

#ifndef _PatchOauthTwoFactor_request_H_
#define _PatchOauthTwoFactor_request_H_


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

class PatchOauthTwoFactor_request : public Object {
public:
	/*! \brief Constructor.
	 */
	PatchOauthTwoFactor_request();
	PatchOauthTwoFactor_request(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PatchOauthTwoFactor_request();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The account ID returned from the POST callback.
	 */
	int getAccountId();

	/*! \brief Set The account ID returned from the POST callback.
	 */
	void setAccountId(int  account_id);
	/*! \brief Get The 6-digit two-factor authentication code.
	 */
	std::string getCode();

	/*! \brief Set The 6-digit two-factor authentication code.
	 */
	void setCode(std::string  code);

private:
	int account_id;
	std::string code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PatchOauthTwoFactor_request_H_ */
