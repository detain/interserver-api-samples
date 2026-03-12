
/*
 * WebsitesOrderJsonServices.h
 *
 * Schema for the jsonServices field in WebsitesOrder
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrderJsonServices_H_
#define TINY_CPP_CLIENT_WebsitesOrderJsonServices_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Schema for the jsonServices field in WebsitesOrder
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderJsonServices{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrderJsonServices();
    WebsitesOrderJsonServices(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrderJsonServices();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get JSON services description
	 */
	std::string get11447();

	/*! \brief Set JSON services description
	 */
	void set11447(std::string 11447);


    private:
    std::string 11447{};
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrderJsonServices_H_ */
