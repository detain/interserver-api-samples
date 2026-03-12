/*
 * Website.h
 *
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 */

#ifndef _Website_H_
#define _Website_H_


#include <string>
#include "WebsiteBillingDetails.h"
#include "WebsiteClientLink.h"
#include "WebsiteExtraInfoTables.h"
#include "WebsiteServiceInfo.h"
#include "WebsiteServiceMaster.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Full detail view of a webhosting service including billing, service configuration, and panel access links.
 *
 *  \ingroup Models
 *
 */

class Website : public Object {
public:
	/*! \brief Constructor.
	 */
	Website();
	Website(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Website();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	WebsiteServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(WebsiteServiceInfo  serviceInfo);
	/*! \brief Get 
	 */
	std::list<WebsiteClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list <WebsiteClientLink> client_links);
	/*! \brief Get 
	 */
	WebsiteBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(WebsiteBillingDetails  billingDetails);
	/*! \brief Get Customer's currency
	 */
	std::string getCustCurrency();

	/*! \brief Set Customer's currency
	 */
	void setCustCurrency(std::string  custCurrency);
	/*! \brief Get Customer currency symbol
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set Customer currency symbol
	 */
	void setCustCurrencySymbol(std::string  custCurrencySymbol);
	/*! \brief Get 
	 */
	WebsiteServiceMaster getServiceMaster();

	/*! \brief Set 
	 */
	void setServiceMaster(WebsiteServiceMaster  serviceMaster);
	/*! \brief Get Package information
	 */
	std::string getPackage();

	/*! \brief Set Package information
	 */
	void setPackage(std::string  package);
	/*! \brief Get 
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(std::list <std::string> serviceExtra);
	/*! \brief Get 
	 */
	WebsiteExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(WebsiteExtraInfoTables  extraInfoTables);

private:
	WebsiteServiceInfo serviceInfo;
	std::list <WebsiteClientLink>client_links;
	WebsiteBillingDetails billingDetails;
	std::string custCurrency;
	std::string custCurrencySymbol;
	WebsiteServiceMaster serviceMaster;
	std::string package;
	std::list <std::string>serviceExtra;
	WebsiteExtraInfoTables extraInfoTables;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Website_H_ */
