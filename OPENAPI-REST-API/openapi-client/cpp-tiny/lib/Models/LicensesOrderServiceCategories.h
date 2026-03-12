
/*
 * LicensesOrder_serviceCategories.h
 *
 * License service categories
 */

#ifndef TINY_CPP_CLIENT_LicensesOrder_serviceCategories_H_
#define TINY_CPP_CLIENT_LicensesOrder_serviceCategories_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LicensesOrderServiceCategories509.h"

namespace Tiny {


/*! \brief License service categories
 *
 *  \ingroup Models
 *
 */

class LicensesOrder_serviceCategories{
public:

    /*! \brief Constructor.
	 */
    LicensesOrder_serviceCategories();
    LicensesOrder_serviceCategories(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicensesOrder_serviceCategories();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	LicensesOrderServiceCategories509 getLicensesOrderServiceCategories509();

	/*! \brief Set 
	 */
	void setLicensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509);


    private:
    LicensesOrderServiceCategories509 licensesOrderServiceCategories509;
};
}

#endif /* TINY_CPP_CLIENT_LicensesOrder_serviceCategories_H_ */
