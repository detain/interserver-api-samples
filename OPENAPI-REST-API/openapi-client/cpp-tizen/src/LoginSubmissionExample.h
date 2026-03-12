/*
 * LoginSubmissionExample.h
 *
 * The data to submit in the login request.
 */

#ifndef _LoginSubmissionExample_H_
#define _LoginSubmissionExample_H_


#include <string>
#include "LoginSubmissionExample_g_recaptcha_response.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The data to submit in the login request.
 *
 *  \ingroup Models
 *
 */

class LoginSubmissionExample : public Object {
public:
	/*! \brief Constructor.
	 */
	LoginSubmissionExample();
	LoginSubmissionExample(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LoginSubmissionExample();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getLogin();

	/*! \brief Set 
	 */
	void setLogin(std::string  login);
	/*! \brief Get 
	 */
	std::string getPasswd();

	/*! \brief Set 
	 */
	void setPasswd(std::string  passwd);
	/*! \brief Get 
	 */
	std::string getRemember();

	/*! \brief Set 
	 */
	void setRemember(std::string  remember);
	/*! \brief Get 
	 */
	LoginSubmissionExample_g_recaptcha_response getGrecaptcharesponse();

	/*! \brief Set 
	 */
	void setGrecaptcharesponse(LoginSubmissionExample_g_recaptcha_response  grecaptcharesponse);
	/*! \brief Get Two Factor Authentication Response.
	 */
	std::string getTfa();

	/*! \brief Set Two Factor Authentication Response.
	 */
	void setTfa(std::string  tfa);

private:
	std::string login;
	std::string passwd;
	std::string remember;
	LoginSubmissionExample_g_recaptcha_response grecaptcharesponse;
	std::string tfa;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LoginSubmissionExample_H_ */
