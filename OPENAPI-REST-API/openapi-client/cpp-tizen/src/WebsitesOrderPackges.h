/*
 * WebsitesOrder_packges.h
 *
 * The packages data.
 */

#ifndef _WebsitesOrder_packges_H_
#define _WebsitesOrder_packges_H_


#include <string>
#include "WebsitesOrderPackagesInfo.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The packages data.
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder_packges : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrder_packges();
	WebsitesOrder_packges(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrder_packges();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	WebsitesOrderPackagesInfo get11440();

	/*! \brief Set 
	 */
	void set11440(WebsitesOrderPackagesInfo  11440);

private:
	WebsitesOrderPackagesInfo 11440;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrder_packges_H_ */
