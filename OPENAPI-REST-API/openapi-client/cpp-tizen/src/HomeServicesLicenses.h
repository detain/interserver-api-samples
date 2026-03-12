/*
 * Home_services_licenses.h
 *
 * 
 */

#ifndef _Home_services_licenses_H_
#define _Home_services_licenses_H_


#include <string>
#include "HomeServicesLicensesLinks.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_licenses : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_services_licenses();
	Home_services_licenses(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_services_licenses();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	HomeServicesLicensesLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesLicensesLinks  links);
	/*! \brief Get Number of licenses.
	 */
	int getCount();

	/*! \brief Set Number of licenses.
	 */
	void setCount(int  count);

private:
	HomeServicesLicensesLinks links;
	int count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_services_licenses_H_ */
