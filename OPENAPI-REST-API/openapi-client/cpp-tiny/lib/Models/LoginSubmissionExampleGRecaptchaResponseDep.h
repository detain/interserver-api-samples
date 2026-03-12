
/*
 * LoginSubmissionExample_g_recaptcha_response_dep.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_LoginSubmissionExample_g_recaptcha_response_dep_H_
#define TINY_CPP_CLIENT_LoginSubmissionExample_g_recaptcha_response_dep_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class LoginSubmissionExample_g_recaptcha_response_dep{
public:

    /*! \brief Constructor.
	 */
    LoginSubmissionExample_g_recaptcha_response_dep();
    LoginSubmissionExample_g_recaptcha_response_dep(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LoginSubmissionExample_g_recaptcha_response_dep();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getW();

	/*! \brief Set 
	 */
	void setW(int w);
	/*! \brief Get 
	 */
	int getN();

	/*! \brief Set 
	 */
	void setN(int n);


    private:
    int w{};
    int n{};
};
}

#endif /* TINY_CPP_CLIENT_LoginSubmissionExample_g_recaptcha_response_dep_H_ */
