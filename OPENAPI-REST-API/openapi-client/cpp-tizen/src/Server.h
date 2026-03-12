/*
 * Server.h
 *
 * 
 */

#ifndef _Server_H_
#define _Server_H_


#include <string>
#include "ServerBillingDetails.h"
#include "ServerClientLink.h"
#include "ServerExtraInfoTables.h"
#include "ServerNetworkInfo.h"
#include "ServerServiceInfo.h"
#include "Server_locations.h"
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

class Server : public Object {
public:
	/*! \brief Constructor.
	 */
	Server();
	Server(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Server();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getIpmiAuth();

	/*! \brief Set 
	 */
	void setIpmiAuth(bool  ipmiAuth);
	/*! \brief Get 
	 */
	std::list<ServerClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list <ServerClientLink> client_links);
	/*! \brief Get 
	 */
	ServerBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(ServerBillingDetails  billingDetails);
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
	std::list<std::string> getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(std::list <std::string> serviceExtra);
	/*! \brief Get 
	 */
	Server_locations getLocations();

	/*! \brief Set 
	 */
	void setLocations(Server_locations  locations);
	/*! \brief Get 
	 */
	ServerNetworkInfo getNetworkInfo();

	/*! \brief Set 
	 */
	void setNetworkInfo(ServerNetworkInfo  networkInfo);
	/*! \brief Get 
	 */
	ServerExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(ServerExtraInfoTables  extraInfoTables);
	/*! \brief Get 
	 */
	ServerServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(ServerServiceInfo  serviceInfo);

private:
	bool ipmiAuth;
	std::list <ServerClientLink>client_links;
	ServerBillingDetails billingDetails;
	std::string custCurrency;
	std::string custCurrencySymbol;
	std::string package;
	std::list <std::string>serviceExtra;
	Server_locations locations;
	ServerNetworkInfo networkInfo;
	ServerExtraInfoTables extraInfoTables;
	ServerServiceInfo serviceInfo;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Server_H_ */
