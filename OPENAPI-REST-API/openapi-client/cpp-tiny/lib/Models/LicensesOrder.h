
/*
 * LicensesOrder.h
 *
 * Available license packages and pricing for ordering a new software license.
 */

#ifndef TINY_CPP_CLIENT_LicensesOrder_H_
#define TINY_CPP_CLIENT_LicensesOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LicensesOrder_packageCosts.h"
#include "LicensesOrder_serviceCategories.h"
#include "LicensesOrder_serviceTypes.h"

namespace Tiny {


/*! \brief Available license packages and pricing for ordering a new software license.
 *
 *  \ingroup Models
 *
 */

class LicensesOrder{
public:

    /*! \brief Constructor.
	 */
    LicensesOrder();
    LicensesOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicensesOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	LicensesOrder_serviceCategories getServiceCategories();

	/*! \brief Set 
	 */
	void setServiceCategories(LicensesOrder_serviceCategories serviceCategories);
	/*! \brief Get 
	 */
	LicensesOrder_packageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(LicensesOrder_packageCosts packageCosts);
	/*! \brief Get 
	 */
	LicensesOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(LicensesOrder_serviceTypes serviceTypes);


    private:
    LicensesOrder_serviceCategories serviceCategories;
    LicensesOrder_packageCosts packageCosts;
    LicensesOrder_serviceTypes serviceTypes;
};
}

#endif /* TINY_CPP_CLIENT_LicensesOrder_H_ */
