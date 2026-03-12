
/*
 * Home_services_webhosting.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_services_webhosting_H_
#define TINY_CPP_CLIENT_Home_services_webhosting_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "HomeServicesWebhostingLinks.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_webhosting{
public:

    /*! \brief Constructor.
	 */
    Home_services_webhosting();
    Home_services_webhosting(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_services_webhosting();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	HomeServicesWebhostingLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesWebhostingLinks links);
	/*! \brief Get Number of web hosting services.
	 */
	int getCount();

	/*! \brief Set Number of web hosting services.
	 */
	void setCount(int count);


    private:
    HomeServicesWebhostingLinks links;
    int count{};
};
}

#endif /* TINY_CPP_CLIENT_Home_services_webhosting_H_ */
