#ifndef _LicensesManager_H_
#define _LicensesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "IpObject.h"
#include "License.h"
#include "LicenseRow.h"
#include "LicensesCancel_200_response.h"
#include "LicensesOrder.h"
#include "ServiceOrderPostResponse.h"
#include "SuccessTextResponse.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Licenses Licenses
 * \ingroup Operations
 *  @{
 */
class LicensesManager {
public:
	LicensesManager();
	virtual ~LicensesManager();

/*! \brief Place License Order. *Synchronous*
 *
 * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addLicenseSync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);

/*! \brief Place License Order. *Asynchronous*
 *
 * Places an order for a new software license. Use `PUT /licenses/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addLicenseAsync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);


/*! \brief Get License. *Synchronous*
 *
 * Returns detailed information about a specific license including its type, IP assignment, and status.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseInfoSync(char * accessToken,
	int id, 
	void(* handler)(License, Error, void* )
	, void* userData);

/*! \brief Get License. *Asynchronous*
 *
 * Returns detailed information about a specific license including its type, IP assignment, and status.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseInfoAsync(char * accessToken,
	int id, 
	void(* handler)(License, Error, void* )
	, void* userData);


/*! \brief Get License Invoices. *Synchronous*
 *
 * Returns the billing invoices associated with this license service.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get License Invoices. *Asynchronous*
 *
 * Returns the billing invoices associated with this license service.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief List Licenses. *Synchronous*
 *
 * Returns all software license services on the account with their current status and IP assignments.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseListSync(char * accessToken,
	
	void(* handler)(std::list<LicenseRow>, Error, void* )
	, void* userData);

/*! \brief List Licenses. *Asynchronous*
 *
 * Returns all software license services on the account with their current status and IP assignments.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseListAsync(char * accessToken,
	
	void(* handler)(std::list<LicenseRow>, Error, void* )
	, void* userData);


/*! \brief Get License Order Information for Category. *Synchronous*
 *
 * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
 * \param catTag The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseOrderCatTagInfoSync(char * accessToken,
	std::string catTag, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Get License Order Information for Category. *Asynchronous*
 *
 * Returns the available license types and pricing for a specific license category. Use the category tags from `GET /licenses/order` to identify valid values.
 * \param catTag The license category tag (e.g. `cpanel`, `plesk`). Obtain valid values from the `GET /licenses/order` response. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicenseOrderCatTagInfoAsync(char * accessToken,
	std::string catTag, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Resend License Welcome Email. *Synchronous*
 *
 * Resends the welcome email for the license service. The email contains the license key and activation instructions.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicensesWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend License Welcome Email. *Asynchronous*
 *
 * Resends the welcome email for the license service. The email contains the license key and activation instructions.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLicensesWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get License Order Information. *Synchronous*
 *
 * Retrieves available license types, categories, and pricing for ordering a new license.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewLicenseSync(char * accessToken,
	
	void(* handler)(LicensesOrder, Error, void* )
	, void* userData);

/*! \brief Get License Order Information. *Asynchronous*
 *
 * Retrieves available license types, categories, and pricing for ordering a new license.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewLicenseAsync(char * accessToken,
	
	void(* handler)(LicensesOrder, Error, void* )
	, void* userData);


/*! \brief Cancel License. *Synchronous*
 *
 * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool licensesCancelSync(char * accessToken,
	int id, 
	void(* handler)(LicensesCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel License. *Asynchronous*
 *
 * Cancels a license service. After cancellation the license key is deactivated and the service transitions to a canceled status. No further billing charges will be incurred.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool licensesCancelAsync(char * accessToken,
	int id, 
	void(* handler)(LicensesCancel_200_response, Error, void* )
	, void* userData);


/*! \brief Change License IP. *Synchronous*
 *
 * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param ipObject  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postLicenseChangeIpSync(char * accessToken,
	int id, std::shared_ptr<IpObject> ipObject, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Change License IP. *Asynchronous*
 *
 * Changes the IP address associated with the license. The service must be active. Use `GET /licenses/{id}` to view the current IP assignment before making changes.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param ipObject  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postLicenseChangeIpAsync(char * accessToken,
	int id, std::shared_ptr<IpObject> ipObject, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Validate License Order. *Synchronous*
 *
 * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putLicensesSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate License Order. *Asynchronous*
 *
 * Validates a license order before placing it. Use this to check for errors before committing to a purchase.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putLicensesAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update License. *Synchronous*
 *
 * Updates settings on a license service such as its assigned IP.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateLicenseInfoSync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update License. *Asynchronous*
 *
 * Updates settings on a license service such as its assigned IP.
 * \param id The license service ID. Use `license_id` from `GET /licenses`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateLicenseInfoAsync(char * accessToken,
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
#endif /* LicensesManager_H_ */
