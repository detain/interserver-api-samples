/*
 * CaptchaResponse.h
 *
 * A base-64 encoded captcha image.
 */

#ifndef _CaptchaResponse_H_
#define _CaptchaResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A base-64 encoded captcha image.
 *
 *  \ingroup Models
 *
 */

class CaptchaResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	CaptchaResponse();
	CaptchaResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CaptchaResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The base64 encoded captcha image.
	 */
	std::string getCaptcha();

	/*! \brief Set The base64 encoded captcha image.
	 */
	void setCaptcha(std::string  captcha);

private:
	std::string captcha;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CaptchaResponse_H_ */
