
/*
 * WebsitesOrderPackages.h
 *
 * Schema for the packages field in WebsitesOrder
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrderPackages_H_
#define TINY_CPP_CLIENT_WebsitesOrderPackages_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Schema for the packages field in WebsitesOrder
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderPackages{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrderPackages();
    WebsitesOrderPackages(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrderPackages();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Package description
	 */
	std::string get11447();

	/*! \brief Set Package description
	 */
	void set11447(std::string 11447);


    private:
    std::string 11447{};
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrderPackages_H_ */
