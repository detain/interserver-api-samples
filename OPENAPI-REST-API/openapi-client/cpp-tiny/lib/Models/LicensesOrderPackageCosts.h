
/*
 * LicensesOrder_packageCosts.h
 *
 * Costs of license packages
 */

#ifndef TINY_CPP_CLIENT_LicensesOrder_packageCosts_H_
#define TINY_CPP_CLIENT_LicensesOrder_packageCosts_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Costs of license packages
 *
 *  \ingroup Models
 *
 */

class LicensesOrder_packageCosts{
public:

    /*! \brief Constructor.
	 */
    LicensesOrder_packageCosts();
    LicensesOrder_packageCosts(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicensesOrder_packageCosts();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Cost of package with ID 11468
	 */
	long getLicensesOrderPackageCosts11468();

	/*! \brief Set Cost of package with ID 11468
	 */
	void setLicensesOrderPackageCosts11468(long licensesOrderPackageCosts11468);


    private:
    long licensesOrderPackageCosts11468{};
};
}

#endif /* TINY_CPP_CLIENT_LicensesOrder_packageCosts_H_ */
