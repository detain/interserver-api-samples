
/*
 * AccountInfoCountryCurrencies.h
 *
 * Maps country codes to their available currency options.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoCountryCurrencies_H_
#define TINY_CPP_CLIENT_AccountInfoCountryCurrencies_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>
#include <map>

namespace Tiny {


/*! \brief Maps country codes to their available currency options.
 *
 *  \ingroup Models
 *
 */

class AccountInfoCountryCurrencies{
public:

    /*! \brief Constructor.
	 */
    AccountInfoCountryCurrencies();
    AccountInfoCountryCurrencies(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoCountryCurrencies();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoCountryCurrencies_H_ */
