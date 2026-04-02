#ifndef _FloatingIPsManager_H_
#define _FloatingIPsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChargeInvoiceRows.h"
#include "Floating_ipsCancel_200_response.h"
#include "GetAccountInfo_401_response.h"
#include "ServiceOrderPostResponse.h"
#include "SuccessTextResponse.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup FloatingIPs FloatingIPs
 * \ingroup Operations
 *  @{
 */
class FloatingIPsManager {
public:
	FloatingIPsManager();
	virtual ~FloatingIPsManager();

/*! \brief Place Floating IP Order. *Synchronous*
 *
 * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addFloatingIpSync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);

/*! \brief Place Floating IP Order. *Asynchronous*
 *
 * Places an order for a new Floating IP service. Use `PUT /floating_ips/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addFloatingIpAsync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);


/*! \brief Cancel Floating IP. *Synchronous*
 *
 * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool floatingIpsCancelSync(char * accessToken,
	int id, 
	void(* handler)(Floating_ipsCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel Floating IP. *Asynchronous*
 *
 * Cancels a Floating IP service. After cancellation the IP assignment is released and the service transitions to a canceled status. No further billing charges will be incurred.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool floatingIpsCancelAsync(char * accessToken,
	int id, 
	void(* handler)(Floating_ipsCancel_200_response, Error, void* )
	, void* userData);


/*! \brief View Floating IP. *Synchronous*
 *
 * Returns detailed information about a specific Floating IP service including its current target IP assignment.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpInfoSync(char * accessToken,
	int id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief View Floating IP. *Asynchronous*
 *
 * Returns detailed information about a specific Floating IP service including its current target IP assignment.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpInfoAsync(char * accessToken,
	int id, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get Floating IP Invoices. *Synchronous*
 *
 * Returns the billing invoices associated with this Floating IP service.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get Floating IP Invoices. *Asynchronous*
 *
 * Returns the billing invoices associated with this Floating IP service.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief List Floating IPs. *Synchronous*
 *
 * Returns all Floating IP services on the account with their current status and assignment details.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpsListSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief List Floating IPs. *Asynchronous*
 *
 * Returns all Floating IP services on the account with their current status and assignment details.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpsListAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Resend Floating IPs Welcome Email. *Synchronous*
 *
 * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpsWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend Floating IPs Welcome Email. *Asynchronous*
 *
 * Resends the welcome email for the Floating IP service. The email contains setup instructions and connection details.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFloatingIpsWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get Floating IP Ordering Information. *Synchronous*
 *
 * Retrieves available options and pricing for ordering a new Floating IP.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewFloatingIpSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get Floating IP Ordering Information. *Asynchronous*
 *
 * Retrieves available options and pricing for ordering a new Floating IP.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewFloatingIpAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Change Floating IP Target. *Synchronous*
 *
 * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param ip IP Address *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postFloatingIpsChangeIpSync(char * accessToken,
	int id, std::string ip, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Change Floating IP Target. *Asynchronous*
 *
 * Changes the target IP address that the Floating IP points to. The Floating IP service must be active. Use `GET /floating_ips/{id}` to view the current target before making changes.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param ip IP Address *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postFloatingIpsChangeIpAsync(char * accessToken,
	int id, std::string ip, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Validate Floating IP Order. *Synchronous*
 *
 * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putFloatingIpsSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate Floating IP Order. *Asynchronous*
 *
 * Validates a Floating IP order before placing it. Use this to check for errors before committing to a purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putFloatingIpsAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update Floating IP. *Synchronous*
 *
 * Updates settings on a Floating IP service, such as its label or configuration metadata.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateFloatingIpInfoSync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Floating IP. *Asynchronous*
 *
 * Updates settings on a Floating IP service, such as its label or configuration metadata.
 * \param id The Floating IP service ID. Use the ID from `GET /floating_ips`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateFloatingIpInfoAsync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* FloatingIPsManager_H_ */
