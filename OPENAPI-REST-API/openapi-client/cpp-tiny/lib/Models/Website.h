
/*
 * Website.h
 *
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 */

#ifndef TINY_CPP_CLIENT_Website_H_
#define TINY_CPP_CLIENT_Website_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"
#include "WebsiteBillingDetails.h"
#include "WebsiteClientLink.h"
#include "WebsiteExtraInfoTables.h"
#include "WebsiteServiceInfo.h"
#include "WebsiteServiceMaster.h"
#include <list>

namespace Tiny {


/*! \brief Full detail view of a webhosting service including billing, service configuration, and panel access links.
 *
 *  \ingroup Models
 *
 */

class Website{
public:

    /*! \brief Constructor.
	 */
    Website();
    Website(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Website();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	WebsiteServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(WebsiteServiceInfo serviceInfo);
	/*! \brief Get 
	 */
	std::list<WebsiteClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list<WebsiteClientLink> client_links);
	/*! \brief Get 
	 */
	WebsiteBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(WebsiteBillingDetails billingDetails);
	/*! \brief Get Customer's currency
	 */
	std::string getCustCurrency();

	/*! \brief Set Customer's currency
	 */
	void setCustCurrency(std::string custCurrency);
	/*! \brief Get Customer currency symbol
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set Customer currency symbol
	 */
	void setCustCurrencySymbol(std::string custCurrencySymbol);
	/*! \brief Get 
	 */
	WebsiteServiceMaster getServiceMaster();

	/*! \brief Set 
	 */
	void setServiceMaster(WebsiteServiceMaster serviceMaster);
	/*! \brief Get Package information
	 */
	std::string getPackage();

	/*! \brief Set Package information
	 */
	void setPackage(std::string package);
	/*! \brief Get 
	 */
	std::list<Object> getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(std::list<Object> serviceExtra);
	/*! \brief Get 
	 */
	WebsiteExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(WebsiteExtraInfoTables extraInfoTables);


    private:
    WebsiteServiceInfo serviceInfo;
    std::list<WebsiteClientLink> client_links;
    WebsiteBillingDetails billingDetails;
    std::string custCurrency{};
    std::string custCurrencySymbol{};
    WebsiteServiceMaster serviceMaster;
    std::string package{};
    std::list<Object> serviceExtra;
    WebsiteExtraInfoTables extraInfoTables;
};
}

#endif /* TINY_CPP_CLIENT_Website_H_ */
