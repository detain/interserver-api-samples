
/*
 * Home_services_servers.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_services_servers_H_
#define TINY_CPP_CLIENT_Home_services_servers_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "HomeServicesServersLinks.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_servers{
public:

    /*! \brief Constructor.
	 */
    Home_services_servers();
    Home_services_servers(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_services_servers();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	HomeServicesServersLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesServersLinks links);
	/*! \brief Get Number of servers.
	 */
	int getCount();

	/*! \brief Set Number of servers.
	 */
	void setCount(int count);


    private:
    HomeServicesServersLinks links;
    int count{};
};
}

#endif /* TINY_CPP_CLIENT_Home_services_servers_H_ */
