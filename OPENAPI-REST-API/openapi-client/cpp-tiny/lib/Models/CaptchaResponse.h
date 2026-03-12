
/*
 * CaptchaResponse.h
 *
 * A base-64 encoded captcha image.
 */

#ifndef TINY_CPP_CLIENT_CaptchaResponse_H_
#define TINY_CPP_CLIENT_CaptchaResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A base-64 encoded captcha image.
 *
 *  \ingroup Models
 *
 */

class CaptchaResponse{
public:

    /*! \brief Constructor.
	 */
    CaptchaResponse();
    CaptchaResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~CaptchaResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The base64 encoded captcha image.
	 */
	std::string getCaptcha();

	/*! \brief Set The base64 encoded captcha image.
	 */
	void setCaptcha(std::string captcha);


    private:
    std::string captcha{};
};
}

#endif /* TINY_CPP_CLIENT_CaptchaResponse_H_ */
