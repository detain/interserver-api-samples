
/*
 * LoginSubmissionExample.h
 *
 * The data to submit in the login request.
 */

#ifndef TINY_CPP_CLIENT_LoginSubmissionExample_H_
#define TINY_CPP_CLIENT_LoginSubmissionExample_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LoginSubmissionExample_g_recaptcha_response.h"

namespace Tiny {


/*! \brief The data to submit in the login request.
 *
 *  \ingroup Models
 *
 */

class LoginSubmissionExample{
public:

    /*! \brief Constructor.
	 */
    LoginSubmissionExample();
    LoginSubmissionExample(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LoginSubmissionExample();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getLogin();

	/*! \brief Set 
	 */
	void setLogin(std::string login);
	/*! \brief Get 
	 */
	std::string getPasswd();

	/*! \brief Set 
	 */
	void setPasswd(std::string passwd);
	/*! \brief Get 
	 */
	std::string getRemember();

	/*! \brief Set 
	 */
	void setRemember(std::string remember);
	/*! \brief Get 
	 */
	LoginSubmissionExample_g_recaptcha_response getGrecaptcharesponse();

	/*! \brief Set 
	 */
	void setGrecaptcharesponse(LoginSubmissionExample_g_recaptcha_response grecaptcharesponse);
	/*! \brief Get Two Factor Authentication Response.
	 */
	std::string getTfa();

	/*! \brief Set Two Factor Authentication Response.
	 */
	void setTfa(std::string tfa);


    private:
    std::string login{};
    std::string passwd{};
    std::string remember{};
    LoginSubmissionExample_g_recaptcha_response grecaptcharesponse;
    std::string tfa{};
};
}

#endif /* TINY_CPP_CLIENT_LoginSubmissionExample_H_ */
