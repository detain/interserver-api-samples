
/*
 * LoginSubmissionExample_g_recaptcha_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_LoginSubmissionExample_g_recaptcha_response_H_
#define TINY_CPP_CLIENT_LoginSubmissionExample_g_recaptcha_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LoginSubmissionExample_g_recaptcha_response_dep.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class LoginSubmissionExample_g_recaptcha_response{
public:

    /*! \brief Constructor.
	 */
    LoginSubmissionExample_g_recaptcha_response();
    LoginSubmissionExample_g_recaptcha_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LoginSubmissionExample_g_recaptcha_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isVIsShallow();

	/*! \brief Set 
	 */
	void setVIsShallow(bool __v_isShallow);
	/*! \brief Get 
	 */
	LoginSubmissionExample_g_recaptcha_response_dep getDep();

	/*! \brief Set 
	 */
	void setDep(LoginSubmissionExample_g_recaptcha_response_dep dep);
	/*! \brief Get 
	 */
	bool isVIsRef();

	/*! \brief Set 
	 */
	void setVIsRef(bool __v_isRef);
	/*! \brief Get 
	 */
	std::string getRawValue();

	/*! \brief Set 
	 */
	void setRawValue(std::string _rawValue);
	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string _value);


    private:
    bool __v_isShallow{};
    LoginSubmissionExample_g_recaptcha_response_dep dep;
    bool __v_isRef{};
    std::string _rawValue{};
    std::string _value{};
};
}

#endif /* TINY_CPP_CLIENT_LoginSubmissionExample_g_recaptcha_response_H_ */
