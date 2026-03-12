
/*
 * Domain.h
 *
 * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 */

#ifndef TINY_CPP_CLIENT_Domain_H_
#define TINY_CPP_CLIENT_Domain_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BackupExtraInfoTables.h"
#include "DomainAllInfo.h"
#include "DomainBillingDetails.h"
#include "DomainBillingExtra.h"
#include "DomainClientLink.h"
#include "DomainContactDetails.h"
#include "DomainServiceInfo.h"
#include "DomainServiceType.h"
#include <list>
#include <map>

namespace Tiny {


/*! \brief Full detail view of a domain service including billing, contacts, DNS, and configuration.
 *
 *  \ingroup Models
 *
 */

class Domain{
public:

    /*! \brief Constructor.
	 */
    Domain();
    Domain(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Domain();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	DomainServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(DomainServiceInfo serviceInfo);
	/*! \brief Get 
	 */
	std::map<std::string, DomainServiceType> getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(std::map<std::string, DomainServiceType> serviceTypes);
	/*! \brief Get 
	 */
	std::list<DomainClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list<DomainClientLink> client_links);
	/*! \brief Get 
	 */
	DomainBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(DomainBillingDetails billingDetails);
	/*! \brief Get 
	 */
	std::string getCustCurrency();

	/*! \brief Set 
	 */
	void setCustCurrency(std::string custCurrency);
	/*! \brief Get 
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set 
	 */
	void setCustCurrencySymbol(std::string custCurrencySymbol);
	/*! \brief Get 
	 */
	DomainBillingExtra getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(DomainBillingExtra serviceExtra);
	/*! \brief Get 
	 */
	BackupExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(BackupExtraInfoTables extraInfoTables);
	/*! \brief Get 
	 */
	DomainServiceType getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(DomainServiceType serviceType);
	/*! \brief Get 
	 */
	DomainContactDetails getContactDetails();

	/*! \brief Set 
	 */
	void setContactDetails(DomainContactDetails contact_details);
	/*! \brief Get 
	 */
	std::string getPwarning();

	/*! \brief Set 
	 */
	void setPwarning(std::string pwarning);
	/*! \brief Get 
	 */
	std::string getTransferInfo();

	/*! \brief Set 
	 */
	void setTransferInfo(std::string transfer_info);
	/*! \brief Get 
	 */
	bool isErrors();

	/*! \brief Set 
	 */
	void setErrors(bool errors);
	/*! \brief Get 
	 */
	std::list<std::string> getDomainLogs();

	/*! \brief Set 
	 */
	void setDomainLogs(std::list<std::string> domain_logs);
	/*! \brief Get 
	 */
	DomainAllInfo getAllInfo();

	/*! \brief Set 
	 */
	void setAllInfo(DomainAllInfo allInfo);
	/*! \brief Get 
	 */
	std::string getRegistrarStatus();

	/*! \brief Set 
	 */
	void setRegistrarStatus(std::string registrarStatus);
	/*! \brief Get 
	 */
	std::string getLocked();

	/*! \brief Set 
	 */
	void setLocked(std::string locked);
	/*! \brief Get 
	 */
	std::string getWhoisPrivacy();

	/*! \brief Set 
	 */
	void setWhoisPrivacy(std::string whoisPrivacy);
	/*! \brief Get 
	 */
	std::string getAutoRenew();

	/*! \brief Set 
	 */
	void setAutoRenew(std::string autoRenew);


    private:
    DomainServiceInfo serviceInfo;
    std::map<std::string, DomainServiceType> serviceTypes;
    std::list<DomainClientLink> client_links;
    DomainBillingDetails billingDetails;
    std::string custCurrency{};
    std::string custCurrencySymbol{};
    DomainBillingExtra serviceExtra;
    BackupExtraInfoTables extraInfoTables;
    DomainServiceType serviceType;
    DomainContactDetails contact_details;
    std::string pwarning{};
    std::string transfer_info{};
    bool errors{};
    std::list<std::string> domain_logs;
    DomainAllInfo allInfo;
    std::string registrarStatus{};
    std::string locked{};
    std::string whoisPrivacy{};
    std::string autoRenew{};
};
}

#endif /* TINY_CPP_CLIENT_Domain_H_ */
