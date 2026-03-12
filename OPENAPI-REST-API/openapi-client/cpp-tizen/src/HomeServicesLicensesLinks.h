/*
 * HomeServicesLicensesLinks.h
 *
 * Map of license service IDs to their IP addresses for the account dashboard.
 */

#ifndef _HomeServicesLicensesLinks_H_
#define _HomeServicesLicensesLinks_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Map of license service IDs to their IP addresses for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesLicensesLinks : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeServicesLicensesLinks();
	HomeServicesLicensesLinks(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeServicesLicensesLinks();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Link to a license.
	 */
	std::string get386522();

	/*! \brief Set Link to a license.
	 */
	void set386522(std::string  386522);

private:
	std::string 386522;
	void __init();
	void __cleanup();

};
}
}

#endif /* _HomeServicesLicensesLinks_H_ */
