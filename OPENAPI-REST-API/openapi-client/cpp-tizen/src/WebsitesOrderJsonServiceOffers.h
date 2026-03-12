/*
 * WebsitesOrderJsonServiceOffers.h
 *
 * Schema for the jsonServiceOffers field in WebsitesOrder
 */

#ifndef _WebsitesOrderJsonServiceOffers_H_
#define _WebsitesOrderJsonServiceOffers_H_


#include <string>
#include "WebsitesOrderJsonServiceOffersItem.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Schema for the jsonServiceOffers field in WebsitesOrder
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderJsonServiceOffers : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrderJsonServiceOffers();
	WebsitesOrderJsonServiceOffers(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrderJsonServiceOffers();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Array of service offers
	 */
	std::list<WebsitesOrderJsonServiceOffersItem> get1026();

	/*! \brief Set Array of service offers
	 */
	void set1026(std::list <WebsitesOrderJsonServiceOffersItem> 1026);

private:
	std::list <WebsitesOrderJsonServiceOffersItem>1026;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrderJsonServiceOffers_H_ */
