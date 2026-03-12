
/*
 * PasswordRequest.h
 *
 * Request containing a password
 */

#ifndef TINY_CPP_CLIENT_PasswordRequest_H_
#define TINY_CPP_CLIENT_PasswordRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Request containing a password
 *
 *  \ingroup Models
 *
 */

class PasswordRequest{
public:

    /*! \brief Constructor.
	 */
    PasswordRequest();
    PasswordRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PasswordRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getPassword();

	/*! \brief Set 
	 */
	void setPassword(std::string password);


    private:
    std::string password{};
};
}

#endif /* TINY_CPP_CLIENT_PasswordRequest_H_ */
