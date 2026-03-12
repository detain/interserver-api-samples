
/*
 * AccountInfoLimits.h
 *
 * IP address ranges used to restrict account access to specific IPs.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoLimits_H_
#define TINY_CPP_CLIENT_AccountInfoLimits_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoLimits_inner.h"
#include <list>

namespace Tiny {


/*! \brief IP address ranges used to restrict account access to specific IPs.
 *
 *  \ingroup Models
 *
 */

class AccountInfoLimits{
public:

    /*! \brief Constructor.
	 */
    AccountInfoLimits();
    AccountInfoLimits(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoLimits();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoLimits_H_ */
