/*
 * License.h
 *
 * 
 */

#ifndef _License_H_
#define _License_H_


#include <string>
#include "LicenseBillingDetails.h"
#include "LicenseClientLink.h"
#include "LicenseServiceInfo.h"
#include "LicenseServiceType.h"
#include "License_extraInfoTables.h"
#include <list>
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

class License : public Object {
public:
	/*! \brief Constructor.
	 */
	License();
	License(char* str);

	/*! \brief Destructor.
	 */
	virtual ~License();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	LicenseServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(LicenseServiceInfo  serviceInfo);
	/*! \brief Get 
	 */
	std::list<LicenseClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list <LicenseClientLink> client_links);
	/*! \brief Get 
	 */
	LicenseBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(LicenseBillingDetails  billingDetails);
	/*! \brief Get Customer's currency
	 */
	std::string getCustCurrency();

	/*! \brief Set Customer's currency
	 */
	void setCustCurrency(std::string  custCurrency);
	/*! \brief Get Currency symbol for customer
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set Currency symbol for customer
	 */
	void setCustCurrencySymbol(std::string  custCurrencySymbol);
	/*! \brief Get Package name
	 */
	std::string getPackage();

	/*! \brief Set Package name
	 */
	void setPackage(std::string  package);
	/*! \brief Get Extra service information
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set Extra service information
	 */
	void setServiceExtra(std::list <std::string> serviceExtra);
	/*! \brief Get 
	 */
	License_extraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(License_extraInfoTables  extraInfoTables);
	/*! \brief Get Extra service overview information
	 */
	std::string getServiceOverviewExtra();

	/*! \brief Set Extra service overview information
	 */
	void setServiceOverviewExtra(std::string  service_overview_extra);
	/*! \brief Get 
	 */
	LicenseServiceType getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(LicenseServiceType  serviceType);
	/*! \brief Get License key
	 */
	std::string getLicenseKey();

	/*! \brief Set License key
	 */
	void setLicenseKey(std::string  license_key);

private:
	LicenseServiceInfo serviceInfo;
	std::list <LicenseClientLink>client_links;
	LicenseBillingDetails billingDetails;
	std::string custCurrency;
	std::string custCurrencySymbol;
	std::string package;
	std::list <std::string>serviceExtra;
	License_extraInfoTables extraInfoTables;
	std::string service_overview_extra;
	LicenseServiceType serviceType;
	std::string license_key;
	void __init();
	void __cleanup();

};
}
}

#endif /* _License_H_ */
