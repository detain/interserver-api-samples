
/*
 * Home_services_domains.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_services_domains_H_
#define TINY_CPP_CLIENT_Home_services_domains_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "HomeServicesDomainsLinks.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_domains{
public:

    /*! \brief Constructor.
	 */
    Home_services_domains();
    Home_services_domains(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_services_domains();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	HomeServicesDomainsLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesDomainsLinks links);
	/*! \brief Get Number of domains.
	 */
	int getCount();

	/*! \brief Set Number of domains.
	 */
	void setCount(int count);


    private:
    HomeServicesDomainsLinks links;
    int count{};
};
}

#endif /* TINY_CPP_CLIENT_Home_services_domains_H_ */
