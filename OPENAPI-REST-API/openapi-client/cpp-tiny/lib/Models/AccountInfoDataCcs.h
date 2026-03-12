
/*
 * AccountInfoDataCcs.h
 *
 * Collection of credit cards on the account, keyed by card ID.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoDataCcs_H_
#define TINY_CPP_CLIENT_AccountInfoDataCcs_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoDataCc.h"
#include <map>

namespace Tiny {


/*! \brief Collection of credit cards on the account, keyed by card ID.
 *
 *  \ingroup Models
 *
 */

class AccountInfoDataCcs{
public:

    /*! \brief Constructor.
	 */
    AccountInfoDataCcs();
    AccountInfoDataCcs(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoDataCcs();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoDataCcs_H_ */
