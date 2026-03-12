/*
 * WebsitesOrderJsonServices.h
 *
 * Schema for the jsonServices field in WebsitesOrder
 */

#ifndef _WebsitesOrderJsonServices_H_
#define _WebsitesOrderJsonServices_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Schema for the jsonServices field in WebsitesOrder
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderJsonServices : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrderJsonServices();
	WebsitesOrderJsonServices(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrderJsonServices();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get JSON services description
	 */
	std::string get11447();

	/*! \brief Set JSON services description
	 */
	void set11447(std::string  11447);

private:
	std::string 11447;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrderJsonServices_H_ */
