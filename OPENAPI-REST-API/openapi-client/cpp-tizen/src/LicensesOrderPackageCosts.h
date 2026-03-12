/*
 * LicensesOrder_packageCosts.h
 *
 * Costs of license packages
 */

#ifndef _LicensesOrder_packageCosts_H_
#define _LicensesOrder_packageCosts_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Costs of license packages
 *
 *  \ingroup Models
 *
 */

class LicensesOrder_packageCosts : public Object {
public:
	/*! \brief Constructor.
	 */
	LicensesOrder_packageCosts();
	LicensesOrder_packageCosts(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicensesOrder_packageCosts();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Cost of package with ID 11468
	 */
	long long getLicensesOrderPackageCosts11468();

	/*! \brief Set Cost of package with ID 11468
	 */
	void setLicensesOrderPackageCosts11468(long long  licensesOrderPackageCosts11468);

private:
	long long licensesOrderPackageCosts11468;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicensesOrder_packageCosts_H_ */
