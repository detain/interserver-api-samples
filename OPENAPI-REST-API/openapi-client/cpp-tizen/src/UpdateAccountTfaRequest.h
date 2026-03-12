/*
 * UpdateAccountTfa_request.h
 *
 * 
 */

#ifndef _UpdateAccountTfa_request_H_
#define _UpdateAccountTfa_request_H_


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

class UpdateAccountTfa_request : public Object {
public:
	/*! \brief Constructor.
	 */
	UpdateAccountTfa_request();
	UpdateAccountTfa_request(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UpdateAccountTfa_request();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The 6-digit verification code from your authenticator app.
	 */
	std::string get2faGoogleCode();

	/*! \brief Set The 6-digit verification code from your authenticator app.
	 */
	void set2faGoogleCode(std::string  2fa_google_code);

private:
	std::string 2fa_google_code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UpdateAccountTfa_request_H_ */
