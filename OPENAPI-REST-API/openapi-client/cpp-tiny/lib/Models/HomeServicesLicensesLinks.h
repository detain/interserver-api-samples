
/*
 * HomeServicesLicensesLinks.h
 *
 * Map of license service IDs to their IP addresses for the account dashboard.
 */

#ifndef TINY_CPP_CLIENT_HomeServicesLicensesLinks_H_
#define TINY_CPP_CLIENT_HomeServicesLicensesLinks_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Map of license service IDs to their IP addresses for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesLicensesLinks{
public:

    /*! \brief Constructor.
	 */
    HomeServicesLicensesLinks();
    HomeServicesLicensesLinks(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeServicesLicensesLinks();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Link to a license.
	 */
	std::string get386522();

	/*! \brief Set Link to a license.
	 */
	void set386522(std::string 386522);


    private:
    std::string 386522{};
};
}

#endif /* TINY_CPP_CLIENT_HomeServicesLicensesLinks_H_ */
