/*
 * WebsitesOrderPackages.h
 *
 * Schema for the packages field in WebsitesOrder
 */

#ifndef _WebsitesOrderPackages_H_
#define _WebsitesOrderPackages_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Schema for the packages field in WebsitesOrder
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderPackages : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrderPackages();
	WebsitesOrderPackages(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrderPackages();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Package description
	 */
	std::string get11447();

	/*! \brief Set Package description
	 */
	void set11447(std::string  11447);

private:
	std::string 11447;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrderPackages_H_ */
