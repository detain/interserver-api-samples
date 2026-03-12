/*
 * GetAccountTfaSetup_200_response.h
 *
 * 
 */

#ifndef _GetAccountTfaSetup_200_response_H_
#define _GetAccountTfaSetup_200_response_H_


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

class GetAccountTfaSetup_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	GetAccountTfaSetup_200_response();
	GetAccountTfaSetup_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetAccountTfaSetup_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Base64-encoded secret key for TOTP setup.
	 */
	std::string get2faGoogleKey();

	/*! \brief Set Base64-encoded secret key for TOTP setup.
	 */
	void set2faGoogleKey(std::string  2fa_google_key);
	/*! \brief Get Human-readable formatted key (chunks of 4 characters).
	 */
	std::string get2faGoogleSplit();

	/*! \brief Set Human-readable formatted key (chunks of 4 characters).
	 */
	void set2faGoogleSplit(std::string  2fa_google_split);

private:
	std::string 2fa_google_key;
	std::string 2fa_google_split;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetAccountTfaSetup_200_response_H_ */
