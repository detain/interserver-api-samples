/*
 * WebsitesOrder_serviceOffers.h
 *
 * The service offers data.
 */

#ifndef _WebsitesOrder_serviceOffers_H_
#define _WebsitesOrder_serviceOffers_H_


#include <string>
#include "WebsitesOrderServiceOffer.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The service offers data.
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder_serviceOffers : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrder_serviceOffers();
	WebsitesOrder_serviceOffers(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrder_serviceOffers();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<WebsitesOrderServiceOffer> get1026();

	/*! \brief Set 
	 */
	void set1026(std::list <WebsitesOrderServiceOffer> 1026);

private:
	std::list <WebsitesOrderServiceOffer>1026;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrder_serviceOffers_H_ */
