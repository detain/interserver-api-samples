/*
 * LoginSuccessResponse.h
 *
 * The response from a successful login.
 */

#ifndef _LoginSuccessResponse_H_
#define _LoginSuccessResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The response from a successful login.
 *
 *  \ingroup Models
 *
 */

class LoginSuccessResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	LoginSuccessResponse();
	LoginSuccessResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LoginSuccessResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getSessionId();

	/*! \brief Set 
	 */
	void setSessionId(std::string  sessionId);
	/*! \brief Get 
	 */
	int getAccountId();

	/*! \brief Set 
	 */
	void setAccountId(int  account_id);
	/*! \brief Get 
	 */
	std::string getAccountLid();

	/*! \brief Set 
	 */
	void setAccountLid(std::string  account_lid);
	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string  ima);
	/*! \brief Get 
	 */
	std::string getGravatar();

	/*! \brief Set 
	 */
	void setGravatar(std::string  gravatar);

private:
	std::string sessionId;
	int account_id;
	std::string account_lid;
	std::string ima;
	std::string gravatar;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LoginSuccessResponse_H_ */
