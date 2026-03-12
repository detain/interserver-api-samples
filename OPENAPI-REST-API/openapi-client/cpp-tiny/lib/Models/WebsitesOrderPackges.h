
/*
 * WebsitesOrder_packges.h
 *
 * The packages data.
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrder_packges_H_
#define TINY_CPP_CLIENT_WebsitesOrder_packges_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsitesOrderPackagesInfo.h"

namespace Tiny {


/*! \brief The packages data.
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder_packges{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrder_packges();
    WebsitesOrder_packges(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrder_packges();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	WebsitesOrderPackagesInfo get11440();

	/*! \brief Set 
	 */
	void set11440(WebsitesOrderPackagesInfo 11440);


    private:
    WebsitesOrderPackagesInfo 11440;
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrder_packges_H_ */
