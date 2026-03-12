
/*
 * WebsitesOrder_serviceOffers.h
 *
 * The service offers data.
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrder_serviceOffers_H_
#define TINY_CPP_CLIENT_WebsitesOrder_serviceOffers_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsitesOrderServiceOffer.h"
#include <list>

namespace Tiny {


/*! \brief The service offers data.
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder_serviceOffers{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrder_serviceOffers();
    WebsitesOrder_serviceOffers(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrder_serviceOffers();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<WebsitesOrderServiceOffer> get1026();

	/*! \brief Set 
	 */
	void set1026(std::list<WebsitesOrderServiceOffer> 1026);


    private:
    std::list<WebsitesOrderServiceOffer> 1026;
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrder_serviceOffers_H_ */
