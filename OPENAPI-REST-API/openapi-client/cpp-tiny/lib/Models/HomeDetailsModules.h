
/*
 * Home_details_modules.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_details_modules_H_
#define TINY_CPP_CLIENT_Home_details_modules_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "HomeDetailsModulesBackups.h"
#include "HomeDetailsModulesDomains.h"
#include "HomeDetailsModulesLicenses.h"
#include "HomeDetailsModulesQuickservers.h"
#include "HomeDetailsModulesServers.h"
#include "HomeDetailsModulesVps.h"
#include "HomeDetailsModulesWebhosting.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_details_modules{
public:

    /*! \brief Constructor.
	 */
    Home_details_modules();
    Home_details_modules(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_details_modules();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	HomeDetailsModulesDomains getDomains();

	/*! \brief Set 
	 */
	void setDomains(HomeDetailsModulesDomains domains);
	/*! \brief Get 
	 */
	HomeDetailsModulesWebhosting getWebhosting();

	/*! \brief Set 
	 */
	void setWebhosting(HomeDetailsModulesWebhosting webhosting);
	/*! \brief Get 
	 */
	HomeDetailsModulesVps getVps();

	/*! \brief Set 
	 */
	void setVps(HomeDetailsModulesVps vps);
	/*! \brief Get 
	 */
	HomeDetailsModulesLicenses getLicenses();

	/*! \brief Set 
	 */
	void setLicenses(HomeDetailsModulesLicenses licenses);
	/*! \brief Get 
	 */
	HomeDetailsModulesBackups getBackups();

	/*! \brief Set 
	 */
	void setBackups(HomeDetailsModulesBackups backups);
	/*! \brief Get 
	 */
	HomeDetailsModulesServers getServers();

	/*! \brief Set 
	 */
	void setServers(HomeDetailsModulesServers servers);
	/*! \brief Get 
	 */
	HomeDetailsModulesQuickservers getQuickservers();

	/*! \brief Set 
	 */
	void setQuickservers(HomeDetailsModulesQuickservers quickservers);


    private:
    HomeDetailsModulesDomains domains;
    HomeDetailsModulesWebhosting webhosting;
    HomeDetailsModulesVps vps;
    HomeDetailsModulesLicenses licenses;
    HomeDetailsModulesBackups backups;
    HomeDetailsModulesServers servers;
    HomeDetailsModulesQuickservers quickservers;
};
}

#endif /* TINY_CPP_CLIENT_Home_details_modules_H_ */
