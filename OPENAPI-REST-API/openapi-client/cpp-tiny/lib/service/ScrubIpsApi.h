#ifndef TINY_CPP_CLIENT_ScrubIpsApi_H_
#define TINY_CPP_CLIENT_ScrubIpsApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "CancelScrubIp_200_response.h"
#include "ChargeInvoiceRows.h"
#include "CreateFilter.h"
#include "CreateFilter_201_response.h"
#include "CreateFilter_400_response.h"
#include "CreateFilter_500_response.h"
#include "CreateFirewallRule.h"
#include "CreateGeoFirewallRule.h"
#include "CreateGeoRule_400_response.h"
#include "CreateRule_201_response.h"
#include "CreateRule_400_response.h"
#include "CreateRule_500_response.h"
#include "DeleteFilter_200_response.h"
#include "DeleteFilter_400_response.h"
#include "DeleteFilter_500_response.h"
#include "Delete_Firewall_Rule.h"
#include "Delete_Geo_Firewall_Rule.h"
#include "DisableScrub_200_response.h"
#include "DisableScrub_400_response.h"
#include "DisableScrub_500_response.h"
#include "EnableScrub_200_response.h"
#include "EnableScrub_500_response.h"
#include "GetAccountInfo_401_response.h"
#include "GetOrderDetail_200_response.h"
#include "GetScrubIpDetails_200_response.h"
#include "PlaceScrubOrder_201_response.h"
#include "ScrubIpFilterTypes.h"
#include "ScrubIpPlaceOrder.h"
#include "ScrubIpsDeleteRule_200_response.h"
#include "ScrubIpsDeleteRule_400_response.h"
#include "ScrubIpsDeleteRule_500_response.h"
#include "ScrubIpsLogRowSchema.h"
#include "ScrubIpsRowSchema.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class ScrubIpsApi : public Service {
public:
    ScrubIpsApi() = default;

    virtual ~ScrubIpsApi() = default;

    /**
    * Cancel Scrub IP Service.
    *
    * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
    * \param id ScrubIp ID number *Required*
    */
    Response<
                CancelScrubIp_200_response
        >
    cancelScrubIp(
            
            int id
            
    );
    /**
    * Create Traffic Filter.
    *
    * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
    * \param id ScrubIp ID number *Required*
    * \param createFilter  *Required*
    */
    Response<
                CreateFilter_201_response
        >
    createFilter(
            
            int id
            , 
            
            CreateFilter createFilter
            
    );
    /**
    * Create Geo Firewall Rule.
    *
    * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
    * \param id ScrubIp ID number *Required*
    * \param createGeoFirewallRule  *Required*
    */
    Response<
                CreateRule_201_response
        >
    createGeoRule(
            
            int id
            , 
            
            CreateGeoFirewallRule createGeoFirewallRule
            
    );
    /**
    * Create Firewall Rule.
    *
    * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
    * \param id ScrubIp ID number *Required*
    * \param createFirewallRule  *Required*
    */
    Response<
                CreateRule_201_response
        >
    createRule(
            
            int id
            , 
            
            CreateFirewallRule createFirewallRule
            
    );
    /**
    * Delete Traffic Filter.
    *
    * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
    * \param id ScrubIp ID number *Required*
    * \param createFilter  *Required*
    */
    Response<
                DeleteFilter_200_response
        >
    deleteFilter(
            
            int id
            , 
            
            CreateFilter createFilter
            
    );
    /**
    * Disable Scrub Protection.
    *
    * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
    * \param id ScrubIp ID number *Required*
    */
    Response<
                DisableScrub_200_response
        >
    disableScrub(
            
            int id
            
    );
    /**
    * Enable Scrub Protection.
    *
    * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
    * \param id ScrubIp ID number *Required*
    */
    Response<
                EnableScrub_200_response
        >
    enableScrub(
            
            int id
            
    );
    /**
    * Get Scrub IP Ordering Information.
    *
    * Returns the available Scrub IP service plans and pricing information needed to build an order form.
    */
    Response<
                GetOrderDetail_200_response
        >
    getOrderDetail(
    );
    /**
    * Get Scrub IP Details.
    *
    * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
    * \param id ScrubIp ID number *Required*
    */
    Response<
                GetScrubIpDetails_200_response
        >
    getScrubIpDetails(
            
            int id
            
    );
    /**
    * List Scrub Filter Types.
    *
    * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
    */
    Response<
                ScrubIpFilterTypes
        >
    getScrubIpFilterTypes(
    );
    /**
    * Get ScrubIp Invoices.
    *
    * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
    * \param id ScrubIp ID number *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getScrubIpInvoices(
            
            int id
            
    );
    /**
    * Get Scrub IP Logs.
    *
    * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
    * \param id Scrub Order ID *Required*
    */
    Response<
                    std::list<ScrubIpsLogRowSchema>
        >
    getScrubIpLogs(
            
            std::string id
            
    );
    /**
    * List Scrub IP Services.
    *
    * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
    */
    Response<
                    std::list<ScrubIpsRowSchema>
        >
    getScrubIpsList(
    );
    /**
    * Place Scrub IP Order.
    *
    * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
    * \param scrubIpPlaceOrder  *Required*
    */
    Response<
                PlaceScrubOrder_201_response
        >
    placeScrubOrder(
            
            ScrubIpPlaceOrder scrubIpPlaceOrder
            
    );
    /**
    * Delete Geo Firewall Rule.
    *
    * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
    * \param id ScrubIp ID number *Required*
    * \param deleteGeoFirewallRule  *Required*
    */
    Response<
                ScrubIpsDeleteRule_200_response
        >
    scrubIpsDeleteGeoRule(
            
            int id
            , 
            
            Delete_Geo_Firewall_Rule deleteGeoFirewallRule
            
    );
    /**
    * Delete Firewall Rule.
    *
    * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
    * \param id ScrubIp ID number *Required*
    * \param deleteFirewallRule  *Required*
    */
    Response<
                ScrubIpsDeleteRule_200_response
        >
    scrubIpsDeleteRule(
            
            int id
            , 
            
            Delete_Firewall_Rule deleteFirewallRule
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_ScrubIpsApi_H_ */