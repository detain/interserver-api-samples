/*
 * LoginSubmissionExample_g_recaptcha_response_dep.h
 *
 * 
 */

#ifndef _LoginSubmissionExample_g_recaptcha_response_dep_H_
#define _LoginSubmissionExample_g_recaptcha_response_dep_H_


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

class LoginSubmissionExample_g_recaptcha_response_dep : public Object {
public:
	/*! \brief Constructor.
	 */
	LoginSubmissionExample_g_recaptcha_response_dep();
	LoginSubmissionExample_g_recaptcha_response_dep(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LoginSubmissionExample_g_recaptcha_response_dep();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getW();

	/*! \brief Set 
	 */
	void setW(int  w);
	/*! \brief Get 
	 */
	int getN();

	/*! \brief Set 
	 */
	void setN(int  n);

private:
	int w;
	int n;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LoginSubmissionExample_g_recaptcha_response_dep_H_ */
