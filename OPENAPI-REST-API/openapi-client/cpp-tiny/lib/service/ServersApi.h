#ifndef TINY_CPP_CLIENT_ServersApi_H_
#define TINY_CPP_CLIENT_ServersApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "AddServer_200_response.h"
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

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class ServersApi : public Service {
public:
    ServersApi() = default;

    virtual ~ServersApi();

    /**
    * Place Server Order.
    *
    * Places an order for a new dedicated server. Use `PUT /servers/order` to validate the order first.
    */
    Response<
                AddServer_200_response
        >
    addServer(
    );
    /**
    * Get Buy Now Server Options.
    *
    * Returns the configuration options and pricing for buy-it-now dedicated servers, including available bandwidth packages, IP blocks, operating systems, control panels, and RAID configurations. Use the returned option IDs when placing an order via `POST /servers/order/buy_now_server`.
    */
    Response<
                BuyItNowServerOrder_200_response
        >
    buyItNowServerOrder(
    );
    /**
    * List Marketplace Servers.
    *
    * Returns the list of available Rapid Deploy dedicated servers with current pricing. Each entry includes CPU, memory, disk, bandwidth, IP allocation, and location details. These servers are pre-configured and can be provisioned immediately after purchase.
    */
    Response<
                BuyItNowList
        >
    getMPServers(
    );
    /**
    * Server Ordering Information.
    *
    * Retrieves available server configurations and pricing for ordering a new dedicated server.
    */
    Response<
                ServerOrder
        >
    getNewServer(
    );
    /**
    * Get Server Order.
    *
    * Returns detailed information about a specific server including its hardware configuration, IPs, and status.
    * \param id Server ID number. *Required*
    */
    Response<
                Server
        >
    getServerInfo(
            
            int id
            
    );
    /**
    * Get Server Invoices.
    *
    * Returns the billing invoices associated with this dedicated server.
    * \param id Server ID number *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getServerInvoices(
            
            int id
            
    );
    /**
    * List Servers.
    *
    * Returns all dedicated server services on the account with their current status and configuration.
    */
    Response<
                    std::list<ServerRow>
        >
    getServerList(
    );
    /**
    * Reverse DNS Info.
    *
    * Returns the current reverse DNS (PTR record) entries for the server's IP addresses.
    * \param id Server ID number *Required*
    */
    Response<
                ReverseDnsEntries
        >
    getServerReverseDns(
            
            int id
            
    );
    /**
    * Resend Server Welcome Email.
    *
    * Resends the welcome email for the order.
    * \param id Server ID number *Required*
    */
    Response<
                SuccessTextResponse
        >
    getServersWelcomeEmail(
            
            int id
            
    );
    /**
    * Place Buy Now Server Order.
    *
    * Places an order for a buy-it-now dedicated server. Use `GET /servers/order/buy_now_server` to retrieve available server configurations and their IDs before ordering.
    * \param placeBuyNowServerRequest 
    */
    Response<
                ServersBuyNowResponse
        >
    placeBuyNowServer(
            
            PlaceBuyNowServer_request placeBuyNowServerRequest
            
    );
    /**
    * Update Reverse DNS.
    *
    * Updates the reverse DNS (PTR record) entries for the server's IP addresses.
    * \param id Server ID number *Required*
    * \param reverseDnsEntries  *Required*
    */
    Response<
                TextResponse
        >
    postServerReverseDns(
            
            int id
            , 
            
            ReverseDnsEntries reverseDnsEntries
            
    );
    /**
    * Validate Server Order.
    *
    * Validates a server order before placing it. Use this to check for errors before committing to a purchase.
    */
    Response<
            String
        >
    putServers(
    );
    /**
    * Server IPMI Live Information.
    *
    * Returns the current IPMI live connection information for the server.
    * \param id Server ID number *Required*
    */
    Response<
                ServerIpmiLiveInfo
        >
    serverIpmiLiveGet(
            
            int id
            
    );
    /**
    * Server IPMI Live Setup.
    *
    * Configures IPMI live access by whitelisting your current IP address for connections to the server's IPMI management interface.
    * \param id Server ID number *Required*
    * \param ip Your IP Address you wish to connect to the IPMI system from. *Required*
    * \param asset Asset ID
    */
    Response<
                ServerIpmiLiveInfo
        >
    serverIpmiLivePost(
            
            int id
            , 
            
            std::string ip
            , 
            
            int asset
            
    );
    /**
    * Get IPMI Power Status.
    *
    * Returns the chassis power status from ipmi.
    * \param id Server ID number *Required*
    */
    Response<
                TextResponse
        >
    serverIpmiPowerGet(
            
            int id
            
    );
    /**
    * Server IPMI Power.
    *
    * Uses the IPMI interface to set the Power status on the server.
    * \param id Server ID number *Required*
    * \param action The power action to send to the ipmi controller. *Required*
    * \param asset The Asset ID
    */
    Response<
                TextResponse
        >
    serverIpmiPowerPost(
            
            int id
            , 
            
            std::string action
            , 
            
            int asset
            
    );
    /**
    * Cancel Server Service.
    *
    * Cancels the dedicated server service. The server will be deprovisioned and billing will stop at the end of the current billing cycle.
    * \param id Server ID number *Required*
    */
    Response<
                ServersCancel_200_response
        >
    serversCancel(
            
            int id
            
    );
    /**
    * Update Server Order.
    *
    * Updates settings on a dedicated server order.
    * \param id Server ID number. *Required*
    */
    Response<
                SuccessTextResponse
        >
    updateServerInfo(
            
            std::string id
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_ServersApi_H_ */