#ifndef _ScrubIpsManager_H_
#define _ScrubIpsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
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
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ScrubIps ScrubIps
 * \ingroup Operations
 *  @{
 */
class ScrubIpsManager {
public:
	ScrubIpsManager();
	virtual ~ScrubIpsManager();

/*! \brief Cancel Scrub IP Service. *Synchronous*
 *
 * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool cancelScrubIpSync(char * accessToken,
	int id, 
	void(* handler)(CancelScrubIp_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel Scrub IP Service. *Asynchronous*
 *
 * Cancels the Scrub IP DDoS protection service. The protection will be removed and billing will stop at the end of the current billing cycle.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool cancelScrubIpAsync(char * accessToken,
	int id, 
	void(* handler)(CancelScrubIp_200_response, Error, void* )
	, void* userData);


/*! \brief Create Traffic Filter. *Synchronous*
 *
 * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
 * \param id ScrubIp ID number *Required*
 * \param createFilter  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createFilterSync(char * accessToken,
	int id, std::shared_ptr<CreateFilter> createFilter, 
	void(* handler)(CreateFilter_201_response, Error, void* )
	, void* userData);

/*! \brief Create Traffic Filter. *Asynchronous*
 *
 * Creates a traffic filter for the Scrub IP service. Filters apply predefined scrubbing profiles (e.g., DNS, HTTP) to specific destination ports. Use `GET /scrub_ips/filter_types` to list available filter types.
 * \param id ScrubIp ID number *Required*
 * \param createFilter  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createFilterAsync(char * accessToken,
	int id, std::shared_ptr<CreateFilter> createFilter, 
	void(* handler)(CreateFilter_201_response, Error, void* )
	, void* userData);


/*! \brief Create Geo Firewall Rule. *Synchronous*
 *
 * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
 * \param id ScrubIp ID number *Required*
 * \param createGeoFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGeoRuleSync(char * accessToken,
	int id, std::shared_ptr<CreateGeoFirewallRule> createGeoFirewallRule, 
	void(* handler)(CreateRule_201_response, Error, void* )
	, void* userData);

/*! \brief Create Geo Firewall Rule. *Asynchronous*
 *
 * Creates a geographic-based firewall rule for the Scrub IP service. Geo rules allow you to block or allow traffic from specific countries or regions.
 * \param id ScrubIp ID number *Required*
 * \param createGeoFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createGeoRuleAsync(char * accessToken,
	int id, std::shared_ptr<CreateGeoFirewallRule> createGeoFirewallRule, 
	void(* handler)(CreateRule_201_response, Error, void* )
	, void* userData);


/*! \brief Create Firewall Rule. *Synchronous*
 *
 * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
 * \param id ScrubIp ID number *Required*
 * \param createFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRuleSync(char * accessToken,
	int id, std::shared_ptr<CreateFirewallRule> createFirewallRule, 
	void(* handler)(CreateRule_201_response, Error, void* )
	, void* userData);

/*! \brief Create Firewall Rule. *Asynchronous*
 *
 * Creates a new firewall rule for the Scrub IP service. Rules allow you to block or allow traffic based on source IP, destination port, and protocol.
 * \param id ScrubIp ID number *Required*
 * \param createFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRuleAsync(char * accessToken,
	int id, std::shared_ptr<CreateFirewallRule> createFirewallRule, 
	void(* handler)(CreateRule_201_response, Error, void* )
	, void* userData);


/*! \brief Delete Traffic Filter. *Synchronous*
 *
 * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
 * \param id ScrubIp ID number *Required*
 * \param createFilter  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteFilterSync(char * accessToken,
	int id, std::shared_ptr<CreateFilter> createFilter, 
	void(* handler)(DeleteFilter_200_response, Error, void* )
	, void* userData);

/*! \brief Delete Traffic Filter. *Asynchronous*
 *
 * Removes an existing traffic filter from the Scrub IP service. Provide the same filter parameters used during creation to identify which filter to remove.
 * \param id ScrubIp ID number *Required*
 * \param createFilter  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteFilterAsync(char * accessToken,
	int id, std::shared_ptr<CreateFilter> createFilter, 
	void(* handler)(DeleteFilter_200_response, Error, void* )
	, void* userData);


/*! \brief Disable Scrub Protection. *Synchronous*
 *
 * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool disableScrubSync(char * accessToken,
	int id, 
	void(* handler)(DisableScrub_200_response, Error, void* )
	, void* userData);

/*! \brief Disable Scrub Protection. *Asynchronous*
 *
 * Disables DDoS scrubbing protection on the IP address. Traffic will no longer be routed through the scrubbing infrastructure.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool disableScrubAsync(char * accessToken,
	int id, 
	void(* handler)(DisableScrub_200_response, Error, void* )
	, void* userData);


/*! \brief Enable Scrub Protection. *Synchronous*
 *
 * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool enableScrubSync(char * accessToken,
	int id, 
	void(* handler)(EnableScrub_200_response, Error, void* )
	, void* userData);

/*! \brief Enable Scrub Protection. *Asynchronous*
 *
 * Enables DDoS scrubbing protection on the IP address associated with this service. Traffic will be routed through the scrubbing infrastructure to filter malicious packets.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool enableScrubAsync(char * accessToken,
	int id, 
	void(* handler)(EnableScrub_200_response, Error, void* )
	, void* userData);


/*! \brief Get Scrub IP Ordering Information. *Synchronous*
 *
 * Returns the available Scrub IP service plans and pricing information needed to build an order form.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getOrderDetailSync(char * accessToken,
	
	void(* handler)(GetOrderDetail_200_response, Error, void* )
	, void* userData);

/*! \brief Get Scrub IP Ordering Information. *Asynchronous*
 *
 * Returns the available Scrub IP service plans and pricing information needed to build an order form.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getOrderDetailAsync(char * accessToken,
	
	void(* handler)(GetOrderDetail_200_response, Error, void* )
	, void* userData);


/*! \brief Get Scrub IP Details. *Synchronous*
 *
 * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpDetailsSync(char * accessToken,
	int id, 
	void(* handler)(GetScrubIpDetails_200_response, Error, void* )
	, void* userData);

/*! \brief Get Scrub IP Details. *Asynchronous*
 *
 * Returns detailed information about a Scrub IP service, including connection details, billing information, active firewall rules, and traffic filters.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpDetailsAsync(char * accessToken,
	int id, 
	void(* handler)(GetScrubIpDetails_200_response, Error, void* )
	, void* userData);


/*! \brief List Scrub Filter Types. *Synchronous*
 *
 * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpFilterTypesSync(char * accessToken,
	
	void(* handler)(ScrubIpFilterTypes, Error, void* )
	, void* userData);

/*! \brief List Scrub Filter Types. *Asynchronous*
 *
 * Returns the list of scrub filter types that can be used when creating filter rules via `/scrub_ips/{id}/create_filter`.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpFilterTypesAsync(char * accessToken,
	
	void(* handler)(ScrubIpFilterTypes, Error, void* )
	, void* userData);


/*! \brief Get ScrubIp Invoices. *Synchronous*
 *
 * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get ScrubIp Invoices. *Asynchronous*
 *
 * Retrieves invoices associated with the scrub IP service. Use these invoices to confirm billing status or to initiate payment.
 * \param id ScrubIp ID number *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief Get Scrub IP Logs. *Synchronous*
 *
 * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
 * \param id Scrub Order ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpLogsSync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<ScrubIpsLogRowSchema>, Error, void* )
	, void* userData);

/*! \brief Get Scrub IP Logs. *Asynchronous*
 *
 * Returns the activity and event logs for the Scrub IP service, including scrubbing events and configuration changes.
 * \param id Scrub Order ID *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpLogsAsync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<ScrubIpsLogRowSchema>, Error, void* )
	, void* userData);


/*! \brief List Scrub IP Services. *Synchronous*
 *
 * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpsListSync(char * accessToken,
	
	void(* handler)(std::list<ScrubIpsRowSchema>, Error, void* )
	, void* userData);

/*! \brief List Scrub IP Services. *Asynchronous*
 *
 * Returns all Scrub IP DDoS protection services on your account with their current status and associated IP addresses.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getScrubIpsListAsync(char * accessToken,
	
	void(* handler)(std::list<ScrubIpsRowSchema>, Error, void* )
	, void* userData);


/*! \brief Place Scrub IP Order. *Synchronous*
 *
 * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
 * \param scrubIpPlaceOrder  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool placeScrubOrderSync(char * accessToken,
	std::shared_ptr<ScrubIpPlaceOrder> scrubIpPlaceOrder, 
	void(* handler)(PlaceScrubOrder_201_response, Error, void* )
	, void* userData);

/*! \brief Place Scrub IP Order. *Asynchronous*
 *
 * Places an order for a new Scrub IP DDoS protection service. On success, an invoice is generated for payment.
 * \param scrubIpPlaceOrder  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool placeScrubOrderAsync(char * accessToken,
	std::shared_ptr<ScrubIpPlaceOrder> scrubIpPlaceOrder, 
	void(* handler)(PlaceScrubOrder_201_response, Error, void* )
	, void* userData);


/*! \brief Delete Geo Firewall Rule. *Synchronous*
 *
 * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
 * \param id ScrubIp ID number *Required*
 * \param deleteGeoFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool scrubIpsDeleteGeoRuleSync(char * accessToken,
	int id, std::shared_ptr<Delete_Geo_Firewall_Rule> deleteGeoFirewallRule, 
	void(* handler)(ScrubIpsDeleteRule_200_response, Error, void* )
	, void* userData);

/*! \brief Delete Geo Firewall Rule. *Asynchronous*
 *
 * Removes an existing geographic-based firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
 * \param id ScrubIp ID number *Required*
 * \param deleteGeoFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool scrubIpsDeleteGeoRuleAsync(char * accessToken,
	int id, std::shared_ptr<Delete_Geo_Firewall_Rule> deleteGeoFirewallRule, 
	void(* handler)(ScrubIpsDeleteRule_200_response, Error, void* )
	, void* userData);


/*! \brief Delete Firewall Rule. *Synchronous*
 *
 * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
 * \param id ScrubIp ID number *Required*
 * \param deleteFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool scrubIpsDeleteRuleSync(char * accessToken,
	int id, std::shared_ptr<Delete_Firewall_Rule> deleteFirewallRule, 
	void(* handler)(ScrubIpsDeleteRule_200_response, Error, void* )
	, void* userData);

/*! \brief Delete Firewall Rule. *Asynchronous*
 *
 * Removes an existing firewall rule from the Scrub IP service. Use the `rule_id` from the service details response to identify the rule to delete.
 * \param id ScrubIp ID number *Required*
 * \param deleteFirewallRule  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool scrubIpsDeleteRuleAsync(char * accessToken,
	int id, std::shared_ptr<Delete_Firewall_Rule> deleteFirewallRule, 
	void(* handler)(ScrubIpsDeleteRule_200_response, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* ScrubIpsManager_H_ */
