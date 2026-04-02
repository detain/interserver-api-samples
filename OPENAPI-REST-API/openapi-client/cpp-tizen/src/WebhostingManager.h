#ifndef _WebhostingManager_H_
#define _WebhostingManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "GetWebsiteBuyIp_200_response.h"
#include "PostWebsiteBuyIp_200_response.h"
#include "PostWebsiteBuyIp_request.h"
#include "PostWebsiteMigration_200_response.h"
#include "PostWebsiteMigration_request.h"
#include "PostWebsiteMigration_request_1.h"
#include "ReverseDnsEntries.h"
#include "ServiceOrderPostResponse.h"
#include "SuccessTextResponse.h"
#include "TextResponse.h"
#include "WebhostingCancel_200_response.h"
#include "Website.h"
#include "WebsiteBackups.h"
#include "WebsiteLoginResponse.h"
#include "WebsiteRow.h"
#include "WebsitesOrder.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Webhosting Webhosting
 * \ingroup Operations
 *  @{
 */
class WebhostingManager {
public:
	WebhostingManager();
	virtual ~WebhostingManager();

/*! \brief Place Website Order. *Synchronous*
 *
 * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addWebsiteSync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);

/*! \brief Place Website Order. *Asynchronous*
 *
 * Places an order for a new webhosting package. Use `PUT /websites/order` to validate the order first.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addWebsiteAsync(char * accessToken,
	
	void(* handler)(ServiceOrderPostResponse, Error, void* )
	, void* userData);


/*! \brief Website Ordering Information. *Synchronous*
 *
 * Retrieves available webhosting plans and pricing for ordering.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewWebsiteSync(char * accessToken,
	
	void(* handler)(WebsitesOrder, Error, void* )
	, void* userData);

/*! \brief Website Ordering Information. *Asynchronous*
 *
 * Retrieves available webhosting plans and pricing for ordering.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNewWebsiteAsync(char * accessToken,
	
	void(* handler)(WebsitesOrder, Error, void* )
	, void* userData);


/*! \brief Get Website IP Information. *Synchronous*
 *
 * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteBuyIpSync(char * accessToken,
	int id, 
	void(* handler)(GetWebsiteBuyIp_200_response, Error, void* )
	, void* userData);

/*! \brief Get Website IP Information. *Asynchronous*
 *
 * Returns the IP addresses assigned to the website along with their current reverse DNS hostnames. Use this information to review assignments before updating reverse DNS via `POST /websites/{id}/buy_ip`.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteBuyIpAsync(char * accessToken,
	int id, 
	void(* handler)(GetWebsiteBuyIp_200_response, Error, void* )
	, void* userData);


/*! \brief Get Website Order. *Synchronous*
 *
 * Returns detailed information about a specific webhosting order including its domain, plan, and status.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteInfoSync(char * accessToken,
	int id, 
	void(* handler)(Website, Error, void* )
	, void* userData);

/*! \brief Get Website Order. *Asynchronous*
 *
 * Returns detailed information about a specific webhosting order including its domain, plan, and status.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteInfoAsync(char * accessToken,
	int id, 
	void(* handler)(Website, Error, void* )
	, void* userData);


/*! \brief Get Website Invoices. *Synchronous*
 *
 * Returns the billing invoices associated with this webhosting service.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteInvoicesSync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);

/*! \brief Get Website Invoices. *Asynchronous*
 *
 * Returns the billing invoices associated with this webhosting service.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteInvoicesAsync(char * accessToken,
	int id, 
	void(* handler)(ChargeInvoiceRows, Error, void* )
	, void* userData);


/*! \brief Get Website Listing. *Synchronous*
 *
 * Gets a listing of your webhosting orders and service details.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteListSync(char * accessToken,
	
	void(* handler)(std::list<WebsiteRow>, Error, void* )
	, void* userData);

/*! \brief Get Website Listing. *Asynchronous*
 *
 * Gets a listing of your webhosting orders and service details.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsiteListAsync(char * accessToken,
	
	void(* handler)(std::list<WebsiteRow>, Error, void* )
	, void* userData);


/*! \brief Get Website Backups. *Synchronous*
 *
 * Gets a list of the backups that exist for a website and their sizes.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsitesBackupsSync(char * accessToken,
	int id, 
	void(* handler)(WebsiteBackups, Error, void* )
	, void* userData);

/*! \brief Get Website Backups. *Asynchronous*
 *
 * Gets a list of the backups that exist for a website and their sizes.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsitesBackupsAsync(char * accessToken,
	int id, 
	void(* handler)(WebsiteBackups, Error, void* )
	, void* userData);


/*! \brief Hosting Panel Auto Login. *Synchronous*
 *
 * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsitesLoginSync(char * accessToken,
	int id, 
	void(* handler)(WebsiteLoginResponse, Error, void* )
	, void* userData);

/*! \brief Hosting Panel Auto Login. *Asynchronous*
 *
 * Returns an auto-login URL for the webhosting control panel. Use this to access cPanel or DirectAdmin without entering credentials.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsitesLoginAsync(char * accessToken,
	int id, 
	void(* handler)(WebsiteLoginResponse, Error, void* )
	, void* userData);


/*! \brief Resend Website Welcome Email. *Synchronous*
 *
 * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsitesWelcomeEmailSync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Resend Website Welcome Email. *Asynchronous*
 *
 * Resends the welcome email containing hosting credentials and panel access details for the webhosting order.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getWebsitesWelcomeEmailAsync(char * accessToken,
	int id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Get Website Reverse DNS. *Synchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool gettWebsiteReverseDnsSync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);

/*! \brief Get Website Reverse DNS. *Asynchronous*
 *
 * Returns the current reverse DNS (PTR record) entries for the website's IP addresses.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool gettWebsiteReverseDnsAsync(char * accessToken,
	int id, 
	void(* handler)(ReverseDnsEntries, Error, void* )
	, void* userData);


/*! \brief Update Website IP DNS. *Synchronous*
 *
 * Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param postWebsiteBuyIpRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postWebsiteBuyIpSync(char * accessToken,
	int id, std::shared_ptr<PostWebsiteBuyIp_request> postWebsiteBuyIpRequest, 
	void(* handler)(PostWebsiteBuyIp_200_response, Error, void* )
	, void* userData);

/*! \brief Update Website IP DNS. *Asynchronous*
 *
 * Updates the reverse DNS hostnames for the website's IP addresses. Provide an `ips` object mapping each IP address to its desired hostname.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param postWebsiteBuyIpRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postWebsiteBuyIpAsync(char * accessToken,
	int id, std::shared_ptr<PostWebsiteBuyIp_request> postWebsiteBuyIpRequest, 
	void(* handler)(PostWebsiteBuyIp_200_response, Error, void* )
	, void* userData);


/*! \brief Request Website Migration. *Synchronous*
 *
 * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param postWebsiteMigrationRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postWebsiteMigrationSync(char * accessToken,
	int id, std::shared_ptr<PostWebsiteMigration_request> postWebsiteMigrationRequest, 
	void(* handler)(PostWebsiteMigration_200_response, Error, void* )
	, void* userData);

/*! \brief Request Website Migration. *Asynchronous*
 *
 * Submits a website migration request from your current hosting provider to InterServer. Provide the credentials and details for your current host so our team can perform the migration. A support ticket is created to track the migration progress; use the returned `ticket` ID with `/tickets/{id}` to monitor status.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param postWebsiteMigrationRequest  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postWebsiteMigrationAsync(char * accessToken,
	int id, std::shared_ptr<PostWebsiteMigration_request> postWebsiteMigrationRequest, 
	void(* handler)(PostWebsiteMigration_200_response, Error, void* )
	, void* userData);


/*! \brief Update Website Reverse DNS. *Synchronous*
 *
 * Updates the reverse DNS entries for each of the IP addresses for the website.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postWebsitesReverseDnsSync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);

/*! \brief Update Website Reverse DNS. *Asynchronous*
 *
 * Updates the reverse DNS entries for each of the IP addresses for the website.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param reverseDnsEntries  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool postWebsitesReverseDnsAsync(char * accessToken,
	int id, std::shared_ptr<ReverseDnsEntries> reverseDnsEntries, 
	void(* handler)(TextResponse, Error, void* )
	, void* userData);


/*! \brief Validate Webhosting Order. *Synchronous*
 *
 * Validates a webhosting order before placing it.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putWebsitesSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Validate Webhosting Order. *Asynchronous*
 *
 * Validates a webhosting order before placing it.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool putWebsitesAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update Website Order. *Synchronous*
 *
 * Updates settings on a webhosting order.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateWebsiteInfoSync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);

/*! \brief Update Website Order. *Asynchronous*
 *
 * Updates settings on a webhosting order.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateWebsiteInfoAsync(char * accessToken,
	std::string id, 
	void(* handler)(SuccessTextResponse, Error, void* )
	, void* userData);


/*! \brief Cancel Website. *Synchronous*
 *
 * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool webhostingCancelSync(char * accessToken,
	std::string id, 
	void(* handler)(WebhostingCancel_200_response, Error, void* )
	, void* userData);

/*! \brief Cancel Website. *Asynchronous*
 *
 * Cancels a webhosting service. The service will be scheduled for termination and all hosted content will be removed. This action cannot be undone.
 * \param id The website service ID. Use `website_id` from `GET /websites`. *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool webhostingCancelAsync(char * accessToken,
	std::string id, 
	void(* handler)(WebhostingCancel_200_response, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://my.interserver.net/apiv2";
	}
};
/** @}*/

}
}
#endif /* WebhostingManager_H_ */
