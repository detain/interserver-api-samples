/*
 * LoginSubmissionExample_g_recaptcha_response.h
 *
 * 
 */

#ifndef _LoginSubmissionExample_g_recaptcha_response_H_
#define _LoginSubmissionExample_g_recaptcha_response_H_


#include <string>
#include "LoginSubmissionExample_g_recaptcha_response_dep.h"
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

class LoginSubmissionExample_g_recaptcha_response : public Object {
public:
	/*! \brief Constructor.
	 */
	LoginSubmissionExample_g_recaptcha_response();
	LoginSubmissionExample_g_recaptcha_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LoginSubmissionExample_g_recaptcha_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getVIsShallow();

	/*! \brief Set 
	 */
	void setVIsShallow(bool  __v_isShallow);
	/*! \brief Get 
	 */
	LoginSubmissionExample_g_recaptcha_response_dep getDep();

	/*! \brief Set 
	 */
	void setDep(LoginSubmissionExample_g_recaptcha_response_dep  dep);
	/*! \brief Get 
	 */
	bool getVIsRef();

	/*! \brief Set 
	 */
	void setVIsRef(bool  __v_isRef);
	/*! \brief Get 
	 */
	std::string getRawValue();

	/*! \brief Set 
	 */
	void setRawValue(std::string  _rawValue);
	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  _value);

private:
	bool __v_isShallow;
	LoginSubmissionExample_g_recaptcha_response_dep dep;
	bool __v_isRef;
	std::string _rawValue;
	std::string _value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LoginSubmissionExample_g_recaptcha_response_H_ */
