/*
 * Backup.h
 *
 * Full detail view of a backup service including billing, service info, and configuration.
 */

#ifndef _Backup_H_
#define _Backup_H_


#include <string>
#include "BackupBillingDetails.h"
#include "BackupClientLink.h"
#include "BackupExtraInfoTables.h"
#include "BackupServiceInfo.h"
#include "BackupServiceMaster.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Full detail view of a backup service including billing, service info, and configuration.
 *
 *  \ingroup Models
 *
 */

class Backup : public Object {
public:
	/*! \brief Constructor.
	 */
	Backup();
	Backup(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Backup();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	BackupServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(BackupServiceInfo  serviceInfo);
	/*! \brief Get 
	 */
	std::list<BackupClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list <BackupClientLink> client_links);
	/*! \brief Get 
	 */
	BackupBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(BackupBillingDetails  billingDetails);
	/*! \brief Get Customer's currency.
	 */
	std::string getCustCurrency();

	/*! \brief Set Customer's currency.
	 */
	void setCustCurrency(std::string  custCurrency);
	/*! \brief Get Customer's currency symbol.
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set Customer's currency symbol.
	 */
	void setCustCurrencySymbol(std::string  custCurrencySymbol);
	/*! \brief Get 
	 */
	BackupServiceMaster getServiceMaster();

	/*! \brief Set 
	 */
	void setServiceMaster(BackupServiceMaster  serviceMaster);
	/*! \brief Get Package information.
	 */
	std::string getPackage();

	/*! \brief Set Package information.
	 */
	void setPackage(std::string  package);
	/*! \brief Get 
	 */
	std::string getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(std::string  serviceExtra);
	/*! \brief Get 
	 */
	BackupExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(BackupExtraInfoTables  extraInfoTables);

private:
	BackupServiceInfo serviceInfo;
	std::list <BackupClientLink>client_links;
	BackupBillingDetails billingDetails;
	std::string custCurrency;
	std::string custCurrencySymbol;
	BackupServiceMaster serviceMaster;
	std::string package;
	std::string serviceExtra;
	BackupExtraInfoTables extraInfoTables;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Backup_H_ */
