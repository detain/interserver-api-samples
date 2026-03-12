
/*
 * AccountSshKey.h
 *
 * SSH Keys
 */

#ifndef TINY_CPP_CLIENT_AccountSshKey_H_
#define TINY_CPP_CLIENT_AccountSshKey_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief SSH Keys
 *
 *  \ingroup Models
 *
 */

class AccountSshKey{
public:

    /*! \brief Constructor.
	 */
    AccountSshKey();
    AccountSshKey(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountSshKey();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getSshKey();

	/*! \brief Set 
	 */
	void setSshKey(std::string ssh_key);


    private:
    std::string ssh_key{};
};
}

#endif /* TINY_CPP_CLIENT_AccountSshKey_H_ */
