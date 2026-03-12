
/*
 * WebsitesOrderJsonServiceOffers.h
 *
 * Schema for the jsonServiceOffers field in WebsitesOrder
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrderJsonServiceOffers_H_
#define TINY_CPP_CLIENT_WebsitesOrderJsonServiceOffers_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsitesOrderJsonServiceOffersItem.h"
#include <list>

namespace Tiny {


/*! \brief Schema for the jsonServiceOffers field in WebsitesOrder
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderJsonServiceOffers{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrderJsonServiceOffers();
    WebsitesOrderJsonServiceOffers(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrderJsonServiceOffers();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Array of service offers
	 */
	std::list<WebsitesOrderJsonServiceOffersItem> get1026();

	/*! \brief Set Array of service offers
	 */
	void set1026(std::list<WebsitesOrderJsonServiceOffersItem> 1026);


    private:
    std::list<WebsitesOrderJsonServiceOffersItem> 1026;
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrderJsonServiceOffers_H_ */
