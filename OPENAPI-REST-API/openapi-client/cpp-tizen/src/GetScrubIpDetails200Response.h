/*
 * GetScrubIpDetails_200_response.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_H_
#define _GetScrubIpDetails_200_response_H_


#include <string>
#include "GetScrubIpDetails_200_response_billingDetails.h"
#include "GetScrubIpDetails_200_response_client_links_inner.h"
#include "GetScrubIpDetails_200_response_extraInfoTables.h"
#include "GetScrubIpDetails_200_response_filter_firewall.h"
#include "GetScrubIpDetails_200_response_serviceInfo.h"
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

class GetScrubIpDetails_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response();
	GetScrubIpDetails_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	GetScrubIpDetails_200_response_serviceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(GetScrubIpDetails_200_response_serviceInfo  serviceInfo);
	/*! \brief Get 
	 */
	std::list<GetScrubIpDetails_200_response_client_links_inner> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list <GetScrubIpDetails_200_response_client_links_inner> client_links);
	/*! \brief Get 
	 */
	GetScrubIpDetails_200_response_billingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(GetScrubIpDetails_200_response_billingDetails  billingDetails);
	/*! \brief Get 
	 */
	std::string getCustCurrency();

	/*! \brief Set 
	 */
	void setCustCurrency(std::string  custCurrency);
	/*! \brief Get 
	 */
	std::string getCustCurrencySymbol();

	/*! \brief Set 
	 */
	void setCustCurrencySymbol(std::string  custCurrencySymbol);
	/*! \brief Get 
	 */
	std::string getPackage();

	/*! \brief Set 
	 */
	void setPackage(std::string  package);
	/*! \brief Get 
	 */
	GetScrubIpDetails_200_response_extraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(GetScrubIpDetails_200_response_extraInfoTables  extraInfoTables);
	/*! \brief Get 
	 */
	GetScrubIpDetails_200_response_filter_firewall getFilterFirewall();

	/*! \brief Set 
	 */
	void setFilterFirewall(GetScrubIpDetails_200_response_filter_firewall  filter_firewall);

private:
	GetScrubIpDetails_200_response_serviceInfo serviceInfo;
	std::list <GetScrubIpDetails_200_response_client_links_inner>client_links;
	GetScrubIpDetails_200_response_billingDetails billingDetails;
	std::string custCurrency;
	std::string custCurrencySymbol;
	std::string package;
	GetScrubIpDetails_200_response_extraInfoTables extraInfoTables;
	GetScrubIpDetails_200_response_filter_firewall filter_firewall;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetScrubIpDetails_200_response_H_ */
