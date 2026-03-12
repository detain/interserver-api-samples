
/*
 * LoginInfo.h
 *
 * Basic information useful for rendering a login page.
 */

#ifndef TINY_CPP_CLIENT_LoginInfo_H_
#define TINY_CPP_CLIENT_LoginInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LoginServiceCounts.h"

namespace Tiny {


/*! \brief Basic information useful for rendering a login page.
 *
 *  \ingroup Models
 *
 */

class LoginInfo{
public:

    /*! \brief Constructor.
	 */
    LoginInfo();
    LoginInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LoginInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A base64 encoded image to use for rendering the alternateive captcha.
	 */
	std::string getCaptcha();

	/*! \brief Set A base64 encoded image to use for rendering the alternateive captcha.
	 */
	void setCaptcha(std::string captcha);
	/*! \brief Get 
	 */
	LoginServiceCounts getCounts();

	/*! \brief Set 
	 */
	void setCounts(LoginServiceCounts counts);
	/*! \brief Get A logo image url.
	 */
	std::string getLogo();

	/*! \brief Set A logo image url.
	 */
	void setLogo(std::string logo);
	/*! \brief Get The desired langauge to render the site with.
	 */
	std::string getLanguage();

	/*! \brief Set The desired langauge to render the site with.
	 */
	void setLanguage(std::string language);


    private:
    std::string captcha{};
    LoginServiceCounts counts;
    std::string logo{};
    std::string language{};
};
}

#endif /* TINY_CPP_CLIENT_LoginInfo_H_ */
