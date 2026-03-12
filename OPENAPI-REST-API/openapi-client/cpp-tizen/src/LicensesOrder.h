/*
 * LicensesOrder.h
 *
 * Available license packages and pricing for ordering a new software license.
 */

#ifndef _LicensesOrder_H_
#define _LicensesOrder_H_


#include <string>
#include "LicensesOrder_packageCosts.h"
#include "LicensesOrder_serviceCategories.h"
#include "LicensesOrder_serviceTypes.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Available license packages and pricing for ordering a new software license.
 *
 *  \ingroup Models
 *
 */

class LicensesOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	LicensesOrder();
	LicensesOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicensesOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	LicensesOrder_serviceCategories getServiceCategories();

	/*! \brief Set 
	 */
	void setServiceCategories(LicensesOrder_serviceCategories  serviceCategories);
	/*! \brief Get 
	 */
	LicensesOrder_packageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(LicensesOrder_packageCosts  packageCosts);
	/*! \brief Get 
	 */
	LicensesOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(LicensesOrder_serviceTypes  serviceTypes);

private:
	LicensesOrder_serviceCategories serviceCategories;
	LicensesOrder_packageCosts packageCosts;
	LicensesOrder_serviceTypes serviceTypes;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicensesOrder_H_ */
