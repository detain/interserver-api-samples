
/*
 * MailSchema.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_MailSchema_H_
#define TINY_CPP_CLIENT_MailSchema_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailBillingDetails.h"
#include "MailClientLink.h"
#include "MailSchema_extraInfoTables.h"
#include "MailServiceInfo.h"
#include "MailServiceType.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MailSchema{
public:

    /*! \brief Constructor.
	 */
    MailSchema();
    MailSchema(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailSchema();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	MailServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(MailServiceInfo serviceInfo);
	/*! \brief Get Links related to the mail service for clients.
	 */
	std::list<MailClientLink> getClientLinks();

	/*! \brief Set Links related to the mail service for clients.
	 */
	void setClientLinks(std::list<MailClientLink> client_links);
	/*! \brief Get 
	 */
	MailBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(MailBillingDetails billingDetails);
	/*! \brief Get The customer's currency.
	 */
	std::string getCustCurrency();

	/*! \brief Set The customer's currency.
	 */
	void setCustCurrency(std::string custCurrency);
	/*! \brief Get The currency symbol for the customer.
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set The currency symbol for the customer.
	 */
	void setCustCurrencySymbol(std::string custCurrencySymbol);
	/*! \brief Get The package of the mail service.
	 */
	std::string getPackage();

	/*! \brief Set The package of the mail service.
	 */
	void setPackage(std::string package);
	/*! \brief Get 
	 */
	MailSchema_extraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(MailSchema_extraInfoTables extraInfoTables);
	/*! \brief Get 
	 */
	MailServiceType getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(MailServiceType serviceType);
	/*! \brief Get The usage count of the mail service.
	 */
	std::string getUsageCount();

	/*! \brief Set The usage count of the mail service.
	 */
	void setUsageCount(std::string usage_count);
	/*! \brief Get Extra information for the mail service.
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set Extra information for the mail service.
	 */
	void setServiceExtra(std::list<std::string> serviceExtra);


    private:
    MailServiceInfo serviceInfo;
    std::list<MailClientLink> client_links;
    MailBillingDetails billingDetails;
    std::string custCurrency{};
    std::string custCurrencySymbol{};
    std::string package{};
    MailSchema_extraInfoTables extraInfoTables;
    MailServiceType serviceType;
    std::string usage_count{};
    std::list<std::string> serviceExtra;
};
}

#endif /* TINY_CPP_CLIENT_MailSchema_H_ */
