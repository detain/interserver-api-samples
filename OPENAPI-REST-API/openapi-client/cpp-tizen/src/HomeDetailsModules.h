/*
 * Home_details_modules.h
 *
 * 
 */

#ifndef _Home_details_modules_H_
#define _Home_details_modules_H_


#include <string>
#include "HomeDetailsModulesBackups.h"
#include "HomeDetailsModulesDomains.h"
#include "HomeDetailsModulesLicenses.h"
#include "HomeDetailsModulesQuickservers.h"
#include "HomeDetailsModulesServers.h"
#include "HomeDetailsModulesVps.h"
#include "HomeDetailsModulesWebhosting.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_details_modules : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_details_modules();
	Home_details_modules(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_details_modules();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	HomeDetailsModulesDomains getDomains();

	/*! \brief Set 
	 */
	void setDomains(HomeDetailsModulesDomains  domains);
	/*! \brief Get 
	 */
	HomeDetailsModulesWebhosting getWebhosting();

	/*! \brief Set 
	 */
	void setWebhosting(HomeDetailsModulesWebhosting  webhosting);
	/*! \brief Get 
	 */
	HomeDetailsModulesVps getVps();

	/*! \brief Set 
	 */
	void setVps(HomeDetailsModulesVps  vps);
	/*! \brief Get 
	 */
	HomeDetailsModulesLicenses getLicenses();

	/*! \brief Set 
	 */
	void setLicenses(HomeDetailsModulesLicenses  licenses);
	/*! \brief Get 
	 */
	HomeDetailsModulesBackups getBackups();

	/*! \brief Set 
	 */
	void setBackups(HomeDetailsModulesBackups  backups);
	/*! \brief Get 
	 */
	HomeDetailsModulesServers getServers();

	/*! \brief Set 
	 */
	void setServers(HomeDetailsModulesServers  servers);
	/*! \brief Get 
	 */
	HomeDetailsModulesQuickservers getQuickservers();

	/*! \brief Set 
	 */
	void setQuickservers(HomeDetailsModulesQuickservers  quickservers);

private:
	HomeDetailsModulesDomains domains;
	HomeDetailsModulesWebhosting webhosting;
	HomeDetailsModulesVps vps;
	HomeDetailsModulesLicenses licenses;
	HomeDetailsModulesBackups backups;
	HomeDetailsModulesServers servers;
	HomeDetailsModulesQuickservers quickservers;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_details_modules_H_ */
