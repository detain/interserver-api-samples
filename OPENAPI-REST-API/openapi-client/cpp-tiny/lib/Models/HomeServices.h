
/*
 * Home_services.h
 *
 * Users services.
 */

#ifndef TINY_CPP_CLIENT_Home_services_H_
#define TINY_CPP_CLIENT_Home_services_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Home_services_backups.h"
#include "Home_services_domains.h"
#include "Home_services_licenses.h"
#include "Home_services_servers.h"
#include "Home_services_vps.h"
#include "Home_services_webhosting.h"

namespace Tiny {


/*! \brief Users services.
 *
 *  \ingroup Models
 *
 */

class Home_services{
public:

    /*! \brief Constructor.
	 */
    Home_services();
    Home_services(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_services();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	Home_services_domains getDomains();

	/*! \brief Set 
	 */
	void setDomains(Home_services_domains domains);
	/*! \brief Get 
	 */
	Home_services_webhosting getWebhosting();

	/*! \brief Set 
	 */
	void setWebhosting(Home_services_webhosting webhosting);
	/*! \brief Get 
	 */
	Home_services_vps getVps();

	/*! \brief Set 
	 */
	void setVps(Home_services_vps vps);
	/*! \brief Get 
	 */
	Home_services_licenses getLicenses();

	/*! \brief Set 
	 */
	void setLicenses(Home_services_licenses licenses);
	/*! \brief Get 
	 */
	Home_services_servers getServers();

	/*! \brief Set 
	 */
	void setServers(Home_services_servers servers);
	/*! \brief Get 
	 */
	Home_services_backups getBackups();

	/*! \brief Set 
	 */
	void setBackups(Home_services_backups backups);


    private:
    Home_services_domains domains;
    Home_services_webhosting webhosting;
    Home_services_vps vps;
    Home_services_licenses licenses;
    Home_services_servers servers;
    Home_services_backups backups;
};
}

#endif /* TINY_CPP_CLIENT_Home_services_H_ */
