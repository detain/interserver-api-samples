
/*
 * WebsitesOrder_serviceTypes.h
 *
 * The service types data.
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrder_serviceTypes_H_
#define TINY_CPP_CLIENT_WebsitesOrder_serviceTypes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsitesOrderServiceTypes.h"

namespace Tiny {


/*! \brief The service types data.
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder_serviceTypes{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrder_serviceTypes();
    WebsitesOrder_serviceTypes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrder_serviceTypes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	WebsitesOrderServiceTypes get11447();

	/*! \brief Set 
	 */
	void set11447(WebsitesOrderServiceTypes 11447);


    private:
    WebsitesOrderServiceTypes 11447;
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrder_serviceTypes_H_ */
