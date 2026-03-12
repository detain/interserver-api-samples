/*
 * WebsitesOrder_serviceTypes.h
 *
 * The service types data.
 */

#ifndef _WebsitesOrder_serviceTypes_H_
#define _WebsitesOrder_serviceTypes_H_


#include <string>
#include "WebsitesOrderServiceTypes.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The service types data.
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder_serviceTypes : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrder_serviceTypes();
	WebsitesOrder_serviceTypes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrder_serviceTypes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	WebsitesOrderServiceTypes get11447();

	/*! \brief Set 
	 */
	void set11447(WebsitesOrderServiceTypes  11447);

private:
	WebsitesOrderServiceTypes 11447;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrder_serviceTypes_H_ */
