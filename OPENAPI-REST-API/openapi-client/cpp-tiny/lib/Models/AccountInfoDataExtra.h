
/*
 * AccountInfoData_extra.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AccountInfoData_extra_H_
#define TINY_CPP_CLIENT_AccountInfoData_extra_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AccountInfoData_extra{
public:

    /*! \brief Constructor.
	 */
    AccountInfoData_extra();
    AccountInfoData_extra(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoData_extra();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getPrivateWhois();

	/*! \brief Set 
	 */
	void setPrivateWhois(std::string private_whois);


    private:
    std::string private_whois{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoData_extra_H_ */
