
/*
 * Home_services_vps.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_services_vps_H_
#define TINY_CPP_CLIENT_Home_services_vps_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "HomeServicesVpsLinks.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_vps{
public:

    /*! \brief Constructor.
	 */
    Home_services_vps();
    Home_services_vps(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_services_vps();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	HomeServicesVpsLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesVpsLinks links);
	/*! \brief Get Number of VPS services.
	 */
	int getCount();

	/*! \brief Set Number of VPS services.
	 */
	void setCount(int count);


    private:
    HomeServicesVpsLinks links;
    int count{};
};
}

#endif /* TINY_CPP_CLIENT_Home_services_vps_H_ */
