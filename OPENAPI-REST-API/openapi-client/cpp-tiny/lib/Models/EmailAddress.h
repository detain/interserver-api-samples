
/*
 * EmailAddress.h
 *
 * an email address
 */

#ifndef TINY_CPP_CLIENT_EmailAddress_H_
#define TINY_CPP_CLIENT_EmailAddress_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief an email address
 *
 *  \ingroup Models
 *
 */

class EmailAddress{
public:

    /*! \brief Constructor.
	 */
    EmailAddress();
    EmailAddress(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~EmailAddress();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get an email address
	 */
	std::string getEmail();

	/*! \brief Set an email address
	 */
	void setEmail(std::string email);


    private:
    std::string email{};
};
}

#endif /* TINY_CPP_CLIENT_EmailAddress_H_ */
