/*
 * LicensesOrder_serviceTypes.h
 *
 * Types of license services
 */

#ifndef _LicensesOrder_serviceTypes_H_
#define _LicensesOrder_serviceTypes_H_


#include <string>
#include "LicensesOrderServiceTypes11482.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Types of license services
 *
 *  \ingroup Models
 *
 */

class LicensesOrder_serviceTypes : public Object {
public:
	/*! \brief Constructor.
	 */
	LicensesOrder_serviceTypes();
	LicensesOrder_serviceTypes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicensesOrder_serviceTypes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	LicensesOrderServiceTypes11482 getLicensesOrderServiceTypes11482();

	/*! \brief Set 
	 */
	void setLicensesOrderServiceTypes11482(LicensesOrderServiceTypes11482  licensesOrderServiceTypes11482);

private:
	LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicensesOrder_serviceTypes_H_ */
