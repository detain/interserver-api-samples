/*
 * LoginInfo.h
 *
 * Basic information useful for rendering a login page.
 */

#ifndef _LoginInfo_H_
#define _LoginInfo_H_


#include <string>
#include "LoginServiceCounts.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Basic information useful for rendering a login page.
 *
 *  \ingroup Models
 *
 */

class LoginInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	LoginInfo();
	LoginInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LoginInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A base64 encoded image to use for rendering the alternateive captcha.
	 */
	std::string getCaptcha();

	/*! \brief Set A base64 encoded image to use for rendering the alternateive captcha.
	 */
	void setCaptcha(std::string  captcha);
	/*! \brief Get 
	 */
	LoginServiceCounts getCounts();

	/*! \brief Set 
	 */
	void setCounts(LoginServiceCounts  counts);
	/*! \brief Get A logo image url.
	 */
	std::string getLogo();

	/*! \brief Set A logo image url.
	 */
	void setLogo(std::string  logo);
	/*! \brief Get The desired langauge to render the site with.
	 */
	std::string getLanguage();

	/*! \brief Set The desired langauge to render the site with.
	 */
	void setLanguage(std::string  language);

private:
	std::string captcha;
	LoginServiceCounts counts;
	std::string logo;
	std::string language;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LoginInfo_H_ */
