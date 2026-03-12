
/*
 * Backup.h
 *
 * Full detail view of a backup service including billing, service info, and configuration.
 */

#ifndef TINY_CPP_CLIENT_Backup_H_
#define TINY_CPP_CLIENT_Backup_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BackupBillingDetails.h"
#include "BackupClientLink.h"
#include "BackupExtraInfoTables.h"
#include "BackupServiceInfo.h"
#include "BackupServiceMaster.h"
#include <list>

namespace Tiny {


/*! \brief Full detail view of a backup service including billing, service info, and configuration.
 *
 *  \ingroup Models
 *
 */

class Backup{
public:

    /*! \brief Constructor.
	 */
    Backup();
    Backup(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Backup();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	BackupServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(BackupServiceInfo serviceInfo);
	/*! \brief Get 
	 */
	std::list<BackupClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list<BackupClientLink> client_links);
	/*! \brief Get 
	 */
	BackupBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(BackupBillingDetails billingDetails);
	/*! \brief Get Customer's currency.
	 */
	std::string getCustCurrency();

	/*! \brief Set Customer's currency.
	 */
	void setCustCurrency(std::string custCurrency);
	/*! \brief Get Customer's currency symbol.
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set Customer's currency symbol.
	 */
	void setCustCurrencySymbol(std::string custCurrencySymbol);
	/*! \brief Get 
	 */
	BackupServiceMaster getServiceMaster();

	/*! \brief Set 
	 */
	void setServiceMaster(BackupServiceMaster serviceMaster);
	/*! \brief Get Package information.
	 */
	std::string getPackage();

	/*! \brief Set Package information.
	 */
	void setPackage(std::string package);
	/*! \brief Get 
	 */
	std::string getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(std::string serviceExtra);
	/*! \brief Get 
	 */
	BackupExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(BackupExtraInfoTables extraInfoTables);


    private:
    BackupServiceInfo serviceInfo;
    std::list<BackupClientLink> client_links;
    BackupBillingDetails billingDetails;
    std::string custCurrency{};
    std::string custCurrencySymbol{};
    BackupServiceMaster serviceMaster;
    std::string package{};
    std::string serviceExtra{};
    BackupExtraInfoTables extraInfoTables;
};
}

#endif /* TINY_CPP_CLIENT_Backup_H_ */
