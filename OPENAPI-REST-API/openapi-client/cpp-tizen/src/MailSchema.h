/*
 * MailSchema.h
 *
 * 
 */

#ifndef _MailSchema_H_
#define _MailSchema_H_


#include <string>
#include "MailBillingDetails.h"
#include "MailClientLink.h"
#include "MailSchema_extraInfoTables.h"
#include "MailServiceInfo.h"
#include "MailServiceType.h"
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

class MailSchema : public Object {
public:
	/*! \brief Constructor.
	 */
	MailSchema();
	MailSchema(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailSchema();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	MailServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(MailServiceInfo  serviceInfo);
	/*! \brief Get Links related to the mail service for clients.
	 */
	std::list<MailClientLink> getClientLinks();

	/*! \brief Set Links related to the mail service for clients.
	 */
	void setClientLinks(std::list <MailClientLink> client_links);
	/*! \brief Get 
	 */
	MailBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(MailBillingDetails  billingDetails);
	/*! \brief Get The customer's currency.
	 */
	std::string getCustCurrency();

	/*! \brief Set The customer's currency.
	 */
	void setCustCurrency(std::string  custCurrency);
	/*! \brief Get The currency symbol for the customer.
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set The currency symbol for the customer.
	 */
	void setCustCurrencySymbol(std::string  custCurrencySymbol);
	/*! \brief Get The package of the mail service.
	 */
	std::string getPackage();

	/*! \brief Set The package of the mail service.
	 */
	void setPackage(std::string  package);
	/*! \brief Get 
	 */
	MailSchema_extraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(MailSchema_extraInfoTables  extraInfoTables);
	/*! \brief Get 
	 */
	MailServiceType getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(MailServiceType  serviceType);
	/*! \brief Get The usage count of the mail service.
	 */
	std::string getUsageCount();

	/*! \brief Set The usage count of the mail service.
	 */
	void setUsageCount(std::string  usage_count);
	/*! \brief Get Extra information for the mail service.
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set Extra information for the mail service.
	 */
	void setServiceExtra(std::list <std::string> serviceExtra);

private:
	MailServiceInfo serviceInfo;
	std::list <MailClientLink>client_links;
	MailBillingDetails billingDetails;
	std::string custCurrency;
	std::string custCurrencySymbol;
	std::string package;
	MailSchema_extraInfoTables extraInfoTables;
	MailServiceType serviceType;
	std::string usage_count;
	std::list <std::string>serviceExtra;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailSchema_H_ */
