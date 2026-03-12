
/*
 * Server.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Server_H_
#define TINY_CPP_CLIENT_Server_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerBillingDetails.h"
#include "ServerClientLink.h"
#include "ServerExtraInfoTables.h"
#include "ServerNetworkInfo.h"
#include "ServerServiceInfo.h"
#include "Server_locations.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Server{
public:

    /*! \brief Constructor.
	 */
    Server();
    Server(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Server();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isIpmiAuth();

	/*! \brief Set 
	 */
	void setIpmiAuth(bool ipmiAuth);
	/*! \brief Get 
	 */
	std::list<ServerClientLink> getClientLinks();

	/*! \brief Set 
	 */
	void setClientLinks(std::list<ServerClientLink> client_links);
	/*! \brief Get 
	 */
	ServerBillingDetails getBillingDetails();

	/*! \brief Set 
	 */
	void setBillingDetails(ServerBillingDetails billingDetails);
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
	std::string getPackage();

	/*! \brief Set 
	 */
	void setPackage(std::string package);
	/*! \brief Get 
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(std::list<std::string> serviceExtra);
	/*! \brief Get 
	 */
	Server_locations getLocations();

	/*! \brief Set 
	 */
	void setLocations(Server_locations locations);
	/*! \brief Get 
	 */
	ServerNetworkInfo getNetworkInfo();

	/*! \brief Set 
	 */
	void setNetworkInfo(ServerNetworkInfo networkInfo);
	/*! \brief Get 
	 */
	ServerExtraInfoTables getExtraInfoTables();

	/*! \brief Set 
	 */
	void setExtraInfoTables(ServerExtraInfoTables extraInfoTables);
	/*! \brief Get 
	 */
	ServerServiceInfo getServiceInfo();

	/*! \brief Set 
	 */
	void setServiceInfo(ServerServiceInfo serviceInfo);


    private:
    bool ipmiAuth{};
    std::list<ServerClientLink> client_links;
    ServerBillingDetails billingDetails;
    std::string custCurrency{};
    std::string custCurrencySymbol{};
    std::string package{};
    std::list<std::string> serviceExtra;
    Server_locations locations;
    ServerNetworkInfo networkInfo;
    ServerExtraInfoTables extraInfoTables;
    ServerServiceInfo serviceInfo;
};
}

#endif /* TINY_CPP_CLIENT_Server_H_ */
