#ifndef _ServersManager_H_
#define _ServersManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BuyItNowList.h"
#include "BuyItNowServerOrder_200_response.h"
#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "PlaceBuyNowServer_request.h"
#include "ReverseDnsEntries.h"
#include "Server.h"
#include "ServerIpmiLiveInfo.h"
#include "ServerOrder.h"
#include "ServerRow.h"
#include "ServersBuyNowError.h"
#include "ServersBuyNowResponse.h"
#include "ServersCancel_200_response.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Servers Servers
 * \ingroup Operations
 *  @{
 */
class ServersManager {
public:
	ServersManager();
	virtual ~ServersManager();

/*! \brief Place Server Order. *Synchronous*
 *
 * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addServerSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Place Server Order. *Asynchronous*
 *
 * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addServerAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get Buy Now Server Options. *Synchronous*
 *
 * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool buyItNowServerOrderSync(char * accessToken,
	
	void(* handler)(BuyItNowServerOrder_200_response, Error, void* )
	, void* userData);

/*! \brief Get Buy Now Server Options. *Asynchronous*
 *
 * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool buyItNowServerOrderAsync(char * accessToken,
	
	void(* handler)(BuyItNowServerOrder_200_response, Error, void* )
	, void* userData);


/*! \brief List Marketplace Servers. *Synchronous*
 *
 * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMPServersSync(char * accessToken,
	
	void(* handler)(BuyItNowList, Error, void* )
	, void* userData);

/*! \brief List Marketplace Servers. *Asynchronous*
 *
 * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMPServersAsync(char * accessToken,
	
	void(* handler)(BuyItNowList, Error, void* )
	, void* userData);


/*! \brief Server Ordering Information. *Synchronous*
 *
 * Retrieves available server configurations and pricing for ordering a new dedicated server.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewServerSync(char * accessToken,
	
	void(* handler)(ServerOrder, Error, void* )
	, void* userData);

/*! \brief Server Ordering Information. *Asynchronous*
 *
 * Retrieves available server configurations and pricing for ordering a new dedicated server.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewServerAsync(char * accessToken,
	
	void(* handler)(ServerOrder, Error, void* )
	, void* userData);


/*! \brief Get Server Order. *Synchronous*
 *
 * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
 * \param id Server ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerInfoSync(char * accessToken,
	int id, 
	void(* handler)(Server, Error, void* )
	, void* userData);

/*! \brief Get Server Order. *Asynchronous*
 *
 * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
 * \param id Server ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerInfoAsync(char * accessToken,
	int id, 
	void(* handler)(Server, Error, void* )
	, void* userData);


/*! \brief Get Server Invoices. *Synchronous*
 *
 * Returns the billing invoices associated with this dedicated server.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get Server Invoices. *Asynchronous*
 *
 * Returns the billing invoices associated with this dedicated server.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief List Servers. *Synchronous*
 *
 * Returns all dedicated server services on the account with their current status and configuration.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerListSync(char * accessToken,
	
	void(* handler)(std::list<ServerRow>, Error, void* )
	, void* userData);

/*! \brief List Servers. *Asynchronous*
 *
 * Returns all dedicated server services on the account with their current status and configuration.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerListAsync(char * accessToken,
	
	void(* handler)(std::list<ServerRow>, Error, void* )
	, void* userData);


/*! \brief Reverse DNS Info. *Synchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerReverseDnsSync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);

/*! \brief Reverse DNS Info. *Asynchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerReverseDnsAsync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);


/*! \brief Resend Server Welcome Email. *Synchronous*
 *
 * Resends the welcome email for the order.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServersWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend Server Welcome Email. *Asynchronous*
 *
 * Resends the welcome email for the order.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServersWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Place Buy Now Server Order. *Synchronous*
 *
 * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
 * \param placeBuyNowServerRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool placeBuyNowServerSync(char * accessToken,
	std::shared_ptr<PlaceBuyNowServer_request> placeBuyNowServerRequest, 
	void(* handler)(ServersBuyNowResponse, Error, void* )
	, void* userData);

/*! \brief Place Buy Now Server Order. *Asynchronous*
 *
 * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
 * \param placeBuyNowServerRequest 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool placeBuyNowServerAsync(char * accessToken,
	std::shared_ptr<PlaceBuyNowServer_request> placeBuyNowServerRequest, 
	void(* handler)(ServersBuyNowResponse, Error, void* )
	, void* userData);


/*! \brief Update Reverse DNS. *Synchronous*
 *
 * Updates the reverse DNS (PTR record) entries for the server's IP addresses.
 * \param id Server ID number *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postServerReverseDnsSync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Update Reverse DNS. *Asynchronous*
 *
 * Updates the reverse DNS (PTR record) entries for the server's IP addresses.
 * \param id Server ID number *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postServerReverseDnsAsync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Validate Server Order. *Synchronous*
 *
 * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putServersSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate Server Order. *Asynchronous*
 *
 * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putServersAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Server IPMI Live Information. *Synchronous*
 *
 * Returns the current IPMI live connection information for the server.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiLiveGetSync(char * accessToken,
	int id, 
	void(* handler)(ServerIpmiLiveInfo, Error, void* )
	, void* userData);

/*! \brief Server IPMI Live Information. *Asynchronous*
 *
 * Returns the current IPMI live connection information for the server.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiLiveGetAsync(char * accessToken,
	int id, 
	void(* handler)(ServerIpmiLiveInfo, Error, void* )
	, void* userData);


/*! \brief Server IPMI Live Setup. *Synchronous*
 *
 * Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
 * \param id Server ID number *Required*
 * \param ip Your IP Address you wish to connect to the IPMI system from. *Required*
 * \param asset Asset ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiLivePostSync(char * accessToken,
	int id, std::string ip, int asset, 
	void(* handler)(ServerIpmiLiveInfo, Error, void* )
	, void* userData);

/*! \brief Server IPMI Live Setup. *Asynchronous*
 *
 * Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
 * \param id Server ID number *Required*
 * \param ip Your IP Address you wish to connect to the IPMI system from. *Required*
 * \param asset Asset ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiLivePostAsync(char * accessToken,
	int id, std::string ip, int asset, 
	void(* handler)(ServerIpmiLiveInfo, Error, void* )
	, void* userData);


/*! \brief Get IPMI Power Status. *Synchronous*
 *
 * Returns the chassis power status from ipmi.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiPowerGetSync(char * accessToken,
	int id, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Get IPMI Power Status. *Asynchronous*
 *
 * Returns the chassis power status from ipmi.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiPowerGetAsync(char * accessToken,
	int id, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Server IPMI Power. *Synchronous*
 *
 * Uses the IPMI interface to set the Power status on the server.
 * \param id Server ID number *Required*
 * \param action The power action to send to the ipmi controller. *Required*
 * \param asset The Asset ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiPowerPostSync(char * accessToken,
	int id, std::string action, int asset, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Server IPMI Power. *Asynchronous*
 *
 * Uses the IPMI interface to set the Power status on the server.
 * \param id Server ID number *Required*
 * \param action The power action to send to the ipmi controller. *Required*
 * \param asset The Asset ID
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serverIpmiPowerPostAsync(char * accessToken,
	int id, std::string action, int asset, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Cancel Server Service. *Synchronous*
 *
 * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serversCancelSync(char * accessToken,
	int id, 
	void(* handler)(ServersCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel Server Service. *Asynchronous*
 *
 * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
 * \param id Server ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool serversCancelAsync(char * accessToken,
	int id, 
	void(* handler)(ServersCancel_200_response, Error, void* )
	, void* userData);


/*! \brief Update Server Order. *Synchronous*
 *
 * Updates settings on a dedicated server order.
 * \param id Server ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateServerInfoSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update Server Order. *Asynchronous*
 *
 * Updates settings on a dedicated server order.
 * \param id Server ID number. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateServerInfoAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* ServersManager_H_ */
