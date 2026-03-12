
/*
 * EmailAddressName.h
 *
 * An email contact.
 */

#ifndef TINY_CPP_CLIENT_EmailAddressName_H_
#define TINY_CPP_CLIENT_EmailAddressName_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An email contact.
 *
 *  \ingroup Models
 *
 */

class EmailAddressName{
public:

    /*! \brief Constructor.
	 */
    EmailAddressName();
    EmailAddressName(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~EmailAddressName();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The email address.
	 */
	std::string getEmail();

	/*! \brief Set The email address.
	 */
	void setEmail(std::string email);
	/*! \brief Get Name to use for the sending contact.
	 */
	std::string getName();

	/*! \brief Set Name to use for the sending contact.
	 */
	void setName(std::string name);


    private:
    std::string email{};
    std::string name{};
};
}

#endif /* TINY_CPP_CLIENT_EmailAddressName_H_ */
