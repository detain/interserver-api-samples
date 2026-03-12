/*
 * LicensesOrder_serviceCategories.h
 *
 * License service categories
 */

#ifndef _LicensesOrder_serviceCategories_H_
#define _LicensesOrder_serviceCategories_H_


#include <string>
#include "LicensesOrderServiceCategories509.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief License service categories
 *
 *  \ingroup Models
 *
 */

class LicensesOrder_serviceCategories : public Object {
public:
	/*! \brief Constructor.
	 */
	LicensesOrder_serviceCategories();
	LicensesOrder_serviceCategories(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicensesOrder_serviceCategories();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	LicensesOrderServiceCategories509 getLicensesOrderServiceCategories509();

	/*! \brief Set 
	 */
	void setLicensesOrderServiceCategories509(LicensesOrderServiceCategories509  licensesOrderServiceCategories509);

private:
	LicensesOrderServiceCategories509 licensesOrderServiceCategories509;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicensesOrder_serviceCategories_H_ */
